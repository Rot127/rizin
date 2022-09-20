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

RzILOpEffect *hex_il_op_j2_endloop01(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 h_tmp_n0;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp_n1;
	// Declare: ut32 h_tmp_n2;
	// Declare: ut64 h_tmp_n3;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 h_tmp_n4;
	// Declare: ut32 h_tmp_n5;
	// Declare: ut32 h_tmp_n6;
	// Declare: ut64 h_tmp_n7;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp_n8;
	// Declare: ut32 h_tmp_n9;
	// Declare: ut32 h_tmp_n10;
	// Declare: ut64 h_tmp_n11;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	// Declare: ut32 h_tmp_n12;
	// Declare: ut32 h_tmp_n13;
	// Declare: ut32 h_tmp_n14;
	// Declare: ut32 h_tmp_n15;
	// Declare: ut32 h_tmp_n16;
	// Declare: ut32 h_tmp_n17;
	// Declare: ut64 h_tmp_n18;
	// Declare: ut64 h_tmp_n19;
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0, false);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1, false);
	RzILOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzILOpPure *arg_cast_10 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_11 = CAST(64, MSB(DUP(VARL("h_tmp_n1"))), VARL("h_tmp_n1"));
	RzILOpPure *arg_cast_12 = CAST(64, MSB(DUP(VARL("h_tmp_n2"))), VARL("h_tmp_n2"));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(NON_ZERO(VARL("h_tmp_n0")), VARL("h_tmp_n3"), cast_17);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_29 = CAST(64, MSB(DUP(VARL("h_tmp_n5"))), VARL("h_tmp_n5"));
	RzILOpPure *arg_cast_30 = CAST(64, MSB(DUP(VARL("h_tmp_n6"))), VARL("h_tmp_n6"));
	RzILOpPure *cast_35 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_34 = ITE(NON_ZERO(VARL("h_tmp_n4")), VARL("h_tmp_n7"), cast_35);
	RzILOpPure *cast_37 = LET("const_pos2", const_pos2, CAST(64, IL_FALSE, VARLP("const_pos2")));
	RzILOpPure *op_GE_36 = UGE(cond_34, cast_37);
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("h_tmp_n9"))), VARL("h_tmp_n9"));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp_n10"))), VARL("h_tmp_n10"));
	RzILOpPure *cast_56 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_55 = ITE(NON_ZERO(VARL("h_tmp_n8")), VARL("h_tmp_n11"), cast_56);
	RzILOpPure *cast_58 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_EQ_57 = EQ(cond_55, cast_58);
	RzILOpPure *cast_60 = LET("const_pos0xff", const_pos0xff, CAST(8, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *arg_cast_88 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_89 = CAST(64, MSB(DUP(VARL("h_tmp_n16"))), VARL("h_tmp_n16"));
	RzILOpPure *arg_cast_90 = CAST(64, MSB(DUP(VARL("h_tmp_n17"))), VARL("h_tmp_n17"));
	RzILOpPure *cast_95 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_94 = ITE(NON_ZERO(VARL("h_tmp_n15")), VARL("h_tmp_n18"), cast_95);
	RzILOpPure *cast_97 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_96 = SUB(cond_94, cast_97);
	RzILOpPure *arg_cast_99 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_100 = CAST(64, MSB(DUP(VARL("h_tmp_n13"))), VARL("h_tmp_n13"));
	RzILOpPure *arg_cast_101 = CAST(64, MSB(DUP(VARL("h_tmp_n14"))), VARL("h_tmp_n14"));
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_105 = ITE(NON_ZERO(VARL("h_tmp_n12")), VARL("h_tmp_n19"), cast_106);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, cond_105);
	RzILOpPure *op_GT_114 = LET("const_pos1", DUP(const_pos1), UGT(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_116 = LET("const_pos1", DUP(const_pos1), SUB(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_GT_119 = LET("const_pos1", DUP(const_pos1), UGT(VARG(lc1_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_121 = LET("const_pos1", DUP(const_pos1), SUB(VARG(lc1_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp_n0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_3 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp_n1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp_n2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_9 = HEX_EXTRACT64(arg_cast_10, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp_n3", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *seq_15 = SEQN(3, seq_5, seq_8, seq_14);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp_n4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp_n5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp_n6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp_n7", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(3, seq_23, seq_26, seq_32);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp_n8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp_n9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp_n10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_EXTRACT64(arg_cast_49, arg_cast_50, arg_cast_51);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp_n11", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(3, seq_44, seq_47, seq_53);
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL("P3_tmp", cast_60);
	RzILOpEffect *seq_then_61 = SEQN(1, op_ASSIGN_59);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *branch_62 = BRANCH(op_EQ_57, seq_then_61, empty_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_41, seq_54, branch_62);
	RzILOpEffect *seq_then_65 = SEQN(1, empty_38);
	RzILOpEffect *seq_else_67 = SEQN(1, seq_64);
	RzILOpEffect *branch_66 = BRANCH(op_GE_36, seq_then_65, seq_else_67);
	RzILOpEffect *seq_68 = SEQN(3, seq_20, seq_33, branch_66);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp_n12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp_n13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *c_call_75 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp_n14", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_75, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *c_call_78 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_79 = SETL("h_tmp_n15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_80 = SEQN(2, c_call_78, op_ASSIGN_hybrid_tmp_79);
	RzILOpEffect *c_call_81 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_82 = SETL("h_tmp_n16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_83 = SEQN(2, c_call_81, op_ASSIGN_hybrid_tmp_82);
	RzILOpEffect *c_call_84 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp_n17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *c_call_87 = HEX_EXTRACT64(arg_cast_88, arg_cast_89, arg_cast_90);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_91 = SETL("h_tmp_n18", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_92 = SEQN(2, c_call_87, op_ASSIGN_hybrid_tmp_91);
	RzILOpEffect *seq_93 = SEQN(3, seq_83, seq_86, seq_92);
	RzILOpEffect *c_call_98 = HEX_DEPOSIT64(arg_cast_99, arg_cast_100, arg_cast_101, op_SUB_96);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_102 = SETL("h_tmp_n19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_103 = SEQN(2, c_call_98, op_ASSIGN_hybrid_tmp_102);
	RzILOpEffect *seq_104 = SEQN(5, seq_74, seq_77, seq_80, seq_93, seq_103);
	RzILOpEffect *op_ASSIGN_107 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_108);
	RzILOpEffect *seq_109 = SEQN(3, seq_71, seq_104, op_ASSIGN_107);
	RzILOpEffect *seq_then_110 = SEQN(2, seq_68, seq_109);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *branch_111 = BRANCH(NON_ZERO(cond_16), seq_then_110, empty_112);
	RzILOpEffect *seq_113 = SEQN(3, seq_2, seq_15, branch_111);
	RzILOpEffect *jump_sa0 = JMP(sa0);
	RzILOpEffect *empty_115 = EMPTY();
	RzILOpEffect *op_ASSIGN_117 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, op_SUB_116);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *jump_sa1 = JMP(sa1);
	RzILOpEffect *empty_120 = EMPTY();
	RzILOpEffect *op_ASSIGN_122 = HEX_WRITE_GLOBAL(lc1_assoc_tmp, op_SUB_121);
	RzILOpEffect *empty_123 = EMPTY();
	RzILOpEffect *seq_then_124 = SEQN(4, jump_sa1, empty_120, op_ASSIGN_122, empty_123);
	RzILOpEffect *empty_126 = EMPTY();
	RzILOpEffect *branch_125 = BRANCH(op_GT_119, seq_then_124, empty_126);
	RzILOpEffect *seq_then_127 = SEQN(4, jump_sa0, empty_115, op_ASSIGN_117, empty_118);
	RzILOpEffect *seq_else_129 = SEQN(1, branch_125);
	RzILOpEffect *branch_128 = BRANCH(op_GT_114, seq_then_127, seq_else_129);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_113, branch_128);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 h_tmp_n0;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp_n1;
	// Declare: ut32 h_tmp_n2;
	// Declare: ut64 h_tmp_n3;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 h_tmp_n4;
	// Declare: ut32 h_tmp_n5;
	// Declare: ut32 h_tmp_n6;
	// Declare: ut64 h_tmp_n7;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp_n8;
	// Declare: ut32 h_tmp_n9;
	// Declare: ut32 h_tmp_n10;
	// Declare: ut64 h_tmp_n11;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	// Declare: ut32 h_tmp_n12;
	// Declare: ut32 h_tmp_n13;
	// Declare: ut32 h_tmp_n14;
	// Declare: ut32 h_tmp_n15;
	// Declare: ut32 h_tmp_n16;
	// Declare: ut32 h_tmp_n17;
	// Declare: ut64 h_tmp_n18;
	// Declare: ut64 h_tmp_n19;
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0, false);
	RzILOpPure *sa0 = VARG(sa0_assoc);

	// EXEC
	RzILOpPure *arg_cast_10 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_11 = CAST(64, MSB(DUP(VARL("h_tmp_n1"))), VARL("h_tmp_n1"));
	RzILOpPure *arg_cast_12 = CAST(64, MSB(DUP(VARL("h_tmp_n2"))), VARL("h_tmp_n2"));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(NON_ZERO(VARL("h_tmp_n0")), VARL("h_tmp_n3"), cast_17);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_29 = CAST(64, MSB(DUP(VARL("h_tmp_n5"))), VARL("h_tmp_n5"));
	RzILOpPure *arg_cast_30 = CAST(64, MSB(DUP(VARL("h_tmp_n6"))), VARL("h_tmp_n6"));
	RzILOpPure *cast_35 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_34 = ITE(NON_ZERO(VARL("h_tmp_n4")), VARL("h_tmp_n7"), cast_35);
	RzILOpPure *cast_37 = LET("const_pos2", const_pos2, CAST(64, IL_FALSE, VARLP("const_pos2")));
	RzILOpPure *op_GE_36 = UGE(cond_34, cast_37);
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("h_tmp_n9"))), VARL("h_tmp_n9"));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp_n10"))), VARL("h_tmp_n10"));
	RzILOpPure *cast_56 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_55 = ITE(NON_ZERO(VARL("h_tmp_n8")), VARL("h_tmp_n11"), cast_56);
	RzILOpPure *cast_58 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_EQ_57 = EQ(cond_55, cast_58);
	RzILOpPure *cast_60 = LET("const_pos0xff", const_pos0xff, CAST(8, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *arg_cast_88 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_89 = CAST(64, MSB(DUP(VARL("h_tmp_n16"))), VARL("h_tmp_n16"));
	RzILOpPure *arg_cast_90 = CAST(64, MSB(DUP(VARL("h_tmp_n17"))), VARL("h_tmp_n17"));
	RzILOpPure *cast_95 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_94 = ITE(NON_ZERO(VARL("h_tmp_n15")), VARL("h_tmp_n18"), cast_95);
	RzILOpPure *cast_97 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_SUB_96 = SUB(cond_94, cast_97);
	RzILOpPure *arg_cast_99 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_100 = CAST(64, MSB(DUP(VARL("h_tmp_n13"))), VARL("h_tmp_n13"));
	RzILOpPure *arg_cast_101 = CAST(64, MSB(DUP(VARL("h_tmp_n14"))), VARL("h_tmp_n14"));
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_105 = ITE(NON_ZERO(VARL("h_tmp_n12")), VARL("h_tmp_n19"), cast_106);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, cond_105);
	RzILOpPure *op_GT_114 = LET("const_pos1", DUP(const_pos1), UGT(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_116 = LET("const_pos1", DUP(const_pos1), SUB(VARG(lc0_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp_n0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_3 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp_n1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp_n2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_9 = HEX_EXTRACT64(arg_cast_10, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp_n3", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *seq_15 = SEQN(3, seq_5, seq_8, seq_14);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp_n4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp_n5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp_n6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp_n7", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(3, seq_23, seq_26, seq_32);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp_n8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp_n9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp_n10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_EXTRACT64(arg_cast_49, arg_cast_50, arg_cast_51);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp_n11", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(3, seq_44, seq_47, seq_53);
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL("P3_tmp", cast_60);
	RzILOpEffect *seq_then_61 = SEQN(1, op_ASSIGN_59);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *branch_62 = BRANCH(op_EQ_57, seq_then_61, empty_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_41, seq_54, branch_62);
	RzILOpEffect *seq_then_65 = SEQN(1, empty_38);
	RzILOpEffect *seq_else_67 = SEQN(1, seq_64);
	RzILOpEffect *branch_66 = BRANCH(op_GE_36, seq_then_65, seq_else_67);
	RzILOpEffect *seq_68 = SEQN(3, seq_20, seq_33, branch_66);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp_n12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp_n13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *c_call_75 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp_n14", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_75, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *c_call_78 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_79 = SETL("h_tmp_n15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_80 = SEQN(2, c_call_78, op_ASSIGN_hybrid_tmp_79);
	RzILOpEffect *c_call_81 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_82 = SETL("h_tmp_n16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_83 = SEQN(2, c_call_81, op_ASSIGN_hybrid_tmp_82);
	RzILOpEffect *c_call_84 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp_n17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *c_call_87 = HEX_EXTRACT64(arg_cast_88, arg_cast_89, arg_cast_90);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_91 = SETL("h_tmp_n18", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_92 = SEQN(2, c_call_87, op_ASSIGN_hybrid_tmp_91);
	RzILOpEffect *seq_93 = SEQN(3, seq_83, seq_86, seq_92);
	RzILOpEffect *c_call_98 = HEX_DEPOSIT64(arg_cast_99, arg_cast_100, arg_cast_101, op_SUB_96);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_102 = SETL("h_tmp_n19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_103 = SEQN(2, c_call_98, op_ASSIGN_hybrid_tmp_102);
	RzILOpEffect *seq_104 = SEQN(5, seq_74, seq_77, seq_80, seq_93, seq_103);
	RzILOpEffect *op_ASSIGN_107 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_108);
	RzILOpEffect *seq_109 = SEQN(3, seq_71, seq_104, op_ASSIGN_107);
	RzILOpEffect *seq_then_110 = SEQN(2, seq_68, seq_109);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *branch_111 = BRANCH(NON_ZERO(cond_16), seq_then_110, empty_112);
	RzILOpEffect *seq_113 = SEQN(3, seq_2, seq_15, branch_111);
	RzILOpEffect *jump_sa0 = JMP(sa0);
	RzILOpEffect *empty_115 = EMPTY();
	RzILOpEffect *op_ASSIGN_117 = HEX_WRITE_GLOBAL(lc0_assoc_tmp, op_SUB_116);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *seq_then_119 = SEQN(4, jump_sa0, empty_115, op_ASSIGN_117, empty_118);
	RzILOpEffect *empty_121 = EMPTY();
	RzILOpEffect *branch_120 = BRANCH(op_GT_114, seq_then_119, empty_121);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_113, branch_120);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop1(HexInsnPktBundle *bundle) {
	// READ
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1, false);
	RzILOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzILOpPure *op_GT_258 = LET("const_pos1", const_pos1, UGT(VARG(lc1_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_260 = LET("const_pos1", DUP(const_pos1), SUB(VARG(lc1_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *jump_sa1 = JMP(sa1);
	RzILOpEffect *empty_259 = EMPTY();
	RzILOpEffect *op_ASSIGN_261 = SETG(lc1_assoc_tmp, op_SUB_260);
	RzILOpEffect *empty_262 = EMPTY();
	RzILOpEffect *seq_then_263 = SEQN(4, jump_sa1, empty_259, op_ASSIGN_261, empty_262);
	RzILOpEffect *empty_265 = EMPTY();
	RzILOpEffect *branch_264 = BRANCH(op_GT_258, seq_then_263, empty_265);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_264);

	return instruction_sequence;
}

RZ_OWN RzILOpEffect *hex_extract64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length) {
	// uint64_t start; uint64_t value; (value >> start) & (~0ULL >> (64 - length));
	// READ
	// Declare: ut64 value;
	// Declare: st32 start;
	// Declare: st32 length;
	RzILOpPure *const_pos0ULL = UN(64, 0x0);
	RzILOpPure *const_pos64 = UN(32, 0x40);

	// EXEC
	RzILOpPure *op_RSHIFT_0 = SHIFTR0(VARL("value"), VARL("start"));
	RzILOpPure *op_NOT_1 = LET("const_pos0ULL", const_pos0ULL, LOGNOT(VARLP("const_pos0ULL")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("length"));
	RzILOpPure *op_SUB_2 = LET("const_pos64", const_pos64, SUB(VARLP("const_pos64"), cast_3));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(op_NOT_1, op_SUB_2);
	RzILOpPure *op_AND_5 = LOGAND(op_RSHIFT_0, op_RSHIFT_4);

	RzILOpEffect *ret = SETL("ret_val", UNSIGNED(64, op_AND_5));

	return SEQ4(SETL("value", value), SETL("start", start), SETL("length", length), ret);
}

RZ_OWN RzILOpEffect *hex_sextract64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length) {
	// int32_t start; int64_t value; ((int32_t)(value << (32 - length - start))) >> (32 - length);
	// READ
	// Declare: ut64 value;
	// Declare: st32 start;
	// Declare: st32 length;
	RzILOpPure *const_pos32 = UN(32, 0x20);

	// EXEC
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("length"));
	RzILOpPure *op_SUB_7 = LET("const_pos32", const_pos32, SUB(VARLP("const_pos32"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, VARL("start"));
	RzILOpPure *op_SUB_9 = SUB(op_SUB_7, cast_10);
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(VARL("value"), op_SUB_9);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("length"));
	RzILOpPure *op_SUB_13 = LET("const_pos32", DUP(const_pos32), SUB(VARLP("const_pos32"), cast_14));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(cast_st32_12, op_SUB_13);

	// WRITE
	RzILOpEffect *ret = SETL("ret_val", UNSIGNED(64, op_RSHIFT_15));

	return SEQ4(SETL("value", value), SETL("start", start), SETL("length", length), ret);
}

RZ_OWN RzILOpEffect *hex_deposit64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length, RZ_BORROW RzILOpPure *fieldval) {
	// uint64_t start; uint64_t value; mask = (~0U >> (32 - length)) << start; (value & ~mask) | ((fieldval << start) & mask);
	// Declare: ut64 value;
	// Declare: st32 start;
	// Declare: st32 length;
	// Declare: ut64 fieldval;
	// Declare: ut64 mask;
	RzILOpPure *const_pos0U = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);

	// EXEC
	RzILOpPure *op_NOT_17 = LET("const_pos0U", const_pos0U, LOGNOT(VARLP("const_pos0U")));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("length"));
	RzILOpPure *op_SUB_18 = LET("const_pos32", const_pos32, SUB(VARLP("const_pos32"), cast_19));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(op_NOT_17, op_SUB_18);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_RSHIFT_20, VARL("start"));
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, op_LSHIFT_21);
	RzILOpPure *op_NOT_24 = LOGNOT(VARL("mask"));
	RzILOpPure *op_AND_25 = LOGAND(VARL("value"), op_NOT_24);
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(VARL("fieldval"), VARL("start"));
	RzILOpPure *op_AND_27 = LOGAND(op_LSHIFT_26, VARL("mask"));
	RzILOpPure *op_OR_28 = LOGOR(op_AND_25, op_AND_27);

	// WRITE
	RzILOpEffect *op_ASSIGN_22 = SETL("mask", cast_23);
	RzILOpEffect *ret = SETL("ret_val", UNSIGNED(64, op_OR_28));

	return SEQ6(SETL("value", value), SETL("start", start), SETL("length", length), SETL("fieldval", fieldval), op_ASSIGN_22, ret);
}

/**
 * \brief Returns the value of an register field property.
 *
 * \param property The property to get the value for.
 * \param field The register field.
 * \return RzILOpPure The value as integer as U32 or U32_MAX on failure.
 */
RZ_IPI RZ_OWN RzILOpEffect *hex_get_rf_property_val(const HexRegFieldProperty property, const HexRegField field) {
	RzILOpPure *r;
	switch (field) {
	default:
		RZ_LOG_WARN("Register field not implemented.\n");
		r = U64(UT32_MAX);
		break;
	case HEX_REG_FIELD_USR_LPCFG:
		if (property == HEX_RF_WIDTH) {
			r = U64(2);
		} else if (property == HEX_RF_OFFSET) {
			r = U64(8);
		} else {
			r = U64(UT32_MAX);
		}
		break;
	case HEX_REG_FIELD_USR_OVF:
		if (property == HEX_RF_WIDTH) {
			r = U64(1);
		} else if (property == HEX_RF_OFFSET) {
			r = U64(0);
		} else {
			r = U64(UT32_MAX);
		}
		break;
	}
	return SETL("ret_val", r);
}

/**
 * \brief Returns the next PC as pure.
 *
 * \param pkt The instruction packet.
 * \return RzILOpPure* The next PC as pure.
 */
RZ_IPI RZ_OWN RzILOpEffect *hex_get_npc(const HexPkt *pkt) {
	rz_return_val_if_fail(pkt, NULL);
	RzILOpPure *r;
	r = U64(pkt->pkt_addr + (rz_list_length(pkt->bin) * 4));
	return SETL("ret_val", r);
}

RZ_IPI RZ_OWN RzILOpEffect *hex_clz32(RZ_BORROW RzILOpPure *val) {
	rz_return_val_if_fail(val, NULL);
	return SEQ4(SETL("ret_val", U64(0)),
		SETL("bit", U32(0x80000000)),
		SETL("val", CAST(32, MSB(DUP(val)), DUP(val))),
		REPEAT(AND(IS_ZERO(LOGAND(VARL("val"), VARL("bit"))),
			       NON_ZERO(VARL("bit"))),
			SEQ2(SETL("ret_val", INC(VARL("ret_val"), 64)),
				SETL("bit", SHIFTR0(VARL("bit"), U32(1))))));
}

RZ_IPI RZ_OWN RzILOpEffect *hex_clo32(RZ_BORROW RzILOpPure *val) {
	rz_return_val_if_fail(val, NULL);
	return hex_clz32(LOGNOT(DUP(val)));
}

RZ_IPI RZ_OWN RzILOpEffect *hex_write_pred(const char *pred, RZ_OWN RzILOpPure *cond) {
	char *col = strstr(pred, ":");
	char *tmp = strstr(pred, "_tmp");
	if (strlen(pred) != 2 && !col && !tmp) {
		RZ_LOG_ERROR("Predicate name %s is not of Px, Px:y, Px_tmp or Px:y_tmp form.\n", pred);
		return NULL;
	}
	if (col) {
		RZ_LOG_WARN("Write of double predicate registers (%s) not implemented.\n", pred);
		return NULL;
	}
	ut8 pn = strtol(pred + 1, NULL, 10);
	char *pw = RZ_NEWS0(char, 16);
	snprintf(pw, 16, "p%d_written", pn);
	char *pname = RZ_NEWS0(char, 8);
	snprintf(pname, 8, "P%d_tmp", pn);

	// Value is ANDed if predicate was written before in this packet.
	RzILOpPure *val = ITE(VARG(pw), LOGAND(VARG(pred), cond), DUP(cond));
	// Also write P3_0 reg (reg C4)
	return SEQ4(SETL("ret_val", U64(0)),
		SETG(pname, val), SETG("C4", LOGOR(LOGAND(LOGNOT(LOGAND(VARG("C4"), SHIFTL0(U32(0xff), U32(pn * 4)))), VARG("C4")), SHIFTL(IL_TRUE, UNSIGNED(32, DUP(val)), U8(pn * 4)))),
		SETG(pw, IL_TRUE));
}

static RZ_OWN RzILOpEffect *write_single_update_double(const char *name, RZ_OWN RzILOpPure *val) {
	rz_return_val_if_fail(name && val, NULL);
	const char *col = strstr(name, ":");
	if (col) {
		RZ_LOG_WARN("Register name %s should not contain a colon.\n", name);
		rz_warn_if_reached();
		return NULL;
	}
	char reg = name[0];
	ut8 num = strtol(name + 1, NULL, 10);
	char *dreg = RZ_NEWS0(char, 16);
	bool is_odd_reg = (num % 2) == 1;
	ut8 high_num = is_odd_reg ? num : num + 1;
	ut8 low_num = is_odd_reg ? num - 1 : num;
	snprintf(dreg, 16, "%c%d:%d_tmp", reg, high_num, low_num);

	switch (reg) {
	case 'R':
	case 'C':
	case 'G':
	case 'S':
		return SEQ2((is_odd_reg ? SETG(dreg, APPEND(val, UNSIGNED(32, VARG(dreg)))) : SETG(dreg, APPEND(UNSIGNED(32, SHIFTR0(VARG(dreg), U32(32))), DUP(val)))),
			SETG(name, DUP(val)));
	case 'V':
		return SEQ2((is_odd_reg ? SETG(dreg, APPEND(val, UNSIGNED(1024, VARG(dreg)))) : SETG(dreg, APPEND(UNSIGNED(1024, SHIFTR0(VARG(dreg), U32(1024))), DUP(val)))),
			SETG(name, DUP(val)));
	case 'Q':
		return SEQ2((is_odd_reg ? SETG(dreg, APPEND(val, UNSIGNED(128, VARG(dreg)))) : SETG(dreg, APPEND(UNSIGNED(128, SHIFTR0(VARG(dreg), U32(128))), DUP(val)))),
			SETG(name, DUP(val)));
	case 'P':
		return hex_write_pred(name, val);
	}
	RZ_LOG_WARN("Register case '%c' not handled (reg name \"%s\").\n", reg, name);
	rz_warn_if_reached();
	return NULL;
}

static RZ_OWN RzILOpEffect *write_double_update_single(const char *name, RZ_OWN RzILOpPure *val) {
	rz_return_val_if_fail(name && val, NULL);
	const char *col = strstr(name, ":");
	if (!col) {
		RZ_LOG_WARN("Register name %s should contain a colon.\n", name);
		rz_warn_if_reached();
		return NULL;
	}
	char reg = name[0];
	char *high = RZ_NEWS0(char, 8);
	char *low = RZ_NEWS0(char, 8);
	snprintf(high, 8, "%c%d_tmp", name[0], (ut32)strtol(name + 1, NULL, 10));
	snprintf(low, 8, "%c%d_tmp", name[0], (ut32)strtol(col + 1, NULL, 10));

	switch (reg) {
	case 'R':
	case 'C':
	case 'G':
	case 'S':
		return SEQ3(SETG(high, UNSIGNED(32, SHIFTR0(val, U8(32)))),
			SETG(low, UNSIGNED(32, DUP(val))),
			SETG(name, DUP(val)));
	case 'V':
		return SEQ3(SETG(high, UNSIGNED(1024, SHIFTR0(val, U8(1024)))),
			SETG(low, UNSIGNED(1024, DUP(val))),
			SETG(name, DUP(val)));
	case 'Q':
		return SEQ3(SETG(high, UNSIGNED(128, SHIFTR0(val, U8(128)))),
			SETG(low, UNSIGNED(128, DUP(val))),
			SETG(name, DUP(val)));
	}
	RZ_LOG_WARN("Register case '%c' not handled (reg name \"%s\").\n", reg, name);
	rz_warn_if_reached();
	return NULL;
}

RZ_IPI RZ_OWN RzILOpEffect *hex_write_global(const char *name, RZ_OWN RzILOpPure *val) {
	// Is double register?
	const char *col = strstr(name, ":");
	if (!col) {
		return write_single_update_double(name, val);
	}

	return write_double_update_single(name, val);
}

RZ_IPI RZ_OWN RzILOpEffect *hex_sync_regs(HexInsnPktBundle *bundle) {
	return SEQN(88,
		SETG("p0_written", IL_FALSE),
		SETG("p1_written", IL_FALSE),
		SETG("p2_written", IL_FALSE),
		SETG("p3_written", IL_FALSE),
		SETG("C0", VARG("C0_tmp")),
		SETG("C1", VARG("C1_tmp")),
		SETG("C2", VARG("C2_tmp")),
		SETG("C3", VARG("C3_tmp")),
		SETG("C4", VARG("C4_tmp")),
		SETG("C5", VARG("C5_tmp")),
		SETG("C6", VARG("C6_tmp")),
		SETG("C7", VARG("C7_tmp")),
		SETG("C8", VARG("C8_tmp")),
		// SETG("C9", VARG("C9_tmp")), // Program Counter. Handled by VM.
		SETG("C10", VARG("C10_tmp")),
		SETG("C11", VARG("C11_tmp")),
		SETG("C12", VARG("C12_tmp")),
		SETG("C13", VARG("C13_tmp")),
		SETG("C14", VARG("C14_tmp")),
		SETG("C15", VARG("C15_tmp")),
		SETG("C16", VARG("C16_tmp")),
		SETG("C17", VARG("C17_tmp")),
		SETG("C18", VARG("C18_tmp")),
		SETG("C19", VARG("C19_tmp")),
		SETG("C30", VARG("C30_tmp")),
		SETG("C31", VARG("C31_tmp")),
		SETG("C1:0", VARG("C1:0_tmp")),
		SETG("C3:2", VARG("C3:2_tmp")),
		SETG("C5:4", VARG("C5:4_tmp")),
		SETG("C7:6", VARG("C7:6_tmp")),
		SETG("C9:8", VARG("C9:8_tmp")),
		SETG("C11:10", VARG("C11:10_tmp")),
		SETG("C13:12", VARG("C13:12_tmp")),
		SETG("C15:14", VARG("C15:14_tmp")),
		SETG("C17:16", VARG("C17:16_tmp")),
		SETG("C19:18", VARG("C19:18_tmp")),
		SETG("C31:30", VARG("C31:30_tmp")),
		SETG("R1:0", VARG("R1:0_tmp")),
		SETG("R3:2", VARG("R3:2_tmp")),
		SETG("R5:4", VARG("R5:4_tmp")),
		SETG("R7:6", VARG("R7:6_tmp")),
		SETG("R9:8", VARG("R9:8_tmp")),
		SETG("R11:10", VARG("R11:10_tmp")),
		SETG("R13:12", VARG("R13:12_tmp")),
		SETG("R15:14", VARG("R15:14_tmp")),
		SETG("R17:16", VARG("R17:16_tmp")),
		SETG("R19:18", VARG("R19:18_tmp")),
		SETG("R21:20", VARG("R21:20_tmp")),
		SETG("R23:22", VARG("R23:22_tmp")),
		SETG("R25:24", VARG("R25:24_tmp")),
		SETG("R27:26", VARG("R27:26_tmp")),
		SETG("R29:28", VARG("R29:28_tmp")),
		SETG("R31:30", VARG("R31:30_tmp")),
		SETG("R0", VARG("R0_tmp")),
		SETG("R1", VARG("R1_tmp")),
		SETG("R2", VARG("R2_tmp")),
		SETG("R3", VARG("R3_tmp")),
		SETG("R4", VARG("R4_tmp")),
		SETG("R5", VARG("R5_tmp")),
		SETG("R6", VARG("R6_tmp")),
		SETG("R7", VARG("R7_tmp")),
		SETG("R8", VARG("R8_tmp")),
		SETG("R9", VARG("R9_tmp")),
		SETG("R10", VARG("R10_tmp")),
		SETG("R11", VARG("R11_tmp")),
		SETG("R12", VARG("R12_tmp")),
		SETG("R13", VARG("R13_tmp")),
		SETG("R14", VARG("R14_tmp")),
		SETG("R15", VARG("R15_tmp")),
		SETG("R16", VARG("R16_tmp")),
		SETG("R17", VARG("R17_tmp")),
		SETG("R18", VARG("R18_tmp")),
		SETG("R19", VARG("R19_tmp")),
		SETG("R20", VARG("R20_tmp")),
		SETG("R21", VARG("R21_tmp")),
		SETG("R22", VARG("R22_tmp")),
		SETG("R23", VARG("R23_tmp")),
		SETG("R24", VARG("R24_tmp")),
		SETG("R25", VARG("R25_tmp")),
		SETG("R26", VARG("R26_tmp")),
		SETG("R27", VARG("R27_tmp")),
		SETG("R28", VARG("R28_tmp")),
		SETG("R29", VARG("R29_tmp")),
		SETG("R30", VARG("R30_tmp")),
		SETG("R31", VARG("R31_tmp")),
		SETG("P0", VARG("P0_tmp")),
		SETG("P1", VARG("P1_tmp")),
		SETG("P2", VARG("P2_tmp")),
		SETG("P3", VARG("P3_tmp")));
}

#include <rz_il/rz_il_opbuilder_end.h>