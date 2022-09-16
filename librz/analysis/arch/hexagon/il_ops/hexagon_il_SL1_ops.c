// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 17:23:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_sl1_loadri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, cast_ut4_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl1_loadrub_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, cast_ut1_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>