/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/tap/v3/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TAP_V3_COMMON_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_TAP_V3_COMMON_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_tap_v3_common_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_TapConfig_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.TapConfig");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_MatchPredicate_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.MatchPredicate");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_MatchPredicate_MatchSet_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.MatchPredicate.MatchSet");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_HttpHeadersMatch_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.HttpHeadersMatch");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_HttpGenericBodyMatch_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.HttpGenericBodyMatch");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.HttpGenericBodyMatch.GenericTextMatch");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_OutputConfig_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.OutputConfig");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_OutputSink_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.OutputSink");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_StreamingAdminSink_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.StreamingAdminSink");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_FilePerTapSink_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.FilePerTapSink");
}

UPB_INLINE const upb_msgdef *envoy_config_tap_v3_StreamingGrpcSink_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_tap_v3_common_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.tap.v3.StreamingGrpcSink");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_TAP_V3_COMMON_PROTO_UPBDEFS_H_ */
