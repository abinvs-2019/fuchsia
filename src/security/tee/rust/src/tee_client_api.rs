// Copyright 2022 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(dead_code)]

#[link(name = "tee-client-api")]
extern "C" {}

/* automatically generated by rust-bindgen */

pub const _STDINT_H: u32 = 1;
pub const _FEATURES_H: u32 = 1;
pub const _DEFAULT_SOURCE: u32 = 1;
pub const __USE_ISOC11: u32 = 1;
pub const __USE_ISOC99: u32 = 1;
pub const __USE_ISOC95: u32 = 1;
pub const __USE_POSIX_IMPLICITLY: u32 = 1;
pub const _POSIX_SOURCE: u32 = 1;
pub const _POSIX_C_SOURCE: u32 = 200809;
pub const __USE_POSIX: u32 = 1;
pub const __USE_POSIX2: u32 = 1;
pub const __USE_POSIX199309: u32 = 1;
pub const __USE_POSIX199506: u32 = 1;
pub const __USE_XOPEN2K: u32 = 1;
pub const __USE_XOPEN2K8: u32 = 1;
pub const _ATFILE_SOURCE: u32 = 1;
pub const __USE_MISC: u32 = 1;
pub const __USE_ATFILE: u32 = 1;
pub const __USE_FORTIFY_LEVEL: u32 = 0;
pub const _STDC_PREDEF_H: u32 = 1;
pub const __STDC_IEC_559__: u32 = 1;
pub const __STDC_IEC_559_COMPLEX__: u32 = 1;
pub const __STDC_ISO_10646__: u32 = 201605;
pub const __STDC_NO_THREADS__: u32 = 1;
pub const __GNU_LIBRARY__: u32 = 6;
pub const __GLIBC__: u32 = 2;
pub const __GLIBC_MINOR__: u32 = 24;
pub const _SYS_CDEFS_H: u32 = 1;
pub const __WORDSIZE: u32 = 64;
pub const __WORDSIZE_TIME64_COMPAT32: u32 = 1;
pub const __SYSCALL_WORDSIZE: u32 = 64;
pub const _BITS_WCHAR_H: u32 = 1;
pub const INT8_MIN: i32 = -128;
pub const INT16_MIN: i32 = -32768;
pub const INT32_MIN: i32 = -2147483648;
pub const INT8_MAX: u32 = 127;
pub const INT16_MAX: u32 = 32767;
pub const INT32_MAX: u32 = 2147483647;
pub const UINT8_MAX: u32 = 255;
pub const UINT16_MAX: u32 = 65535;
pub const UINT32_MAX: u32 = 4294967295;
pub const INT_LEAST8_MIN: i32 = -128;
pub const INT_LEAST16_MIN: i32 = -32768;
pub const INT_LEAST32_MIN: i32 = -2147483648;
pub const INT_LEAST8_MAX: u32 = 127;
pub const INT_LEAST16_MAX: u32 = 32767;
pub const INT_LEAST32_MAX: u32 = 2147483647;
pub const UINT_LEAST8_MAX: u32 = 255;
pub const UINT_LEAST16_MAX: u32 = 65535;
pub const UINT_LEAST32_MAX: u32 = 4294967295;
pub const INT_FAST8_MIN: i32 = -128;
pub const INT_FAST16_MIN: i64 = -9223372036854775808;
pub const INT_FAST32_MIN: i64 = -9223372036854775808;
pub const INT_FAST8_MAX: u32 = 127;
pub const INT_FAST16_MAX: u64 = 9223372036854775807;
pub const INT_FAST32_MAX: u64 = 9223372036854775807;
pub const UINT_FAST8_MAX: u32 = 255;
pub const UINT_FAST16_MAX: i32 = -1;
pub const UINT_FAST32_MAX: i32 = -1;
pub const INTPTR_MIN: i64 = -9223372036854775808;
pub const INTPTR_MAX: u64 = 9223372036854775807;
pub const UINTPTR_MAX: i32 = -1;
pub const PTRDIFF_MIN: i64 = -9223372036854775808;
pub const PTRDIFF_MAX: u64 = 9223372036854775807;
pub const SIG_ATOMIC_MIN: i32 = -2147483648;
pub const SIG_ATOMIC_MAX: u32 = 2147483647;
pub const SIZE_MAX: i32 = -1;
pub const WINT_MIN: u32 = 0;
pub const WINT_MAX: u32 = 4294967295;
pub const true_: u32 = 1;
pub const false_: u32 = 0;
pub const __bool_true_false_are_defined: u32 = 1;
pub const ZX_OK: u32 = 0;
pub const ZX_ERR_INTERNAL: i32 = -1;
pub const ZX_ERR_NOT_SUPPORTED: i32 = -2;
pub const ZX_ERR_NO_RESOURCES: i32 = -3;
pub const ZX_ERR_NO_MEMORY: i32 = -4;
pub const ZX_ERR_INTERNAL_INTR_RETRY: i32 = -6;
pub const ZX_ERR_INVALID_ARGS: i32 = -10;
pub const ZX_ERR_BAD_HANDLE: i32 = -11;
pub const ZX_ERR_WRONG_TYPE: i32 = -12;
pub const ZX_ERR_BAD_SYSCALL: i32 = -13;
pub const ZX_ERR_OUT_OF_RANGE: i32 = -14;
pub const ZX_ERR_BUFFER_TOO_SMALL: i32 = -15;
pub const ZX_ERR_BAD_STATE: i32 = -20;
pub const ZX_ERR_TIMED_OUT: i32 = -21;
pub const ZX_ERR_SHOULD_WAIT: i32 = -22;
pub const ZX_ERR_CANCELED: i32 = -23;
pub const ZX_ERR_PEER_CLOSED: i32 = -24;
pub const ZX_ERR_NOT_FOUND: i32 = -25;
pub const ZX_ERR_ALREADY_EXISTS: i32 = -26;
pub const ZX_ERR_ALREADY_BOUND: i32 = -27;
pub const ZX_ERR_UNAVAILABLE: i32 = -28;
pub const ZX_ERR_ACCESS_DENIED: i32 = -30;
pub const ZX_ERR_IO: i32 = -40;
pub const ZX_ERR_IO_REFUSED: i32 = -41;
pub const ZX_ERR_IO_DATA_INTEGRITY: i32 = -42;
pub const ZX_ERR_IO_DATA_LOSS: i32 = -43;
pub const ZX_ERR_IO_NOT_PRESENT: i32 = -44;
pub const ZX_ERR_IO_OVERRUN: i32 = -45;
pub const ZX_ERR_IO_MISSED_DEADLINE: i32 = -46;
pub const ZX_ERR_IO_INVALID: i32 = -47;
pub const ZX_ERR_BAD_PATH: i32 = -50;
pub const ZX_ERR_NOT_DIR: i32 = -51;
pub const ZX_ERR_NOT_FILE: i32 = -52;
pub const ZX_ERR_FILE_BIG: i32 = -53;
pub const ZX_ERR_NO_SPACE: i32 = -54;
pub const ZX_ERR_NOT_EMPTY: i32 = -55;
pub const ZX_ERR_STOP: i32 = -60;
pub const ZX_ERR_NEXT: i32 = -61;
pub const ZX_ERR_ASYNC: i32 = -62;
pub const ZX_ERR_PROTOCOL_NOT_SUPPORTED: i32 = -70;
pub const ZX_ERR_ADDRESS_UNREACHABLE: i32 = -71;
pub const ZX_ERR_ADDRESS_IN_USE: i32 = -72;
pub const ZX_ERR_NOT_CONNECTED: i32 = -73;
pub const ZX_ERR_CONNECTION_REFUSED: i32 = -74;
pub const ZX_ERR_CONNECTION_RESET: i32 = -75;
pub const ZX_ERR_CONNECTION_ABORTED: i32 = -76;
pub const TEEC_NUM_PARAMS_MAX: u32 = 4;
pub const TEEC_SUCCESS: u32 = 0;
pub const TEEC_ERROR_GENERIC: u32 = 4294901760;
pub const TEEC_ERROR_ACCESS_DENIED: u32 = 4294901761;
pub const TEEC_ERROR_CANCEL: u32 = 4294901762;
pub const TEEC_ERROR_ACCESS_CONFLICT: u32 = 4294901763;
pub const TEEC_ERROR_EXCESS_DATA: u32 = 4294901764;
pub const TEEC_ERROR_BAD_FORMAT: u32 = 4294901765;
pub const TEEC_ERROR_BAD_PARAMETERS: u32 = 4294901766;
pub const TEEC_ERROR_BAD_STATE: u32 = 4294901767;
pub const TEEC_ERROR_ITEM_NOT_FOUND: u32 = 4294901768;
pub const TEEC_ERROR_NOT_IMPLEMENTED: u32 = 4294901769;
pub const TEEC_ERROR_NOT_SUPPORTED: u32 = 4294901770;
pub const TEEC_ERROR_NO_DATA: u32 = 4294901771;
pub const TEEC_ERROR_OUT_OF_MEMORY: u32 = 4294901772;
pub const TEEC_ERROR_BUSY: u32 = 4294901773;
pub const TEEC_ERROR_COMMUNICATION: u32 = 4294901774;
pub const TEEC_ERROR_SECURITY: u32 = 4294901775;
pub const TEEC_ERROR_SHORT_BUFFER: u32 = 4294901776;
pub const TEE_ERROR_EXTERNAL_CANCEL: u32 = 4294901777;
pub const TEE_ERROR_OVERFLOW: u32 = 4294914063;
pub const TEE_ERROR_TARGET_DEAD: u32 = 4294914084;
pub const TEEC_ERROR_TARGET_DEAD: u32 = 4294914084;
pub const TEE_ERROR_STORAGE_NO_SPACE: u32 = 4294914113;
pub const TEEC_ORIGIN_API: u32 = 1;
pub const TEEC_ORIGIN_COMMS: u32 = 2;
pub const TEEC_ORIGIN_TEE: u32 = 3;
pub const TEEC_ORIGIN_TRUSTED_APP: u32 = 4;
pub const TEEC_MEM_INPUT: u32 = 1;
pub const TEEC_MEM_OUTPUT: u32 = 2;
pub const TEEC_NONE: u32 = 0;
pub const TEEC_VALUE_INPUT: u32 = 1;
pub const TEEC_VALUE_OUTPUT: u32 = 2;
pub const TEEC_VALUE_INOUT: u32 = 3;
pub const TEEC_MEMREF_TEMP_INPUT: u32 = 5;
pub const TEEC_MEMREF_TEMP_OUTPUT: u32 = 6;
pub const TEEC_MEMREF_TEMP_INOUT: u32 = 7;
pub const TEEC_MEMREF_WHOLE: u32 = 12;
pub const TEEC_MEMREF_PARTIAL_INPUT: u32 = 13;
pub const TEEC_MEMREF_PARTIAL_OUTPUT: u32 = 14;
pub const TEEC_MEMREF_PARTIAL_INOUT: u32 = 15;
pub const TEEC_LOGIN_PUBLIC: u32 = 0;
pub const TEEC_LOGIN_USER: u32 = 1;
pub const TEEC_LOGIN_GROUP: u32 = 2;
pub const TEEC_LOGIN_APPLICATION: u32 = 4;
pub const TEEC_LOGIN_USER_APPLICATION: u32 = 5;
pub const TEEC_LOGIN_GROUP_APPLICATION: u32 = 6;
pub type wchar_t = ::std::os::raw::c_int;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct max_align_t {
    pub __clang_max_align_nonce1: ::std::os::raw::c_longlong,
    pub __bindgen_padding_0: u64,
    pub __clang_max_align_nonce2: f64,
}
pub type int_least8_t = ::std::os::raw::c_schar;
pub type int_least16_t = ::std::os::raw::c_short;
pub type int_least32_t = ::std::os::raw::c_int;
pub type int_least64_t = ::std::os::raw::c_long;
pub type uint_least8_t = ::std::os::raw::c_uchar;
pub type uint_least16_t = ::std::os::raw::c_ushort;
pub type uint_least32_t = ::std::os::raw::c_uint;
pub type uint_least64_t = ::std::os::raw::c_ulong;
pub type int_fast8_t = ::std::os::raw::c_schar;
pub type int_fast16_t = ::std::os::raw::c_long;
pub type int_fast32_t = ::std::os::raw::c_long;
pub type int_fast64_t = ::std::os::raw::c_long;
pub type uint_fast8_t = ::std::os::raw::c_uchar;
pub type uint_fast16_t = ::std::os::raw::c_ulong;
pub type uint_fast32_t = ::std::os::raw::c_ulong;
pub type uint_fast64_t = ::std::os::raw::c_ulong;
pub type intmax_t = ::std::os::raw::c_long;
pub type uintmax_t = ::std::os::raw::c_ulong;
pub type zx_rights_t = u32;
pub type zx_time_t = i64;
pub type zx_duration_t = i64;
pub type zx_ticks_t = u64;
pub const memory_order_memory_order_relaxed: memory_order = 0;
pub const memory_order_memory_order_consume: memory_order = 1;
pub const memory_order_memory_order_acquire: memory_order = 2;
pub const memory_order_memory_order_release: memory_order = 3;
pub const memory_order_memory_order_acq_rel: memory_order = 4;
pub const memory_order_memory_order_seq_cst: memory_order = 5;
pub type memory_order = u32;
extern "C" {
    pub fn atomic_thread_fence(arg1: memory_order);
}
extern "C" {
    pub fn atomic_signal_fence(arg1: memory_order);
}
pub type atomic_bool = u8;
pub type atomic_char = u8;
pub type atomic_schar = u8;
pub type atomic_uchar = u8;
pub type atomic_short = u16;
pub type atomic_ushort = u16;
pub type atomic_int = u32;
pub type atomic_uint = u32;
pub type atomic_long = u64;
pub type atomic_ulong = u64;
pub type atomic_llong = u64;
pub type atomic_ullong = u64;
pub type atomic_char16_t = uint_least16_t;
pub type atomic_char32_t = uint_least32_t;
pub type atomic_wchar_t = wchar_t;
pub type atomic_int_least8_t = int_least8_t;
pub type atomic_uint_least8_t = uint_least8_t;
pub type atomic_int_least16_t = int_least16_t;
pub type atomic_uint_least16_t = uint_least16_t;
pub type atomic_int_least32_t = int_least32_t;
pub type atomic_uint_least32_t = uint_least32_t;
pub type atomic_int_least64_t = int_least64_t;
pub type atomic_uint_least64_t = uint_least64_t;
pub type atomic_int_fast8_t = int_fast8_t;
pub type atomic_uint_fast8_t = uint_fast8_t;
pub type atomic_int_fast16_t = int_fast16_t;
pub type atomic_uint_fast16_t = uint_fast16_t;
pub type atomic_int_fast32_t = int_fast32_t;
pub type atomic_uint_fast32_t = uint_fast32_t;
pub type atomic_int_fast64_t = int_fast64_t;
pub type atomic_uint_fast64_t = uint_fast64_t;
pub type atomic_intptr_t = isize;
pub type atomic_uintptr_t = usize;
pub type atomic_size_t = usize;
pub type atomic_ptrdiff_t = isize;
pub type atomic_intmax_t = intmax_t;
pub type atomic_uintmax_t = uintmax_t;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct atomic_flag {
    pub _Value: atomic_bool,
}
extern "C" {
    pub fn atomic_flag_test_and_set(arg1: *mut atomic_flag) -> bool;
}
extern "C" {
    pub fn atomic_flag_test_and_set_explicit(arg1: *mut atomic_flag, arg2: memory_order) -> bool;
}
extern "C" {
    pub fn atomic_flag_clear(arg1: *mut atomic_flag);
}
extern "C" {
    pub fn atomic_flag_clear_explicit(arg1: *mut atomic_flag, arg2: memory_order);
}
pub type zx_handle_t = u32;
pub type zx_status_t = i32;
pub type zx_clock_t = u32;
pub type zx_signals_t = u32;
pub type zx_koid_t = u64;
pub type zx_txid_t = u32;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct zx_channel_call_args {
    pub wr_bytes: *const ::std::os::raw::c_void,
    pub wr_handles: *const zx_handle_t,
    pub rd_bytes: *mut ::std::os::raw::c_void,
    pub rd_handles: *mut zx_handle_t,
    pub wr_num_bytes: u32,
    pub wr_num_handles: u32,
    pub rd_num_bytes: u32,
    pub rd_num_handles: u32,
}
pub type zx_channel_call_args_t = zx_channel_call_args;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct zx_wait_item {
    pub handle: zx_handle_t,
    pub waitfor: zx_signals_t,
    pub pending: zx_signals_t,
}
pub type zx_wait_item_t = zx_wait_item;
pub type zx_vm_option_t = u32;
pub type zx_vaddr_t = usize;
pub type zx_paddr_t = usize;
pub type zx_paddr32_t = u32;
pub type zx_gpaddr_t = usize;
pub type zx_off_t = u64;
pub type zx_obj_type_t = u32;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct zx_handle_info {
    pub handle: zx_handle_t,
    pub type_: zx_obj_type_t,
    pub rights: zx_rights_t,
    pub unused: u32,
}
pub type zx_handle_info_t = zx_handle_info;
pub type zx_futex_t = atomic_int;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct teec_context_impl {
    pub tee_channel: zx_handle_t,
}
pub type teec_context_impl_t = teec_context_impl;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct teec_session_impl {
    pub session_id: u32,
    pub context_imp: *mut teec_context_impl_t,
}
pub type teec_session_impl_t = teec_session_impl;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct teec_shared_memory_impl {
    pub vmo: zx_handle_t,
    pub mapped_addr: zx_vaddr_t,
    pub mapped_size: usize,
}
pub type teec_shared_memory_impl_t = teec_shared_memory_impl;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct teec_operation_impl {
    pub reserved: ::std::os::raw::c_char,
}
pub type teec_operation_impl_t = teec_operation_impl;
#[doc = " Data Types *"]
pub type TEEC_Result = u32;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_UUID {
    pub timeLow: u32,
    pub timeMid: u16,
    pub timeHiAndVersion: u16,
    pub clockSeqAndNode: [u8; 8usize],
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_Context {
    pub imp: teec_context_impl_t,
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_Session {
    pub imp: teec_session_impl_t,
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_SharedMemory {
    pub buffer: *mut ::std::os::raw::c_void,
    pub size: usize,
    pub flags: u32,
    pub imp: teec_shared_memory_impl_t,
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_TempMemoryReference {
    pub buffer: *mut ::std::os::raw::c_void,
    pub size: usize,
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_RegisteredMemoryReference {
    pub parent: *mut TEEC_SharedMemory,
    pub size: usize,
    pub offset: usize,
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct TEEC_Value {
    pub a: u32,
    pub b: u32,
}
#[repr(C)]
#[derive(Copy, Clone)]
pub union TEEC_Parameter {
    pub tmpref: TEEC_TempMemoryReference,
    pub memref: TEEC_RegisteredMemoryReference,
    pub value: TEEC_Value,
    _bindgen_union_align: [u64; 3usize],
}
#[repr(C)]
#[derive(Copy, Clone)]
pub struct TEEC_Operation {
    pub started: u32,
    pub paramTypes: u32,
    pub params: [TEEC_Parameter; 4usize],
    pub imp: teec_operation_impl_t,
}
extern "C" {
    #[doc = " Functions *"]
    pub fn TEEC_InitializeContext(
        name: *const ::std::os::raw::c_char,
        context: *mut TEEC_Context,
    ) -> TEEC_Result;
}
extern "C" {
    pub fn TEEC_FinalizeContext(context: *mut TEEC_Context);
}
extern "C" {
    pub fn TEEC_RegisterSharedMemory(
        context: *mut TEEC_Context,
        sharedMem: *mut TEEC_SharedMemory,
    ) -> TEEC_Result;
}
extern "C" {
    pub fn TEEC_AllocateSharedMemory(
        context: *mut TEEC_Context,
        sharedMem: *mut TEEC_SharedMemory,
    ) -> TEEC_Result;
}
extern "C" {
    pub fn TEEC_ReleaseSharedMemory(sharedMem: *mut TEEC_SharedMemory);
}
extern "C" {
    pub fn TEEC_OpenSession(
        context: *mut TEEC_Context,
        session: *mut TEEC_Session,
        destination: *const TEEC_UUID,
        connectionMethod: u32,
        connectionData: *const ::std::os::raw::c_void,
        operation: *mut TEEC_Operation,
        returnOrigin: *mut u32,
    ) -> TEEC_Result;
}
extern "C" {
    pub fn TEEC_CloseSession(session: *mut TEEC_Session);
}
extern "C" {
    pub fn TEEC_InvokeCommand(
        session: *mut TEEC_Session,
        commandID: u32,
        operation: *mut TEEC_Operation,
        returnOrigin: *mut u32,
    ) -> TEEC_Result;
}
extern "C" {
    pub fn TEEC_RequestCancellation(operation: *mut TEEC_Operation);
}