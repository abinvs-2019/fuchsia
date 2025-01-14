// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "tools/kazoo/outputs.h"
#include "tools/kazoo/syscall_library.h"
#include "tools/kazoo/test.h"
#include "tools/kazoo/test_ir_test_go_nonblocking.test.h"
#include "tools/kazoo/test_ir_test_selection.test.h"

namespace {

TEST(GoVdsoKeys, Selection) {
  SyscallLibrary library;
  ASSERT_TRUE(SyscallLibraryLoader::FromJson(k_test_selection, &library));

  Writer writer;
  ASSERT_TRUE(GoVdsoKeys(library, &writer));

  EXPECT_EQ(writer.Out(), R"(// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

package runtime

import "unsafe"

const (
	// vdsoArrayMax is the byte-size of a maximally sized array on this architecture.
	// See cmd/compile/internal/amd64/galign.go arch.MAXWIDTH initialization.
	vdsoArrayMax = 1<<50 - 1
)

var vdsoSymbolKeys = []vdsoSymbolKey{
	{"_zx_selection_futex_requeue", 0xe23bfe61, &vdso_zx_selection_futex_requeue},
	{"_zx_selection_object_wait_one", 0x1046d346, &vdso_zx_selection_object_wait_one},
	{"_zx_selection_ktrace_read", 0x11c0de6f, &vdso_zx_selection_ktrace_read},
	{"_zx_selection_pci_cfg_pio_rw", 0x8d9c8bd4, &vdso_zx_selection_pci_cfg_pio_rw},
	{"_zx_selection_job_set_policy", 0x57d79d6f, &vdso_zx_selection_job_set_policy},
	{"_zx_selection_clock_get", 0xa3c1ed25, &vdso_zx_selection_clock_get},
}

//go:cgo_import_dynamic vdso_zx_selection_futex_requeue zx_selection_futex_requeue
//go:cgo_import_dynamic vdso_zx_selection_object_wait_one zx_selection_object_wait_one
//go:cgo_import_dynamic vdso_zx_selection_ktrace_read zx_selection_ktrace_read
//go:cgo_import_dynamic vdso_zx_selection_pci_cfg_pio_rw zx_selection_pci_cfg_pio_rw
//go:cgo_import_dynamic vdso_zx_selection_job_set_policy zx_selection_job_set_policy
//go:cgo_import_dynamic vdso_zx_selection_clock_get zx_selection_clock_get

//go:linkname vdso_zx_selection_futex_requeue vdso_zx_selection_futex_requeue
//go:linkname vdso_zx_selection_object_wait_one vdso_zx_selection_object_wait_one
//go:linkname vdso_zx_selection_ktrace_read vdso_zx_selection_ktrace_read
//go:linkname vdso_zx_selection_pci_cfg_pio_rw vdso_zx_selection_pci_cfg_pio_rw
//go:linkname vdso_zx_selection_job_set_policy vdso_zx_selection_job_set_policy
//go:linkname vdso_zx_selection_clock_get vdso_zx_selection_clock_get

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_futex_requeue(value_ptr unsafe.Pointer, wake_count uint32, current_value int32, requeue_ptr unsafe.Pointer, requeue_count uint32, new_requeue_owner uint32) int32

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_object_wait_one(handle uint32, signals uint32, deadline int64, observed unsafe.Pointer) int32

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_ktrace_read(handle uint32, data unsafe.Pointer, offset uint32, data_size uint, actual unsafe.Pointer) int32

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_pci_cfg_pio_rw(handle uint32, bus uint8, dev uint8, funk uint8, offset uint8, val unsafe.Pointer, width uint, write uint32) int32

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_job_set_policy(handle uint32, options uint32, topic uint32, policy unsafe.Pointer, policy_size uint32) int32

//go:noescape
//go:nosplit
func vdsoCall_zx_selection_clock_get(clock_id uint32, out unsafe.Pointer) int32

var (
	vdso_zx_selection_futex_requeue uintptr
	vdso_zx_selection_object_wait_one uintptr
	vdso_zx_selection_ktrace_read uintptr
	vdso_zx_selection_pci_cfg_pio_rw uintptr
	vdso_zx_selection_job_set_policy uintptr
	vdso_zx_selection_clock_get uintptr
)
)");
}

TEST(GoVdsoX86Calls, Selection) {
  SyscallLibrary library;
  ASSERT_TRUE(SyscallLibraryLoader::FromJson(k_test_selection, &library));

  Writer writer;
  ASSERT_TRUE(GoVdsoX86Calls(library, &writer));

  EXPECT_EQ(writer.Out(), R"(// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#include "go_asm.h"
#include "go_tls.h"
#include "textflag.h"
#include "funcdata.h"

// func vdsoCall_zx_selection_futex_requeue(value_ptr unsafe.Pointer, wake_count uint32, current_value int32, requeue_ptr unsafe.Pointer, requeue_count uint32, new_requeue_owner uint32) int32
TEXT runtime·vdsoCall_zx_selection_futex_requeue(SB),NOSPLIT,$8-36
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVQ value_ptr+0(FP), DI
	MOVL wake_count+8(FP), SI
	MOVL current_value+12(FP), DX
	MOVQ requeue_ptr+16(FP), CX
	MOVL requeue_count+24(FP), R8
	MOVL new_requeue_owner+28(FP), R9
	MOVQ vdso_zx_selection_futex_requeue(SB), AX
	CALL AX
	MOVL AX, ret+32(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_selection_object_wait_one(handle uint32, signals uint32, deadline int64, observed unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_object_wait_one(SB),NOSPLIT,$8-28
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL handle+0(FP), DI
	MOVL signals+4(FP), SI
	MOVQ deadline+8(FP), DX
	MOVQ observed+16(FP), CX
	MOVQ vdso_zx_selection_object_wait_one(SB), AX
	CALL AX
	MOVL AX, ret+24(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_selection_ktrace_read(handle uint32, data unsafe.Pointer, offset uint32, data_size uint, actual unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_ktrace_read(SB),NOSPLIT,$8-44
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL handle+0(FP), DI
	MOVQ data+8(FP), SI
	MOVL offset+16(FP), DX
	MOVQ data_size+24(FP), CX
	MOVQ actual+32(FP), R8
	MOVQ vdso_zx_selection_ktrace_read(SB), AX
	CALL AX
	MOVL AX, ret+40(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_selection_pci_cfg_pio_rw(handle uint32, bus uint8, dev uint8, funk uint8, offset uint8, val unsafe.Pointer, width uint, write uint32) int32
TEXT runtime·vdsoCall_zx_selection_pci_cfg_pio_rw(SB),NOSPLIT,$40-36
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL handle+0(FP), DI
	MOVQ bus+4(FP), SI
	MOVQ dev+5(FP), DX
	MOVQ funk+6(FP), CX
	MOVQ offset+7(FP), R8
	MOVQ val+8(FP), R9
	MOVQ width+16(FP), R12
	MOVL write+24(FP), R13
	MOVQ SP, BP   // BP is preserved across vsdo call by the x86-64 ABI
	ANDQ $~15, SP // stack alignment for x86-64 ABI
	PUSHQ R13
	PUSHQ R12
	MOVQ vdso_zx_selection_pci_cfg_pio_rw(SB), AX
	CALL AX
	POPQ R12
	POPQ R13
	MOVQ BP, SP
	MOVL AX, ret+32(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_selection_job_set_policy(handle uint32, options uint32, topic uint32, policy unsafe.Pointer, policy_size uint32) int32
TEXT runtime·vdsoCall_zx_selection_job_set_policy(SB),NOSPLIT,$8-36
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL handle+0(FP), DI
	MOVL options+4(FP), SI
	MOVL topic+8(FP), DX
	MOVQ policy+16(FP), CX
	MOVL policy_size+24(FP), R8
	MOVQ vdso_zx_selection_job_set_policy(SB), AX
	CALL AX
	MOVL AX, ret+32(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_selection_clock_get(clock_id uint32, out unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_clock_get(SB),NOSPLIT,$8-20
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL clock_id+0(FP), DI
	MOVQ out+8(FP), SI
	MOVQ vdso_zx_selection_clock_get(SB), AX
	CALL AX
	MOVL AX, ret+16(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

)");
}

TEST(GoVdsoArm64Calls, Selection) {
  SyscallLibrary library;
  ASSERT_TRUE(SyscallLibraryLoader::FromJson(k_test_selection, &library));

  Writer writer;
  ASSERT_TRUE(GoVdsoArm64Calls(library, &writer));

  EXPECT_EQ(writer.Out(), R"(// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#include "go_asm.h"
#include "go_tls.h"
#include "textflag.h"
#include "funcdata.h"

// func vdsoCall_zx_selection_futex_requeue(value_ptr unsafe.Pointer, wake_count uint32, current_value int32, requeue_ptr unsafe.Pointer, requeue_count uint32, new_requeue_owner uint32) int32
TEXT runtime·vdsoCall_zx_selection_futex_requeue(SB),NOSPLIT,$0-36
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVD value_ptr+0(FP), R0
	MOVW wake_count+8(FP), R1
	MOVW current_value+12(FP), R2
	MOVD requeue_ptr+16(FP), R3
	MOVW requeue_count+24(FP), R4
	MOVW new_requeue_owner+28(FP), R5
	BL vdso_zx_selection_futex_requeue(SB)
	MOVW R0, ret+32(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_selection_object_wait_one(handle uint32, signals uint32, deadline int64, observed unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_object_wait_one(SB),NOSPLIT,$0-28
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW handle+0(FP), R0
	MOVW signals+4(FP), R1
	MOVD deadline+8(FP), R2
	MOVD observed+16(FP), R3
	BL vdso_zx_selection_object_wait_one(SB)
	MOVW R0, ret+24(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_selection_ktrace_read(handle uint32, data unsafe.Pointer, offset uint32, data_size uint, actual unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_ktrace_read(SB),NOSPLIT,$0-44
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW handle+0(FP), R0
	MOVD data+8(FP), R1
	MOVW offset+16(FP), R2
	MOVD data_size+24(FP), R3
	MOVD actual+32(FP), R4
	BL vdso_zx_selection_ktrace_read(SB)
	MOVW R0, ret+40(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_selection_pci_cfg_pio_rw(handle uint32, bus uint8, dev uint8, funk uint8, offset uint8, val unsafe.Pointer, width uint, write uint32) int32
TEXT runtime·vdsoCall_zx_selection_pci_cfg_pio_rw(SB),NOSPLIT,$0-68
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW handle+0(FP), R0
	MOVD bus+8(FP), R1
	MOVD dev+16(FP), R2
	MOVD funk+24(FP), R3
	MOVD offset+32(FP), R4
	MOVD val+40(FP), R5
	MOVD width+48(FP), R6
	MOVW write+56(FP), R7
	BL vdso_zx_selection_pci_cfg_pio_rw(SB)
	MOVW R0, ret+64(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_selection_job_set_policy(handle uint32, options uint32, topic uint32, policy unsafe.Pointer, policy_size uint32) int32
TEXT runtime·vdsoCall_zx_selection_job_set_policy(SB),NOSPLIT,$0-36
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW handle+0(FP), R0
	MOVW options+4(FP), R1
	MOVW topic+8(FP), R2
	MOVD policy+16(FP), R3
	MOVW policy_size+24(FP), R4
	BL vdso_zx_selection_job_set_policy(SB)
	MOVW R0, ret+32(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_selection_clock_get(clock_id uint32, out unsafe.Pointer) int32
TEXT runtime·vdsoCall_zx_selection_clock_get(SB),NOSPLIT,$0-20
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW clock_id+0(FP), R0
	MOVD out+8(FP), R1
	BL vdso_zx_selection_clock_get(SB)
	MOVW R0, ret+16(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

)");
}

TEST(GoVdsoX86Calls, SpecialNonBlocking) {
  SyscallLibrary library;
  ASSERT_TRUE(SyscallLibraryLoader::FromJson(k_test_go_nonblocking, &library));

  Writer writer;
  ASSERT_TRUE(GoVdsoX86Calls(library, &writer));

  EXPECT_EQ(writer.Out(), R"(// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#include "go_asm.h"
#include "go_tls.h"
#include "textflag.h"
#include "funcdata.h"

// func vdsoCall_zx_futex_wait(a uint32) int32
TEXT runtime·vdsoCall_zx_futex_wait(SB),NOSPLIT,$8-12
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL a+0(FP), DI
	MOVQ vdso_zx_futex_wait(SB), AX
	CALL AX
	MOVL AX, ret+8(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

// func vdsoCall_zx_nanosleep(a uint32) int32
TEXT runtime·vdsoCall_zx_nanosleep(SB),NOSPLIT,$8-12
	GO_ARGS
	NO_LOCAL_POINTERS
	get_tls(CX)
	MOVQ g(CX), AX
	MOVQ g_m(AX), R14
	PUSHQ R14
	LEAQ ret+0(FP), DX
	MOVQ -8(DX), CX
	MOVQ CX, m_vdsoPC(R14)
	MOVQ DX, m_vdsoSP(R14)
	MOVL a+0(FP), DI
	MOVQ vdso_zx_nanosleep(SB), AX
	CALL AX
	MOVL AX, ret+8(FP)
	POPQ R14
	MOVQ $0, m_vdsoSP(R14)
	RET

)");
}

TEST(GoVdsoArm64Calls, SpecialNonBlocking) {
  SyscallLibrary library;
  ASSERT_TRUE(SyscallLibraryLoader::FromJson(k_test_go_nonblocking, &library));

  Writer writer;
  ASSERT_TRUE(GoVdsoArm64Calls(library, &writer));

  EXPECT_EQ(writer.Out(), R"(// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#include "go_asm.h"
#include "go_tls.h"
#include "textflag.h"
#include "funcdata.h"

// func vdsoCall_zx_futex_wait(a uint32) int32
TEXT runtime·vdsoCall_zx_futex_wait(SB),NOSPLIT,$0-12
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW a+0(FP), R0
	BL vdso_zx_futex_wait(SB)
	MOVW R0, ret+8(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

// func vdsoCall_zx_nanosleep(a uint32) int32
TEXT runtime·vdsoCall_zx_nanosleep(SB),NOSPLIT,$0-12
	GO_ARGS
	NO_LOCAL_POINTERS
	MOVD g_m(g), R21
	MOVD LR, m_vdsoPC(R21)
	DMB $0xe
	MOVD $ret-8(FP), R20 // caller's SP
	MOVD R20, m_vdsoSP(R21)
	MOVW a+0(FP), R0
	BL vdso_zx_nanosleep(SB)
	MOVW R0, ret+8(FP)
	MOVD g_m(g), R21
	MOVD $0, m_vdsoSP(R21)
	RET

)");
}

}  // namespace
