// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 19:19:30-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_l4_add_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_AND_5 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *addUtmp = ADD(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_ADD_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *andop_NOT_6tmp = LOGAND(op_NOT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", andop_NOT_6tmp);
	RzILOpEffect *ms_op_8 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_AND_7, ms_op_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *orop_LSHIFT_5tmp = LOGOR(op_LSHIFT_5, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orop_LSHIFT_5tmp);
	RzILOpEffect *ms_op_7 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_6, ms_op_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut4)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *subUtmp = SUB(VARL("U"), VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ap_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ur_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_2 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_5 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_4, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_7 = LOGOR(op_RSHIFT_5, op_LSHIFT_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmpV", cast_ut2_2);
	RzILOpEffect *op_ASSIGN_8 = SETG(Ryy_assoc, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_8, empty_9, op_ASSIGN_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_2 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_5 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_4, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_7 = LOGOR(op_RSHIFT_5, op_LSHIFT_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmpV", cast_ut2_2);
	RzILOpEffect *op_ASSIGN_8 = SETG(Ryy_assoc, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_10 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_8, empty_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ur_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_6 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(Rd, op_NOT_10);
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_15, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut2_3);
	RzILOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzILOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_6 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(Rd, op_NOT_10);
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_15, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut2_3);
	RzILOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzILOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rd, op_NOT_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rd, op_NOT_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ap_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ur_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ap_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ur_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_6 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(Rdd, op_NOT_10);
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_15, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut4_3);
	RzILOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzILOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_6 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_8));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(Rdd, op_NOT_10);
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARL("tmpV"), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_13, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_15 = CAST(32, IL_FALSE, op_AND_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_15, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_17, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_11, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut4_3);
	RzILOpEffect *op_ASSIGN_5 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_7 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *seq_23 = SEQN(3, op_ASSIGN_21, empty_22, op_INC_7);
	RzILOpEffect *for_24 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_6, seq_23));
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_4, for_24, empty_25, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rdd, op_NOT_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(Rdd, op_NOT_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARL("tmpV"), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_17, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_13, op_LSHIFT_21);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_23 = SETG(Rdd_assoc, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(3, op_ASSIGN_23, empty_24, op_INC_9);
	RzILOpEffect *for_26 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_8, seq_25));
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_6, for_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadd_aq_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadd_locked_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadrb_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_2 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st1_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_2 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st1_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc, cast_ut8_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc, cast_ut8_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_2 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st2_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_2 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_st2_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_2 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut4_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_2 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut4_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_2 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut1_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_2 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut1_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ap_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_2 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut2_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Re_assoc = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_2 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", U);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cast_ut2_2);
	RzILOpEffect *op_ASSIGN_4 = SETG(Re_assoc, U);
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ur_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(VARL("U"), op_LSHIFT_0);
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_OR_5 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_OR_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_abs_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", u);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzILOpEffect *nop_5 = NOP;
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_9 = SEQN(2, nop_5, empty_6);
	RzILOpEffect *branch_8 = BRANCH(op_AND_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_rr_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP;
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_4, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rdd, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzILOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *jump_cast_st64_15 = JUMP(cast_st64_15);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10, jump_cast_st64_15, empty_16);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzILOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rdd, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzILOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *jump_cast_st64_15 = JUMP(cast_st64_15);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10, jump_cast_st64_15, empty_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_f_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pnt_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pt_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_t_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pnt_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pt_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_7 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_6, VARLP("const_pos32")));
	RzILOpPure *op_XOR_8 = LOGXOR(VARL("tmp"), op_LSHIFT_7);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rdd, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(op_AND_15), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_ut8_4);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_XOR_8);
	RzILOpEffect *op_ASSIGN_11 = SETG(sp_assoc, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_17 = JUMP(cast_st64_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *nop_19 = NOP;
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *seq_then_21 = SEQN(6, op_ASSIGN_5, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_17, empty_18);
	RzILOpEffect *seq_else_23 = SEQN(2, nop_19, empty_20);
	RzILOpEffect *branch_22 = BRANCH(op_AND_3, seq_then_21, seq_else_23);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopb_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st1_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memoph_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st2_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopw_io_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_3 = CAST(4, MSB(ml_EA), ml_EA);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_st4_3);
	RzILOpEffect *op_ASSIGN_SUB_5 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_6 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_SUB_5, ms_op_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>