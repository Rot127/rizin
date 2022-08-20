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

RzILOpEffect *hex_il_op_a2_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rs, VARLP("const_pos0")));
	RzILOpPure *op_NEG_1 = NEG(DUP(Rs));
	RzILOpPure *cond_2 = ITE(op_LT_0, op_NEG_1, DUP(Rs));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_absp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(Rss, VARLP("const_pos0")));
	RzILOpPure *op_NEG_1 = NEG(DUP(Rss));
	RzILOpPure *cond_2 = ITE(op_LT_0, op_NEG_1, DUP(Rss));

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rdd_assoc_tmp, cond_2);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_abssat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
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
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_2 = CAST(32, IL_FALSE, cast_st32_1);
	RzILOpPure *op_LT_3 = LET("const_pos0", const_pos0, ULT(cast_st64_2, VARLP("const_pos0")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *op_NEG_6 = NEG(cast_st64_5);
	RzILOpPure *cast_st32_7 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_8 = CAST(64, MSB(cast_st32_7), cast_st32_7);
	RzILOpPure *cond_9 = ITE(op_LT_3, op_NEG_6, cast_st64_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_15 = CAST(32, IL_FALSE, cast_st32_14);
	RzILOpPure *op_LT_16 = LET("const_pos0", const_pos0, ULT(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);
	RzILOpPure *op_NEG_19 = NEG(cast_st64_18);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cond_22 = ITE(op_LT_16, op_NEG_19, cast_st64_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, cond_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_25 = CAST(32, IL_FALSE, cast_st32_24);
	RzILOpPure *op_LT_26 = LET("const_pos0", const_pos0, ULT(cast_st64_25, VARLP("const_pos0")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_28 = CAST(64, MSB(cast_st32_27), cast_st32_27);
	RzILOpPure *op_NEG_29 = NEG(cast_st64_28);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);
	RzILOpPure *cond_32 = ITE(op_LT_26, op_NEG_29, cast_st64_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_53 = CAST(32, IL_FALSE, cast_st32_52);
	RzILOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(cast_st64_53, VARLP("const_pos0")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_56 = CAST(32, IL_FALSE, cast_st32_55);
	RzILOpPure *op_NEG_57 = NEG(cast_st64_56);
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_59 = CAST(64, MSB(cast_st32_58), cast_st32_58);
	RzILOpPure *cond_60 = ITE(op_LT_54, op_NEG_57, cast_st64_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(cond_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, cond_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(cond_9, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_add(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_ADD_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rd_assoc_tmp, cond_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_12, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rd_assoc_tmp, cond_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_12, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_ADD_22 = ADD(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_ADD_32 = ADD(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addpsat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_addsat(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos1LL = SN(64, 0x1);

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
	RzILOpPure *op_LT_45 = LET("const_pos0", const_pos0, ULT(op_ADD_44, VARLP("const_pos0")));
	RzILOpPure *op_SUB_46 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_SUB_49 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_49));
	RzILOpPure *op_SUB_51 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_50, VARLP("const_pos1")));
	RzILOpPure *cond_52 = ITE(op_LT_45, op_NEG_48, op_SUB_51);
	RzILOpPure *cond_53 = ITE(op_EQ_15, op_ADD_20, cond_52);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(op_ADD_5, VARLP("const_pos0"), VARLP("const_pos32"));
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
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *op_ASSIGN_38 = SETG(usr_assoc_tmp, cond_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_36, op_ASSIGN_38);
	RzILOpEffect *op_ASSIGN_54 = SETG(Rd_assoc_tmp, cond_53);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_54, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addsph(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_10 = ADD(Rtt, cond_9);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(cast_st64_5, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rdd_assoc_tmp, op_ADD_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addspl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_10 = ADD(Rtt, cond_9);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(cast_st64_5, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *op_ASSIGN_11 = SETG(Rdd_assoc_tmp, op_ADD_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_8, op_ASSIGN_11);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("s", s, LOGAND(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_aslh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_LSHIFT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_asrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *op_RSHIFT_0 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_RSHIFT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_3 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", const_pos16, SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *S = UN(64, (ut64)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("S", S, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("S"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("s", s, LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(VARLP("s"), VARLP("const_pos0x0ffffffffLL"))));
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combinew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rt, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(op_AND_4, op_MUL_5);
	RzILOpPure *op_OR_7 = LOGOR(op_AND_3, op_LSHIFT_6);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_12 = LOGNOT(op_LSHIFT_11);
	RzILOpPure *op_AND_13 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(Rs, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_14, op_MUL_15);
	RzILOpPure *op_OR_17 = LOGOR(op_AND_13, op_LSHIFT_16);

	// WRITE
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_OR_7);
	RzILOpEffect *empty_9 = EMPTY();
	RzILOpEffect *op_ASSIGN_18 = SETG(Rdd_assoc_tmp, op_OR_17);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_8, empty_9, op_ASSIGN_18, empty_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_max(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rs, Rt);
	RzILOpPure *cond_1 = ITE(op_GT_0, DUP(Rs), DUP(Rt));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_GT_0 = UGT(Rss, Rtt);
	RzILOpPure *cond_1 = ITE(op_GT_0, DUP(Rss), DUP(Rtt));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_GT_2 = UGT(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *cond_5 = ITE(op_GT_2, cast_ut32_3, cast_ut32_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *op_GT_2 = UGT(cast_ut64_0, cast_ut64_1);
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rtt));
	RzILOpPure *cond_5 = ITE(op_GT_2, cast_ut64_3, cast_ut64_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_min(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_LT_0 = ULT(Rt, Rs);
	RzILOpPure *cond_1 = ITE(op_LT_0, DUP(Rt), DUP(Rs));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_0 = ULT(Rtt, Rss);
	RzILOpPure *cond_1 = ITE(op_LT_0, DUP(Rtt), DUP(Rss));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_ut32_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LT_2 = ULT(cast_ut32_0, cast_ut32_1);
	RzILOpPure *cast_ut32_3 = CAST(32, IL_FALSE, DUP(Rt));
	RzILOpPure *cast_ut32_4 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cond_5 = ITE(op_LT_2, cast_ut32_3, cast_ut32_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_LT_2 = ULT(cast_ut64_0, cast_ut64_1);
	RzILOpPure *cast_ut64_3 = CAST(64, IL_FALSE, DUP(Rtt));
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cond_5 = ITE(op_LT_2, cast_ut64_3, cast_ut64_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cond_5);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NEG_0 = NEG(Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_NEG_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
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
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(Rs), DUP(Rs));
	RzILOpPure *op_NEG_2 = NEG(cast_st64_1);
	RzILOpPure *cond_6 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_NEG_8 = NEG(cast_st64_7);
	RzILOpPure *op_EQ_9 = EQ(cond_6, op_NEG_8);
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_NEG_11 = NEG(cast_st64_10);
	RzILOpPure *cond_28 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st64_31 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_NEG_32 = NEG(cast_st64_31);
	RzILOpPure *op_LT_33 = LET("const_pos0", const_pos0, ULT(op_NEG_32, VARLP("const_pos0")));
	RzILOpPure *op_SUB_34 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzILOpPure *op_NEG_36 = NEG(op_LSHIFT_35);
	RzILOpPure *op_SUB_37 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_37));
	RzILOpPure *op_SUB_39 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_38, VARLP("const_pos1")));
	RzILOpPure *cond_40 = ITE(op_LT_33, op_NEG_36, op_SUB_39);
	RzILOpPure *cond_41 = ITE(op_EQ_9, op_NEG_11, cond_40);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(op_NEG_2, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_12 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_5, seq_14);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, seq_18);
	RzILOpEffect *c_call_20 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *seq_23 = SEQN(2, seq_19, seq_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_23, seq_26);
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc_tmp, cond_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_27, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_42 = SETG(Rd_assoc_tmp, cond_41);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_42, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_nop(HexInsnPktBundle *bundle) {
	// READ

	// EXEC

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(1, empty_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_notp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_NOT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LET("s", s, LOGOR(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddifnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_padditnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(Rs, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_ADD_1 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_AND_1 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_porf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_porfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_port(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_portnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_OR_1 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubtnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_SUB_1 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxorf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_XOR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxorfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_XOR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxort(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_XOR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxortnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(Pu, VARLP("const_pos1")));
	RzILOpPure *op_XOR_1 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_XOR_1);
	RzILOpEffect *nop_3 = NOP();
	RzILOpEffect *seq_then_4 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_6 = SEQN(1, nop_3);
	RzILOpEffect *branch_5 = BRANCH(op_AND_0, seq_then_4, seq_else_6);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_roundsat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a2_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = EQ(cond_4, Rss);
	RzILOpPure *cond_22 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(DUP(Rss), VARLP("const_pos0")));
	RzILOpPure *op_SUB_26 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_27 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_26));
	RzILOpPure *op_NEG_28 = NEG(op_LSHIFT_27);
	RzILOpPure *op_SUB_29 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_30 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_29));
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_30, VARLP("const_pos1")));
	RzILOpPure *cond_32 = ITE(op_LT_25, op_NEG_28, op_SUB_31);
	RzILOpPure *cond_33 = ITE(op_EQ_5, DUP(Rss), cond_32);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(DUP(Rss), VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_3, seq_8);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, seq_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_13, seq_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, seq_20);
	RzILOpEffect *op_ASSIGN_23 = SETG(usr_assoc_tmp, cond_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_21, op_ASSIGN_23);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rd_assoc_tmp, cond_33);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_34, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = EQ(cond_4, Rs);
	RzILOpPure *cond_22 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_SUB_26 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_27 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_26));
	RzILOpPure *op_NEG_28 = NEG(op_LSHIFT_27);
	RzILOpPure *op_SUB_29 = LET("const_pos8", const_pos8, LET("const_pos1", const_pos1, SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_30 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_29));
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_30, VARLP("const_pos1")));
	RzILOpPure *cond_32 = ITE(op_LT_25, op_NEG_28, op_SUB_31);
	RzILOpPure *cond_33 = ITE(op_EQ_5, DUP(Rs), cond_32);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(DUP(Rs), VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_3, seq_8);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, seq_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_13, seq_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, seq_20);
	RzILOpEffect *op_ASSIGN_23 = SETG(usr_assoc_tmp, cond_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_21, op_ASSIGN_23);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rd_assoc_tmp, cond_33);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_34, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sath(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = EQ(cond_4, Rs);
	RzILOpPure *cond_22 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_SUB_26 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_27 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_26));
	RzILOpPure *op_NEG_28 = NEG(op_LSHIFT_27);
	RzILOpPure *op_SUB_29 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_30 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_29));
	RzILOpPure *op_SUB_31 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_30, VARLP("const_pos1")));
	RzILOpPure *cond_32 = ITE(op_LT_25, op_NEG_28, op_SUB_31);
	RzILOpPure *cond_33 = ITE(op_EQ_5, DUP(Rs), cond_32);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(DUP(Rs), VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_3, seq_8);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, seq_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_13, seq_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, seq_20);
	RzILOpEffect *op_ASSIGN_23 = SETG(usr_assoc_tmp, cond_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_21, op_ASSIGN_23);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rd_assoc_tmp, cond_33);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_34, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = EQ(cond_4, Rs);
	RzILOpPure *cond_22 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_27 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = LET("const_pos0", const_pos0, ITE(op_LT_25, VARLP("const_pos0"), op_SUB_27));
	RzILOpPure *cond_29 = ITE(op_EQ_5, DUP(Rs), cond_28);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(DUP(Rs), VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_3, seq_8);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, seq_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_13, seq_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, seq_20);
	RzILOpEffect *op_ASSIGN_23 = SETG(usr_assoc_tmp, cond_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_21, op_ASSIGN_23);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rd_assoc_tmp, cond_29);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_30, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_5 = EQ(cond_4, Rs);
	RzILOpPure *cond_22 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_26 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_27 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_26, VARLP("const_pos1")));
	RzILOpPure *cond_28 = LET("const_pos0", const_pos0, ITE(op_LT_25, VARLP("const_pos0"), op_SUB_27));
	RzILOpPure *cond_29 = ITE(op_EQ_5, DUP(Rs), cond_28);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(DUP(Rs), VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_6 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *seq_9 = SEQN(2, seq_3, seq_8);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *seq_13 = SEQN(2, seq_9, seq_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_13, seq_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, seq_20);
	RzILOpEffect *op_ASSIGN_23 = SETG(usr_assoc_tmp, cond_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_21, op_ASSIGN_23);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rd_assoc_tmp, cond_29);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_30, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rt, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_1, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_3 = CAST(16, MSB(op_AND_2), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", const_pos16, SHIFTL0(op_SUB_8, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, op_LSHIFT_9);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);
	RzILOpPure *op_LSHIFT_70 = LET("const_pos16", const_pos16, SHIFTL0(cond_69, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_71 = SETG(Rd_assoc_tmp, op_LSHIFT_70);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_71, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rd_assoc_tmp, cond_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_12, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_14 = SETG(Rd_assoc_tmp, cond_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_12, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(op_AND_3), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rt), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_SUB_22 = SUB(cast_st16_17, cast_st16_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rs), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(op_AND_30), op_AND_30);
	RzILOpPure *op_SUB_32 = SUB(cast_st16_27, cast_st16_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(16, MSB(op_AND_58), op_AND_58);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_55, cast_st16_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rd_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rtt, Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = LET("s", s, SUB(VARLP("s"), Rs));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subsat(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos1LL = SN(64, 0x1);

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
	RzILOpPure *op_LT_45 = LET("const_pos0", const_pos0, ULT(op_SUB_44, VARLP("const_pos0")));
	RzILOpPure *op_SUB_46 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_46));
	RzILOpPure *op_NEG_48 = NEG(op_LSHIFT_47);
	RzILOpPure *op_SUB_49 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_50 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_49));
	RzILOpPure *op_SUB_51 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_50, VARLP("const_pos1")));
	RzILOpPure *cond_52 = ITE(op_LT_45, op_NEG_48, op_SUB_51);
	RzILOpPure *cond_53 = ITE(op_EQ_15, op_SUB_20, cond_52);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(op_SUB_5, VARLP("const_pos0"), VARLP("const_pos32"));
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
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *op_ASSIGN_38 = SETG(usr_assoc_tmp, cond_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_36, op_ASSIGN_38);
	RzILOpEffect *op_ASSIGN_54 = SETG(Rd_assoc_tmp, cond_53);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_54, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_ADD_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rs, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_ADD_19 = ADD(cast_st16_14, cast_st16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rs), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_st16_28, cast_st16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rs), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(op_AND_41), op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_st16_38, cast_st16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_70 = CAST(16, MSB(op_AND_69), op_AND_69);
	RzILOpPure *op_ADD_71 = ADD(cast_st16_66, cast_st16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_ADD_71, VARLP("const_pos0")));
	RzILOpPure *op_SUB_73 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *op_NEG_75 = NEG(op_LSHIFT_74);
	RzILOpPure *op_SUB_76 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_76));
	RzILOpPure *op_SUB_78 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_77, VARLP("const_pos1")));
	RzILOpPure *cond_79 = ITE(op_LT_72, op_NEG_75, op_SUB_78);
	RzILOpPure *cond_80 = ITE(op_EQ_34, op_ADD_43, cond_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_80, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_9, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_86, empty_87);
	RzILOpEffect *for_89 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_88));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_89, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rs, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_14 = CAST(16, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_ADD_19 = ADD(cast_ut16_14, cast_ut16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rs), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_32 = CAST(16, IL_FALSE, op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_ut16_28, cast_ut16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rs), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_ut16_38, cast_ut16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_70 = CAST(16, IL_FALSE, op_AND_69);
	RzILOpPure *op_ADD_71 = ADD(cast_ut16_66, cast_ut16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_ADD_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_ADD_43, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_76, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_9, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos16"));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
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

RzILOpEffect *hex_il_op_a2_svavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavghs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rs, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_ADD_19 = LET("const_pos1", const_pos1, ADD(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_20 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_19, VARLP("const_pos1")));
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_9, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_5, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_29));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st16_13, cast_st16_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st16_13, cast_st16_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_SUB_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rs, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_st16_14, cast_st16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rs), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_st16_28, cast_st16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rs), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(op_AND_41), op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_st16_38, cast_st16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rs), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_70 = CAST(16, MSB(op_AND_69), op_AND_69);
	RzILOpPure *op_SUB_71 = SUB(cast_st16_66, cast_st16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_SUB_71, VARLP("const_pos0")));
	RzILOpPure *op_SUB_73 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *op_NEG_75 = NEG(op_LSHIFT_74);
	RzILOpPure *op_SUB_76 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_76));
	RzILOpPure *op_SUB_78 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_77, VARLP("const_pos1")));
	RzILOpPure *cond_79 = ITE(op_LT_72, op_NEG_75, op_SUB_78);
	RzILOpPure *cond_80 = ITE(op_EQ_34, op_SUB_43, cond_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_80, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_9, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_86, empty_87);
	RzILOpEffect *for_89 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_88));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_89, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_14 = CAST(16, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rs, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_ut16_14, cast_ut16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rs), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_32 = CAST(16, IL_FALSE, op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_ut16_28, cast_ut16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rs), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_ut16_38, cast_ut16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rt), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rs), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_70 = CAST(16, IL_FALSE, op_AND_69);
	RzILOpPure *op_SUB_71 = SUB(cast_ut16_66, cast_ut16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_SUB_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_SUB_43, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_76, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_9, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos16"));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
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

RzILOpEffect *hex_il_op_a2_swiz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(64, MSB(op_AND_6), op_AND_6);
	RzILOpPure *op_AND_8 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_7, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, op_AND_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_ut64_9, op_MUL_10);
	RzILOpPure *op_OR_12 = LOGOR(op_AND_3, op_LSHIFT_11);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_17);
	RzILOpPure *op_MUL_19 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rs), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_22 = CAST(64, MSB(op_AND_21), op_AND_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_24, op_MUL_25);
	RzILOpPure *op_OR_27 = LOGOR(op_AND_18, op_LSHIFT_26);
	RzILOpPure *op_MUL_30 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_31 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_30));
	RzILOpPure *op_NOT_32 = LOGNOT(op_LSHIFT_31);
	RzILOpPure *op_AND_33 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_32);
	RzILOpPure *op_MUL_34 = LET("const_pos1", const_pos1, LET("const_pos8", const_pos8, MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rs), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_37 = CAST(64, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_37, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_39 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos2", const_pos2, LET("const_pos8", const_pos8, MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_39, op_MUL_40);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_33, op_LSHIFT_41);
	RzILOpPure *op_MUL_45 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_46 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_45));
	RzILOpPure *op_NOT_47 = LOGNOT(op_LSHIFT_46);
	RzILOpPure *op_AND_48 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_47);
	RzILOpPure *op_MUL_49 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_52 = CAST(64, MSB(op_AND_51), op_AND_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cast_st8_52, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_AND_53);
	RzILOpPure *op_MUL_55 = LET("const_pos3", const_pos3, LET("const_pos8", const_pos8, MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_54, op_MUL_55);
	RzILOpPure *op_OR_57 = LOGOR(op_AND_48, op_LSHIFT_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_13 = SETG(Rd_assoc_tmp, op_OR_12);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_28 = SETG(Rd_assoc_tmp, op_OR_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_43 = SETG(Rd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = SETG(Rd_assoc_tmp, op_OR_57);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_13, empty_14, op_ASSIGN_28, empty_29, op_ASSIGN_43, empty_44, op_ASSIGN_58, empty_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(cast_st32_0), cast_st32_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, cast_st64_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, Rs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrcrr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Cs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Cs = VARG(Cs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, Cs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrih(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rx, op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARLP("u"), VARLP("const_pos0x0ffff"))));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, op_AND_4);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(cast_ut64_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_3, op_LSHIFT_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rx_assoc_tmp, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfril(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(Rx, op_NOT_2);
	RzILOpPure *op_AND_4 = LET("u", u, LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARLP("u"), VARLP("const_pos0x0ffff"))));
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, op_AND_4);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(cast_ut64_5, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_3, op_LSHIFT_7);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = SETG(Rx_assoc_tmp, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrrcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Cd_assoc_tmp, Rs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrsi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rd_assoc_tmp, LET("s", s, VARLP("s")));
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsh(HexInsnPktBundle *bundle) {
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
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_LT_14 = LET("const_pos0", const_pos0, ULT(cast_st16_13, VARLP("const_pos0")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(DUP(Rss), op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_NEG_19 = NEG(cast_st16_18);
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(op_AND_22), op_AND_22);
	RzILOpPure *cond_24 = ITE(op_LT_14, op_NEG_19, cast_st16_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_24, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_9, op_LSHIFT_28);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_5, op_ASSIGN_30);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *seq_33 = SEQN(2, seq_31, empty_32);
	RzILOpEffect *for_34 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_33));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabshsat(HexInsnPktBundle *bundle) {
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
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *op_LT_15 = LET("const_pos0", const_pos0, ULT(cast_st16_14, VARLP("const_pos0")));
	RzILOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzILOpPure *op_NEG_20 = NEG(cast_st16_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cond_25 = ITE(op_LT_15, op_NEG_20, cast_st16_24);
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(32, IL_FALSE, op_AND_33);
	RzILOpPure *op_LT_35 = LET("const_pos0", const_pos0, ULT(cast_st16_34, VARLP("const_pos0")));
	RzILOpPure *op_MUL_36 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(op_AND_38), op_AND_38);
	RzILOpPure *op_NEG_40 = NEG(cast_st16_39);
	RzILOpPure *op_MUL_41 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_42, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_44 = CAST(16, MSB(op_AND_43), op_AND_43);
	RzILOpPure *cond_45 = ITE(op_LT_35, op_NEG_40, cast_st16_44);
	RzILOpPure *op_EQ_46 = EQ(cond_30, cond_45);
	RzILOpPure *op_MUL_47 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_50 = CAST(32, IL_FALSE, op_AND_49);
	RzILOpPure *op_LT_51 = LET("const_pos0", const_pos0, ULT(cast_st16_50, VARLP("const_pos0")));
	RzILOpPure *op_MUL_52 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rss), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(32, IL_FALSE, op_AND_54);
	RzILOpPure *op_NEG_56 = NEG(cast_st16_55);
	RzILOpPure *op_MUL_57 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rss), op_MUL_57);
	RzILOpPure *op_AND_59 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_58, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_60 = CAST(16, MSB(op_AND_59), op_AND_59);
	RzILOpPure *cond_61 = ITE(op_LT_51, op_NEG_56, cast_st16_60);
	RzILOpPure *cond_78 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_81 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rss), op_MUL_81);
	RzILOpPure *op_AND_83 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_82, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_84 = CAST(32, IL_FALSE, op_AND_83);
	RzILOpPure *op_LT_85 = LET("const_pos0", const_pos0, ULT(cast_st16_84, VARLP("const_pos0")));
	RzILOpPure *op_MUL_86 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(32, IL_FALSE, op_AND_88);
	RzILOpPure *op_NEG_90 = NEG(cast_st16_89);
	RzILOpPure *op_MUL_91 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_92, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_94 = CAST(16, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cond_95 = ITE(op_LT_85, op_NEG_90, cast_st16_94);
	RzILOpPure *op_LT_96 = LET("const_pos0", const_pos0, ULT(cond_95, VARLP("const_pos0")));
	RzILOpPure *op_SUB_97 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_97));
	RzILOpPure *op_NEG_99 = NEG(op_LSHIFT_98);
	RzILOpPure *op_SUB_100 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_101 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_100));
	RzILOpPure *op_SUB_102 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_101, VARLP("const_pos1")));
	RzILOpPure *cond_103 = ITE(op_LT_96, op_NEG_99, op_SUB_102);
	RzILOpPure *cond_104 = ITE(op_EQ_46, cond_61, cond_103);
	RzILOpPure *op_AND_105 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_104, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_106 = CAST(64, IL_FALSE, op_AND_105);
	RzILOpPure *op_MUL_107 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_108 = SHIFTL0(cast_ut64_106, op_MUL_107);
	RzILOpPure *op_OR_109 = LOGOR(op_AND_9, op_LSHIFT_108);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_26 = HEX_SEXTRACT64(cond_25, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_5, seq_28);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_29, seq_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *seq_69 = SEQN(2, seq_65, seq_68);
	RzILOpEffect *c_call_70 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_69, seq_72);
	RzILOpEffect *c_call_74 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(2, seq_73, seq_76);
	RzILOpEffect *op_ASSIGN_79 = SETG(usr_assoc_tmp, cond_78);
	RzILOpEffect *seq_80 = SEQN(2, seq_77, op_ASSIGN_79);
	RzILOpEffect *op_ASSIGN_110 = SETG(Rdd_assoc_tmp, op_OR_109);
	RzILOpEffect *empty_111 = EMPTY();
	RzILOpEffect *seq_112 = SEQN(2, op_ASSIGN_110, empty_111);
	RzILOpEffect *for_113 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_112));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_113, seq_80);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(32, IL_FALSE, cast_st32_13);
	RzILOpPure *op_LT_15 = LET("const_pos0", const_pos0, ULT(cast_st64_14, VARLP("const_pos0")));
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, IL_FALSE, cast_st32_19);
	RzILOpPure *op_NEG_21 = NEG(cast_st64_20);
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cond_27 = ITE(op_LT_15, op_NEG_21, cast_st64_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_29 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(op_AND_28, op_MUL_29);
	RzILOpPure *op_OR_31 = LOGOR(op_AND_9, op_LSHIFT_30);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_32 = SETG(Rdd_assoc_tmp, op_OR_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_5, op_ASSIGN_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, seq_33, empty_34);
	RzILOpEffect *for_36 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_35));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_36);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabswsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(32, IL_FALSE, cast_st32_14);
	RzILOpPure *op_LT_16 = LET("const_pos0", const_pos0, ULT(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *op_NEG_22 = NEG(cast_st64_21);
	RzILOpPure *op_MUL_23 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *cond_28 = ITE(op_LT_16, op_NEG_22, cast_st64_27);
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_34 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(op_AND_36), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzILOpPure *op_LT_39 = LET("const_pos0", const_pos0, ULT(cast_st64_38, VARLP("const_pos0")));
	RzILOpPure *op_MUL_40 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_43 = CAST(32, MSB(op_AND_42), op_AND_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(cast_st32_43), cast_st32_43);
	RzILOpPure *op_NEG_45 = NEG(cast_st64_44);
	RzILOpPure *op_MUL_46 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_46);
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_47, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_49 = CAST(32, MSB(op_AND_48), op_AND_48);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(cast_st32_49), cast_st32_49);
	RzILOpPure *cond_51 = ITE(op_LT_39, op_NEG_45, cast_st64_50);
	RzILOpPure *op_EQ_52 = EQ(cond_33, cond_51);
	RzILOpPure *op_MUL_53 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rss), op_MUL_53);
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_54, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_56 = CAST(32, MSB(op_AND_55), op_AND_55);
	RzILOpPure *cast_st64_57 = CAST(32, IL_FALSE, cast_st32_56);
	RzILOpPure *op_LT_58 = LET("const_pos0", const_pos0, ULT(cast_st64_57, VARLP("const_pos0")));
	RzILOpPure *op_MUL_59 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_60, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_62 = CAST(32, MSB(op_AND_61), op_AND_61);
	RzILOpPure *cast_st64_63 = CAST(64, IL_FALSE, cast_st32_62);
	RzILOpPure *op_NEG_64 = NEG(cast_st64_63);
	RzILOpPure *op_MUL_65 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_68 = CAST(32, MSB(op_AND_67), op_AND_67);
	RzILOpPure *cast_st64_69 = CAST(64, MSB(cast_st32_68), cast_st32_68);
	RzILOpPure *cond_70 = ITE(op_LT_58, op_NEG_64, cast_st64_69);
	RzILOpPure *cond_87 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_90 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *op_AND_92 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_91, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_93 = CAST(32, MSB(op_AND_92), op_AND_92);
	RzILOpPure *cast_st64_94 = CAST(32, IL_FALSE, cast_st32_93);
	RzILOpPure *op_LT_95 = LET("const_pos0", const_pos0, ULT(cast_st64_94, VARLP("const_pos0")));
	RzILOpPure *op_MUL_96 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rss), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_97, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_99 = CAST(32, MSB(op_AND_98), op_AND_98);
	RzILOpPure *cast_st64_100 = CAST(32, IL_FALSE, cast_st32_99);
	RzILOpPure *op_NEG_101 = NEG(cast_st64_100);
	RzILOpPure *op_MUL_102 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cond_107 = ITE(op_LT_95, op_NEG_101, cast_st64_106);
	RzILOpPure *op_LT_108 = LET("const_pos0", const_pos0, ULT(cond_107, VARLP("const_pos0")));
	RzILOpPure *op_SUB_109 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_110 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_109));
	RzILOpPure *op_NEG_111 = NEG(op_LSHIFT_110);
	RzILOpPure *op_SUB_112 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_113 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_112));
	RzILOpPure *op_SUB_114 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_113, VARLP("const_pos1")));
	RzILOpPure *cond_115 = ITE(op_LT_108, op_NEG_111, op_SUB_114);
	RzILOpPure *cond_116 = ITE(op_EQ_52, cond_70, cond_115);
	RzILOpPure *op_AND_117 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_116, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_118 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_119 = SHIFTL0(op_AND_117, op_MUL_118);
	RzILOpPure *op_OR_120 = LOGOR(op_AND_9, op_LSHIFT_119);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_29 = HEX_SEXTRACT64(cond_28, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_5, seq_31);
	RzILOpEffect *c_call_71 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_32, seq_73);
	RzILOpEffect *c_call_75 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_75, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(2, seq_74, seq_77);
	RzILOpEffect *c_call_79 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_80 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_81 = SEQN(2, c_call_79, op_ASSIGN_hybrid_tmp_80);
	RzILOpEffect *seq_82 = SEQN(2, seq_78, seq_81);
	RzILOpEffect *c_call_83 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_84 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_85 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_84);
	RzILOpEffect *seq_86 = SEQN(2, seq_82, seq_85);
	RzILOpEffect *op_ASSIGN_88 = SETG(usr_assoc_tmp, cond_87);
	RzILOpEffect *seq_89 = SEQN(2, seq_86, op_ASSIGN_88);
	RzILOpEffect *op_ASSIGN_121 = SETG(Rdd_assoc_tmp, op_OR_120);
	RzILOpEffect *empty_122 = EMPTY();
	RzILOpEffect *seq_123 = SEQN(2, op_ASSIGN_121, empty_122);
	RzILOpEffect *for_124 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_123));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_124, seq_89);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddh(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_ADD_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddhs(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
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
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_st16_28, cast_st16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(32, IL_FALSE, op_AND_37);
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
	RzILOpPure *op_SUB_73 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *op_NEG_75 = NEG(op_LSHIFT_74);
	RzILOpPure *op_SUB_76 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_76));
	RzILOpPure *op_SUB_78 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_77, VARLP("const_pos1")));
	RzILOpPure *cond_79 = ITE(op_LT_72, op_NEG_75, op_SUB_78);
	RzILOpPure *cond_80 = ITE(op_EQ_34, op_ADD_43, cond_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_80, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_9, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_86, empty_87);
	RzILOpEffect *for_89 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_88));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_89, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_ADD_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddubs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut8 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_14 = CAST(8, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_17);
	RzILOpPure *op_ADD_19 = ADD(cast_ut8_14, cast_ut8_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_28 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_32 = CAST(8, IL_FALSE, op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_ut8_28, cast_ut8_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_38 = CAST(64, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_42 = CAST(8, IL_FALSE, op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_ut8_38, cast_ut8_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_70 = CAST(8, IL_FALSE, op_AND_69);
	RzILOpPure *op_ADD_71 = ADD(cast_ut8_66, cast_ut8_70);
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
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", UNSIGNED(8, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rdd_assoc_tmp, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *for_85 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_84));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_85, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vadduhs(HexInsnPktBundle *bundle) {
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
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_14 = CAST(16, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_ADD_19 = ADD(cast_ut16_14, cast_ut16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_32 = CAST(16, IL_FALSE, op_AND_31);
	RzILOpPure *op_ADD_33 = ADD(cast_ut16_28, cast_ut16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_ut16_38, cast_ut16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_70 = CAST(16, IL_FALSE, op_AND_69);
	RzILOpPure *op_ADD_71 = ADD(cast_ut16_66, cast_ut16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_ADD_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_ADD_43, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_76, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_9, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_ADD_19, VARLP("const_pos0"), VARLP("const_pos16"));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rdd_assoc_tmp, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *for_85 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_84));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_85, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_ADD_20 = ADD(cast_st64_14, cast_st64_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_ADD_21 = ADD(cast_st64_15, cast_st64_20);
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);
	RzILOpPure *op_MUL_32 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(cast_st32_35), cast_st32_35);
	RzILOpPure *op_ADD_37 = ADD(cast_st64_31, cast_st64_36);
	RzILOpPure *op_EQ_38 = EQ(cond_26, op_ADD_37);
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzILOpPure *cast_st64_43 = CAST(64, IL_FALSE, cast_st32_42);
	RzILOpPure *op_MUL_44 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rtt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *op_ADD_49 = ADD(cast_st64_43, cast_st64_48);
	RzILOpPure *cond_66 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_69 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_72 = CAST(32, MSB(op_AND_71), op_AND_71);
	RzILOpPure *cast_st64_73 = CAST(32, IL_FALSE, cast_st32_72);
	RzILOpPure *op_MUL_74 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rtt), op_MUL_74);
	RzILOpPure *op_AND_76 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_75, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_77 = CAST(32, MSB(op_AND_76), op_AND_76);
	RzILOpPure *cast_st64_78 = CAST(64, MSB(cast_st32_77), cast_st32_77);
	RzILOpPure *op_ADD_79 = ADD(cast_st64_73, cast_st64_78);
	RzILOpPure *op_LT_80 = LET("const_pos0", const_pos0, ULT(op_ADD_79, VARLP("const_pos0")));
	RzILOpPure *op_SUB_81 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *op_NEG_83 = NEG(op_LSHIFT_82);
	RzILOpPure *op_SUB_84 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_84));
	RzILOpPure *op_SUB_86 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_85, VARLP("const_pos1")));
	RzILOpPure *cond_87 = ITE(op_LT_80, op_NEG_83, op_SUB_86);
	RzILOpPure *cond_88 = ITE(op_EQ_38, op_ADD_49, cond_87);
	RzILOpPure *op_AND_89 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_88, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_90 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_91 = SHIFTL0(op_AND_89, op_MUL_90);
	RzILOpPure *op_OR_92 = LOGOR(op_AND_9, op_LSHIFT_91);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(op_ADD_21, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, seq_24);
	RzILOpEffect *c_call_50 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_25, seq_52);
	RzILOpEffect *c_call_54 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_53, seq_56);
	RzILOpEffect *c_call_58 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_57, seq_60);
	RzILOpEffect *c_call_62 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_61, seq_64);
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc_tmp, cond_66);
	RzILOpEffect *seq_68 = SEQN(2, seq_65, op_ASSIGN_67);
	RzILOpEffect *op_ASSIGN_93 = SETG(Rdd_assoc_tmp, op_OR_92);
	RzILOpEffect *empty_94 = EMPTY();
	RzILOpEffect *seq_95 = SEQN(2, op_ASSIGN_93, empty_94);
	RzILOpEffect *for_96 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_95));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_96, seq_68);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgh(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghcr(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
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
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x3", const_pos0x3, LOGAND(op_ADD_18, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_20 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_19, VARLP("const_pos0x3")));
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_24, cast_st16_28);
	RzILOpPure *op_ADD_30 = LET("const_pos1", const_pos1, ADD(op_ADD_29, VARLP("const_pos1")));
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(16, MSB(op_AND_37), op_AND_37);
	RzILOpPure *op_ADD_39 = ADD(cast_st16_34, cast_st16_38);
	RzILOpPure *cond_40 = ITE(op_EQ_20, op_ADD_30, op_ADD_39);
	RzILOpPure *op_RSHIFT_41 = LET("const_pos1", const_pos1, SHIFTR0(cond_40, VARLP("const_pos1")));
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_43 = CAST(64, IL_FALSE, op_AND_42);
	RzILOpPure *op_MUL_44 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(cast_ut64_43, op_MUL_44);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_9, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_47 = SETG(Rdd_assoc_tmp, op_OR_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_5, op_ASSIGN_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(2, seq_48, empty_49);
	RzILOpEffect *for_51 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_50));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghr(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st16_13, cast_st16_17);
	RzILOpPure *op_ADD_19 = LET("const_pos1", const_pos1, ADD(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_20 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_19, VARLP("const_pos1")));
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_9, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_5, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_29));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(8, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgubr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_ADD_19 = LET("const_pos1", const_pos1, ADD(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_20 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_19, VARLP("const_pos1")));
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_9, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_5, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_29));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguh(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_ut16_13 = CAST(16, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_ut16_13, cast_ut16_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguhr(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_ut16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_ADD_18 = ADD(cast_ut16_13, cast_ut16_17);
	RzILOpPure *op_ADD_19 = LET("const_pos1", const_pos1, ADD(op_ADD_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_20 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_19, VARLP("const_pos1")));
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *op_OR_25 = LOGOR(op_AND_9, op_LSHIFT_24);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_5, op_ASSIGN_26);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, seq_27, empty_28);
	RzILOpEffect *for_30 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_29));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_32 = ADD(cond_20, cond_31);
	RzILOpPure *op_RSHIFT_33 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_32, VARLP("const_pos1")));
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_35 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_36 = SHIFTL0(op_AND_34, op_MUL_35);
	RzILOpPure *op_OR_37 = LOGOR(op_AND_9, op_LSHIFT_36);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_EXTRACT64(cast_ut64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(cast_ut64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *op_ASSIGN_38 = SETG(Rdd_assoc_tmp, op_OR_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_30, op_ASSIGN_38);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *seq_41 = SEQN(2, seq_39, empty_40);
	RzILOpEffect *for_42 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_41));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp2;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_32 = ADD(cond_20, cond_31);
	RzILOpPure *op_ADD_33 = LET("const_pos1", const_pos1, ADD(op_ADD_32, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_34 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_33, VARLP("const_pos1")));
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_36 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(op_AND_35, op_MUL_36);
	RzILOpPure *op_OR_38 = LOGOR(op_AND_9, op_LSHIFT_37);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_EXTRACT64(cast_ut64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(cast_ut64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *op_ASSIGN_39 = SETG(Rdd_assoc_tmp, op_OR_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_30, op_ASSIGN_39);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *seq_42 = SEQN(2, seq_40, empty_41);
	RzILOpEffect *for_43 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_42));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_32 = ADD(cond_20, cond_31);
	RzILOpPure *op_RSHIFT_33 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_32, VARLP("const_pos1")));
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_35 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_36 = SHIFTL0(op_AND_34, op_MUL_35);
	RzILOpPure *op_OR_37 = LOGOR(op_AND_9, op_LSHIFT_36);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(cast_st64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *op_ASSIGN_38 = SETG(Rdd_assoc_tmp, op_OR_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_30, op_ASSIGN_38);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *seq_41 = SEQN(2, seq_39, empty_40);
	RzILOpEffect *for_42 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_41));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	// Declare: ut64 h_tmp3;
	// Declare: st64 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_32 = ADD(cond_20, cond_31);
	RzILOpPure *op_AND_33 = LET("const_pos0x3", const_pos0x3, LOGAND(op_ADD_32, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_34 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_33, VARLP("const_pos0x3")));
	RzILOpPure *op_NE_35 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_36 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cond_45 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_35, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_46 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_47 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(op_AND_49), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(cast_st32_50), cast_st32_50);
	RzILOpPure *cond_56 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_46, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_57 = ADD(cond_45, cond_56);
	RzILOpPure *op_ADD_58 = LET("const_pos1", const_pos1, ADD(op_ADD_57, VARLP("const_pos1")));
	RzILOpPure *op_NE_59 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_60 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rss), op_MUL_60);
	RzILOpPure *op_AND_62 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_61, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_63 = CAST(32, MSB(op_AND_62), op_AND_62);
	RzILOpPure *cast_st64_64 = CAST(64, MSB(cast_st32_63), cast_st32_63);
	RzILOpPure *cond_69 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_59, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_70 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_71 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rtt), op_MUL_71);
	RzILOpPure *op_AND_73 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_74 = CAST(32, MSB(op_AND_73), op_AND_73);
	RzILOpPure *cast_st64_75 = CAST(64, MSB(cast_st32_74), cast_st32_74);
	RzILOpPure *cond_80 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_70, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_81 = ADD(cond_69, cond_80);
	RzILOpPure *cond_82 = ITE(op_EQ_34, op_ADD_58, op_ADD_81);
	RzILOpPure *op_RSHIFT_83 = LET("const_pos1", const_pos1, SHIFTR0(cond_82, VARLP("const_pos1")));
	RzILOpPure *op_AND_84 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_83, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_85 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_86 = SHIFTL0(op_AND_84, op_MUL_85);
	RzILOpPure *op_OR_87 = LOGOR(op_AND_9, op_LSHIFT_86);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(cast_st64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *c_call_41 = HEX_SEXTRACT64(cast_st64_40, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_30, seq_43);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(cast_st64_51, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_44, seq_54);
	RzILOpEffect *c_call_65 = HEX_SEXTRACT64(cast_st64_64, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *seq_68 = SEQN(2, seq_55, seq_67);
	RzILOpEffect *c_call_76 = HEX_SEXTRACT64(cast_st64_75, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(2, seq_68, seq_78);
	RzILOpEffect *op_ASSIGN_88 = SETG(Rdd_assoc_tmp, op_OR_87);
	RzILOpEffect *seq_89 = SEQN(2, seq_79, op_ASSIGN_88);
	RzILOpEffect *empty_90 = EMPTY();
	RzILOpEffect *seq_91 = SEQN(2, seq_89, empty_90);
	RzILOpEffect *for_92 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_91));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_92);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_32 = ADD(cond_20, cond_31);
	RzILOpPure *op_ADD_33 = LET("const_pos1", const_pos1, ADD(op_ADD_32, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_34 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_33, VARLP("const_pos1")));
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_34, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_36 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(op_AND_35, op_MUL_36);
	RzILOpPure *op_OR_38 = LOGOR(op_AND_9, op_LSHIFT_37);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(cast_st64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *op_ASSIGN_39 = SETG(Rdd_assoc_tmp, op_OR_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_30, op_ASSIGN_39);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *seq_42 = SEQN(2, seq_40, empty_41);
	RzILOpEffect *for_43 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_42));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_12 = CAST(8, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_16 = CAST(8, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_EQ_17 = EQ(cast_st8_12, cast_st8_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_EQ_17);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("i"));
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Pd_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(2, seq_22, empty_23);
	RzILOpEffect *for_25 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_24));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_12 = CAST(8, IL_FALSE, op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *op_GT_17 = UGT(cast_ut8_12, cast_ut8_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_GT_17);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_ut64_18, VARL("i"));
	RzILOpPure *op_OR_20 = LOGOR(op_AND_8, op_LSHIFT_19);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_21 = SETG(Pd_assoc_tmp, op_OR_20);
	RzILOpEffect *seq_22 = SEQN(2, seq_5, op_ASSIGN_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *seq_24 = SEQN(2, seq_22, empty_23);
	RzILOpEffect *for_25 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_24));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpheq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_EQ_18 = EQ(cast_st16_13, cast_st16_17);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_EQ_18);
	RzILOpPure *op_MUL_20 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *op_MUL_26 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_MUL_26, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_27));
	RzILOpPure *op_NOT_29 = LOGNOT(op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(16, MSB(op_AND_37), op_AND_37);
	RzILOpPure *op_EQ_39 = EQ(cast_st16_34, cast_st16_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_EQ_39);
	RzILOpPure *op_MUL_41 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", const_pos1, ADD(op_MUL_41, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_ADD_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_30, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_45 = SETG(Pd_assoc_tmp, op_OR_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(4, seq_24, empty_25, op_ASSIGN_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_47));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_GT_18 = SGT(cast_st16_13, cast_st16_17);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_MUL_20 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *op_MUL_26 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_MUL_26, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_27));
	RzILOpPure *op_NOT_29 = LOGNOT(op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(16, MSB(op_AND_37), op_AND_37);
	RzILOpPure *op_GT_39 = SGT(cast_st16_34, cast_st16_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_GT_39);
	RzILOpPure *op_MUL_41 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", const_pos1, ADD(op_MUL_41, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_ADD_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_30, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_45 = SETG(Pd_assoc_tmp, op_OR_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(4, seq_24, empty_25, op_ASSIGN_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_47));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(16, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_GT_18 = UGT(cast_ut16_13, cast_ut16_17);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_GT_18);
	RzILOpPure *op_MUL_20 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_9, op_LSHIFT_21);
	RzILOpPure *op_MUL_26 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(op_MUL_26, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_28 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_ADD_27));
	RzILOpPure *op_NOT_29 = LOGNOT(op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_29);
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_34 = CAST(16, IL_FALSE, op_AND_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_38 = CAST(16, IL_FALSE, op_AND_37);
	RzILOpPure *op_GT_39 = UGT(cast_ut16_34, cast_ut16_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_GT_39);
	RzILOpPure *op_MUL_41 = LET("const_pos2", const_pos2, MUL(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", const_pos1, ADD(op_MUL_41, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_ADD_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_30, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *op_ASSIGN_45 = SETG(Pd_assoc_tmp, op_OR_44);
	RzILOpEffect *empty_46 = EMPTY();
	RzILOpEffect *seq_47 = SEQN(4, seq_24, empty_25, op_ASSIGN_45, empty_46);
	RzILOpEffect *for_48 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_47));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpweq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);
	RzILOpPure *op_EQ_19 = EQ(cast_st64_13, cast_st64_18);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_EQ_19);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_8, op_LSHIFT_21);
	RzILOpPure *op_LE_31 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_36);
	RzILOpPure *op_MUL_38 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_39, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_41 = CAST(32, MSB(op_AND_40), op_AND_40);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzILOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rtt), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_46 = CAST(32, MSB(op_AND_45), op_AND_45);
	RzILOpPure *cast_st64_47 = CAST(64, MSB(cast_st32_46), cast_st32_46);
	RzILOpPure *op_EQ_48 = EQ(cast_st64_42, cast_st64_47);
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_EQ_48);
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_49, VARL("j"));
	RzILOpPure *op_OR_51 = LOGOR(op_AND_37, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, seq_24, empty_25);
	RzILOpEffect *for_27 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_32 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_hybrid_tmp_33, op_INC_32);
	RzILOpEffect *op_ASSIGN_52 = SETG(Pd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_34, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_30, REPEAT(op_LE_31, seq_55));
	RzILOpEffect *empty_57 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_27, empty_28, empty_29, for_56, empty_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(op_AND_11), op_AND_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(op_AND_16), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(cast_st32_17), cast_st32_17);
	RzILOpPure *op_GT_19 = SGT(cast_st64_13, cast_st64_18);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_19);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_8, op_LSHIFT_21);
	RzILOpPure *op_LE_30 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_35 = LOGNOT(op_LSHIFT_34);
	RzILOpPure *op_AND_36 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_35);
	RzILOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzILOpPure *op_MUL_42 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *op_AND_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_43, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_45 = CAST(32, MSB(op_AND_44), op_AND_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(cast_st32_45), cast_st32_45);
	RzILOpPure *op_GT_47 = SGT(cast_st64_41, cast_st64_46);
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_GT_47);
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(cast_ut64_48, VARL("j"));
	RzILOpPure *op_OR_50 = LOGOR(op_AND_36, op_LSHIFT_49);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(1, empty_25);
	RzILOpEffect *for_27 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *op_ASSIGN_29 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_31 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_hybrid_tmp_32, op_INC_31);
	RzILOpEffect *op_ASSIGN_51 = SETG(Pd_assoc_tmp, op_OR_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_33, op_ASSIGN_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, seq_52, empty_53);
	RzILOpEffect *for_55 = SEQ2(op_ASSIGN_29, REPEAT(op_LE_30, seq_54));
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_27, empty_28, for_55, empty_56, seq_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp0;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(VARL("j"), VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_7 = LOGNOT(op_LSHIFT_6);
	RzILOpPure *op_AND_8 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_7);
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_10, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, op_AND_11);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_MUL_14 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *op_GT_19 = UGT(cast_ut64_13, cast_ut64_18);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_GT_19);
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(cast_ut64_20, VARL("j"));
	RzILOpPure *op_OR_22 = LOGOR(op_AND_8, op_LSHIFT_21);
	RzILOpPure *op_LE_31 = LET("const_pos7", const_pos7, ULE(VARL("j"), VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_36 = LOGNOT(op_LSHIFT_35);
	RzILOpPure *op_AND_37 = LOGAND(VARG(Pd_assoc_tmp), op_NOT_36);
	RzILOpPure *op_MUL_38 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_39, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_41 = CAST(32, IL_FALSE, op_AND_40);
	RzILOpPure *cast_ut64_42 = CAST(64, IL_FALSE, cast_ut32_41);
	RzILOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rtt), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_46 = CAST(32, IL_FALSE, op_AND_45);
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, cast_ut32_46);
	RzILOpPure *op_GT_48 = UGT(cast_ut64_42, cast_ut64_47);
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_GT_48);
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(cast_ut64_49, VARL("j"));
	RzILOpPure *op_OR_51 = LOGOR(op_AND_37, op_LSHIFT_50);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("j", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("j"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_23 = SETG(Pd_assoc_tmp, op_OR_22);
	RzILOpEffect *seq_24 = SEQN(2, seq_5, op_ASSIGN_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, seq_24, empty_25);
	RzILOpEffect *for_27 = SEQ2(op_ASSIGN_1, REPEAT(op_LE_2, seq_26));
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *op_ASSIGN_30 = SETL("j", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_32 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp1", VARL("j"));
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_hybrid_tmp_33, op_INC_32);
	RzILOpEffect *op_ASSIGN_52 = SETG(Pd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_34, op_ASSIGN_52);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(1, empty_54);
	RzILOpEffect *for_56 = SEQ2(op_ASSIGN_30, REPEAT(op_LE_31, seq_55));
	RzILOpEffect *instruction_sequence = SEQN(6, empty_0, for_27, empty_28, empty_29, for_56, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vconj(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st16 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_NEG_9 = NEG(cast_st16_8);
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(DUP(Rss), op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_NEG_18 = NEG(cast_st16_17);
	RzILOpPure *op_EQ_19 = EQ(cond_13, op_NEG_18);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzILOpPure *op_NEG_24 = NEG(cast_st16_23);
	RzILOpPure *cond_41 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(32, IL_FALSE, op_AND_46);
	RzILOpPure *op_NEG_48 = NEG(cast_st16_47);
	RzILOpPure *op_LT_49 = LET("const_pos0", const_pos0, ULT(op_NEG_48, VARLP("const_pos0")));
	RzILOpPure *op_SUB_50 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzILOpPure *op_NEG_52 = NEG(op_LSHIFT_51);
	RzILOpPure *op_SUB_53 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_53));
	RzILOpPure *op_SUB_55 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_54, VARLP("const_pos1")));
	RzILOpPure *cond_56 = ITE(op_LT_49, op_NEG_52, op_SUB_55);
	RzILOpPure *cond_57 = ITE(op_EQ_19, op_NEG_24, cond_56);
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_57, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_59 = CAST(64, IL_FALSE, op_AND_58);
	RzILOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(cast_ut64_59, op_MUL_60);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_3, op_LSHIFT_61);
	RzILOpPure *op_MUL_65 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_65));
	RzILOpPure *op_NOT_67 = LOGNOT(op_LSHIFT_66);
	RzILOpPure *op_AND_68 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_72 = CAST(32, IL_FALSE, op_AND_71);
	RzILOpPure *op_AND_73 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_72, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_74 = CAST(64, IL_FALSE, op_AND_73);
	RzILOpPure *op_MUL_75 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_76 = SHIFTL0(cast_ut64_74, op_MUL_75);
	RzILOpPure *op_OR_77 = LOGOR(op_AND_68, op_LSHIFT_76);
	RzILOpPure *op_MUL_80 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_81 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_80));
	RzILOpPure *op_NOT_82 = LOGNOT(op_LSHIFT_81);
	RzILOpPure *op_AND_83 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_82);
	RzILOpPure *op_NE_84 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(op_AND_87), op_AND_87);
	RzILOpPure *op_NEG_89 = NEG(cast_st16_88);
	RzILOpPure *cond_93 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_84, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_94 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rss), op_MUL_94);
	RzILOpPure *op_AND_96 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_95, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_97 = CAST(16, MSB(op_AND_96), op_AND_96);
	RzILOpPure *op_NEG_98 = NEG(cast_st16_97);
	RzILOpPure *op_EQ_99 = EQ(cond_93, op_NEG_98);
	RzILOpPure *op_MUL_100 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_101 = SHIFTR0(DUP(Rss), op_MUL_100);
	RzILOpPure *op_AND_102 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_101, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_103 = CAST(32, IL_FALSE, op_AND_102);
	RzILOpPure *op_NEG_104 = NEG(cast_st16_103);
	RzILOpPure *cond_121 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_124 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_125, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_127 = CAST(32, IL_FALSE, op_AND_126);
	RzILOpPure *op_NEG_128 = NEG(cast_st16_127);
	RzILOpPure *op_LT_129 = LET("const_pos0", const_pos0, ULT(op_NEG_128, VARLP("const_pos0")));
	RzILOpPure *op_SUB_130 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_131 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_130));
	RzILOpPure *op_NEG_132 = NEG(op_LSHIFT_131);
	RzILOpPure *op_SUB_133 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_SUB_135 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_134, VARLP("const_pos1")));
	RzILOpPure *cond_136 = ITE(op_LT_129, op_NEG_132, op_SUB_135);
	RzILOpPure *cond_137 = ITE(op_EQ_99, op_NEG_104, cond_136);
	RzILOpPure *op_AND_138 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_137, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_139 = CAST(64, IL_FALSE, op_AND_138);
	RzILOpPure *op_MUL_140 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_141 = SHIFTL0(cast_ut64_139, op_MUL_140);
	RzILOpPure *op_OR_142 = LOGOR(op_AND_83, op_LSHIFT_141);
	RzILOpPure *op_MUL_145 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_146 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_145));
	RzILOpPure *op_NOT_147 = LOGNOT(op_LSHIFT_146);
	RzILOpPure *op_AND_148 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_147);
	RzILOpPure *op_MUL_149 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_150 = SHIFTR0(DUP(Rss), op_MUL_149);
	RzILOpPure *op_AND_151 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_150, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_152 = CAST(32, IL_FALSE, op_AND_151);
	RzILOpPure *op_AND_153 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st16_152, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_154 = CAST(64, IL_FALSE, op_AND_153);
	RzILOpPure *op_MUL_155 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_156 = SHIFTL0(cast_ut64_154, op_MUL_155);
	RzILOpPure *op_OR_157 = LOGOR(op_AND_148, op_LSHIFT_156);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_NEG_9, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_25 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_12, seq_27);
	RzILOpEffect *c_call_29 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_28, seq_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_32, seq_35);
	RzILOpEffect *c_call_37 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *op_ASSIGN_42 = SETG(usr_assoc_tmp, cond_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_40, op_ASSIGN_42);
	RzILOpEffect *op_ASSIGN_63 = SETG(Rdd_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_64 = EMPTY();
	RzILOpEffect *op_ASSIGN_78 = SETG(Rdd_assoc_tmp, op_OR_77);
	RzILOpEffect *empty_79 = EMPTY();
	RzILOpEffect *c_call_90 = HEX_SEXTRACT64(op_NEG_89, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_91 = SETL("h_tmp5", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_92 = SEQN(2, c_call_90, op_ASSIGN_hybrid_tmp_91);
	RzILOpEffect *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_106 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_107 = SEQN(2, c_call_105, op_ASSIGN_hybrid_tmp_106);
	RzILOpEffect *seq_108 = SEQN(2, seq_92, seq_107);
	RzILOpEffect *c_call_109 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_110 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_111 = SEQN(2, c_call_109, op_ASSIGN_hybrid_tmp_110);
	RzILOpEffect *seq_112 = SEQN(2, seq_108, seq_111);
	RzILOpEffect *c_call_113 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_114 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_115 = SEQN(2, c_call_113, op_ASSIGN_hybrid_tmp_114);
	RzILOpEffect *seq_116 = SEQN(2, seq_112, seq_115);
	RzILOpEffect *c_call_117 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_118 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_119 = SEQN(2, c_call_117, op_ASSIGN_hybrid_tmp_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_116, seq_119);
	RzILOpEffect *op_ASSIGN_122 = SETG(usr_assoc_tmp, cond_121);
	RzILOpEffect *seq_123 = SEQN(2, seq_120, op_ASSIGN_122);
	RzILOpEffect *op_ASSIGN_143 = SETG(Rdd_assoc_tmp, op_OR_142);
	RzILOpEffect *empty_144 = EMPTY();
	RzILOpEffect *op_ASSIGN_158 = SETG(Rdd_assoc_tmp, op_OR_157);
	RzILOpEffect *empty_159 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, op_ASSIGN_63, empty_64, op_ASSIGN_78, empty_79, op_ASSIGN_143, empty_144, op_ASSIGN_158, empty_159, seq_43, seq_123);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(8, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_GT_18 = SGT(cast_st8_13, cast_st8_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_22 = CAST(64, MSB(op_AND_21), op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_26 = CAST(8, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cond_27 = ITE(op_GT_18, cast_st8_22, cast_st8_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_GT_18 = SGT(cast_st16_13, cast_st16_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_26 = CAST(16, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cond_27 = ITE(op_GT_18, cast_st16_22, cast_st16_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(8, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_GT_18 = UGT(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_26 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cond_27 = ITE(op_GT_18, cast_ut8_22, cast_ut8_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(16, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_GT_18 = UGT(cast_ut16_13, cast_ut16_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_26 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cond_27 = ITE(op_GT_18, cast_ut16_22, cast_ut16_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_GT_20 = UGT(cast_ut64_14, cast_ut64_19);
	RzILOpPure *op_MUL_21 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rtt), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_24 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *cast_ut64_25 = CAST(64, IL_FALSE, cast_ut32_24);
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cond_31 = ITE(op_GT_20, cast_ut64_25, cast_ut64_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(op_AND_32, op_MUL_33);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_9, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_5, op_ASSIGN_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, seq_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_GT_20 = SGT(cast_st64_14, cast_st64_19);
	RzILOpPure *op_MUL_21 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rtt), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, IL_FALSE, cast_st32_24);
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);
	RzILOpPure *cond_31 = ITE(op_GT_20, cast_st64_25, cast_st64_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(op_AND_32, op_MUL_33);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_9, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_5, op_ASSIGN_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, seq_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_13 = CAST(8, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_LT_18 = SLT(cast_st8_13, cast_st8_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_22 = CAST(64, MSB(op_AND_21), op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_26 = CAST(8, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cond_27 = ITE(op_LT_18, cast_st8_22, cast_st8_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_LT_18 = SLT(cast_st16_13, cast_st16_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_26 = CAST(16, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cond_27 = ITE(op_LT_18, cast_st16_22, cast_st16_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(8, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_LT_18 = ULT(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_22 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_26 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *cond_27 = ITE(op_LT_18, cast_ut8_22, cast_ut8_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_13 = CAST(16, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *op_LT_18 = ULT(cast_ut16_13, cast_ut16_17);
	RzILOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rtt), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *op_MUL_23 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_26 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cond_27 = ITE(op_LT_18, cast_ut16_22, cast_ut16_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_9, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_5, op_ASSIGN_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, seq_34, empty_35);
	RzILOpEffect *for_37 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_36));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *op_LT_20 = ULT(cast_ut64_14, cast_ut64_19);
	RzILOpPure *op_MUL_21 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rtt), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_24 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *cast_ut64_25 = CAST(64, IL_FALSE, cast_ut32_24);
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cond_31 = ITE(op_LT_20, cast_ut64_25, cast_ut64_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(op_AND_32, op_MUL_33);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_9, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_5, op_ASSIGN_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, seq_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_LT_20 = SLT(cast_st64_14, cast_st64_19);
	RzILOpPure *op_MUL_21 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rtt), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(op_AND_23), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, IL_FALSE, cast_st32_24);
	RzILOpPure *op_MUL_26 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(cast_st32_29), cast_st32_29);
	RzILOpPure *cond_31 = ITE(op_LT_20, cast_st64_25, cast_st64_30);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_33 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(op_AND_32, op_MUL_33);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_9, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_5, op_ASSIGN_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, seq_37, empty_38);
	RzILOpEffect *for_40 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_39));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(16, MSB(op_AND_12), op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st16_13, cast_st16_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_18, VARLP("const_pos1")));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_st16_14, cast_st16_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_19, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_21 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_20, VARLP("const_pos0x3")));
	RzILOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(32, IL_FALSE, op_AND_24);
	RzILOpPure *op_MUL_26 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzILOpPure *op_SUB_30 = SUB(cast_st16_25, cast_st16_29);
	RzILOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_SUB_30, VARLP("const_pos1")));
	RzILOpPure *op_MUL_32 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(op_AND_34), op_AND_34);
	RzILOpPure *op_MUL_36 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(op_AND_38), op_AND_38);
	RzILOpPure *op_SUB_40 = SUB(cast_st16_35, cast_st16_39);
	RzILOpPure *cond_41 = ITE(op_EQ_21, op_ADD_31, op_SUB_40);
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", const_pos1, SHIFTR0(cond_41, VARLP("const_pos1")));
	RzILOpPure *cond_47 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_48 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_49, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *op_MUL_52 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rss), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzILOpPure *op_SUB_56 = SUB(cast_st16_51, cast_st16_55);
	RzILOpPure *op_AND_57 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_56, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_58 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_57, VARLP("const_pos0x3")));
	RzILOpPure *op_MUL_59 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rtt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(32, IL_FALSE, op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(op_AND_65), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *op_ADD_68 = LET("const_pos1", const_pos1, ADD(op_SUB_67, VARLP("const_pos1")));
	RzILOpPure *op_MUL_69 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_72 = CAST(16, MSB(op_AND_71), op_AND_71);
	RzILOpPure *op_MUL_73 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rss), op_MUL_73);
	RzILOpPure *op_AND_75 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_74, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_76 = CAST(16, MSB(op_AND_75), op_AND_75);
	RzILOpPure *op_SUB_77 = SUB(cast_st16_72, cast_st16_76);
	RzILOpPure *cond_78 = ITE(op_EQ_58, op_ADD_68, op_SUB_77);
	RzILOpPure *op_RSHIFT_79 = LET("const_pos1", const_pos1, SHIFTR0(cond_78, VARLP("const_pos1")));
	RzILOpPure *op_EQ_80 = EQ(cond_47, op_RSHIFT_79);
	RzILOpPure *op_MUL_81 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rtt), op_MUL_81);
	RzILOpPure *op_AND_83 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_82, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_84 = CAST(32, IL_FALSE, op_AND_83);
	RzILOpPure *op_MUL_85 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_88 = CAST(16, MSB(op_AND_87), op_AND_87);
	RzILOpPure *op_SUB_89 = SUB(cast_st16_84, cast_st16_88);
	RzILOpPure *op_AND_90 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_89, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_91 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_90, VARLP("const_pos0x3")));
	RzILOpPure *op_MUL_92 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rtt), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(32, IL_FALSE, op_AND_94);
	RzILOpPure *op_MUL_96 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rss), op_MUL_96);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_97, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_99 = CAST(16, MSB(op_AND_98), op_AND_98);
	RzILOpPure *op_SUB_100 = SUB(cast_st16_95, cast_st16_99);
	RzILOpPure *op_ADD_101 = LET("const_pos1", const_pos1, ADD(op_SUB_100, VARLP("const_pos1")));
	RzILOpPure *op_MUL_102 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rtt), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_103, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_105 = CAST(16, MSB(op_AND_104), op_AND_104);
	RzILOpPure *op_MUL_106 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_107 = SHIFTR0(DUP(Rss), op_MUL_106);
	RzILOpPure *op_AND_108 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_107, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_109 = CAST(16, MSB(op_AND_108), op_AND_108);
	RzILOpPure *op_SUB_110 = SUB(cast_st16_105, cast_st16_109);
	RzILOpPure *cond_111 = ITE(op_EQ_91, op_ADD_101, op_SUB_110);
	RzILOpPure *op_RSHIFT_112 = LET("const_pos1", const_pos1, SHIFTR0(cond_111, VARLP("const_pos1")));
	RzILOpPure *cond_129 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_132 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rtt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(32, IL_FALSE, op_AND_134);
	RzILOpPure *op_MUL_136 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_137 = SHIFTR0(DUP(Rss), op_MUL_136);
	RzILOpPure *op_AND_138 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_137, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_139 = CAST(16, MSB(op_AND_138), op_AND_138);
	RzILOpPure *op_SUB_140 = SUB(cast_st16_135, cast_st16_139);
	RzILOpPure *op_AND_141 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_140, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_142 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_141, VARLP("const_pos0x3")));
	RzILOpPure *op_MUL_143 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_144 = SHIFTR0(DUP(Rtt), op_MUL_143);
	RzILOpPure *op_AND_145 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_144, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_146 = CAST(32, IL_FALSE, op_AND_145);
	RzILOpPure *op_MUL_147 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_148 = SHIFTR0(DUP(Rss), op_MUL_147);
	RzILOpPure *op_AND_149 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_148, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_150 = CAST(16, MSB(op_AND_149), op_AND_149);
	RzILOpPure *op_SUB_151 = SUB(cast_st16_146, cast_st16_150);
	RzILOpPure *op_ADD_152 = LET("const_pos1", const_pos1, ADD(op_SUB_151, VARLP("const_pos1")));
	RzILOpPure *op_MUL_153 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rtt), op_MUL_153);
	RzILOpPure *op_AND_155 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_154, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_156 = CAST(16, MSB(op_AND_155), op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_158 = SHIFTR0(DUP(Rss), op_MUL_157);
	RzILOpPure *op_AND_159 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_158, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_160 = CAST(16, MSB(op_AND_159), op_AND_159);
	RzILOpPure *op_SUB_161 = SUB(cast_st16_156, cast_st16_160);
	RzILOpPure *cond_162 = ITE(op_EQ_142, op_ADD_152, op_SUB_161);
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(cond_162, VARLP("const_pos1")));
	RzILOpPure *op_LT_164 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_163, VARLP("const_pos0")));
	RzILOpPure *op_SUB_165 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_166 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_165));
	RzILOpPure *op_NEG_167 = NEG(op_LSHIFT_166);
	RzILOpPure *op_SUB_168 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_169 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_168));
	RzILOpPure *op_SUB_170 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_169, VARLP("const_pos1")));
	RzILOpPure *cond_171 = ITE(op_LT_164, op_NEG_167, op_SUB_170);
	RzILOpPure *cond_172 = ITE(op_EQ_80, op_RSHIFT_112, cond_171);
	RzILOpPure *op_AND_173 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_172, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_174 = CAST(64, IL_FALSE, op_AND_173);
	RzILOpPure *op_MUL_175 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_176 = SHIFTL0(cast_ut64_174, op_MUL_175);
	RzILOpPure *op_OR_177 = LOGOR(op_AND_9, op_LSHIFT_176);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_43 = HEX_SEXTRACT64(op_RSHIFT_42, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_5, seq_45);
	RzILOpEffect *c_call_113 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_114 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_115 = SEQN(2, c_call_113, op_ASSIGN_hybrid_tmp_114);
	RzILOpEffect *seq_116 = SEQN(2, seq_46, seq_115);
	RzILOpEffect *c_call_117 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_118 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_119 = SEQN(2, c_call_117, op_ASSIGN_hybrid_tmp_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_116, seq_119);
	RzILOpEffect *c_call_121 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_122 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_123 = SEQN(2, c_call_121, op_ASSIGN_hybrid_tmp_122);
	RzILOpEffect *seq_124 = SEQN(2, seq_120, seq_123);
	RzILOpEffect *c_call_125 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_126 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_127 = SEQN(2, c_call_125, op_ASSIGN_hybrid_tmp_126);
	RzILOpEffect *seq_128 = SEQN(2, seq_124, seq_127);
	RzILOpEffect *op_ASSIGN_130 = SETG(usr_assoc_tmp, cond_129);
	RzILOpEffect *seq_131 = SEQN(2, seq_128, op_ASSIGN_130);
	RzILOpEffect *op_ASSIGN_178 = SETG(Rdd_assoc_tmp, op_OR_177);
	RzILOpEffect *empty_179 = EMPTY();
	RzILOpEffect *seq_180 = SEQN(2, op_ASSIGN_178, empty_179);
	RzILOpEffect *for_181 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_180));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_181, seq_131);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_st16_14, cast_st16_18);
	RzILOpPure *op_ADD_20 = LET("const_pos1", const_pos1, ADD(op_SUB_19, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_21 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_20, VARLP("const_pos1")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_27 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(32, IL_FALSE, op_AND_29);
	RzILOpPure *op_MUL_31 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_33 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_32, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_34 = CAST(16, MSB(op_AND_33), op_AND_33);
	RzILOpPure *op_SUB_35 = SUB(cast_st16_30, cast_st16_34);
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_SUB_35, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_37 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_36, VARLP("const_pos1")));
	RzILOpPure *op_EQ_38 = EQ(cond_26, op_RSHIFT_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(32, IL_FALSE, op_AND_41);
	RzILOpPure *op_MUL_43 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_44, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_46 = CAST(16, MSB(op_AND_45), op_AND_45);
	RzILOpPure *op_SUB_47 = SUB(cast_st16_42, cast_st16_46);
	RzILOpPure *op_ADD_48 = LET("const_pos1", const_pos1, ADD(op_SUB_47, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_49 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_48, VARLP("const_pos1")));
	RzILOpPure *cond_66 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_69 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_72 = CAST(32, IL_FALSE, op_AND_71);
	RzILOpPure *op_MUL_73 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rss), op_MUL_73);
	RzILOpPure *op_AND_75 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_74, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_76 = CAST(16, MSB(op_AND_75), op_AND_75);
	RzILOpPure *op_SUB_77 = SUB(cast_st16_72, cast_st16_76);
	RzILOpPure *op_ADD_78 = LET("const_pos1", const_pos1, ADD(op_SUB_77, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_79 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_78, VARLP("const_pos1")));
	RzILOpPure *op_LT_80 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_79, VARLP("const_pos0")));
	RzILOpPure *op_SUB_81 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *op_NEG_83 = NEG(op_LSHIFT_82);
	RzILOpPure *op_SUB_84 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_84));
	RzILOpPure *op_SUB_86 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_85, VARLP("const_pos1")));
	RzILOpPure *cond_87 = ITE(op_LT_80, op_NEG_83, op_SUB_86);
	RzILOpPure *cond_88 = ITE(op_EQ_38, op_RSHIFT_49, cond_87);
	RzILOpPure *op_AND_89 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_88, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_90 = CAST(64, IL_FALSE, op_AND_89);
	RzILOpPure *op_MUL_91 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_92 = SHIFTL0(cast_ut64_90, op_MUL_91);
	RzILOpPure *op_OR_93 = LOGOR(op_AND_9, op_LSHIFT_92);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(op_RSHIFT_21, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, seq_24);
	RzILOpEffect *c_call_50 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_25, seq_52);
	RzILOpEffect *c_call_54 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_53, seq_56);
	RzILOpEffect *c_call_58 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_57, seq_60);
	RzILOpEffect *c_call_62 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_61, seq_64);
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc_tmp, cond_66);
	RzILOpEffect *seq_68 = SEQN(2, seq_65, op_ASSIGN_67);
	RzILOpEffect *op_ASSIGN_94 = SETG(Rdd_assoc_tmp, op_OR_93);
	RzILOpEffect *empty_95 = EMPTY();
	RzILOpEffect *seq_96 = SEQN(2, op_ASSIGN_94, empty_95);
	RzILOpEffect *for_97 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_96));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_97, seq_68);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos1 = UN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_21 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(op_AND_24), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(cast_st32_25), cast_st32_25);
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_21, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_32 = SUB(cond_20, cond_31);
	RzILOpPure *op_RSHIFT_33 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_32, VARLP("const_pos1")));
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_35 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_36 = SHIFTL0(op_AND_34, op_MUL_35);
	RzILOpPure *op_OR_37 = LOGOR(op_AND_9, op_LSHIFT_36);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(cast_st64_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *seq_19 = SEQN(2, seq_5, seq_18);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(cast_st64_26, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_19, seq_29);
	RzILOpEffect *op_ASSIGN_38 = SETG(Rdd_assoc_tmp, op_OR_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_30, op_ASSIGN_38);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *seq_41 = SEQN(2, seq_39, empty_40);
	RzILOpEffect *for_42 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_41));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	// Declare: ut32 h_tmp3;
	// Declare: st64 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: st64 h_tmp9;
	// Declare: ut32 h_tmp10;
	// Declare: st64 h_tmp11;
	// Declare: st64 h_tmp12;
	// Declare: st64 h_tmp13;
	// Declare: ut32 h_tmp14;
	// Declare: st64 h_tmp15;
	// Declare: ut64 h_tmp16;
	// Declare: st64 h_tmp17;
	// Declare: st64 h_tmp18;
	// Declare: st64 h_tmp19;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp20;
	// Declare: ut32 h_tmp21;
	// Declare: ut32 h_tmp22;
	// Declare: ut64 h_tmp23;
	// Declare: ut32 h_tmp24;
	// Declare: st64 h_tmp25;
	// Declare: ut32 h_tmp26;
	// Declare: st64 h_tmp27;
	// Declare: st64 h_tmp28;
	// Declare: st64 h_tmp29;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_11 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_11, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_22 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_23 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_22, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_33 = SUB(cond_21, cond_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_33, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_35 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_34, VARLP("const_pos0x3")));
	RzILOpPure *op_NE_36 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_37 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzILOpPure *cond_46 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_36, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_47 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_48 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(op_AND_50), op_AND_50);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(cast_st32_51), cast_st32_51);
	RzILOpPure *cond_57 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_47, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_58 = SUB(cond_46, cond_57);
	RzILOpPure *op_ADD_59 = LET("const_pos1", const_pos1, ADD(op_SUB_58, VARLP("const_pos1")));
	RzILOpPure *op_NE_60 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_61 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rtt), op_MUL_61);
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_62, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_64 = CAST(32, MSB(op_AND_63), op_AND_63);
	RzILOpPure *cast_st64_65 = CAST(64, MSB(cast_st32_64), cast_st32_64);
	RzILOpPure *cond_70 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_60, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_71 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_72 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_73 = SHIFTR0(DUP(Rss), op_MUL_72);
	RzILOpPure *op_AND_74 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_73, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_75 = CAST(32, MSB(op_AND_74), op_AND_74);
	RzILOpPure *cast_st64_76 = CAST(64, MSB(cast_st32_75), cast_st32_75);
	RzILOpPure *cond_81 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_71, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_82 = SUB(cond_70, cond_81);
	RzILOpPure *cond_83 = ITE(op_EQ_35, op_ADD_59, op_SUB_82);
	RzILOpPure *op_RSHIFT_84 = LET("const_pos1", const_pos1, SHIFTR0(cond_83, VARLP("const_pos1")));
	RzILOpPure *cond_89 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp7"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_90 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_91 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rtt), op_MUL_91);
	RzILOpPure *op_AND_93 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_92, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_94 = CAST(32, MSB(op_AND_93), op_AND_93);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(cast_st32_94), cast_st32_94);
	RzILOpPure *cond_100 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_90, VARL("h_tmp8"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_101 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_102 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cond_111 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_101, VARL("h_tmp9"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_112 = SUB(cond_100, cond_111);
	RzILOpPure *op_AND_113 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_112, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_114 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_113, VARLP("const_pos0x3")));
	RzILOpPure *op_NE_115 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_116 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_117 = SHIFTR0(DUP(Rtt), op_MUL_116);
	RzILOpPure *op_AND_118 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_117, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_119 = CAST(32, MSB(op_AND_118), op_AND_118);
	RzILOpPure *cast_st64_120 = CAST(64, MSB(cast_st32_119), cast_st32_119);
	RzILOpPure *cond_125 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_115, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_126 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_127 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_128 = SHIFTR0(DUP(Rss), op_MUL_127);
	RzILOpPure *op_AND_129 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_128, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_130 = CAST(32, MSB(op_AND_129), op_AND_129);
	RzILOpPure *cast_st64_131 = CAST(64, MSB(cast_st32_130), cast_st32_130);
	RzILOpPure *cond_136 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_126, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_137 = SUB(cond_125, cond_136);
	RzILOpPure *op_ADD_138 = LET("const_pos1", const_pos1, ADD(op_SUB_137, VARLP("const_pos1")));
	RzILOpPure *op_NE_139 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_140 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rtt), op_MUL_140);
	RzILOpPure *op_AND_142 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_141, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_143 = CAST(32, MSB(op_AND_142), op_AND_142);
	RzILOpPure *cast_st64_144 = CAST(64, MSB(cast_st32_143), cast_st32_143);
	RzILOpPure *cond_149 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_139, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_150 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_151 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_152 = SHIFTR0(DUP(Rss), op_MUL_151);
	RzILOpPure *op_AND_153 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_152, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_154 = CAST(32, MSB(op_AND_153), op_AND_153);
	RzILOpPure *cast_st64_155 = CAST(64, MSB(cast_st32_154), cast_st32_154);
	RzILOpPure *cond_160 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_150, VARL("h_tmp13"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_161 = SUB(cond_149, cond_160);
	RzILOpPure *cond_162 = ITE(op_EQ_114, op_ADD_138, op_SUB_161);
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", const_pos1, SHIFTR0(cond_162, VARLP("const_pos1")));
	RzILOpPure *op_EQ_164 = EQ(cond_89, op_RSHIFT_163);
	RzILOpPure *op_NE_165 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_166 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_167 = SHIFTR0(DUP(Rtt), op_MUL_166);
	RzILOpPure *op_AND_168 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_167, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_169 = CAST(32, MSB(op_AND_168), op_AND_168);
	RzILOpPure *cast_st64_170 = CAST(64, MSB(cast_st32_169), cast_st32_169);
	RzILOpPure *cond_175 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_165, VARL("h_tmp14"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_176 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_177 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rss), op_MUL_177);
	RzILOpPure *op_AND_179 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_178, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_180 = CAST(32, MSB(op_AND_179), op_AND_179);
	RzILOpPure *cast_st64_181 = CAST(64, MSB(cast_st32_180), cast_st32_180);
	RzILOpPure *cond_186 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_176, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_187 = SUB(cond_175, cond_186);
	RzILOpPure *op_AND_188 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_187, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_189 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_188, VARLP("const_pos0x3")));
	RzILOpPure *op_NE_190 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_191 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_192 = SHIFTR0(DUP(Rtt), op_MUL_191);
	RzILOpPure *op_AND_193 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_192, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_194 = CAST(32, MSB(op_AND_193), op_AND_193);
	RzILOpPure *cast_st64_195 = CAST(64, MSB(cast_st32_194), cast_st32_194);
	RzILOpPure *cond_200 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_190, VARL("h_tmp16"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_201 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_202 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_203 = SHIFTR0(DUP(Rss), op_MUL_202);
	RzILOpPure *op_AND_204 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_203, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_205 = CAST(32, MSB(op_AND_204), op_AND_204);
	RzILOpPure *cast_st64_206 = CAST(64, MSB(cast_st32_205), cast_st32_205);
	RzILOpPure *cond_211 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_201, VARL("h_tmp17"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_212 = SUB(cond_200, cond_211);
	RzILOpPure *op_ADD_213 = LET("const_pos1", const_pos1, ADD(op_SUB_212, VARLP("const_pos1")));
	RzILOpPure *op_NE_214 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_215 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_216 = SHIFTR0(DUP(Rtt), op_MUL_215);
	RzILOpPure *op_AND_217 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_216, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_218 = CAST(32, MSB(op_AND_217), op_AND_217);
	RzILOpPure *cast_st64_219 = CAST(64, MSB(cast_st32_218), cast_st32_218);
	RzILOpPure *cond_224 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_214, VARL("h_tmp18"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_225 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_226 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_227 = SHIFTR0(DUP(Rss), op_MUL_226);
	RzILOpPure *op_AND_228 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_227, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_229 = CAST(32, MSB(op_AND_228), op_AND_228);
	RzILOpPure *cast_st64_230 = CAST(64, MSB(cast_st32_229), cast_st32_229);
	RzILOpPure *cond_235 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_225, VARL("h_tmp19"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_236 = SUB(cond_224, cond_235);
	RzILOpPure *cond_237 = ITE(op_EQ_189, op_ADD_213, op_SUB_236);
	RzILOpPure *op_RSHIFT_238 = LET("const_pos1", const_pos1, SHIFTR0(cond_237, VARLP("const_pos1")));
	RzILOpPure *cond_255 = ITE(VARL("h_tmp20"), VARL("h_tmp23"), VARG(usr_assoc_tmp));
	RzILOpPure *op_NE_258 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_259 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_260 = SHIFTR0(DUP(Rtt), op_MUL_259);
	RzILOpPure *op_AND_261 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_260, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_262 = CAST(32, MSB(op_AND_261), op_AND_261);
	RzILOpPure *cast_st64_263 = CAST(64, MSB(cast_st32_262), cast_st32_262);
	RzILOpPure *cond_267 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_258, VARL("h_tmp24"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_268 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_269 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *op_AND_271 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_270, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_272 = CAST(32, MSB(op_AND_271), op_AND_271);
	RzILOpPure *cast_st64_273 = CAST(64, MSB(cast_st32_272), cast_st32_272);
	RzILOpPure *cond_278 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_268, VARL("h_tmp25"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_279 = SUB(cond_267, cond_278);
	RzILOpPure *op_AND_280 = LET("const_pos0x3", const_pos0x3, LOGAND(op_SUB_279, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_281 = LET("const_pos0x3", const_pos0x3, EQ(op_AND_280, VARLP("const_pos0x3")));
	RzILOpPure *op_NE_282 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_283 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_284 = SHIFTR0(DUP(Rtt), op_MUL_283);
	RzILOpPure *op_AND_285 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_284, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_286 = CAST(32, MSB(op_AND_285), op_AND_285);
	RzILOpPure *cast_st64_287 = CAST(64, MSB(cast_st32_286), cast_st32_286);
	RzILOpPure *cond_292 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_282, VARL("h_tmp26"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_293 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_294 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_295 = SHIFTR0(DUP(Rss), op_MUL_294);
	RzILOpPure *op_AND_296 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_295, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_297 = CAST(32, MSB(op_AND_296), op_AND_296);
	RzILOpPure *cast_st64_298 = CAST(64, MSB(cast_st32_297), cast_st32_297);
	RzILOpPure *cond_303 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_293, VARL("h_tmp27"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_304 = SUB(cond_292, cond_303);
	RzILOpPure *op_ADD_305 = LET("const_pos1", const_pos1, ADD(op_SUB_304, VARLP("const_pos1")));
	RzILOpPure *op_NE_306 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_307 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_308 = SHIFTR0(DUP(Rtt), op_MUL_307);
	RzILOpPure *op_AND_309 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_308, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_310 = CAST(32, MSB(op_AND_309), op_AND_309);
	RzILOpPure *cast_st64_311 = CAST(64, MSB(cast_st32_310), cast_st32_310);
	RzILOpPure *cond_316 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_306, VARL("h_tmp28"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_317 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_318 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_319 = SHIFTR0(DUP(Rss), op_MUL_318);
	RzILOpPure *op_AND_320 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_319, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_321 = CAST(32, MSB(op_AND_320), op_AND_320);
	RzILOpPure *cast_st64_322 = CAST(64, MSB(cast_st32_321), cast_st32_321);
	RzILOpPure *cond_327 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_317, VARL("h_tmp29"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_328 = SUB(cond_316, cond_327);
	RzILOpPure *cond_329 = ITE(op_EQ_281, op_ADD_305, op_SUB_328);
	RzILOpPure *op_RSHIFT_330 = LET("const_pos1", const_pos1, SHIFTR0(cond_329, VARLP("const_pos1")));
	RzILOpPure *op_LT_331 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_330, VARLP("const_pos0")));
	RzILOpPure *op_SUB_332 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_333 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_332));
	RzILOpPure *op_NEG_334 = NEG(op_LSHIFT_333);
	RzILOpPure *op_SUB_335 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_336 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_335));
	RzILOpPure *op_SUB_337 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_336, VARLP("const_pos1")));
	RzILOpPure *cond_338 = ITE(op_LT_331, op_NEG_334, op_SUB_337);
	RzILOpPure *cond_340 = ITE(op_EQ_164, op_RSHIFT_238, cond_338);
	RzILOpPure *op_AND_341 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_340, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_342 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_343 = SHIFTL0(op_AND_341, op_MUL_342);
	RzILOpPure *op_OR_344 = LOGOR(op_AND_9, op_LSHIFT_343);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_17 = HEX_SEXTRACT64(cast_st64_16, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, seq_19);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(cast_st64_27, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_20, seq_30);
	RzILOpEffect *c_call_42 = HEX_SEXTRACT64(cast_st64_41, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_31, seq_44);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(cast_st64_52, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_45, seq_55);
	RzILOpEffect *c_call_66 = HEX_SEXTRACT64(cast_st64_65, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *seq_69 = SEQN(2, seq_56, seq_68);
	RzILOpEffect *c_call_77 = HEX_SEXTRACT64(cast_st64_76, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_78 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_79 = SEQN(2, c_call_77, op_ASSIGN_hybrid_tmp_78);
	RzILOpEffect *seq_80 = SEQN(2, seq_69, seq_79);
	RzILOpEffect *c_call_85 = HEX_SEXTRACT64(op_RSHIFT_84, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_86 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_87 = SEQN(2, c_call_85, op_ASSIGN_hybrid_tmp_86);
	RzILOpEffect *seq_88 = SEQN(2, seq_80, seq_87);
	RzILOpEffect *c_call_96 = HEX_SEXTRACT64(cast_st64_95, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_88, seq_98);
	RzILOpEffect *c_call_107 = HEX_SEXTRACT64(cast_st64_106, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_108 = SETL("h_tmp9", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_109 = SEQN(2, c_call_107, op_ASSIGN_hybrid_tmp_108);
	RzILOpEffect *seq_110 = SEQN(2, seq_99, seq_109);
	RzILOpEffect *c_call_121 = HEX_SEXTRACT64(cast_st64_120, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_122 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_123 = SEQN(2, c_call_121, op_ASSIGN_hybrid_tmp_122);
	RzILOpEffect *seq_124 = SEQN(2, seq_110, seq_123);
	RzILOpEffect *c_call_132 = HEX_SEXTRACT64(cast_st64_131, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_133 = SETL("h_tmp11", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_134 = SEQN(2, c_call_132, op_ASSIGN_hybrid_tmp_133);
	RzILOpEffect *seq_135 = SEQN(2, seq_124, seq_134);
	RzILOpEffect *c_call_145 = HEX_SEXTRACT64(cast_st64_144, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_146 = SETL("h_tmp12", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_147 = SEQN(2, c_call_145, op_ASSIGN_hybrid_tmp_146);
	RzILOpEffect *seq_148 = SEQN(2, seq_135, seq_147);
	RzILOpEffect *c_call_156 = HEX_SEXTRACT64(cast_st64_155, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp13", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *seq_159 = SEQN(2, seq_148, seq_158);
	RzILOpEffect *c_call_171 = HEX_SEXTRACT64(cast_st64_170, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_172 = SETL("h_tmp14", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_173 = SEQN(2, c_call_171, op_ASSIGN_hybrid_tmp_172);
	RzILOpEffect *seq_174 = SEQN(2, seq_159, seq_173);
	RzILOpEffect *c_call_182 = HEX_SEXTRACT64(cast_st64_181, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_183 = SETL("h_tmp15", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_184 = SEQN(2, c_call_182, op_ASSIGN_hybrid_tmp_183);
	RzILOpEffect *seq_185 = SEQN(2, seq_174, seq_184);
	RzILOpEffect *c_call_196 = HEX_SEXTRACT64(cast_st64_195, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_197 = SETL("h_tmp16", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_198 = SEQN(2, c_call_196, op_ASSIGN_hybrid_tmp_197);
	RzILOpEffect *seq_199 = SEQN(2, seq_185, seq_198);
	RzILOpEffect *c_call_207 = HEX_SEXTRACT64(cast_st64_206, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp17", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_207, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *seq_210 = SEQN(2, seq_199, seq_209);
	RzILOpEffect *c_call_220 = HEX_SEXTRACT64(cast_st64_219, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_221 = SETL("h_tmp18", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_222 = SEQN(2, c_call_220, op_ASSIGN_hybrid_tmp_221);
	RzILOpEffect *seq_223 = SEQN(2, seq_210, seq_222);
	RzILOpEffect *c_call_231 = HEX_SEXTRACT64(cast_st64_230, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_232 = SETL("h_tmp19", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_233 = SEQN(2, c_call_231, op_ASSIGN_hybrid_tmp_232);
	RzILOpEffect *seq_234 = SEQN(2, seq_223, seq_233);
	RzILOpEffect *c_call_239 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_240 = SETL("h_tmp20", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_241 = SEQN(2, c_call_239, op_ASSIGN_hybrid_tmp_240);
	RzILOpEffect *seq_242 = SEQN(2, seq_234, seq_241);
	RzILOpEffect *c_call_243 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_244 = SETL("h_tmp21", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_245 = SEQN(2, c_call_243, op_ASSIGN_hybrid_tmp_244);
	RzILOpEffect *seq_246 = SEQN(2, seq_242, seq_245);
	RzILOpEffect *c_call_247 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_248 = SETL("h_tmp22", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_249 = SEQN(2, c_call_247, op_ASSIGN_hybrid_tmp_248);
	RzILOpEffect *seq_250 = SEQN(2, seq_246, seq_249);
	RzILOpEffect *c_call_251 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp21"), VARL("h_tmp22"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_252 = SETL("h_tmp23", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_253 = SEQN(2, c_call_251, op_ASSIGN_hybrid_tmp_252);
	RzILOpEffect *seq_254 = SEQN(2, seq_250, seq_253);
	RzILOpEffect *op_ASSIGN_256 = SETG(usr_assoc_tmp, cond_255);
	RzILOpEffect *seq_257 = SEQN(2, seq_254, op_ASSIGN_256);
	RzILOpEffect *c_call_264 = HEX_SEXTRACT64(cast_st64_263, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_265 = SETL("h_tmp24", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_266 = SEQN(2, c_call_264, op_ASSIGN_hybrid_tmp_265);
	RzILOpEffect *c_call_274 = HEX_SEXTRACT64(cast_st64_273, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_275 = SETL("h_tmp25", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_276 = SEQN(2, c_call_274, op_ASSIGN_hybrid_tmp_275);
	RzILOpEffect *seq_277 = SEQN(2, seq_266, seq_276);
	RzILOpEffect *c_call_288 = HEX_SEXTRACT64(cast_st64_287, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_289 = SETL("h_tmp26", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_290 = SEQN(2, c_call_288, op_ASSIGN_hybrid_tmp_289);
	RzILOpEffect *seq_291 = SEQN(2, seq_277, seq_290);
	RzILOpEffect *c_call_299 = HEX_SEXTRACT64(cast_st64_298, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_300 = SETL("h_tmp27", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_301 = SEQN(2, c_call_299, op_ASSIGN_hybrid_tmp_300);
	RzILOpEffect *seq_302 = SEQN(2, seq_291, seq_301);
	RzILOpEffect *c_call_312 = HEX_SEXTRACT64(cast_st64_311, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_313 = SETL("h_tmp28", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_314 = SEQN(2, c_call_312, op_ASSIGN_hybrid_tmp_313);
	RzILOpEffect *seq_315 = SEQN(2, seq_302, seq_314);
	RzILOpEffect *c_call_323 = HEX_SEXTRACT64(cast_st64_322, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_324 = SETL("h_tmp29", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_325 = SEQN(2, c_call_323, op_ASSIGN_hybrid_tmp_324);
	RzILOpEffect *seq_326 = SEQN(2, seq_315, seq_325);
	RzILOpEffect *seq_339 = SEQN(2, seq_326, seq_257);
	RzILOpEffect *op_ASSIGN_345 = SETG(Rdd_assoc_tmp, op_OR_344);
	RzILOpEffect *empty_346 = EMPTY();
	RzILOpEffect *seq_347 = SEQN(2, op_ASSIGN_345, empty_346);
	RzILOpEffect *for_348 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_347));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_348, seq_339);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	// Declare: st64 h_tmp5;
	// Declare: ut64 h_tmp6;
	// Declare: st64 h_tmp7;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut32 h_tmp10;
	// Declare: ut64 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: st64 h_tmp13;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_11 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_12 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_13, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_15 = CAST(32, MSB(op_AND_14), op_AND_14);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(cast_st32_15), cast_st32_15);
	RzILOpPure *cond_21 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_11, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_22 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_23 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(op_AND_25), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_22, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_33 = SUB(cond_21, cond_32);
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_SUB_33, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_35 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_34, VARLP("const_pos1")));
	RzILOpPure *cond_40 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_41 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_42 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *op_AND_44 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_43, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_45 = CAST(32, MSB(op_AND_44), op_AND_44);
	RzILOpPure *cast_st64_46 = CAST(64, MSB(cast_st32_45), cast_st32_45);
	RzILOpPure *cond_51 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_41, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_52 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_53 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rss), op_MUL_53);
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_54, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_56 = CAST(32, MSB(op_AND_55), op_AND_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *cond_62 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_52, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_63 = SUB(cond_51, cond_62);
	RzILOpPure *op_ADD_64 = LET("const_pos1", const_pos1, ADD(op_SUB_63, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_65 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_64, VARLP("const_pos1")));
	RzILOpPure *op_EQ_66 = EQ(cond_40, op_RSHIFT_65);
	RzILOpPure *op_NE_67 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_68 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rtt), op_MUL_68);
	RzILOpPure *op_AND_70 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_71 = CAST(32, MSB(op_AND_70), op_AND_70);
	RzILOpPure *cast_st64_72 = CAST(64, MSB(cast_st32_71), cast_st32_71);
	RzILOpPure *cond_77 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_67, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_78 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_79 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_80, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_82 = CAST(32, MSB(op_AND_81), op_AND_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(cast_st32_82), cast_st32_82);
	RzILOpPure *cond_88 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_78, VARL("h_tmp7"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_89 = SUB(cond_77, cond_88);
	RzILOpPure *op_ADD_90 = LET("const_pos1", const_pos1, ADD(op_SUB_89, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_91 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_90, VARLP("const_pos1")));
	RzILOpPure *cond_108 = ITE(VARL("h_tmp8"), VARL("h_tmp11"), VARG(usr_assoc_tmp));
	RzILOpPure *op_NE_111 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_112 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_113 = SHIFTR0(DUP(Rtt), op_MUL_112);
	RzILOpPure *op_AND_114 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_113, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_115 = CAST(32, MSB(op_AND_114), op_AND_114);
	RzILOpPure *cast_st64_116 = CAST(64, MSB(cast_st32_115), cast_st32_115);
	RzILOpPure *cond_120 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_111, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_121 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_122 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_123 = SHIFTR0(DUP(Rss), op_MUL_122);
	RzILOpPure *op_AND_124 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_123, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_125 = CAST(32, MSB(op_AND_124), op_AND_124);
	RzILOpPure *cast_st64_126 = CAST(64, MSB(cast_st32_125), cast_st32_125);
	RzILOpPure *cond_131 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_121, VARL("h_tmp13"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_132 = SUB(cond_120, cond_131);
	RzILOpPure *op_ADD_133 = LET("const_pos1", const_pos1, ADD(op_SUB_132, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_134 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_133, VARLP("const_pos1")));
	RzILOpPure *op_LT_135 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_134, VARLP("const_pos0")));
	RzILOpPure *op_SUB_136 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *op_NEG_138 = NEG(op_LSHIFT_137);
	RzILOpPure *op_SUB_139 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_140 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_139));
	RzILOpPure *op_SUB_141 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_140, VARLP("const_pos1")));
	RzILOpPure *cond_142 = ITE(op_LT_135, op_NEG_138, op_SUB_141);
	RzILOpPure *cond_144 = ITE(op_EQ_66, op_RSHIFT_91, cond_142);
	RzILOpPure *op_AND_145 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_144, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_146 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_147 = SHIFTL0(op_AND_145, op_MUL_146);
	RzILOpPure *op_OR_148 = LOGOR(op_AND_9, op_LSHIFT_147);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_17 = HEX_SEXTRACT64(cast_st64_16, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *seq_20 = SEQN(2, seq_5, seq_19);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(cast_st64_27, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_20, seq_30);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(op_RSHIFT_35, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_31, seq_38);
	RzILOpEffect *c_call_47 = HEX_SEXTRACT64(cast_st64_46, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_39, seq_49);
	RzILOpEffect *c_call_58 = HEX_SEXTRACT64(cast_st64_57, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_50, seq_60);
	RzILOpEffect *c_call_73 = HEX_SEXTRACT64(cast_st64_72, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp6", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_73, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *seq_76 = SEQN(2, seq_61, seq_75);
	RzILOpEffect *c_call_84 = HEX_SEXTRACT64(cast_st64_83, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp7", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_76, seq_86);
	RzILOpEffect *c_call_92 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_92, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *seq_95 = SEQN(2, seq_87, seq_94);
	RzILOpEffect *c_call_96 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_95, seq_98);
	RzILOpEffect *c_call_100 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_100, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *seq_103 = SEQN(2, seq_99, seq_102);
	RzILOpEffect *c_call_104 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp9"), VARL("h_tmp10"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_105 = SETL("h_tmp11", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_106 = SEQN(2, c_call_104, op_ASSIGN_hybrid_tmp_105);
	RzILOpEffect *seq_107 = SEQN(2, seq_103, seq_106);
	RzILOpEffect *op_ASSIGN_109 = SETG(usr_assoc_tmp, cond_108);
	RzILOpEffect *seq_110 = SEQN(2, seq_107, op_ASSIGN_109);
	RzILOpEffect *c_call_117 = HEX_SEXTRACT64(cast_st64_116, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_118 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_119 = SEQN(2, c_call_117, op_ASSIGN_hybrid_tmp_118);
	RzILOpEffect *c_call_127 = HEX_SEXTRACT64(cast_st64_126, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_128 = SETL("h_tmp13", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_129 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_128);
	RzILOpEffect *seq_130 = SEQN(2, seq_119, seq_129);
	RzILOpEffect *seq_143 = SEQN(2, seq_130, seq_110);
	RzILOpEffect *op_ASSIGN_149 = SETG(Rdd_assoc_tmp, op_OR_148);
	RzILOpEffect *empty_150 = EMPTY();
	RzILOpEffect *seq_151 = SEQN(2, op_ASSIGN_149, empty_150);
	RzILOpEffect *for_152 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_151));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_152, seq_143);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_3 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_19 = CAST(8, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_24 = ADD(cast_ut8_19, cast_ut8_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st64_15, op_ADD_24);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_27 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_26, op_MUL_27);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_10, op_LSHIFT_28);
	RzILOpPure *op_LT_36 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_40 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_40));
	RzILOpPure *op_NOT_42 = LOGNOT(op_LSHIFT_41);
	RzILOpPure *op_AND_43 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_42);
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, IL_FALSE, cast_st32_47);
	RzILOpPure *op_MUL_49 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_51);
	RzILOpPure *op_MUL_53 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rtt), op_MUL_53);
	RzILOpPure *op_AND_55 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_54, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_56 = CAST(8, IL_FALSE, op_AND_55);
	RzILOpPure *op_ADD_57 = ADD(cast_ut8_52, cast_ut8_56);
	RzILOpPure *op_ADD_58 = ADD(cast_st64_48, op_ADD_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_58, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(op_AND_59, op_MUL_60);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_43, op_LSHIFT_61);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_2 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = SETG(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, op_ASSIGN_30);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *seq_33 = SEQN(2, seq_31, empty_32);
	RzILOpEffect *for_34 = SEQ2(op_ASSIGN_2, REPEAT(op_LT_3, seq_33));
	RzILOpEffect *op_ASSIGN_35 = SETL("i", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_37 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp1", VARL("i"));
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_hybrid_tmp_38, op_INC_37);
	RzILOpEffect *op_ASSIGN_63 = SETG(Rdd_assoc_tmp, op_OR_62);
	RzILOpEffect *seq_64 = SEQN(2, seq_39, op_ASSIGN_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *seq_66 = SEQN(2, seq_64, empty_65);
	RzILOpEffect *for_67 = SEQ2(op_ASSIGN_35, REPEAT(op_LT_36, seq_66));
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_34, for_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(Rxx, op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(DUP(Rxx), op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_22 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_23 = ADD(cast_ut8_18, cast_ut8_22);
	RzILOpPure *op_ADD_24 = ADD(cast_st64_14, op_ADD_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(op_AND_25, op_MUL_26);
	RzILOpPure *op_OR_28 = LOGOR(op_AND_9, op_LSHIFT_27);
	RzILOpPure *op_LT_35 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_39 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_39));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *op_AND_42 = LOGAND(DUP(Rxx), op_NOT_41);
	RzILOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rxx), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_46 = CAST(32, MSB(op_AND_45), op_AND_45);
	RzILOpPure *cast_st64_47 = CAST(64, IL_FALSE, cast_st32_46);
	RzILOpPure *op_MUL_48 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_49, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_51 = CAST(8, IL_FALSE, op_AND_50);
	RzILOpPure *op_MUL_52 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_55 = CAST(8, IL_FALSE, op_AND_54);
	RzILOpPure *op_ADD_56 = ADD(cast_ut8_51, cast_ut8_55);
	RzILOpPure *op_ADD_57 = ADD(cast_st64_47, op_ADD_56);
	RzILOpPure *op_AND_58 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_57, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(op_AND_58, op_MUL_59);
	RzILOpPure *op_OR_61 = LOGOR(op_AND_42, op_LSHIFT_60);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_29 = SETG(Rxx_assoc_tmp, op_OR_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_5, op_ASSIGN_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, seq_30, empty_31);
	RzILOpEffect *for_33 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_32));
	RzILOpEffect *op_ASSIGN_34 = SETL("i", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_36 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp1", VARL("i"));
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_hybrid_tmp_37, op_INC_36);
	RzILOpEffect *op_ASSIGN_62 = SETG(Rxx_assoc_tmp, op_OR_61);
	RzILOpEffect *seq_63 = SEQN(2, seq_38, op_ASSIGN_62);
	RzILOpEffect *empty_64 = EMPTY();
	RzILOpEffect *seq_65 = SEQN(2, seq_63, empty_64);
	RzILOpEffect *for_66 = SEQ2(op_ASSIGN_34, REPEAT(op_LT_35, seq_65));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_33, for_66);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	// Declare: ut32 i;
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_3 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *op_AND_10 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_SUB_24 = SUB(cast_ut8_19, cast_ut8_23);
	RzILOpPure *op_LT_25 = LET("const_pos0", const_pos0, ULT(op_SUB_24, VARLP("const_pos0")));
	RzILOpPure *op_MUL_26 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_29 = CAST(8, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_33 = CAST(8, IL_FALSE, op_AND_32);
	RzILOpPure *op_SUB_34 = SUB(cast_ut8_29, cast_ut8_33);
	RzILOpPure *op_NEG_35 = NEG(op_SUB_34);
	RzILOpPure *op_MUL_36 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_39 = CAST(8, IL_FALSE, op_AND_38);
	RzILOpPure *op_MUL_40 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *op_AND_42 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_41, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_43 = CAST(8, IL_FALSE, op_AND_42);
	RzILOpPure *op_SUB_44 = SUB(cast_ut8_39, cast_ut8_43);
	RzILOpPure *cond_45 = ITE(op_LT_25, op_NEG_35, op_SUB_44);
	RzILOpPure *op_ADD_46 = ADD(cast_st64_15, cond_45);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_46, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_48 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_47, op_MUL_48);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_10, op_LSHIFT_49);
	RzILOpPure *op_LT_57 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_61 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_62 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_61));
	RzILOpPure *op_NOT_63 = LOGNOT(op_LSHIFT_62);
	RzILOpPure *op_AND_64 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_63);
	RzILOpPure *op_MUL_65 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_65);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_68 = CAST(32, MSB(op_AND_67), op_AND_67);
	RzILOpPure *cast_st64_69 = CAST(64, IL_FALSE, cast_st32_68);
	RzILOpPure *op_MUL_70 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_73 = CAST(32, IL_FALSE, op_AND_72);
	RzILOpPure *op_MUL_74 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rtt), op_MUL_74);
	RzILOpPure *op_AND_76 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_75, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_77 = CAST(8, IL_FALSE, op_AND_76);
	RzILOpPure *op_SUB_78 = SUB(cast_ut8_73, cast_ut8_77);
	RzILOpPure *op_LT_79 = LET("const_pos0", const_pos0, ULT(op_SUB_78, VARLP("const_pos0")));
	RzILOpPure *op_MUL_80 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_81 = SHIFTR0(DUP(Rss), op_MUL_80);
	RzILOpPure *op_AND_82 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_81, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_83 = CAST(8, IL_FALSE, op_AND_82);
	RzILOpPure *op_MUL_84 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_85, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_87 = CAST(8, IL_FALSE, op_AND_86);
	RzILOpPure *op_SUB_88 = SUB(cast_ut8_83, cast_ut8_87);
	RzILOpPure *op_NEG_89 = NEG(op_SUB_88);
	RzILOpPure *op_MUL_90 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *op_AND_92 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_91, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_93 = CAST(8, IL_FALSE, op_AND_92);
	RzILOpPure *op_MUL_94 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rtt), op_MUL_94);
	RzILOpPure *op_AND_96 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_95, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_97 = CAST(8, IL_FALSE, op_AND_96);
	RzILOpPure *op_SUB_98 = SUB(cast_ut8_93, cast_ut8_97);
	RzILOpPure *cond_99 = ITE(op_LT_79, op_NEG_89, op_SUB_98);
	RzILOpPure *op_ADD_100 = ADD(cast_st64_69, cond_99);
	RzILOpPure *op_AND_101 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_100, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_102 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_103 = SHIFTL0(op_AND_101, op_MUL_102);
	RzILOpPure *op_OR_104 = LOGOR(op_AND_64, op_LSHIFT_103);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_ASSIGN_2 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc_tmp, op_OR_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_6, op_ASSIGN_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, seq_52, empty_53);
	RzILOpEffect *for_55 = SEQ2(op_ASSIGN_2, REPEAT(op_LT_3, seq_54));
	RzILOpEffect *op_ASSIGN_56 = SETL("i", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_58 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp1", VARL("i"));
	RzILOpEffect *seq_60 = SEQN(2, op_ASSIGN_hybrid_tmp_59, op_INC_58);
	RzILOpEffect *op_ASSIGN_105 = SETG(Rdd_assoc_tmp, op_OR_104);
	RzILOpEffect *seq_106 = SEQN(2, seq_60, op_ASSIGN_105);
	RzILOpEffect *empty_107 = EMPTY();
	RzILOpEffect *seq_108 = SEQN(2, seq_106, empty_107);
	RzILOpEffect *for_109 = SEQ2(op_ASSIGN_56, REPEAT(op_LT_57, seq_108));
	RzILOpEffect *instruction_sequence = SEQN(4, empty_0, op_ASSIGN_1, for_55, for_109);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut32 h_tmp1;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(Rxx, op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(DUP(Rxx), op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *op_MUL_19 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_20, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_22 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_SUB_23 = SUB(cast_ut8_18, cast_ut8_22);
	RzILOpPure *op_LT_24 = LET("const_pos0", const_pos0, ULT(op_SUB_23, VARLP("const_pos0")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rss), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_28 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_32 = CAST(8, IL_FALSE, op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_ut8_28, cast_ut8_32);
	RzILOpPure *op_NEG_34 = NEG(op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_38 = CAST(8, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_42 = CAST(8, IL_FALSE, op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_ut8_38, cast_ut8_42);
	RzILOpPure *cond_44 = ITE(op_LT_24, op_NEG_34, op_SUB_43);
	RzILOpPure *op_ADD_45 = ADD(cast_st64_14, cond_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_47 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_46, op_MUL_47);
	RzILOpPure *op_OR_49 = LOGOR(op_AND_9, op_LSHIFT_48);
	RzILOpPure *op_LT_56 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_61 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_60));
	RzILOpPure *op_NOT_62 = LOGNOT(op_LSHIFT_61);
	RzILOpPure *op_AND_63 = LOGAND(DUP(Rxx), op_NOT_62);
	RzILOpPure *op_MUL_64 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rxx), op_MUL_64);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_65, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_67 = CAST(32, MSB(op_AND_66), op_AND_66);
	RzILOpPure *cast_st64_68 = CAST(64, IL_FALSE, cast_st32_67);
	RzILOpPure *op_MUL_69 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_70, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_72 = CAST(32, IL_FALSE, op_AND_71);
	RzILOpPure *op_MUL_73 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rtt), op_MUL_73);
	RzILOpPure *op_AND_75 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_74, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_76 = CAST(8, IL_FALSE, op_AND_75);
	RzILOpPure *op_SUB_77 = SUB(cast_ut8_72, cast_ut8_76);
	RzILOpPure *op_LT_78 = LET("const_pos0", const_pos0, ULT(op_SUB_77, VARLP("const_pos0")));
	RzILOpPure *op_MUL_79 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *op_AND_81 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_80, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_82 = CAST(8, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *op_AND_85 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_84, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_86 = CAST(8, IL_FALSE, op_AND_85);
	RzILOpPure *op_SUB_87 = SUB(cast_ut8_82, cast_ut8_86);
	RzILOpPure *op_NEG_88 = NEG(op_SUB_87);
	RzILOpPure *op_MUL_89 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_90 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *op_AND_91 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_90, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_92 = CAST(8, IL_FALSE, op_AND_91);
	RzILOpPure *op_MUL_93 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rtt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_96 = CAST(8, IL_FALSE, op_AND_95);
	RzILOpPure *op_SUB_97 = SUB(cast_ut8_92, cast_ut8_96);
	RzILOpPure *cond_98 = ITE(op_LT_78, op_NEG_88, op_SUB_97);
	RzILOpPure *op_ADD_99 = ADD(cast_st64_68, cond_98);
	RzILOpPure *op_AND_100 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_ADD_99, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_101 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_102 = SHIFTL0(op_AND_100, op_MUL_101);
	RzILOpPure *op_OR_103 = LOGOR(op_AND_63, op_LSHIFT_102);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_50 = SETG(Rxx_assoc_tmp, op_OR_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_5, op_ASSIGN_50);
	RzILOpEffect *empty_52 = EMPTY();
	RzILOpEffect *seq_53 = SEQN(2, seq_51, empty_52);
	RzILOpEffect *for_54 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_53));
	RzILOpEffect *op_ASSIGN_55 = SETL("i", LET("const_pos4", const_pos4, VARLP("const_pos4")));
	RzILOpEffect *op_INC_57 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_58 = SETL("h_tmp1", VARL("i"));
	RzILOpEffect *seq_59 = SEQN(2, op_ASSIGN_hybrid_tmp_58, op_INC_57);
	RzILOpEffect *op_ASSIGN_104 = SETG(Rxx_assoc_tmp, op_OR_103);
	RzILOpEffect *seq_105 = SEQN(2, seq_59, op_ASSIGN_104);
	RzILOpEffect *empty_106 = EMPTY();
	RzILOpEffect *seq_107 = SEQN(2, seq_105, empty_106);
	RzILOpEffect *for_108 = SEQ2(op_ASSIGN_55, REPEAT(op_LT_56, seq_107));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_54, for_108);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st16_13, cast_st16_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_SUB_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_14 = CAST(16, MSB(op_AND_13), op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(op_AND_17), op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_st16_14, cast_st16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_32 = CAST(16, MSB(op_AND_31), op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_st16_28, cast_st16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_42 = CAST(16, MSB(op_AND_41), op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_st16_38, cast_st16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rtt), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_70 = CAST(16, MSB(op_AND_69), op_AND_69);
	RzILOpPure *op_SUB_71 = SUB(cast_st16_66, cast_st16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_SUB_71, VARLP("const_pos0")));
	RzILOpPure *op_SUB_73 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *op_NEG_75 = NEG(op_LSHIFT_74);
	RzILOpPure *op_SUB_76 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_76));
	RzILOpPure *op_SUB_78 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_77, VARLP("const_pos1")));
	RzILOpPure *cond_79 = ITE(op_LT_72, op_NEG_75, op_SUB_78);
	RzILOpPure *cond_80 = ITE(op_EQ_34, op_SUB_43, cond_79);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_80, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *op_MUL_83 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_9, op_LSHIFT_84);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", SIGNED(16, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_86, empty_87);
	RzILOpEffect *for_89 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_88));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_89, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_11, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_13 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(op_SUB_18, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_9, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, op_ASSIGN_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, seq_25, empty_26);
	RzILOpEffect *for_28 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_27));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsububs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut8 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_MUL_6 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_14 = CAST(8, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_ut8_14, cast_ut8_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_28 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_32 = CAST(8, IL_FALSE, op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_ut8_28, cast_ut8_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_38 = CAST(64, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_42 = CAST(8, IL_FALSE, op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_ut8_38, cast_ut8_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rtt), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_70 = CAST(8, IL_FALSE, op_AND_69);
	RzILOpPure *op_SUB_71 = SUB(cast_ut8_66, cast_ut8_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_SUB_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_SUB_43, cond_75);
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
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos8"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1", UNSIGNED(8, VARL("ret_val")));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rdd_assoc_tmp, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *for_85 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_84));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_85, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut16 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_6 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_12, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_14 = CAST(16, IL_FALSE, op_AND_13);
	RzILOpPure *op_MUL_15 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *op_SUB_19 = SUB(cast_ut16_14, cast_ut16_18);
	RzILOpPure *cond_24 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, op_AND_27);
	RzILOpPure *op_MUL_29 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_31 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_30, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_32 = CAST(16, IL_FALSE, op_AND_31);
	RzILOpPure *op_SUB_33 = SUB(cast_ut16_28, cast_ut16_32);
	RzILOpPure *op_EQ_34 = EQ(cond_24, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_36, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_38 = CAST(32, IL_FALSE, op_AND_37);
	RzILOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_ut16_38, cast_ut16_42);
	RzILOpPure *cond_60 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_63 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rtt), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_66 = CAST(32, IL_FALSE, op_AND_65);
	RzILOpPure *op_MUL_67 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_70 = CAST(16, IL_FALSE, op_AND_69);
	RzILOpPure *op_SUB_71 = SUB(cast_ut16_66, cast_ut16_70);
	RzILOpPure *op_LT_72 = LET("const_pos0", const_pos0, ULT(op_SUB_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", const_pos16, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *op_SUB_74 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_73, VARLP("const_pos1")));
	RzILOpPure *cond_75 = LET("const_pos0", const_pos0, ITE(op_LT_72, VARLP("const_pos0"), op_SUB_74));
	RzILOpPure *cond_76 = ITE(op_EQ_34, op_SUB_43, cond_75);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_76, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_78 = CAST(64, IL_FALSE, op_AND_77);
	RzILOpPure *op_MUL_79 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(cast_ut64_78, op_MUL_79);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_9, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(op_SUB_19, VARLP("const_pos0"), VARLP("const_pos16"));
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
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_55, seq_58);
	RzILOpEffect *op_ASSIGN_61 = SETG(usr_assoc_tmp, cond_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_59, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rdd_assoc_tmp, op_OR_81);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *for_85 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_84));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_85, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_MUL_10 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, IL_FALSE, cast_st32_13);
	RzILOpPure *op_MUL_15 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(op_AND_17), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_SUB_20 = SUB(cast_st64_14, cast_st64_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_SUB_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_5, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut32 h_tmp4;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp5;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_6 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_6));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *op_AND_9 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_8);
	RzILOpPure *op_NE_10 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_11 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(op_AND_13), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *op_SUB_21 = SUB(cast_st64_15, cast_st64_20);
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_27 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(cast_st32_30), cast_st32_30);
	RzILOpPure *op_MUL_32 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(cast_st32_35), cast_st32_35);
	RzILOpPure *op_SUB_37 = SUB(cast_st64_31, cast_st64_36);
	RzILOpPure *op_EQ_38 = EQ(cond_26, op_SUB_37);
	RzILOpPure *op_MUL_39 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_42 = CAST(32, MSB(op_AND_41), op_AND_41);
	RzILOpPure *cast_st64_43 = CAST(64, IL_FALSE, cast_st32_42);
	RzILOpPure *op_MUL_44 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *op_SUB_49 = SUB(cast_st64_43, cast_st64_48);
	RzILOpPure *cond_66 = ITE(VARL("h_tmp2"), VARL("h_tmp5"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_69 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_69);
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_72 = CAST(32, MSB(op_AND_71), op_AND_71);
	RzILOpPure *cast_st64_73 = CAST(32, IL_FALSE, cast_st32_72);
	RzILOpPure *op_MUL_74 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rss), op_MUL_74);
	RzILOpPure *op_AND_76 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_75, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_77 = CAST(32, MSB(op_AND_76), op_AND_76);
	RzILOpPure *cast_st64_78 = CAST(64, MSB(cast_st32_77), cast_st32_77);
	RzILOpPure *op_SUB_79 = SUB(cast_st64_73, cast_st64_78);
	RzILOpPure *op_LT_80 = LET("const_pos0", const_pos0, ULT(op_SUB_79, VARLP("const_pos0")));
	RzILOpPure *op_SUB_81 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *op_NEG_83 = NEG(op_LSHIFT_82);
	RzILOpPure *op_SUB_84 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_84));
	RzILOpPure *op_SUB_86 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_85, VARLP("const_pos1")));
	RzILOpPure *cond_87 = ITE(op_LT_80, op_NEG_83, op_SUB_86);
	RzILOpPure *cond_88 = ITE(op_EQ_38, op_SUB_49, cond_87);
	RzILOpPure *op_AND_89 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_88, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_90 = LET("const_pos32", const_pos32, MUL(VARL("i"), VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_91 = SHIFTL0(op_AND_89, op_MUL_90);
	RzILOpPure *op_OR_92 = LOGOR(op_AND_9, op_LSHIFT_91);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(op_SUB_21, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(2, seq_5, seq_24);
	RzILOpEffect *c_call_50 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_25, seq_52);
	RzILOpEffect *c_call_54 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_53, seq_56);
	RzILOpEffect *c_call_58 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_59 = SETL("h_tmp4", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_60 = SEQN(2, c_call_58, op_ASSIGN_hybrid_tmp_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_57, seq_60);
	RzILOpEffect *c_call_62 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp3"), VARL("h_tmp4"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp5", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_61, seq_64);
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc_tmp, cond_66);
	RzILOpEffect *seq_68 = SEQN(2, seq_65, op_ASSIGN_67);
	RzILOpEffect *op_ASSIGN_93 = SETG(Rdd_assoc_tmp, op_OR_92);
	RzILOpEffect *empty_94 = EMPTY();
	RzILOpEffect *seq_95 = SEQN(2, op_ASSIGN_93, empty_94);
	RzILOpEffect *for_96 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_95));
	RzILOpEffect *instruction_sequence = SEQN(3, empty_0, for_96, seq_68);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xorp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETG(Rdd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_zxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cond_4 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(Rs, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp0", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cond_4);
	RzILOpEffect *seq_6 = SEQN(2, seq_3, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>