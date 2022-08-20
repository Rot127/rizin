// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:38:03-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:04:30-04:00
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
	RzILOpPure *const_pos1023ULL = UN(32, 0x3ff);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos52 = UN(32, 0x34);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos46 = UN(64, 0x2e);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos63 = UN(64, 0x3f);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos1023ULL", const_pos1023ULL, LET("const_pos6", const_pos6, SUB(VARLP("const_pos1023ULL"), VARLP("const_pos6"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos52", const_pos52, SHIFTL0(op_SUB_0, VARLP("const_pos52")));
	RzILOpPure *cast_ut8_3 = LET("u", u, CAST(8, IL_FALSE, VARLP("u")));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_3, VARLP("const_pos46")));
	RzILOpPure *addop_LSHIFT_4Rdd = ADD(op_LSHIFT_4, VARG(Rdd_assoc_tmp));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos63", const_pos63, SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos63"))));
	RzILOpPure *orop_LSHIFT_6Rdd = LOGOR(op_LSHIFT_6, VARG(Rdd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETG(Rdd_assoc_tmp, addop_LSHIFT_4Rdd);
	RzILOpEffect *op_ASSIGN_OR_7 = SETG(Rdd_assoc_tmp, orop_LSHIFT_6Rdd);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, op_ASSIGN_ADD_5, op_ASSIGN_OR_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfimm_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1023ULL = UN(32, 0x3ff);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos52 = UN(32, 0x34);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos46 = UN(64, 0x2e);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos1023ULL", const_pos1023ULL, LET("const_pos6", const_pos6, SUB(VARLP("const_pos1023ULL"), VARLP("const_pos6"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos52", const_pos52, SHIFTL0(op_SUB_0, VARLP("const_pos52")));
	RzILOpPure *cast_ut8_3 = LET("u", u, CAST(8, IL_FALSE, VARLP("u")));
	RzILOpPure *op_LSHIFT_4 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_3, VARLP("const_pos46")));
	RzILOpPure *addop_LSHIFT_4Rdd = ADD(op_LSHIFT_4, VARG(Rdd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *op_ASSIGN_ADD_5 = SETG(Rdd_assoc_tmp, addop_LSHIFT_4Rdd);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_2, op_ASSIGN_ADD_5);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0x00100000 = UN(64, 0x100000);
	RzILOpPure *const_pos20 = UN(32, 0x14);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, cast_ut32_3);
	RzILOpPure *op_NE_5 = LET("const_pos20", const_pos20, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos20"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rtt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_9 = CAST(32, IL_FALSE, op_AND_8);
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, cast_ut32_9);
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_OR_15 = LET("const_pos0x00100000", const_pos0x00100000, LOGOR(VARLP("const_pos0x00100000"), cond_14));
	RzILOpPure *op_MUL_16 = MUL(cast_ut64_4, op_OR_15);
	RzILOpPure *op_LSHIFT_17 = LET("const_pos1", const_pos1, SHIFTL0(op_MUL_16, VARLP("const_pos1")));
	RzILOpPure *addop_LSHIFT_17Rxx = ADD(op_LSHIFT_17, Rxx);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_EXTRACT64(cast_ut64_10, VARLP("const_pos0"), VARLP("const_pos20"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *op_ASSIGN_ADD_18 = SETG(Rxx_assoc_tmp, addop_LSHIFT_17Rxx);
	RzILOpEffect *seq_19 = SEQN(2, seq_13, op_ASSIGN_ADD_18);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_19);

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
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, cast_ut32_3);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, cast_ut64_4);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, cast_ut32_5);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_10 = CAST(32, IL_FALSE, op_AND_9);
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, cast_ut64_11);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_ut64_6, cast_ut64_13);
	RzILOpPure *op_RSHIFT_16 = LET("const_pos32", const_pos32, SHIFTR0(VARL("prod"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_17 = LET("const_pos1", const_pos1, SHIFTL0(op_RSHIFT_16, VARLP("const_pos1")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(VARL("prod"), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *cast_ut64_23 = CAST(32, IL_FALSE, cast_ut32_22);
	RzILOpPure *op_NE_24 = LET("const_pos0", const_pos0, INV(EQ(cast_ut64_23, VARLP("const_pos0"))));
	RzILOpPure *op_LSHIFT_25 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos0", const_pos0, SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos0"))));
	RzILOpPure *op_NOT_26 = LOGNOT(op_LSHIFT_25);
	RzILOpPure *op_AND_27 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_26);
	RzILOpPure *cast_ut64_28 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos0", const_pos0, SHIFTL0(cast_ut64_28, VARLP("const_pos0")));
	RzILOpPure *op_OR_30 = LOGOR(op_AND_27, op_LSHIFT_29);

	// WRITE
	RzILOpEffect *op_ASSIGN_15 = SETL("prod", op_MUL_14);
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_LSHIFT_17);
	RzILOpEffect *op_ASSIGN_31 = SETG(Rdd_assoc_tmp, op_OR_30);
	RzILOpEffect *seq_then_32 = SEQN(1, op_ASSIGN_31);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *branch_33 = BRANCH(op_NE_24, seq_then_32, empty_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_15, op_ASSIGN_18, branch_33, empty_35);

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
	RzILOpPure *op_LSHIFT_3 = LET("u", u, LET("const_pos17", const_pos17, SHIFTL0(VARLP("u"), VARLP("const_pos17"))));
	RzILOpPure *addop_LSHIFT_3Rd = ADD(op_LSHIFT_3, VARG(Rd_assoc_tmp));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos1", const_pos1, LET("const_pos31", const_pos31, SHIFTL0(VARLP("const_pos1"), VARLP("const_pos31"))));
	RzILOpPure *orop_LSHIFT_5Rd = LOGOR(op_LSHIFT_5, VARG(Rd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *op_ASSIGN_ADD_4 = SETG(Rd_assoc_tmp, addop_LSHIFT_3Rd);
	RzILOpEffect *op_ASSIGN_OR_6 = SETG(Rd_assoc_tmp, orop_LSHIFT_5Rd);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, op_ASSIGN_ADD_4, op_ASSIGN_OR_6);

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
	RzILOpPure *op_LSHIFT_3 = LET("u", u, LET("const_pos17", const_pos17, SHIFTL0(VARLP("u"), VARLP("const_pos17"))));
	RzILOpPure *addop_LSHIFT_3Rd = ADD(op_LSHIFT_3, VARG(Rd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_LSHIFT_1);
	RzILOpEffect *op_ASSIGN_ADD_4 = SETG(Rd_assoc_tmp, addop_LSHIFT_3Rd);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_2, op_ASSIGN_ADD_4);

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