// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-15 11:57:41-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_ss1_storeb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(op_AND_5), op_AND_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_cast_st8_6 = STOREW(VARL("EA"), cast_st8_6);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_cast_st8_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_ss1_storew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_Rt = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_Rt);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>