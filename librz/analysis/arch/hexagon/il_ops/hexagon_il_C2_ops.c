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

RzILOpEffect *hex_il_op_c2_all8(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = LET("const_pos0xff", const_pos0xff, EQ(Ps, VARLP("const_pos0xff")));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_AND_1 = LOGAND(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_any8(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cond_0 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(Ps, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, cond_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(op_AND_0, VARLP("const_pos0")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsclri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, VARL("u"));
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(op_AND_0, VARLP("const_pos0")));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_bitsset(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *op_EQ_1 = EQ(op_AND_0, DUP(Rt));
	RzILOpPure *cond_2 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_1, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Pd_assoc, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(Rdd, op_NOT_3);
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(op_AND_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_4, op_LSHIFT_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(DUP(Rdd), op_NOT_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(op_AND_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_14, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc, op_OR_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *nop_21 = NOP;
	RzILOpEffect *seq_then_22 = SEQN(4, op_ASSIGN_9, empty_10, op_ASSIGN_19, empty_20);
	RzILOpEffect *seq_else_24 = SEQN(1, nop_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_0, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(Rdd, op_NOT_3);
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(op_AND_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_4, op_LSHIFT_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(DUP(Rdd), op_NOT_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(op_AND_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_14, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc, op_OR_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *nop_21 = NOP;
	RzILOpEffect *seq_then_22 = SEQN(4, op_ASSIGN_9, empty_10, op_ASSIGN_19, empty_20);
	RzILOpEffect *seq_else_24 = SEQN(1, nop_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_0, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewnewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(Rdd, op_NOT_3);
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(op_AND_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_4, op_LSHIFT_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(DUP(Rdd), op_NOT_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(op_AND_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_14, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc, op_OR_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *nop_21 = NOP;
	RzILOpEffect *seq_then_22 = SEQN(4, op_ASSIGN_9, empty_10, op_ASSIGN_19, empty_20);
	RzILOpEffect *seq_else_24 = SEQN(1, nop_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_0, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_ccombinewt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(Rdd, op_NOT_3);
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(op_AND_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_4, op_LSHIFT_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(DUP(Rdd), op_NOT_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(op_AND_15, op_MUL_16);
	RzILOpPure *op_OR_18 = LOGOR(op_AND_14, op_LSHIFT_17);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rdd_assoc, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *op_ASSIGN_19 = SETG(Rdd_assoc, op_OR_18);
	RzILOpEffect *empty_20 = EMPTY();
	RzILOpEffect *nop_21 = NOP;
	RzILOpEffect *seq_then_22 = SEQN(4, op_ASSIGN_9, empty_10, op_ASSIGN_19, empty_20);
	RzILOpEffect *seq_else_24 = SEQN(1, nop_21);
	RzILOpEffect *branch_23 = BRANCH(op_AND_0, seq_then_22, seq_else_24);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmoveif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, s);
	RzILOpEffect *nop_2 = NOP;
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmoveit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, s);
	RzILOpEffect *nop_2 = NOP;
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmovenewif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, s);
	RzILOpEffect *nop_2 = NOP;
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmovenewit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc, s);
	RzILOpEffect *nop_2 = NOP;
	RzILOpEffect *seq_then_3 = SEQN(1, op_ASSIGN_1);
	RzILOpEffect *seq_else_5 = SEQN(1, nop_2);
	RzILOpEffect *branch_4 = BRANCH(op_AND_0, seq_then_3, seq_else_5);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, VARL("s"));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpeqp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rs, Rt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rs, VARL("s"));
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rss, Rtt);
	RzILOpPure *cond_1 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_0, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_cmpgtup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *op_GT_2 = UGT(cast_ut64_0, cast_ut64_1);
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(64, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Pt, VARL("i"));
	RzILOpPure *op_AND_9 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *cond_10 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_AND_9, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_10, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_12, op_MUL_13);
	RzILOpPure *op_OR_15 = LOGOR(op_AND_7, op_LSHIFT_14);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc, op_OR_15);
	RzILOpEffect *empty_17 = EMPTY();
	RzILOpEffect *seq_18 = SEQN(3, op_ASSIGN_16, empty_17, op_INC_3);
	RzILOpEffect *for_19 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_18));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_mux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *cond_1 = ITE(op_AND_0, Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, "S"));

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *cond_1 = ITE(op_AND_0, VARL("s"), VARL("S"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *cond_1 = ITE(op_AND_0, Rs, VARL("s"));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_muxri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *cond_1 = ITE(op_AND_0, VARL("s"), Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_not(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, op_NOT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Ps);
	RzILOpPure *op_OR_1 = LOGOR(Pt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Pd_assoc, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrpr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *c_call_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(Ps, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_2 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_1, VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_tfrrp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, op_AND_2);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc, cast_ut8_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vitpack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	RzILOpPure *const_pos0x55 = UN(32, 0x55);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos0xAA = UN(32, 0xaa);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos0x55", const_pos0x55, LOGAND(Ps, VARLP("const_pos0x55")));
	RzILOpPure *op_AND_1 = LET("const_pos0xAA", const_pos0xAA, LOGAND(Pt, VARLP("const_pos0xAA")));
	RzILOpPure *op_OR_2 = LOGOR(op_AND_0, op_AND_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_vmux(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Pu, VARL("i"));
	RzILOpPure *op_AND_9 = LET("const_pos1", const_pos1, LOGAND(op_RSHIFT_8, VARLP("const_pos1")));
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(64, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cond_18 = ITE(op_AND_9, cast_st8_13, cast_st8_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_7, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_3);
	RzILOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_26));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_c2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc = ISA2REG(hi, 'd', false);
	const char *Ps_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Ps = VARG(Ps_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Ps, Pt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Pd_assoc, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>