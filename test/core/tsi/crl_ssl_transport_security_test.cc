// Copyright 2021 gRPC authors.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <grpc/grpc.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/string_util.h>

#include "src/core/lib/iomgr/load_file.h"
#include "src/core/lib/security/security_connector/security_connector.h"
#include "src/core/tsi/ssl_transport_security.h"
#include "src/core/tsi/transport_security.h"
#include "src/core/tsi/transport_security_interface.h"
#include "test/core/tsi/transport_security_test_lib.h"
#include "test/core/util/test_config.h"

extern "C" {
#include <openssl/crypto.h>
#include <openssl/pem.h>
}

namespace {

const int kSslTsiTestRevokedKeyCertPairsNum = 1;
const int kSslTsiTestValidKeyCertPairsNum = 1;
const char* kSslTsiTestCrlSupportedCredentialsDir = "test/core/tsi/test_creds/";

class CrlSslTransportSecurityTest
    : public testing::TestWithParam<tsi_tls_version> {
 protected:
  // A tsi_test_fixture implementation.
  class SslTsiTestFixture {
   public:
    static SslTsiTestFixture* Create(bool use_revoked_server_cert,
                                     bool use_revoked_client_cert) {
      // auto* fixture = static_cast<SslTsiTestFixture*>(
      //     gpr_malloc(sizeof(SslTsiTestFixture)));
      // new (fixture)
      //     SslTsiTestFixture(use_revoked_server_cert,
      //     use_revoked_client_cert);
      SslTsiTestFixture* fixture = new SslTsiTestFixture(
          use_revoked_server_cert, use_revoked_client_cert);
      return fixture;
    }

    void Run() {
      tsi_test_do_handshake(&base_);
      tsi_test_fixture_destroy(&base_);
    }

   private:
    SslTsiTestFixture(bool use_revoked_server_cert,
                      bool use_revoked_client_cert)
        : use_revoked_server_cert_(use_revoked_server_cert),
          use_revoked_client_cert_(use_revoked_client_cert) {
      tsi_test_fixture_init(&base_);
      base_.test_unused_bytes = true;
      base_.vtable = &kVtable;
      // Load cert data.
      revoked_pem_key_cert_pairs_ = static_cast<tsi_ssl_pem_key_cert_pair*>(
          gpr_malloc(sizeof(tsi_ssl_pem_key_cert_pair) *
                     kSslTsiTestRevokedKeyCertPairsNum));
      revoked_pem_key_cert_pairs_[0].private_key = LoadFile(
          absl::StrCat(kSslTsiTestCrlSupportedCredentialsDir, "revoked.key"));
      revoked_pem_key_cert_pairs_[0].cert_chain = LoadFile(
          absl::StrCat(kSslTsiTestCrlSupportedCredentialsDir, "revoked.pem"));
      valid_pem_key_cert_pairs_ = static_cast<tsi_ssl_pem_key_cert_pair*>(
          gpr_malloc(sizeof(tsi_ssl_pem_key_cert_pair) *
                     kSslTsiTestValidKeyCertPairsNum));
      valid_pem_key_cert_pairs_[0].private_key = LoadFile(
          absl::StrCat(kSslTsiTestCrlSupportedCredentialsDir, "valid.key"));
      valid_pem_key_cert_pairs_[0].cert_chain = LoadFile(
          absl::StrCat(kSslTsiTestCrlSupportedCredentialsDir, "valid.pem"));
      root_cert_ = LoadFile(
          absl::StrCat(kSslTsiTestCrlSupportedCredentialsDir, "ca.pem"));
      root_store_ = tsi_ssl_root_certs_store_create(root_cert_);
      GPR_ASSERT(root_store_ != nullptr);
    }

    ~SslTsiTestFixture() {
      for (size_t i = 0; i < kSslTsiTestValidKeyCertPairsNum; i++) {
        PemKeyCertPairDestroy(valid_pem_key_cert_pairs_[i]);
      }
      gpr_free(valid_pem_key_cert_pairs_);
      for (size_t i = 0; i < kSslTsiTestRevokedKeyCertPairsNum; i++) {
        PemKeyCertPairDestroy(revoked_pem_key_cert_pairs_[i]);
      }
      gpr_free(revoked_pem_key_cert_pairs_);
      gpr_free(root_cert_);
      tsi_ssl_root_certs_store_destroy(root_store_);
      tsi_ssl_server_handshaker_factory_unref(server_handshaker_factory_);
      tsi_ssl_client_handshaker_factory_unref(client_handshaker_factory_);
    }

    static void SetupHandshakers(tsi_test_fixture* fixture) {
      GPR_ASSERT(fixture != nullptr);
      auto* self = reinterpret_cast<SslTsiTestFixture*>(fixture);
      self->SetupHandshakers();
    }

    void SetupHandshakers() {
      // Create client handshaker factory.
      tsi_ssl_client_handshaker_options client_options;
      client_options.pem_root_certs = root_cert_;
      if (use_revoked_client_cert_) {
        client_options.pem_key_cert_pair = revoked_pem_key_cert_pairs_;
      } else {
        client_options.pem_key_cert_pair = valid_pem_key_cert_pairs_;
      }
      client_options.crl_directory = kSslTsiTestCrlSupportedCredentialsDir;
      client_options.root_store = root_store_;
      client_options.min_tls_version = GetParam();
      client_options.max_tls_version = GetParam();
      EXPECT_EQ(tsi_create_ssl_client_handshaker_factory_with_options(
                    &client_options, &client_handshaker_factory_),
                TSI_OK);
      // Create server handshaker factory.
      tsi_ssl_server_handshaker_options server_options;
      if (use_revoked_server_cert_) {
        server_options.pem_key_cert_pairs = revoked_pem_key_cert_pairs_;
        server_options.num_key_cert_pairs = kSslTsiTestRevokedKeyCertPairsNum;
      } else {
        server_options.pem_key_cert_pairs = valid_pem_key_cert_pairs_;
        server_options.num_key_cert_pairs = kSslTsiTestValidKeyCertPairsNum;
      }
      server_options.pem_client_root_certs = root_cert_;
      server_options.crl_directory = kSslTsiTestCrlSupportedCredentialsDir;
      server_options.client_certificate_request =
          TSI_REQUEST_AND_REQUIRE_CLIENT_CERTIFICATE_AND_VERIFY;
      server_options.session_ticket_key = nullptr;
      server_options.session_ticket_key_size = 0;
      server_options.min_tls_version = GetParam();
      server_options.max_tls_version = GetParam();
      EXPECT_EQ(tsi_create_ssl_server_handshaker_factory_with_options(
                    &server_options, &server_handshaker_factory_),
                TSI_OK);
      // Create server and client handshakers.
      EXPECT_EQ(
          tsi_ssl_client_handshaker_factory_create_handshaker(
              client_handshaker_factory_, nullptr, &base_.client_handshaker),
          TSI_OK);
      EXPECT_EQ(tsi_ssl_server_handshaker_factory_create_handshaker(
                    server_handshaker_factory_, &base_.server_handshaker),
                TSI_OK);
    }

    static void CheckHandshakerPeers(tsi_test_fixture* fixture) {
      GPR_ASSERT(fixture != nullptr);
      auto* self = reinterpret_cast<SslTsiTestFixture*>(fixture);
      self->CheckHandshakerPeers();
    }

    void CheckHandshakerPeers() {
      // For OpenSSL versions >= 1.1, revocation enforcement is enabled and
      // revoked certs should be denied.
      //
      // For OpenSSL versions < 1.1, TLS 1.3 is not supported, so the
      // client-side handshake should succeed precisely when the server-side
      // handshake succeeds.
      bool expect_server_success;
      bool expect_client_success;
      if (OPENSSL_VERSION_NUMBER >= 0x10100000) {
        expect_server_success =
            !(use_revoked_server_cert_ || use_revoked_client_cert_);
        expect_client_success = GetParam() == tsi_tls_version::TSI_TLS1_2
                                    ? expect_server_success
                                    : !use_revoked_server_cert_;
      } else {
        expect_client_success = expect_server_success;
      }
      tsi_peer peer;
      std::string log = "base_.client_result: ";
      log += base_.client_result == nullptr ? "nullptr" : "addr";
      log += ". base_.server_result ";
      log += base_.server_result == nullptr ? "nullptr" : "addr";
      gpr_log(GPR_INFO, "%s", log.c_str());

      if (expect_client_success) {
        EXPECT_EQ(
            tsi_handshaker_result_extract_peer(base_.client_result, &peer),
            TSI_OK);
        tsi_peer_destruct(&peer);
      } else {
        EXPECT_EQ(base_.client_result, nullptr);
      }
      if (expect_server_success) {
        EXPECT_EQ(
            tsi_handshaker_result_extract_peer(base_.server_result, &peer),
            TSI_OK);
        tsi_peer_destruct(&peer);
      } else {
        EXPECT_EQ(base_.server_result, nullptr);
      }
    }

    static void PemKeyCertPairDestroy(tsi_ssl_pem_key_cert_pair kp) {
      gpr_free(const_cast<char*>(kp.private_key));
      gpr_free(const_cast<char*>(kp.cert_chain));
    }

    static void Destruct(tsi_test_fixture* fixture) {
      auto* self = reinterpret_cast<SslTsiTestFixture*>(fixture);
      self->~SslTsiTestFixture();
      delete self;
    }

    static char* LoadFile(absl::string_view file_path) {
      grpc_slice slice;
      GPR_ASSERT(grpc_load_file(file_path.data(), 1, &slice) ==
                 GRPC_ERROR_NONE);
      char* data = grpc_slice_to_c_string(slice);
      grpc_slice_unref(slice);
      return data;
    }

    static struct tsi_test_fixture_vtable kVtable;

    tsi_test_fixture base_;
    bool use_revoked_server_cert_;
    bool use_revoked_client_cert_;
    char* root_cert_;
    tsi_ssl_root_certs_store* root_store_;
    tsi_ssl_pem_key_cert_pair* revoked_pem_key_cert_pairs_;
    tsi_ssl_pem_key_cert_pair* valid_pem_key_cert_pairs_;
    tsi_ssl_server_handshaker_factory* server_handshaker_factory_;
    tsi_ssl_client_handshaker_factory* client_handshaker_factory_;
  };
};

struct tsi_test_fixture_vtable
    CrlSslTransportSecurityTest::SslTsiTestFixture::kVtable = {
        &CrlSslTransportSecurityTest::SslTsiTestFixture::SetupHandshakers,
        &CrlSslTransportSecurityTest::SslTsiTestFixture::CheckHandshakerPeers,
        &CrlSslTransportSecurityTest::SslTsiTestFixture::Destruct};

TEST_P(CrlSslTransportSecurityTest, RevokedServerCert) {
  auto* fixture = SslTsiTestFixture::Create(/*use_revoked_server_cert=*/true,
                                            /*use_revoked_client_cert=*/false);
  fixture->Run();
}

TEST_P(CrlSslTransportSecurityTest, RevokedClientCert) {
  auto* fixture = SslTsiTestFixture::Create(/*use_revoked_server_cert=*/false,
                                            /*use_revoked_client_cert=*/true);
  fixture->Run();
}

TEST_P(CrlSslTransportSecurityTest, ValidCerts) {
  auto* fixture = SslTsiTestFixture::Create(/*use_revoked_server_cert=*/false,
                                            /*use_revoked_client_cert=*/false);
  fixture->Run();
}

std::string TestNameSuffix(
    const ::testing::TestParamInfo<tsi_tls_version>& version) {
  if (version.param == tsi_tls_version::TSI_TLS1_2) return "TLS_1_2";
  GPR_ASSERT(version.param == tsi_tls_version::TSI_TLS1_3);
  return "TLS_1_3";
}

INSTANTIATE_TEST_SUITE_P(TLSVersionsTest, CrlSslTransportSecurityTest,
                         testing::Values(tsi_tls_version::TSI_TLS1_2,
                                         tsi_tls_version::TSI_TLS1_3),
                         &TestNameSuffix);

}  // namespace

int main(int argc, char** argv) {
  grpc::testing::TestEnvironment env(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}