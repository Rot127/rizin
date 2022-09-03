// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-03 08:20:53-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-02 14:24:46-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_dep_a2_addsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *op_ADD_5 = ADD(cast_st64_2, cast_st64_4);
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_ADD_14 = ADD(cast_st64_11, cast_st64_13);
	RzILOpPure *op_EQ_15 = EQ(cond_9, op_ADD_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_ADD_20 = ADD(cast_st64_17, cast_st64_19);
	RzILOpPure *cond_37 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_41 = CAST(32, IL_FALSE, cast_st32_40);
	RzILOpPure *cast_st32_42 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_43 = CAST(64, MSB(cast_st32_42), cast_st32_42);
	RzILOpPure *op_ADD_44 = ADD(cast_st64_41, cast_st64_43);
	RzILOpPure *op_LT_45 = LET("const_pos0", DUP(const_pos0), ULT(op_ADD_44, VARLP("const_pos0")));
	RzILOpPure *op_SUB_46 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_SUB_49 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_49));
	RzILOpPure *op_SUB_51 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_50, VARLP("const_pos1")));
	RzILOpPure *cond_52 = ITE(op_LT_45, op_NEG_48, op_SUB_51);
	RzILOpPure *cond_53 = ITE(op_EQ_15, op_ADD_20, cond_52);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(op_ADD_5, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos32", DUP(const_pos32), VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_8, seq_23);
	RzILOpEffect *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_24, seq_27);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_28, seq_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *op_ASSIGN_38 = SETG(usr_assoc_tmp, cond_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_36, op_ASSIGN_38);
	RzILOpEffect *op_ASSIGN_54 = SETG(Rd_assoc_tmp, cond_53);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_54, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_dep_a2_subsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *op_SUB_5 = SUB(cast_st64_2, cast_st64_4);
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_11 = CAST(64, MSB(cast_st32_10), cast_st32_10);
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_SUB_14 = SUB(cast_st64_11, cast_st64_13);
	RzILOpPure *op_EQ_15 = EQ(cond_9, op_SUB_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_SUB_20 = SUB(cast_st64_17, cast_st64_19);
	RzILOpPure *cond_37 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_41 = CAST(32, IL_FALSE, cast_st32_40);
	RzILOpPure *cast_st32_42 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_43 = CAST(64, MSB(cast_st32_42), cast_st32_42);
	RzILOpPure *op_SUB_44 = SUB(cast_st64_41, cast_st64_43);
	RzILOpPure *op_LT_45 = LET("const_pos0", DUP(const_pos0), ULT(op_SUB_44, VARLP("const_pos0")));
	RzILOpPure *op_SUB_46 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_SUB_49 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_49));
	RzILOpPure *op_SUB_51 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_50, VARLP("const_pos1")));
	RzILOpPure *cond_52 = ITE(op_LT_45, op_NEG_48, op_SUB_51);
	RzILOpPure *cond_53 = ITE(op_EQ_15, op_SUB_20, cond_52);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(op_SUB_5, LET("const_pos0", DUP(const_pos0), VARLP("const_pos0")), LET("const_pos32", DUP(const_pos32), VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_8, seq_23);
	RzILOpEffect *c_call_25 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_24, seq_27);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_28, seq_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", DUP(const_pos1), VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *op_ASSIGN_38 = SETG(usr_assoc_tmp, cond_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_36, op_ASSIGN_38);
	RzILOpEffect *op_ASSIGN_54 = SETG(Rd_assoc_tmp, cond_53);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_54, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_dep_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(32, IL_FALSE, op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_7, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(32, IL_FALSE, op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_37, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(32, IL_FALSE, op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_st16_52, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rdd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rdd_assoc_tmp, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>