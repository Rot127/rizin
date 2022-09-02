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

RzILOpEffect *hex_il_op_l4_add_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_add_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addRttmp = ADD(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_AND_6 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_AND_6 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_and_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *andRttmp = LOGAND(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_AND_6 = SETL("tmp", andRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addUtmp = LET("U", U, ADD(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addUtmp = LET("U", U, ADD(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iadd_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *addUtmp = LET("U", U, ADD(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_ADD_6 = SETL("tmp", addUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_ADD_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *andop_NOT_7tmp = LOGAND(op_NOT_7, VARL("tmp"));
	RzILOpPure *op_9 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_AND_8 = SETL("tmp", andop_NOT_7tmp);
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_8, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *andop_NOT_7tmp = LOGAND(op_NOT_7, VARL("tmp"));
	RzILOpPure *op_9 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_AND_8 = SETL("tmp", andop_NOT_7tmp);
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_8, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_iand_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *andop_NOT_7tmp = LOGAND(op_NOT_7, VARL("tmp"));
	RzILOpPure *op_9 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_AND_8 = SETL("tmp", andop_NOT_7tmp);
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_AND_8, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *orop_LSHIFT_6tmp = LOGOR(op_LSHIFT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_OR_7 = SETL("tmp", orop_LSHIFT_6tmp);
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_7, ms_op_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *orop_LSHIFT_6tmp = LOGOR(op_LSHIFT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_OR_7 = SETL("tmp", orop_LSHIFT_6tmp);
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_7, ms_op_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_ior_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *const_pos1 = UN(4, 0x1);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("U", U, SHIFTL0(VARLP("const_pos1"), VARLP("U"))));
	RzILOpPure *orop_LSHIFT_6tmp = LOGOR(op_LSHIFT_6, VARL("tmp"));
	RzILOpPure *op_8 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_OR_7 = SETL("tmp", orop_LSHIFT_6tmp);
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_7, ms_op_8_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subUtmp = LET("U", U, SUB(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subUtmp = LET("U", U, SUB(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_isub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	RzILOpPure *U = UN(4, (ut8)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subUtmp = LET("U", U, SUB(VARLP("U"), VARL("tmp")));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subUtmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ap(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignb_ur(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadalignh_ap(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
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
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_10 = LOGOR(op_RSHIFT_8, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_11 = SETG(Ryy_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_2, empty_3, op_ASSIGN_6, op_ASSIGN_11, empty_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *op_LT_7 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_10 = SEQN(2, op_ASSIGN_hybrid_tmp_9, op_INC_8);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_10, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_6, REPEAT(op_LT_7, seq_27));
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_5, for_28, empty_29, op_ASSIGN_30);

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
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_15);
	RzILOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmpV"), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_20 = CAST(32, IL_FALSE, op_AND_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_20, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_16, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_12, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_8, REPEAT(op_LT_9, seq_29));
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_7, for_30, empty_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);
	RzILOpPure *op_LT_7 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_10 = SEQN(2, op_ASSIGN_hybrid_tmp_9, op_INC_8);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_10, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_6, REPEAT(op_LT_7, seq_27));
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_5, for_28, empty_29, op_ASSIGN_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbsw4_ur(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw2_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *op_LT_7 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_6 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_8 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_10 = SEQN(2, op_ASSIGN_hybrid_tmp_9, op_INC_8);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_10, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_6, REPEAT(op_LT_7, seq_27));
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, empty_2, op_ASSIGN_5, for_28, empty_29, op_ASSIGN_30);

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
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_15);
	RzILOpPure *op_MUL_17 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(VARL("tmpV"), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_18, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_20 = CAST(32, IL_FALSE, op_AND_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_20, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_16, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_10 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_12 = SEQN(2, op_ASSIGN_hybrid_tmp_11, op_INC_10);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_12, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_8, REPEAT(op_LT_9, seq_29));
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_2, empty_3, empty_4, op_ASSIGN_7, for_30, empty_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ap(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l4_loadbzw4_ur(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_3 = CAST(1, MSB(ml_EA_2), ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_st1_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrd_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc_tmp, cast_ut8_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_3 = CAST(2, MSB(ml_EA_2), ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_st2_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadri_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_ut4_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadrub_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_ut1_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_loadruh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, cast_ut2_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_5);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_or_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *orRttmp = LOGOR(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_OR_6 = SETL("tmp", orRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_OR_6, ms_op_7_8);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("u", u, VARLP("u")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzILOpEffect *branch_9 = BRANCH(op_AND_2, seq_then_8, seq_else_10);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_9);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Rt, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_AND_4 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *nop_8 = NOP();
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *seq_then_10 = SEQN(1, op_ASSIGN_7);
	RzILOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzILOpEffect *branch_11 = BRANCH(op_AND_4, seq_then_10, seq_else_12);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *op_XOR_7 = LOGXOR(VARL("tmp"), op_LSHIFT_6);
	RzILOpPure *op_ADD_9 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_XOR_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(sp_assoc_tmp, op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *jump_cast_st64_16 = JMP(cast_st64_16);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_8, op_ASSIGN_10, empty_11, jump_cast_st64_16, empty_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_f(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_fnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_t(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_assoc = ISA2REG(hi, 'v', false);
	RzILOpPure *Pv = VARG(Pv_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pnt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_return_tnew_pt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pv_tmp_assoc = ISA2REG(hi, 'v', true);
	RzILOpPure *Pv = VARG(Pv_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);

	// EXEC
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pv, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_8 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_7, VARLP("const_pos32")));
	RzILOpPure *op_XOR_9 = LOGXOR(VARL("tmp"), op_LSHIFT_8);
	RzILOpPure *op_ADD_11 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", Rs);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmp", cast_ut8_5);
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, op_XOR_9);
	RzILOpEffect *op_ASSIGN_12 = SETG(sp_assoc_tmp, op_ADD_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *jump_cast_st64_18 = JMP(cast_st64_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *nop_20 = NOP();
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *seq_then_22 = SEQN(6, op_ASSIGN_6, op_ASSIGN_10, op_ASSIGN_12, empty_13, jump_cast_st64_18, empty_19);
	RzILOpEffect *seq_else_24 = SEQN(2, nop_20, empty_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_3, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, empty_2, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st1_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memoph_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st2_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l4_sub_memopw_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmp;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_st4_4 = CAST(4, MSB(ml_EA_3), ml_EA_3);
	RzILOpPure *subRttmp = SUB(Rt, VARL("tmp"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmp", cast_st4_4);
	RzILOpEffect *op_ASSIGN_SUB_6 = SETL("tmp", subRttmp);
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_SUB_6, ms_op_7_8);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>