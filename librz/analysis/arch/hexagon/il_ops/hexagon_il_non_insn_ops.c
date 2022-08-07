// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 17:26:27-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_j2_endloop0() {
	// READ
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzIlOpPure *lc1 = VARG(lc1_assoc);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzIlOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzIlOpPure *c_call_0 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_1 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_2 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_3 = HEX_EXTRACT64(usr, c_call_1, c_call_2);
	RzIlOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(c_call_0, c_call_3, VARLP("const_pos0LL")));
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_7 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_8 = HEX_EXTRACT64(usr, c_call_6, c_call_7);
	RzIlOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(c_call_5, c_call_8, VARLP("const_pos0LL")));
	RzIlOpPure *op_GE_10 = LET("const_pos2", const_pos2, UGE(cond_9, VARLP("const_pos2")));
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_14 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_15 = HEX_EXTRACT64(usr, c_call_13, c_call_14);
	RzIlOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(c_call_12, c_call_15, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_17 = LET("const_pos1", const_pos1, EQ(cond_16, VARLP("const_pos1")));
	RzIlOpPure *c_call_26 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_27 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_28 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_29 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_30 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_32 = HEX_EXTRACT64(usr, c_call_30, c_call_31);
	RzIlOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(c_call_29, c_call_32, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_34 = LET("const_pos1", const_pos1, SUB(cond_33, VARLP("const_pos1")));
	RzIlOpPure *c_call_35 = HEX_DEPOSIT64(usr, c_call_27, c_call_28, op_SUB_34);
	RzIlOpPure *cond_36 = ITE(c_call_26, c_call_35, usr);
	RzIlOpPure *op_GT_41 = LET("const_pos1", const_pos1, UGT(lc0, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_43 = LET("const_pos1", const_pos1, SUB(lc0, VARLP("const_pos1")));
	RzIlOpPure *op_GT_46 = LET("const_pos1", const_pos1, UGT(lc1, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_48 = LET("const_pos1", const_pos1, SUB(lc1, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *op_PRED_WRITE_18 = write_pred(p3, const_pos0xff);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *seq_then_20 = SEQN(2, op_PRED_WRITE_18, empty_19);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *branch_21 = BRANCH(op_EQ_17, seq_then_20, empty_22);
	RzIlOpEffect *seq_then_23 = SEQN(1, empty_11);
	RzIlOpEffect *seq_else_25 = SEQN(1, branch_21);
	RzIlOpEffect *branch_24 = BRANCH(op_GE_10, seq_then_23, seq_else_25);
	RzIlOpEffect *op_ASSIGN_37 = SETG(usr_assoc, cond_36);
	RzIlOpEffect *seq_then_38 = SEQN(2, branch_24, op_ASSIGN_37);
	RzIlOpEffect *empty_40 = EMPTY();
	RzIlOpEffect *branch_39 = BRANCH(cond_4, seq_then_38, empty_40);
	RzIlOpEffect *jump_sa0 = JUMP(sa0);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_44 = SETG(lc0_assoc, op_SUB_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *jump_sa1 = JUMP(sa1);
	RzIlOpEffect *empty_47 = EMPTY();
	RzIlOpEffect *op_ASSIGN_49 = SETG(lc1_assoc, op_SUB_48);
	RzIlOpEffect *empty_50 = EMPTY();
	RzIlOpEffect *seq_then_51 = SEQN(4, jump_sa1, empty_47, op_ASSIGN_49, empty_50);
	RzIlOpEffect *empty_53 = EMPTY();
	RzIlOpEffect *branch_52 = BRANCH(op_GT_46, seq_then_51, empty_53);
	RzIlOpEffect *seq_then_54 = SEQN(4, jump_sa0, empty_42, op_ASSIGN_44, empty_45);
	RzIlOpEffect *seq_else_56 = SEQN(1, branch_52);
	RzIlOpEffect *branch_55 = BRANCH(op_GT_41, seq_then_54, seq_else_56);
	RzIlOpEffect *instruction_sequence = SEQN(2, branch_39, branch_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop0() {
	// READ
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *p3_assoc = ALIAS2REG(HEX_REG_ALIAS_P3);
	RzIlOpPure *p3 = VARG(p3_assoc);
	RzILOpPure *const_pos0xff = UN(32, 255);
	const char *lc0_assoc = ALIAS2REG(HEX_REG_ALIAS_LC0);
	RzIlOpPure *lc0 = VARG(lc0_assoc);
	const char *sa0_assoc = ALIAS2REG(HEX_REG_ALIAS_SA0);
	RzIlOpPure *sa0 = VARG(sa0_assoc);

	// EXEC
	RzIlOpPure *c_call_0 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_1 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_2 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_3 = HEX_EXTRACT64(usr, c_call_1, c_call_2);
	RzIlOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(c_call_0, c_call_3, VARLP("const_pos0LL")));
	RzIlOpPure *c_call_5 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_6 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_7 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_8 = HEX_EXTRACT64(usr, c_call_6, c_call_7);
	RzIlOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(c_call_5, c_call_8, VARLP("const_pos0LL")));
	RzIlOpPure *op_GE_10 = LET("const_pos2", const_pos2, UGE(cond_9, VARLP("const_pos2")));
	RzIlOpPure *c_call_12 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_13 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_14 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_15 = HEX_EXTRACT64(usr, c_call_13, c_call_14);
	RzIlOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(c_call_12, c_call_15, VARLP("const_pos0LL")));
	RzIlOpPure *op_EQ_17 = LET("const_pos1", const_pos1, EQ(cond_16, VARLP("const_pos1")));
	RzIlOpPure *c_call_26 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_27 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_28 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_29 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_30 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_31 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_LPCFG);
	RzIlOpPure *c_call_32 = HEX_EXTRACT64(usr, c_call_30, c_call_31);
	RzIlOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(c_call_29, c_call_32, VARLP("const_pos0LL")));
	RzIlOpPure *op_SUB_34 = LET("const_pos1", const_pos1, SUB(cond_33, VARLP("const_pos1")));
	RzIlOpPure *c_call_35 = HEX_DEPOSIT64(usr, c_call_27, c_call_28, op_SUB_34);
	RzIlOpPure *cond_36 = ITE(c_call_26, c_call_35, usr);
	RzIlOpPure *op_GT_41 = LET("const_pos1", const_pos1, UGT(lc0, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_43 = LET("const_pos1", const_pos1, SUB(lc0, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *empty_11 = EMPTY();
	RzIlOpEffect *op_PRED_WRITE_18 = write_pred(p3, const_pos0xff);
	RzIlOpEffect *empty_19 = EMPTY();
	RzIlOpEffect *seq_then_20 = SEQN(2, op_PRED_WRITE_18, empty_19);
	RzIlOpEffect *empty_22 = EMPTY();
	RzIlOpEffect *branch_21 = BRANCH(op_EQ_17, seq_then_20, empty_22);
	RzIlOpEffect *seq_then_23 = SEQN(1, empty_11);
	RzIlOpEffect *seq_else_25 = SEQN(1, branch_21);
	RzIlOpEffect *branch_24 = BRANCH(op_GE_10, seq_then_23, seq_else_25);
	RzIlOpEffect *op_ASSIGN_37 = SETG(usr_assoc, cond_36);
	RzIlOpEffect *seq_then_38 = SEQN(2, branch_24, op_ASSIGN_37);
	RzIlOpEffect *empty_40 = EMPTY();
	RzIlOpEffect *branch_39 = BRANCH(cond_4, seq_then_38, empty_40);
	RzIlOpEffect *jump_sa0 = JUMP(sa0);
	RzIlOpEffect *empty_42 = EMPTY();
	RzIlOpEffect *op_ASSIGN_44 = SETG(lc0_assoc, op_SUB_43);
	RzIlOpEffect *empty_45 = EMPTY();
	RzIlOpEffect *seq_then_46 = SEQN(4, jump_sa0, empty_42, op_ASSIGN_44, empty_45);
	RzIlOpEffect *empty_48 = EMPTY();
	RzIlOpEffect *branch_47 = BRANCH(op_GT_41, seq_then_46, empty_48);
	RzIlOpEffect *instruction_sequence = SEQN(2, branch_39, branch_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_j2_endloop1() {
	// READ
	const char *lc1_assoc = ALIAS2REG(HEX_REG_ALIAS_LC1);
	RzIlOpPure *lc1 = VARG(lc1_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *sa1_assoc = ALIAS2REG(HEX_REG_ALIAS_SA1);
	RzIlOpPure *sa1 = VARG(sa1_assoc);

	// EXEC
	RzIlOpPure *op_GT_0 = LET("const_pos1", const_pos1, UGT(lc1, VARLP("const_pos1")));
	RzIlOpPure *op_SUB_2 = LET("const_pos1", const_pos1, SUB(lc1, VARLP("const_pos1")));

	// WRITE
	RzIlOpEffect *jump_sa1 = JUMP(sa1);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(lc1_assoc, op_SUB_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *seq_then_5 = SEQN(4, jump_sa1, empty_1, op_ASSIGN_3, empty_4);
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *branch_6 = BRANCH(op_GT_0, seq_then_5, empty_7);
	RzIlOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>