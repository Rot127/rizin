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

RzILOpEffect *hex_il_op_l4_add_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addRttmp = ADD(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(addRttmp)), addRttmp);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_ADD_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addRttmp = ADD(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(addRttmp)), addRttmp);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_ADD_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addRttmp = ADD(Rt, cast_8);
	RzILOpPure *cast_9 = CAST(4, MSB(DUP(addRttmp)), addRttmp);
	RzILOpPure *op_10 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *op_ASSIGN_ADD_7 = SETL("tmp", cast_9);
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_7, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andRttmp = LOGAND(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(andRttmp)), andRttmp);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_AND_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andRttmp = LOGAND(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(andRttmp)), andRttmp);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_AND_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andRttmp = LOGAND(Rt, cast_8);
	RzILOpPure *cast_9 = CAST(4, MSB(DUP(andRttmp)), andRttmp);
	RzILOpPure *op_10 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *op_ASSIGN_AND_7 = SETL("tmp", cast_9);
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_7, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addUtmp = ADD(VARL("U"), cast_10);
	RzILOpPure *cast_11 = CAST(4, MSB(DUP(addUtmp)), addUtmp);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_ADD_9 = SETL("tmp", cast_11);
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_9, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addUtmp = ADD(VARL("U"), cast_10);
	RzILOpPure *cast_11 = CAST(4, MSB(DUP(addUtmp)), addUtmp);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_ADD_9 = SETL("tmp", cast_11);
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_9, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *addUtmp = ADD(VARL("U"), cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(addUtmp)), addUtmp);
	RzILOpPure *op_11 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_ADD_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_7, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_ADD_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andop_NOT_10tmp = LOGAND(op_NOT_10, cast_12);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(andop_NOT_10tmp)), andop_NOT_10tmp);
	RzILOpPure *op_14 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_AND_11 = SETL("tmp", cast_13);
	RzILOpEffect *ms_op_14_15 = STOREW(VARL("EA"), op_14);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_11, ms_op_14_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andop_NOT_10tmp = LOGAND(op_NOT_10, cast_12);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(andop_NOT_10tmp)), andop_NOT_10tmp);
	RzILOpPure *op_14 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_AND_11 = SETL("tmp", cast_13);
	RzILOpEffect *ms_op_14_15 = STOREW(VARL("EA"), op_14);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_11, ms_op_14_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *andop_NOT_9tmp = LOGAND(op_NOT_9, cast_11);
	RzILOpPure *cast_12 = CAST(4, MSB(DUP(andop_NOT_9tmp)), andop_NOT_9tmp);
	RzILOpPure *op_13 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_AND_10 = SETL("tmp", cast_12);
	RzILOpEffect *ms_op_13_14 = STOREW(VARL("EA"), op_13);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_7, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_AND_10, ms_op_13_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orop_LSHIFT_9tmp = LOGOR(op_LSHIFT_9, cast_11);
	RzILOpPure *cast_12 = CAST(4, MSB(DUP(orop_LSHIFT_9tmp)), orop_LSHIFT_9tmp);
	RzILOpPure *op_13 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_OR_10 = SETL("tmp", cast_12);
	RzILOpEffect *ms_op_13_14 = STOREW(VARL("EA"), op_13);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_10, ms_op_13_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orop_LSHIFT_9tmp = LOGOR(op_LSHIFT_9, cast_11);
	RzILOpPure *cast_12 = CAST(4, MSB(DUP(orop_LSHIFT_9tmp)), orop_LSHIFT_9tmp);
	RzILOpPure *op_13 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_OR_10 = SETL("tmp", cast_12);
	RzILOpEffect *ms_op_13_14 = STOREW(VARL("EA"), op_13);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_10, ms_op_13_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("U")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orop_LSHIFT_8tmp = LOGOR(op_LSHIFT_8, cast_10);
	RzILOpPure *cast_11 = CAST(4, MSB(DUP(orop_LSHIFT_8tmp)), orop_LSHIFT_8tmp);
	RzILOpPure *op_12 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_OR_9 = SETL("tmp", cast_11);
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_7, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_9, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subUtmp = SUB(VARL("U"), cast_10);
	RzILOpPure *cast_11 = CAST(4, MSB(DUP(subUtmp)), subUtmp);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_SUB_9 = SETL("tmp", cast_11);
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_9, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subUtmp = SUB(VARL("U"), cast_10);
	RzILOpPure *cast_11 = CAST(4, MSB(DUP(subUtmp)), subUtmp);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *imm_assign_8 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_SUB_9 = SETL("tmp", cast_11);
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_8, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_9, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subUtmp = SUB(VARL("U"), cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(subUtmp)), subUtmp);
	RzILOpPure *op_11 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *imm_assign_7 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_SUB_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_7, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cast_ut1_4);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_6);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_12);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_11, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cast_ut1_7);
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_11 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_10, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_13 = LOGOR(op_RSHIFT_11, op_LSHIFT_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_OR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_9);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_15);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cast_ut2_4);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_6);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_12);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_11, empty_13, op_ASSIGN_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', true);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(8, IL_FALSE, cast_ut2_7);
	RzILOpPure *cast_ut8_10 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_11 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_10, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_13 = LOGOR(op_RSHIFT_11, op_LSHIFT_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_OR_13);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_9);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Ryy_assoc_tmp, cast_15);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, op_ASSIGN_14, empty_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp579;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_7 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(cast_9, VARLP("const_pos2")));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_17 = LOGAND(cast_18, op_NOT_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmpV"), op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_23, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_24 = CAST(8, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, cast_st8_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, op_OR_31);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", cast_7);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp579", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_12, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_8, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_6, for_39);
	RzILOpEffect *op_ASSIGN_40 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, seq_38, op_ASSIGN_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp580;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos2", const_pos2, ULT(cast_12, VARLP("const_pos2")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_20 = LOGAND(cast_21, op_NOT_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, op_OR_34);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp580", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_15, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_11, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_9, for_42);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp581;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_7 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(cast_9, VARLP("const_pos4")));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmpV"), op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_23, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_24 = CAST(8, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, cast_st8_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *op_OR_31 = LOGOR(op_AND_17, op_LSHIFT_30);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", cast_7);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp581", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_32 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_31);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_32, empty_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_12, seq_34);
	RzILOpEffect *for_37 = REPEAT(op_LT_8, seq_35);
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_6, for_37);
	RzILOpEffect *op_ASSIGN_38 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, seq_36, op_ASSIGN_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp582;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos4", const_pos4, ULT(cast_12, VARLP("const_pos4")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, IL_FALSE, op_NOT_19);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_20, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp582", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_35, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_15, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_11, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_9, for_40);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp583;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_7 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(cast_9, VARLP("const_pos2")));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_17 = LOGAND(cast_18, op_NOT_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmpV"), op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_23, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, cast_ut8_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, op_OR_31);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", cast_7);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp583", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_12, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_8, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_6, for_39);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *op_ASSIGN_41 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, seq_38, empty_40, op_ASSIGN_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut2 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp584;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos2", const_pos2, ULT(cast_12, VARLP("const_pos2")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_20 = LOGAND(cast_21, op_NOT_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_ut8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, op_OR_34);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp584", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_15, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_11, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_9, for_42);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_41, empty_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp585;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_7 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(cast_9, VARLP("const_pos4")));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(VARL("tmpV"), op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_23, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, cast_ut8_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *op_OR_31 = LOGOR(op_AND_17, op_LSHIFT_30);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", cast_7);
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp585", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_32 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_31);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_32, empty_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_12, seq_34);
	RzILOpEffect *for_37 = REPEAT(op_LT_8, seq_35);
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_6, for_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(7, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, seq_36, empty_38, op_ASSIGN_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut4 tmpV;
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp586;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_11 = LET("const_pos4", const_pos4, ULT(cast_12, VARLP("const_pos4")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_16));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, IL_FALSE, op_NOT_19);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("tmpV"), op_MUL_22);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_ut8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_20, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", cast_10);
	RzILOpEffect *op_INC_13 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp586", VARL("i"));
	RzILOpEffect *seq_15 = SEQN(2, op_ASSIGN_hybrid_tmp_14, op_INC_13);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_35, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_15, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_11, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_9, for_40);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadd_aq(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadd_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadrb_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(DUP(ml_EA_3)), ml_EA_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_st1_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrb_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(DUP(ml_EA_6)), ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cast_st1_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(64, IL_FALSE, cast_ut8_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(64, IL_FALSE, cast_ut8_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(DUP(ml_EA_3)), ml_EA_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_st2_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(DUP(ml_EA_6)), ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cast_st2_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_ut4_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cast_ut4_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_ut1_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cast_ut1_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, cast_ut2_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cast_ut2_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orRttmp = LOGOR(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(orRttmp)), orRttmp);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_OR_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orRttmp = LOGOR(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(orRttmp)), orRttmp);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_OR_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *orRttmp = LOGOR(Rt, cast_8);
	RzILOpPure *cast_9 = CAST(4, MSB(DUP(orRttmp)), orRttmp);
	RzILOpPure *op_10 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *op_ASSIGN_OR_7 = SETL("tmp", cast_9);
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_OR_7, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrbtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_8 = CAST(1, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrdtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, cast_ut8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrht_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(DUP(ml_EA_5)), ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_st2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrhtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_8 = CAST(2, MSB(DUP(ml_EA_7)), ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrif_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrifnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrit_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut4_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadritnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_8 = CAST(4, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut4_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubt_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut1_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadrubtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_8 = CAST(1, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut1_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhfnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruht_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pt);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut2_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("u"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(NON_ZERO(op_AND_3), seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_1, empty_2, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ploadruhtnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Rt, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *ml_EA_7 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_8 = CAST(2, IL_FALSE, ml_EA_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_ut2_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *nop_11 = NOP();
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *seq_then_13 = SEQN(1, op_ASSIGN_9);
	RzILOpEffect *seq_else_15 = SEQN(2, nop_11, empty_12);
	RzILOpEffect *branch_14 = BRANCH(NON_ZERO(op_AND_5), seq_then_13, seq_else_15);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, branch_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_7 = LOGXOR(cast_8, op_LSHIFT_6);
	RzILOpPure *op_ADD_10 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_13);
	RzILOpPure *cast_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_7);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_9, op_ASSIGN_11, empty_12, jump_cast_st64_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Pv);
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(cast_4, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_8, VARLP("const_pos32")));
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_XOR_10 = LOGXOR(cast_11, op_LSHIFT_9);
	RzILOpPure *op_ADD_13 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmp", cast_ut8_6);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(sp_assoc_tmp, op_ADD_13);
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *jump_cast_st64_21 = JMP(cast_st64_21);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *nop_23 = NOP();
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_then_25 = SEQN(6, op_ASSIGN_7, op_ASSIGN_12, op_ASSIGN_14, empty_15, jump_cast_st64_21, empty_22);
	RzILOpEffect *seq_else_27 = SEQN(2, nop_23, empty_24);
	RzILOpEffect *branch_26 = BRANCH(NON_ZERO(op_AND_3), seq_then_25, seq_else_27);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st1_5)), cast_st1_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subRttmp = SUB(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(subRttmp)), subRttmp);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_SUB_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_7 = CAST(4, MSB(DUP(cast_st2_5)), cast_st2_5);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subRttmp = SUB(Rt, cast_9);
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(subRttmp)), subRttmp);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_7);
	RzILOpEffect *op_ASSIGN_SUB_8 = SETL("tmp", cast_10);
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_8, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_5 = CAST(4, MSB(DUP(ml_EA_4)), ml_EA_4);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *subRttmp = SUB(Rt, cast_8);
	RzILOpPure *cast_9 = CAST(4, MSB(DUP(subRttmp)), subRttmp);
	RzILOpPure *op_10 = CAST(32, IL_FALSE, VARL("tmp"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_st4_5);
	RzILOpEffect *op_ASSIGN_SUB_7 = SETL("tmp", cast_9);
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_SUB_7, ms_op_10_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>