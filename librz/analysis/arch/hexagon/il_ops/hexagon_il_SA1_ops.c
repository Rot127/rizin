// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-06 11:05:56-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_sa1_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rx, VARL("s"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rx_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_addrx(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rx, Rs);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rx_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_addsp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(sp, VARL("u"));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_and1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Rs, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_AND_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, const_pos0);
	RzIlOpEffect *nop_2 = NOP;
	RzIlOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzIlOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzIlOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, const_pos0);
	RzIlOpEffect *nop_2 = NOP;
	RzIlOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzIlOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzIlOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_assoc = ISA2REG(hi, "P0P0", false);
	RzIlOpPure *P0P0 = VARG(P0P0_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, const_pos0);
	RzIlOpEffect *nop_2 = NOP;
	RzIlOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzIlOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzIlOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *P0P0_tmp_assoc = ISA2REG(hi, "P0P0", true);
	RzIlOpPure *P0P0 = VARG(P0P0_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0P0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, const_pos0);
	RzIlOpEffect *nop_2 = NOP;
	RzIlOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzIlOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzIlOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_cmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *p0_assoc = ALIAS2REG(, HEX_REG_ALIAS_P0);
	RzIlOpPure *p0 = VARG(p0_assoc);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x00 = UN(32, 0);

	// EXEC
	RzIlOpPure *op_EQ_0 = EQ(Rs, VARL("u"));
	RzIlOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzIlOpEffect *op_PRED_WRITE_2 = write_pred(p0, cond_1);
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(2, op_PRED_WRITE_2, empty_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine0i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("u"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0", const_pos0, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine1i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("u"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos1", const_pos1, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos1"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine2i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos2 = UN(64, 2);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("u"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos2", const_pos2, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos2"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine3i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos3 = UN(64, 3);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARL("u"), VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos3", const_pos3, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos3"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinerz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0", const_pos0, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinezr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 4294967295);
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos32 = UN(32, 32);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzIlOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzIlOpPure *op_AND_3 = LOGAND(Rdd, op_NOT_2);
	RzIlOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzIlOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzIlOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzIlOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzIlOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzIlOpPure *op_AND_13 = LOGAND(DUP(Rdd), op_NOT_12);
	RzIlOpPure *op_AND_14 = LET("const_pos0", const_pos0, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzIlOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzIlOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzIlOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzIlOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc, op_OR_7);
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc, op_OR_17);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_dec(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_SUB_0 = LET("const_pos1", const_pos1, SUB(Rs, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_SUB_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_inc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);

	// EXEC
	RzIlOpPure *op_ADD_0 = LET("const_pos1", const_pos1, ADD(Rs, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, op_ADD_0);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_seti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, u);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_setin1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_neg1 = SN(32, -1);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, const_neg1);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_sxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_sxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_tfr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETG(Rd_assoc, Rs);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_zxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_zxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0 = UN(32, 0);
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);

	// EXEC
	RzIlOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzIlOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzIlOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzIlOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>