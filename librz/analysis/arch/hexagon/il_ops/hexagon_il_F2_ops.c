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

RzILOpEffect *hex_il_op_f2_conv_d2df(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_d2sf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2d(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2d_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2sf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2ud(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2ud_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2uw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2uw_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2w(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_df2w_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2d(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2d_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2df(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2ud(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2ud_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2uw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2uw_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2w(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_sf2w_chop(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_ud2df(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_ud2sf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_uw2df(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_uw2sf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_w2df(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_conv_w2sf(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfadd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfclass(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfcmpeq(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfcmpge(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfcmpgt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfcmpuo(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfimm_n(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1023ULL = UN(64, 0x3ff);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos52 = UN(32, 0x34);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos46 = UN(32, 0x2e);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos63 = UN(32, 0x3f);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos6", const_pos6, CAST(64, IL_FALSE, VARLP("const_pos6")));
	RzILOpPure *op_SUB_0 = LET("const_pos1023ULL", const_pos1023ULL, SUB(VARLP("const_pos1023ULL"), cast_1));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos52", const_pos52, SHIFTL0(op_SUB_0, VARLP("const_pos52")));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, VARL("u"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_5, VARLP("const_pos46")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *addop_LSHIFT_6Rdd = ADD(cast_8, VARG(Rdd_assoc_tmp));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos63", const_pos63, SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos63"))));
	RzILOpPure *orop_LSHIFT_9Rdd = LOGOR(op_LSHIFT_9, VARG(Rdd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *imm_assign_4 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_7 = SETG(Rdd_assoc_tmp, addop_LSHIFT_6Rdd);
	RzILOpEffect *op_ASSIGN_OR_10 = SETG(Rdd_assoc_tmp, orop_LSHIFT_9Rdd);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_4, op_ASSIGN_3, op_ASSIGN_ADD_7, op_ASSIGN_OR_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfimm_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1023ULL = UN(64, 0x3ff);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos52 = UN(32, 0x34);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos46 = UN(32, 0x2e);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos6", const_pos6, CAST(64, IL_FALSE, VARLP("const_pos6")));
	RzILOpPure *op_SUB_0 = LET("const_pos1023ULL", const_pos1023ULL, SUB(VARLP("const_pos1023ULL"), cast_1));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos52", const_pos52, SHIFTL0(op_SUB_0, VARLP("const_pos52")));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, VARL("u"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_5, VARLP("const_pos46")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *addop_LSHIFT_6Rdd = ADD(cast_8, VARG(Rdd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc_tmp, op_LSHIFT_2);
	RzILOpEffect *imm_assign_4 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_7 = SETG(Rdd_assoc_tmp, addop_LSHIFT_6Rdd);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, op_ASSIGN_3, op_ASSIGN_ADD_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfmax(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfmin(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfmpyfix(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfmpyhh(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_dfmpylh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0x00100000 = UN(32, 0x100000);
	RzILOpPure *const_pos20 = UN(32, 0x14);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp438;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *op_NE_6 = LET("const_pos20", const_pos20, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos20"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_9 = LOGAND(op_RSHIFT_8, cast_10);
	RzILOpPure *cast_ut32_11 = CAST(32, IL_FALSE, op_AND_9);
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, cast_ut32_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos20", DUP(const_pos20), CAST(64, MSB(DUP(VARLP("const_pos20"))), VARLP("const_pos20")));
	RzILOpPure *cast_19 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_18 = ITE(op_NE_6, VARL("h_tmp438"), cast_19);
	RzILOpPure *cast_21 = LET("const_pos0x00100000", const_pos0x00100000, CAST(64, IL_FALSE, VARLP("const_pos0x00100000")));
	RzILOpPure *op_OR_20 = LOGOR(cast_21, cond_18);
	RzILOpPure *op_MUL_22 = MUL(cast_ut64_5, op_OR_20);
	RzILOpPure *op_LSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_MUL_22, VARLP("const_pos1")));
	RzILOpPure *addop_LSHIFT_23Rxx = ADD(op_LSHIFT_23, Rxx);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_EXTRACT64(cast_ut64_12, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp438", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *op_ASSIGN_ADD_24 = SETG(Rxx_assoc_tmp, addop_LSHIFT_23Rxx);
	RzILOpEffect *seq_25 = SEQN(2, seq_17, op_ASSIGN_ADD_24);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfmpyll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 prod;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *cast_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_2 = LOGAND(op_RSHIFT_1, cast_3);
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, cast_ut32_4);
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, cast_ut64_5);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *cast_11 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, op_AND_10);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, cast_ut64_13);
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *op_MUL_16 = MUL(cast_ut64_7, cast_ut64_15);
	RzILOpPure *cast_18 = CAST(8, IL_FALSE, op_MUL_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos32", DUP(const_pos32), SHIFTR0(VARL("prod"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos1", const_pos1, SHIFTL0(op_RSHIFT_19, VARLP("const_pos1")));
	RzILOpPure *cast_22 = CAST(64, IL_FALSE, op_LSHIFT_20);
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(VARL("prod"), op_MUL_23);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_RSHIFT_24)), op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_27 = CAST(32, IL_FALSE, op_AND_25);
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzILOpPure *cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_NE_29 = INV(EQ(cast_ut64_28, cast_30));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos0", DUP(const_pos0), SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos0"))));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_32);
	RzILOpPure *cast_ut64_34 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_ut64_34, VARLP("const_pos0")));
	RzILOpPure *op_OR_36 = LOGOR(op_AND_33, op_LSHIFT_35);

	// WRITE
	RzILOpEffect *op_ASSIGN_17 = SETL("prod", cast_18);
	RzILOpEffect *op_ASSIGN_21 = SETG(Rdd_assoc_tmp, cast_22);
	RzILOpEffect *op_ASSIGN_37 = SETG(Rdd_assoc_tmp, op_OR_36);
	RzILOpEffect *seq_then_38 = SEQN(1, op_ASSIGN_37);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *branch_39 = BRANCH(op_NE_29, seq_then_38, empty_40);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_17, op_ASSIGN_21, branch_39, empty_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfsub(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfadd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfclass(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfcmpeq(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfcmpge(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfcmpgt(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfcmpuo(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffixupd(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffixupn(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffixupr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffma(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffma_lib(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffma_sc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffms(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sffms_lib(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfimm_n(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos127 = UN(32, 0x7f);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos23 = UN(32, 0x17);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos17 = UN(32, 0x11);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos31 = UN(32, 0x1f);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos127", const_pos127, LET("const_pos6", const_pos6, SUB(VARLP("const_pos127"), VARLP("const_pos6"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos23", const_pos23, SHIFTL0(op_SUB_0, VARLP("const_pos23")));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos17", const_pos17, SHIFTL0(VARL("u"), VARLP("const_pos17")));
	RzILOpPure *addop_LSHIFT_4Rd = ADD(op_LSHIFT_4, VARG(Rd_assoc_tmp));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1", const_pos1, LET("const_pos31", const_pos31, SHIFTL0(VARLP("const_pos1"), VARLP("const_pos31"))));
	RzILOpPure *orop_LSHIFT_6Rd = LOGOR(op_LSHIFT_6, VARG(Rd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *imm_assign_3 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETG(Rd_assoc_tmp, addop_LSHIFT_4Rd);
	RzILOpEffect *op_ASSIGN_OR_7 = SETG(Rd_assoc_tmp, orop_LSHIFT_6Rd);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_3, op_ASSIGN_2, op_ASSIGN_ADD_5, op_ASSIGN_OR_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_sfimm_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos127 = UN(32, 0x7f);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos23 = UN(32, 0x17);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos17 = UN(32, 0x11);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos127", const_pos127, LET("const_pos6", const_pos6, SUB(VARLP("const_pos127"), VARLP("const_pos6"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos23", const_pos23, SHIFTL0(op_SUB_0, VARLP("const_pos23")));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos17", const_pos17, SHIFTL0(VARL("u"), VARLP("const_pos17")));
	RzILOpPure *addop_LSHIFT_4Rd = ADD(op_LSHIFT_4, VARG(Rd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *imm_assign_3 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETG(Rd_assoc_tmp, addop_LSHIFT_4Rd);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_3, op_ASSIGN_2, op_ASSIGN_ADD_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_sfinvsqrta(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfmax(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfmin(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfmpy(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfrecipa(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_f2_sfsub(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>