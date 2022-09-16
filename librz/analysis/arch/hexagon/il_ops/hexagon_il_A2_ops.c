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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_LT_0 = ULT(Rss, cast_1);
	RzILOpPure *op_NEG_2 = NEG(DUP(Rss));
	RzILOpPure *cond_3 = ITE(op_LT_0, op_NEG_2, DUP(Rss));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

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
	RzILOpPure *cast_st32_1 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(DUP(cast_st32_1)), cast_st32_1);
	RzILOpPure *cast_4 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_3 = SLT(cast_st64_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *op_NEG_7 = NEG(cast_st64_6);
	RzILOpPure *cast_st32_8 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_9 = CAST(64, MSB(DUP(cast_st32_8)), cast_st32_8);
	RzILOpPure *cond_10 = ITE(op_LT_3, op_NEG_7, cast_st64_9);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cond_10);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cast_st64_19, cast_21);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_NEG_24 = NEG(cast_st64_23);
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *cond_27 = ITE(op_LT_20, op_NEG_24, cast_st64_26);
	RzILOpPure *op_EQ_28 = EQ(cond_17, cond_27);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_31 = SLT(cast_st64_30, cast_32);
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *op_NEG_35 = NEG(cast_st64_34);
	RzILOpPure *cast_st32_36 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(cast_st32_36)), cast_st32_36);
	RzILOpPure *cond_38 = ITE(op_LT_31, op_NEG_35, cast_st64_37);
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("h_tmp2"))), VARL("h_tmp2"));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp3"))), VARL("h_tmp3"));
	RzILOpPure *arg_cast_52 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_56 = ITE(NON_ZERO(VARL("h_tmp1")), VARL("h_tmp4"), cast_57);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, cond_56);
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *cast_64 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_63 = SLT(cast_st64_62, cast_64);
	RzILOpPure *cast_st32_65 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_66 = CAST(64, MSB(DUP(cast_st32_65)), cast_st32_65);
	RzILOpPure *op_NEG_67 = NEG(cast_st64_66);
	RzILOpPure *cast_st32_68 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_69 = CAST(64, MSB(DUP(cast_st32_68)), cast_st32_68);
	RzILOpPure *cond_70 = ITE(op_LT_63, op_NEG_67, cast_st64_69);
	RzILOpPure *cast_72 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_71 = SLT(cond_70, cast_72);
	RzILOpPure *op_SUB_73 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *op_NEG_75 = NEG(op_LSHIFT_74);
	RzILOpPure *op_SUB_76 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_77 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_76));
	RzILOpPure *cast_79 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_78 = SUB(op_LSHIFT_77, cast_79);
	RzILOpPure *cond_80 = ITE(op_LT_71, op_NEG_75, op_SUB_78);
	RzILOpPure *cond_81 = ITE(op_EQ_28, cond_38, cond_80);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_81);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_DEPOSIT64(arg_cast_49, arg_cast_50, arg_cast_51, arg_cast_52);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *seq_55 = SEQN(3, seq_44, seq_47, seq_54);
	RzILOpEffect *op_ASSIGN_58 = SETG(usr_assoc_tmp, cast_59);
	RzILOpEffect *seq_60 = SEQN(3, seq_41, seq_55, op_ASSIGN_58);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rd_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(2, seq_16, op_ASSIGN_82);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_84, seq_60);

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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_ADD_8 = ADD(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	// Declare: st64 h_tmp5;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp7"))), VARL("h_tmp7"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp8"))), VARL("h_tmp8"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp6")), VARL("h_tmp9"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp10;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut64 h_tmp14;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp12"))), VARL("h_tmp12"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp13"))), VARL("h_tmp13"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp11")), VARL("h_tmp14"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp10", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp15;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut64 h_tmp19;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp17"))), VARL("h_tmp17"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp18"))), VARL("h_tmp18"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp16")), VARL("h_tmp19"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp15", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp20;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp21;
	// Declare: ut32 h_tmp22;
	// Declare: ut32 h_tmp23;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp24;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp20"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp22"))), VARL("h_tmp22"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp23"))), VARL("h_tmp23"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp21")), VARL("h_tmp24"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp20", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp21", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp22", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp23", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp24", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp25;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp25"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp25", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_19);

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
	// Declare: st64 h_tmp26;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp26"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp26", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_19);

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
	// Declare: st64 h_tmp27;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp28;
	// Declare: ut32 h_tmp29;
	// Declare: ut32 h_tmp30;
	// Declare: ut64 h_tmp31;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp27"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp29"))), VARL("h_tmp29"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp30"))), VARL("h_tmp30"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp28")), VARL("h_tmp31"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp27", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp28", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp29", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp30", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp31", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = SETG(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_15, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_82, seq_58);

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
	// Declare: st64 h_tmp32;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp33;
	// Declare: ut32 h_tmp34;
	// Declare: ut32 h_tmp35;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp36;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_9 = ADD(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_ADD_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp32"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp34"))), VARL("h_tmp34"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp35"))), VARL("h_tmp35"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp33")), VARL("h_tmp36"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_ADD_67 = ADD(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_ADD_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_ADD_36)), op_ADD_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp32", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp33", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp34", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp35", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp36", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = SETG(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_15, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_82, seq_58);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_1 = ADD(Rs, cast_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 __a;
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 __b;
	// Declare: ut64 __sum;
	// Declare: ut64 __xor;
	RzILOpPure *const_pos0x8000000000000000ULL = UN(64, 0x8000000000000000);
	// Declare: ut64 __mask;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x7FFFFFFFFFFFFFFFLL = SN(64, 0x7fffffffffffffff);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp37;
	// Declare: ut32 h_tmp38;
	// Declare: ut32 h_tmp39;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp40;
	RzILOpPure *const_pos0x8000000000000000LL = SN(64, 0x8000000000000000);
	// Declare: ut32 h_tmp41;
	// Declare: ut32 h_tmp42;
	// Declare: ut32 h_tmp43;
	// Declare: ut64 h_tmp44;

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_2 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *op_ADD_4 = ADD(VARL("__a"), VARL("__b"));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("__a"), VARL("__b"));
	RzILOpPure *op_AND_9 = LOGAND(VARL("__xor"), VARL("__mask"));
	RzILOpPure *op_XOR_11 = LOGXOR(VARL("__a"), VARL("__sum"));
	RzILOpPure *op_AND_12 = LOGAND(op_XOR_11, VARL("__mask"));
	RzILOpPure *op_AND_13 = LOGAND(VARL("__sum"), VARL("__mask"));
	RzILOpPure *cast_15 = LET("const_pos0x7FFFFFFFFFFFFFFFLL", const_pos0x7FFFFFFFFFFFFFFFLL, CAST(64, IL_FALSE, VARLP("const_pos0x7FFFFFFFFFFFFFFFLL")));
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp38"))), VARL("h_tmp38"));
	RzILOpPure *arg_cast_28 = CAST(64, MSB(DUP(VARL("h_tmp39"))), VARL("h_tmp39"));
	RzILOpPure *arg_cast_29 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_33 = ITE(NON_ZERO(VARL("h_tmp37")), VARL("h_tmp40"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, cond_33);
	RzILOpPure *cast_39 = LET("const_pos0x8000000000000000LL", const_pos0x8000000000000000LL, CAST(64, IL_FALSE, VARLP("const_pos0x8000000000000000LL")));
	RzILOpPure *arg_cast_50 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp42"))), VARL("h_tmp42"));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp43"))), VARL("h_tmp43"));
	RzILOpPure *arg_cast_53 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_57 = ITE(NON_ZERO(VARL("h_tmp41")), VARL("h_tmp44"), cast_58);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, cond_57);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("__a", cast_ut64_0);
	RzILOpEffect *op_ASSIGN_3 = SETL("__b", cast_ut64_2);
	RzILOpEffect *op_ASSIGN_5 = SETL("__sum", op_ADD_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("__xor", op_XOR_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("__mask", LET("const_pos0x8000000000000000ULL", const_pos0x8000000000000000ULL, VARLP("const_pos0x8000000000000000ULL")));
	RzILOpEffect *op_ASSIGN_10 = SETG(Rdd_assoc_tmp, VARL("__sum"));
	RzILOpEffect *op_ASSIGN_14 = SETG(Rdd_assoc_tmp, cast_15);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp37", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_19 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp38", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *c_call_22 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp39", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_25 = HEX_DEPOSIT64(arg_cast_26, arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp40", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *seq_32 = SEQN(3, seq_21, seq_24, seq_31);
	RzILOpEffect *op_ASSIGN_35 = SETG(usr_assoc_tmp, cast_36);
	RzILOpEffect *seq_37 = SEQN(3, seq_18, seq_32, op_ASSIGN_35);
	RzILOpEffect *op_ASSIGN_38 = SETG(Rdd_assoc_tmp, cast_39);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp41", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp42", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp43", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_DEPOSIT64(arg_cast_50, arg_cast_51, arg_cast_52, arg_cast_53);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp44", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(3, seq_45, seq_48, seq_55);
	RzILOpEffect *op_ASSIGN_59 = SETG(usr_assoc_tmp, cast_60);
	RzILOpEffect *seq_61 = SEQN(3, seq_42, seq_56, op_ASSIGN_59);
	RzILOpEffect *seq_then_62 = SEQN(2, op_ASSIGN_14, seq_37);
	RzILOpEffect *seq_else_64 = SEQN(2, op_ASSIGN_38, seq_61);
	RzILOpEffect *branch_63 = BRANCH(NON_ZERO(op_AND_13), seq_then_62, seq_else_64);
	RzILOpEffect *op_ASSIGN_65 = SETG(Rdd_assoc_tmp, VARL("__sum"));
	RzILOpEffect *seq_then_66 = SEQN(1, branch_63);
	RzILOpEffect *seq_else_68 = SEQN(1, op_ASSIGN_65);
	RzILOpEffect *branch_67 = BRANCH(NON_ZERO(op_AND_12), seq_then_66, seq_else_68);
	RzILOpEffect *seq_then_69 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_71 = SEQN(1, branch_67);
	RzILOpEffect *branch_70 = BRANCH(NON_ZERO(op_AND_9), seq_then_69, seq_else_71);
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, op_ASSIGN_3, op_ASSIGN_5, op_ASSIGN_7, op_ASSIGN_8, branch_70);

	return instruction_sequence;
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
	// Declare: st64 h_tmp45;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp46;
	// Declare: ut32 h_tmp47;
	// Declare: ut32 h_tmp48;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp49;
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
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp45"), VARLP("const_pos0LL")));
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
	RzILOpPure *arg_cast_35 = CAST(64, MSB(DUP(VARL("h_tmp47"))), VARL("h_tmp47"));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("h_tmp48"))), VARL("h_tmp48"));
	RzILOpPure *arg_cast_37 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_41 = ITE(NON_ZERO(VARL("h_tmp46")), VARL("h_tmp49"), cast_42);
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
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp45", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp46", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp47", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp48", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp49", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(3, seq_29, seq_32, seq_39);
	RzILOpEffect *op_ASSIGN_43 = SETG(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = SETG(Rd_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(2, seq_11, op_ASSIGN_62);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_64, seq_45);

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
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp50;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *arg_cast_8 = CAST(64, IL_FALSE, cast_st64_6);
	RzILOpPure *arg_cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_10 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp50"), VARLP("const_pos0LL")));
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, cond_13);
	RzILOpPure *op_ADD_14 = ADD(Rtt, cast_15);

	// WRITE
	RzILOpEffect *c_call_7 = HEX_SEXTRACT64(arg_cast_8, arg_cast_9, arg_cast_10);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp50", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_7, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc_tmp, op_ADD_14);
	RzILOpEffect *seq_17 = SEQN(2, seq_12, op_ASSIGN_16);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_17);

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
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp51;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *cast_4 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_3 = LOGAND(op_RSHIFT_2, cast_4);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(cast_st32_5)), cast_st32_5);
	RzILOpPure *arg_cast_8 = CAST(64, IL_FALSE, cast_st64_6);
	RzILOpPure *arg_cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_10 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp51"), VARLP("const_pos0LL")));
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, cond_13);
	RzILOpPure *op_ADD_14 = ADD(Rtt, cast_15);

	// WRITE
	RzILOpEffect *c_call_7 = HEX_SEXTRACT64(arg_cast_8, arg_cast_9, arg_cast_10);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp51", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_7, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc_tmp, op_ADD_14);
	RzILOpEffect *seq_17 = SEQN(2, seq_12, op_ASSIGN_16);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_17);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_AND_1 = LOGAND(Rs, cast_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_OR_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_OR_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_OR_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *op_LSHIFT_4 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_3, VARLP("const_pos16")));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_8 = CAST(16, IL_FALSE, op_AND_7);
	RzILOpPure *op_OR_9 = LOGOR(op_LSHIFT_4, cast_ut16_8);
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_OR_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *cast_5 = CAST(64, IL_FALSE, op_NOT_3);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), cast_5);
	RzILOpPure *cast_8 = CAST(64, MSB(DUP(VARL("S"))), VARL("S"));
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_8, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = SHIFTL0(op_AND_7, op_MUL_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_LSHIFT_10);
	RzILOpPure *op_OR_11 = LOGOR(op_AND_4, cast_12);
	RzILOpPure *op_MUL_15 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_15));
	RzILOpPure *op_NOT_17 = LOGNOT(op_LSHIFT_16);
	RzILOpPure *cast_19 = CAST(64, IL_FALSE, op_NOT_17);
	RzILOpPure *op_AND_18 = LOGAND(VARG(Rdd_assoc_tmp), cast_19);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_22 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_LSHIFT_23);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_18, cast_25);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *imm_assign_6 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_13 = SETG(Rdd_assoc_tmp, op_OR_11);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *op_ASSIGN_26 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_6, op_ASSIGN_13, empty_14, op_ASSIGN_26, empty_27);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combinew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
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
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *cast_6 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_5 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(op_AND_5, op_MUL_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, op_LSHIFT_8);
	RzILOpPure *op_OR_9 = LOGOR(op_AND_3, cast_10);
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, op_NOT_15);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), cast_17);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_20 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_21 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, op_LSHIFT_21);
	RzILOpPure *op_OR_22 = LOGOR(op_AND_16, cast_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_11 = SETG(Rdd_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc_tmp, op_OR_22);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_11, empty_12, op_ASSIGN_24, empty_25);

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
	// Declare: st64 h_tmp52;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp53;
	// Declare: ut32 h_tmp54;
	// Declare: ut32 h_tmp55;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp56;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_NEG_2 = NEG(cast_st64_1);
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, op_NEG_2);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp52"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st64_10 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *op_NEG_11 = NEG(cast_st64_10);
	RzILOpPure *op_EQ_12 = EQ(cond_9, op_NEG_11);
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *op_NEG_14 = NEG(cast_st64_13);
	RzILOpPure *arg_cast_25 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_26 = CAST(64, MSB(DUP(VARL("h_tmp54"))), VARL("h_tmp54"));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp55"))), VARL("h_tmp55"));
	RzILOpPure *arg_cast_28 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_32 = ITE(NON_ZERO(VARL("h_tmp53")), VARL("h_tmp56"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_32);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *op_NEG_38 = NEG(cast_st64_37);
	RzILOpPure *cast_40 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_39 = SLT(op_NEG_38, cast_40);
	RzILOpPure *op_SUB_41 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_41));
	RzILOpPure *op_NEG_43 = NEG(op_LSHIFT_42);
	RzILOpPure *op_SUB_44 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_44));
	RzILOpPure *cast_47 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_46 = SUB(op_LSHIFT_45, cast_47);
	RzILOpPure *cond_48 = ITE(op_LT_39, op_NEG_43, op_SUB_46);
	RzILOpPure *cond_49 = ITE(op_EQ_12, op_NEG_14, cond_48);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, cond_49);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp52", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp53", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp54", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_21 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp55", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_24 = HEX_DEPOSIT64(arg_cast_25, arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp56", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *seq_31 = SEQN(3, seq_20, seq_23, seq_30);
	RzILOpEffect *op_ASSIGN_34 = SETG(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_50 = SETG(Rd_assoc_tmp, cast_51);
	RzILOpEffect *seq_52 = SEQN(2, seq_8, op_ASSIGN_50);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_52, seq_36);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rs, cast_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rs, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(NON_ZERO(op_AND_0), seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_8);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rs, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(NON_ZERO(op_AND_0), seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_8);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rs, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(NON_ZERO(op_AND_0), seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_8);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_3 = ADD(Rs, cast_4);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(NON_ZERO(op_AND_0), seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_8);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_AND_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_OR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_SUB_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_SUB_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_SUB_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_SUB_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_XOR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_XOR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_XOR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

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
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_XOR_2);
	RzILOpEffect *nop_4 = NOP();
	RzILOpEffect *seq_then_5 = SEQN(1, op_ASSIGN_3);
	RzILOpEffect *seq_else_7 = SEQN(1, nop_4);
	RzILOpEffect *branch_6 = BRANCH(NON_ZERO(op_AND_0), seq_then_5, seq_else_7);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_roundsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st8 tmp;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 __a;
	RzILOpPure *const_pos0x080000000ULL = UN(64, 0x80000000);
	// Declare: ut64 __b;
	// Declare: ut64 __sum;
	// Declare: ut64 __xor;
	RzILOpPure *const_pos0x8000000000000000ULL = UN(64, 0x8000000000000000);
	// Declare: ut64 __mask;
	RzILOpPure *const_pos0x7FFFFFFFFFFFFFFFLL = SN(64, 0x7fffffffffffffff);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp57;
	// Declare: ut32 h_tmp58;
	// Declare: ut32 h_tmp59;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp60;
	RzILOpPure *const_pos0x8000000000000000LL = SN(64, 0x8000000000000000);
	// Declare: ut32 h_tmp61;
	// Declare: ut32 h_tmp62;
	// Declare: ut32 h_tmp63;
	// Declare: ut64 h_tmp64;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);

	// EXEC
	RzILOpPure *cast_ut64_0 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_2 = LET("const_pos0x080000000ULL", const_pos0x080000000ULL, CAST(64, IL_FALSE, VARLP("const_pos0x080000000ULL")));
	RzILOpPure *op_ADD_4 = ADD(VARL("__a"), VARL("__b"));
	RzILOpPure *op_XOR_6 = LOGXOR(VARL("__a"), VARL("__b"));
	RzILOpPure *op_AND_9 = LOGAND(VARL("__xor"), VARL("__mask"));
	RzILOpPure *cast_11 = CAST(8, MSB(DUP(VARL("__sum"))), VARL("__sum"));
	RzILOpPure *op_XOR_12 = LOGXOR(VARL("__a"), VARL("__sum"));
	RzILOpPure *op_AND_13 = LOGAND(op_XOR_12, VARL("__mask"));
	RzILOpPure *op_AND_14 = LOGAND(VARL("__sum"), VARL("__mask"));
	RzILOpPure *cast_16 = LET("const_pos0x7FFFFFFFFFFFFFFFLL", const_pos0x7FFFFFFFFFFFFFFFLL, CAST(8, MSB(DUP(VARLP("const_pos0x7FFFFFFFFFFFFFFFLL"))), VARLP("const_pos0x7FFFFFFFFFFFFFFFLL")));
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_28 = CAST(64, MSB(DUP(VARL("h_tmp58"))), VARL("h_tmp58"));
	RzILOpPure *arg_cast_29 = CAST(64, MSB(DUP(VARL("h_tmp59"))), VARL("h_tmp59"));
	RzILOpPure *arg_cast_30 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_34 = ITE(NON_ZERO(VARL("h_tmp57")), VARL("h_tmp60"), cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, cond_34);
	RzILOpPure *cast_40 = LET("const_pos0x8000000000000000LL", const_pos0x8000000000000000LL, CAST(8, MSB(DUP(VARLP("const_pos0x8000000000000000LL"))), VARLP("const_pos0x8000000000000000LL")));
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp62"))), VARL("h_tmp62"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp63"))), VARL("h_tmp63"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp61")), VARL("h_tmp64"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_67 = CAST(8, MSB(DUP(VARL("__sum"))), VARL("__sum"));
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(VARL("tmp"), op_MUL_75);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(op_RSHIFT_76)), op_RSHIFT_76);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cast_78, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cast_st64_80);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("__a", cast_ut64_0);
	RzILOpEffect *op_ASSIGN_3 = SETL("__b", cast_ut64_2);
	RzILOpEffect *op_ASSIGN_5 = SETL("__sum", op_ADD_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("__xor", op_XOR_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("__mask", LET("const_pos0x8000000000000000ULL", const_pos0x8000000000000000ULL, VARLP("const_pos0x8000000000000000ULL")));
	RzILOpEffect *op_ASSIGN_10 = SETL("tmp", cast_11);
	RzILOpEffect *op_ASSIGN_15 = SETL("tmp", cast_16);
	RzILOpEffect *c_call_17 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp57", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_20 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp58", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *c_call_23 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp59", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_26 = HEX_DEPOSIT64(arg_cast_27, arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp60", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(3, seq_22, seq_25, seq_32);
	RzILOpEffect *op_ASSIGN_36 = SETG(usr_assoc_tmp, cast_37);
	RzILOpEffect *seq_38 = SEQN(3, seq_19, seq_33, op_ASSIGN_36);
	RzILOpEffect *op_ASSIGN_39 = SETL("tmp", cast_40);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp61", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp62", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp63", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp64", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *seq_then_63 = SEQN(2, op_ASSIGN_15, seq_38);
	RzILOpEffect *seq_else_65 = SEQN(2, op_ASSIGN_39, seq_62);
	RzILOpEffect *branch_64 = BRANCH(NON_ZERO(op_AND_14), seq_then_63, seq_else_65);
	RzILOpEffect *op_ASSIGN_66 = SETL("tmp", cast_67);
	RzILOpEffect *seq_then_68 = SEQN(1, branch_64);
	RzILOpEffect *seq_else_70 = SEQN(1, op_ASSIGN_66);
	RzILOpEffect *branch_69 = BRANCH(NON_ZERO(op_AND_13), seq_then_68, seq_else_70);
	RzILOpEffect *seq_then_71 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_73 = SEQN(1, branch_69);
	RzILOpEffect *branch_72 = BRANCH(NON_ZERO(op_AND_9), seq_then_71, seq_else_73);
	RzILOpEffect *empty_74 = EMPTY();
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, op_ASSIGN_3, op_ASSIGN_5, op_ASSIGN_7, op_ASSIGN_8, branch_72, empty_74, op_ASSIGN_81);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp65;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp66;
	// Declare: ut32 h_tmp67;
	// Declare: ut32 h_tmp68;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp69;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_3 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_6 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp65"), VARLP("const_pos0LL")));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cond_6);
	RzILOpPure *op_EQ_7 = EQ(cast_8, Rss);
	RzILOpPure *arg_cast_19 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_20 = CAST(64, MSB(DUP(VARL("h_tmp67"))), VARL("h_tmp67"));
	RzILOpPure *arg_cast_21 = CAST(64, MSB(DUP(VARL("h_tmp68"))), VARL("h_tmp68"));
	RzILOpPure *arg_cast_22 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_26 = ITE(NON_ZERO(VARL("h_tmp66")), VARL("h_tmp69"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cond_26);
	RzILOpPure *cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_LT_31 = ULT(DUP(Rss), cast_32);
	RzILOpPure *op_SUB_33 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_33));
	RzILOpPure *op_NEG_35 = NEG(op_LSHIFT_34);
	RzILOpPure *op_SUB_36 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_36));
	RzILOpPure *cast_39 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_38 = SUB(op_LSHIFT_37, cast_39);
	RzILOpPure *cond_40 = ITE(op_LT_31, op_NEG_35, op_SUB_38);
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, cond_40);
	RzILOpPure *cond_41 = ITE(op_EQ_7, DUP(Rss), cast_42);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cond_41);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(DUP(Rss), arg_cast_2, arg_cast_3);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp65", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_9 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp66", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_12 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp67", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_15 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp68", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_18 = HEX_DEPOSIT64(arg_cast_19, arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp69", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_18, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *seq_25 = SEQN(3, seq_14, seq_17, seq_24);
	RzILOpEffect *op_ASSIGN_28 = SETG(usr_assoc_tmp, cast_29);
	RzILOpEffect *seq_30 = SEQN(3, seq_11, seq_25, op_ASSIGN_28);
	RzILOpEffect *op_ASSIGN_43 = SETG(Rd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(2, seq_5, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_45, seq_30);

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
	// Declare: st64 h_tmp70;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp71;
	// Declare: ut32 h_tmp72;
	// Declare: ut32 h_tmp73;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp74;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp70"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *op_EQ_8 = EQ(cond_7, cast_9);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_21 = CAST(64, MSB(DUP(VARL("h_tmp72"))), VARL("h_tmp72"));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("h_tmp73"))), VARL("h_tmp73"));
	RzILOpPure *arg_cast_23 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_27 = ITE(NON_ZERO(VARL("h_tmp71")), VARL("h_tmp74"), cast_28);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, cond_27);
	RzILOpPure *op_LT_32 = LET("const_pos0", DUP(const_pos0), ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_SUB_33 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_33));
	RzILOpPure *op_NEG_35 = NEG(op_LSHIFT_34);
	RzILOpPure *op_SUB_36 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_36));
	RzILOpPure *cast_39 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_38 = SUB(op_LSHIFT_37, cast_39);
	RzILOpPure *cond_40 = ITE(op_LT_32, op_NEG_35, op_SUB_38);
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_41 = ITE(op_EQ_8, cast_42, cond_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cond_41);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp70", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp71", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_13 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp72", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp73", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_19 = HEX_DEPOSIT64(arg_cast_20, arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp74", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *seq_26 = SEQN(3, seq_15, seq_18, seq_25);
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc_tmp, cast_30);
	RzILOpEffect *seq_31 = SEQN(3, seq_12, seq_26, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_43 = SETG(Rd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(2, seq_6, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_45, seq_31);

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
	// Declare: st64 h_tmp75;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp76;
	// Declare: ut32 h_tmp77;
	// Declare: ut32 h_tmp78;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp79;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp75"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *op_EQ_8 = EQ(cond_7, cast_9);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_21 = CAST(64, MSB(DUP(VARL("h_tmp77"))), VARL("h_tmp77"));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("h_tmp78"))), VARL("h_tmp78"));
	RzILOpPure *arg_cast_23 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_27 = ITE(NON_ZERO(VARL("h_tmp76")), VARL("h_tmp79"), cast_28);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, cond_27);
	RzILOpPure *op_LT_32 = LET("const_pos0", DUP(const_pos0), ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_SUB_33 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_33));
	RzILOpPure *op_NEG_35 = NEG(op_LSHIFT_34);
	RzILOpPure *op_SUB_36 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_36));
	RzILOpPure *cast_39 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_38 = SUB(op_LSHIFT_37, cast_39);
	RzILOpPure *cond_40 = ITE(op_LT_32, op_NEG_35, op_SUB_38);
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_41 = ITE(op_EQ_8, cast_42, cond_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, cond_41);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp75", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_10 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp76", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_13 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp77", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_16 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp78", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_19 = HEX_DEPOSIT64(arg_cast_20, arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp79", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *seq_26 = SEQN(3, seq_15, seq_18, seq_25);
	RzILOpEffect *op_ASSIGN_29 = SETG(usr_assoc_tmp, cast_30);
	RzILOpEffect *seq_31 = SEQN(3, seq_12, seq_26, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_43 = SETG(Rd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(2, seq_6, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_45, seq_31);

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
	// Declare: ut64 h_tmp80;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp81;
	// Declare: ut32 h_tmp82;
	// Declare: ut32 h_tmp83;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp84;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp80"), cast_8);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, DUP(Rs));
	RzILOpPure *op_EQ_9 = EQ(cond_7, cast_10);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("h_tmp82"))), VARL("h_tmp82"));
	RzILOpPure *arg_cast_23 = CAST(64, MSB(DUP(VARL("h_tmp83"))), VARL("h_tmp83"));
	RzILOpPure *arg_cast_24 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_29 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_28 = ITE(NON_ZERO(VARL("h_tmp81")), VARL("h_tmp84"), cast_29);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, cond_28);
	RzILOpPure *op_LT_33 = LET("const_pos0", DUP(const_pos0), ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_36 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_35 = SUB(op_LSHIFT_34, cast_36);
	RzILOpPure *cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_37 = ITE(op_LT_33, cast_38, op_SUB_35);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_39 = ITE(op_EQ_9, cast_40, cond_37);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, cond_39);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp80", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_11 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp81", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp82", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_17 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp83", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_20 = HEX_DEPOSIT64(arg_cast_21, arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp84", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(3, seq_16, seq_19, seq_26);
	RzILOpEffect *op_ASSIGN_30 = SETG(usr_assoc_tmp, cast_31);
	RzILOpEffect *seq_32 = SEQN(3, seq_13, seq_27, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_41 = SETG(Rd_assoc_tmp, cast_42);
	RzILOpEffect *seq_43 = SEQN(2, seq_6, op_ASSIGN_41);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_43, seq_32);

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
	// Declare: ut64 h_tmp85;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp86;
	// Declare: ut32 h_tmp87;
	// Declare: ut32 h_tmp88;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp89;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp85"), cast_8);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, DUP(Rs));
	RzILOpPure *op_EQ_9 = EQ(cond_7, cast_10);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("h_tmp87"))), VARL("h_tmp87"));
	RzILOpPure *arg_cast_23 = CAST(64, MSB(DUP(VARL("h_tmp88"))), VARL("h_tmp88"));
	RzILOpPure *arg_cast_24 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_29 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_28 = ITE(NON_ZERO(VARL("h_tmp86")), VARL("h_tmp89"), cast_29);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, cond_28);
	RzILOpPure *op_LT_33 = LET("const_pos0", DUP(const_pos0), ULT(DUP(Rs), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_36 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_35 = SUB(op_LSHIFT_34, cast_36);
	RzILOpPure *cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_37 = ITE(op_LT_33, cast_38, op_SUB_35);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_39 = ITE(op_EQ_9, cast_40, cond_37);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, cond_39);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp85", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_11 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp86", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *c_call_14 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp87", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_17 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp88", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_20 = HEX_DEPOSIT64(arg_cast_21, arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp89", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *seq_27 = SEQN(3, seq_16, seq_19, seq_26);
	RzILOpEffect *op_ASSIGN_30 = SETG(usr_assoc_tmp, cast_31);
	RzILOpEffect *seq_32 = SEQN(3, seq_13, seq_27, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_41 = SETG(Rd_assoc_tmp, cast_42);
	RzILOpEffect *seq_43 = SEQN(2, seq_6, op_ASSIGN_41);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_43, seq_32);

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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	RzILOpPure *cast_st16_3 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rs, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_SUB_8 = SUB(cast_st16_3, cast_st16_7);
	RzILOpPure *op_LSHIFT_9 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_8, VARLP("const_pos16")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, op_LSHIFT_9);

	// WRITE
	RzILOpEffect *op_ASSIGN_10 = SETG(Rd_assoc_tmp, cast_11);
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
	// Declare: st64 h_tmp90;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp91;
	// Declare: ut32 h_tmp92;
	// Declare: ut32 h_tmp93;
	// Declare: ut64 h_tmp94;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp90"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp92"))), VARL("h_tmp92"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp93"))), VARL("h_tmp93"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp91")), VARL("h_tmp94"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp90", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp91", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp92", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp93", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp94", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp95;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp96;
	// Declare: ut32 h_tmp97;
	// Declare: ut32 h_tmp98;
	// Declare: ut64 h_tmp99;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp95"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp97"))), VARL("h_tmp97"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp98"))), VARL("h_tmp98"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp96")), VARL("h_tmp99"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp95", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp96", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp97", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp98", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp99", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp100;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp101;
	// Declare: ut32 h_tmp102;
	// Declare: ut32 h_tmp103;
	// Declare: ut64 h_tmp104;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp100"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp102"))), VARL("h_tmp102"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp103"))), VARL("h_tmp103"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp101")), VARL("h_tmp104"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp100", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp101", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp102", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp103", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp104", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp105;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp106;
	// Declare: ut32 h_tmp107;
	// Declare: ut32 h_tmp108;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp109;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp105"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp107"))), VARL("h_tmp107"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp108"))), VARL("h_tmp108"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp106")), VARL("h_tmp109"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *op_LSHIFT_80 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_78, VARLP("const_pos16")));
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp105", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp106", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp107", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp108", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp109", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_81 = SETG(Rd_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(2, seq_15, op_ASSIGN_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_83, seq_58);

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
	// Declare: st64 h_tmp110;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp110"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp110", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_19);

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
	// Declare: st64 h_tmp111;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp111"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp111", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_19);

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
	// Declare: st64 h_tmp112;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp113;
	// Declare: ut32 h_tmp114;
	// Declare: ut32 h_tmp115;
	// Declare: ut64 h_tmp116;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp112"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp114"))), VARL("h_tmp114"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp115"))), VARL("h_tmp115"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp113")), VARL("h_tmp116"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp112", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp113", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp114", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp115", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp116", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = SETG(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_15, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_82, seq_58);

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
	// Declare: st64 h_tmp117;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp118;
	// Declare: ut32 h_tmp119;
	// Declare: ut32 h_tmp120;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp121;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_2, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_9 = SUB(cast_st16_4, cast_st16_8);
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_SUB_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp117"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rt), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rs), op_MUL_21);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_20, cast_st16_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_EQ_26 = EQ(cond_16, cast_27);
	RzILOpPure *op_MUL_28 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp119"))), VARL("h_tmp119"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp120"))), VARL("h_tmp120"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp118")), VARL("h_tmp121"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *op_MUL_59 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *op_MUL_63 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rs), op_MUL_63);
	RzILOpPure *op_AND_65 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_62, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(op_SUB_36)), op_SUB_36);
	RzILOpPure *cond_78 = ITE(op_EQ_26, cast_79, cond_77);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp117", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp118", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp119", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp120", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp121", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = SETG(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_80 = SETG(Rd_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(2, seq_15, op_ASSIGN_80);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_82, seq_58);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_SUB_1 = SUB(cast_2, Rs);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = SETG(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

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
	// Declare: st64 h_tmp122;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp123;
	// Declare: ut32 h_tmp124;
	// Declare: ut32 h_tmp125;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp126;
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
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp122"), VARLP("const_pos0LL")));
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
	RzILOpPure *arg_cast_35 = CAST(64, MSB(DUP(VARL("h_tmp124"))), VARL("h_tmp124"));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("h_tmp125"))), VARL("h_tmp125"));
	RzILOpPure *arg_cast_37 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_41 = ITE(NON_ZERO(VARL("h_tmp123")), VARL("h_tmp126"), cast_42);
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
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp122", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *c_call_24 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp123", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_24, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_27 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_28 = SETL("h_tmp124", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_29 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_28);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp125", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp126", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(3, seq_29, seq_32, seq_39);
	RzILOpEffect *op_ASSIGN_43 = SETG(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = SETG(Rd_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(2, seq_11, op_ASSIGN_62);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_64, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp127;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rt, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_23 = ADD(cast_st16_17, cast_st16_22);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_ADD_23);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_25, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *cast_31 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_30 = LOGOR(cast_31, op_LSHIFT_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_OR_30);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp127", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_32 = SETG(Rd_assoc_tmp, cast_33);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_32, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp128;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp129;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp130;
	// Declare: ut32 h_tmp131;
	// Declare: ut32 h_tmp132;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp133;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rs, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rt, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_18, cast_st16_23);
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, op_ADD_24);
	RzILOpPure *arg_cast_27 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_28 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp129"), VARLP("const_pos0LL")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rs), op_MUL_32);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rt), op_MUL_37);
	RzILOpPure *op_AND_40 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_39, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *op_EQ_43 = EQ(cond_31, cast_44);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos16", DUP(const_pos16), MUL(cast_46, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rs), op_MUL_45);
	RzILOpPure *op_AND_48 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_47, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rt), op_MUL_50);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *op_ADD_55 = ADD(cast_st16_49, cast_st16_54);
	RzILOpPure *arg_cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_67 = CAST(64, MSB(DUP(VARL("h_tmp131"))), VARL("h_tmp131"));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp132"))), VARL("h_tmp132"));
	RzILOpPure *arg_cast_69 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_73 = ITE(NON_ZERO(VARL("h_tmp130")), VARL("h_tmp133"), cast_74);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, cond_73);
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_78 = LET("const_pos16", DUP(const_pos16), MUL(cast_79, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rs), op_MUL_78);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rt), op_MUL_83);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_85, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *op_ADD_88 = ADD(cast_st16_82, cast_st16_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, op_ADD_88);
	RzILOpPure *op_LT_89 = LET("const_pos0", DUP(const_pos0), ULT(cast_90, VARLP("const_pos0")));
	RzILOpPure *op_SUB_91 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_91));
	RzILOpPure *op_NEG_93 = NEG(op_LSHIFT_92);
	RzILOpPure *op_SUB_94 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_95 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_94));
	RzILOpPure *cast_97 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_96 = SUB(op_LSHIFT_95, cast_97);
	RzILOpPure *cond_98 = ITE(op_LT_89, op_NEG_93, op_SUB_96);
	RzILOpPure *cast_100 = CAST(64, MSB(DUP(op_ADD_55)), op_ADD_55);
	RzILOpPure *cond_99 = ITE(op_EQ_43, cast_100, cond_98);
	RzILOpPure *cast_102 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_101 = LOGAND(cond_99, cast_102);
	RzILOpPure *cast_ut64_103 = CAST(64, IL_FALSE, op_AND_101);
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_104 = LET("const_pos16", DUP(const_pos16), MUL(cast_105, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_106 = SHIFTL0(cast_ut64_103, op_MUL_104);
	RzILOpPure *cast_108 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_107 = LOGOR(cast_108, op_LSHIFT_106);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, op_OR_107);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp128", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp129", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp130", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp131", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp132", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_DEPOSIT64(arg_cast_66, arg_cast_67, arg_cast_68, arg_cast_69);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp133", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *seq_72 = SEQN(3, seq_61, seq_64, seq_71);
	RzILOpEffect *op_ASSIGN_75 = SETG(usr_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(3, seq_58, seq_72, op_ASSIGN_75);
	RzILOpEffect *op_ASSIGN_109 = SETG(Rd_assoc_tmp, cast_110);
	RzILOpEffect *seq_111 = SEQN(2, seq_30, op_ASSIGN_109);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *seq_113 = SEQN(2, seq_111, empty_112);
	RzILOpEffect *seq_114 = SEQN(2, seq_6, seq_113);
	RzILOpEffect *for_116 = REPEAT(op_LT_2, seq_114);
	RzILOpEffect *seq_115 = SEQN(2, op_ASSIGN_0, for_116);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_115, seq_77);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp134;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: ut64 h_tmp135;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp136;
	// Declare: ut32 h_tmp137;
	// Declare: ut32 h_tmp138;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp139;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rs, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rt, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_24 = ADD(cast_ut16_18, cast_ut16_23);
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, op_ADD_24);
	RzILOpPure *arg_cast_27 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_28 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_32 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_31 = ITE(op_NE_13, VARL("h_tmp135"), cast_32);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(cast_34, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rs), op_MUL_33);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos16", DUP(const_pos16), MUL(cast_39, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rt), op_MUL_38);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_ADD_43 = ADD(cast_ut16_37, cast_ut16_42);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_ADD_43);
	RzILOpPure *op_EQ_44 = EQ(cond_31, cast_45);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos16", DUP(const_pos16), MUL(cast_47, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rs), op_MUL_46);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_50 = CAST(16, IL_FALSE, op_AND_49);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos16", DUP(const_pos16), MUL(cast_52, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_51);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_54);
	RzILOpPure *op_ADD_56 = ADD(cast_ut16_50, cast_ut16_55);
	RzILOpPure *arg_cast_67 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp137"))), VARL("h_tmp137"));
	RzILOpPure *arg_cast_69 = CAST(64, MSB(DUP(VARL("h_tmp138"))), VARL("h_tmp138"));
	RzILOpPure *arg_cast_70 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_75 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_74 = ITE(NON_ZERO(VARL("h_tmp136")), VARL("h_tmp139"), cast_75);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, cond_74);
	RzILOpPure *cast_80 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_79 = LET("const_pos16", DUP(const_pos16), MUL(cast_80, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_81 = SHIFTR0(DUP(Rs), op_MUL_79);
	RzILOpPure *op_AND_82 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_81, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_83 = CAST(16, IL_FALSE, op_AND_82);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_88 = CAST(16, IL_FALSE, op_AND_87);
	RzILOpPure *op_ADD_89 = ADD(cast_ut16_83, cast_ut16_88);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, op_ADD_89);
	RzILOpPure *op_LT_90 = LET("const_pos0", DUP(const_pos0), ULT(cast_91, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_94 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_93 = SUB(op_LSHIFT_92, cast_94);
	RzILOpPure *cast_96 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_95 = ITE(op_LT_90, cast_96, op_SUB_93);
	RzILOpPure *cast_98 = CAST(64, MSB(DUP(op_ADD_56)), op_ADD_56);
	RzILOpPure *cond_97 = ITE(op_EQ_44, cast_98, cond_95);
	RzILOpPure *cast_100 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_99 = LOGAND(cond_97, cast_100);
	RzILOpPure *cast_ut64_101 = CAST(64, IL_FALSE, op_AND_99);
	RzILOpPure *cast_103 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_102 = LET("const_pos16", DUP(const_pos16), MUL(cast_103, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_104 = SHIFTL0(cast_ut64_101, op_MUL_102);
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_105 = LOGOR(cast_106, op_LSHIFT_104);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, op_OR_105);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp134", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_25 = HEX_EXTRACT64(arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp135", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_57 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_58 = SETL("h_tmp136", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_59 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_58);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp137", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp138", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_DEPOSIT64(arg_cast_67, arg_cast_68, arg_cast_69, arg_cast_70);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp139", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *seq_73 = SEQN(3, seq_62, seq_65, seq_72);
	RzILOpEffect *op_ASSIGN_76 = SETG(usr_assoc_tmp, cast_77);
	RzILOpEffect *seq_78 = SEQN(3, seq_59, seq_73, op_ASSIGN_76);
	RzILOpEffect *op_ASSIGN_107 = SETG(Rd_assoc_tmp, cast_108);
	RzILOpEffect *seq_109 = SEQN(2, seq_30, op_ASSIGN_107);
	RzILOpEffect *empty_110 = EMPTY();
	RzILOpEffect *seq_111 = SEQN(2, seq_109, empty_110);
	RzILOpEffect *seq_112 = SEQN(2, seq_6, seq_111);
	RzILOpEffect *for_114 = REPEAT(op_LT_2, seq_112);
	RzILOpEffect *seq_113 = SEQN(2, op_ASSIGN_0, for_114);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_113, seq_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp140;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rt, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_23 = ADD(cast_st16_17, cast_st16_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_23, VARLP("const_pos1")));
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp140", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavghs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp141;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rt, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_23 = ADD(cast_st16_17, cast_st16_22);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_ADD_23);
	RzILOpPure *op_ADD_24 = LET("const_pos1", const_pos1, ADD(cast_25, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp141", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp142;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rt, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_SUB_23 = SUB(cast_st16_17, cast_st16_22);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_23, VARLP("const_pos1")));
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp142", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp143;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rt, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rs, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_20, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_SUB_23 = SUB(cast_st16_17, cast_st16_22);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, op_SUB_23);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_25, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_AND_24);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *cast_31 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_30 = LOGOR(cast_31, op_LSHIFT_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, op_OR_30);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp143", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_32 = SETG(Rd_assoc_tmp, cast_33);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_32, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp144;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp145;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp146;
	// Declare: ut32 h_tmp147;
	// Declare: ut32 h_tmp148;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp149;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rt, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_24 = SUB(cast_st16_18, cast_st16_23);
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, op_SUB_24);
	RzILOpPure *arg_cast_27 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_28 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_31 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp145"), VARLP("const_pos0LL")));
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *op_AND_35 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *op_AND_40 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_39, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *op_EQ_43 = EQ(cond_31, cast_44);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos16", DUP(const_pos16), MUL(cast_46, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rt), op_MUL_45);
	RzILOpPure *op_AND_48 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_47, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rs), op_MUL_50);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_52, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *op_SUB_55 = SUB(cast_st16_49, cast_st16_54);
	RzILOpPure *arg_cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_67 = CAST(64, MSB(DUP(VARL("h_tmp147"))), VARL("h_tmp147"));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp148"))), VARL("h_tmp148"));
	RzILOpPure *arg_cast_69 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_73 = ITE(NON_ZERO(VARL("h_tmp146")), VARL("h_tmp149"), cast_74);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, cond_73);
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_78 = LET("const_pos16", DUP(const_pos16), MUL(cast_79, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_81 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_80, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rs), op_MUL_83);
	RzILOpPure *op_AND_86 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_85, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *op_SUB_88 = SUB(cast_st16_82, cast_st16_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, op_SUB_88);
	RzILOpPure *op_LT_89 = LET("const_pos0", DUP(const_pos0), ULT(cast_90, VARLP("const_pos0")));
	RzILOpPure *op_SUB_91 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_91));
	RzILOpPure *op_NEG_93 = NEG(op_LSHIFT_92);
	RzILOpPure *op_SUB_94 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_95 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_94));
	RzILOpPure *cast_97 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_96 = SUB(op_LSHIFT_95, cast_97);
	RzILOpPure *cond_98 = ITE(op_LT_89, op_NEG_93, op_SUB_96);
	RzILOpPure *cast_100 = CAST(64, MSB(DUP(op_SUB_55)), op_SUB_55);
	RzILOpPure *cond_99 = ITE(op_EQ_43, cast_100, cond_98);
	RzILOpPure *cast_102 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_101 = LOGAND(cond_99, cast_102);
	RzILOpPure *cast_ut64_103 = CAST(64, IL_FALSE, op_AND_101);
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_104 = LET("const_pos16", DUP(const_pos16), MUL(cast_105, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_106 = SHIFTL0(cast_ut64_103, op_MUL_104);
	RzILOpPure *cast_108 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_107 = LOGOR(cast_108, op_LSHIFT_106);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, op_OR_107);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp144", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_25 = HEX_SEXTRACT64(arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp145", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp146", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp147", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp148", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_DEPOSIT64(arg_cast_66, arg_cast_67, arg_cast_68, arg_cast_69);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp149", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *seq_72 = SEQN(3, seq_61, seq_64, seq_71);
	RzILOpEffect *op_ASSIGN_75 = SETG(usr_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(3, seq_58, seq_72, op_ASSIGN_75);
	RzILOpEffect *op_ASSIGN_109 = SETG(Rd_assoc_tmp, cast_110);
	RzILOpEffect *seq_111 = SEQN(2, seq_30, op_ASSIGN_109);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *seq_113 = SEQN(2, seq_111, empty_112);
	RzILOpEffect *seq_114 = SEQN(2, seq_6, seq_113);
	RzILOpEffect *for_116 = REPEAT(op_LT_2, seq_114);
	RzILOpEffect *seq_115 = SEQN(2, op_ASSIGN_0, for_116);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_115, seq_77);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp150;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp151;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp152;
	// Declare: ut32 h_tmp153;
	// Declare: ut32 h_tmp154;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp155;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos16", const_pos16, MUL(cast_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rt, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_SUB_24 = SUB(cast_ut16_18, cast_ut16_23);
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, op_SUB_24);
	RzILOpPure *arg_cast_27 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_28 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_32 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_31 = ITE(op_NE_13, VARL("h_tmp151"), cast_32);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(cast_34, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rt), op_MUL_33);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos16", DUP(const_pos16), MUL(cast_39, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rs), op_MUL_38);
	RzILOpPure *op_AND_41 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_42 = CAST(16, IL_FALSE, op_AND_41);
	RzILOpPure *op_SUB_43 = SUB(cast_ut16_37, cast_ut16_42);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_SUB_43);
	RzILOpPure *op_EQ_44 = EQ(cond_31, cast_45);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos16", DUP(const_pos16), MUL(cast_47, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rt), op_MUL_46);
	RzILOpPure *op_AND_49 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_48, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_50 = CAST(16, IL_FALSE, op_AND_49);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos16", DUP(const_pos16), MUL(cast_52, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rs), op_MUL_51);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_54);
	RzILOpPure *op_SUB_56 = SUB(cast_ut16_50, cast_ut16_55);
	RzILOpPure *arg_cast_67 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp153"))), VARL("h_tmp153"));
	RzILOpPure *arg_cast_69 = CAST(64, MSB(DUP(VARL("h_tmp154"))), VARL("h_tmp154"));
	RzILOpPure *arg_cast_70 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_75 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_74 = ITE(NON_ZERO(VARL("h_tmp152")), VARL("h_tmp155"), cast_75);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, cond_74);
	RzILOpPure *cast_80 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_79 = LET("const_pos16", DUP(const_pos16), MUL(cast_80, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_81 = SHIFTR0(DUP(Rt), op_MUL_79);
	RzILOpPure *op_AND_82 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_81, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_83 = CAST(16, IL_FALSE, op_AND_82);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rs), op_MUL_84);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(op_RSHIFT_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_88 = CAST(16, IL_FALSE, op_AND_87);
	RzILOpPure *op_SUB_89 = SUB(cast_ut16_83, cast_ut16_88);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, op_SUB_89);
	RzILOpPure *op_LT_90 = LET("const_pos0", DUP(const_pos0), ULT(cast_91, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_92 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_94 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_93 = SUB(op_LSHIFT_92, cast_94);
	RzILOpPure *cast_96 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_95 = ITE(op_LT_90, cast_96, op_SUB_93);
	RzILOpPure *cast_98 = CAST(64, MSB(DUP(op_SUB_56)), op_SUB_56);
	RzILOpPure *cond_97 = ITE(op_EQ_44, cast_98, cond_95);
	RzILOpPure *cast_100 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_99 = LOGAND(cond_97, cast_100);
	RzILOpPure *cast_ut64_101 = CAST(64, IL_FALSE, op_AND_99);
	RzILOpPure *cast_103 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_102 = LET("const_pos16", DUP(const_pos16), MUL(cast_103, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_104 = SHIFTL0(cast_ut64_101, op_MUL_102);
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_105 = LOGOR(cast_106, op_LSHIFT_104);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, op_OR_105);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp150", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_25 = HEX_EXTRACT64(arg_cast_26, arg_cast_27, arg_cast_28);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_29 = SETL("h_tmp151", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_30 = SEQN(2, c_call_25, op_ASSIGN_hybrid_tmp_29);
	RzILOpEffect *c_call_57 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_58 = SETL("h_tmp152", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_59 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_58);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp153", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp154", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_DEPOSIT64(arg_cast_67, arg_cast_68, arg_cast_69, arg_cast_70);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp155", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *seq_73 = SEQN(3, seq_62, seq_65, seq_72);
	RzILOpEffect *op_ASSIGN_76 = SETG(usr_assoc_tmp, cast_77);
	RzILOpEffect *seq_78 = SEQN(3, seq_59, seq_73, op_ASSIGN_76);
	RzILOpEffect *op_ASSIGN_107 = SETG(Rd_assoc_tmp, cast_108);
	RzILOpEffect *seq_109 = SEQN(2, seq_30, op_ASSIGN_107);
	RzILOpEffect *empty_110 = EMPTY();
	RzILOpEffect *seq_111 = SEQN(2, seq_109, empty_110);
	RzILOpEffect *seq_112 = SEQN(2, seq_6, seq_111);
	RzILOpEffect *for_114 = REPEAT(op_LT_2, seq_112);
	RzILOpEffect *seq_113 = SEQN(2, op_ASSIGN_0, for_114);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_113, seq_78);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_swiz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
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
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_MUL_5 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(cast_st8_8)), cast_st8_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_10, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", const_pos1, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_22 = LOGAND(cast_23, op_NOT_21);
	RzILOpPure *op_MUL_24 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(cast_st8_27)), cast_st8_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_29, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, op_OR_33);
	RzILOpPure *op_MUL_38 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_38));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_41 = LOGAND(cast_42, op_NOT_40);
	RzILOpPure *op_MUL_43 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rs), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_44, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_46 = CAST(8, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(cast_st8_46)), cast_st8_46);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_48, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_50 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_49, op_MUL_50);
	RzILOpPure *cast_53 = CAST(64, IL_FALSE, op_AND_41);
	RzILOpPure *op_OR_52 = LOGOR(cast_53, op_LSHIFT_51);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, op_OR_52);
	RzILOpPure *op_MUL_57 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_57));
	RzILOpPure *op_NOT_59 = LOGNOT(op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_60 = LOGAND(cast_61, op_NOT_59);
	RzILOpPure *op_MUL_62 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rs), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(op_RSHIFT_63, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_65 = CAST(8, MSB(DUP(op_AND_64)), op_AND_64);
	RzILOpPure *cast_67 = CAST(64, MSB(DUP(cast_st8_65)), cast_st8_65);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_67, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_66);
	RzILOpPure *op_MUL_69 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_OR_71 = LOGOR(cast_72, op_LSHIFT_70);
	RzILOpPure *cast_74 = CAST(32, IL_FALSE, op_OR_71);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = SETG(Rd_assoc_tmp, cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = SETG(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = SETG(Rd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *op_ASSIGN_73 = SETG(Rd_assoc_tmp, cast_74);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_18, op_ASSIGN_35, empty_37, op_ASSIGN_54, empty_56, op_ASSIGN_73, empty_75);

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
	// Declare: st64 h_tmp156;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp156"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp156", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

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
	// Declare: st64 h_tmp157;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp157"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp157", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(DUP(cast_st32_0)), cast_st32_0);
	RzILOpPure *cast_3 = CAST(64, IL_FALSE, cast_st64_1);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rdd_assoc_tmp, cast_3);
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
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARL("u"), VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, op_AND_6);
	RzILOpPure *op_MUL_8 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_7, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_10 = LOGOR(cast_11, op_LSHIFT_9);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rx_assoc_tmp, cast_13);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, op_ASSIGN_12, empty_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfril(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(VARL("u"), VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, op_AND_6);
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(cast_ut64_7, op_MUL_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_10 = LOGOR(cast_11, op_LSHIFT_9);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = SETG(Rx_assoc_tmp, cast_13);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, op_ASSIGN_12, empty_14);

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
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_1 = SETG(Rd_assoc_tmp, cast_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp158;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
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
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, cast_st16_18);
	RzILOpPure *op_LT_19 = LET("const_pos0", DUP(const_pos0), ULT(cast_20, VARLP("const_pos0")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *op_NEG_27 = NEG(cast_st16_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cond_34 = ITE(op_LT_19, op_NEG_27, cast_st16_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, cond_34);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_36, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, op_AND_35);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos16", DUP(const_pos16), MUL(cast_39, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_40 = SHIFTL0(cast_ut64_37, op_MUL_38);
	RzILOpPure *op_OR_41 = LOGOR(op_AND_11, op_LSHIFT_40);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp158", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_42 = SETG(Rdd_assoc_tmp, op_OR_41);
	RzILOpEffect *empty_43 = EMPTY();
	RzILOpEffect *seq_44 = SEQN(2, op_ASSIGN_42, empty_43);
	RzILOpEffect *seq_45 = SEQN(2, seq_6, seq_44);
	RzILOpEffect *for_47 = REPEAT(op_LT_2, seq_45);
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_0, for_47);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_46);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabshsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp159;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp160;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp161;
	// Declare: ut32 h_tmp162;
	// Declare: ut32 h_tmp163;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp164;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, cast_st16_19);
	RzILOpPure *op_LT_20 = LET("const_pos0", DUP(const_pos0), ULT(cast_21, VARLP("const_pos0")));
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *op_NEG_28 = NEG(cast_st16_27);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cond_35 = ITE(op_LT_20, op_NEG_28, cast_st16_34);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cond_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_42 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp160"), VARLP("const_pos0LL")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st16_48 = CAST(16, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, cast_st16_48);
	RzILOpPure *op_LT_49 = LET("const_pos0", DUP(const_pos0), ULT(cast_50, VARLP("const_pos0")));
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos16", DUP(const_pos16), MUL(cast_52, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *cast_55 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_54 = LOGAND(op_RSHIFT_53, cast_55);
	RzILOpPure *cast_st16_56 = CAST(16, MSB(DUP(op_AND_54)), op_AND_54);
	RzILOpPure *op_NEG_57 = NEG(cast_st16_56);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_58 = LET("const_pos16", DUP(const_pos16), MUL(cast_59, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rss), op_MUL_58);
	RzILOpPure *cast_62 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_61 = LOGAND(op_RSHIFT_60, cast_62);
	RzILOpPure *cast_st16_63 = CAST(16, MSB(DUP(op_AND_61)), op_AND_61);
	RzILOpPure *cond_64 = ITE(op_LT_49, op_NEG_57, cast_st16_63);
	RzILOpPure *cast_66 = CAST(64, MSB(DUP(cond_64)), cond_64);
	RzILOpPure *op_EQ_65 = EQ(cond_42, cast_66);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_67 = LET("const_pos16", DUP(const_pos16), MUL(cast_68, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_67);
	RzILOpPure *cast_71 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_70 = LOGAND(op_RSHIFT_69, cast_71);
	RzILOpPure *cast_st16_72 = CAST(16, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_74 = CAST(32, IL_FALSE, cast_st16_72);
	RzILOpPure *op_LT_73 = LET("const_pos0", DUP(const_pos0), ULT(cast_74, VARLP("const_pos0")));
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_75 = LET("const_pos16", DUP(const_pos16), MUL(cast_76, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_77 = SHIFTR0(DUP(Rss), op_MUL_75);
	RzILOpPure *cast_79 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_78 = LOGAND(op_RSHIFT_77, cast_79);
	RzILOpPure *cast_st16_80 = CAST(16, MSB(DUP(op_AND_78)), op_AND_78);
	RzILOpPure *op_NEG_81 = NEG(cast_st16_80);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos16", DUP(const_pos16), MUL(cast_83, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *cast_86 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_85 = LOGAND(op_RSHIFT_84, cast_86);
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *cond_88 = ITE(op_LT_73, op_NEG_81, cast_st16_87);
	RzILOpPure *arg_cast_99 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_100 = CAST(64, MSB(DUP(VARL("h_tmp162"))), VARL("h_tmp162"));
	RzILOpPure *arg_cast_101 = CAST(64, MSB(DUP(VARL("h_tmp163"))), VARL("h_tmp163"));
	RzILOpPure *arg_cast_102 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_107 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_106 = ITE(NON_ZERO(VARL("h_tmp161")), VARL("h_tmp164"), cast_107);
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, cond_106);
	RzILOpPure *cast_112 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_111 = LET("const_pos16", DUP(const_pos16), MUL(cast_112, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_113 = SHIFTR0(DUP(Rss), op_MUL_111);
	RzILOpPure *cast_115 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_114 = LOGAND(op_RSHIFT_113, cast_115);
	RzILOpPure *cast_st16_116 = CAST(16, MSB(DUP(op_AND_114)), op_AND_114);
	RzILOpPure *cast_118 = CAST(32, IL_FALSE, cast_st16_116);
	RzILOpPure *op_LT_117 = LET("const_pos0", DUP(const_pos0), ULT(cast_118, VARLP("const_pos0")));
	RzILOpPure *cast_120 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_119 = LET("const_pos16", DUP(const_pos16), MUL(cast_120, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_123 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_122 = LOGAND(op_RSHIFT_121, cast_123);
	RzILOpPure *cast_st16_124 = CAST(16, MSB(DUP(op_AND_122)), op_AND_122);
	RzILOpPure *op_NEG_125 = NEG(cast_st16_124);
	RzILOpPure *cast_127 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_126 = LET("const_pos16", DUP(const_pos16), MUL(cast_127, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_128 = SHIFTR0(DUP(Rss), op_MUL_126);
	RzILOpPure *cast_130 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_129 = LOGAND(op_RSHIFT_128, cast_130);
	RzILOpPure *cast_st16_131 = CAST(16, MSB(DUP(op_AND_129)), op_AND_129);
	RzILOpPure *cond_132 = ITE(op_LT_117, op_NEG_125, cast_st16_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, cond_132);
	RzILOpPure *op_LT_133 = LET("const_pos0", DUP(const_pos0), ULT(cast_134, VARLP("const_pos0")));
	RzILOpPure *op_SUB_135 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_136 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_135));
	RzILOpPure *op_NEG_137 = NEG(op_LSHIFT_136);
	RzILOpPure *op_SUB_138 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_139 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_138));
	RzILOpPure *cast_141 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_140 = SUB(op_LSHIFT_139, cast_141);
	RzILOpPure *cond_142 = ITE(op_LT_133, op_NEG_137, op_SUB_140);
	RzILOpPure *cast_144 = CAST(64, MSB(DUP(cond_88)), cond_88);
	RzILOpPure *cond_143 = ITE(op_EQ_65, cast_144, cond_142);
	RzILOpPure *cast_146 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_145 = LOGAND(cond_143, cast_146);
	RzILOpPure *cast_ut64_147 = CAST(64, IL_FALSE, op_AND_145);
	RzILOpPure *cast_149 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_148 = LET("const_pos16", DUP(const_pos16), MUL(cast_149, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_150 = SHIFTL0(cast_ut64_147, op_MUL_148);
	RzILOpPure *op_OR_151 = LOGOR(op_AND_11, op_LSHIFT_150);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp159", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp160", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_89 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_90 = SETL("h_tmp161", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_91 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_90);
	RzILOpEffect *c_call_92 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp162", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_92, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_95 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_96 = SETL("h_tmp163", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_97 = SEQN(2, c_call_95, op_ASSIGN_hybrid_tmp_96);
	RzILOpEffect *c_call_98 = HEX_DEPOSIT64(arg_cast_99, arg_cast_100, arg_cast_101, arg_cast_102);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_103 = SETL("h_tmp164", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_104 = SEQN(2, c_call_98, op_ASSIGN_hybrid_tmp_103);
	RzILOpEffect *seq_105 = SEQN(3, seq_94, seq_97, seq_104);
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc_tmp, cast_109);
	RzILOpEffect *seq_110 = SEQN(3, seq_91, seq_105, op_ASSIGN_108);
	RzILOpEffect *op_ASSIGN_152 = SETG(Rdd_assoc_tmp, op_OR_151);
	RzILOpEffect *seq_153 = SEQN(2, seq_41, op_ASSIGN_152);
	RzILOpEffect *empty_154 = EMPTY();
	RzILOpEffect *seq_155 = SEQN(2, seq_153, empty_154);
	RzILOpEffect *seq_156 = SEQN(2, seq_6, seq_155);
	RzILOpEffect *for_158 = REPEAT(op_LT_2, seq_156);
	RzILOpEffect *seq_157 = SEQN(2, op_ASSIGN_0, for_158);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_157, seq_110);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp165;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cast_st64_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *op_NEG_29 = NEG(cast_st64_28);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos32", DUP(const_pos32), MUL(cast_31, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *cond_37 = ITE(op_LT_20, op_NEG_29, cast_st64_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos32", DUP(const_pos32), MUL(cast_40, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *cast_43 = CAST(64, IL_FALSE, op_LSHIFT_41);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_11, cast_43);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp165", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_44 = SETG(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_45 = EMPTY();
	RzILOpEffect *seq_46 = SEQN(2, op_ASSIGN_44, empty_45);
	RzILOpEffect *seq_47 = SEQN(2, seq_6, seq_46);
	RzILOpEffect *for_49 = REPEAT(op_LT_2, seq_47);
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_0, for_49);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_48);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabswsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp166;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp167;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp168;
	// Declare: ut32 h_tmp169;
	// Declare: ut32 h_tmp170;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp171;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cast_st64_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", DUP(const_pos32), MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *cast_27 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NEG_30 = NEG(cast_st64_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos32", DUP(const_pos32), MUL(cast_32, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st32_36 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(cast_st32_36)), cast_st32_36);
	RzILOpPure *cond_38 = ITE(op_LT_21, op_NEG_30, cast_st64_37);
	RzILOpPure *arg_cast_40 = CAST(64, IL_FALSE, cond_38);
	RzILOpPure *arg_cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_42 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_45 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp167"), VARLP("const_pos0LL")));
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos32", DUP(const_pos32), MUL(cast_47, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_46);
	RzILOpPure *cast_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_49 = LOGAND(op_RSHIFT_48, cast_50);
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(op_AND_49)), op_AND_49);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(DUP(cast_st32_51)), cast_st32_51);
	RzILOpPure *cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_53 = SLT(cast_st64_52, cast_54);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos32", DUP(const_pos32), MUL(cast_56, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *op_NEG_62 = NEG(cast_st64_61);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos32", DUP(const_pos32), MUL(cast_64, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st32_68 = CAST(32, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_st64_69 = CAST(64, MSB(DUP(cast_st32_68)), cast_st32_68);
	RzILOpPure *cond_70 = ITE(op_LT_53, op_NEG_62, cast_st64_69);
	RzILOpPure *op_EQ_71 = EQ(cond_45, cond_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_72 = LET("const_pos32", DUP(const_pos32), MUL(cast_73, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rss), op_MUL_72);
	RzILOpPure *cast_76 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_75 = LOGAND(op_RSHIFT_74, cast_76);
	RzILOpPure *cast_st32_77 = CAST(32, MSB(DUP(op_AND_75)), op_AND_75);
	RzILOpPure *cast_st64_78 = CAST(64, MSB(DUP(cast_st32_77)), cast_st32_77);
	RzILOpPure *cast_80 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_79 = SLT(cast_st64_78, cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos32", DUP(const_pos32), MUL(cast_82, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_81);
	RzILOpPure *cast_85 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_84 = LOGAND(op_RSHIFT_83, cast_85);
	RzILOpPure *cast_st32_86 = CAST(32, MSB(DUP(op_AND_84)), op_AND_84);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(DUP(cast_st32_86)), cast_st32_86);
	RzILOpPure *op_NEG_88 = NEG(cast_st64_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos32", DUP(const_pos32), MUL(cast_90, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st32_94 = CAST(32, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(DUP(cast_st32_94)), cast_st32_94);
	RzILOpPure *cond_96 = ITE(op_LT_79, op_NEG_88, cast_st64_95);
	RzILOpPure *arg_cast_107 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_108 = CAST(64, MSB(DUP(VARL("h_tmp169"))), VARL("h_tmp169"));
	RzILOpPure *arg_cast_109 = CAST(64, MSB(DUP(VARL("h_tmp170"))), VARL("h_tmp170"));
	RzILOpPure *arg_cast_110 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_115 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_114 = ITE(NON_ZERO(VARL("h_tmp168")), VARL("h_tmp171"), cast_115);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, cond_114);
	RzILOpPure *cast_120 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_119 = LET("const_pos32", DUP(const_pos32), MUL(cast_120, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_123 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_122 = LOGAND(op_RSHIFT_121, cast_123);
	RzILOpPure *cast_st32_124 = CAST(32, MSB(DUP(op_AND_122)), op_AND_122);
	RzILOpPure *cast_st64_125 = CAST(64, MSB(DUP(cast_st32_124)), cast_st32_124);
	RzILOpPure *cast_127 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_126 = SLT(cast_st64_125, cast_127);
	RzILOpPure *cast_129 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_128 = LET("const_pos32", DUP(const_pos32), MUL(cast_129, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_130 = SHIFTR0(DUP(Rss), op_MUL_128);
	RzILOpPure *cast_132 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_131 = LOGAND(op_RSHIFT_130, cast_132);
	RzILOpPure *cast_st32_133 = CAST(32, MSB(DUP(op_AND_131)), op_AND_131);
	RzILOpPure *cast_st64_134 = CAST(64, MSB(DUP(cast_st32_133)), cast_st32_133);
	RzILOpPure *op_NEG_135 = NEG(cast_st64_134);
	RzILOpPure *cast_137 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_136 = LET("const_pos32", DUP(const_pos32), MUL(cast_137, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_136);
	RzILOpPure *cast_140 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_139 = LOGAND(op_RSHIFT_138, cast_140);
	RzILOpPure *cast_st32_141 = CAST(32, MSB(DUP(op_AND_139)), op_AND_139);
	RzILOpPure *cast_st64_142 = CAST(64, MSB(DUP(cast_st32_141)), cast_st32_141);
	RzILOpPure *cond_143 = ITE(op_LT_126, op_NEG_135, cast_st64_142);
	RzILOpPure *cast_145 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_144 = SLT(cond_143, cast_145);
	RzILOpPure *op_SUB_146 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_NEG_148 = NEG(op_LSHIFT_147);
	RzILOpPure *op_SUB_149 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_150 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_149));
	RzILOpPure *cast_152 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_151 = SUB(op_LSHIFT_150, cast_152);
	RzILOpPure *cond_153 = ITE(op_LT_144, op_NEG_148, op_SUB_151);
	RzILOpPure *cond_154 = ITE(op_EQ_71, cond_96, cond_153);
	RzILOpPure *op_AND_155 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_154, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_157 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_156 = LET("const_pos32", DUP(const_pos32), MUL(cast_157, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_158 = SHIFTL0(op_AND_155, op_MUL_156);
	RzILOpPure *cast_160 = CAST(64, IL_FALSE, op_LSHIFT_158);
	RzILOpPure *op_OR_159 = LOGOR(op_AND_11, cast_160);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp166", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_39 = HEX_SEXTRACT64(arg_cast_40, arg_cast_41, arg_cast_42);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp167", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_97 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_98 = SETL("h_tmp168", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_99 = SEQN(2, c_call_97, op_ASSIGN_hybrid_tmp_98);
	RzILOpEffect *c_call_100 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp169", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_100, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_104 = SETL("h_tmp170", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_105 = SEQN(2, c_call_103, op_ASSIGN_hybrid_tmp_104);
	RzILOpEffect *c_call_106 = HEX_DEPOSIT64(arg_cast_107, arg_cast_108, arg_cast_109, arg_cast_110);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_111 = SETL("h_tmp171", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_112 = SEQN(2, c_call_106, op_ASSIGN_hybrid_tmp_111);
	RzILOpEffect *seq_113 = SEQN(3, seq_102, seq_105, seq_112);
	RzILOpEffect *op_ASSIGN_116 = SETG(usr_assoc_tmp, cast_117);
	RzILOpEffect *seq_118 = SEQN(3, seq_99, seq_113, op_ASSIGN_116);
	RzILOpEffect *op_ASSIGN_161 = SETG(Rdd_assoc_tmp, op_OR_159);
	RzILOpEffect *seq_162 = SEQN(2, seq_44, op_ASSIGN_161);
	RzILOpEffect *empty_163 = EMPTY();
	RzILOpEffect *seq_164 = SEQN(2, seq_162, empty_163);
	RzILOpEffect *seq_165 = SEQN(2, seq_6, seq_164);
	RzILOpEffect *for_167 = REPEAT(op_LT_2, seq_165);
	RzILOpEffect *seq_166 = SEQN(2, op_ASSIGN_0, for_167);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_166, seq_118);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp172;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp172", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_33, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp173;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp174;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp175;
	// Declare: ut32 h_tmp176;
	// Declare: ut32 h_tmp177;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp178;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
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
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp174"), VARLP("const_pos0LL")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_ADD_46 = ADD(cast_st16_39, cast_st16_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(op_ADD_46)), op_ADD_46);
	RzILOpPure *op_EQ_47 = EQ(cond_33, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_st16_60 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *op_ADD_61 = ADD(cast_st16_54, cast_st16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp176"))), VARL("h_tmp176"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp177"))), VARL("h_tmp177"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp175")), VARL("h_tmp178"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rtt), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_st16_95 = CAST(16, MSB(DUP(op_AND_93)), op_AND_93);
	RzILOpPure *op_ADD_96 = ADD(cast_st16_89, cast_st16_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_ADD_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_SUB_99 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_99));
	RzILOpPure *op_NEG_101 = NEG(op_LSHIFT_100);
	RzILOpPure *op_SUB_102 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_102));
	RzILOpPure *cast_105 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_104 = SUB(op_LSHIFT_103, cast_105);
	RzILOpPure *cond_106 = ITE(op_LT_97, op_NEG_101, op_SUB_104);
	RzILOpPure *cast_108 = CAST(64, MSB(DUP(op_ADD_61)), op_ADD_61);
	RzILOpPure *cond_107 = ITE(op_EQ_47, cast_108, cond_106);
	RzILOpPure *cast_110 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_109 = LOGAND(cond_107, cast_110);
	RzILOpPure *cast_ut64_111 = CAST(64, IL_FALSE, op_AND_109);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_112 = LET("const_pos16", DUP(const_pos16), MUL(cast_113, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_114 = SHIFTL0(cast_ut64_111, op_MUL_112);
	RzILOpPure *op_OR_115 = LOGOR(op_AND_11, op_LSHIFT_114);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp173", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp174", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp175", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp176", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp177", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp178", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = SETG(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_116 = SETG(Rdd_assoc_tmp, op_OR_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_32, op_ASSIGN_116);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *seq_119 = SEQN(2, seq_117, empty_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_6, seq_119);
	RzILOpEffect *for_122 = REPEAT(op_LT_2, seq_120);
	RzILOpEffect *seq_121 = SEQN(2, op_ASSIGN_0, for_122);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_121, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp179;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut8_18, cast_ut8_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_ADD_25)), op_ADD_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos8", DUP(const_pos8), MUL(cast_30, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp179", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_33, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddubs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp180;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp181;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp182;
	// Declare: ut32 h_tmp183;
	// Declare: ut32 h_tmp184;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp185;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos8", DUP(const_pos8), MUL(cast_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut8_19 = CAST(8, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_23);
	RzILOpPure *op_ADD_26 = ADD(cast_ut8_19, cast_ut8_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_ADD_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp181"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(cast_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut8_40 = CAST(8, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_44);
	RzILOpPure *op_ADD_47 = ADD(cast_ut8_40, cast_ut8_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_ADD_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos8", DUP(const_pos8), MUL(cast_51, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_ut8_55 = CAST(8, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos8", DUP(const_pos8), MUL(cast_57, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rtt), op_MUL_56);
	RzILOpPure *cast_60 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_59 = LOGAND(op_RSHIFT_58, cast_60);
	RzILOpPure *cast_ut8_61 = CAST(8, IL_FALSE, op_AND_59);
	RzILOpPure *op_ADD_62 = ADD(cast_ut8_55, cast_ut8_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp183"))), VARL("h_tmp183"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp184"))), VARL("h_tmp184"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp182")), VARL("h_tmp185"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos8", DUP(const_pos8), MUL(cast_86, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *cast_89 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_ut8_90 = CAST(8, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos8", DUP(const_pos8), MUL(cast_92, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rtt), op_MUL_91);
	RzILOpPure *cast_95 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_94 = LOGAND(op_RSHIFT_93, cast_95);
	RzILOpPure *cast_ut8_96 = CAST(8, IL_FALSE, op_AND_94);
	RzILOpPure *op_ADD_97 = ADD(cast_ut8_90, cast_ut8_96);
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
	RzILOpPure *op_OR_112 = LOGOR(op_AND_11, op_LSHIFT_111);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp180", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp181", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp182", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp183", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp184", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp185", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = SETG(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_113 = SETG(Rdd_assoc_tmp, op_OR_112);
	RzILOpEffect *seq_114 = SEQN(2, seq_32, op_ASSIGN_113);
	RzILOpEffect *empty_115 = EMPTY();
	RzILOpEffect *seq_116 = SEQN(2, seq_114, empty_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_6, seq_116);
	RzILOpEffect *for_119 = REPEAT(op_LT_2, seq_117);
	RzILOpEffect *seq_118 = SEQN(2, op_ASSIGN_0, for_119);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_118, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp186;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp187;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp188;
	// Declare: ut32 h_tmp189;
	// Declare: ut32 h_tmp190;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp191;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut16_19 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_23);
	RzILOpPure *op_ADD_26 = ADD(cast_ut16_19, cast_ut16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_ADD_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp187"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut16_40 = CAST(16, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *op_ADD_47 = ADD(cast_ut16_40, cast_ut16_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_ADD_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos16", DUP(const_pos16), MUL(cast_57, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rtt), op_MUL_56);
	RzILOpPure *cast_60 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_59 = LOGAND(op_RSHIFT_58, cast_60);
	RzILOpPure *cast_ut16_61 = CAST(16, IL_FALSE, op_AND_59);
	RzILOpPure *op_ADD_62 = ADD(cast_ut16_55, cast_ut16_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp189"))), VARL("h_tmp189"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp190"))), VARL("h_tmp190"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp188")), VARL("h_tmp191"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *cast_89 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_ut16_90 = CAST(16, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos16", DUP(const_pos16), MUL(cast_92, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rtt), op_MUL_91);
	RzILOpPure *cast_95 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_94 = LOGAND(op_RSHIFT_93, cast_95);
	RzILOpPure *cast_ut16_96 = CAST(16, IL_FALSE, op_AND_94);
	RzILOpPure *op_ADD_97 = ADD(cast_ut16_90, cast_ut16_96);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, op_ADD_97);
	RzILOpPure *op_LT_98 = LET("const_pos0", DUP(const_pos0), ULT(cast_99, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_102 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_101 = SUB(op_LSHIFT_100, cast_102);
	RzILOpPure *cast_104 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_103 = ITE(op_LT_98, cast_104, op_SUB_101);
	RzILOpPure *cast_106 = CAST(64, MSB(DUP(op_ADD_62)), op_ADD_62);
	RzILOpPure *cond_105 = ITE(op_EQ_48, cast_106, cond_103);
	RzILOpPure *cast_108 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_107 = LOGAND(cond_105, cast_108);
	RzILOpPure *cast_ut64_109 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *cast_111 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_110 = LET("const_pos16", DUP(const_pos16), MUL(cast_111, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_112 = SHIFTL0(cast_ut64_109, op_MUL_110);
	RzILOpPure *op_OR_113 = LOGOR(op_AND_11, op_LSHIFT_112);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp186", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp187", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp188", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp189", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp190", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp191", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = SETG(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_114 = SETG(Rdd_assoc_tmp, op_OR_113);
	RzILOpEffect *seq_115 = SEQN(2, seq_32, op_ASSIGN_114);
	RzILOpEffect *empty_116 = EMPTY();
	RzILOpEffect *seq_117 = SEQN(2, seq_115, empty_116);
	RzILOpEffect *seq_118 = SEQN(2, seq_6, seq_117);
	RzILOpEffect *for_120 = REPEAT(op_LT_2, seq_118);
	RzILOpEffect *seq_119 = SEQN(2, op_ASSIGN_0, for_120);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_119, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp192;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rtt, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *op_ADD_27 = ADD(cast_st64_19, cast_st64_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(op_AND_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_LSHIFT_31);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, cast_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp192", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp193;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp194;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp195;
	// Declare: ut32 h_tmp196;
	// Declare: ut32 h_tmp197;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp198;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rtt, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st64_20, cast_st64_27);
	RzILOpPure *arg_cast_30 = CAST(64, IL_FALSE, op_ADD_28);
	RzILOpPure *arg_cast_31 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_32 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp194"), VARLP("const_pos0LL")));
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos32", DUP(const_pos32), MUL(cast_37, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(DUP(cast_st32_41)), cast_st32_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rtt), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st32_48 = CAST(32, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st64_49 = CAST(64, MSB(DUP(cast_st32_48)), cast_st32_48);
	RzILOpPure *op_ADD_50 = ADD(cast_st64_42, cast_st64_49);
	RzILOpPure *op_EQ_51 = EQ(cond_35, op_ADD_50);
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_52 = LET("const_pos32", DUP(const_pos32), MUL(cast_53, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rss), op_MUL_52);
	RzILOpPure *cast_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_55 = LOGAND(op_RSHIFT_54, cast_56);
	RzILOpPure *cast_st32_57 = CAST(32, MSB(DUP(op_AND_55)), op_AND_55);
	RzILOpPure *cast_st64_58 = CAST(64, MSB(DUP(cast_st32_57)), cast_st32_57);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos32", DUP(const_pos32), MUL(cast_60, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rtt), op_MUL_59);
	RzILOpPure *cast_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_62 = LOGAND(op_RSHIFT_61, cast_63);
	RzILOpPure *cast_st32_64 = CAST(32, MSB(DUP(op_AND_62)), op_AND_62);
	RzILOpPure *cast_st64_65 = CAST(64, MSB(DUP(cast_st32_64)), cast_st32_64);
	RzILOpPure *op_ADD_66 = ADD(cast_st64_58, cast_st64_65);
	RzILOpPure *arg_cast_77 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_78 = CAST(64, MSB(DUP(VARL("h_tmp196"))), VARL("h_tmp196"));
	RzILOpPure *arg_cast_79 = CAST(64, MSB(DUP(VARL("h_tmp197"))), VARL("h_tmp197"));
	RzILOpPure *arg_cast_80 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_84 = ITE(NON_ZERO(VARL("h_tmp195")), VARL("h_tmp198"), cast_85);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, cond_84);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos32", DUP(const_pos32), MUL(cast_90, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st32_94 = CAST(32, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(DUP(cast_st32_94)), cast_st32_94);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_96 = LET("const_pos32", DUP(const_pos32), MUL(cast_97, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_98 = SHIFTR0(DUP(Rtt), op_MUL_96);
	RzILOpPure *cast_100 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_99 = LOGAND(op_RSHIFT_98, cast_100);
	RzILOpPure *cast_st32_101 = CAST(32, MSB(DUP(op_AND_99)), op_AND_99);
	RzILOpPure *cast_st64_102 = CAST(64, MSB(DUP(cast_st32_101)), cast_st32_101);
	RzILOpPure *op_ADD_103 = ADD(cast_st64_95, cast_st64_102);
	RzILOpPure *cast_105 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_104 = SLT(op_ADD_103, cast_105);
	RzILOpPure *op_SUB_106 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_107 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_106));
	RzILOpPure *op_NEG_108 = NEG(op_LSHIFT_107);
	RzILOpPure *op_SUB_109 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_110 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_109));
	RzILOpPure *cast_112 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_111 = SUB(op_LSHIFT_110, cast_112);
	RzILOpPure *cond_113 = ITE(op_LT_104, op_NEG_108, op_SUB_111);
	RzILOpPure *cond_114 = ITE(op_EQ_51, op_ADD_66, cond_113);
	RzILOpPure *op_AND_115 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_114, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_116 = LET("const_pos32", DUP(const_pos32), MUL(cast_117, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_118 = SHIFTL0(op_AND_115, op_MUL_116);
	RzILOpPure *cast_120 = CAST(64, IL_FALSE, op_LSHIFT_118);
	RzILOpPure *op_OR_119 = LOGOR(op_AND_11, cast_120);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp193", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_29 = HEX_SEXTRACT64(arg_cast_30, arg_cast_31, arg_cast_32);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp194", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *c_call_67 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp195", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *c_call_70 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp196", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *c_call_73 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp197", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_73, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *c_call_76 = HEX_DEPOSIT64(arg_cast_77, arg_cast_78, arg_cast_79, arg_cast_80);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_81 = SETL("h_tmp198", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_82 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_81);
	RzILOpEffect *seq_83 = SEQN(3, seq_72, seq_75, seq_82);
	RzILOpEffect *op_ASSIGN_86 = SETG(usr_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(3, seq_69, seq_83, op_ASSIGN_86);
	RzILOpEffect *op_ASSIGN_121 = SETG(Rdd_assoc_tmp, op_OR_119);
	RzILOpEffect *seq_122 = SEQN(2, seq_34, op_ASSIGN_121);
	RzILOpEffect *empty_123 = EMPTY();
	RzILOpEffect *seq_124 = SEQN(2, seq_122, empty_123);
	RzILOpEffect *seq_125 = SEQN(2, seq_6, seq_124);
	RzILOpEffect *for_127 = REPEAT(op_LT_2, seq_125);
	RzILOpEffect *seq_126 = SEQN(2, op_ASSIGN_0, for_127);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_126, seq_88);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp199;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_11, op_LSHIFT_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp199", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp200;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
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
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x3", const_pos0x3, LOGAND(cast_27, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_28 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_26, VARLP("const_pos0x3")));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *op_ADD_41 = ADD(cast_st16_34, cast_st16_40);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_ADD_41);
	RzILOpPure *op_ADD_42 = LET("const_pos1", const_pos1, ADD(cast_43, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st16_55 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *op_ADD_56 = ADD(cast_st16_49, cast_st16_55);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, op_ADD_56);
	RzILOpPure *cond_57 = ITE(op_EQ_28, op_ADD_42, cast_58);
	RzILOpPure *op_RSHIFT_59 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_57, VARLP("const_pos1")));
	RzILOpPure *op_AND_60 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_59, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_61 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos16", DUP(const_pos16), MUL(cast_63, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(cast_ut64_61, op_MUL_62);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_11, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp200", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_66 = SETG(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *empty_67 = EMPTY();
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_66, empty_67);
	RzILOpEffect *seq_69 = SEQN(2, seq_6, seq_68);
	RzILOpEffect *for_71 = REPEAT(op_LT_2, seq_69);
	RzILOpEffect *seq_70 = SEQN(2, op_ASSIGN_0, for_71);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_70);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp201;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(cast_27, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_11, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp201", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, op_OR_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_35, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp202;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut8_18, cast_ut8_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(op_RSHIFT_26)), op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_28, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos8", DUP(const_pos8), MUL(cast_31, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_11, op_LSHIFT_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp202", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgubr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp203;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut8_18, cast_ut8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(cast_27, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *cast_30 = CAST(64, MSB(DUP(op_RSHIFT_28)), op_RSHIFT_28);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_30, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_31 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_31, op_MUL_32);
	RzILOpPure *op_OR_35 = LOGOR(op_AND_11, op_LSHIFT_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp203", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_36 = SETG(Rdd_assoc_tmp, op_OR_35);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_36, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp204;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut16_18, cast_ut16_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_11, op_LSHIFT_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp204", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp205;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
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
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut16_18, cast_ut16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(cast_27, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_11, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp205", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc_tmp, op_OR_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_35, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp206;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp207;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp208;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp207"), cast_27);
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rtt, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_ut32_34 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *cast_ut64_35 = CAST(64, IL_FALSE, cast_ut32_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_42 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_41 = ITE(op_NE_28, VARL("h_tmp208"), cast_42);
	RzILOpPure *op_ADD_43 = ADD(cond_26, cond_41);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_43, VARLP("const_pos1")));
	RzILOpPure *cast_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos32", DUP(const_pos32), MUL(cast_48, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_49 = SHIFTL0(op_AND_45, op_MUL_47);
	RzILOpPure *op_OR_50 = LOGOR(op_AND_11, op_LSHIFT_49);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp206", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_EXTRACT64(cast_ut64_20, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp207", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_36 = HEX_EXTRACT64(cast_ut64_35, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp208", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc_tmp, op_OR_50);
	RzILOpEffect *seq_52 = SEQN(3, seq_25, seq_40, op_ASSIGN_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, seq_52, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp209;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp210;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: ut64 h_tmp211;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, op_AND_17);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp210"), cast_27);
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rtt, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_ut32_34 = CAST(32, IL_FALSE, op_AND_32);
	RzILOpPure *cast_ut64_35 = CAST(64, IL_FALSE, cast_ut32_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_42 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_41 = ITE(op_NE_28, VARL("h_tmp211"), cast_42);
	RzILOpPure *op_ADD_43 = ADD(cond_26, cond_41);
	RzILOpPure *cast_45 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_44, VARLP("const_pos1")));
	RzILOpPure *cast_48 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos32", DUP(const_pos32), MUL(cast_50, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(op_AND_47, op_MUL_49);
	RzILOpPure *op_OR_52 = LOGOR(op_AND_11, op_LSHIFT_51);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp209", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_EXTRACT64(cast_ut64_20, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp210", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_36 = HEX_EXTRACT64(cast_ut64_35, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp211", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_52);
	RzILOpEffect *seq_54 = SEQN(3, seq_25, seq_40, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_6, seq_56);
	RzILOpEffect *for_59 = REPEAT(op_LT_2, seq_57);
	RzILOpEffect *seq_58 = SEQN(2, op_ASSIGN_0, for_59);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp212;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp213;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp214;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp213"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rtt, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_28, VARL("h_tmp214"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_43 = ADD(cond_27, cond_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_43, VARLP("const_pos1")));
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos32", DUP(const_pos32), MUL(cast_47, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_45, op_MUL_46);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_LSHIFT_48);
	RzILOpPure *op_OR_49 = LOGOR(op_AND_11, cast_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp212", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp213", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp214", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc_tmp, op_OR_49);
	RzILOpEffect *seq_52 = SEQN(3, seq_26, seq_41, op_ASSIGN_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, seq_52, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp215;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp216;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp217;
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	// Declare: st64 h_tmp218;
	// Declare: st64 h_tmp219;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp220;
	// Declare: st64 h_tmp221;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp216"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rtt, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_28, VARL("h_tmp217"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_43 = ADD(cond_27, cond_42);
	RzILOpPure *cast_45 = LET("const_pos0x3", const_pos0x3, CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_44 = LOGAND(op_ADD_43, cast_45);
	RzILOpPure *cast_47 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_46 = EQ(op_AND_44, cast_47);
	RzILOpPure *op_NE_48 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos32", DUP(const_pos32), MUL(cast_50, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_st32_54 = CAST(32, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(DUP(cast_st32_54)), cast_st32_54);
	RzILOpPure *arg_cast_57 = CAST(64, IL_FALSE, cast_st64_55);
	RzILOpPure *arg_cast_58 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_59 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_62 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_48, VARL("h_tmp218"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_63 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos32", DUP(const_pos32), MUL(cast_65, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rtt), op_MUL_64);
	RzILOpPure *cast_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_67 = LOGAND(op_RSHIFT_66, cast_68);
	RzILOpPure *cast_st32_69 = CAST(32, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_st64_70 = CAST(64, MSB(DUP(cast_st32_69)), cast_st32_69);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, cast_st64_70);
	RzILOpPure *arg_cast_73 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_74 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_77 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_63, VARL("h_tmp219"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_78 = ADD(cond_62, cond_77);
	RzILOpPure *cast_80 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_79 = ADD(op_ADD_78, cast_80);
	RzILOpPure *op_NE_81 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos32", DUP(const_pos32), MUL(cast_83, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *cast_86 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_85 = LOGAND(op_RSHIFT_84, cast_86);
	RzILOpPure *cast_st32_87 = CAST(32, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(DUP(cast_st32_87)), cast_st32_87);
	RzILOpPure *arg_cast_90 = CAST(64, IL_FALSE, cast_st64_88);
	RzILOpPure *arg_cast_91 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_92 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_95 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_81, VARL("h_tmp220"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_96 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_97 = LET("const_pos32", DUP(const_pos32), MUL(cast_98, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rtt), op_MUL_97);
	RzILOpPure *cast_101 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_100 = LOGAND(op_RSHIFT_99, cast_101);
	RzILOpPure *cast_st32_102 = CAST(32, MSB(DUP(op_AND_100)), op_AND_100);
	RzILOpPure *cast_st64_103 = CAST(64, MSB(DUP(cast_st32_102)), cast_st32_102);
	RzILOpPure *arg_cast_105 = CAST(64, IL_FALSE, cast_st64_103);
	RzILOpPure *arg_cast_106 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_107 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_110 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_96, VARL("h_tmp221"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_111 = ADD(cond_95, cond_110);
	RzILOpPure *cond_112 = ITE(op_EQ_46, op_ADD_79, op_ADD_111);
	RzILOpPure *op_RSHIFT_113 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_112, VARLP("const_pos1")));
	RzILOpPure *op_AND_114 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_113, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_116 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_115 = LET("const_pos32", DUP(const_pos32), MUL(cast_116, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_117 = SHIFTL0(op_AND_114, op_MUL_115);
	RzILOpPure *cast_119 = CAST(64, IL_FALSE, op_LSHIFT_117);
	RzILOpPure *op_OR_118 = LOGOR(op_AND_11, cast_119);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp215", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp216", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp217", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_56 = HEX_SEXTRACT64(arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp218", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_71 = HEX_SEXTRACT64(arg_cast_72, arg_cast_73, arg_cast_74);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp219", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *c_call_89 = HEX_SEXTRACT64(arg_cast_90, arg_cast_91, arg_cast_92);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_93 = SETL("h_tmp220", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_94 = SEQN(2, c_call_89, op_ASSIGN_hybrid_tmp_93);
	RzILOpEffect *c_call_104 = HEX_SEXTRACT64(arg_cast_105, arg_cast_106, arg_cast_107);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_108 = SETL("h_tmp221", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_109 = SEQN(2, c_call_104, op_ASSIGN_hybrid_tmp_108);
	RzILOpEffect *op_ASSIGN_120 = SETG(Rdd_assoc_tmp, op_OR_118);
	RzILOpEffect *seq_121 = SEQN(7, seq_26, seq_41, seq_61, seq_76, seq_94, seq_109, op_ASSIGN_120);
	RzILOpEffect *empty_122 = EMPTY();
	RzILOpEffect *seq_123 = SEQN(2, seq_121, empty_122);
	RzILOpEffect *seq_124 = SEQN(2, seq_6, seq_123);
	RzILOpEffect *for_126 = REPEAT(op_LT_2, seq_124);
	RzILOpEffect *seq_125 = SEQN(2, op_ASSIGN_0, for_126);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_125);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp222;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp223;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp224;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp223"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rtt, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_28, VARL("h_tmp224"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_43 = ADD(cond_27, cond_42);
	RzILOpPure *cast_45 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_44 = ADD(op_ADD_43, cast_45);
	RzILOpPure *op_RSHIFT_46 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_44, VARLP("const_pos1")));
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_46, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos32", DUP(const_pos32), MUL(cast_49, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_50 = SHIFTL0(op_AND_47, op_MUL_48);
	RzILOpPure *cast_52 = CAST(64, IL_FALSE, op_LSHIFT_50);
	RzILOpPure *op_OR_51 = LOGOR(op_AND_11, cast_52);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp222", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp223", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp224", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_53 = SETG(Rdd_assoc_tmp, op_OR_51);
	RzILOpEffect *seq_54 = SEQN(3, seq_26, seq_41, op_ASSIGN_53);
	RzILOpEffect *empty_55 = EMPTY();
	RzILOpEffect *seq_56 = SEQN(2, seq_54, empty_55);
	RzILOpEffect *seq_57 = SEQN(2, seq_6, seq_56);
	RzILOpEffect *for_59 = REPEAT(op_LT_2, seq_57);
	RzILOpEffect *seq_58 = SEQN(2, op_ASSIGN_0, for_59);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp225;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_st8_22 = CAST(8, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *op_EQ_23 = EQ(cast_st8_16, cast_st8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_EQ_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp225", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp226;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("i")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(cast_12, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_ut8_22 = CAST(8, IL_FALSE, op_AND_20);
	RzILOpPure *op_GT_23 = UGT(cast_ut8_16, cast_ut8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp226", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpheq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp227;
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_EQ_25 = EQ(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_EQ_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, IL_FALSE, op_OR_30);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos2", DUP(const_pos2), MUL(cast_35, VARLP("const_pos2")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_MUL_34, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_EQ_53 = EQ(cast_st16_46, cast_st16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_EQ_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, IL_FALSE, op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp227", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = SETG(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = SETG(Pd_assoc_tmp, cast_61);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *seq_63 = SEQN(4, op_ASSIGN_31, empty_33, op_ASSIGN_60, empty_62);
	RzILOpEffect *seq_64 = SEQN(2, seq_6, seq_63);
	RzILOpEffect *for_66 = REPEAT(op_LT_2, seq_64);
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_0, for_66);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_65);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp228;
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_GT_25 = SGT(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_GT_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, IL_FALSE, op_OR_30);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos2", DUP(const_pos2), MUL(cast_35, VARLP("const_pos2")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_MUL_34, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_GT_53 = SGT(cast_st16_46, cast_st16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, IL_FALSE, op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp228", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = SETG(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = SETG(Pd_assoc_tmp, cast_61);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *seq_63 = SEQN(4, op_ASSIGN_31, empty_33, op_ASSIGN_60, empty_62);
	RzILOpEffect *seq_64 = SEQN(2, seq_6, seq_63);
	RzILOpEffect *for_66 = REPEAT(op_LT_2, seq_64);
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_0, for_66);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_65);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmphgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp229;
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_11 = LOGAND(cast_12, op_NOT_10);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_GT_25 = UGT(cast_ut16_18, cast_ut16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_GT_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, IL_FALSE, op_OR_30);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos2", DUP(const_pos2), MUL(cast_35, VARLP("const_pos2")));
	RzILOpPure *op_ADD_36 = LET("const_pos1", const_pos1, ADD(op_MUL_34, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), op_ADD_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *cast_40 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_39 = LOGAND(cast_40, op_NOT_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_50);
	RzILOpPure *op_GT_53 = UGT(cast_ut16_46, cast_ut16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, IL_FALSE, op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp229", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = SETG(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = SETG(Pd_assoc_tmp, cast_61);
	RzILOpEffect *empty_62 = EMPTY();
	RzILOpEffect *seq_63 = SEQN(4, op_ASSIGN_31, empty_33, op_ASSIGN_60, empty_62);
	RzILOpEffect *seq_64 = SEQN(2, seq_6, seq_63);
	RzILOpEffect *for_66 = REPEAT(op_LT_2, seq_64);
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_0, for_66);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_65);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpweq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp230;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp231;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_EQ_23 = EQ(cast_st64_16, cast_st64_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_EQ_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("j"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_36 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_37 = LET("const_pos7", const_pos7, ULE(cast_38, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_43 = LOGNOT(op_LSHIFT_42);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_44 = LOGAND(cast_45, op_NOT_43);
	RzILOpPure *op_MUL_46 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_46);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *cast_55 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_54 = LOGAND(op_RSHIFT_53, cast_55);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(DUP(op_AND_54)), op_AND_54);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(DUP(cast_st32_56)), cast_st32_56);
	RzILOpPure *op_EQ_58 = EQ(cast_st64_51, cast_st64_57);
	RzILOpPure *cast_ut64_59 = CAST(64, IL_FALSE, op_EQ_58);
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_59, VARL("j"));
	RzILOpPure *op_OR_61 = LOGOR(op_AND_44, op_LSHIFT_60);
	RzILOpPure *cast_63 = CAST(8, IL_FALSE, op_OR_61);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp230", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LE_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = SETL("j", cast_36);
	RzILOpEffect *op_INC_39 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp231", VARL("j"));
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_hybrid_tmp_40, op_INC_39);
	RzILOpEffect *op_ASSIGN_62 = SETG(Pd_assoc_tmp, cast_63);
	RzILOpEffect *empty_64 = EMPTY();
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_62, empty_64);
	RzILOpEffect *seq_66 = SEQN(2, seq_41, seq_65);
	RzILOpEffect *for_68 = REPEAT(op_LE_37, seq_66);
	RzILOpEffect *seq_67 = SEQN(2, op_ASSIGN_35, for_68);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, seq_32, empty_34, seq_67, empty_69);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp232;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp233;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st32_15 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_16 = CAST(64, MSB(DUP(cast_st32_15)), cast_st32_15);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *op_GT_23 = SGT(cast_st64_16, cast_st64_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("j"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_35 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_36 = LET("const_pos7", const_pos7, ULE(cast_37, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_41 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_42 = LOGNOT(op_LSHIFT_41);
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_43 = LOGAND(cast_44, op_NOT_42);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_48 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st32_49)), cast_st32_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *cast_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st32_55 = CAST(32, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(DUP(cast_st32_55)), cast_st32_55);
	RzILOpPure *op_GT_57 = SGT(cast_st64_50, cast_st64_56);
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_GT_57);
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_ut64_58, VARL("j"));
	RzILOpPure *op_OR_60 = LOGOR(op_AND_43, op_LSHIFT_59);
	RzILOpPure *cast_62 = CAST(8, IL_FALSE, op_OR_60);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp232", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LE_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *op_ASSIGN_34 = SETL("j", cast_35);
	RzILOpEffect *op_INC_38 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp233", VARL("j"));
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_hybrid_tmp_39, op_INC_38);
	RzILOpEffect *op_ASSIGN_61 = SETG(Pd_assoc_tmp, cast_62);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *seq_64 = SEQN(2, op_ASSIGN_61, empty_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_40, seq_64);
	RzILOpEffect *for_67 = REPEAT(op_LE_36, seq_65);
	RzILOpEffect *seq_66 = SEQN(2, op_ASSIGN_34, for_67);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_32, seq_66);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp234;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos1ULL = UN(64, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st32 h_tmp235;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_2 = LET("const_pos3", const_pos3, ULE(cast_3, VARLP("const_pos3")));
	RzILOpPure *op_LSHIFT_7 = LET("const_pos1ULL", const_pos1ULL, SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_8 = LOGNOT(op_LSHIFT_7);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_9 = LOGAND(cast_10, op_NOT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_ut32_15 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_16 = CAST(64, IL_FALSE, cast_ut32_15);
	RzILOpPure *op_MUL_17 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_ut32_21 = CAST(32, IL_FALSE, op_AND_19);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, cast_ut32_21);
	RzILOpPure *op_GT_23 = UGT(cast_ut64_16, cast_ut64_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("j"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, IL_FALSE, op_OR_26);
	RzILOpPure *cast_35 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_36 = LET("const_pos7", const_pos7, ULE(cast_37, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_41 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_42 = LOGNOT(op_LSHIFT_41);
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_43 = LOGAND(cast_44, op_NOT_42);
	RzILOpPure *op_MUL_45 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_48 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_ut32_49 = CAST(32, IL_FALSE, op_AND_47);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, cast_ut32_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *cast_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_ut32_55 = CAST(32, IL_FALSE, op_AND_53);
	RzILOpPure *cast_ut64_56 = CAST(64, IL_FALSE, cast_ut32_55);
	RzILOpPure *op_GT_57 = UGT(cast_ut64_50, cast_ut64_56);
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_GT_57);
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_ut64_58, VARL("j"));
	RzILOpPure *op_OR_60 = LOGOR(op_AND_43, op_LSHIFT_59);
	RzILOpPure *cast_62 = CAST(8, IL_FALSE, op_OR_60);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp234", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = SETG(Pd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LE_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *op_ASSIGN_34 = SETL("j", cast_35);
	RzILOpEffect *op_INC_38 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp235", VARL("j"));
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_hybrid_tmp_39, op_INC_38);
	RzILOpEffect *op_ASSIGN_61 = SETG(Pd_assoc_tmp, cast_62);
	RzILOpEffect *empty_63 = EMPTY();
	RzILOpEffect *seq_64 = SEQN(2, op_ASSIGN_61, empty_63);
	RzILOpEffect *seq_65 = SEQN(2, seq_40, seq_64);
	RzILOpEffect *for_67 = REPEAT(op_LE_36, seq_65);
	RzILOpEffect *seq_66 = SEQN(2, op_ASSIGN_34, for_67);
	RzILOpEffect *empty_68 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, seq_32, seq_66, empty_68);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vconj(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp236;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp237;
	// Declare: ut32 h_tmp238;
	// Declare: ut32 h_tmp239;
	// Declare: ut64 h_tmp240;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp241;
	// Declare: ut32 h_tmp242;
	// Declare: ut32 h_tmp243;
	// Declare: ut32 h_tmp244;
	// Declare: ut64 h_tmp245;
	RzILOpPure *const_pos2 = UN(32, 0x2);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_NEG_11 = NEG(cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_NEG_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp236"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_NEG_24 = NEG(cast_st16_23);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_NEG_24)), op_NEG_24);
	RzILOpPure *op_EQ_25 = EQ(cond_18, cast_26);
	RzILOpPure *op_MUL_27 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *op_NEG_32 = NEG(cast_st16_31);
	RzILOpPure *arg_cast_43 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_44 = CAST(64, MSB(DUP(VARL("h_tmp238"))), VARL("h_tmp238"));
	RzILOpPure *arg_cast_45 = CAST(64, MSB(DUP(VARL("h_tmp239"))), VARL("h_tmp239"));
	RzILOpPure *arg_cast_46 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_50 = ITE(NON_ZERO(VARL("h_tmp237")), VARL("h_tmp240"), cast_51);
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, cond_50);
	RzILOpPure *op_MUL_55 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_58 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *op_NEG_60 = NEG(cast_st16_59);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, op_NEG_60);
	RzILOpPure *op_LT_61 = LET("const_pos0", DUP(const_pos0), ULT(cast_62, VARLP("const_pos0")));
	RzILOpPure *op_SUB_63 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_64 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_63));
	RzILOpPure *op_NEG_65 = NEG(op_LSHIFT_64);
	RzILOpPure *op_SUB_66 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzILOpPure *cast_69 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_68 = SUB(op_LSHIFT_67, cast_69);
	RzILOpPure *cond_70 = ITE(op_LT_61, op_NEG_65, op_SUB_68);
	RzILOpPure *cast_72 = CAST(64, MSB(DUP(op_NEG_32)), op_NEG_32);
	RzILOpPure *cond_71 = ITE(op_EQ_25, cast_72, cond_70);
	RzILOpPure *cast_74 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_73 = LOGAND(cond_71, cast_74);
	RzILOpPure *cast_ut64_75 = CAST(64, IL_FALSE, op_AND_73);
	RzILOpPure *op_MUL_76 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_77 = SHIFTL0(cast_ut64_75, op_MUL_76);
	RzILOpPure *op_OR_78 = LOGOR(op_AND_3, op_LSHIFT_77);
	RzILOpPure *op_MUL_82 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_83 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_82));
	RzILOpPure *op_NOT_84 = LOGNOT(op_LSHIFT_83);
	RzILOpPure *cast_86 = CAST(64, IL_FALSE, op_NOT_84);
	RzILOpPure *op_AND_85 = LOGAND(VARG(Rdd_assoc_tmp), cast_86);
	RzILOpPure *op_MUL_87 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_88 = SHIFTR0(DUP(Rss), op_MUL_87);
	RzILOpPure *cast_90 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_89 = LOGAND(op_RSHIFT_88, cast_90);
	RzILOpPure *cast_st16_91 = CAST(16, MSB(DUP(op_AND_89)), op_AND_89);
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, cast_st16_91);
	RzILOpPure *op_AND_92 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_93, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_94 = CAST(64, IL_FALSE, op_AND_92);
	RzILOpPure *op_MUL_95 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_96 = SHIFTL0(cast_ut64_94, op_MUL_95);
	RzILOpPure *op_OR_97 = LOGOR(op_AND_85, op_LSHIFT_96);
	RzILOpPure *op_MUL_100 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_101 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_100));
	RzILOpPure *op_NOT_102 = LOGNOT(op_LSHIFT_101);
	RzILOpPure *cast_104 = CAST(64, IL_FALSE, op_NOT_102);
	RzILOpPure *op_AND_103 = LOGAND(VARG(Rdd_assoc_tmp), cast_104);
	RzILOpPure *op_NE_105 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_106 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_107 = SHIFTR0(DUP(Rss), op_MUL_106);
	RzILOpPure *cast_109 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_108 = LOGAND(op_RSHIFT_107, cast_109);
	RzILOpPure *cast_st16_110 = CAST(16, MSB(DUP(op_AND_108)), op_AND_108);
	RzILOpPure *op_NEG_111 = NEG(cast_st16_110);
	RzILOpPure *arg_cast_113 = CAST(64, IL_FALSE, op_NEG_111);
	RzILOpPure *arg_cast_114 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_115 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_118 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_105, VARL("h_tmp241"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_119 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_NEG_124 = NEG(cast_st16_123);
	RzILOpPure *cast_126 = CAST(64, MSB(DUP(op_NEG_124)), op_NEG_124);
	RzILOpPure *op_EQ_125 = EQ(cond_118, cast_126);
	RzILOpPure *op_MUL_127 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_128 = SHIFTR0(DUP(Rss), op_MUL_127);
	RzILOpPure *cast_130 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_129 = LOGAND(op_RSHIFT_128, cast_130);
	RzILOpPure *cast_st16_131 = CAST(16, MSB(DUP(op_AND_129)), op_AND_129);
	RzILOpPure *op_NEG_132 = NEG(cast_st16_131);
	RzILOpPure *arg_cast_143 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_144 = CAST(64, MSB(DUP(VARL("h_tmp243"))), VARL("h_tmp243"));
	RzILOpPure *arg_cast_145 = CAST(64, MSB(DUP(VARL("h_tmp244"))), VARL("h_tmp244"));
	RzILOpPure *arg_cast_146 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_151 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_150 = ITE(NON_ZERO(VARL("h_tmp242")), VARL("h_tmp245"), cast_151);
	RzILOpPure *cast_153 = CAST(32, IL_FALSE, cond_150);
	RzILOpPure *op_MUL_155 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rss), op_MUL_155);
	RzILOpPure *cast_158 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_157 = LOGAND(op_RSHIFT_156, cast_158);
	RzILOpPure *cast_st16_159 = CAST(16, MSB(DUP(op_AND_157)), op_AND_157);
	RzILOpPure *op_NEG_160 = NEG(cast_st16_159);
	RzILOpPure *cast_162 = CAST(32, IL_FALSE, op_NEG_160);
	RzILOpPure *op_LT_161 = LET("const_pos0", DUP(const_pos0), ULT(cast_162, VARLP("const_pos0")));
	RzILOpPure *op_SUB_163 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_164 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_163));
	RzILOpPure *op_NEG_165 = NEG(op_LSHIFT_164);
	RzILOpPure *op_SUB_166 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_167 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_166));
	RzILOpPure *cast_169 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_168 = SUB(op_LSHIFT_167, cast_169);
	RzILOpPure *cond_170 = ITE(op_LT_161, op_NEG_165, op_SUB_168);
	RzILOpPure *cast_172 = CAST(64, MSB(DUP(op_NEG_132)), op_NEG_132);
	RzILOpPure *cond_171 = ITE(op_EQ_125, cast_172, cond_170);
	RzILOpPure *cast_174 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_173 = LOGAND(cond_171, cast_174);
	RzILOpPure *cast_ut64_175 = CAST(64, IL_FALSE, op_AND_173);
	RzILOpPure *op_MUL_176 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_177 = SHIFTL0(cast_ut64_175, op_MUL_176);
	RzILOpPure *op_OR_178 = LOGOR(op_AND_103, op_LSHIFT_177);
	RzILOpPure *op_MUL_182 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_183 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_182));
	RzILOpPure *op_NOT_184 = LOGNOT(op_LSHIFT_183);
	RzILOpPure *cast_186 = CAST(64, IL_FALSE, op_NOT_184);
	RzILOpPure *op_AND_185 = LOGAND(VARG(Rdd_assoc_tmp), cast_186);
	RzILOpPure *op_MUL_187 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_188 = SHIFTR0(DUP(Rss), op_MUL_187);
	RzILOpPure *cast_190 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_189 = LOGAND(op_RSHIFT_188, cast_190);
	RzILOpPure *cast_st16_191 = CAST(16, MSB(DUP(op_AND_189)), op_AND_189);
	RzILOpPure *cast_193 = CAST(32, IL_FALSE, cast_st16_191);
	RzILOpPure *op_AND_192 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_193, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_194 = CAST(64, IL_FALSE, op_AND_192);
	RzILOpPure *op_MUL_195 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_196 = SHIFTL0(cast_ut64_194, op_MUL_195);
	RzILOpPure *op_OR_197 = LOGOR(op_AND_185, op_LSHIFT_196);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp236", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp237", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp238", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp239", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_DEPOSIT64(arg_cast_43, arg_cast_44, arg_cast_45, arg_cast_46);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp240", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *seq_49 = SEQN(3, seq_38, seq_41, seq_48);
	RzILOpEffect *op_ASSIGN_52 = SETG(usr_assoc_tmp, cast_53);
	RzILOpEffect *seq_54 = SEQN(3, seq_35, seq_49, op_ASSIGN_52);
	RzILOpEffect *op_ASSIGN_79 = SETG(Rdd_assoc_tmp, op_OR_78);
	RzILOpEffect *seq_80 = SEQN(2, seq_17, op_ASSIGN_79);
	RzILOpEffect *empty_81 = EMPTY();
	RzILOpEffect *op_ASSIGN_98 = SETG(Rdd_assoc_tmp, op_OR_97);
	RzILOpEffect *empty_99 = EMPTY();
	RzILOpEffect *c_call_112 = HEX_SEXTRACT64(arg_cast_113, arg_cast_114, arg_cast_115);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_116 = SETL("h_tmp241", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_117 = SEQN(2, c_call_112, op_ASSIGN_hybrid_tmp_116);
	RzILOpEffect *c_call_133 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_134 = SETL("h_tmp242", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_135 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_134);
	RzILOpEffect *c_call_136 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp243", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_139 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp244", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_139, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *c_call_142 = HEX_DEPOSIT64(arg_cast_143, arg_cast_144, arg_cast_145, arg_cast_146);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_147 = SETL("h_tmp245", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_148 = SEQN(2, c_call_142, op_ASSIGN_hybrid_tmp_147);
	RzILOpEffect *seq_149 = SEQN(3, seq_138, seq_141, seq_148);
	RzILOpEffect *op_ASSIGN_152 = SETG(usr_assoc_tmp, cast_153);
	RzILOpEffect *seq_154 = SEQN(3, seq_135, seq_149, op_ASSIGN_152);
	RzILOpEffect *op_ASSIGN_179 = SETG(Rdd_assoc_tmp, op_OR_178);
	RzILOpEffect *seq_180 = SEQN(2, seq_117, op_ASSIGN_179);
	RzILOpEffect *empty_181 = EMPTY();
	RzILOpEffect *op_ASSIGN_198 = SETG(Rdd_assoc_tmp, op_OR_197);
	RzILOpEffect *empty_199 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_80, empty_81, op_ASSIGN_98, empty_99, seq_180, empty_181, op_ASSIGN_198, empty_199, seq_54, seq_154);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp246;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st8_18 = CAST(8, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st8_24 = CAST(8, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_GT_25 = SGT(cast_st8_18, cast_st8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st8_31 = CAST(8, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st8_37 = CAST(8, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cond_38 = ITE(op_GT_25, cast_st8_31, cast_st8_37);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(cond_38)), cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_40, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp246", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp247;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_GT_25 = SGT(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cond_38 = ITE(op_GT_25, cast_st16_31, cast_st16_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_40, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp247", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp248;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_GT_25 = UGT(cast_ut8_18, cast_ut8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_35);
	RzILOpPure *cond_38 = ITE(op_GT_25, cast_ut8_31, cast_ut8_37);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(cond_38)), cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_40, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp248", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp249;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_GT_25 = UGT(cast_ut16_18, cast_ut16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut16_31 = CAST(16, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_35);
	RzILOpPure *cond_38 = ITE(op_GT_25, cast_ut16_31, cast_ut16_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_40, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp249", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp250;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_GT_27 = UGT(cast_ut64_19, cast_ut64_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_ut32_33 = CAST(32, IL_FALSE, op_AND_31);
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, cast_ut32_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut32_40 = CAST(32, IL_FALSE, op_AND_38);
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, cast_ut32_40);
	RzILOpPure *cond_42 = ITE(op_GT_27, cast_ut64_34, cast_ut64_41);
	RzILOpPure *cast_44 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_43 = LOGAND(cond_42, cast_44);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(op_AND_43, op_MUL_45);
	RzILOpPure *op_OR_48 = LOGOR(op_AND_11, op_LSHIFT_47);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp250", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, op_OR_48);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_49, empty_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_6, seq_51);
	RzILOpEffect *for_54 = REPEAT(op_LT_2, seq_52);
	RzILOpEffect *seq_53 = SEQN(2, op_ASSIGN_0, for_54);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp251;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *op_GT_27 = SGT(cast_st64_19, cast_st64_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(DUP(cast_st32_40)), cast_st32_40);
	RzILOpPure *cond_42 = ITE(op_GT_27, cast_st64_34, cast_st64_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos32", DUP(const_pos32), MUL(cast_45, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_LSHIFT_46);
	RzILOpPure *op_OR_47 = LOGOR(op_AND_11, cast_48);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp251", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, op_OR_47);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_49, empty_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_6, seq_51);
	RzILOpEffect *for_54 = REPEAT(op_LT_2, seq_52);
	RzILOpEffect *seq_53 = SEQN(2, op_ASSIGN_0, for_54);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp252;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st8_18 = CAST(8, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st8_24 = CAST(8, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_LT_25 = SLT(cast_st8_18, cast_st8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st8_31 = CAST(8, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st8_37 = CAST(8, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cond_38 = ITE(op_LT_25, cast_st8_31, cast_st8_37);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(cond_38)), cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_40, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp252", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp253;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_LT_25 = SLT(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_st16_37 = CAST(16, MSB(DUP(op_AND_35)), op_AND_35);
	RzILOpPure *cond_38 = ITE(op_LT_25, cast_st16_31, cast_st16_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_40, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp253", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp254;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_LT_25 = ULT(cast_ut8_18, cast_ut8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos8", DUP(const_pos8), MUL(cast_33, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_35);
	RzILOpPure *cond_38 = ITE(op_LT_25, cast_ut8_31, cast_ut8_37);
	RzILOpPure *cast_40 = CAST(64, MSB(DUP(cond_38)), cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_40, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp254", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp255;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_LT_25 = ULT(cast_ut16_18, cast_ut16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut16_31 = CAST(16, IL_FALSE, op_AND_29);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos16", DUP(const_pos16), MUL(cast_33, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *cast_36 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_35 = LOGAND(op_RSHIFT_34, cast_36);
	RzILOpPure *cast_ut16_37 = CAST(16, IL_FALSE, op_AND_35);
	RzILOpPure *cond_38 = ITE(op_LT_25, cast_ut16_31, cast_ut16_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, cond_38);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_40, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_45 = LOGOR(op_AND_11, op_LSHIFT_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp255", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = SETG(Rdd_assoc_tmp, op_OR_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_46, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp256;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut32_18 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, cast_ut32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut32_25 = CAST(32, IL_FALSE, op_AND_23);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_LT_27 = ULT(cast_ut64_19, cast_ut64_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_ut32_33 = CAST(32, IL_FALSE, op_AND_31);
	RzILOpPure *cast_ut64_34 = CAST(64, IL_FALSE, cast_ut32_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut32_40 = CAST(32, IL_FALSE, op_AND_38);
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, cast_ut32_40);
	RzILOpPure *cond_42 = ITE(op_LT_27, cast_ut64_34, cast_ut64_41);
	RzILOpPure *cast_44 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_43 = LOGAND(cond_42, cast_44);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(op_AND_43, op_MUL_45);
	RzILOpPure *op_OR_48 = LOGOR(op_AND_11, op_LSHIFT_47);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp256", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, op_OR_48);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_49, empty_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_6, seq_51);
	RzILOpEffect *for_54 = REPEAT(op_LT_2, seq_52);
	RzILOpEffect *seq_53 = SEQN(2, op_ASSIGN_0, for_54);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp257;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *op_LT_27 = SLT(cast_st64_19, cast_st64_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(DUP(cast_st32_40)), cast_st32_40);
	RzILOpPure *cond_42 = ITE(op_LT_27, cast_st64_34, cast_st64_41);
	RzILOpPure *op_AND_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_42, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos32", DUP(const_pos32), MUL(cast_45, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(op_AND_43, op_MUL_44);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_LSHIFT_46);
	RzILOpPure *op_OR_47 = LOGOR(op_AND_11, cast_48);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp257", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_49 = SETG(Rdd_assoc_tmp, op_OR_47);
	RzILOpEffect *empty_50 = EMPTY();
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_49, empty_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_6, seq_51);
	RzILOpEffect *for_54 = REPEAT(op_LT_2, seq_52);
	RzILOpEffect *seq_53 = SEQN(2, op_ASSIGN_0, for_54);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_53);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp258;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *op_OR_33 = LOGOR(op_AND_11, op_LSHIFT_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp258", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_33);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp259;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp260;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp261;
	// Declare: ut32 h_tmp262;
	// Declare: ut32 h_tmp263;
	// Declare: ut64 h_tmp264;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_19, cast_st16_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_SUB_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x3", const_pos0x3, LOGAND(cast_28, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_29 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_27, VARLP("const_pos0x3")));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(cast_37, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_35, cast_st16_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, op_SUB_42);
	RzILOpPure *op_ADD_43 = LET("const_pos1", const_pos1, ADD(cast_44, VARLP("const_pos1")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos16", DUP(const_pos16), MUL(cast_46, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rtt), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st16_50 = CAST(16, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos16", DUP(const_pos16), MUL(cast_52, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *cast_55 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_54 = LOGAND(op_RSHIFT_53, cast_55);
	RzILOpPure *cast_st16_56 = CAST(16, MSB(DUP(op_AND_54)), op_AND_54);
	RzILOpPure *op_SUB_57 = SUB(cast_st16_50, cast_st16_56);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, op_SUB_57);
	RzILOpPure *cond_58 = ITE(op_EQ_29, op_ADD_43, cast_59);
	RzILOpPure *op_RSHIFT_60 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_58, VARLP("const_pos1")));
	RzILOpPure *arg_cast_62 = CAST(64, IL_FALSE, op_RSHIFT_60);
	RzILOpPure *arg_cast_63 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_64 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_67 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp260"), VARLP("const_pos0LL")));
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos16", DUP(const_pos16), MUL(cast_69, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_68);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *cast_75 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_74 = LET("const_pos16", DUP(const_pos16), MUL(cast_75, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rss), op_MUL_74);
	RzILOpPure *cast_78 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st16_79 = CAST(16, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *op_SUB_80 = SUB(cast_st16_73, cast_st16_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_SUB_80);
	RzILOpPure *op_AND_81 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_82, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_83 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_81, VARLP("const_pos0x3")));
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_st16_95 = CAST(16, MSB(DUP(op_AND_93)), op_AND_93);
	RzILOpPure *op_SUB_96 = SUB(cast_st16_89, cast_st16_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_SUB_96);
	RzILOpPure *op_ADD_97 = LET("const_pos1", DUP(const_pos1), ADD(cast_98, VARLP("const_pos1")));
	RzILOpPure *cast_100 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_99 = LET("const_pos16", DUP(const_pos16), MUL(cast_100, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_101 = SHIFTR0(DUP(Rtt), op_MUL_99);
	RzILOpPure *cast_103 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_102 = LOGAND(op_RSHIFT_101, cast_103);
	RzILOpPure *cast_st16_104 = CAST(16, MSB(DUP(op_AND_102)), op_AND_102);
	RzILOpPure *cast_106 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_105 = LET("const_pos16", DUP(const_pos16), MUL(cast_106, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_107 = SHIFTR0(DUP(Rss), op_MUL_105);
	RzILOpPure *cast_109 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_108 = LOGAND(op_RSHIFT_107, cast_109);
	RzILOpPure *cast_st16_110 = CAST(16, MSB(DUP(op_AND_108)), op_AND_108);
	RzILOpPure *op_SUB_111 = SUB(cast_st16_104, cast_st16_110);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, op_SUB_111);
	RzILOpPure *cond_112 = ITE(op_EQ_83, op_ADD_97, cast_113);
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_112, VARLP("const_pos1")));
	RzILOpPure *cast_116 = CAST(64, MSB(DUP(op_RSHIFT_114)), op_RSHIFT_114);
	RzILOpPure *op_EQ_115 = EQ(cond_67, cast_116);
	RzILOpPure *cast_118 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_117 = LET("const_pos16", DUP(const_pos16), MUL(cast_118, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_119 = SHIFTR0(DUP(Rtt), op_MUL_117);
	RzILOpPure *cast_121 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_120 = LOGAND(op_RSHIFT_119, cast_121);
	RzILOpPure *cast_st16_122 = CAST(16, MSB(DUP(op_AND_120)), op_AND_120);
	RzILOpPure *cast_124 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_123 = LET("const_pos16", DUP(const_pos16), MUL(cast_124, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_127 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_st16_128 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_122, cast_st16_128);
	RzILOpPure *cast_131 = CAST(32, IL_FALSE, op_SUB_129);
	RzILOpPure *op_AND_130 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_131, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_132 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_130, VARLP("const_pos0x3")));
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_133 = LET("const_pos16", DUP(const_pos16), MUL(cast_134, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_135 = SHIFTR0(DUP(Rtt), op_MUL_133);
	RzILOpPure *cast_137 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_136 = LOGAND(op_RSHIFT_135, cast_137);
	RzILOpPure *cast_st16_138 = CAST(16, MSB(DUP(op_AND_136)), op_AND_136);
	RzILOpPure *cast_140 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_139 = LET("const_pos16", DUP(const_pos16), MUL(cast_140, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_143 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st16_144 = CAST(16, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *op_SUB_145 = SUB(cast_st16_138, cast_st16_144);
	RzILOpPure *cast_147 = CAST(32, IL_FALSE, op_SUB_145);
	RzILOpPure *op_ADD_146 = LET("const_pos1", DUP(const_pos1), ADD(cast_147, VARLP("const_pos1")));
	RzILOpPure *cast_149 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_148 = LET("const_pos16", DUP(const_pos16), MUL(cast_149, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_150 = SHIFTR0(DUP(Rtt), op_MUL_148);
	RzILOpPure *cast_152 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_151 = LOGAND(op_RSHIFT_150, cast_152);
	RzILOpPure *cast_st16_153 = CAST(16, MSB(DUP(op_AND_151)), op_AND_151);
	RzILOpPure *cast_155 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_154 = LET("const_pos16", DUP(const_pos16), MUL(cast_155, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rss), op_MUL_154);
	RzILOpPure *cast_158 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_157 = LOGAND(op_RSHIFT_156, cast_158);
	RzILOpPure *cast_st16_159 = CAST(16, MSB(DUP(op_AND_157)), op_AND_157);
	RzILOpPure *op_SUB_160 = SUB(cast_st16_153, cast_st16_159);
	RzILOpPure *cast_162 = CAST(32, IL_FALSE, op_SUB_160);
	RzILOpPure *cond_161 = ITE(op_EQ_132, op_ADD_146, cast_162);
	RzILOpPure *op_RSHIFT_163 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_161, VARLP("const_pos1")));
	RzILOpPure *arg_cast_174 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_175 = CAST(64, MSB(DUP(VARL("h_tmp262"))), VARL("h_tmp262"));
	RzILOpPure *arg_cast_176 = CAST(64, MSB(DUP(VARL("h_tmp263"))), VARL("h_tmp263"));
	RzILOpPure *arg_cast_177 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_182 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_181 = ITE(NON_ZERO(VARL("h_tmp261")), VARL("h_tmp264"), cast_182);
	RzILOpPure *cast_184 = CAST(32, IL_FALSE, cond_181);
	RzILOpPure *cast_187 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_186 = LET("const_pos16", DUP(const_pos16), MUL(cast_187, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_188 = SHIFTR0(DUP(Rtt), op_MUL_186);
	RzILOpPure *cast_190 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_189 = LOGAND(op_RSHIFT_188, cast_190);
	RzILOpPure *cast_st16_191 = CAST(16, MSB(DUP(op_AND_189)), op_AND_189);
	RzILOpPure *cast_193 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_192 = LET("const_pos16", DUP(const_pos16), MUL(cast_193, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_194 = SHIFTR0(DUP(Rss), op_MUL_192);
	RzILOpPure *cast_196 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_195 = LOGAND(op_RSHIFT_194, cast_196);
	RzILOpPure *cast_st16_197 = CAST(16, MSB(DUP(op_AND_195)), op_AND_195);
	RzILOpPure *op_SUB_198 = SUB(cast_st16_191, cast_st16_197);
	RzILOpPure *cast_200 = CAST(32, IL_FALSE, op_SUB_198);
	RzILOpPure *op_AND_199 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_200, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_201 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_199, VARLP("const_pos0x3")));
	RzILOpPure *cast_203 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_202 = LET("const_pos16", DUP(const_pos16), MUL(cast_203, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_204 = SHIFTR0(DUP(Rtt), op_MUL_202);
	RzILOpPure *cast_206 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_205 = LOGAND(op_RSHIFT_204, cast_206);
	RzILOpPure *cast_st16_207 = CAST(16, MSB(DUP(op_AND_205)), op_AND_205);
	RzILOpPure *cast_209 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_208 = LET("const_pos16", DUP(const_pos16), MUL(cast_209, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_210 = SHIFTR0(DUP(Rss), op_MUL_208);
	RzILOpPure *cast_212 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_211 = LOGAND(op_RSHIFT_210, cast_212);
	RzILOpPure *cast_st16_213 = CAST(16, MSB(DUP(op_AND_211)), op_AND_211);
	RzILOpPure *op_SUB_214 = SUB(cast_st16_207, cast_st16_213);
	RzILOpPure *cast_216 = CAST(32, IL_FALSE, op_SUB_214);
	RzILOpPure *op_ADD_215 = LET("const_pos1", DUP(const_pos1), ADD(cast_216, VARLP("const_pos1")));
	RzILOpPure *cast_218 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_217 = LET("const_pos16", DUP(const_pos16), MUL(cast_218, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rtt), op_MUL_217);
	RzILOpPure *cast_221 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_220 = LOGAND(op_RSHIFT_219, cast_221);
	RzILOpPure *cast_st16_222 = CAST(16, MSB(DUP(op_AND_220)), op_AND_220);
	RzILOpPure *cast_224 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_223 = LET("const_pos16", DUP(const_pos16), MUL(cast_224, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_225 = SHIFTR0(DUP(Rss), op_MUL_223);
	RzILOpPure *cast_227 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_226 = LOGAND(op_RSHIFT_225, cast_227);
	RzILOpPure *cast_st16_228 = CAST(16, MSB(DUP(op_AND_226)), op_AND_226);
	RzILOpPure *op_SUB_229 = SUB(cast_st16_222, cast_st16_228);
	RzILOpPure *cast_231 = CAST(32, IL_FALSE, op_SUB_229);
	RzILOpPure *cond_230 = ITE(op_EQ_201, op_ADD_215, cast_231);
	RzILOpPure *op_RSHIFT_232 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_230, VARLP("const_pos1")));
	RzILOpPure *op_LT_233 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_232, VARLP("const_pos0")));
	RzILOpPure *op_SUB_234 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_235 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_234));
	RzILOpPure *op_NEG_236 = NEG(op_LSHIFT_235);
	RzILOpPure *op_SUB_237 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_238 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_237));
	RzILOpPure *cast_240 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_239 = SUB(op_LSHIFT_238, cast_240);
	RzILOpPure *cond_241 = ITE(op_LT_233, op_NEG_236, op_SUB_239);
	RzILOpPure *cast_243 = CAST(64, MSB(DUP(op_RSHIFT_163)), op_RSHIFT_163);
	RzILOpPure *cond_242 = ITE(op_EQ_115, cast_243, cond_241);
	RzILOpPure *cast_245 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_244 = LOGAND(cond_242, cast_245);
	RzILOpPure *cast_ut64_246 = CAST(64, IL_FALSE, op_AND_244);
	RzILOpPure *cast_248 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_247 = LET("const_pos16", DUP(const_pos16), MUL(cast_248, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_249 = SHIFTL0(cast_ut64_246, op_MUL_247);
	RzILOpPure *op_OR_250 = LOGOR(op_AND_11, op_LSHIFT_249);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp259", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_61 = HEX_SEXTRACT64(arg_cast_62, arg_cast_63, arg_cast_64);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_65 = SETL("h_tmp260", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_66 = SEQN(2, c_call_61, op_ASSIGN_hybrid_tmp_65);
	RzILOpEffect *c_call_164 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_165 = SETL("h_tmp261", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_166 = SEQN(2, c_call_164, op_ASSIGN_hybrid_tmp_165);
	RzILOpEffect *c_call_167 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_168 = SETL("h_tmp262", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_169 = SEQN(2, c_call_167, op_ASSIGN_hybrid_tmp_168);
	RzILOpEffect *c_call_170 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_171 = SETL("h_tmp263", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_172 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_171);
	RzILOpEffect *c_call_173 = HEX_DEPOSIT64(arg_cast_174, arg_cast_175, arg_cast_176, arg_cast_177);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_178 = SETL("h_tmp264", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_179 = SEQN(2, c_call_173, op_ASSIGN_hybrid_tmp_178);
	RzILOpEffect *seq_180 = SEQN(3, seq_169, seq_172, seq_179);
	RzILOpEffect *op_ASSIGN_183 = SETG(usr_assoc_tmp, cast_184);
	RzILOpEffect *seq_185 = SEQN(3, seq_166, seq_180, op_ASSIGN_183);
	RzILOpEffect *op_ASSIGN_251 = SETG(Rdd_assoc_tmp, op_OR_250);
	RzILOpEffect *seq_252 = SEQN(2, seq_66, op_ASSIGN_251);
	RzILOpEffect *empty_253 = EMPTY();
	RzILOpEffect *seq_254 = SEQN(2, seq_252, empty_253);
	RzILOpEffect *seq_255 = SEQN(2, seq_6, seq_254);
	RzILOpEffect *for_257 = REPEAT(op_LT_2, seq_255);
	RzILOpEffect *seq_256 = SEQN(2, op_ASSIGN_0, for_257);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_256, seq_185);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp265;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp266;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp267;
	// Declare: ut32 h_tmp268;
	// Declare: ut32 h_tmp269;
	// Declare: ut64 h_tmp270;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_19, cast_st16_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_SUB_26);
	RzILOpPure *op_ADD_27 = LET("const_pos1", const_pos1, ADD(cast_28, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_29 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_27, VARLP("const_pos1")));
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, op_RSHIFT_29);
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_36 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp266"), VARLP("const_pos0LL")));
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_st16_42 = CAST(16, MSB(DUP(op_AND_40)), op_AND_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st16_48 = CAST(16, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *op_SUB_49 = SUB(cast_st16_42, cast_st16_48);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, op_SUB_49);
	RzILOpPure *op_ADD_50 = LET("const_pos1", DUP(const_pos1), ADD(cast_51, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_52 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_50, VARLP("const_pos1")));
	RzILOpPure *cast_54 = CAST(64, MSB(DUP(op_RSHIFT_52)), op_RSHIFT_52);
	RzILOpPure *op_EQ_53 = EQ(cond_36, cast_54);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_st16_60 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_61 = LET("const_pos16", DUP(const_pos16), MUL(cast_62, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_61);
	RzILOpPure *cast_65 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_64 = LOGAND(op_RSHIFT_63, cast_65);
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_64)), op_AND_64);
	RzILOpPure *op_SUB_67 = SUB(cast_st16_60, cast_st16_66);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, op_SUB_67);
	RzILOpPure *op_ADD_68 = LET("const_pos1", DUP(const_pos1), ADD(cast_69, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_70 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_68, VARLP("const_pos1")));
	RzILOpPure *arg_cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_82 = CAST(64, MSB(DUP(VARL("h_tmp268"))), VARL("h_tmp268"));
	RzILOpPure *arg_cast_83 = CAST(64, MSB(DUP(VARL("h_tmp269"))), VARL("h_tmp269"));
	RzILOpPure *arg_cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_89 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_88 = ITE(NON_ZERO(VARL("h_tmp267")), VARL("h_tmp270"), cast_89);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, cond_88);
	RzILOpPure *cast_94 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_93 = LET("const_pos16", DUP(const_pos16), MUL(cast_94, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rtt), op_MUL_93);
	RzILOpPure *cast_97 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_96 = LOGAND(op_RSHIFT_95, cast_97);
	RzILOpPure *cast_st16_98 = CAST(16, MSB(DUP(op_AND_96)), op_AND_96);
	RzILOpPure *cast_100 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_99 = LET("const_pos16", DUP(const_pos16), MUL(cast_100, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_101 = SHIFTR0(DUP(Rss), op_MUL_99);
	RzILOpPure *cast_103 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_102 = LOGAND(op_RSHIFT_101, cast_103);
	RzILOpPure *cast_st16_104 = CAST(16, MSB(DUP(op_AND_102)), op_AND_102);
	RzILOpPure *op_SUB_105 = SUB(cast_st16_98, cast_st16_104);
	RzILOpPure *cast_107 = CAST(32, IL_FALSE, op_SUB_105);
	RzILOpPure *op_ADD_106 = LET("const_pos1", DUP(const_pos1), ADD(cast_107, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_108 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_106, VARLP("const_pos1")));
	RzILOpPure *op_LT_109 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_108, VARLP("const_pos0")));
	RzILOpPure *op_SUB_110 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_111 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_110));
	RzILOpPure *op_NEG_112 = NEG(op_LSHIFT_111);
	RzILOpPure *op_SUB_113 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_114 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_113));
	RzILOpPure *cast_116 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_115 = SUB(op_LSHIFT_114, cast_116);
	RzILOpPure *cond_117 = ITE(op_LT_109, op_NEG_112, op_SUB_115);
	RzILOpPure *cast_119 = CAST(64, MSB(DUP(op_RSHIFT_70)), op_RSHIFT_70);
	RzILOpPure *cond_118 = ITE(op_EQ_53, cast_119, cond_117);
	RzILOpPure *cast_121 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_120 = LOGAND(cond_118, cast_121);
	RzILOpPure *cast_ut64_122 = CAST(64, IL_FALSE, op_AND_120);
	RzILOpPure *cast_124 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_123 = LET("const_pos16", DUP(const_pos16), MUL(cast_124, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_125 = SHIFTL0(cast_ut64_122, op_MUL_123);
	RzILOpPure *op_OR_126 = LOGOR(op_AND_11, op_LSHIFT_125);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp265", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp266", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *c_call_71 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_72 = SETL("h_tmp267", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_73 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_72);
	RzILOpEffect *c_call_74 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp268", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *c_call_77 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_78 = SETL("h_tmp269", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_79 = SEQN(2, c_call_77, op_ASSIGN_hybrid_tmp_78);
	RzILOpEffect *c_call_80 = HEX_DEPOSIT64(arg_cast_81, arg_cast_82, arg_cast_83, arg_cast_84);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_85 = SETL("h_tmp270", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_86 = SEQN(2, c_call_80, op_ASSIGN_hybrid_tmp_85);
	RzILOpEffect *seq_87 = SEQN(3, seq_76, seq_79, seq_86);
	RzILOpEffect *op_ASSIGN_90 = SETG(usr_assoc_tmp, cast_91);
	RzILOpEffect *seq_92 = SEQN(3, seq_73, seq_87, op_ASSIGN_90);
	RzILOpEffect *op_ASSIGN_127 = SETG(Rdd_assoc_tmp, op_OR_126);
	RzILOpEffect *seq_128 = SEQN(2, seq_35, op_ASSIGN_127);
	RzILOpEffect *empty_129 = EMPTY();
	RzILOpEffect *seq_130 = SEQN(2, seq_128, empty_129);
	RzILOpEffect *seq_131 = SEQN(2, seq_6, seq_130);
	RzILOpEffect *for_133 = REPEAT(op_LT_2, seq_131);
	RzILOpEffect *seq_132 = SEQN(2, op_ASSIGN_0, for_133);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_132, seq_92);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp271;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp272;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp273;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, cast_st64_20);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp272"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_28 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(Rss, op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st32_34 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_35 = CAST(64, MSB(DUP(cast_st32_34)), cast_st32_34);
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, cast_st64_35);
	RzILOpPure *arg_cast_38 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_39 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_42 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_28, VARL("h_tmp273"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_43 = SUB(cond_27, cond_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_43, VARLP("const_pos1")));
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos32", DUP(const_pos32), MUL(cast_47, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_45, op_MUL_46);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_LSHIFT_48);
	RzILOpPure *op_OR_49 = LOGOR(op_AND_11, cast_50);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp271", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_21 = HEX_SEXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp272", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *c_call_36 = HEX_SEXTRACT64(arg_cast_37, arg_cast_38, arg_cast_39);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp273", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *op_ASSIGN_51 = SETG(Rdd_assoc_tmp, op_OR_49);
	RzILOpEffect *seq_52 = SEQN(3, seq_26, seq_41, op_ASSIGN_51);
	RzILOpEffect *empty_53 = EMPTY();
	RzILOpEffect *seq_54 = SEQN(2, seq_52, empty_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_6, seq_54);
	RzILOpEffect *for_57 = REPEAT(op_LT_2, seq_55);
	RzILOpEffect *seq_56 = SEQN(2, op_ASSIGN_0, for_57);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_56);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp274;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp275;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp276;
	RzILOpPure *const_pos0x3 = UN(32, 0x3);
	// Declare: st64 h_tmp277;
	// Declare: st64 h_tmp278;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp279;
	// Declare: st64 h_tmp280;
	// Declare: st64 h_tmp281;
	// Declare: st64 h_tmp282;
	// Declare: st64 h_tmp283;
	// Declare: st64 h_tmp284;
	// Declare: st64 h_tmp285;
	// Declare: st64 h_tmp286;
	// Declare: st64 h_tmp287;
	// Declare: st64 h_tmp288;
	// Declare: st64 h_tmp289;
	// Declare: st64 h_tmp290;
	// Declare: st64 h_tmp291;
	// Declare: st64 h_tmp292;
	// Declare: st64 h_tmp293;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp294;
	// Declare: ut32 h_tmp295;
	// Declare: ut32 h_tmp296;
	// Declare: ut64 h_tmp297;
	// Declare: st64 h_tmp298;
	// Declare: st64 h_tmp299;
	// Declare: st64 h_tmp300;
	// Declare: st64 h_tmp301;
	// Declare: st64 h_tmp302;
	// Declare: st64 h_tmp303;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_14 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos32", DUP(const_pos32), MUL(cast_16, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *arg_cast_23 = CAST(64, IL_FALSE, cast_st64_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_28 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_14, VARL("h_tmp275"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_29 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos32", DUP(const_pos32), MUL(cast_31, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(Rss, op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *arg_cast_38 = CAST(64, IL_FALSE, cast_st64_36);
	RzILOpPure *arg_cast_39 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_40 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_43 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp276"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_44 = SUB(cond_28, cond_43);
	RzILOpPure *cast_46 = LET("const_pos0x3", const_pos0x3, CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_45 = LOGAND(op_SUB_44, cast_46);
	RzILOpPure *cast_48 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_47 = EQ(op_AND_45, cast_48);
	RzILOpPure *op_NE_49 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(cast_51, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st32_55 = CAST(32, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(DUP(cast_st32_55)), cast_st32_55);
	RzILOpPure *arg_cast_58 = CAST(64, IL_FALSE, cast_st64_56);
	RzILOpPure *arg_cast_59 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_60 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_63 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_49, VARL("h_tmp277"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_64 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzILOpPure *cast_69 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_68 = LOGAND(op_RSHIFT_67, cast_69);
	RzILOpPure *cast_st32_70 = CAST(32, MSB(DUP(op_AND_68)), op_AND_68);
	RzILOpPure *cast_st64_71 = CAST(64, MSB(DUP(cast_st32_70)), cast_st32_70);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, cast_st64_71);
	RzILOpPure *arg_cast_74 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_75 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_78 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_64, VARL("h_tmp278"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_79 = SUB(cond_63, cond_78);
	RzILOpPure *cast_81 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_80 = ADD(op_SUB_79, cast_81);
	RzILOpPure *op_NE_82 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos32", DUP(const_pos32), MUL(cast_84, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *cast_87 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st32_88 = CAST(32, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(DUP(cast_st32_88)), cast_st32_88);
	RzILOpPure *arg_cast_91 = CAST(64, IL_FALSE, cast_st64_89);
	RzILOpPure *arg_cast_92 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_93 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_96 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_82, VARL("h_tmp279"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_97 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_98 = LET("const_pos32", DUP(const_pos32), MUL(cast_99, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rss), op_MUL_98);
	RzILOpPure *cast_102 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_101 = LOGAND(op_RSHIFT_100, cast_102);
	RzILOpPure *cast_st32_103 = CAST(32, MSB(DUP(op_AND_101)), op_AND_101);
	RzILOpPure *cast_st64_104 = CAST(64, MSB(DUP(cast_st32_103)), cast_st32_103);
	RzILOpPure *arg_cast_106 = CAST(64, IL_FALSE, cast_st64_104);
	RzILOpPure *arg_cast_107 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_108 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_111 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_97, VARL("h_tmp280"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_112 = SUB(cond_96, cond_111);
	RzILOpPure *cond_113 = ITE(op_EQ_47, op_ADD_80, op_SUB_112);
	RzILOpPure *op_RSHIFT_114 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_113, VARLP("const_pos1")));
	RzILOpPure *arg_cast_116 = CAST(64, IL_FALSE, op_RSHIFT_114);
	RzILOpPure *arg_cast_117 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_118 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_122 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_13, VARL("h_tmp281"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_123 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_125 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_124 = LET("const_pos32", DUP(const_pos32), MUL(cast_125, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_128 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_127 = LOGAND(op_RSHIFT_126, cast_128);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(DUP(op_AND_127)), op_AND_127);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(DUP(cast_st32_129)), cast_st32_129);
	RzILOpPure *arg_cast_132 = CAST(64, IL_FALSE, cast_st64_130);
	RzILOpPure *arg_cast_133 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_134 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_137 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_123, VARL("h_tmp282"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_138 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_140 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_139 = LET("const_pos32", DUP(const_pos32), MUL(cast_140, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_143 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st32_144 = CAST(32, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *cast_st64_145 = CAST(64, MSB(DUP(cast_st32_144)), cast_st32_144);
	RzILOpPure *arg_cast_147 = CAST(64, IL_FALSE, cast_st64_145);
	RzILOpPure *arg_cast_148 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_149 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_152 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_138, VARL("h_tmp283"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_153 = SUB(cond_137, cond_152);
	RzILOpPure *cast_155 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_154 = LOGAND(op_SUB_153, cast_155);
	RzILOpPure *cast_157 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_156 = EQ(op_AND_154, cast_157);
	RzILOpPure *op_NE_158 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_160 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_159 = LET("const_pos32", DUP(const_pos32), MUL(cast_160, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_161 = SHIFTR0(DUP(Rtt), op_MUL_159);
	RzILOpPure *cast_163 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_162 = LOGAND(op_RSHIFT_161, cast_163);
	RzILOpPure *cast_st32_164 = CAST(32, MSB(DUP(op_AND_162)), op_AND_162);
	RzILOpPure *cast_st64_165 = CAST(64, MSB(DUP(cast_st32_164)), cast_st32_164);
	RzILOpPure *arg_cast_167 = CAST(64, IL_FALSE, cast_st64_165);
	RzILOpPure *arg_cast_168 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_169 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_172 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_158, VARL("h_tmp284"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_173 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_175 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_174 = LET("const_pos32", DUP(const_pos32), MUL(cast_175, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_176 = SHIFTR0(DUP(Rss), op_MUL_174);
	RzILOpPure *cast_178 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_177 = LOGAND(op_RSHIFT_176, cast_178);
	RzILOpPure *cast_st32_179 = CAST(32, MSB(DUP(op_AND_177)), op_AND_177);
	RzILOpPure *cast_st64_180 = CAST(64, MSB(DUP(cast_st32_179)), cast_st32_179);
	RzILOpPure *arg_cast_182 = CAST(64, IL_FALSE, cast_st64_180);
	RzILOpPure *arg_cast_183 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_184 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_187 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_173, VARL("h_tmp285"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_188 = SUB(cond_172, cond_187);
	RzILOpPure *cast_190 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_189 = ADD(op_SUB_188, cast_190);
	RzILOpPure *op_NE_191 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_193 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_192 = LET("const_pos32", DUP(const_pos32), MUL(cast_193, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_194 = SHIFTR0(DUP(Rtt), op_MUL_192);
	RzILOpPure *cast_196 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_195 = LOGAND(op_RSHIFT_194, cast_196);
	RzILOpPure *cast_st32_197 = CAST(32, MSB(DUP(op_AND_195)), op_AND_195);
	RzILOpPure *cast_st64_198 = CAST(64, MSB(DUP(cast_st32_197)), cast_st32_197);
	RzILOpPure *arg_cast_200 = CAST(64, IL_FALSE, cast_st64_198);
	RzILOpPure *arg_cast_201 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_202 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_205 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_191, VARL("h_tmp286"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_206 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_208 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_207 = LET("const_pos32", DUP(const_pos32), MUL(cast_208, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_209 = SHIFTR0(DUP(Rss), op_MUL_207);
	RzILOpPure *cast_211 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_210 = LOGAND(op_RSHIFT_209, cast_211);
	RzILOpPure *cast_st32_212 = CAST(32, MSB(DUP(op_AND_210)), op_AND_210);
	RzILOpPure *cast_st64_213 = CAST(64, MSB(DUP(cast_st32_212)), cast_st32_212);
	RzILOpPure *arg_cast_215 = CAST(64, IL_FALSE, cast_st64_213);
	RzILOpPure *arg_cast_216 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_217 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_220 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_206, VARL("h_tmp287"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_221 = SUB(cond_205, cond_220);
	RzILOpPure *cond_222 = ITE(op_EQ_156, op_ADD_189, op_SUB_221);
	RzILOpPure *op_RSHIFT_223 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_222, VARLP("const_pos1")));
	RzILOpPure *op_EQ_224 = EQ(cond_122, op_RSHIFT_223);
	RzILOpPure *op_NE_225 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_227 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_226 = LET("const_pos32", DUP(const_pos32), MUL(cast_227, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_228 = SHIFTR0(DUP(Rtt), op_MUL_226);
	RzILOpPure *cast_230 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_229 = LOGAND(op_RSHIFT_228, cast_230);
	RzILOpPure *cast_st32_231 = CAST(32, MSB(DUP(op_AND_229)), op_AND_229);
	RzILOpPure *cast_st64_232 = CAST(64, MSB(DUP(cast_st32_231)), cast_st32_231);
	RzILOpPure *arg_cast_234 = CAST(64, IL_FALSE, cast_st64_232);
	RzILOpPure *arg_cast_235 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_236 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_239 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_225, VARL("h_tmp288"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_240 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_242 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_241 = LET("const_pos32", DUP(const_pos32), MUL(cast_242, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_243 = SHIFTR0(DUP(Rss), op_MUL_241);
	RzILOpPure *cast_245 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_244 = LOGAND(op_RSHIFT_243, cast_245);
	RzILOpPure *cast_st32_246 = CAST(32, MSB(DUP(op_AND_244)), op_AND_244);
	RzILOpPure *cast_st64_247 = CAST(64, MSB(DUP(cast_st32_246)), cast_st32_246);
	RzILOpPure *arg_cast_249 = CAST(64, IL_FALSE, cast_st64_247);
	RzILOpPure *arg_cast_250 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_251 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_254 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_240, VARL("h_tmp289"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_255 = SUB(cond_239, cond_254);
	RzILOpPure *cast_257 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_256 = LOGAND(op_SUB_255, cast_257);
	RzILOpPure *cast_259 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_258 = EQ(op_AND_256, cast_259);
	RzILOpPure *op_NE_260 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_262 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_261 = LET("const_pos32", DUP(const_pos32), MUL(cast_262, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_263 = SHIFTR0(DUP(Rtt), op_MUL_261);
	RzILOpPure *cast_265 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_264 = LOGAND(op_RSHIFT_263, cast_265);
	RzILOpPure *cast_st32_266 = CAST(32, MSB(DUP(op_AND_264)), op_AND_264);
	RzILOpPure *cast_st64_267 = CAST(64, MSB(DUP(cast_st32_266)), cast_st32_266);
	RzILOpPure *arg_cast_269 = CAST(64, IL_FALSE, cast_st64_267);
	RzILOpPure *arg_cast_270 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_271 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_274 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_260, VARL("h_tmp290"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_275 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_277 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_276 = LET("const_pos32", DUP(const_pos32), MUL(cast_277, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_278 = SHIFTR0(DUP(Rss), op_MUL_276);
	RzILOpPure *cast_280 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_279 = LOGAND(op_RSHIFT_278, cast_280);
	RzILOpPure *cast_st32_281 = CAST(32, MSB(DUP(op_AND_279)), op_AND_279);
	RzILOpPure *cast_st64_282 = CAST(64, MSB(DUP(cast_st32_281)), cast_st32_281);
	RzILOpPure *arg_cast_284 = CAST(64, IL_FALSE, cast_st64_282);
	RzILOpPure *arg_cast_285 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_286 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_289 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_275, VARL("h_tmp291"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_290 = SUB(cond_274, cond_289);
	RzILOpPure *cast_292 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_291 = ADD(op_SUB_290, cast_292);
	RzILOpPure *op_NE_293 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_295 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_294 = LET("const_pos32", DUP(const_pos32), MUL(cast_295, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_296 = SHIFTR0(DUP(Rtt), op_MUL_294);
	RzILOpPure *cast_298 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_297 = LOGAND(op_RSHIFT_296, cast_298);
	RzILOpPure *cast_st32_299 = CAST(32, MSB(DUP(op_AND_297)), op_AND_297);
	RzILOpPure *cast_st64_300 = CAST(64, MSB(DUP(cast_st32_299)), cast_st32_299);
	RzILOpPure *arg_cast_302 = CAST(64, IL_FALSE, cast_st64_300);
	RzILOpPure *arg_cast_303 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_304 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_307 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_293, VARL("h_tmp292"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_308 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_310 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_309 = LET("const_pos32", DUP(const_pos32), MUL(cast_310, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_311 = SHIFTR0(DUP(Rss), op_MUL_309);
	RzILOpPure *cast_313 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_312 = LOGAND(op_RSHIFT_311, cast_313);
	RzILOpPure *cast_st32_314 = CAST(32, MSB(DUP(op_AND_312)), op_AND_312);
	RzILOpPure *cast_st64_315 = CAST(64, MSB(DUP(cast_st32_314)), cast_st32_314);
	RzILOpPure *arg_cast_317 = CAST(64, IL_FALSE, cast_st64_315);
	RzILOpPure *arg_cast_318 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_319 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_322 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_308, VARL("h_tmp293"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_323 = SUB(cond_307, cond_322);
	RzILOpPure *cond_324 = ITE(op_EQ_258, op_ADD_291, op_SUB_323);
	RzILOpPure *op_RSHIFT_325 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_324, VARLP("const_pos1")));
	RzILOpPure *arg_cast_336 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_337 = CAST(64, MSB(DUP(VARL("h_tmp295"))), VARL("h_tmp295"));
	RzILOpPure *arg_cast_338 = CAST(64, MSB(DUP(VARL("h_tmp296"))), VARL("h_tmp296"));
	RzILOpPure *arg_cast_339 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_344 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_343 = ITE(NON_ZERO(VARL("h_tmp294")), VARL("h_tmp297"), cast_344);
	RzILOpPure *cast_346 = CAST(32, IL_FALSE, cond_343);
	RzILOpPure *op_NE_348 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_350 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_349 = LET("const_pos32", DUP(const_pos32), MUL(cast_350, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_351 = SHIFTR0(DUP(Rtt), op_MUL_349);
	RzILOpPure *cast_353 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_352 = LOGAND(op_RSHIFT_351, cast_353);
	RzILOpPure *cast_st32_354 = CAST(32, MSB(DUP(op_AND_352)), op_AND_352);
	RzILOpPure *cast_st64_355 = CAST(64, MSB(DUP(cast_st32_354)), cast_st32_354);
	RzILOpPure *arg_cast_357 = CAST(64, IL_FALSE, cast_st64_355);
	RzILOpPure *arg_cast_358 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_359 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_362 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_348, VARL("h_tmp298"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_363 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_365 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_364 = LET("const_pos32", DUP(const_pos32), MUL(cast_365, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_366 = SHIFTR0(DUP(Rss), op_MUL_364);
	RzILOpPure *cast_368 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_367 = LOGAND(op_RSHIFT_366, cast_368);
	RzILOpPure *cast_st32_369 = CAST(32, MSB(DUP(op_AND_367)), op_AND_367);
	RzILOpPure *cast_st64_370 = CAST(64, MSB(DUP(cast_st32_369)), cast_st32_369);
	RzILOpPure *arg_cast_372 = CAST(64, IL_FALSE, cast_st64_370);
	RzILOpPure *arg_cast_373 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_374 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_377 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_363, VARL("h_tmp299"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_378 = SUB(cond_362, cond_377);
	RzILOpPure *cast_380 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_379 = LOGAND(op_SUB_378, cast_380);
	RzILOpPure *cast_382 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_381 = EQ(op_AND_379, cast_382);
	RzILOpPure *op_NE_383 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_385 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_384 = LET("const_pos32", DUP(const_pos32), MUL(cast_385, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_386 = SHIFTR0(DUP(Rtt), op_MUL_384);
	RzILOpPure *cast_388 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_387 = LOGAND(op_RSHIFT_386, cast_388);
	RzILOpPure *cast_st32_389 = CAST(32, MSB(DUP(op_AND_387)), op_AND_387);
	RzILOpPure *cast_st64_390 = CAST(64, MSB(DUP(cast_st32_389)), cast_st32_389);
	RzILOpPure *arg_cast_392 = CAST(64, IL_FALSE, cast_st64_390);
	RzILOpPure *arg_cast_393 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_394 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_397 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_383, VARL("h_tmp300"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_398 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_400 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_399 = LET("const_pos32", DUP(const_pos32), MUL(cast_400, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_401 = SHIFTR0(DUP(Rss), op_MUL_399);
	RzILOpPure *cast_403 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_402 = LOGAND(op_RSHIFT_401, cast_403);
	RzILOpPure *cast_st32_404 = CAST(32, MSB(DUP(op_AND_402)), op_AND_402);
	RzILOpPure *cast_st64_405 = CAST(64, MSB(DUP(cast_st32_404)), cast_st32_404);
	RzILOpPure *arg_cast_407 = CAST(64, IL_FALSE, cast_st64_405);
	RzILOpPure *arg_cast_408 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_409 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_412 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_398, VARL("h_tmp301"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_413 = SUB(cond_397, cond_412);
	RzILOpPure *cast_415 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_414 = ADD(op_SUB_413, cast_415);
	RzILOpPure *op_NE_416 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_418 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_417 = LET("const_pos32", DUP(const_pos32), MUL(cast_418, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_419 = SHIFTR0(DUP(Rtt), op_MUL_417);
	RzILOpPure *cast_421 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_420 = LOGAND(op_RSHIFT_419, cast_421);
	RzILOpPure *cast_st32_422 = CAST(32, MSB(DUP(op_AND_420)), op_AND_420);
	RzILOpPure *cast_st64_423 = CAST(64, MSB(DUP(cast_st32_422)), cast_st32_422);
	RzILOpPure *arg_cast_425 = CAST(64, IL_FALSE, cast_st64_423);
	RzILOpPure *arg_cast_426 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_427 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_430 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_416, VARL("h_tmp302"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_431 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_433 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_432 = LET("const_pos32", DUP(const_pos32), MUL(cast_433, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_434 = SHIFTR0(DUP(Rss), op_MUL_432);
	RzILOpPure *cast_436 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_435 = LOGAND(op_RSHIFT_434, cast_436);
	RzILOpPure *cast_st32_437 = CAST(32, MSB(DUP(op_AND_435)), op_AND_435);
	RzILOpPure *cast_st64_438 = CAST(64, MSB(DUP(cast_st32_437)), cast_st32_437);
	RzILOpPure *arg_cast_440 = CAST(64, IL_FALSE, cast_st64_438);
	RzILOpPure *arg_cast_441 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_442 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_445 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_431, VARL("h_tmp303"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_446 = SUB(cond_430, cond_445);
	RzILOpPure *cond_447 = ITE(op_EQ_381, op_ADD_414, op_SUB_446);
	RzILOpPure *op_RSHIFT_448 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_447, VARLP("const_pos1")));
	RzILOpPure *cast_450 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_449 = SLT(op_RSHIFT_448, cast_450);
	RzILOpPure *op_SUB_451 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_452 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_451));
	RzILOpPure *op_NEG_453 = NEG(op_LSHIFT_452);
	RzILOpPure *op_SUB_454 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_455 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_454));
	RzILOpPure *cast_457 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_456 = SUB(op_LSHIFT_455, cast_457);
	RzILOpPure *cond_458 = ITE(op_LT_449, op_NEG_453, op_SUB_456);
	RzILOpPure *cond_459 = ITE(op_EQ_224, op_RSHIFT_325, cond_458);
	RzILOpPure *op_AND_460 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_459, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_462 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_461 = LET("const_pos32", DUP(const_pos32), MUL(cast_462, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_463 = SHIFTL0(op_AND_460, op_MUL_461);
	RzILOpPure *cast_465 = CAST(64, IL_FALSE, op_LSHIFT_463);
	RzILOpPure *op_OR_464 = LOGOR(op_AND_11, cast_465);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp274", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(arg_cast_23, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp275", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *c_call_37 = HEX_SEXTRACT64(arg_cast_38, arg_cast_39, arg_cast_40);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp276", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_57 = HEX_SEXTRACT64(arg_cast_58, arg_cast_59, arg_cast_60);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp277", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_72 = HEX_SEXTRACT64(arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp278", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *c_call_90 = HEX_SEXTRACT64(arg_cast_91, arg_cast_92, arg_cast_93);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_94 = SETL("h_tmp279", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_95 = SEQN(2, c_call_90, op_ASSIGN_hybrid_tmp_94);
	RzILOpEffect *c_call_105 = HEX_SEXTRACT64(arg_cast_106, arg_cast_107, arg_cast_108);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_109 = SETL("h_tmp280", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_110 = SEQN(2, c_call_105, op_ASSIGN_hybrid_tmp_109);
	RzILOpEffect *c_call_115 = HEX_SEXTRACT64(arg_cast_116, arg_cast_117, arg_cast_118);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp281", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *seq_121 = SEQN(7, seq_27, seq_42, seq_62, seq_77, seq_95, seq_110, seq_120);
	RzILOpEffect *c_call_131 = HEX_SEXTRACT64(arg_cast_132, arg_cast_133, arg_cast_134);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_135 = SETL("h_tmp282", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_136 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_135);
	RzILOpEffect *c_call_146 = HEX_SEXTRACT64(arg_cast_147, arg_cast_148, arg_cast_149);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_150 = SETL("h_tmp283", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_151 = SEQN(2, c_call_146, op_ASSIGN_hybrid_tmp_150);
	RzILOpEffect *c_call_166 = HEX_SEXTRACT64(arg_cast_167, arg_cast_168, arg_cast_169);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_170 = SETL("h_tmp284", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_171 = SEQN(2, c_call_166, op_ASSIGN_hybrid_tmp_170);
	RzILOpEffect *c_call_181 = HEX_SEXTRACT64(arg_cast_182, arg_cast_183, arg_cast_184);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_185 = SETL("h_tmp285", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_186 = SEQN(2, c_call_181, op_ASSIGN_hybrid_tmp_185);
	RzILOpEffect *c_call_199 = HEX_SEXTRACT64(arg_cast_200, arg_cast_201, arg_cast_202);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_203 = SETL("h_tmp286", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_204 = SEQN(2, c_call_199, op_ASSIGN_hybrid_tmp_203);
	RzILOpEffect *c_call_214 = HEX_SEXTRACT64(arg_cast_215, arg_cast_216, arg_cast_217);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_218 = SETL("h_tmp287", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_219 = SEQN(2, c_call_214, op_ASSIGN_hybrid_tmp_218);
	RzILOpEffect *c_call_233 = HEX_SEXTRACT64(arg_cast_234, arg_cast_235, arg_cast_236);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_237 = SETL("h_tmp288", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_238 = SEQN(2, c_call_233, op_ASSIGN_hybrid_tmp_237);
	RzILOpEffect *c_call_248 = HEX_SEXTRACT64(arg_cast_249, arg_cast_250, arg_cast_251);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_252 = SETL("h_tmp289", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_253 = SEQN(2, c_call_248, op_ASSIGN_hybrid_tmp_252);
	RzILOpEffect *c_call_268 = HEX_SEXTRACT64(arg_cast_269, arg_cast_270, arg_cast_271);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_272 = SETL("h_tmp290", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_273 = SEQN(2, c_call_268, op_ASSIGN_hybrid_tmp_272);
	RzILOpEffect *c_call_283 = HEX_SEXTRACT64(arg_cast_284, arg_cast_285, arg_cast_286);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_287 = SETL("h_tmp291", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_288 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_287);
	RzILOpEffect *c_call_301 = HEX_SEXTRACT64(arg_cast_302, arg_cast_303, arg_cast_304);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_305 = SETL("h_tmp292", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_306 = SEQN(2, c_call_301, op_ASSIGN_hybrid_tmp_305);
	RzILOpEffect *c_call_316 = HEX_SEXTRACT64(arg_cast_317, arg_cast_318, arg_cast_319);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_320 = SETL("h_tmp293", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_321 = SEQN(2, c_call_316, op_ASSIGN_hybrid_tmp_320);
	RzILOpEffect *c_call_326 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_327 = SETL("h_tmp294", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_328 = SEQN(2, c_call_326, op_ASSIGN_hybrid_tmp_327);
	RzILOpEffect *c_call_329 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_330 = SETL("h_tmp295", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_331 = SEQN(2, c_call_329, op_ASSIGN_hybrid_tmp_330);
	RzILOpEffect *c_call_332 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_333 = SETL("h_tmp296", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_334 = SEQN(2, c_call_332, op_ASSIGN_hybrid_tmp_333);
	RzILOpEffect *c_call_335 = HEX_DEPOSIT64(arg_cast_336, arg_cast_337, arg_cast_338, arg_cast_339);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_340 = SETL("h_tmp297", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_341 = SEQN(2, c_call_335, op_ASSIGN_hybrid_tmp_340);
	RzILOpEffect *seq_342 = SEQN(3, seq_331, seq_334, seq_341);
	RzILOpEffect *op_ASSIGN_345 = SETG(usr_assoc_tmp, cast_346);
	RzILOpEffect *seq_347 = SEQN(3, seq_328, seq_342, op_ASSIGN_345);
	RzILOpEffect *c_call_356 = HEX_SEXTRACT64(arg_cast_357, arg_cast_358, arg_cast_359);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_360 = SETL("h_tmp298", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_361 = SEQN(2, c_call_356, op_ASSIGN_hybrid_tmp_360);
	RzILOpEffect *c_call_371 = HEX_SEXTRACT64(arg_cast_372, arg_cast_373, arg_cast_374);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_375 = SETL("h_tmp299", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_376 = SEQN(2, c_call_371, op_ASSIGN_hybrid_tmp_375);
	RzILOpEffect *c_call_391 = HEX_SEXTRACT64(arg_cast_392, arg_cast_393, arg_cast_394);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_395 = SETL("h_tmp300", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_396 = SEQN(2, c_call_391, op_ASSIGN_hybrid_tmp_395);
	RzILOpEffect *c_call_406 = HEX_SEXTRACT64(arg_cast_407, arg_cast_408, arg_cast_409);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_410 = SETL("h_tmp301", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_411 = SEQN(2, c_call_406, op_ASSIGN_hybrid_tmp_410);
	RzILOpEffect *c_call_424 = HEX_SEXTRACT64(arg_cast_425, arg_cast_426, arg_cast_427);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_428 = SETL("h_tmp302", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_429 = SEQN(2, c_call_424, op_ASSIGN_hybrid_tmp_428);
	RzILOpEffect *c_call_439 = HEX_SEXTRACT64(arg_cast_440, arg_cast_441, arg_cast_442);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_443 = SETL("h_tmp303", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_444 = SEQN(2, c_call_439, op_ASSIGN_hybrid_tmp_443);
	RzILOpEffect *op_ASSIGN_466 = SETG(Rdd_assoc_tmp, op_OR_464);
	RzILOpEffect *seq_467 = SEQN(20, seq_121, seq_136, seq_151, seq_171, seq_186, seq_204, seq_219, seq_238, seq_253, seq_273, seq_288, seq_306, seq_321, seq_361, seq_376, seq_396, seq_411, seq_429, seq_444, op_ASSIGN_466);
	RzILOpEffect *empty_468 = EMPTY();
	RzILOpEffect *seq_469 = SEQN(2, seq_467, empty_468);
	RzILOpEffect *seq_470 = SEQN(2, seq_6, seq_469);
	RzILOpEffect *for_472 = REPEAT(op_LT_2, seq_470);
	RzILOpEffect *seq_471 = SEQN(2, op_ASSIGN_0, for_472);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_471, seq_347);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp304;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st64 h_tmp305;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp306;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp307;
	// Declare: st64 h_tmp308;
	// Declare: st64 h_tmp309;
	// Declare: st64 h_tmp310;
	// Declare: st64 h_tmp311;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp312;
	// Declare: ut32 h_tmp313;
	// Declare: ut32 h_tmp314;
	// Declare: ut64 h_tmp315;
	// Declare: st64 h_tmp316;
	// Declare: st64 h_tmp317;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_14 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_15 = LET("const_pos32", DUP(const_pos32), MUL(cast_16, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_19 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *arg_cast_23 = CAST(64, IL_FALSE, cast_st64_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_28 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_14, VARL("h_tmp305"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_29 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos32", DUP(const_pos32), MUL(cast_31, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(Rss, op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *arg_cast_38 = CAST(64, IL_FALSE, cast_st64_36);
	RzILOpPure *arg_cast_39 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_40 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_43 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp306"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_44 = SUB(cond_28, cond_43);
	RzILOpPure *cast_46 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_45 = ADD(op_SUB_44, cast_46);
	RzILOpPure *op_RSHIFT_47 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_45, VARLP("const_pos1")));
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, op_RSHIFT_47);
	RzILOpPure *arg_cast_50 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_51 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_55 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_13, VARL("h_tmp307"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_56 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_57 = LET("const_pos32", DUP(const_pos32), MUL(cast_58, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rtt), op_MUL_57);
	RzILOpPure *cast_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_60 = LOGAND(op_RSHIFT_59, cast_61);
	RzILOpPure *cast_st32_62 = CAST(32, MSB(DUP(op_AND_60)), op_AND_60);
	RzILOpPure *cast_st64_63 = CAST(64, MSB(DUP(cast_st32_62)), cast_st32_62);
	RzILOpPure *arg_cast_65 = CAST(64, IL_FALSE, cast_st64_63);
	RzILOpPure *arg_cast_66 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_67 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_70 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_56, VARL("h_tmp308"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_71 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_72 = LET("const_pos32", DUP(const_pos32), MUL(cast_73, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rss), op_MUL_72);
	RzILOpPure *cast_76 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_75 = LOGAND(op_RSHIFT_74, cast_76);
	RzILOpPure *cast_st32_77 = CAST(32, MSB(DUP(op_AND_75)), op_AND_75);
	RzILOpPure *cast_st64_78 = CAST(64, MSB(DUP(cast_st32_77)), cast_st32_77);
	RzILOpPure *arg_cast_80 = CAST(64, IL_FALSE, cast_st64_78);
	RzILOpPure *arg_cast_81 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_82 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_85 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_71, VARL("h_tmp309"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_86 = SUB(cond_70, cond_85);
	RzILOpPure *cast_88 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_87 = ADD(op_SUB_86, cast_88);
	RzILOpPure *op_RSHIFT_89 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_87, VARLP("const_pos1")));
	RzILOpPure *op_EQ_90 = EQ(cond_55, op_RSHIFT_89);
	RzILOpPure *op_NE_91 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_92 = LET("const_pos32", DUP(const_pos32), MUL(cast_93, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rtt), op_MUL_92);
	RzILOpPure *cast_96 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_95 = LOGAND(op_RSHIFT_94, cast_96);
	RzILOpPure *cast_st32_97 = CAST(32, MSB(DUP(op_AND_95)), op_AND_95);
	RzILOpPure *cast_st64_98 = CAST(64, MSB(DUP(cast_st32_97)), cast_st32_97);
	RzILOpPure *arg_cast_100 = CAST(64, IL_FALSE, cast_st64_98);
	RzILOpPure *arg_cast_101 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_102 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_105 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_91, VARL("h_tmp310"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_106 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_107 = LET("const_pos32", DUP(const_pos32), MUL(cast_108, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *cast_111 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_st32_112 = CAST(32, MSB(DUP(op_AND_110)), op_AND_110);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(DUP(cast_st32_112)), cast_st32_112);
	RzILOpPure *arg_cast_115 = CAST(64, IL_FALSE, cast_st64_113);
	RzILOpPure *arg_cast_116 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_117 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_120 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_106, VARL("h_tmp311"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_121 = SUB(cond_105, cond_120);
	RzILOpPure *cast_123 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_122 = ADD(op_SUB_121, cast_123);
	RzILOpPure *op_RSHIFT_124 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_122, VARLP("const_pos1")));
	RzILOpPure *arg_cast_135 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_136 = CAST(64, MSB(DUP(VARL("h_tmp313"))), VARL("h_tmp313"));
	RzILOpPure *arg_cast_137 = CAST(64, MSB(DUP(VARL("h_tmp314"))), VARL("h_tmp314"));
	RzILOpPure *arg_cast_138 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_143 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_142 = ITE(NON_ZERO(VARL("h_tmp312")), VARL("h_tmp315"), cast_143);
	RzILOpPure *cast_145 = CAST(32, IL_FALSE, cond_142);
	RzILOpPure *op_NE_147 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_149 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_148 = LET("const_pos32", DUP(const_pos32), MUL(cast_149, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_150 = SHIFTR0(DUP(Rtt), op_MUL_148);
	RzILOpPure *cast_152 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_151 = LOGAND(op_RSHIFT_150, cast_152);
	RzILOpPure *cast_st32_153 = CAST(32, MSB(DUP(op_AND_151)), op_AND_151);
	RzILOpPure *cast_st64_154 = CAST(64, MSB(DUP(cast_st32_153)), cast_st32_153);
	RzILOpPure *arg_cast_156 = CAST(64, IL_FALSE, cast_st64_154);
	RzILOpPure *arg_cast_157 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_158 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_161 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_147, VARL("h_tmp316"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_162 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_164 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_163 = LET("const_pos32", DUP(const_pos32), MUL(cast_164, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_165 = SHIFTR0(DUP(Rss), op_MUL_163);
	RzILOpPure *cast_167 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_166 = LOGAND(op_RSHIFT_165, cast_167);
	RzILOpPure *cast_st32_168 = CAST(32, MSB(DUP(op_AND_166)), op_AND_166);
	RzILOpPure *cast_st64_169 = CAST(64, MSB(DUP(cast_st32_168)), cast_st32_168);
	RzILOpPure *arg_cast_171 = CAST(64, IL_FALSE, cast_st64_169);
	RzILOpPure *arg_cast_172 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_173 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_176 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_162, VARL("h_tmp317"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_177 = SUB(cond_161, cond_176);
	RzILOpPure *cast_179 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_178 = ADD(op_SUB_177, cast_179);
	RzILOpPure *op_RSHIFT_180 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_178, VARLP("const_pos1")));
	RzILOpPure *cast_182 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_181 = SLT(op_RSHIFT_180, cast_182);
	RzILOpPure *op_SUB_183 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_184 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_183));
	RzILOpPure *op_NEG_185 = NEG(op_LSHIFT_184);
	RzILOpPure *op_SUB_186 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_187 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_186));
	RzILOpPure *cast_189 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_188 = SUB(op_LSHIFT_187, cast_189);
	RzILOpPure *cond_190 = ITE(op_LT_181, op_NEG_185, op_SUB_188);
	RzILOpPure *cond_191 = ITE(op_EQ_90, op_RSHIFT_124, cond_190);
	RzILOpPure *op_AND_192 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_191, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_194 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_193 = LET("const_pos32", DUP(const_pos32), MUL(cast_194, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_195 = SHIFTL0(op_AND_192, op_MUL_193);
	RzILOpPure *cast_197 = CAST(64, IL_FALSE, op_LSHIFT_195);
	RzILOpPure *op_OR_196 = LOGOR(op_AND_11, cast_197);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp304", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(arg_cast_23, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp305", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *c_call_37 = HEX_SEXTRACT64(arg_cast_38, arg_cast_39, arg_cast_40);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp306", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_48 = HEX_SEXTRACT64(arg_cast_49, arg_cast_50, arg_cast_51);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp307", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(3, seq_27, seq_42, seq_53);
	RzILOpEffect *c_call_64 = HEX_SEXTRACT64(arg_cast_65, arg_cast_66, arg_cast_67);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp308", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_64, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *c_call_79 = HEX_SEXTRACT64(arg_cast_80, arg_cast_81, arg_cast_82);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_83 = SETL("h_tmp309", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_84 = SEQN(2, c_call_79, op_ASSIGN_hybrid_tmp_83);
	RzILOpEffect *c_call_99 = HEX_SEXTRACT64(arg_cast_100, arg_cast_101, arg_cast_102);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_103 = SETL("h_tmp310", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_104 = SEQN(2, c_call_99, op_ASSIGN_hybrid_tmp_103);
	RzILOpEffect *c_call_114 = HEX_SEXTRACT64(arg_cast_115, arg_cast_116, arg_cast_117);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_118 = SETL("h_tmp311", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_119 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_118);
	RzILOpEffect *c_call_125 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_126 = SETL("h_tmp312", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_127 = SEQN(2, c_call_125, op_ASSIGN_hybrid_tmp_126);
	RzILOpEffect *c_call_128 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_129 = SETL("h_tmp313", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_130 = SEQN(2, c_call_128, op_ASSIGN_hybrid_tmp_129);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp314", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *c_call_134 = HEX_DEPOSIT64(arg_cast_135, arg_cast_136, arg_cast_137, arg_cast_138);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_139 = SETL("h_tmp315", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_140 = SEQN(2, c_call_134, op_ASSIGN_hybrid_tmp_139);
	RzILOpEffect *seq_141 = SEQN(3, seq_130, seq_133, seq_140);
	RzILOpEffect *op_ASSIGN_144 = SETG(usr_assoc_tmp, cast_145);
	RzILOpEffect *seq_146 = SEQN(3, seq_127, seq_141, op_ASSIGN_144);
	RzILOpEffect *c_call_155 = HEX_SEXTRACT64(arg_cast_156, arg_cast_157, arg_cast_158);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_159 = SETL("h_tmp316", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_160 = SEQN(2, c_call_155, op_ASSIGN_hybrid_tmp_159);
	RzILOpEffect *c_call_170 = HEX_SEXTRACT64(arg_cast_171, arg_cast_172, arg_cast_173);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp317", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *op_ASSIGN_198 = SETG(Rdd_assoc_tmp, op_OR_196);
	RzILOpEffect *seq_199 = SEQN(8, seq_54, seq_69, seq_84, seq_104, seq_119, seq_160, seq_175, op_ASSIGN_198);
	RzILOpEffect *empty_200 = EMPTY();
	RzILOpEffect *seq_201 = SEQN(2, seq_199, empty_200);
	RzILOpEffect *seq_202 = SEQN(2, seq_6, seq_201);
	RzILOpEffect *for_204 = REPEAT(op_LT_2, seq_202);
	RzILOpEffect *seq_203 = SEQN(2, op_ASSIGN_0, for_204);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_203, seq_146);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp318;
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st32 h_tmp319;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos4", const_pos4, ULT(cast_5, VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *op_MUL_14 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(Rtt, op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_29);
	RzILOpPure *op_ADD_32 = ADD(cast_ut8_25, cast_ut8_31);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_ADD_32)), op_ADD_32);
	RzILOpPure *op_ADD_33 = ADD(cast_st64_19, cast_34);
	RzILOpPure *op_AND_35 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(op_AND_35, op_MUL_36);
	RzILOpPure *cast_39 = CAST(64, IL_FALSE, op_LSHIFT_37);
	RzILOpPure *op_OR_38 = LOGOR(op_AND_12, cast_39);
	RzILOpPure *cast_47 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_48 = LET("const_pos8", DUP(const_pos8), ULT(cast_49, VARLP("const_pos8")));
	RzILOpPure *op_MUL_53 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_53));
	RzILOpPure *op_NOT_55 = LOGNOT(op_LSHIFT_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_NOT_55);
	RzILOpPure *op_AND_56 = LOGAND(VARG(Rdd_assoc_tmp), cast_57);
	RzILOpPure *op_MUL_58 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_58);
	RzILOpPure *cast_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_60 = LOGAND(op_RSHIFT_59, cast_61);
	RzILOpPure *cast_st32_62 = CAST(32, MSB(DUP(op_AND_60)), op_AND_60);
	RzILOpPure *cast_st64_63 = CAST(64, MSB(DUP(cast_st32_62)), cast_st32_62);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos8", DUP(const_pos8), MUL(cast_65, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzILOpPure *cast_68 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_67 = LOGAND(op_RSHIFT_66, cast_68);
	RzILOpPure *cast_ut8_69 = CAST(8, IL_FALSE, op_AND_67);
	RzILOpPure *cast_71 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_70 = LET("const_pos8", DUP(const_pos8), MUL(cast_71, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_72 = SHIFTR0(DUP(Rtt), op_MUL_70);
	RzILOpPure *cast_74 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_73 = LOGAND(op_RSHIFT_72, cast_74);
	RzILOpPure *cast_ut8_75 = CAST(8, IL_FALSE, op_AND_73);
	RzILOpPure *op_ADD_76 = ADD(cast_ut8_69, cast_ut8_75);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(op_ADD_76)), op_ADD_76);
	RzILOpPure *op_ADD_77 = ADD(cast_st64_63, cast_78);
	RzILOpPure *op_AND_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_80 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_81 = SHIFTL0(op_AND_79, op_MUL_80);
	RzILOpPure *cast_83 = CAST(64, IL_FALSE, op_LSHIFT_81);
	RzILOpPure *op_OR_82 = LOGOR(op_AND_56, cast_83);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rdd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp318", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc_tmp, op_OR_38);
	RzILOpEffect *empty_41 = EMPTY();
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_40, empty_41);
	RzILOpEffect *seq_43 = SEQN(2, seq_8, seq_42);
	RzILOpEffect *for_45 = REPEAT(op_LT_4, seq_43);
	RzILOpEffect *seq_44 = SEQN(2, op_ASSIGN_2, for_45);
	RzILOpEffect *op_ASSIGN_46 = SETL("i", cast_47);
	RzILOpEffect *op_INC_50 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp319", VARL("i"));
	RzILOpEffect *seq_52 = SEQN(2, op_ASSIGN_hybrid_tmp_51, op_INC_50);
	RzILOpEffect *op_ASSIGN_84 = SETG(Rdd_assoc_tmp, op_OR_82);
	RzILOpEffect *empty_85 = EMPTY();
	RzILOpEffect *seq_86 = SEQN(2, op_ASSIGN_84, empty_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_52, seq_86);
	RzILOpEffect *for_89 = REPEAT(op_LT_48, seq_87);
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_46, for_89);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, seq_44, seq_88);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp320;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st32 h_tmp321;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_NOT_9);
	RzILOpPure *op_AND_10 = LOGAND(Rxx, cast_11);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rxx), op_MUL_12);
	RzILOpPure *cast_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(Rtt, op_MUL_24);
	RzILOpPure *cast_28 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_ut8_29 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_ADD_30 = ADD(cast_ut8_23, cast_ut8_29);
	RzILOpPure *cast_32 = CAST(64, MSB(DUP(op_ADD_30)), op_ADD_30);
	RzILOpPure *op_ADD_31 = ADD(cast_st64_17, cast_32);
	RzILOpPure *op_AND_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_34 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(op_AND_33, op_MUL_34);
	RzILOpPure *cast_37 = CAST(64, IL_FALSE, op_LSHIFT_35);
	RzILOpPure *op_OR_36 = LOGOR(op_AND_10, cast_37);
	RzILOpPure *cast_45 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_46 = LET("const_pos8", DUP(const_pos8), ULT(cast_47, VARLP("const_pos8")));
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_52 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_51));
	RzILOpPure *op_NOT_53 = LOGNOT(op_LSHIFT_52);
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, op_NOT_53);
	RzILOpPure *op_AND_54 = LOGAND(DUP(Rxx), cast_55);
	RzILOpPure *op_MUL_56 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rxx), op_MUL_56);
	RzILOpPure *cast_59 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_st32_60 = CAST(32, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *cast_st64_61 = CAST(64, MSB(DUP(cast_st32_60)), cast_st32_60);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos8", DUP(const_pos8), MUL(cast_63, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *cast_66 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_65 = LOGAND(op_RSHIFT_64, cast_66);
	RzILOpPure *cast_ut8_67 = CAST(8, IL_FALSE, op_AND_65);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos8", DUP(const_pos8), MUL(cast_69, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rtt), op_MUL_68);
	RzILOpPure *cast_72 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_ut8_73 = CAST(8, IL_FALSE, op_AND_71);
	RzILOpPure *op_ADD_74 = ADD(cast_ut8_67, cast_ut8_73);
	RzILOpPure *cast_76 = CAST(64, MSB(DUP(op_ADD_74)), op_ADD_74);
	RzILOpPure *op_ADD_75 = ADD(cast_st64_61, cast_76);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_75, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_78 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_79 = SHIFTL0(op_AND_77, op_MUL_78);
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, op_LSHIFT_79);
	RzILOpPure *op_OR_80 = LOGOR(op_AND_54, cast_81);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp320", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_38 = SETG(Rxx_assoc_tmp, op_OR_36);
	RzILOpEffect *empty_39 = EMPTY();
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_38, empty_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_6, seq_40);
	RzILOpEffect *for_43 = REPEAT(op_LT_2, seq_41);
	RzILOpEffect *seq_42 = SEQN(2, op_ASSIGN_0, for_43);
	RzILOpEffect *op_ASSIGN_44 = SETL("i", cast_45);
	RzILOpEffect *op_INC_48 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp321", VARL("i"));
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_hybrid_tmp_49, op_INC_48);
	RzILOpEffect *op_ASSIGN_82 = SETG(Rxx_assoc_tmp, op_OR_80);
	RzILOpEffect *empty_83 = EMPTY();
	RzILOpEffect *seq_84 = SEQN(2, op_ASSIGN_82, empty_83);
	RzILOpEffect *seq_85 = SEQN(2, seq_50, seq_84);
	RzILOpEffect *for_87 = REPEAT(op_LT_46, seq_85);
	RzILOpEffect *seq_86 = SEQN(2, op_ASSIGN_44, for_87);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_42, seq_86);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp322;
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st32 h_tmp323;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos4", const_pos4, ULT(cast_5, VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *cast_13 = CAST(64, IL_FALSE, op_NOT_11);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), cast_13);
	RzILOpPure *op_MUL_14 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_14);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(cast_27, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(Rtt, op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_ut8_31 = CAST(8, IL_FALSE, op_AND_29);
	RzILOpPure *op_SUB_32 = SUB(cast_ut8_25, cast_ut8_31);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, op_SUB_32);
	RzILOpPure *op_LT_33 = LET("const_pos0", DUP(const_pos0), ULT(cast_34, VARLP("const_pos0")));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(cast_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut8_40 = CAST(8, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_44);
	RzILOpPure *op_SUB_47 = SUB(cast_ut8_40, cast_ut8_46);
	RzILOpPure *op_NEG_48 = NEG(op_SUB_47);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos8", DUP(const_pos8), MUL(cast_50, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_ut8_54 = CAST(8, IL_FALSE, op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos8", DUP(const_pos8), MUL(cast_56, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_ut8_60 = CAST(8, IL_FALSE, op_AND_58);
	RzILOpPure *op_SUB_61 = SUB(cast_ut8_54, cast_ut8_60);
	RzILOpPure *cond_62 = ITE(op_LT_33, op_NEG_48, op_SUB_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(cond_62)), cond_62);
	RzILOpPure *op_ADD_63 = ADD(cast_st64_19, cast_64);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_66 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_67 = SHIFTL0(op_AND_65, op_MUL_66);
	RzILOpPure *cast_69 = CAST(64, IL_FALSE, op_LSHIFT_67);
	RzILOpPure *op_OR_68 = LOGOR(op_AND_12, cast_69);
	RzILOpPure *cast_77 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_78 = LET("const_pos8", DUP(const_pos8), ULT(cast_79, VARLP("const_pos8")));
	RzILOpPure *op_MUL_83 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_84 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_83));
	RzILOpPure *op_NOT_85 = LOGNOT(op_LSHIFT_84);
	RzILOpPure *cast_87 = CAST(64, IL_FALSE, op_NOT_85);
	RzILOpPure *op_AND_86 = LOGAND(VARG(Rdd_assoc_tmp), cast_87);
	RzILOpPure *op_MUL_88 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_89 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_88);
	RzILOpPure *cast_91 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_90 = LOGAND(op_RSHIFT_89, cast_91);
	RzILOpPure *cast_st32_92 = CAST(32, MSB(DUP(op_AND_90)), op_AND_90);
	RzILOpPure *cast_st64_93 = CAST(64, MSB(DUP(cast_st32_92)), cast_st32_92);
	RzILOpPure *cast_95 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_94 = LET("const_pos8", DUP(const_pos8), MUL(cast_95, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_96 = SHIFTR0(DUP(Rss), op_MUL_94);
	RzILOpPure *cast_98 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_97 = LOGAND(op_RSHIFT_96, cast_98);
	RzILOpPure *cast_ut8_99 = CAST(8, IL_FALSE, op_AND_97);
	RzILOpPure *cast_101 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_100 = LET("const_pos8", DUP(const_pos8), MUL(cast_101, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_102 = SHIFTR0(DUP(Rtt), op_MUL_100);
	RzILOpPure *cast_104 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_103 = LOGAND(op_RSHIFT_102, cast_104);
	RzILOpPure *cast_ut8_105 = CAST(8, IL_FALSE, op_AND_103);
	RzILOpPure *op_SUB_106 = SUB(cast_ut8_99, cast_ut8_105);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, op_SUB_106);
	RzILOpPure *op_LT_107 = LET("const_pos0", DUP(const_pos0), ULT(cast_108, VARLP("const_pos0")));
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos8", DUP(const_pos8), MUL(cast_110, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *cast_113 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_112 = LOGAND(op_RSHIFT_111, cast_113);
	RzILOpPure *cast_ut8_114 = CAST(8, IL_FALSE, op_AND_112);
	RzILOpPure *cast_116 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_115 = LET("const_pos8", DUP(const_pos8), MUL(cast_116, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_117 = SHIFTR0(DUP(Rtt), op_MUL_115);
	RzILOpPure *cast_119 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_118 = LOGAND(op_RSHIFT_117, cast_119);
	RzILOpPure *cast_ut8_120 = CAST(8, IL_FALSE, op_AND_118);
	RzILOpPure *op_SUB_121 = SUB(cast_ut8_114, cast_ut8_120);
	RzILOpPure *op_NEG_122 = NEG(op_SUB_121);
	RzILOpPure *cast_124 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_123 = LET("const_pos8", DUP(const_pos8), MUL(cast_124, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_123);
	RzILOpPure *cast_127 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_ut8_128 = CAST(8, IL_FALSE, op_AND_126);
	RzILOpPure *cast_130 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_129 = LET("const_pos8", DUP(const_pos8), MUL(cast_130, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_131 = SHIFTR0(DUP(Rtt), op_MUL_129);
	RzILOpPure *cast_133 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_132 = LOGAND(op_RSHIFT_131, cast_133);
	RzILOpPure *cast_ut8_134 = CAST(8, IL_FALSE, op_AND_132);
	RzILOpPure *op_SUB_135 = SUB(cast_ut8_128, cast_ut8_134);
	RzILOpPure *cond_136 = ITE(op_LT_107, op_NEG_122, op_SUB_135);
	RzILOpPure *cast_138 = CAST(64, MSB(DUP(cond_136)), cond_136);
	RzILOpPure *op_ADD_137 = ADD(cast_st64_93, cast_138);
	RzILOpPure *op_AND_139 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_137, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_140 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_141 = SHIFTL0(op_AND_139, op_MUL_140);
	RzILOpPure *cast_143 = CAST(64, IL_FALSE, op_LSHIFT_141);
	RzILOpPure *op_OR_142 = LOGOR(op_AND_86, cast_143);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETG(Rdd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp322", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rdd_assoc_tmp, op_OR_68);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, op_ASSIGN_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_8, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_4, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_2, for_75);
	RzILOpEffect *op_ASSIGN_76 = SETL("i", cast_77);
	RzILOpEffect *op_INC_80 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_81 = SETL("h_tmp323", VARL("i"));
	RzILOpEffect *seq_82 = SEQN(2, op_ASSIGN_hybrid_tmp_81, op_INC_80);
	RzILOpEffect *op_ASSIGN_144 = SETG(Rdd_assoc_tmp, op_OR_142);
	RzILOpEffect *empty_145 = EMPTY();
	RzILOpEffect *seq_146 = SEQN(2, op_ASSIGN_144, empty_145);
	RzILOpEffect *seq_147 = SEQN(2, seq_82, seq_146);
	RzILOpEffect *for_149 = REPEAT(op_LT_78, seq_147);
	RzILOpEffect *seq_148 = SEQN(2, op_ASSIGN_76, for_149);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, seq_74, seq_148);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp324;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	// Declare: st32 h_tmp325;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_MUL_7 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_9 = LOGNOT(op_LSHIFT_8);
	RzILOpPure *cast_11 = CAST(64, IL_FALSE, op_NOT_9);
	RzILOpPure *op_AND_10 = LOGAND(Rxx, cast_11);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(DUP(Rxx), op_MUL_12);
	RzILOpPure *cast_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(Rtt, op_MUL_24);
	RzILOpPure *cast_28 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_ut8_29 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_SUB_30 = SUB(cast_ut8_23, cast_ut8_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, op_SUB_30);
	RzILOpPure *op_LT_31 = LET("const_pos0", DUP(const_pos0), ULT(cast_32, VARLP("const_pos0")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos8", DUP(const_pos8), MUL(cast_34, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_ut8_38 = CAST(8, IL_FALSE, op_AND_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos8", DUP(const_pos8), MUL(cast_40, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_ut8_44 = CAST(8, IL_FALSE, op_AND_42);
	RzILOpPure *op_SUB_45 = SUB(cast_ut8_38, cast_ut8_44);
	RzILOpPure *op_NEG_46 = NEG(op_SUB_45);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos8", DUP(const_pos8), MUL(cast_48, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_50);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_53 = LET("const_pos8", DUP(const_pos8), MUL(cast_54, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rtt), op_MUL_53);
	RzILOpPure *cast_57 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_56 = LOGAND(op_RSHIFT_55, cast_57);
	RzILOpPure *cast_ut8_58 = CAST(8, IL_FALSE, op_AND_56);
	RzILOpPure *op_SUB_59 = SUB(cast_ut8_52, cast_ut8_58);
	RzILOpPure *cond_60 = ITE(op_LT_31, op_NEG_46, op_SUB_59);
	RzILOpPure *cast_62 = CAST(64, MSB(DUP(cond_60)), cond_60);
	RzILOpPure *op_ADD_61 = ADD(cast_st64_17, cast_62);
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_61, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_65 = SHIFTL0(op_AND_63, op_MUL_64);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_LSHIFT_65);
	RzILOpPure *op_OR_66 = LOGOR(op_AND_10, cast_67);
	RzILOpPure *cast_75 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_76 = LET("const_pos8", DUP(const_pos8), ULT(cast_77, VARLP("const_pos8")));
	RzILOpPure *op_MUL_81 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_81));
	RzILOpPure *op_NOT_83 = LOGNOT(op_LSHIFT_82);
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, op_NOT_83);
	RzILOpPure *op_AND_84 = LOGAND(DUP(Rxx), cast_85);
	RzILOpPure *op_MUL_86 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rxx), op_MUL_86);
	RzILOpPure *cast_89 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(DUP(op_AND_88)), op_AND_88);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(DUP(cast_st32_90)), cast_st32_90);
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_92 = LET("const_pos8", DUP(const_pos8), MUL(cast_93, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *cast_96 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_95 = LOGAND(op_RSHIFT_94, cast_96);
	RzILOpPure *cast_ut8_97 = CAST(8, IL_FALSE, op_AND_95);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_98 = LET("const_pos8", DUP(const_pos8), MUL(cast_99, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *cast_102 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_101 = LOGAND(op_RSHIFT_100, cast_102);
	RzILOpPure *cast_ut8_103 = CAST(8, IL_FALSE, op_AND_101);
	RzILOpPure *op_SUB_104 = SUB(cast_ut8_97, cast_ut8_103);
	RzILOpPure *cast_106 = CAST(32, IL_FALSE, op_SUB_104);
	RzILOpPure *op_LT_105 = LET("const_pos0", DUP(const_pos0), ULT(cast_106, VARLP("const_pos0")));
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_107 = LET("const_pos8", DUP(const_pos8), MUL(cast_108, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *cast_111 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_ut8_112 = CAST(8, IL_FALSE, op_AND_110);
	RzILOpPure *cast_114 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_113 = LET("const_pos8", DUP(const_pos8), MUL(cast_114, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_115 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *cast_117 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_116 = LOGAND(op_RSHIFT_115, cast_117);
	RzILOpPure *cast_ut8_118 = CAST(8, IL_FALSE, op_AND_116);
	RzILOpPure *op_SUB_119 = SUB(cast_ut8_112, cast_ut8_118);
	RzILOpPure *op_NEG_120 = NEG(op_SUB_119);
	RzILOpPure *cast_122 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_121 = LET("const_pos8", DUP(const_pos8), MUL(cast_122, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_123 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *cast_125 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_124 = LOGAND(op_RSHIFT_123, cast_125);
	RzILOpPure *cast_ut8_126 = CAST(8, IL_FALSE, op_AND_124);
	RzILOpPure *cast_128 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_127 = LET("const_pos8", DUP(const_pos8), MUL(cast_128, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_129 = SHIFTR0(DUP(Rtt), op_MUL_127);
	RzILOpPure *cast_131 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_130 = LOGAND(op_RSHIFT_129, cast_131);
	RzILOpPure *cast_ut8_132 = CAST(8, IL_FALSE, op_AND_130);
	RzILOpPure *op_SUB_133 = SUB(cast_ut8_126, cast_ut8_132);
	RzILOpPure *cond_134 = ITE(op_LT_105, op_NEG_120, op_SUB_133);
	RzILOpPure *cast_136 = CAST(64, MSB(DUP(cond_134)), cond_134);
	RzILOpPure *op_ADD_135 = ADD(cast_st64_91, cast_136);
	RzILOpPure *op_AND_137 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_135, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_138 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_139 = SHIFTL0(op_AND_137, op_MUL_138);
	RzILOpPure *cast_141 = CAST(64, IL_FALSE, op_LSHIFT_139);
	RzILOpPure *op_OR_140 = LOGOR(op_AND_84, cast_141);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp324", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_68 = SETG(Rxx_assoc_tmp, op_OR_66);
	RzILOpEffect *empty_69 = EMPTY();
	RzILOpEffect *seq_70 = SEQN(2, op_ASSIGN_68, empty_69);
	RzILOpEffect *seq_71 = SEQN(2, seq_6, seq_70);
	RzILOpEffect *for_73 = REPEAT(op_LT_2, seq_71);
	RzILOpEffect *seq_72 = SEQN(2, op_ASSIGN_0, for_73);
	RzILOpEffect *op_ASSIGN_74 = SETL("i", cast_75);
	RzILOpEffect *op_INC_78 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_79 = SETL("h_tmp325", VARL("i"));
	RzILOpEffect *seq_80 = SEQN(2, op_ASSIGN_hybrid_tmp_79, op_INC_78);
	RzILOpEffect *op_ASSIGN_142 = SETG(Rxx_assoc_tmp, op_OR_140);
	RzILOpEffect *empty_143 = EMPTY();
	RzILOpEffect *seq_144 = SEQN(2, op_ASSIGN_142, empty_143);
	RzILOpEffect *seq_145 = SEQN(2, seq_80, seq_144);
	RzILOpEffect *for_147 = REPEAT(op_LT_76, seq_145);
	RzILOpEffect *seq_146 = SEQN(2, op_ASSIGN_74, for_147);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_72, seq_146);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp326;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
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
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp326", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_33, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp327;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp328;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp329;
	// Declare: ut32 h_tmp330;
	// Declare: ut32 h_tmp331;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp332;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_19, cast_st16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_SUB_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp328"), VARLP("const_pos0LL")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_SUB_46 = SUB(cast_st16_39, cast_st16_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(op_SUB_46)), op_SUB_46);
	RzILOpPure *op_EQ_47 = EQ(cond_33, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_st16_60 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *op_SUB_61 = SUB(cast_st16_54, cast_st16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp330"))), VARL("h_tmp330"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp331"))), VARL("h_tmp331"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp329")), VARL("h_tmp332"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_st16_95 = CAST(16, MSB(DUP(op_AND_93)), op_AND_93);
	RzILOpPure *op_SUB_96 = SUB(cast_st16_89, cast_st16_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_SUB_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_SUB_99 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_99));
	RzILOpPure *op_NEG_101 = NEG(op_LSHIFT_100);
	RzILOpPure *op_SUB_102 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_102));
	RzILOpPure *cast_105 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_104 = SUB(op_LSHIFT_103, cast_105);
	RzILOpPure *cond_106 = ITE(op_LT_97, op_NEG_101, op_SUB_104);
	RzILOpPure *cast_108 = CAST(64, MSB(DUP(op_SUB_61)), op_SUB_61);
	RzILOpPure *cond_107 = ITE(op_EQ_47, cast_108, cond_106);
	RzILOpPure *cast_110 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_109 = LOGAND(cond_107, cast_110);
	RzILOpPure *cast_ut64_111 = CAST(64, IL_FALSE, op_AND_109);
	RzILOpPure *cast_113 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_112 = LET("const_pos16", DUP(const_pos16), MUL(cast_113, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_114 = SHIFTL0(cast_ut64_111, op_MUL_112);
	RzILOpPure *op_OR_115 = LOGOR(op_AND_11, op_LSHIFT_114);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp327", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp328", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp329", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp330", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp331", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp332", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = SETG(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_116 = SETG(Rdd_assoc_tmp, op_OR_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_32, op_ASSIGN_116);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *seq_119 = SEQN(2, seq_117, empty_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_6, seq_119);
	RzILOpEffect *for_122 = REPEAT(op_LT_2, seq_120);
	RzILOpEffect *seq_121 = SEQN(2, op_ASSIGN_0, for_122);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_121, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp333;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_ut8_18, cast_ut8_24);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_SUB_25)), op_SUB_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos8", DUP(const_pos8), MUL(cast_30, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, op_LSHIFT_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp333", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_34 = EMPTY();
	RzILOpEffect *seq_35 = SEQN(2, op_ASSIGN_33, empty_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_6, seq_35);
	RzILOpEffect *for_38 = REPEAT(op_LT_2, seq_36);
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_0, for_38);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_37);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsububs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp334;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp335;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp336;
	// Declare: ut32 h_tmp337;
	// Declare: ut32 h_tmp338;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp339;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos8", const_pos8, ULT(cast_3, VARLP("const_pos8")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(cast_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos8", DUP(const_pos8), MUL(cast_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut8_19 = CAST(8, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(cast_21, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut8_25 = CAST(8, IL_FALSE, op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_ut8_19, cast_ut8_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_SUB_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp335"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(cast_36, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut8_40 = CAST(8, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_44);
	RzILOpPure *op_SUB_47 = SUB(cast_ut8_40, cast_ut8_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_SUB_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos8", DUP(const_pos8), MUL(cast_51, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_ut8_55 = CAST(8, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos8", DUP(const_pos8), MUL(cast_57, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzILOpPure *cast_60 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_59 = LOGAND(op_RSHIFT_58, cast_60);
	RzILOpPure *cast_ut8_61 = CAST(8, IL_FALSE, op_AND_59);
	RzILOpPure *op_SUB_62 = SUB(cast_ut8_55, cast_ut8_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp337"))), VARL("h_tmp337"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp338"))), VARL("h_tmp338"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp336")), VARL("h_tmp339"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos8", DUP(const_pos8), MUL(cast_86, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_85);
	RzILOpPure *cast_89 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_ut8_90 = CAST(8, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos8", DUP(const_pos8), MUL(cast_92, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *cast_95 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_94 = LOGAND(op_RSHIFT_93, cast_95);
	RzILOpPure *cast_ut8_96 = CAST(8, IL_FALSE, op_AND_94);
	RzILOpPure *op_SUB_97 = SUB(cast_ut8_90, cast_ut8_96);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, op_SUB_97);
	RzILOpPure *op_LT_98 = LET("const_pos0", DUP(const_pos0), ULT(cast_99, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_102 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_101 = SUB(op_LSHIFT_100, cast_102);
	RzILOpPure *cast_104 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_103 = ITE(op_LT_98, cast_104, op_SUB_101);
	RzILOpPure *cast_106 = CAST(64, MSB(DUP(op_SUB_62)), op_SUB_62);
	RzILOpPure *cond_105 = ITE(op_EQ_48, cast_106, cond_103);
	RzILOpPure *op_AND_107 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_105, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos8", DUP(const_pos8), MUL(cast_110, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_111 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *op_OR_112 = LOGOR(op_AND_11, op_LSHIFT_111);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp334", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp335", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp336", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp337", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp338", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp339", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = SETG(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_113 = SETG(Rdd_assoc_tmp, op_OR_112);
	RzILOpEffect *seq_114 = SEQN(2, seq_32, op_ASSIGN_113);
	RzILOpEffect *empty_115 = EMPTY();
	RzILOpEffect *seq_116 = SEQN(2, seq_114, empty_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_6, seq_116);
	RzILOpEffect *for_119 = REPEAT(op_LT_2, seq_117);
	RzILOpEffect *seq_118 = SEQN(2, op_ASSIGN_0, for_119);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_118, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp340;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp341;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp342;
	// Declare: ut32 h_tmp343;
	// Declare: ut32 h_tmp344;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp345;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
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
	RzILOpPure *op_NE_13 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos16", DUP(const_pos16), MUL(cast_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_ut16_19 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_ut16_19, cast_ut16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_SUB_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp341"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_ut16_40 = CAST(16, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *op_SUB_47 = SUB(cast_ut16_40, cast_ut16_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_SUB_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rtt), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos16", DUP(const_pos16), MUL(cast_57, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzILOpPure *cast_60 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_59 = LOGAND(op_RSHIFT_58, cast_60);
	RzILOpPure *cast_ut16_61 = CAST(16, IL_FALSE, op_AND_59);
	RzILOpPure *op_SUB_62 = SUB(cast_ut16_55, cast_ut16_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp343"))), VARL("h_tmp343"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp344"))), VARL("h_tmp344"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp342")), VARL("h_tmp345"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rtt), op_MUL_85);
	RzILOpPure *cast_89 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_88 = LOGAND(op_RSHIFT_87, cast_89);
	RzILOpPure *cast_ut16_90 = CAST(16, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos16", DUP(const_pos16), MUL(cast_92, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rss), op_MUL_91);
	RzILOpPure *cast_95 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_94 = LOGAND(op_RSHIFT_93, cast_95);
	RzILOpPure *cast_ut16_96 = CAST(16, IL_FALSE, op_AND_94);
	RzILOpPure *op_SUB_97 = SUB(cast_ut16_90, cast_ut16_96);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, op_SUB_97);
	RzILOpPure *op_LT_98 = LET("const_pos0", DUP(const_pos0), ULT(cast_99, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_100 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_102 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_101 = SUB(op_LSHIFT_100, cast_102);
	RzILOpPure *cast_104 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_103 = ITE(op_LT_98, cast_104, op_SUB_101);
	RzILOpPure *cast_106 = CAST(64, MSB(DUP(op_SUB_62)), op_SUB_62);
	RzILOpPure *cond_105 = ITE(op_EQ_48, cast_106, cond_103);
	RzILOpPure *cast_108 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_107 = LOGAND(cond_105, cast_108);
	RzILOpPure *cast_ut64_109 = CAST(64, IL_FALSE, op_AND_107);
	RzILOpPure *cast_111 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_110 = LET("const_pos16", DUP(const_pos16), MUL(cast_111, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_112 = SHIFTL0(cast_ut64_109, op_MUL_110);
	RzILOpPure *op_OR_113 = LOGOR(op_AND_11, op_LSHIFT_112);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp340", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp341", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp342", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp343", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp344", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp345", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = SETG(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_114 = SETG(Rdd_assoc_tmp, op_OR_113);
	RzILOpEffect *seq_115 = SEQN(2, seq_32, op_ASSIGN_114);
	RzILOpEffect *empty_116 = EMPTY();
	RzILOpEffect *seq_117 = SEQN(2, seq_115, empty_116);
	RzILOpEffect *seq_118 = SEQN(2, seq_6, seq_117);
	RzILOpEffect *for_120 = REPEAT(op_LT_2, seq_118);
	RzILOpEffect *seq_119 = SEQN(2, op_ASSIGN_0, for_120);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_119, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp346;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rss, op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *op_SUB_27 = SUB(cast_st64_19, cast_st64_26);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_SUB_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(op_AND_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_LSHIFT_31);
	RzILOpPure *op_OR_32 = LOGOR(op_AND_11, cast_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp346", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = SETG(Rdd_assoc_tmp, op_OR_32);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_34, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp347;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp348;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp349;
	// Declare: ut32 h_tmp350;
	// Declare: ut32 h_tmp351;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp352;
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, IL_FALSE, op_NOT_10);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), cast_12);
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *cast_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(Rss, op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *op_SUB_28 = SUB(cast_st64_20, cast_st64_27);
	RzILOpPure *arg_cast_30 = CAST(64, IL_FALSE, op_SUB_28);
	RzILOpPure *arg_cast_31 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_32 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp348"), VARLP("const_pos0LL")));
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos32", DUP(const_pos32), MUL(cast_37, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_42 = CAST(64, MSB(DUP(cast_st32_41)), cast_st32_41);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st32_48 = CAST(32, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st64_49 = CAST(64, MSB(DUP(cast_st32_48)), cast_st32_48);
	RzILOpPure *op_SUB_50 = SUB(cast_st64_42, cast_st64_49);
	RzILOpPure *op_EQ_51 = EQ(cond_35, op_SUB_50);
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_52 = LET("const_pos32", DUP(const_pos32), MUL(cast_53, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rtt), op_MUL_52);
	RzILOpPure *cast_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_55 = LOGAND(op_RSHIFT_54, cast_56);
	RzILOpPure *cast_st32_57 = CAST(32, MSB(DUP(op_AND_55)), op_AND_55);
	RzILOpPure *cast_st64_58 = CAST(64, MSB(DUP(cast_st32_57)), cast_st32_57);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos32", DUP(const_pos32), MUL(cast_60, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzILOpPure *cast_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_62 = LOGAND(op_RSHIFT_61, cast_63);
	RzILOpPure *cast_st32_64 = CAST(32, MSB(DUP(op_AND_62)), op_AND_62);
	RzILOpPure *cast_st64_65 = CAST(64, MSB(DUP(cast_st32_64)), cast_st32_64);
	RzILOpPure *op_SUB_66 = SUB(cast_st64_58, cast_st64_65);
	RzILOpPure *arg_cast_77 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_78 = CAST(64, MSB(DUP(VARL("h_tmp350"))), VARL("h_tmp350"));
	RzILOpPure *arg_cast_79 = CAST(64, MSB(DUP(VARL("h_tmp351"))), VARL("h_tmp351"));
	RzILOpPure *arg_cast_80 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_84 = ITE(NON_ZERO(VARL("h_tmp349")), VARL("h_tmp352"), cast_85);
	RzILOpPure *cast_87 = CAST(32, IL_FALSE, cond_84);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos32", DUP(const_pos32), MUL(cast_90, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rtt), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st32_94 = CAST(32, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *cast_st64_95 = CAST(64, MSB(DUP(cast_st32_94)), cast_st32_94);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_96 = LET("const_pos32", DUP(const_pos32), MUL(cast_97, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_98 = SHIFTR0(DUP(Rss), op_MUL_96);
	RzILOpPure *cast_100 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_99 = LOGAND(op_RSHIFT_98, cast_100);
	RzILOpPure *cast_st32_101 = CAST(32, MSB(DUP(op_AND_99)), op_AND_99);
	RzILOpPure *cast_st64_102 = CAST(64, MSB(DUP(cast_st32_101)), cast_st32_101);
	RzILOpPure *op_SUB_103 = SUB(cast_st64_95, cast_st64_102);
	RzILOpPure *cast_105 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_104 = SLT(op_SUB_103, cast_105);
	RzILOpPure *op_SUB_106 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_107 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_106));
	RzILOpPure *op_NEG_108 = NEG(op_LSHIFT_107);
	RzILOpPure *op_SUB_109 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_110 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_109));
	RzILOpPure *cast_112 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_111 = SUB(op_LSHIFT_110, cast_112);
	RzILOpPure *cond_113 = ITE(op_LT_104, op_NEG_108, op_SUB_111);
	RzILOpPure *cond_114 = ITE(op_EQ_51, op_SUB_66, cond_113);
	RzILOpPure *op_AND_115 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_114, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_116 = LET("const_pos32", DUP(const_pos32), MUL(cast_117, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_118 = SHIFTL0(op_AND_115, op_MUL_116);
	RzILOpPure *cast_120 = CAST(64, IL_FALSE, op_LSHIFT_118);
	RzILOpPure *op_OR_119 = LOGOR(op_AND_11, cast_120);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp347", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_29 = HEX_SEXTRACT64(arg_cast_30, arg_cast_31, arg_cast_32);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp348", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *c_call_67 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp349", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *c_call_70 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp350", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *c_call_73 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp351", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_73, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *c_call_76 = HEX_DEPOSIT64(arg_cast_77, arg_cast_78, arg_cast_79, arg_cast_80);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_81 = SETL("h_tmp352", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_82 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_81);
	RzILOpEffect *seq_83 = SEQN(3, seq_72, seq_75, seq_82);
	RzILOpEffect *op_ASSIGN_86 = SETG(usr_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(3, seq_69, seq_83, op_ASSIGN_86);
	RzILOpEffect *op_ASSIGN_121 = SETG(Rdd_assoc_tmp, op_OR_119);
	RzILOpEffect *seq_122 = SEQN(2, seq_34, op_ASSIGN_121);
	RzILOpEffect *empty_123 = EMPTY();
	RzILOpEffect *seq_124 = SEQN(2, seq_122, empty_123);
	RzILOpEffect *seq_125 = SEQN(2, seq_6, seq_124);
	RzILOpEffect *for_127 = REPEAT(op_LT_2, seq_125);
	RzILOpEffect *seq_126 = SEQN(2, op_ASSIGN_0, for_127);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_126, seq_88);

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
	// Declare: ut64 h_tmp353;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_8 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_7 = ITE(op_NE_0, VARL("h_tmp353"), cast_8);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp353", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = SETG(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>