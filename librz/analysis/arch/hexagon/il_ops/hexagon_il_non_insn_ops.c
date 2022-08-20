// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:38:03-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_j2_endloop01() {
	// READ
	// Declare: ut32 h_tmp0;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut64 h_tmp3;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 h_tmp4;
	// Declare: ut32 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut32 h_tmp10;
	// Declare: ut32 h_tmp11;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *P3 = VARG("P3");
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	// Declare: ut0 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut32 h_tmp14;
	// Declare: ut32 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut32 h_tmp19;
	// Declare: ut64 h_tmp20;
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0, false);
	RzILOpPure *sa0 = VARG(sa0_assoc);
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1, false);
	RzILOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp0"), VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp4"), VARL("h_tmp7"), VARLP("const_pos0LL")));
	RzILOpPure *op_GE_33 = LET("const_pos2", const_pos2, UGE(cond_32, VARLP("const_pos2")));
	RzILOpPure *cond_51 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp8"), VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_52 = LET("const_pos1", const_pos1, EQ(cond_51, VARLP("const_pos1")));
	RzILOpPure *cond_92 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_93 = LET("const_pos1", const_pos1, SUB(cond_92, VARLP("const_pos1")));
	RzILOpPure *cond_98 = ITE(VARL("h_tmp13"), VARL("h_tmp20"), VARG(usr_assoc_tmp));
	RzILOpPure *op_GT_104 = LET("const_pos1", const_pos1, UGT(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_106 = LET("const_pos1", const_pos1, SUB(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_GT_109 = LET("const_pos1", const_pos1, UGT(VARG(lc1_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_111 = LET("const_pos1", const_pos1, SUB(VARG(lc1_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_3 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_2, seq_5);
	RzILOpEffect *c_call_7 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_7, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, seq_9);
	RzILOpEffect *c_call_11 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp1"), VARL("h_tmp2"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp3", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_10, seq_13);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_14, seq_18);
	RzILOpEffect *c_call_20 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_19, seq_22);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_23, seq_26);
	RzILOpEffect *c_call_28 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp5"), VARL("h_tmp6"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_27, seq_30);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, seq_31, empty_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_38, seq_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_42, seq_45);
	RzILOpEffect *c_call_47 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp9"), VARL("h_tmp10"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_53 = HEX_WRITE_PRED(P3, VARLP("const_pos0xff"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp12", UNSIGNED(0, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_50, seq_55);
	RzILOpEffect *empty_seq_58 = EMPTY();
	RzILOpEffect *seq_then_57 = SEQN(1, empty_seq_58);
	RzILOpEffect *seq_59 = SEQN(2, seq_56, seq_then_57);
	RzILOpEffect *empty_61 = EMPTY();
	RzILOpEffect *branch_60 = BRANCH(op_EQ_52, seq_59, empty_61);
	RzILOpEffect *seq_then_62 = SEQN(1, seq_35);
	RzILOpEffect *seq_else_64 = SEQN(1, branch_60);
	RzILOpEffect *branch_63 = BRANCH(op_GE_33, seq_then_62, seq_else_64);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp14", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *seq_71 = SEQN(2, seq_67, seq_70);
	RzILOpEffect *c_call_72 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *seq_75 = SEQN(2, seq_71, seq_74);
	RzILOpEffect *c_call_76 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(2, seq_75, seq_78);
	RzILOpEffect *c_call_80 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_81 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_82 = SEQN(2, c_call_80, op_ASSIGN_hybrid_tmp_81);
	RzILOpEffect *seq_83 = SEQN(2, seq_79, seq_82);
	RzILOpEffect *c_call_84 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_83, seq_86);
	RzILOpEffect *c_call_88 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_89 = SETL("h_tmp19", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_90 = SEQN(2, c_call_88, op_ASSIGN_hybrid_tmp_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_87, seq_90);
	RzILOpEffect *c_call_94 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp14"), VARL("h_tmp15"), op_SUB_93);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_95 = SETL("h_tmp20", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_96 = SEQN(2, c_call_94, op_ASSIGN_hybrid_tmp_95);
	RzILOpEffect *seq_97 = SEQN(2, seq_91, seq_96);
	RzILOpEffect *op_ASSIGN_99 = SETG(usr_assoc_tmp, cond_98);
	RzILOpEffect *seq_100 = SEQN(2, seq_97, op_ASSIGN_99);
	RzILOpEffect *seq_then_101 = SEQN(2, branch_63, seq_100);
	RzILOpEffect *empty_103 = EMPTY();
	RzILOpEffect *branch_102 = BRANCH(cond_15, seq_then_101, empty_103);
	RzILOpEffect *jump_sa0 = JMP(sa0);
	RzILOpEffect *empty_105 = EMPTY();
	RzILOpEffect *op_ASSIGN_107 = SETG(lc0_assoc_tmp, op_SUB_106);
	RzILOpEffect *empty_108 = EMPTY();
	RzILOpEffect *jump_sa1 = JMP(sa1);
	RzILOpEffect *empty_110 = EMPTY();
	RzILOpEffect *op_ASSIGN_112 = SETG(lc1_assoc_tmp, op_SUB_111);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *seq_then_114 = SEQN(4, jump_sa1, empty_110, op_ASSIGN_112, empty_113);
	RzILOpEffect *empty_116 = EMPTY();
	RzILOpEffect *branch_115 = BRANCH(op_GT_109, seq_then_114, empty_116);
	RzILOpEffect *seq_then_117 = SEQN(4, jump_sa0, empty_105, op_ASSIGN_107, empty_108);
	RzILOpEffect *seq_else_119 = SEQN(1, branch_115);
	RzILOpEffect *branch_118 = BRANCH(op_GT_104, seq_then_117, seq_else_119);
	RzILOpEffect *instruction_sequence = SEQN(2, branch_102, branch_118);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop0() {
	// READ
	// Declare: ut32 h_tmp0;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut64 h_tmp3;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: ut32 h_tmp4;
	// Declare: ut32 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut32 h_tmp10;
	// Declare: ut32 h_tmp11;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *P3 = VARG("P3");
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	// Declare: ut0 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut32 h_tmp14;
	// Declare: ut32 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut32 h_tmp19;
	// Declare: ut64 h_tmp20;
	const char *lc0_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC0, true);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0, false);
	RzILOpPure *sa0 = VARG(sa0_assoc);

	// EXEC
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp0"), VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp4"), VARL("h_tmp7"), VARLP("const_pos0LL")));
	RzILOpPure *op_GE_33 = LET("const_pos2", const_pos2, UGE(cond_32, VARLP("const_pos2")));
	RzILOpPure *cond_51 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp8"), VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_52 = LET("const_pos1", const_pos1, EQ(cond_51, VARLP("const_pos1")));
	RzILOpPure *cond_92 = LET("const_pos0LL", const_pos0LL, ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_93 = LET("const_pos1", const_pos1, SUB(cond_92, VARLP("const_pos1")));
	RzILOpPure *cond_98 = ITE(VARL("h_tmp13"), VARL("h_tmp20"), VARG(usr_assoc_tmp));
	RzILOpPure *op_GT_104 = LET("const_pos1", const_pos1, UGT(VARG(lc0_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_106 = LET("const_pos1", const_pos1, SUB(VARG(lc0_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_3 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_2, seq_5);
	RzILOpEffect *c_call_7 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_8 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_9 = SEQN(2, c_call_7, op_ASSIGN_hybrid_tmp_8);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, seq_9);
	RzILOpEffect *c_call_11 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp1"), VARL("h_tmp2"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp3", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_10, seq_13);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_14, seq_18);
	RzILOpEffect *c_call_20 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_19, seq_22);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_23, seq_26);
	RzILOpEffect *c_call_28 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp5"), VARL("h_tmp6"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_27, seq_30);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, seq_31, empty_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_38, seq_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_42, seq_45);
	RzILOpEffect *c_call_47 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp9"), VARL("h_tmp10"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_53 = HEX_WRITE_PRED(P3, VARLP("const_pos0xff"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp12", UNSIGNED(0, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_50, seq_55);
	RzILOpEffect *empty_seq_58 = EMPTY();
	RzILOpEffect *seq_then_57 = SEQN(1, empty_seq_58);
	RzILOpEffect *seq_59 = SEQN(2, seq_56, seq_then_57);
	RzILOpEffect *empty_61 = EMPTY();
	RzILOpEffect *branch_60 = BRANCH(op_EQ_52, seq_59, empty_61);
	RzILOpEffect *seq_then_62 = SEQN(1, seq_35);
	RzILOpEffect *seq_else_64 = SEQN(1, branch_60);
	RzILOpEffect *branch_63 = BRANCH(op_GE_33, seq_then_62, seq_else_64);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp14", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *seq_71 = SEQN(2, seq_67, seq_70);
	RzILOpEffect *c_call_72 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_73 = SETL("h_tmp15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_74 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_73);
	RzILOpEffect *seq_75 = SEQN(2, seq_71, seq_74);
	RzILOpEffect *c_call_76 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(2, seq_75, seq_78);
	RzILOpEffect *c_call_80 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_81 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_82 = SEQN(2, c_call_80, op_ASSIGN_hybrid_tmp_81);
	RzILOpEffect *seq_83 = SEQN(2, seq_79, seq_82);
	RzILOpEffect *c_call_84 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_83, seq_86);
	RzILOpEffect *c_call_88 = HEX_EXTRACT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_89 = SETL("h_tmp19", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_90 = SEQN(2, c_call_88, op_ASSIGN_hybrid_tmp_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_87, seq_90);
	RzILOpEffect *c_call_94 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp14"), VARL("h_tmp15"), op_SUB_93);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_95 = SETL("h_tmp20", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_96 = SEQN(2, c_call_94, op_ASSIGN_hybrid_tmp_95);
	RzILOpEffect *seq_97 = SEQN(2, seq_91, seq_96);
	RzILOpEffect *op_ASSIGN_99 = SETG(usr_assoc_tmp, cond_98);
	RzILOpEffect *seq_100 = SEQN(2, seq_97, op_ASSIGN_99);
	RzILOpEffect *seq_then_101 = SEQN(2, branch_63, seq_100);
	RzILOpEffect *empty_103 = EMPTY();
	RzILOpEffect *branch_102 = BRANCH(cond_15, seq_then_101, empty_103);
	RzILOpEffect *jump_sa0 = JMP(sa0);
	RzILOpEffect *empty_105 = EMPTY();
	RzILOpEffect *op_ASSIGN_107 = SETG(lc0_assoc_tmp, op_SUB_106);
	RzILOpEffect *empty_108 = EMPTY();
	RzILOpEffect *seq_then_109 = SEQN(4, jump_sa0, empty_105, op_ASSIGN_107, empty_108);
	RzILOpEffect *empty_111 = EMPTY();
	RzILOpEffect *branch_110 = BRANCH(op_GT_104, seq_then_109, empty_111);
	RzILOpEffect *instruction_sequence = SEQN(2, branch_102, branch_110);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop1() {
	// READ
	const char *lc1_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_LC1, true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1, false);
	RzILOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzILOpPure *op_GT_0 = LET("const_pos1", const_pos1, UGT(VARG(lc1_assoc_tmp), VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = LET("const_pos1", const_pos1, SUB(VARG(lc1_assoc_tmp), VARLP("const_pos1")));

	// WRITE
	RzILOpEffect *jump_sa1 = JMP(sa1);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(lc1_assoc_tmp, op_SUB_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *seq_then_5 = SEQN(4, jump_sa1, empty_1, op_ASSIGN_3, empty_4);
	RzILOpEffect *empty_7 = EMPTY();
	RzILOpEffect *branch_6 = BRANCH(op_GT_0, seq_then_5, empty_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RZ_OWN RzILOpEffect *hex_extract64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length) {
	// (value >> start) & (~0ULL >> (64 - length));
	RzILOpPure *r;
	RzILOpPure *const_pos0ULL = UN(64, 0x0);
	RzILOpPure *const_pos64 = UN(32, 0x40);

	RzILOpPure *op_RSHIFT_0 = SHIFTR0(DUP(value), DUP(start));
	RzILOpPure *op_NOT_1 = LET("const_pos0ULL", const_pos0ULL, LOGNOT(VARLP("const_pos0ULL")));
	RzILOpPure *op_SUB_2 = LET("const_pos64", const_pos64, SUB(VARLP("const_pos64"), DUP(length)));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(op_NOT_1, op_SUB_2);
	RzILOpPure *op_AND_4 = LOGAND(op_RSHIFT_0, op_RSHIFT_3);

	r = UNSIGNED(64, op_AND_4);
	return SETL("ret_val", r);
}

RZ_OWN RzILOpEffect *hex_sextract64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length) {
	// ((int32_t)(value << (32 - length - start))) >> (32 - length);
	RzILOpPure *r;
	RzILOpPure *const_pos64 = UN(64, 0x20);

	RzILOpPure *op_SUB_0 = LET("const_pos64", const_pos64, SUB(VARLP("const_pos64"), DUP(length)));
	RzILOpPure *op_SUB_1 = SUB(op_SUB_0, DUP(start));
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(DUP(value), op_SUB_1);
	RzILOpPure *op_SUB_3 = LET("const_pos64", const_pos64, SUB(VARLP("const_pos64"), DUP(length)));
	RzILOpPure *op_RSHIFT_4 = SHIFTRA(op_LSHIFT_2, op_SUB_3);

	r = UNSIGNED(64, op_RSHIFT_4);
	return SETL("ret_val", r);
}

RZ_OWN RzILOpEffect *hex_deposit64(RZ_BORROW RzILOpPure *value, RZ_BORROW RzILOpPure *start, RZ_BORROW RzILOpPure *length, RZ_BORROW RzILOpPure *fieldval) {
	// mask = (~0U >> (32 - length)) << start;
	// (value & ~mask) | ((fieldval << start) & mask);
	RzILOpPure *r;
	RzILOpPure *const_pos0ULL = UN(64, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);

	RzILOpPure *op_NOT_0 = LET("const_pos0ULL", const_pos0ULL, LOGNOT(VARLP("const_pos0ULL")));
	RzILOpPure *op_SUB_1 = LET("const_pos32", const_pos32, SUB(VARLP("const_pos32"), DUP(length)));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(op_NOT_0, op_SUB_1);
	RzILOpPure *op_LSHIFT_3 = SHIFTL0(op_RSHIFT_2, DUP(start));
	RzILOpPure *op_NOT_5 = LOGNOT(VARLP("mask"));
	RzILOpPure *op_AND_6 = LOGAND(DUP(value), op_NOT_5);
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(DUP(fieldval), DUP(start));
	RzILOpPure *op_AND_8 = LOGAND(op_LSHIFT_7, VARLP("mask"));
	RzILOpPure *op_OR_9 = LOGOR(op_AND_6, op_AND_8);

	r = UNSIGNED(64, LET("mask", op_LSHIFT_3, op_OR_9));
	return SETL("ret_val", r);
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

RZ_IPI RZ_OWN RzILOpEffect *hex_write_pred(RZ_BORROW RzILOpPure *pred, RZ_BORROW RzILOpPure *cond) {
    NOT_IMPLEMENTED;
}

#include <rz_il/rz_il_opbuilder_end.h>