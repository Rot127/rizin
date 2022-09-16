// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-16 17:23:53-04:00
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
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2306;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2307;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2308;
	// Declare: ut32 h_tmp2309;
	// Declare: ut32 h_tmp2310;
	// Declare: ut64 h_tmp2311;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_st16_19, VARL("u"));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_ADD_22 = LET("const_pos1", const_pos1, ADD(cast_23, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_22, VARLP("const_pos1")));
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *arg_cast_27 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_28 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_32 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_31 = ITE(op_NE_13, VARL("h_tmp2307"), cast_32);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(cast_34, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_st16_38 = CAST(16, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(cast_st16_38, VARL("u"));
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, op_RSHIFT_39);
	RzILOpPure *op_ADD_40 = LET("const_pos1", DUP(const_pos1), ADD(cast_41, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_40, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, op_RSHIFT_42);
	RzILOpPure *op_EQ_43 = EQ(cond_31, cast_44);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos16", DUP(const_pos16), MUL(cast_46, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st16_50 = CAST(16, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(cast_st16_50, VARL("u"));
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, op_RSHIFT_51);
	RzILOpPure *op_ADD_52 = LET("const_pos1", DUP(const_pos1), ADD(cast_53, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_54 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_52, VARLP("const_pos1")));
	RzILOpPure *arg_cast_65 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_66 = CAST(64, MSB(DUP(VARL("h_tmp2309"))), VARL("h_tmp2309"));
	RzILOpPure *arg_cast_67 = CAST(64, MSB(DUP(VARL("h_tmp2310"))), VARL("h_tmp2310"));
	RzILOpPure *arg_cast_68 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_72 = ITE(NON_ZERO(VARL("h_tmp2308")), VARL("h_tmp2311"), cast_73);
	RzILOpPure *cast_75 = CAST(32, IL_FALSE, cond_72);
	RzILOpPure *cast_78 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_77 = LET("const_pos16", DUP(const_pos16), MUL(cast_78, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_77);
	RzILOpPure *cast_81 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_80 = LOGAND(op_RSHIFT_79, cast_81);
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_80)), op_AND_80);
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(cast_st16_82, VARL("u"));
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, op_RSHIFT_83);
	RzILOpPure *op_ADD_84 = LET("const_pos1", DUP(const_pos1), ADD(cast_85, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_86 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_84, VARLP("const_pos1")));
	RzILOpPure *op_LT_87 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_86, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_88 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_90 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_89 = SUB(op_LSHIFT_88, cast_90);
	RzILOpPure *cast_92 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_91 = ITE(op_LT_87, cast_92, op_SUB_89);
	RzILOpPure *cast_94 = CAST(64, MSB(DUP(op_RSHIFT_54)), op_RSHIFT_54);
	RzILOpPure *cond_93 = ITE(op_EQ_43, cast_94, cond_91);
	RzILOpPure *op_AND_95 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_93, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_96 = CAST(64, IL_FALSE, op_AND_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_97 = LET("const_pos8", DUP(const_pos8), MUL(cast_98, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_99 = SHIFTL0(cast_ut64_96, op_MUL_97);
	RzILOpPure *cast_101 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_100 = LOGOR(cast_101, op_LSHIFT_99);
	RzILOpPure *cast_103 = CAST(32, IL_FALSE, op_OR_100);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2306", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *c_call_25 = HEX_EXTRACT64(arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp2307", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_55 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2308", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *c_call_58 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp2309", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *c_call_61 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_62 = SETL("h_tmp2310", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_63 = SEQN(2, c_call_61, op_ASSIGN_hybrid_tmp_62);
	RzILOpEffect *c_call_64 = HEX_DEPOSIT64(arg_cast_65, arg_cast_66, arg_cast_67, arg_cast_68);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp2311", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_64, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *seq_71 = SEQN(3, seq_60, seq_63, seq_70);
	RzILOpEffect *op_ASSIGN_74 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_75);
	RzILOpEffect *seq_76 = SEQN(3, seq_57, seq_71, op_ASSIGN_74);
	RzILOpEffect *op_ASSIGN_102 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_103);
	RzILOpEffect *seq_104 = SEQN(2, seq_30, op_ASSIGN_102);
	RzILOpEffect *empty_105 = EMPTY();
	RzILOpEffect *seq_106 = SEQN(2, seq_104, empty_105);
	RzILOpEffect *seq_107 = SEQN(2, seq_6, seq_106);
	RzILOpEffect *for_109 = REPEAT(op_LT_2, seq_107);
	RzILOpEffect *seq_108 = SEQN(2, op_ASSIGN_0, for_109);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_20, seq_108, seq_76);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_asrhub_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2312;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut64 h_tmp2313;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2314;
	// Declare: ut32 h_tmp2315;
	// Declare: ut32 h_tmp2316;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2317;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", const_pos8, MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_st16_19, VARL("u"));
	RzILOpPure *arg_cast_23 = CAST(64, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_29 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_28 = ITE(op_NE_13, VARL("h_tmp2313"), cast_29);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(cast_st16_35, VARL("u"));
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, op_RSHIFT_36);
	RzILOpPure *op_EQ_37 = EQ(cond_28, cast_38);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos16", DUP(const_pos16), MUL(cast_40, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st16_44 = CAST(16, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(cast_st16_44, VARL("u"));
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2315"))), VARL("h_tmp2315"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2316"))), VARL("h_tmp2316"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2314")), VARL("h_tmp2317"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos16", DUP(const_pos16), MUL(cast_69, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(cast_st16_73, VARL("u"));
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, op_RSHIFT_74);
	RzILOpPure *op_LT_75 = LET("const_pos0", DUP(const_pos0), ULT(cast_76, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_79 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_78 = SUB(op_LSHIFT_77, cast_79);
	RzILOpPure *cast_81 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_80 = ITE(op_LT_75, cast_81, op_SUB_78);
	RzILOpPure *cast_83 = CAST(64, MSB(DUP(op_RSHIFT_45)), op_RSHIFT_45);
	RzILOpPure *cond_82 = ITE(op_EQ_37, cast_83, cond_80);
	RzILOpPure *op_AND_84 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_82, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_85 = CAST(64, IL_FALSE, op_AND_84);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_86 = LET("const_pos8", DUP(const_pos8), MUL(cast_87, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_88 = SHIFTL0(cast_ut64_85, op_MUL_86);
	RzILOpPure *cast_90 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_89 = LOGOR(cast_90, op_LSHIFT_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, op_OR_89);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2312", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_20 = SETL("u", u);
	RzILOpEffect *c_call_22 = HEX_EXTRACT64(arg_cast_23, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2313", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2314", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2315", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2316", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2317", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_91 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_92);
	RzILOpEffect *seq_93 = SEQN(2, seq_27, op_ASSIGN_91);
	RzILOpEffect *empty_94 = EMPTY();
	RzILOpEffect *seq_95 = SEQN(2, seq_93, empty_94);
	RzILOpEffect *seq_96 = SEQN(2, seq_6, seq_95);
	RzILOpEffect *for_98 = REPEAT(op_LT_2, seq_96);
	RzILOpEffect *seq_97 = SEQN(2, op_ASSIGN_0, for_98);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_20, seq_97, seq_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_popcountp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s5_vasrhrnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2318;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st16_18, VARL("u"));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_ADD_21 = LET("const_pos1", const_pos1, ADD(cast_22, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_23 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_21, VARLP("const_pos1")));
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_25 = CAST(64, IL_FALSE, op_AND_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_25, op_MUL_26);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_11, op_LSHIFT_28);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2318", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_30, empty_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_6, seq_32);
	RzILOpEffect *for_35 = REPEAT(op_LT_2, seq_33);
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_0, for_35);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_34);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>