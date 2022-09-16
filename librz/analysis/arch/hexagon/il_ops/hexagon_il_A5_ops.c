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

RzILOpEffect *hex_il_op_a5_acs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	// Declare: st32 xv;
	// Declare: st32 sv;
	// Declare: st32 tv;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp417;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Pe_assoc_tmp = ISA2REG(hi, 'e', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	// Declare: st64 h_tmp418;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp419;
	// Declare: ut32 h_tmp420;
	// Declare: ut32 h_tmp421;
	// Declare: ut64 h_tmp422;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rxx, op_MUL_7);
	RzILOpPure *cast_11 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_10 = LOGAND(op_RSHIFT_9, cast_11);
	RzILOpPure *cast_st16_12 = CAST(16, MSB(DUP(op_AND_10)), op_AND_10);
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(cast_st16_12)), cast_st16_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos16", DUP(const_pos16), MUL(cast_16, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(cast_st16_20)), cast_st16_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rtt, op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(cast_st16_28)), cast_st16_28);
	RzILOpPure *op_ADD_31 = ADD(VARL("xv"), VARL("tv"));
	RzILOpPure *op_SUB_33 = SUB(VARL("sv"), VARL("tv"));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos2", const_pos2, MUL(cast_36, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_35));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pe_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *op_GT_41 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cast_ut64_42 = CAST(64, IL_FALSE, op_GT_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos2", DUP(const_pos2), MUL(cast_44, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(cast_ut64_42, op_MUL_43);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_39, op_LSHIFT_45);
	RzILOpPure *cast_48 = CAST(8, IL_FALSE, op_OR_46);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos2", DUP(const_pos2), MUL(cast_51, VARLP("const_pos2")));
	RzILOpPure *op_ADD_52 = LET("const_pos1", const_pos1, ADD(op_MUL_50, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_53 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_52));
	RzILOpPure *op_NOT_54 = LOGNOT(op_LSHIFT_53);
	RzILOpPure *cast_56 = CAST(64, IL_FALSE, VARG(Pe_assoc_tmp));
	RzILOpPure *op_AND_55 = LOGAND(cast_56, op_NOT_54);
	RzILOpPure *op_GT_57 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_GT_57);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos2", DUP(const_pos2), MUL(cast_60, VARLP("const_pos2")));
	RzILOpPure *op_ADD_61 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_59, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_58, op_ADD_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_55, op_LSHIFT_62);
	RzILOpPure *cast_65 = CAST(8, IL_FALSE, op_OR_63);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_67 = LET("const_pos16", DUP(const_pos16), MUL(cast_68, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_69 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_67));
	RzILOpPure *op_NOT_70 = LOGNOT(op_LSHIFT_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_NOT_70);
	RzILOpPure *op_AND_71 = LOGAND(DUP(Rxx), cast_72);
	RzILOpPure *op_NE_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_GT_74 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cond_75 = ITE(op_GT_74, VARL("xv"), VARL("sv"));
	RzILOpPure *arg_cast_77 = CAST(64, IL_FALSE, cond_75);
	RzILOpPure *arg_cast_78 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_79 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_82 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_73, VARL("h_tmp418"), VARLP("const_pos0LL")));
	RzILOpPure *op_GT_83 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cond_84 = ITE(op_GT_83, VARL("xv"), VARL("sv"));
	RzILOpPure *cast_86 = CAST(64, MSB(DUP(cond_84)), cond_84);
	RzILOpPure *op_EQ_85 = EQ(cond_82, cast_86);
	RzILOpPure *op_GT_87 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cond_88 = ITE(op_GT_87, VARL("xv"), VARL("sv"));
	RzILOpPure *arg_cast_99 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_100 = CAST(64, MSB(DUP(VARL("h_tmp420"))), VARL("h_tmp420"));
	RzILOpPure *arg_cast_101 = CAST(64, MSB(DUP(VARL("h_tmp421"))), VARL("h_tmp421"));
	RzILOpPure *arg_cast_102 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_107 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_106 = ITE(NON_ZERO(VARL("h_tmp419")), VARL("h_tmp422"), cast_107);
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, cond_106);
	RzILOpPure *op_GT_111 = SGT(VARL("xv"), VARL("sv"));
	RzILOpPure *cond_112 = ITE(op_GT_111, VARL("xv"), VARL("sv"));
	RzILOpPure *cast_114 = CAST(32, IL_FALSE, cond_112);
	RzILOpPure *op_LT_113 = LET("const_pos0", DUP(const_pos0), ULT(cast_114, VARLP("const_pos0")));
	RzILOpPure *op_SUB_115 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_116 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_115));
	RzILOpPure *op_NEG_117 = NEG(op_LSHIFT_116);
	RzILOpPure *op_SUB_118 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_119 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_118));
	RzILOpPure *cast_121 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_120 = SUB(op_LSHIFT_119, cast_121);
	RzILOpPure *cond_122 = ITE(op_LT_113, op_NEG_117, op_SUB_120);
	RzILOpPure *cast_124 = CAST(64, MSB(DUP(cond_88)), cond_88);
	RzILOpPure *cond_123 = ITE(op_EQ_85, cast_124, cond_122);
	RzILOpPure *cast_126 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_125 = LOGAND(cond_123, cast_126);
	RzILOpPure *cast_ut64_127 = CAST(64, IL_FALSE, op_AND_125);
	RzILOpPure *cast_129 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_128 = LET("const_pos16", DUP(const_pos16), MUL(cast_129, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_130 = SHIFTL0(cast_ut64_127, op_MUL_128);
	RzILOpPure *op_OR_131 = LOGOR(op_AND_71, op_LSHIFT_130);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp417", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_14 = SETL("xv", cast_st32_13);
	RzILOpEffect *op_ASSIGN_22 = SETL("sv", cast_st32_21);
	RzILOpEffect *op_ASSIGN_30 = SETL("tv", cast_st32_29);
	RzILOpEffect *op_ASSIGN_32 = SETL("xv", op_ADD_31);
	RzILOpEffect *op_ASSIGN_34 = SETL("sv", op_SUB_33);
	RzILOpEffect *op_ASSIGN_47 = SETG(Pe_assoc_tmp, cast_48);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *op_ASSIGN_64 = SETG(Pe_assoc_tmp, cast_65);
	RzILOpEffect *empty_66 = EMPTY();
	RzILOpEffect *c_call_76 = HEX_SEXTRACT64(arg_cast_77, arg_cast_78, arg_cast_79);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_80 = SETL("h_tmp418", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_81 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_80);
	RzILOpEffect *c_call_89 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_90 = SETL("h_tmp419", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_91 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_90);
	RzILOpEffect *c_call_92 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp420", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_92, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_95 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_96 = SETL("h_tmp421", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_97 = SEQN(2, c_call_95, op_ASSIGN_hybrid_tmp_96);
	RzILOpEffect *c_call_98 = HEX_DEPOSIT64(arg_cast_99, arg_cast_100, arg_cast_101, arg_cast_102);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_103 = SETL("h_tmp422", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_104 = SEQN(2, c_call_98, op_ASSIGN_hybrid_tmp_103);
	RzILOpEffect *seq_105 = SEQN(3, seq_94, seq_97, seq_104);
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc_tmp, cast_109);
	RzILOpEffect *seq_110 = SEQN(3, seq_91, seq_105, op_ASSIGN_108);
	RzILOpEffect *op_ASSIGN_132 = SETG(Rxx_assoc_tmp, op_OR_131);
	RzILOpEffect *seq_133 = SEQN(2, seq_81, op_ASSIGN_132);
	RzILOpEffect *empty_134 = EMPTY();
	RzILOpEffect *seq_135 = SEQN(11, op_ASSIGN_14, op_ASSIGN_22, op_ASSIGN_30, op_ASSIGN_32, op_ASSIGN_34, op_ASSIGN_47, empty_49, op_ASSIGN_64, empty_66, seq_133, empty_134);
	RzILOpEffect *seq_136 = SEQN(2, seq_6, seq_135);
	RzILOpEffect *for_138 = REPEAT(op_LT_2, seq_136);
	RzILOpEffect *seq_137 = SEQN(2, op_ASSIGN_0, for_138);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_137, seq_110);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a5_vaddhubs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp423;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp424;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp425;
	// Declare: ut32 h_tmp426;
	// Declare: ut32 h_tmp427;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp428;
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
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_26 = ADD(cast_st16_19, cast_st16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_ADD_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp424"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *op_ADD_47 = ADD(cast_st16_40, cast_st16_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_ADD_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st16_55 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos16", DUP(const_pos16), MUL(cast_57, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rtt), op_MUL_56);
	RzILOpPure *cast_60 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_59 = LOGAND(op_RSHIFT_58, cast_60);
	RzILOpPure *cast_st16_61 = CAST(16, MSB(DUP(op_AND_59)), op_AND_59);
	RzILOpPure *op_ADD_62 = ADD(cast_st16_55, cast_st16_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp426"))), VARL("h_tmp426"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp427"))), VARL("h_tmp427"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp425")), VARL("h_tmp428"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *cast_89 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_st16_90 = CAST(16, MSB(DUP(op_AND_88)), op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos16", DUP(const_pos16), MUL(cast_92, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rtt), op_MUL_91);
	RzILOpPure *cast_95 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_94 = LOGAND(op_RSHIFT_93, cast_95);
	RzILOpPure *cast_st16_96 = CAST(16, MSB(DUP(op_AND_94)), op_AND_94);
	RzILOpPure *op_ADD_97 = ADD(cast_st16_90, cast_st16_96);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, op_ADD_97);
	RzILOpPure *op_LT_98 = LET("const_pos0", DUP(const_pos0), ULT(cast_99, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_102 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_101 = SUB(op_LSHIFT_100, cast_102);
	RzILOpPure *cast_104 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_103 = ITE(op_LT_98, cast_104, op_SUB_101);
	RzILOpPure *cast_106 = CAST(64, MSB(DUP(op_ADD_62)), op_ADD_62);
	RzILOpPure *cond_105 = ITE(op_EQ_48, cast_106, cond_103);
	RzILOpPure *op_AND_107 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_105, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos8", DUP(const_pos8), MUL(cast_110, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_111 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *cast_113 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_112 = LOGOR(cast_113, op_LSHIFT_111);
	RzILOpPure *cast_115 = CAST(32, IL_FALSE, op_OR_112);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp423", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp424", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp425", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp426", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp427", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp428", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = SETG(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_114 = SETG(Rd_assoc_tmp, cast_115);
	RzILOpEffect *seq_116 = SEQN(2, seq_32, op_ASSIGN_114);
	RzILOpEffect *empty_117 = EMPTY();
	RzILOpEffect *seq_118 = SEQN(2, seq_116, empty_117);
	RzILOpEffect *seq_119 = SEQN(2, seq_6, seq_118);
	RzILOpEffect *for_121 = REPEAT(op_LT_2, seq_119);
	RzILOpEffect *seq_120 = SEQN(2, op_ASSIGN_0, for_121);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_120, seq_84);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>