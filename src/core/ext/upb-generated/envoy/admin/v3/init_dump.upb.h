/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/init_dump.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_admin_v3_UnreadyTargetsDumps;
struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump;
typedef struct envoy_admin_v3_UnreadyTargetsDumps envoy_admin_v3_UnreadyTargetsDumps;
typedef struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump;
extern const upb_msglayout envoy_admin_v3_UnreadyTargetsDumps_msginit;
extern const upb_msglayout envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit;


/* envoy.admin.v3.UnreadyTargetsDumps */

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps *envoy_admin_v3_UnreadyTargetsDumps_new(upb_arena *arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps *)_upb_msg_new(&envoy_admin_v3_UnreadyTargetsDumps_msginit, arena);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps *envoy_admin_v3_UnreadyTargetsDumps_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v3_UnreadyTargetsDumps *ret = envoy_admin_v3_UnreadyTargetsDumps_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps *envoy_admin_v3_UnreadyTargetsDumps_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v3_UnreadyTargetsDumps *ret = envoy_admin_v3_UnreadyTargetsDumps_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v3_UnreadyTargetsDumps_serialize(const envoy_admin_v3_UnreadyTargetsDumps *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_msginit, arena, len);
}

UPB_INLINE bool envoy_admin_v3_UnreadyTargetsDumps_has_unready_targets_dumps(const envoy_admin_v3_UnreadyTargetsDumps *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* const* envoy_admin_v3_UnreadyTargetsDumps_unready_targets_dumps(const envoy_admin_v3_UnreadyTargetsDumps *msg, size_t *len) { return (const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump** envoy_admin_v3_UnreadyTargetsDumps_mutable_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps *msg, size_t *len) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump** envoy_admin_v3_UnreadyTargetsDumps_resize_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps *msg, size_t len, upb_arena *arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* envoy_admin_v3_UnreadyTargetsDumps_add_unready_targets_dumps(envoy_admin_v3_UnreadyTargetsDumps *msg, upb_arena *arena) {
  struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump* sub = (struct envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump*)_upb_msg_new(&envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.admin.v3.UnreadyTargetsDumps.UnreadyTargetsDump */

UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(upb_arena *arena) {
  return (envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *)_upb_msg_new(&envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit, arena);
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *ret = envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *ret = envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_serialize(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_name(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview const* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_target_names(const envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }

UPB_INLINE void envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_set_name(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE upb_strview* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_mutable_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE upb_strview* envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_resize_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump_add_target_names(envoy_admin_v3_UnreadyTargetsDumps_UnreadyTargetsDump *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(8, 16), UPB_SIZE(3, 4), &val,
      arena);
}

extern const upb_msglayout_file envoy_admin_v3_init_dump_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_INIT_DUMP_PROTO_UPB_H_ */
