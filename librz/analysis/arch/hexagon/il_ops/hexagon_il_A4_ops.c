// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_a4_addp_c(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *op_AND_1 = LOGAND(Rt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_andnp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);
	RzILOpPure *op_AND_1 = LOGAND(Rtt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_bitsplit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos5 = UN(32, 0x5);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp354;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut4 shamt;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp355;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp354"), cast_8);
	RzILOpPure *cast_11 = CAST(4, IL_FALSE, cond_7);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *cast_ut32_16 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut32_16, VARL("shamt"));
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(op_RSHIFT_17)), op_RSHIFT_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_15, op_LSHIFT_21);
	RzILOpPure *op_MUL_25 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_25));
	RzILOpPure *op_NOT_27 = LOGNOT(op_LSHIFT_26);
	RzILOpPure *op_AND_28 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_27);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_NE_29 = LET("const_pos0", DUP(const_pos0), INV(EQ(cast_30, VARLP("const_pos0"))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rs));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = CAST(64, MSB(DUP(VARL("shamt"))), VARL("shamt"));
	RzILOpPure *cast_38 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_37 = ITE(op_NE_29, VARL("h_tmp355"), cast_38);
	RzILOpPure *cast_40 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_39 = LOGAND(cond_37, cast_40);
	RzILOpPure *op_MUL_41 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_39, op_MUL_41);
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_OR_43 = LOGOR(cast_44, op_LSHIFT_42);
	RzILOpPure *cast_46 = CAST(64, MSB(DUP(op_OR_43)), op_OR_43);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp354", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = SETL("shamt", cast_11);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *c_call_31 = HEX_EXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp355", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *op_ASSIGN_45 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_46);
	RzILOpEffect *seq_47 = SEQN(2, seq_36, op_ASSIGN_45);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, seq_10, op_ASSIGN_23, empty_24, seq_47, empty_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_bitspliti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut64 h_tmp356;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_4, VARL("u"));
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(op_RSHIFT_6)), op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_3, op_LSHIFT_10);
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_NE_18 = LET("const_pos0", DUP(const_pos0), INV(EQ(VARL("u"), VARLP("const_pos0"))));
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, DUP(Rs));
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_26 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_25 = ITE(op_NE_18, VARL("h_tmp356"), cast_26);
	RzILOpPure *cast_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_27 = LOGAND(cond_25, cast_28);
	RzILOpPure *op_MUL_29 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(op_AND_27, op_MUL_29);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_OR_31)), op_OR_31);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_13 = EMPTY();
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp356", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_34);
	RzILOpEffect *seq_35 = SEQN(2, seq_24, op_ASSIGN_33);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_5, op_ASSIGN_12, empty_13, seq_35, empty_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_boundscheck_hi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_boundscheck_lo(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_4 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_EQ_10 = EQ(cast_st8_4, cast_st8_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, op_AND_2);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, cast_ut8_4);
	RzILOpPure *op_EQ_6 = EQ(cast_7, VARL("u"));
	RzILOpPure *cond_8 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_EQ_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, MSB(DUP(cond_8)), cond_8);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_5, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_4 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_GT_10 = SGT(cast_st8_4, cast_st8_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_4 = CAST(8, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_st8_4)), cast_st8_4);
	RzILOpPure *op_GT_6 = SGT(cast_7, VARL("s"));
	RzILOpPure *cond_8 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, MSB(DUP(cond_8)), cond_8);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_5, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_9 = CAST(8, IL_FALSE, op_AND_7);
	RzILOpPure *op_GT_10 = UGT(cast_ut8_4, cast_ut8_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut8_5);
	RzILOpPure *op_GT_7 = UGT(cast_8, cast_ut32_6);
	RzILOpPure *cond_9 = LET("const_pos0xff", DUP(const_pos0xff), LET("const_pos0x00", const_pos0x00, ITE(op_GT_7, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_EQ_10 = EQ(cast_st16_4, cast_st16_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_st16_5)), cast_st16_5);
	RzILOpPure *op_EQ_6 = EQ(cast_7, VARL("s"));
	RzILOpPure *cond_8 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, MSB(DUP(cond_8)), cond_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_GT_10 = SGT(cast_st16_4, cast_st16_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cast_st16_5)), cast_st16_5);
	RzILOpPure *op_GT_6 = SGT(cast_7, VARL("s"));
	RzILOpPure *cond_8 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_6, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_10 = CAST(8, MSB(DUP(cond_8)), cond_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rs, op_MUL_0);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_9 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_GT_10 = UGT(cast_ut16_4, cast_ut16_9);
	RzILOpPure *cond_11 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_10, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_13 = CAST(8, MSB(DUP(cond_11)), cond_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rs, op_MUL_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_5 = CAST(16, IL_FALSE, op_AND_3);
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, cast_ut16_5);
	RzILOpPure *op_GT_7 = UGT(cast_8, cast_ut32_6);
	RzILOpPure *cond_9 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_GT_7, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_11 = CAST(8, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_3);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_4, op_LSHIFT_8);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(op_AND_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_15, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *imm_assign_16 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_16, op_ASSIGN_10, empty_11, op_ASSIGN_22, empty_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_3);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_4, op_LSHIFT_8);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_18 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(op_AND_16, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_15, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *op_ASSIGN_21 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_10, empty_11, op_ASSIGN_21, empty_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_combineri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_3);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_4, op_LSHIFT_8);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_18 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(op_AND_16, op_MUL_18);
	RzILOpPure *op_OR_20 = LOGOR(op_AND_15, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *op_ASSIGN_21 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_20);
	RzILOpEffect *empty_22 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_10, empty_11, op_ASSIGN_21, empty_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_cround_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_cround_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_ext(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_modwrapu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_2 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_ADD_3 = ADD(cast_4, cast_ut32_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_ADD_3)), op_ADD_3);
	RzILOpPure *cast_ut32_7 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut32_8 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *op_GE_9 = UGE(cast_ut32_7, cast_ut32_8);
	RzILOpPure *cast_ut32_10 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_SUB_11 = SUB(cast_12, cast_ut32_10);
	RzILOpPure *cast_14 = CAST(32, MSB(DUP(op_SUB_11)), op_SUB_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_14);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, DUP(Rs));
	RzILOpEffect *seq_then_16 = SEQN(1, op_ASSIGN_13);
	RzILOpEffect *seq_else_18 = SEQN(1, op_ASSIGN_15);
	RzILOpEffect *branch_17 = BRANCH(op_GE_9, seq_then_16, seq_else_18);
	RzILOpEffect *seq_then_19 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_21 = SEQN(1, branch_17);
	RzILOpEffect *branch_20 = BRANCH(op_LT_0, seq_then_19, seq_else_21);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_orn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *op_OR_1 = LOGOR(Rt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_ornp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);
	RzILOpPure *op_OR_1 = LOGOR(Rtt, op_NOT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_LSHIFT_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_LSHIFT_3 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_LSHIFT_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_paslhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_RSHIFT_3 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_RSHIFT_3 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pasrhtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_2 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp358;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_3, VARL("h_tmp358"), VARLP("const_pos0LL")));
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_SEXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp358", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(op_INV_2, seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp359;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_3, VARL("h_tmp359"), VARLP("const_pos0LL")));
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_SEXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp359", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(op_INV_2, seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp360;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp360"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp360", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp361;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp361"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp361", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp362;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_3, VARL("h_tmp362"), VARLP("const_pos0LL")));
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_SEXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp362", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(op_INV_2, seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp363;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_10 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_3, VARL("h_tmp363"), VARLP("const_pos0LL")));
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_SEXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp363", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(op_INV_2, seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp364;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp364"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp364", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_psxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp365;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp365"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp365", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_11);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_10);
	RzILOpEffect *nop_13 = NOP();
	RzILOpEffect *seq_then_14 = SEQN(1, seq_12);
	RzILOpEffect *seq_else_16 = SEQN(1, nop_13);
	RzILOpEffect *branch_15 = BRANCH(NON_ZERO(op_AND_0), seq_then_14, seq_else_16);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp366;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_11 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_10 = ITE(op_NE_3, VARL("h_tmp366"), cast_11);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_EXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp366", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *seq_14 = SEQN(2, seq_9, op_ASSIGN_12);
	RzILOpEffect *nop_15 = NOP();
	RzILOpEffect *seq_then_16 = SEQN(1, seq_14);
	RzILOpEffect *seq_else_18 = SEQN(1, nop_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_2, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp367;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_11 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_10 = ITE(op_NE_3, VARL("h_tmp367"), cast_11);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_EXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp367", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *seq_14 = SEQN(2, seq_9, op_ASSIGN_12);
	RzILOpEffect *nop_15 = NOP();
	RzILOpEffect *seq_then_16 = SEQN(1, seq_14);
	RzILOpEffect *seq_else_18 = SEQN(1, nop_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_2, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp368;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp368"), cast_10);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp368", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtbtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp369;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp369"), cast_10);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp369", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp370;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_11 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_10 = ITE(op_NE_3, VARL("h_tmp370"), cast_11);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_EXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp370", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *seq_14 = SEQN(2, seq_9, op_ASSIGN_12);
	RzILOpEffect *nop_15 = NOP();
	RzILOpEffect *seq_then_16 = SEQN(1, seq_14);
	RzILOpEffect *seq_else_18 = SEQN(1, nop_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_2, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp371;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_NE_3 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_5 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_6 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_7 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_11 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_10 = ITE(op_NE_3, VARL("h_tmp371"), cast_11);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(cond_10)), cond_10);

	// WRITE
	RzILOpEffect *c_call_4 = HEX_EXTRACT64(arg_cast_5, arg_cast_6, arg_cast_7);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp371", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *seq_14 = SEQN(2, seq_9, op_ASSIGN_12);
	RzILOpEffect *nop_15 = NOP();
	RzILOpEffect *seq_then_16 = SEQN(1, seq_14);
	RzILOpEffect *seq_else_18 = SEQN(1, nop_15);
	RzILOpEffect *branch_17 = BRANCH(op_INV_2, seq_then_16, seq_else_18);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxtht(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp372;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp372"), cast_10);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp372", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_pzxthtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp373;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_NE_2 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_10 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_9 = ITE(op_NE_2, VARL("h_tmp373"), cast_10);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(cond_9)), cond_9);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_EXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp373", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *seq_13 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *nop_14 = NOP();
	RzILOpEffect *seq_then_15 = SEQN(1, seq_13);
	RzILOpEffect *seq_else_17 = SEQN(1, nop_14);
	RzILOpEffect *branch_16 = BRANCH(NON_ZERO(op_AND_0), seq_then_15, seq_else_17);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_16);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_EQ_0 = EQ(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_EQ_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_EQ_1 = EQ(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_EQ_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NE_0 = INV(EQ(Rs, Rt));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_NE_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_rcmpneqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NE_1 = INV(EQ(Rs, VARL("s")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_NE_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_EQ_1 = LET("const_pos0", const_pos0, EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_2 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_3 = CAST(64, MSB(DUP(cast_st32_2)), cast_st32_2);
	RzILOpPure *op_SUB_4 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_4));
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(op_LSHIFT_5)), op_LSHIFT_5);
	RzILOpPure *op_ADD_6 = ADD(cast_st64_3, cast_7);
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_8 = ITE(op_EQ_1, cast_9, op_ADD_6);
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(cond_8, VARL("u"));
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_RSHIFT_10)), op_RSHIFT_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_ri_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp374;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp375;
	// Declare: ut32 h_tmp376;
	// Declare: ut32 h_tmp377;
	// Declare: ut64 h_tmp378;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_EQ_2 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *op_SUB_5 = LET("const_pos1", const_pos1, SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_5));
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(op_LSHIFT_6)), op_LSHIFT_6);
	RzILOpPure *op_ADD_7 = ADD(cast_st64_4, cast_8);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_9 = ITE(op_EQ_2, cast_10, op_ADD_7);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cond_9);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp374"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_18 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *op_SUB_21 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_22 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_21));
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(op_LSHIFT_22)), op_LSHIFT_22);
	RzILOpPure *op_ADD_23 = ADD(cast_st64_20, cast_24);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_25 = ITE(op_EQ_18, cast_26, op_ADD_23);
	RzILOpPure *op_EQ_27 = EQ(cond_17, cond_25);
	RzILOpPure *op_EQ_28 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *op_SUB_31 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_32 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_31));
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_LSHIFT_32)), op_LSHIFT_32);
	RzILOpPure *op_ADD_33 = ADD(cast_st64_30, cast_34);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_35 = ITE(op_EQ_28, cast_36, op_ADD_33);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp376"))), VARL("h_tmp376"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp377"))), VARL("h_tmp377"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp375")), VARL("h_tmp378"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_EQ_59 = LET("const_pos0", DUP(const_pos0), EQ(VARL("u"), VARLP("const_pos0")));
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_SUB_62 = LET("const_pos1", DUP(const_pos1), SUB(VARL("u"), VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_62));
	RzILOpPure *cast_65 = CAST(64, MSB(DUP(op_LSHIFT_63)), op_LSHIFT_63);
	RzILOpPure *op_ADD_64 = ADD(cast_st64_61, cast_65);
	RzILOpPure *cast_67 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_66 = ITE(op_EQ_59, cast_67, op_ADD_64);
	RzILOpPure *cast_69 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_68 = SLT(cond_66, cast_69);
	RzILOpPure *op_SUB_70 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cond_78 = ITE(op_EQ_27, cond_35, cond_77);
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(cond_78, VARL("u"));
	RzILOpPure *cast_81 = CAST(32, MSB(DUP(op_RSHIFT_79)), op_RSHIFT_79);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp374", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp375", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp376", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp377", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp378", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_16, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_1, seq_82, seq_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos5 = UN(32, 0x5);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp379;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp380;
	// Declare: ut64 h_tmp381;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos5", const_pos5, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp379"), cast_8);
	RzILOpPure *cast_10 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_9 = EQ(cond_7, cast_10);
	RzILOpPure *cast_st32_11 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_12 = CAST(64, MSB(DUP(cast_st32_11)), cast_st32_11);
	RzILOpPure *op_NE_13 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_21 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_20 = ITE(op_NE_13, VARL("h_tmp380"), cast_21);
	RzILOpPure *cast_23 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_22 = SUB(cond_20, cast_23);
	RzILOpPure *op_LSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_22));
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_LSHIFT_24)), op_LSHIFT_24);
	RzILOpPure *op_ADD_25 = ADD(cast_st64_12, cast_26);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_27 = ITE(op_EQ_9, cast_28, op_ADD_25);
	RzILOpPure *op_NE_29 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_37 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_36 = ITE(op_NE_29, VARL("h_tmp381"), cast_37);
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(cond_27, cond_36);
	RzILOpPure *cast_40 = CAST(32, MSB(DUP(op_RSHIFT_38)), op_RSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp379", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_14 = HEX_EXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp380", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_30 = HEX_EXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp381", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_19, seq_35, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_round_rr_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos5 = UN(32, 0x5);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp382;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp383;
	// Declare: st64 h_tmp384;
	// Declare: ut64 h_tmp385;
	// Declare: ut64 h_tmp386;
	// Declare: ut64 h_tmp387;
	// Declare: ut64 h_tmp388;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp389;
	// Declare: ut32 h_tmp390;
	// Declare: ut32 h_tmp391;
	// Declare: ut64 h_tmp392;
	// Declare: ut64 h_tmp393;
	// Declare: ut64 h_tmp394;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut64 h_tmp395;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_1 = LET("const_pos5", const_pos5, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_3 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_4 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_5 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_9 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_8 = ITE(op_NE_1, VARL("h_tmp382"), cast_9);
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_10 = EQ(cond_8, cast_11);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(cast_st32_12)), cast_st32_12);
	RzILOpPure *op_NE_14 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_22 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_21 = ITE(op_NE_14, VARL("h_tmp383"), cast_22);
	RzILOpPure *cast_24 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_23 = SUB(cond_21, cast_24);
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_23));
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_LSHIFT_25)), op_LSHIFT_25);
	RzILOpPure *op_ADD_26 = ADD(cast_st64_13, cast_27);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_28 = ITE(op_EQ_10, cast_29, op_ADD_26);
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, cond_28);
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_0, VARL("h_tmp384"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_38 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_40 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_42 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_46 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_45 = ITE(op_NE_38, VARL("h_tmp385"), cast_46);
	RzILOpPure *cast_48 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_47 = EQ(cond_45, cast_48);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st32_49)), cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_59 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_58 = ITE(op_NE_51, VARL("h_tmp386"), cast_59);
	RzILOpPure *cast_61 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_60 = SUB(cond_58, cast_61);
	RzILOpPure *op_LSHIFT_62 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_60));
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(op_LSHIFT_62)), op_LSHIFT_62);
	RzILOpPure *op_ADD_63 = ADD(cast_st64_50, cast_64);
	RzILOpPure *cast_66 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_65 = ITE(op_EQ_47, cast_66, op_ADD_63);
	RzILOpPure *op_EQ_67 = EQ(cond_37, cond_65);
	RzILOpPure *op_NE_68 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_70 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_71 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_72 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_76 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_75 = ITE(op_NE_68, VARL("h_tmp387"), cast_76);
	RzILOpPure *cast_78 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_77 = EQ(cond_75, cast_78);
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *op_NE_81 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_83 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_84 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_85 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_89 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_88 = ITE(op_NE_81, VARL("h_tmp388"), cast_89);
	RzILOpPure *cast_91 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_90 = SUB(cond_88, cast_91);
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_90));
	RzILOpPure *cast_94 = CAST(64, MSB(DUP(op_LSHIFT_92)), op_LSHIFT_92);
	RzILOpPure *op_ADD_93 = ADD(cast_st64_80, cast_94);
	RzILOpPure *cast_96 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_95 = ITE(op_EQ_77, cast_96, op_ADD_93);
	RzILOpPure *arg_cast_107 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_108 = CAST(64, MSB(DUP(VARL("h_tmp390"))), VARL("h_tmp390"));
	RzILOpPure *arg_cast_109 = CAST(64, MSB(DUP(VARL("h_tmp391"))), VARL("h_tmp391"));
	RzILOpPure *arg_cast_110 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_115 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_114 = ITE(NON_ZERO(VARL("h_tmp389")), VARL("h_tmp392"), cast_115);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, cond_114);
	RzILOpPure *op_NE_119 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_121 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_122 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_123 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_127 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_126 = ITE(op_NE_119, VARL("h_tmp393"), cast_127);
	RzILOpPure *cast_129 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_128 = EQ(cond_126, cast_129);
	RzILOpPure *cast_st32_130 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_131 = CAST(64, MSB(DUP(cast_st32_130)), cast_st32_130);
	RzILOpPure *op_NE_132 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_140 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_139 = ITE(op_NE_132, VARL("h_tmp394"), cast_140);
	RzILOpPure *cast_142 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_141 = SUB(cond_139, cast_142);
	RzILOpPure *op_LSHIFT_143 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARLP("const_pos1"), op_SUB_141));
	RzILOpPure *cast_145 = CAST(64, MSB(DUP(op_LSHIFT_143)), op_LSHIFT_143);
	RzILOpPure *op_ADD_144 = ADD(cast_st64_131, cast_145);
	RzILOpPure *cast_147 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_146 = ITE(op_EQ_128, cast_147, op_ADD_144);
	RzILOpPure *cast_149 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_148 = SLT(cond_146, cast_149);
	RzILOpPure *op_SUB_150 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_151 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_150));
	RzILOpPure *op_NEG_152 = NEG(op_LSHIFT_151);
	RzILOpPure *op_SUB_153 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_154 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_153));
	RzILOpPure *cast_156 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_155 = SUB(op_LSHIFT_154, cast_156);
	RzILOpPure *cond_157 = ITE(op_LT_148, op_NEG_152, op_SUB_155);
	RzILOpPure *cond_158 = ITE(op_EQ_67, cond_95, cond_157);
	RzILOpPure *op_NE_159 = LET("const_pos5", DUP(const_pos5), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos5"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_161 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_162 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_163 = LET("const_pos5", DUP(const_pos5), CAST(64, MSB(DUP(VARLP("const_pos5"))), VARLP("const_pos5")));
	RzILOpPure *cast_167 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_166 = ITE(op_NE_159, VARL("h_tmp395"), cast_167);
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(cond_158, cond_166);
	RzILOpPure *cast_170 = CAST(32, MSB(DUP(op_RSHIFT_168)), op_RSHIFT_168);

	// WRITE
	RzILOpEffect *c_call_2 = HEX_EXTRACT64(arg_cast_3, arg_cast_4, arg_cast_5);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_6 = SETL("h_tmp382", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_7 = SEQN(2, c_call_2, op_ASSIGN_hybrid_tmp_6);
	RzILOpEffect *c_call_15 = HEX_EXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp383", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp384", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(3, seq_7, seq_20, seq_35);
	RzILOpEffect *c_call_39 = HEX_EXTRACT64(arg_cast_40, arg_cast_41, arg_cast_42);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp385", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_52 = HEX_EXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp386", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *c_call_69 = HEX_EXTRACT64(arg_cast_70, arg_cast_71, arg_cast_72);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp387", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *c_call_82 = HEX_EXTRACT64(arg_cast_83, arg_cast_84, arg_cast_85);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_86 = SETL("h_tmp388", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_87 = SEQN(2, c_call_82, op_ASSIGN_hybrid_tmp_86);
	RzILOpEffect *c_call_97 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_98 = SETL("h_tmp389", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_99 = SEQN(2, c_call_97, op_ASSIGN_hybrid_tmp_98);
	RzILOpEffect *c_call_100 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp390", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_100, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_104 = SETL("h_tmp391", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_105 = SEQN(2, c_call_103, op_ASSIGN_hybrid_tmp_104);
	RzILOpEffect *c_call_106 = HEX_DEPOSIT64(arg_cast_107, arg_cast_108, arg_cast_109, arg_cast_110);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_111 = SETL("h_tmp392", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_112 = SEQN(2, c_call_106, op_ASSIGN_hybrid_tmp_111);
	RzILOpEffect *seq_113 = SEQN(3, seq_102, seq_105, seq_112);
	RzILOpEffect *op_ASSIGN_116 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_117);
	RzILOpEffect *seq_118 = SEQN(3, seq_99, seq_113, op_ASSIGN_116);
	RzILOpEffect *c_call_120 = HEX_EXTRACT64(arg_cast_121, arg_cast_122, arg_cast_123);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp393", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_120, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *c_call_133 = HEX_EXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp394", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_160 = HEX_EXTRACT64(arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp395", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_160, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *op_ASSIGN_169 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(9, seq_36, seq_44, seq_57, seq_74, seq_87, seq_125, seq_138, seq_165, op_ASSIGN_169);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_171, seq_118);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_subp_c(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_tfrcpp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Css_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Css = VARG(Css_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, Css);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tfrpcp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Cdd_assoc_tmp, Rss);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_tlbmatch(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a4_vcmpbeq_any(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp396;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(8, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos8", const_pos8, ULT(cast_5, VARLP("const_pos8")));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_9 = LET("const_pos8", DUP(const_pos8), MUL(cast_10, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *cast_13 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st8_14 = CAST(8, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(cast_16, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *op_EQ_21 = EQ(cast_st8_14, cast_st8_20);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(8, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp396", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_23);
	RzILOpEffect *seq_then_24 = SEQN(1, op_ASSIGN_22);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *branch_25 = BRANCH(op_EQ_21, seq_then_24, empty_26);
	RzILOpEffect *seq_27 = SEQN(1, branch_25);
	RzILOpEffect *seq_28 = SEQN(2, seq_8, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_4, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_2, for_30);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_0, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbeqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp397;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_16);
	RzILOpPure *op_EQ_18 = EQ(cast_19, VARL("u"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_EQ_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp397", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp398;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_st8_22 = CAST(8, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *op_GT_23 = SGT(cast_st8_16, cast_st8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp398", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp399;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_19 = CAST(32, MSB(DUP(cast_st8_16)), cast_st8_16);
	RzILOpPure *op_GT_18 = SGT(cast_19, VARL("s"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp399", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpbgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp400;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_16);
	RzILOpPure *op_GT_18 = UGT(cast_19, VARL("u"));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("i"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp400", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_17, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpheqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp401;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_21 = CAST(32, MSB(DUP(cast_st16_18)), cast_st16_18);
	RzILOpPure *op_EQ_20 = EQ(cast_21, VARL("s"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_EQ_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(32, MSB(DUP(cast_st16_42)), cast_st16_42);
	RzILOpPure *op_EQ_43 = EQ(cast_44, VARL("s"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_EQ_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp401", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp402;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_21 = CAST(32, MSB(DUP(cast_st16_18)), cast_st16_18);
	RzILOpPure *op_GT_20 = SGT(cast_21, VARL("s"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(32, MSB(DUP(cast_st16_42)), cast_st16_42);
	RzILOpPure *op_GT_43 = SGT(cast_44, VARL("s"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_GT_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp402", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmphgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp403;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, cast_ut16_18);
	RzILOpPure *op_GT_20 = UGT(cast_21, VARL("u"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_11, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos2", DUP(const_pos2), MUL(cast_31, VARLP("const_pos2")));
	RzILOpPure *op_ADD_32 = LET("const_pos1", const_pos1, ADD(op_MUL_30, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_32));
	RzILOpPure *op_NOT_34 = LOGNOT(op_LSHIFT_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_35 = LOGAND(cast_36, op_NOT_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cast_ut16_42);
	RzILOpPure *op_GT_43 = UGT(cast_44, VARL("u"));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_GT_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), MUL(cast_47, VARLP("const_pos2")));
	RzILOpPure *op_ADD_48 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_46, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_45, op_ADD_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_35, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp403", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(4, op_ASSIGN_27, empty_29, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpweqi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp404;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp405;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_EQ_17 = EQ(cast_st64_15, cast_18);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_EQ_17);
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("j"));
	RzILOpPure *op_OR_21 = LOGOR(op_AND_9, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(8, MSB(DUP(op_OR_21)), op_OR_21);
	RzILOpPure *cast_31 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_32 = LET("const_pos7", const_pos7, ULE(cast_33, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_44 = CAST(32, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_st64_45 = CAST(64, MSB(DUP(cast_st32_44)), cast_st32_44);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_EQ_46 = EQ(cast_st64_45, cast_47);
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_EQ_46);
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_48, VARL("j"));
	RzILOpPure *op_OR_50 = LOGOR(op_AND_39, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp404", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_16 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_23);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(2, op_ASSIGN_22, empty_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_6, seq_25);
	RzILOpEffect *for_28 = REPEAT(op_LE_2, seq_26);
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_0, for_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETL("j", cast_31);
	RzILOpEffect *op_INC_34 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp405", VARL("j"));
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_hybrid_tmp_35, op_INC_34);
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_36, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LE_32, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_30, for_57);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_16, seq_27, empty_29, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgti(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp406;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp407;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_GT_17 = SGT(cast_st64_15, cast_18);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_GT_17);
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("j"));
	RzILOpPure *op_OR_21 = LOGOR(op_AND_9, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(8, MSB(DUP(op_OR_21)), op_OR_21);
	RzILOpPure *cast_31 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_32 = LET("const_pos7", const_pos7, ULE(cast_33, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_44 = CAST(32, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_st64_45 = CAST(64, MSB(DUP(cast_st32_44)), cast_st32_44);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_GT_46 = SGT(cast_st64_45, cast_47);
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_GT_46);
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_48, VARL("j"));
	RzILOpPure *op_OR_50 = LOGOR(op_AND_39, op_LSHIFT_49);
	RzILOpPure *cast_52 = CAST(8, MSB(DUP(op_OR_50)), op_OR_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp406", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_16 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_23);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(2, op_ASSIGN_22, empty_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_6, seq_25);
	RzILOpEffect *for_28 = REPEAT(op_LE_2, seq_26);
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_0, for_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETL("j", cast_31);
	RzILOpEffect *op_INC_34 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp407", VARL("j"));
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_hybrid_tmp_35, op_INC_34);
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_52);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, op_ASSIGN_51, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_36, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LE_32, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_30, for_57);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_16, seq_27, empty_29, seq_56, empty_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vcmpwgtui(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp408;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp409;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *op_GT_18 = UGT(cast_ut64_15, cast_19);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(8, MSB(DUP(op_OR_22)), op_OR_22);
	RzILOpPure *cast_31 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_32 = LET("const_pos7", const_pos7, ULE(cast_33, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_44 = CAST(32, IL_FALSE, op_AND_43);
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, cast_ut32_44);
	RzILOpPure *cast_ut32_46 = CAST(32, IL_FALSE, VARL("u"));
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, cast_ut32_46);
	RzILOpPure *op_GT_47 = UGT(cast_ut64_45, cast_48);
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_GT_47);
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_49, VARL("j"));
	RzILOpPure *op_OR_51 = LOGOR(op_AND_39, op_LSHIFT_50);
	RzILOpPure *cast_53 = CAST(8, MSB(DUP(op_OR_51)), op_OR_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp408", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_16 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_24);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_23, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LE_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *op_ASSIGN_30 = SETL("j", cast_31);
	RzILOpEffect *op_INC_34 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp409", VARL("j"));
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_hybrid_tmp_35, op_INC_34);
	RzILOpEffect *op_ASSIGN_52 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_53);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, op_ASSIGN_52, empty_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_36, seq_55);
	RzILOpEffect *for_58 = REPEAT(op_LE_32, seq_56);
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_30, for_58);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_16, seq_28, seq_57, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp410;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos4", const_pos4, ULT(cast_17, VARLP("const_pos4")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(16, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_LT_27 = SLT(cast_28, cast_st16_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_st16_34)), cast_st16_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp410", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("max", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_LT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp411;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut16_4)), cast_ut16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos4", const_pos4, ULT(cast_17, VARLP("const_pos4")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_ut16_26 = CAST(16, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(16, IL_FALSE, VARL("max"));
	RzILOpPure *op_LT_27 = ULT(cast_28, cast_ut16_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_ut16_34 = CAST(16, IL_FALSE, op_AND_32);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_ut16_34)), cast_ut16_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp411", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("max", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_LT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp412;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, cast_ut32_3);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut64_4)), cast_ut64_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos2", const_pos2, ULT(cast_17, VARLP("const_pos2")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, VARL("max"));
	RzILOpPure *op_LT_27 = ULT(cast_28, cast_ut64_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, cast_ut32_33);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_ut64_34)), cast_ut64_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp412", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("max", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_LT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 max;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp413;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos2", const_pos2, ULT(cast_17, VARLP("const_pos2")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_LT_27 = SLT(cast_28, cast_st64_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_st64_34)), cast_st64_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("max"))), VARL("max"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("max", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp413", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("max", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_LT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp414;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st16_4)), cast_st16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos4", const_pos4, ULT(cast_17, VARLP("const_pos4")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_28 = CAST(16, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_GT_27 = SGT(cast_28, cast_st16_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_st16_34)), cast_st16_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp414", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("min", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_GT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp415;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut16_4)), cast_ut16_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos4", const_pos4, ULT(cast_17, VARLP("const_pos4")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_ut16_26 = CAST(16, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(16, IL_FALSE, VARL("min"));
	RzILOpPure *op_GT_27 = UGT(cast_28, cast_ut16_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_ut16_34 = CAST(16, IL_FALSE, op_AND_32);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_ut16_34)), cast_ut16_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1", DUP(const_pos1), SHIFTL0(VARL("i"), VARLP("const_pos1")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp415", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("min", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_GT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp416;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, cast_ut32_3);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_ut64_4)), cast_ut64_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos2", const_pos2, ULT(cast_17, VARLP("const_pos2")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, VARL("min"));
	RzILOpPure *op_GT_27 = UGT(cast_28, cast_ut64_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_33 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, cast_ut32_33);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_ut64_34)), cast_ut64_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp416", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("min", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_GT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a4_vrminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st8 min;
	// Declare: st4 addr;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp417;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rxx, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *cast_6 = CAST(8, MSB(DUP(cast_st64_4)), cast_st64_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(DUP(Rxx), op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *cast_13 = CAST(4, MSB(DUP(cast_st64_11)), cast_st64_11);
	RzILOpPure *cast_15 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_16 = LET("const_pos2", const_pos2, ULT(cast_17, VARLP("const_pos2")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_GT_27 = SGT(cast_28, cast_st64_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *cast_36 = CAST(8, MSB(DUP(cast_st64_34)), cast_st64_34);
	RzILOpPure *op_LSHIFT_37 = LET("const_pos2", DUP(const_pos2), SHIFTL0(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_OR_38 = LOGOR(Ru, op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(4, MSB(DUP(op_OR_38)), op_OR_38);
	RzILOpPure *op_MUL_48 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(VARL("min"))), VARL("min"));
	RzILOpPure *op_AND_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_54 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(op_AND_52, op_MUL_54);
	RzILOpPure *op_OR_56 = LOGOR(op_AND_51, op_LSHIFT_55);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_59));
	RzILOpPure *op_NOT_61 = LOGNOT(op_LSHIFT_60);
	RzILOpPure *op_AND_62 = LOGAND(DUP(Rxx), op_NOT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARL("addr"))), VARL("addr"));
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(op_AND_63, op_MUL_65);
	RzILOpPure *op_OR_67 = LOGOR(op_AND_62, op_LSHIFT_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_5 = SETL("min", cast_6);
	RzILOpEffect *op_ASSIGN_12 = SETL("addr", cast_13);
	RzILOpEffect *op_ASSIGN_14 = SETL("i", cast_15);
	RzILOpEffect *op_INC_18 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp417", VARL("i"));
	RzILOpEffect *seq_20 = SEQN(2, op_ASSIGN_hybrid_tmp_19, op_INC_18);
	RzILOpEffect *op_ASSIGN_35 = SETL("min", cast_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("addr", cast_40);
	RzILOpEffect *seq_then_41 = SEQN(2, op_ASSIGN_35, op_ASSIGN_39);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *branch_42 = BRANCH(op_GT_27, seq_then_41, empty_43);
	RzILOpEffect *seq_44 = SEQN(1, branch_42);
	RzILOpEffect *seq_45 = SEQN(2, seq_20, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_16, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_14, for_47);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_56);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_67);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_5, op_ASSIGN_12, seq_46, op_ASSIGN_57, empty_58, op_ASSIGN_68, empty_69);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>