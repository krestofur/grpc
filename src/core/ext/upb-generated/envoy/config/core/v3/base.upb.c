/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/base.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/backoff.upb.h"
#include "envoy/config/core/v3/http_uri.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "envoy/type/v3/semantic_version.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/struct.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "xds/core/v3/context_params.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_field envoy_config_core_v3_Locality__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 32), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Locality_msginit = {
  NULL,
  &envoy_config_core_v3_Locality__fields[0],
  UPB_SIZE(24, 48), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_BuildVersion_submsgs[2] = {
  {.submsg = &envoy_type_v3_SemanticVersion_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_BuildVersion__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_BuildVersion_msginit = {
  &envoy_config_core_v3_BuildVersion_submsgs[0],
  &envoy_config_core_v3_BuildVersion__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Extension_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_BuildVersion_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Extension__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(20, 40), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(28, 56), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(1, 1), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Extension_msginit = {
  &envoy_config_core_v3_Extension_submsgs[0],
  &envoy_config_core_v3_Extension__fields[0],
  UPB_SIZE(32, 64), 5, _UPB_MSGEXT_NONE, 5, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Node_submsgs[6] = {
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_BuildVersion_msginit},
  {.submsg = &envoy_config_core_v3_Extension_msginit},
  {.submsg = &envoy_config_core_v3_Locality_msginit},
  {.submsg = &envoy_config_core_v3_Node_DynamicParametersEntry_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Node__fields[11] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(28, 56), 1, 5, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(32, 64), 2, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(20, 40), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(52, 104), UPB_SIZE(-61, -121), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(52, 104), UPB_SIZE(-61, -121), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(36, 72), 0, 2, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {10, UPB_SIZE(40, 80), 0, 0, 9, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {11, UPB_SIZE(44, 88), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {12, UPB_SIZE(48, 96), 0, 4, 11, _UPB_MODE_MAP | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Node_msginit = {
  &envoy_config_core_v3_Node_submsgs[0],
  &envoy_config_core_v3_Node__fields[0],
  UPB_SIZE(64, 128), 11, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Node_DynamicParametersEntry_submsgs[1] = {
  {.submsg = &xds_core_v3_ContextParams_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Node_DynamicParametersEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Node_DynamicParametersEntry_msginit = {
  &envoy_config_core_v3_Node_DynamicParametersEntry_submsgs[0],
  &envoy_config_core_v3_Node_DynamicParametersEntry__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Metadata_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_Metadata_FilterMetadataEntry_msginit},
  {.submsg = &envoy_config_core_v3_Metadata_TypedFilterMetadataEntry_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Metadata__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_MAP | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 1, 11, _UPB_MODE_MAP | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Metadata_msginit = {
  &envoy_config_core_v3_Metadata_submsgs[0],
  &envoy_config_core_v3_Metadata__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Metadata_FilterMetadataEntry_submsgs[1] = {
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Metadata_FilterMetadataEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Metadata_FilterMetadataEntry_msginit = {
  &envoy_config_core_v3_Metadata_FilterMetadataEntry_submsgs[0],
  &envoy_config_core_v3_Metadata_FilterMetadataEntry__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_Metadata_TypedFilterMetadataEntry_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_Metadata_TypedFilterMetadataEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_Metadata_TypedFilterMetadataEntry_msginit = {
  &envoy_config_core_v3_Metadata_TypedFilterMetadataEntry_submsgs[0],
  &envoy_config_core_v3_Metadata_TypedFilterMetadataEntry__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_RuntimeUInt32__fields[2] = {
  {2, UPB_SIZE(0, 0), 0, 0, 13, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RuntimeUInt32_msginit = {
  NULL,
  &envoy_config_core_v3_RuntimeUInt32__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 0, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_RuntimePercent_submsgs[1] = {
  {.submsg = &envoy_type_v3_Percent_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_RuntimePercent__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RuntimePercent_msginit = {
  &envoy_config_core_v3_RuntimePercent_submsgs[0],
  &envoy_config_core_v3_RuntimePercent__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_RuntimeDouble__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 1, _UPB_MODE_SCALAR | (_UPB_REP_8BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RuntimeDouble_msginit = {
  NULL,
  &envoy_config_core_v3_RuntimeDouble__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_RuntimeFeatureFlag_submsgs[1] = {
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_RuntimeFeatureFlag__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RuntimeFeatureFlag_msginit = {
  &envoy_config_core_v3_RuntimeFeatureFlag_submsgs[0],
  &envoy_config_core_v3_RuntimeFeatureFlag__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_QueryParameter__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_QueryParameter_msginit = {
  NULL,
  &envoy_config_core_v3_QueryParameter__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_HeaderValue__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_HeaderValue_msginit = {
  NULL,
  &envoy_config_core_v3_HeaderValue__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_HeaderValueOption_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_HeaderValue_msginit},
  {.submsg = &google_protobuf_BoolValue_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_HeaderValueOption__fields[3] = {
  {1, UPB_SIZE(8, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 16), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_HeaderValueOption_msginit = {
  &envoy_config_core_v3_HeaderValueOption_submsgs[0],
  &envoy_config_core_v3_HeaderValueOption__fields[0],
  UPB_SIZE(16, 24), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_HeaderMap_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_HeaderValue_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_HeaderMap__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_HeaderMap_msginit = {
  &envoy_config_core_v3_HeaderMap_submsgs[0],
  &envoy_config_core_v3_HeaderMap__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_field envoy_config_core_v3_WatchedDirectory__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_WatchedDirectory_msginit = {
  NULL,
  &envoy_config_core_v3_WatchedDirectory__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_field envoy_config_core_v3_DataSource__fields[4] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 12, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_DataSource_msginit = {
  NULL,
  &envoy_config_core_v3_DataSource__fields[0],
  UPB_SIZE(16, 32), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_RetryPolicy_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_BackoffStrategy_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_RetryPolicy__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RetryPolicy_msginit = {
  &envoy_config_core_v3_RetryPolicy_submsgs[0],
  &envoy_config_core_v3_RetryPolicy__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_RemoteDataSource_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_HttpUri_msginit},
  {.submsg = &envoy_config_core_v3_RetryPolicy_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_RemoteDataSource__fields[3] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 32), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RemoteDataSource_msginit = {
  &envoy_config_core_v3_RemoteDataSource_submsgs[0],
  &envoy_config_core_v3_RemoteDataSource__fields[0],
  UPB_SIZE(24, 48), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_AsyncDataSource_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_RemoteDataSource_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_AsyncDataSource__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_AsyncDataSource_msginit = {
  &envoy_config_core_v3_AsyncDataSource_submsgs[0],
  &envoy_config_core_v3_AsyncDataSource__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_TransportSocket_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_TransportSocket__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_TransportSocket_msginit = {
  &envoy_config_core_v3_TransportSocket_submsgs[0],
  &envoy_config_core_v3_TransportSocket__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_core_v3_RuntimeFractionalPercent_submsgs[1] = {
  {.submsg = &envoy_type_v3_FractionalPercent_msginit},
};

static const upb_msglayout_field envoy_config_core_v3_RuntimeFractionalPercent__fields[2] = {
  {1, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_RuntimeFractionalPercent_msginit = {
  &envoy_config_core_v3_RuntimeFractionalPercent_submsgs[0],
  &envoy_config_core_v3_RuntimeFractionalPercent__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_ControlPlane__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_core_v3_ControlPlane_msginit = {
  NULL,
  &envoy_config_core_v3_ControlPlane__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout *messages_layout[24] = {
  &envoy_config_core_v3_Locality_msginit,
  &envoy_config_core_v3_BuildVersion_msginit,
  &envoy_config_core_v3_Extension_msginit,
  &envoy_config_core_v3_Node_msginit,
  &envoy_config_core_v3_Node_DynamicParametersEntry_msginit,
  &envoy_config_core_v3_Metadata_msginit,
  &envoy_config_core_v3_Metadata_FilterMetadataEntry_msginit,
  &envoy_config_core_v3_Metadata_TypedFilterMetadataEntry_msginit,
  &envoy_config_core_v3_RuntimeUInt32_msginit,
  &envoy_config_core_v3_RuntimePercent_msginit,
  &envoy_config_core_v3_RuntimeDouble_msginit,
  &envoy_config_core_v3_RuntimeFeatureFlag_msginit,
  &envoy_config_core_v3_QueryParameter_msginit,
  &envoy_config_core_v3_HeaderValue_msginit,
  &envoy_config_core_v3_HeaderValueOption_msginit,
  &envoy_config_core_v3_HeaderMap_msginit,
  &envoy_config_core_v3_WatchedDirectory_msginit,
  &envoy_config_core_v3_DataSource_msginit,
  &envoy_config_core_v3_RetryPolicy_msginit,
  &envoy_config_core_v3_RemoteDataSource_msginit,
  &envoy_config_core_v3_AsyncDataSource_msginit,
  &envoy_config_core_v3_TransportSocket_msginit,
  &envoy_config_core_v3_RuntimeFractionalPercent_msginit,
  &envoy_config_core_v3_ControlPlane_msginit,
};

const upb_msglayout_file envoy_config_core_v3_base_proto_upb_file_layout = {
  messages_layout,
  NULL,
  24,
  0,
};

#include "upb/port_undef.inc"

