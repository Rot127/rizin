// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 15:53:51-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_l4_add_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzIlOpPure *op_8 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzIlOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzIlOpPure *op_8 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzIlOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzIlOpPure *op_8 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzIlOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzIlOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzIlOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzIlOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzIlOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzIlOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzIlOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzIlOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, "Ryy", false);
	RzIlOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos56 = UN(32, 56);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_2 = CAST(1, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, Ryy);
	RzIlOpPure *op_RSHIFT_5 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_4, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_6 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzIlOpPure *op_OR_7 = LOGOR(op_RSHIFT_5, op_LSHIFT_6);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETL("tmpV", cast_ut1_2);
	RzIlOpEffect *op_ASSIGN_8 = SETG(Ryy_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_10 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_8, empty_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, "Ryy", false);
	RzIlOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos48 = UN(32, 48);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut8_6 = CAST(8, IL_FALSE, Ryy);
	RzIlOpPure *op_RSHIFT_7 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_6, VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_8 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzIlOpPure *op_OR_9 = LOGOR(op_RSHIFT_7, op_LSHIFT_8);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzIlOpEffect *op_ASSIGN_10 = SETG(Ryy_assoc, op_OR_9);
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_2, empty_3, op_ASSIGN_5, op_ASSIGN_10, empty_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_6 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzIlOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzIlOpPure *op_AND_11 = LOGAND(Rd, op_NOT_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_15, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut2_3);
	RzIlOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzIlOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(Rd, op_NOT_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzIlOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzIlOpEffect *empty_27 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_6 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzIlOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzIlOpPure *op_AND_11 = LOGAND(Rdd, op_NOT_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_15, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut4_3);
	RzIlOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzIlOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(Rdd, op_NOT_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzIlOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzIlOpEffect *empty_27 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_6 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzIlOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzIlOpPure *op_AND_11 = LOGAND(Rd, op_NOT_10);
	RzIlOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_15, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzIlOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzIlOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut2_3);
	RzIlOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_OR_20);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzIlOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(Rdd, op_NOT_12);
	RzIlOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzIlOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_17, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzIlOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzIlOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzIlOpEffect *empty_24 = EMPTY();
	RzIlOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzIlOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzIlOpEffect *empty_27 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadd_aq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadd_locked(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadrb_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_2 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st1_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc, cast_ut8_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_2 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st2_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_2 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut4_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_2 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut1_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Re_assoc = ISA2REG(hi, "Re", false);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_2 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut2_2);
	RzIlOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *nop_5 = NOP;
	RzIlOpEffect *empty_6 = EMPTY();
	RzIlOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzIlOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzIlOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzIlOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzIlOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *nop_7 = NOP;
	RzIlOpEffect *empty_8 = EMPTY();
	RzIlOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzIlOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzIlOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzIlOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(Rdd, op_MUL_11);
	RzIlOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzIlOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzIlOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *jump_cast_st64_15 = JUMP(cast_st64_15);
	RzIlOpEffect *empty_16 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10, jump_cast_st64_15, empty_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, "Pv", false);
	RzIlOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, "Pv", true);
	RzIlOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);

	// EXEC
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzIlOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzIlOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzIlOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzIlOpEffect *empty_12 = EMPTY();
	RzIlOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzIlOpEffect *empty_18 = EMPTY();
	RzIlOpEffect *nop_19 = NOP;
	RzIlOpEffect *empty_20 = EMPTY();
	RzIlOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzIlOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzIlOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzIlOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzIlOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzIlOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, "Rt", false);
	RzIlOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzIlOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzIlOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzIlOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzIlOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>