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

RzILOpEffect *hex_il_op_a5_acs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a5_vaddhubs(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut16 h_tmp1;
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
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_ADD_19 = ADD(cast_st16_14, cast_st16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_st16_28, cast_st16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(64, MSB(op_AND_37), op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(op_AND_41), op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_st16_38, cast_st16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_70 = CAST(16, MSB(op_AND_69), op_AND_69);
	RzILOpPure *op_ADD_71 = ADD(cast_st16_66, cast_st16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_ADD_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_ADD_43, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_76, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_9, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_ADD_19, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos8", const_pos8, VARLP("const_pos8")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", UNSIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_5, seq_22);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_23, seq_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_47, seq_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_51, seq_54);
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rd_assoc_tmp, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *for_85 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_84));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_85, seq_62);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>