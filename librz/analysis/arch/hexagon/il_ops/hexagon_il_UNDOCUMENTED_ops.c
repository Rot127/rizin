// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-21 16:48:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_undocumented_sa2_tfrsi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, LET("s", s, VARLP("s")));
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>