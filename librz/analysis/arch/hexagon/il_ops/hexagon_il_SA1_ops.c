// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-03 08:20:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_sa1_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rx, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rx_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_addrx(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rx, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rx_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_addsp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *sp_assoc = ALIAS2REG(HEX_REG_ALIAS_SP, false);
	RzILOpPure *sp = VARG(sp_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(sp, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_and1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Rs, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_2 = NOP();
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_2 = NOP();
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_2 = NOP();
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_clrtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *P0 = VARG("P0");
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(P0, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_2 = NOP();
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_cmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *P0 = VARG("P0");
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);
	// Declare: ut0 h_tmp0;

	// EXEC
	RzILOpPure *op_EQ_0 = LET("u", u, EQ(Rs, VARLP("u")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *c_call_2 = HEX_WRITE_PRED(P0, cond_1);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp0", UNSIGNED(0, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine0i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(64, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("u"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine1i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("u"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos1", DUP(const_pos1), LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos1"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine2i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(64, 0x2);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("u"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos2", const_pos2, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos2"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine3i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(64, (ut64)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos3 = UN(64, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("u"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos3", const_pos3, LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos3"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinerz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinezr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(64, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos0", DUP(const_pos0), LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(VARLP("const_pos0"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_dec(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos1", const_pos1, SUB(Rs, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_inc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_pos1", const_pos1, ADD(Rs, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_seti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, LET("u", u, VARLP("u")));
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_setin1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_neg1 = SN(32, -0x1);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, LET("const_neg1", const_neg1, VARLP("const_neg1")));
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_sxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rs, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_sxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rs, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_tfr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, Rs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_zxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(Rs, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos8", DUP(const_pos8), VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_zxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(Rs, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos16", DUP(const_pos16), VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>