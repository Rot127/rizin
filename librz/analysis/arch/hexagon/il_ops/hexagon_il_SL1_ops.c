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

RzILOpEffect *hex_il_op_sl1_loadri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sl1_loadrub_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>