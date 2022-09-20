// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 00:30:08-04:00
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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(op_LSHIFT_2)), op_LSHIFT_2);
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, VARL("u"));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_6, VARLP("const_pos46")));
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(op_LSHIFT_7)), op_LSHIFT_7);
	RzILOpPure *addop_LSHIFT_7Rdd = ADD(cast_9, VARG(Rdd_assoc_tmp));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos63", const_pos63, SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos63"))));
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Rdd_assoc_tmp));
	RzILOpPure *orop_LSHIFT_10Rdd = LOGOR(op_LSHIFT_10, cast_12);
	RzILOpPure *cast_13 = CAST(64, MSB(DUP(orop_LSHIFT_10Rdd)), orop_LSHIFT_10Rdd);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_4);
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_8 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, addop_LSHIFT_7Rdd);
	RzILOpEffect *op_ASSIGN_OR_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_5, op_ASSIGN_3, op_ASSIGN_ADD_8, op_ASSIGN_OR_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_dfimm_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1023ULL = UN(64, 0x3ff);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos52 = UN(32, 0x34);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos46 = UN(32, 0x2e);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos6", const_pos6, CAST(64, IL_FALSE, VARLP("const_pos6")));
	RzILOpPure *op_SUB_0 = LET("const_pos1023ULL", const_pos1023ULL, SUB(VARLP("const_pos1023ULL"), cast_1));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos52", const_pos52, SHIFTL0(op_SUB_0, VARLP("const_pos52")));
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(op_LSHIFT_2)), op_LSHIFT_2);
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, VARL("u"));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos46", const_pos46, SHIFTL0(cast_ut8_6, VARLP("const_pos46")));
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(op_LSHIFT_7)), op_LSHIFT_7);
	RzILOpPure *addop_LSHIFT_7Rdd = ADD(cast_9, VARG(Rdd_assoc_tmp));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_4);
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_8 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, addop_LSHIFT_7Rdd);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, op_ASSIGN_3, op_ASSIGN_ADD_8);

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
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
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
	// Declare: ut64 h_tmp439;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, op_AND_2);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, cast_ut32_3);
	RzILOpPure *op_NE_5 = LET("const_pos20", const_pos20, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos20"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rtt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_9 = CAST(32, IL_FALSE, op_AND_8);
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, cast_ut32_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos20", DUP(const_pos20), CAST(64, MSB(DUP(VARLP("const_pos20"))), VARLP("const_pos20")));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(op_NE_5, VARL("h_tmp439"), cast_17);
	RzILOpPure *cast_19 = LET("const_pos0x00100000", const_pos0x00100000, CAST(64, IL_FALSE, VARLP("const_pos0x00100000")));
	RzILOpPure *op_OR_18 = LOGOR(cast_19, cond_16);
	RzILOpPure *op_MUL_20 = MUL(cast_ut64_4, op_OR_18);
	RzILOpPure *op_LSHIFT_21 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_MUL_20, VARLP("const_pos1")));
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *addop_LSHIFT_21Rxx = ADD(op_LSHIFT_21, cast_23);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(addop_LSHIFT_21Rxx)), addop_LSHIFT_21Rxx);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_EXTRACT64(cast_ut64_10, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp439", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_ADD_22 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_24);
	RzILOpEffect *seq_25 = SEQN(2, seq_15, op_ASSIGN_ADD_22);
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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rtt, op_MUL_7);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_10 = CAST(32, IL_FALSE, op_AND_9);
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, cast_ut64_11);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_MUL_14 = MUL(cast_ut64_6, cast_ut64_13);
	RzILOpPure *cast_16 = CAST(8, IL_FALSE, op_MUL_14);
	RzILOpPure *op_RSHIFT_17 = LET("const_pos32", DUP(const_pos32), SHIFTR0(VARL("prod"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", const_pos1, SHIFTL0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_20 = CAST(64, MSB(DUP(op_LSHIFT_18)), op_LSHIFT_18);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(VARL("prod"), op_MUL_21);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(op_RSHIFT_22)), op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_NE_27 = INV(EQ(cast_ut64_26, cast_28));
	RzILOpPure *op_LSHIFT_29 = LET("const_pos1ULL", const_pos1ULL, LET("const_pos0", DUP(const_pos0), SHIFTL0(VARLP("const_pos1ULL"), VARLP("const_pos0"))));
	RzILOpPure *op_NOT_30 = LOGNOT(op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, VARG(Rdd_assoc_tmp));
	RzILOpPure *op_AND_31 = LOGAND(cast_32, op_NOT_30);
	RzILOpPure *cast_ut64_33 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos0", DUP(const_pos0), SHIFTL0(cast_ut64_33, VARLP("const_pos0")));
	RzILOpPure *op_OR_35 = LOGOR(op_AND_31, op_LSHIFT_34);
	RzILOpPure *cast_37 = CAST(64, MSB(DUP(op_OR_35)), op_OR_35);

	// WRITE
	RzILOpEffect *op_ASSIGN_15 = SETL("prod", cast_16);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_20);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_37);
	RzILOpEffect *seq_then_38 = SEQN(1, op_ASSIGN_36);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *branch_39 = BRANCH(op_NE_27, seq_then_38, empty_40);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_15, op_ASSIGN_19, branch_39, empty_41);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, MSB(DUP(op_LSHIFT_1)), op_LSHIFT_1);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos17", const_pos17, SHIFTL0(VARL("u"), VARLP("const_pos17")));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARG(Rd_assoc_tmp));
	RzILOpPure *addop_LSHIFT_5Rd = ADD(op_LSHIFT_5, cast_7);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(addop_LSHIFT_5Rd)), addop_LSHIFT_5Rd);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1", const_pos1, LET("const_pos31", const_pos31, SHIFTL0(VARLP("const_pos1"), VARLP("const_pos31"))));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARG(Rd_assoc_tmp));
	RzILOpPure *orop_LSHIFT_9Rd = LOGOR(op_LSHIFT_9, cast_11);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(orop_LSHIFT_9Rd)), orop_LSHIFT_9Rd);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_3);
	RzILOpEffect *imm_assign_4 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *op_ASSIGN_OR_10 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_4, op_ASSIGN_2, op_ASSIGN_ADD_6, op_ASSIGN_OR_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_f2_sfimm_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos127 = UN(32, 0x7f);
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos23 = UN(32, 0x17);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos17 = UN(32, 0x11);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("const_pos127", const_pos127, LET("const_pos6", const_pos6, SUB(VARLP("const_pos127"), VARLP("const_pos6"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos23", const_pos23, SHIFTL0(op_SUB_0, VARLP("const_pos23")));
	RzILOpPure *cast_3 = CAST(32, MSB(DUP(op_LSHIFT_1)), op_LSHIFT_1);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos17", const_pos17, SHIFTL0(VARL("u"), VARLP("const_pos17")));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARG(Rd_assoc_tmp));
	RzILOpPure *addop_LSHIFT_5Rd = ADD(op_LSHIFT_5, cast_7);
	RzILOpPure *cast_8 = CAST(32, MSB(DUP(addop_LSHIFT_5Rd)), addop_LSHIFT_5Rd);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_3);
	RzILOpEffect *imm_assign_4 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_ADD_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_8);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_4, op_ASSIGN_2, op_ASSIGN_ADD_6);

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