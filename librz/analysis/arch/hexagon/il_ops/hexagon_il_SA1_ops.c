// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 12:19:10-04:00
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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rx, cast_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	RzILOpPure *op_ADD_1 = ADD(sp, VARL("u"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_0), seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_0), seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_0), seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, P0);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(NON_ZERO(op_AND_0), seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

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
	// Declare: ut0 h_tmp2322;

	// EXEC
	RzILOpPure *op_EQ_1 = EQ(Rs, VARL("u"));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *arg_cast_4 = CAST(8, IL_FALSE, cond_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *c_call_3 = HEX_WRITE_PRED("P0", arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2322", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine0i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_3, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_5, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine1i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_3, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_5, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine2i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_3, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = LET("const_pos2", const_pos2, CAST(64, MSB(DUP(VARLP("const_pos2"))), VARLP("const_pos2")));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_5, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combine3i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_LSHIFT_9);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_3, cast_11);
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *cast_18 = CAST(64, IL_FALSE, op_NOT_16);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), cast_18);
	RzILOpPure *cast_20 = LET("const_pos3", const_pos3, CAST(64, MSB(DUP(VARLP("const_pos3"))), VARLP("const_pos3")));
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_19, op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_LSHIFT_22);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_17, cast_24);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_5, op_ASSIGN_12, empty_13, op_ASSIGN_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinerz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, op_LSHIFT_8);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_3, cast_10);
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, op_NOT_15);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), cast_17);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, op_LSHIFT_21);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_16, cast_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_11 = SETG(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_11, empty_12, op_ASSIGN_24, empty_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_combinezr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, op_LSHIFT_8);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_3, cast_10);
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, op_NOT_15);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), cast_17);
	RzILOpPure *cast_19 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, op_LSHIFT_21);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_16, cast_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_11 = SETG(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_11, empty_12, op_ASSIGN_24, empty_25);

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
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, VARL("u"));
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_sa1_setin1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_neg1 = SN(32, -0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_neg1", const_neg1, CAST(32, IL_FALSE, VARLP("const_neg1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, cast_1);
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
	// Declare: st64 h_tmp2323;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2323"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2323", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

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
	// Declare: st64 h_tmp2324;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2324"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2324", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

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
	// Declare: ut64 h_tmp2325;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp2325"), cast_8);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2325", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

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
	// Declare: ut64 h_tmp2326;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp2326"), cast_8);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2326", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>