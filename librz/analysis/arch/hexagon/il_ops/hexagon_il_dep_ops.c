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

RzILOpEffect *hex_il_op_dep_a2_addsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2327;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2328;
	// Declare: ut32 h_tmp2329;
	// Declare: ut32 h_tmp2330;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2331;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(DUP(cast_st32_1)), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *op_ADD_5 = ADD(cast_st64_2, cast_st64_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, op_ADD_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2327"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *op_ADD_17 = ADD(cast_st64_14, cast_st64_16);
	RzILOpPure *op_EQ_18 = EQ(cond_12, op_ADD_17);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_ADD_23 = ADD(cast_st64_20, cast_st64_22);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_35 = CAST(64, MSB(DUP(VARL("h_tmp2329"))), VARL("h_tmp2329"));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("h_tmp2330"))), VARL("h_tmp2330"));
	RzILOpPure *arg_cast_37 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_41 = ITE(NON_ZERO(VARL("h_tmp2328")), VARL("h_tmp2331"), cast_42);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cond_41);
	RzILOpPure *cast_st32_46 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_47 = CAST(64, MSB(DUP(cast_st32_46)), cast_st32_46);
	RzILOpPure *cast_st32_48 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_49 = CAST(64, MSB(DUP(cast_st32_48)), cast_st32_48);
	RzILOpPure *op_ADD_50 = ADD(cast_st64_47, cast_st64_49);
	RzILOpPure *cast_52 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_51 = SLT(op_ADD_50, cast_52);
	RzILOpPure *op_SUB_53 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_53));
	RzILOpPure *op_NEG_55 = NEG(op_LSHIFT_54);
	RzILOpPure *op_SUB_56 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_56));
	RzILOpPure *cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_58 = SUB(op_LSHIFT_57, cast_59);
	RzILOpPure *cond_60 = ITE(op_LT_51, op_NEG_55, op_SUB_58);
	RzILOpPure *cond_61 = ITE(op_EQ_18, op_ADD_23, cond_60);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_61);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2327", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2328", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2329", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp2330", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2331", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(3, seq_29, seq_32, seq_39);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(2, seq_11, op_ASSIGN_62);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_64, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_dep_a2_subsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp2332;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2333;
	// Declare: ut32 h_tmp2334;
	// Declare: ut32 h_tmp2335;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2336;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(DUP(cast_st32_1)), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(DUP(cast_st32_3)), cast_st32_3);
	RzILOpPure *op_SUB_5 = SUB(cast_st64_2, cast_st64_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, op_SUB_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2332"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *op_SUB_17 = SUB(cast_st64_14, cast_st64_16);
	RzILOpPure *op_EQ_18 = EQ(cond_12, op_SUB_17);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_SUB_23 = SUB(cast_st64_20, cast_st64_22);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_35 = CAST(64, MSB(DUP(VARL("h_tmp2334"))), VARL("h_tmp2334"));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("h_tmp2335"))), VARL("h_tmp2335"));
	RzILOpPure *arg_cast_37 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_41 = ITE(NON_ZERO(VARL("h_tmp2333")), VARL("h_tmp2336"), cast_42);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cond_41);
	RzILOpPure *cast_st32_46 = CAST(32, MSB(DUP(DUP(Rt))), DUP(Rt));
	RzILOpPure *cast_st64_47 = CAST(64, MSB(DUP(cast_st32_46)), cast_st32_46);
	RzILOpPure *cast_st32_48 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_49 = CAST(64, MSB(DUP(cast_st32_48)), cast_st32_48);
	RzILOpPure *op_SUB_50 = SUB(cast_st64_47, cast_st64_49);
	RzILOpPure *cast_52 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_51 = SLT(op_SUB_50, cast_52);
	RzILOpPure *op_SUB_53 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_53));
	RzILOpPure *op_NEG_55 = NEG(op_LSHIFT_54);
	RzILOpPure *op_SUB_56 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_57 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_56));
	RzILOpPure *cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_58 = SUB(op_LSHIFT_57, cast_59);
	RzILOpPure *cond_60 = ITE(op_LT_51, op_NEG_55, op_SUB_58);
	RzILOpPure *cond_61 = ITE(op_EQ_18, op_SUB_23, cond_60);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_61);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2332", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2333", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2334", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp2335", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2336", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(3, seq_29, seq_32, seq_39);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(2, seq_11, op_ASSIGN_62);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_64, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_dep_s2_packhl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
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
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st16_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *op_OR_14 = LOGOR(op_AND_3, op_LSHIFT_13);
	RzILOpPure *op_MUL_17 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_17));
	RzILOpPure *op_NOT_19 = LOGNOT(op_LSHIFT_18);
	RzILOpPure *cast_21 = CAST(64, IL_FALSE, op_NOT_19);
	RzILOpPure *op_AND_20 = LOGAND(VARG(Rdd_assoc_tmp), cast_21);
	RzILOpPure *op_MUL_22 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rs, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st16_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_31 = LOGOR(op_AND_20, op_LSHIFT_30);
	RzILOpPure *op_MUL_34 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_34));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, op_NOT_36);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Rdd_assoc_tmp), cast_38);
	RzILOpPure *op_MUL_39 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_41)), op_AND_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cast_st16_42);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_44, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_MUL_46 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(cast_ut64_45, op_MUL_46);
	RzILOpPure *op_OR_48 = LOGOR(op_AND_37, op_LSHIFT_47);
	RzILOpPure *op_MUL_51 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_51));
	RzILOpPure *op_NOT_53 = LOGNOT(op_LSHIFT_52);
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, op_NOT_53);
	RzILOpPure *op_AND_54 = LOGAND(VARG(Rdd_assoc_tmp), cast_55);
	RzILOpPure *op_MUL_56 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cast_st16_59);
	RzILOpPure *op_AND_60 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_61, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_62 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_MUL_63 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_62, op_MUL_63);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_54, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_14);
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *op_ASSIGN_32 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_31);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_49 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_48);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_15, empty_16, op_ASSIGN_32, empty_33, op_ASSIGN_49, empty_50, op_ASSIGN_66, empty_67);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>