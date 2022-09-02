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

RzILOpEffect *hex_il_op_s5_asrhub_rnd_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_RSHIFT_15 = LET("u", u, SHIFTR0(cast_st16_14, VARLP("u")));
	RzILOpPure *op_ADD_16 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_15, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_26 = CAST(16, MSB(op_AND_25), op_AND_25);
	RzILOpPure *op_RSHIFT_27 = LET("u", u, SHIFTR0(cast_st16_26, VARLP("u")));
	RzILOpPure *op_ADD_28 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_27, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_29 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_28, VARLP("const_pos1")));
	RzILOpPure *op_EQ_30 = EQ(cond_22, op_RSHIFT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_RSHIFT_35 = LET("u", u, SHIFTR0(cast_st16_34, VARLP("u")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_35, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_37 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_36, VARLP("const_pos1")));
	RzILOpPure *cond_54 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_57 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rss), op_MUL_57);
	RzILOpPure *op_AND_59 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_58, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_60 = CAST(16, MSB(op_AND_59), op_AND_59);
	RzILOpPure *op_RSHIFT_61 = LET("u", u, SHIFTR0(cast_st16_60, VARLP("u")));
	RzILOpPure *op_ADD_62 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_61, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_63 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_62, VARLP("const_pos1")));
	RzILOpPure *op_LT_64 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_63, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_65 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_66 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_65, VARLP("const_pos1")));
	RzILOpPure *cond_67 = LET("const_pos0", const_pos0, ITE(op_LT_64, VARLP("const_pos0"), op_SUB_66));
	RzILOpPure *cond_68 = ITE(op_EQ_30, op_RSHIFT_37, cond_67);
	RzILOpPure *op_AND_69 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_68, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_70 = CAST(64, IL_FALSE, op_AND_69);
	RzILOpPure *op_MUL_71 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_72 = SHIFTL0(cast_ut64_70, op_MUL_71);
	RzILOpPure *op_OR_73 = LOGOR(op_AND_9, op_LSHIFT_72);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_18 = HEX_EXTRACT64(op_RSHIFT_17, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos8", const_pos8, VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_5, seq_20);
	RzILOpEffect *c_call_38 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_21, seq_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_41, seq_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_45, seq_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_49, seq_52);
	RzILOpEffect *op_ASSIGN_55 = SETG(usr_assoc_tmp, cond_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_53, op_ASSIGN_55);
	RzILOpEffect *op_ASSIGN_74 = SETG(Rd_assoc_tmp, op_OR_73);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *seq_76 = SEQN(2, op_ASSIGN_74, empty_75);
	RzILOpEffect *for_77 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_76));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_77, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_asrhub_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_RSHIFT_15 = LET("u", u, SHIFTR0(cast_st16_14, VARLP("u")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(op_AND_23), op_AND_23);
	RzILOpPure *op_RSHIFT_25 = LET("u", u, SHIFTR0(cast_st16_24, VARLP("u")));
	RzILOpPure *op_EQ_26 = EQ(cond_20, op_RSHIFT_25);
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *op_RSHIFT_31 = LET("u", u, SHIFTR0(cast_st16_30, VARLP("u")));
	RzILOpPure *cond_48 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_51 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(op_AND_53), op_AND_53);
	RzILOpPure *op_RSHIFT_55 = LET("u", u, SHIFTR0(cast_st16_54, VARLP("u")));
	RzILOpPure *op_LT_56 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_55, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_58 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_57, VARLP("const_pos1")));
	RzILOpPure *cond_59 = LET("const_pos0", const_pos0, ITE(op_LT_56, VARLP("const_pos0"), op_SUB_58));
	RzILOpPure *cond_60 = ITE(op_EQ_26, op_RSHIFT_31, cond_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_60, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_9, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_EXTRACT64(op_RSHIFT_15, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos8", const_pos8, VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *seq_35 = SEQN(2, seq_19, seq_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_35, seq_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_39, seq_42);
	RzILOpEffect *c_call_44 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_43, seq_46);
	RzILOpEffect *op_ASSIGN_49 = SETG(usr_assoc_tmp, cond_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_47, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_66 = SETG(Rd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_66, empty_67);
	RzILOpEffect *for_69 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_68));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_69, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_popcountp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s5_vasrhrnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_RSHIFT_14 = LET("u", u, SHIFTR0(cast_st16_13, VARLP("u")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_14, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_16 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_15, VARLP("const_pos1")));
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_9, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_5, op_ASSIGN_22);
	RzILOpEffect *empty_24 = EMPTY();
	RzILOpEffect *seq_25 = SEQN(2, seq_23, empty_24);
	RzILOpEffect *for_26 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_25));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_26);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>