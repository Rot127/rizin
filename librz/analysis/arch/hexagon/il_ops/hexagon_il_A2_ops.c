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

RzILOpEffect *hex_il_op_a2_abs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_LT_0 = LET("const_pos0", const_pos0, ULT(cast_1, VARLP("const_pos0")));
	RzILOpPure *op_NEG_2 = NEG(DUP(Rs));
	RzILOpPure *cond_3 = ITE(op_LT_0, op_NEG_2, DUP(Rs));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_absp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_0 = SLT(Rss, cast_1);
	RzILOpPure *op_NEG_2 = NEG(DUP(Rss));
	RzILOpPure *cond_3 = ITE(op_LT_0, op_NEG_2, DUP(Rss));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_abssat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_83 = CAST(32, MSB(DUP(cond_81)), cond_81);

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
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_59);
	RzILOpEffect *seq_60 = SEQN(3, seq_41, seq_55, op_ASSIGN_58);
	RzILOpEffect *op_ASSIGN_82 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(2, seq_16, op_ASSIGN_82);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_84, seq_60);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_add(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_10 = ADD(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_10 = ADD(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_10 = ADD(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_ADD_10 = ADD(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_ADD_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp7"))), VARL("h_tmp7"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp8"))), VARL("h_tmp8"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp6")), VARL("h_tmp9"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp12"))), VARL("h_tmp12"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp13"))), VARL("h_tmp13"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp11")), VARL("h_tmp14"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp10", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp17"))), VARL("h_tmp17"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp18"))), VARL("h_tmp18"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp16")), VARL("h_tmp19"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp15", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp20"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp22"))), VARL("h_tmp22"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp23"))), VARL("h_tmp23"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp21")), VARL("h_tmp24"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp20", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp21", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp22", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp23", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp24", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp25"), VARLP("const_pos0LL")));
	RzILOpPure *cast_20 = CAST(32, MSB(DUP(cond_18)), cond_18);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp25", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_20);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, op_ASSIGN_19);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp26"), VARLP("const_pos0LL")));
	RzILOpPure *cast_20 = CAST(32, MSB(DUP(cond_18)), cond_18);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp26", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_20);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, op_ASSIGN_19);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp27"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp29"))), VARL("h_tmp29"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp30"))), VARL("h_tmp30"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp28")), VARL("h_tmp31"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *cast_89 = CAST(32, MSB(DUP(cond_86)), cond_86);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp27", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp28", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp29", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp30", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp31", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_17, op_ASSIGN_88);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_90, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_ADD_11 = ADD(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_ADD_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp32"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_ADD_29 = ADD(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_ADD_29)), op_ADD_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_ADD_42 = ADD(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp34"))), VARL("h_tmp34"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp35"))), VARL("h_tmp35"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp33")), VARL("h_tmp36"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_ADD_75 = ADD(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_ADD_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_ADD_42)), op_ADD_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *cast_89 = CAST(32, MSB(DUP(cond_86)), cond_86);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp32", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp33", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp34", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp35", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp36", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_17, op_ASSIGN_88);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_90, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_0);
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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_11 = CAST(64, MSB(DUP(VARL("__sum"))), VARL("__sum"));
	RzILOpPure *op_XOR_12 = LOGXOR(VARL("__a"), VARL("__sum"));
	RzILOpPure *op_AND_13 = LOGAND(op_XOR_12, VARL("__mask"));
	RzILOpPure *op_AND_14 = LOGAND(VARL("__sum"), VARL("__mask"));
	RzILOpPure *arg_cast_26 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_27 = CAST(64, MSB(DUP(VARL("h_tmp38"))), VARL("h_tmp38"));
	RzILOpPure *arg_cast_28 = CAST(64, MSB(DUP(VARL("h_tmp39"))), VARL("h_tmp39"));
	RzILOpPure *arg_cast_29 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_33 = ITE(NON_ZERO(VARL("h_tmp37")), VARL("h_tmp40"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, cond_33);
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("h_tmp42"))), VARL("h_tmp42"));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp43"))), VARL("h_tmp43"));
	RzILOpPure *arg_cast_52 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_56 = ITE(NON_ZERO(VARL("h_tmp41")), VARL("h_tmp44"), cast_57);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, cond_56);
	RzILOpPure *cast_65 = CAST(64, MSB(DUP(VARL("__sum"))), VARL("__sum"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("__a", cast_ut64_0);
	RzILOpEffect *op_ASSIGN_3 = SETL("__b", cast_ut64_2);
	RzILOpEffect *op_ASSIGN_5 = SETL("__sum", op_ADD_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("__xor", op_XOR_6);
	RzILOpEffect *op_ASSIGN_8 = SETL("__mask", LET("const_pos0x8000000000000000ULL", const_pos0x8000000000000000ULL, VARLP("const_pos0x8000000000000000ULL")));
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_11);
	RzILOpEffect *op_ASSIGN_15 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, LET("const_pos0x7FFFFFFFFFFFFFFFLL", const_pos0x7FFFFFFFFFFFFFFFLL, VARLP("const_pos0x7FFFFFFFFFFFFFFFLL")));
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
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_36);
	RzILOpEffect *seq_37 = SEQN(3, seq_18, seq_32, op_ASSIGN_35);
	RzILOpEffect *op_ASSIGN_38 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, LET("const_pos0x8000000000000000LL", const_pos0x8000000000000000LL, VARLP("const_pos0x8000000000000000LL")));
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp41", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp42", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp43", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_DEPOSIT64(arg_cast_49, arg_cast_50, arg_cast_51, arg_cast_52);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp44", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *seq_55 = SEQN(3, seq_44, seq_47, seq_54);
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_59);
	RzILOpEffect *seq_60 = SEQN(3, seq_41, seq_55, op_ASSIGN_58);
	RzILOpEffect *seq_then_61 = SEQN(2, op_ASSIGN_15, seq_37);
	RzILOpEffect *seq_else_63 = SEQN(2, op_ASSIGN_38, seq_60);
	RzILOpEffect *branch_62 = BRANCH(NON_ZERO(op_AND_14), seq_then_61, seq_else_63);
	RzILOpEffect *op_ASSIGN_64 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_65);
	RzILOpEffect *seq_then_66 = SEQN(1, branch_62);
	RzILOpEffect *seq_else_68 = SEQN(1, op_ASSIGN_64);
	RzILOpEffect *branch_67 = BRANCH(NON_ZERO(op_AND_13), seq_then_66, seq_else_68);
	RzILOpEffect *seq_then_69 = SEQN(1, op_ASSIGN_10);
	RzILOpEffect *seq_else_71 = SEQN(1, branch_67);
	RzILOpEffect *branch_70 = BRANCH(NON_ZERO(op_AND_9), seq_then_69, seq_else_71);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_1, op_ASSIGN_3, op_ASSIGN_5, op_ASSIGN_7, op_ASSIGN_8, branch_70, empty_72);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_63 = CAST(32, MSB(DUP(cond_61)), cond_61);

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
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(2, seq_11, op_ASSIGN_62);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_64, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addsph(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp50"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_13 = ADD(Rtt, cond_12);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp50", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_addspl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_12 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp51"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_13 = ADD(Rtt, cond_12);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_SEXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp51", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_13);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_15);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_AND_1 = LOGAND(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_andp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_AND_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_aslh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *op_LSHIFT_0 = LET("const_pos16", const_pos16, SHIFTL0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_LSHIFT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_asrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);

	// EXEC
	RzILOpPure *op_RSHIFT_0 = LET("const_pos16", const_pos16, SHIFTR0(Rs, VARLP("const_pos16")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_4, VARLP("const_pos16")));
	RzILOpPure *op_MUL_6 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_10 = CAST(16, IL_FALSE, op_AND_8);
	RzILOpPure *op_OR_11 = LOGOR(op_LSHIFT_5, cast_ut16_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_11)), op_OR_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_4, VARLP("const_pos16")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_10 = CAST(16, IL_FALSE, op_AND_8);
	RzILOpPure *op_OR_11 = LOGOR(op_LSHIFT_5, cast_ut16_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_11)), op_OR_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_4, VARLP("const_pos16")));
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_10 = CAST(16, IL_FALSE, op_AND_8);
	RzILOpPure *op_OR_11 = LOGOR(op_LSHIFT_5, cast_ut16_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_11)), op_OR_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combine_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_4 = CAST(16, IL_FALSE, op_AND_2);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cast_ut16_4, VARLP("const_pos16")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_10 = CAST(16, IL_FALSE, op_AND_8);
	RzILOpPure *op_OR_11 = LOGOR(op_LSHIFT_5, cast_ut16_10);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_11)), op_OR_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combineii(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_1));
	RzILOpPure *op_NOT_3 = LOGNOT(op_LSHIFT_2);
	RzILOpPure *op_AND_4 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_3);
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(VARL("S"))), VARL("S"));
	RzILOpPure *op_AND_6 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_7, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_8 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_AND_6, op_MUL_8);
	RzILOpPure *op_OR_10 = LOGOR(op_AND_4, op_LSHIFT_9);
	RzILOpPure *op_MUL_13 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_14 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_13));
	RzILOpPure *op_NOT_15 = LOGNOT(op_LSHIFT_14);
	RzILOpPure *op_AND_16 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(VARL("s"))), VARL("s"));
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(op_AND_17, op_MUL_19);
	RzILOpPure *op_OR_21 = LOGOR(op_AND_16, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *imm_assign_5 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_10);
	RzILOpEffect *empty_12 = EMPTY();
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_21);
	RzILOpEffect *empty_23 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_5, op_ASSIGN_11, empty_12, op_ASSIGN_22, empty_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_combinew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *cast_5 = CAST(64, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *op_AND_4 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_5, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_7 = SHIFTL0(op_AND_4, op_MUL_6);
	RzILOpPure *op_OR_8 = LOGOR(op_AND_3, op_LSHIFT_7);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_11));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_13);
	RzILOpPure *cast_16 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_17 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(op_AND_15, op_MUL_17);
	RzILOpPure *op_OR_19 = LOGOR(op_AND_14, op_LSHIFT_18);

	// WRITE
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_8);
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *op_ASSIGN_20 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_19);
	RzILOpEffect *empty_21 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_9, empty_10, op_ASSIGN_20, empty_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_max(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_GT_0 = SGT(Rs, Rt);
	RzILOpPure *cond_1 = ITE(op_GT_0, DUP(Rs), DUP(Rt));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_GT_0 = SGT(Rss, Rtt);
	RzILOpPure *cond_1 = ITE(op_GT_0, DUP(Rss), DUP(Rtt));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_maxup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_min(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_LT_0 = SLT(Rt, Rs);
	RzILOpPure *cond_1 = ITE(op_LT_0, DUP(Rt), DUP(Rs));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_LT_0 = SLT(Rtt, Rss);
	RzILOpPure *cond_1 = ITE(op_LT_0, DUP(Rtt), DUP(Rss));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_minup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_7 = CAST(64, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NEG_0 = NEG(Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_NEG_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_negsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_51 = CAST(32, MSB(DUP(cond_49)), cond_49);

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
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_35);
	RzILOpEffect *seq_36 = SEQN(3, seq_17, seq_31, op_ASSIGN_34);
	RzILOpEffect *op_ASSIGN_50 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_51);
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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_NOT_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orir(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_OR_1 = LOGOR(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_orp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddf(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_ADD_3 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_ADD_3 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddif(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_ADD_4 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(op_INV_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddifnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_ADD_4 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_4);
	RzILOpEffect *nop_6 = NOP();
	RzILOpEffect *seq_then_7 = SEQN(1, op_ASSIGN_5);
	RzILOpEffect *seq_else_9 = SEQN(1, nop_6);
	RzILOpEffect *branch_8 = BRANCH(op_INV_2, seq_then_7, seq_else_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_3, branch_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddit(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_0), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_padditnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = ADD(Rs, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(NON_ZERO(op_AND_0), seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_paddt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_ADD_2 = ADD(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_AND_3 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_AND_3 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pandt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_AND_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_OR_3 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_porfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_OR_3 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_port(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_OR_2 = LOGOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_OR_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_3 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_SUB_3 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_psubt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_SUB_2 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_XOR_3 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_XOR_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxorfnew(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_tmp_assoc = ISA2REG(hi, 'u', true);
	RzILOpPure *Pu = VARG(Pu_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_INV_2 = INV(NON_ZERO(op_AND_0));
	RzILOpPure *op_XOR_3 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_XOR_3);
	RzILOpEffect *nop_5 = NOP();
	RzILOpEffect *seq_then_6 = SEQN(1, op_ASSIGN_4);
	RzILOpEffect *seq_else_8 = SEQN(1, nop_5);
	RzILOpEffect *branch_7 = BRANCH(op_INV_2, seq_then_6, seq_else_8);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_pxort(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_XOR_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos1", const_pos1, LOGAND(cast_1, VARLP("const_pos1")));
	RzILOpPure *op_XOR_2 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_XOR_2);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_82 = CAST(32, MSB(DUP(cast_st64_80)), cast_st64_80);

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
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_37);
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
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_61);
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
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_82);
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_1, op_ASSIGN_3, op_ASSIGN_5, op_ASSIGN_7, op_ASSIGN_8, branch_72, empty_74, op_ASSIGN_81);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp65"), VARLP("const_pos0LL")));
	RzILOpPure *op_EQ_8 = EQ(cond_7, DUP(Rss));
	RzILOpPure *arg_cast_19 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_20 = CAST(64, MSB(DUP(VARL("h_tmp67"))), VARL("h_tmp67"));
	RzILOpPure *arg_cast_21 = CAST(64, MSB(DUP(VARL("h_tmp68"))), VARL("h_tmp68"));
	RzILOpPure *arg_cast_22 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_26 = ITE(NON_ZERO(VARL("h_tmp66")), VARL("h_tmp69"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cond_26);
	RzILOpPure *cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_31 = SLT(DUP(Rss), cast_32);
	RzILOpPure *op_SUB_33 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_34 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_33));
	RzILOpPure *op_NEG_35 = NEG(op_LSHIFT_34);
	RzILOpPure *op_SUB_36 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_36));
	RzILOpPure *cast_39 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_38 = SUB(op_LSHIFT_37, cast_39);
	RzILOpPure *cond_40 = ITE(op_LT_31, op_NEG_35, op_SUB_38);
	RzILOpPure *cond_41 = ITE(op_EQ_8, DUP(Rss), cond_40);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_41)), cond_41);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp65", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
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
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_29);
	RzILOpEffect *seq_30 = SEQN(3, seq_11, seq_25, op_ASSIGN_28);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_6, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_44, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_LT_32 = LET("const_pos0", DUP(const_pos0), ULT(cast_33, VARLP("const_pos0")));
	RzILOpPure *op_SUB_34 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzILOpPure *op_NEG_36 = NEG(op_LSHIFT_35);
	RzILOpPure *op_SUB_37 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_37));
	RzILOpPure *cast_40 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_LSHIFT_38, cast_40);
	RzILOpPure *cond_41 = ITE(op_LT_32, op_NEG_36, op_SUB_39);
	RzILOpPure *cast_43 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_42 = ITE(op_EQ_8, cast_43, cond_41);
	RzILOpPure *cast_45 = CAST(32, MSB(DUP(cond_42)), cond_42);

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
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_30);
	RzILOpEffect *seq_31 = SEQN(3, seq_12, seq_26, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_44 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_45);
	RzILOpEffect *seq_46 = SEQN(2, seq_6, op_ASSIGN_44);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_46, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sath(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_LT_32 = LET("const_pos0", DUP(const_pos0), ULT(cast_33, VARLP("const_pos0")));
	RzILOpPure *op_SUB_34 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_34));
	RzILOpPure *op_NEG_36 = NEG(op_LSHIFT_35);
	RzILOpPure *op_SUB_37 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_37));
	RzILOpPure *cast_40 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_LSHIFT_38, cast_40);
	RzILOpPure *cond_41 = ITE(op_LT_32, op_NEG_36, op_SUB_39);
	RzILOpPure *cast_43 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_42 = ITE(op_EQ_8, cast_43, cond_41);
	RzILOpPure *cast_45 = CAST(32, MSB(DUP(cond_42)), cond_42);

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
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_30);
	RzILOpEffect *seq_31 = SEQN(3, seq_12, seq_26, op_ASSIGN_29);
	RzILOpEffect *op_ASSIGN_44 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_45);
	RzILOpEffect *seq_46 = SEQN(2, seq_6, op_ASSIGN_44);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_46, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_LT_33 = LET("const_pos0", DUP(const_pos0), ULT(cast_34, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_37 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_36 = SUB(op_LSHIFT_35, cast_37);
	RzILOpPure *cast_39 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_38 = ITE(op_LT_33, cast_39, op_SUB_36);
	RzILOpPure *cast_41 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_40 = ITE(op_EQ_9, cast_41, cond_38);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_40)), cond_40);

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
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_31);
	RzILOpEffect *seq_32 = SEQN(3, seq_13, seq_27, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_6, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_44, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_satuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_LT_33 = LET("const_pos0", DUP(const_pos0), ULT(cast_34, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_35 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_37 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_36 = SUB(op_LSHIFT_35, cast_37);
	RzILOpPure *cast_39 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_38 = ITE(op_LT_33, cast_39, op_SUB_36);
	RzILOpPure *cast_41 = CAST(64, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cond_40 = ITE(op_EQ_9, cast_41, cond_38);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_40)), cond_40);

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
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_31);
	RzILOpEffect *seq_32 = SEQN(3, seq_13, seq_27, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_6, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_44, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rt, Rs);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_10 = SUB(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_10 = SUB(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_10 = SUB(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_RSHIFT_1);
	RzILOpPure *op_AND_2 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_4 = CAST(16, MSB(DUP(op_AND_2)), op_AND_2);
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rs, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_SUB_10 = SUB(cast_st16_4, cast_st16_9);
	RzILOpPure *op_LSHIFT_11 = LET("const_pos16", DUP(const_pos16), SHIFTL0(op_SUB_10, VARLP("const_pos16")));
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_LSHIFT_11)), op_LSHIFT_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_13);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp90"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp92"))), VARL("h_tmp92"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp93"))), VARL("h_tmp93"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp91")), VARL("h_tmp94"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp90", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp91", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp92", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp93", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp94", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp95"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp97"))), VARL("h_tmp97"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp98"))), VARL("h_tmp98"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp96")), VARL("h_tmp99"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp95", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp96", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp97", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp98", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp99", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_lh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp100"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp102"))), VARL("h_tmp102"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp103"))), VARL("h_tmp103"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp101")), VARL("h_tmp104"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp100", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp101", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp102", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp103", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp104", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_h16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp105"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp107"))), VARL("h_tmp107"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp108"))), VARL("h_tmp108"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp106")), VARL("h_tmp109"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *op_LSHIFT_88 = LET("const_pos16", DUP(const_pos16), SHIFTL0(cond_86, VARLP("const_pos16")));
	RzILOpPure *cast_90 = CAST(32, MSB(DUP(op_LSHIFT_88)), op_LSHIFT_88);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp105", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp106", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp107", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp108", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp109", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(2, seq_17, op_ASSIGN_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_91, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp110"), VARLP("const_pos0LL")));
	RzILOpPure *cast_20 = CAST(32, MSB(DUP(cond_18)), cond_18);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp110", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_20);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, op_ASSIGN_19);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp111"), VARLP("const_pos0LL")));
	RzILOpPure *cast_20 = CAST(32, MSB(DUP(cond_18)), cond_18);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp111", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_20);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, op_ASSIGN_19);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_hl(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp112"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp114"))), VARL("h_tmp114"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp115"))), VARL("h_tmp115"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp113")), VARL("h_tmp116"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *cast_89 = CAST(32, MSB(DUP(cond_86)), cond_86);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp112", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp113", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp114", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp115", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp116", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_17, op_ASSIGN_88);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_90, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subh_l16_sat_ll(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *op_AND_3 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_SUB_11 = SUB(cast_st16_5, cast_st16_10);
	RzILOpPure *arg_cast_13 = CAST(64, IL_FALSE, op_SUB_11);
	RzILOpPure *arg_cast_14 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_15 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_18 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp117"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rt), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rs), op_MUL_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_SUB_29 = SUB(cast_st16_23, cast_st16_28);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_SUB_29)), op_SUB_29);
	RzILOpPure *op_EQ_30 = EQ(cond_18, cast_31);
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rt), op_MUL_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, op_RSHIFT_33);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rs), op_MUL_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, op_RSHIFT_38);
	RzILOpPure *op_AND_39 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_40, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_SUB_42 = SUB(cast_st16_36, cast_st16_41);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp119"))), VARL("h_tmp119"));
	RzILOpPure *arg_cast_55 = CAST(64, MSB(DUP(VARL("h_tmp120"))), VARL("h_tmp120"));
	RzILOpPure *arg_cast_56 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_61 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_60 = ITE(NON_ZERO(VARL("h_tmp118")), VARL("h_tmp121"), cast_61);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, cond_60);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rt), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_68, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rs), op_MUL_70);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, op_RSHIFT_71);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_73, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_SUB_75 = SUB(cast_st16_69, cast_st16_74);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, op_SUB_75);
	RzILOpPure *op_LT_76 = LET("const_pos0", DUP(const_pos0), ULT(cast_77, VARLP("const_pos0")));
	RzILOpPure *op_SUB_78 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_SUB_42)), op_SUB_42);
	RzILOpPure *cond_86 = ITE(op_EQ_30, cast_87, cond_85);
	RzILOpPure *cast_89 = CAST(32, MSB(DUP(cond_86)), cond_86);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(arg_cast_13, arg_cast_14, arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp117", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp118", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp119", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp120", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_DEPOSIT64(arg_cast_53, arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp121", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(3, seq_48, seq_51, seq_58);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_63);
	RzILOpEffect *seq_64 = SEQN(3, seq_45, seq_59, op_ASSIGN_62);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_17, op_ASSIGN_88);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_90, seq_64);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rtt, Rss);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_SUB_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_SUB_1 = SUB(VARL("s"), Rs);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_SUB_1);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_subsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_63 = CAST(32, MSB(DUP(cond_61)), cond_61);

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
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(3, seq_26, seq_40, op_ASSIGN_43);
	RzILOpEffect *op_ASSIGN_62 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_63);
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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rt, op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_ADD_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(32, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp127", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp128;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rt, op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_ADD_26 = ADD(cast_st16_19, cast_st16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_ADD_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp129"), VARLP("const_pos0LL")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rs), op_MUL_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, op_RSHIFT_36);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_38, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rt), op_MUL_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, op_RSHIFT_42);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_44, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_ADD_46 = ADD(cast_st16_39, cast_st16_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(op_ADD_46)), op_ADD_46);
	RzILOpPure *op_EQ_47 = EQ(cond_33, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rs), op_MUL_49);
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, op_RSHIFT_51);
	RzILOpPure *op_AND_52 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rt), op_MUL_55);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, op_RSHIFT_57);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_59, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_60 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *op_ADD_61 = ADD(cast_st16_54, cast_st16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp131"))), VARL("h_tmp131"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp132"))), VARL("h_tmp132"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp130")), VARL("h_tmp133"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rs), op_MUL_84);
	RzILOpPure *cast_88 = CAST(32, IL_FALSE, op_RSHIFT_86);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_88, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rt), op_MUL_90);
	RzILOpPure *cast_94 = CAST(32, IL_FALSE, op_RSHIFT_92);
	RzILOpPure *op_AND_93 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_94, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_116 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_115 = LOGOR(cast_116, op_LSHIFT_114);
	RzILOpPure *cast_118 = CAST(32, MSB(DUP(op_OR_115)), op_OR_115);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp128", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp129", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp130", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp131", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp132", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp133", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_117 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_118);
	RzILOpEffect *seq_119 = SEQN(2, seq_32, op_ASSIGN_117);
	RzILOpEffect *empty_120 = EMPTY();
	RzILOpEffect *seq_121 = SEQN(2, seq_119, empty_120);
	RzILOpEffect *seq_122 = SEQN(2, seq_6, seq_121);
	RzILOpEffect *for_124 = REPEAT(op_LT_2, seq_122);
	RzILOpEffect *seq_123 = SEQN(2, op_ASSIGN_0, for_124);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_123, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp134;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_19 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rt, op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_23);
	RzILOpPure *op_ADD_26 = ADD(cast_ut16_19, cast_ut16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_ADD_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp135"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rs), op_MUL_35);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, op_RSHIFT_37);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_39, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_40 = CAST(16, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rt), op_MUL_41);
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, op_RSHIFT_43);
	RzILOpPure *op_AND_44 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *op_ADD_47 = ADD(cast_ut16_40, cast_ut16_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_ADD_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rs), op_MUL_50);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, op_RSHIFT_52);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_54, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos16", DUP(const_pos16), MUL(cast_57, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rt), op_MUL_56);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, op_RSHIFT_58);
	RzILOpPure *op_AND_59 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_61 = CAST(16, IL_FALSE, op_AND_59);
	RzILOpPure *op_ADD_62 = ADD(cast_ut16_55, cast_ut16_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp137"))), VARL("h_tmp137"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp138"))), VARL("h_tmp138"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp136")), VARL("h_tmp139"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rs), op_MUL_85);
	RzILOpPure *cast_89 = CAST(32, IL_FALSE, op_RSHIFT_87);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_89, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_90 = CAST(16, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos16", DUP(const_pos16), MUL(cast_92, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rt), op_MUL_91);
	RzILOpPure *cast_95 = CAST(32, IL_FALSE, op_RSHIFT_93);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_95, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_114 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_113 = LOGOR(cast_114, op_LSHIFT_112);
	RzILOpPure *cast_116 = CAST(32, MSB(DUP(op_OR_113)), op_OR_113);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp134", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp135", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp136", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp137", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp138", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp139", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_115 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_116);
	RzILOpEffect *seq_117 = SEQN(2, seq_32, op_ASSIGN_115);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *seq_119 = SEQN(2, seq_117, empty_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_6, seq_119);
	RzILOpEffect *for_122 = REPEAT(op_LT_2, seq_120);
	RzILOpEffect *seq_121 = SEQN(2, op_ASSIGN_0, for_122);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_121, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp140;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rt, op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp140", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svavghs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp141;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rt, op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_23, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(32, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp141", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_6, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_2, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_0, for_42);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp142;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_25, VARLP("const_pos1")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_28, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_27);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(32, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp142", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp143;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_RSHIFT_15);
	RzILOpPure *op_AND_16 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_17, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rs, op_MUL_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, op_RSHIFT_21);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(32, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp143", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp144;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rs, op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_19, cast_st16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_SUB_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_33 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp145"), VARLP("const_pos0LL")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rt), op_MUL_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, op_RSHIFT_36);
	RzILOpPure *op_AND_37 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_38, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rs), op_MUL_40);
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, op_RSHIFT_42);
	RzILOpPure *op_AND_43 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_44, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_SUB_46 = SUB(cast_st16_39, cast_st16_45);
	RzILOpPure *cast_48 = CAST(64, MSB(DUP(op_SUB_46)), op_SUB_46);
	RzILOpPure *op_EQ_47 = EQ(cond_33, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rt), op_MUL_49);
	RzILOpPure *cast_53 = CAST(32, IL_FALSE, op_RSHIFT_51);
	RzILOpPure *op_AND_52 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rs), op_MUL_55);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, op_RSHIFT_57);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_59, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_60 = CAST(16, MSB(DUP(op_AND_58)), op_AND_58);
	RzILOpPure *op_SUB_61 = SUB(cast_st16_54, cast_st16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp147"))), VARL("h_tmp147"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp148"))), VARL("h_tmp148"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp146")), VARL("h_tmp149"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rt), op_MUL_84);
	RzILOpPure *cast_88 = CAST(32, IL_FALSE, op_RSHIFT_86);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_88, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rs), op_MUL_90);
	RzILOpPure *cast_94 = CAST(32, IL_FALSE, op_RSHIFT_92);
	RzILOpPure *op_AND_93 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_94, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_116 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_115 = LOGOR(cast_116, op_LSHIFT_114);
	RzILOpPure *cast_118 = CAST(32, MSB(DUP(op_OR_115)), op_OR_115);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp144", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_SEXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp145", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp146", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp147", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp148", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp149", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_117 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_118);
	RzILOpEffect *seq_119 = SEQN(2, seq_32, op_ASSIGN_117);
	RzILOpEffect *empty_120 = EMPTY();
	RzILOpEffect *seq_121 = SEQN(2, seq_119, empty_120);
	RzILOpEffect *seq_122 = SEQN(2, seq_6, seq_121);
	RzILOpEffect *for_124 = REPEAT(op_LT_2, seq_122);
	RzILOpEffect *seq_123 = SEQN(2, op_ASSIGN_0, for_124);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_123, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_svsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp150;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_RSHIFT_16);
	RzILOpPure *op_AND_17 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_18, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_19 = CAST(16, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(Rs, op_MUL_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, op_RSHIFT_22);
	RzILOpPure *op_AND_23 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_24, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_25 = CAST(16, IL_FALSE, op_AND_23);
	RzILOpPure *op_SUB_26 = SUB(cast_ut16_19, cast_ut16_25);
	RzILOpPure *arg_cast_28 = CAST(64, IL_FALSE, op_SUB_26);
	RzILOpPure *arg_cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_30 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_34 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_33 = ITE(op_NE_13, VARL("h_tmp151"), cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rt), op_MUL_35);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, op_RSHIFT_37);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_39, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_40 = CAST(16, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rs), op_MUL_41);
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, op_RSHIFT_43);
	RzILOpPure *op_AND_44 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *op_SUB_47 = SUB(cast_ut16_40, cast_ut16_46);
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, op_SUB_47);
	RzILOpPure *op_EQ_48 = EQ(cond_33, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rt), op_MUL_50);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, op_RSHIFT_52);
	RzILOpPure *op_AND_53 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_54, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_55 = CAST(16, IL_FALSE, op_AND_53);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_56 = LET("const_pos16", DUP(const_pos16), MUL(cast_57, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_58 = SHIFTR0(DUP(Rs), op_MUL_56);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, op_RSHIFT_58);
	RzILOpPure *op_AND_59 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_61 = CAST(16, IL_FALSE, op_AND_59);
	RzILOpPure *op_SUB_62 = SUB(cast_ut16_55, cast_ut16_61);
	RzILOpPure *arg_cast_73 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp153"))), VARL("h_tmp153"));
	RzILOpPure *arg_cast_75 = CAST(64, MSB(DUP(VARL("h_tmp154"))), VARL("h_tmp154"));
	RzILOpPure *arg_cast_76 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_81 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_80 = ITE(NON_ZERO(VARL("h_tmp152")), VARL("h_tmp155"), cast_81);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, cond_80);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_85 = LET("const_pos16", DUP(const_pos16), MUL(cast_86, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rt), op_MUL_85);
	RzILOpPure *cast_89 = CAST(32, IL_FALSE, op_RSHIFT_87);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_89, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_90 = CAST(16, IL_FALSE, op_AND_88);
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos16", DUP(const_pos16), MUL(cast_92, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rs), op_MUL_91);
	RzILOpPure *cast_95 = CAST(32, IL_FALSE, op_RSHIFT_93);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_95, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_114 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_113 = LOGOR(cast_114, op_LSHIFT_112);
	RzILOpPure *cast_116 = CAST(32, MSB(DUP(op_OR_113)), op_OR_113);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp150", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_27 = HEX_EXTRACT64(arg_cast_28, arg_cast_29, arg_cast_30);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp151", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_27, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp152", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp153", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp154", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_72 = HEX_DEPOSIT64(arg_cast_73, arg_cast_74, arg_cast_75, arg_cast_76);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp155", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_72, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *seq_79 = SEQN(3, seq_68, seq_71, seq_78);
	RzILOpEffect *op_ASSIGN_82 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_83);
	RzILOpEffect *seq_84 = SEQN(3, seq_65, seq_79, op_ASSIGN_82);
	RzILOpEffect *op_ASSIGN_115 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_116);
	RzILOpEffect *seq_117 = SEQN(2, seq_32, op_ASSIGN_115);
	RzILOpEffect *empty_118 = EMPTY();
	RzILOpEffect *seq_119 = SEQN(2, seq_117, empty_118);
	RzILOpEffect *seq_120 = SEQN(2, seq_6, seq_119);
	RzILOpEffect *for_122 = REPEAT(op_LT_2, seq_120);
	RzILOpEffect *seq_121 = SEQN(2, op_ASSIGN_0, for_122);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_121, seq_84);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_swiz(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_11 = CAST(64, MSB(DUP(cast_st8_9)), cast_st8_9);
	RzILOpPure *op_AND_10 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_11, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_12 = CAST(64, IL_FALSE, op_AND_10);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_12, op_MUL_13);
	RzILOpPure *cast_16 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_15 = LOGOR(cast_16, op_LSHIFT_14);
	RzILOpPure *cast_18 = CAST(32, MSB(DUP(op_OR_15)), op_OR_15);
	RzILOpPure *op_MUL_20 = LET("const_pos1", const_pos1, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_20));
	RzILOpPure *op_NOT_22 = LOGNOT(op_LSHIFT_21);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_23 = LOGAND(cast_24, op_NOT_22);
	RzILOpPure *op_MUL_25 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rs), op_MUL_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_28, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_29 = CAST(8, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(cast_st8_29)), cast_st8_29);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_31, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, op_AND_30);
	RzILOpPure *op_MUL_33 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_ut64_32, op_MUL_33);
	RzILOpPure *cast_36 = CAST(64, IL_FALSE, op_AND_23);
	RzILOpPure *op_OR_35 = LOGOR(cast_36, op_LSHIFT_34);
	RzILOpPure *cast_38 = CAST(32, MSB(DUP(op_OR_35)), op_OR_35);
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_41 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_40));
	RzILOpPure *op_NOT_42 = LOGNOT(op_LSHIFT_41);
	RzILOpPure *cast_44 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_43 = LOGAND(cast_44, op_NOT_42);
	RzILOpPure *op_MUL_45 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rs), op_MUL_45);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, op_RSHIFT_46);
	RzILOpPure *op_AND_47 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_48, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_49 = CAST(8, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_51 = CAST(64, MSB(DUP(cast_st8_49)), cast_st8_49);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_51, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_52 = CAST(64, IL_FALSE, op_AND_50);
	RzILOpPure *op_MUL_53 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_54 = SHIFTL0(cast_ut64_52, op_MUL_53);
	RzILOpPure *cast_56 = CAST(64, IL_FALSE, op_AND_43);
	RzILOpPure *op_OR_55 = LOGOR(cast_56, op_LSHIFT_54);
	RzILOpPure *cast_58 = CAST(32, MSB(DUP(op_OR_55)), op_OR_55);
	RzILOpPure *op_MUL_60 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_61 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_60));
	RzILOpPure *op_NOT_62 = LOGNOT(op_LSHIFT_61);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_63 = LOGAND(cast_64, op_NOT_62);
	RzILOpPure *op_MUL_65 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rs), op_MUL_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_RSHIFT_66);
	RzILOpPure *op_AND_67 = LET("const_pos0xff", DUP(const_pos0xff), LOGAND(cast_68, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_69 = CAST(8, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_71 = CAST(64, MSB(DUP(cast_st8_69)), cast_st8_69);
	RzILOpPure *op_AND_70 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_71, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_72 = CAST(64, IL_FALSE, op_AND_70);
	RzILOpPure *op_MUL_73 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(cast_ut64_72, op_MUL_73);
	RzILOpPure *cast_76 = CAST(64, IL_FALSE, op_AND_63);
	RzILOpPure *op_OR_75 = LOGOR(cast_76, op_LSHIFT_74);
	RzILOpPure *cast_78 = CAST(32, MSB(DUP(op_OR_75)), op_OR_75);

	// WRITE
	RzILOpEffect *op_ASSIGN_17 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_18);
	RzILOpEffect *empty_19 = EMPTY();
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_38);
	RzILOpEffect *empty_39 = EMPTY();
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_58);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *op_ASSIGN_77 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_78);
	RzILOpEffect *empty_79 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_17, empty_19, op_ASSIGN_37, empty_39, op_ASSIGN_57, empty_59, op_ASSIGN_77, empty_79);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp156", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp157", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *seq_10 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_sxtw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(DUP(cast_st32_0)), cast_st32_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_st64_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, Rs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrcrr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Cs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Cs = VARG(Cs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, Cs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrih(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
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
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_10)), op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_13);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, op_ASSIGN_12, empty_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfril(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
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
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(op_OR_10)), op_OR_10);

	// WRITE
	RzILOpEffect *imm_assign_5 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_12 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_13);
	RzILOpEffect *empty_14 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_5, op_ASSIGN_12, empty_14);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrrcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Cd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Cd_assoc_tmp, Rs);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_0);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_tfrsi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("s"));
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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_st16_17);
	RzILOpPure *op_LT_18 = LET("const_pos0", DUP(const_pos0), ULT(cast_19, VARLP("const_pos0")));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *cast_24 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *op_NEG_26 = NEG(cast_st16_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cond_33 = ITE(op_LT_18, op_NEG_26, cast_st16_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, cond_33);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_35, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, op_AND_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos16", DUP(const_pos16), MUL(cast_38, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_39 = SHIFTL0(cast_ut64_36, op_MUL_37);
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_40 = LOGOR(cast_41, op_LSHIFT_39);
	RzILOpPure *cast_43 = CAST(64, MSB(DUP(op_OR_40)), op_OR_40);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp158", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_43);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_45 = SEQN(2, op_ASSIGN_42, empty_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_6, seq_45);
	RzILOpEffect *for_48 = REPEAT(op_LT_2, seq_46);
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_0, for_48);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabshsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp159;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, cast_st16_18);
	RzILOpPure *op_LT_19 = LET("const_pos0", DUP(const_pos0), ULT(cast_20, VARLP("const_pos0")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *cast_25 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_24 = LOGAND(op_RSHIFT_23, cast_25);
	RzILOpPure *cast_st16_26 = CAST(16, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *op_NEG_27 = NEG(cast_st16_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cond_34 = ITE(op_LT_19, op_NEG_27, cast_st16_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cond_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_41 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp160"), VARLP("const_pos0LL")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, cast_st16_47);
	RzILOpPure *op_LT_48 = LET("const_pos0", DUP(const_pos0), ULT(cast_49, VARLP("const_pos0")));
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st16_55 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *op_NEG_56 = NEG(cast_st16_55);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_57 = LET("const_pos16", DUP(const_pos16), MUL(cast_58, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rss), op_MUL_57);
	RzILOpPure *cast_61 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_60 = LOGAND(op_RSHIFT_59, cast_61);
	RzILOpPure *cast_st16_62 = CAST(16, MSB(DUP(op_AND_60)), op_AND_60);
	RzILOpPure *cond_63 = ITE(op_LT_48, op_NEG_56, cast_st16_62);
	RzILOpPure *cast_65 = CAST(64, MSB(DUP(cond_63)), cond_63);
	RzILOpPure *op_EQ_64 = EQ(cond_41, cast_65);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_66 = LET("const_pos16", DUP(const_pos16), MUL(cast_67, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rss), op_MUL_66);
	RzILOpPure *cast_70 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_69 = LOGAND(op_RSHIFT_68, cast_70);
	RzILOpPure *cast_st16_71 = CAST(16, MSB(DUP(op_AND_69)), op_AND_69);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, cast_st16_71);
	RzILOpPure *op_LT_72 = LET("const_pos0", DUP(const_pos0), ULT(cast_73, VARLP("const_pos0")));
	RzILOpPure *cast_75 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_74 = LET("const_pos16", DUP(const_pos16), MUL(cast_75, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rss), op_MUL_74);
	RzILOpPure *cast_78 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st16_79 = CAST(16, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *op_NEG_80 = NEG(cast_st16_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos16", DUP(const_pos16), MUL(cast_82, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rss), op_MUL_81);
	RzILOpPure *cast_85 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_84 = LOGAND(op_RSHIFT_83, cast_85);
	RzILOpPure *cast_st16_86 = CAST(16, MSB(DUP(op_AND_84)), op_AND_84);
	RzILOpPure *cond_87 = ITE(op_LT_72, op_NEG_80, cast_st16_86);
	RzILOpPure *arg_cast_98 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_99 = CAST(64, MSB(DUP(VARL("h_tmp162"))), VARL("h_tmp162"));
	RzILOpPure *arg_cast_100 = CAST(64, MSB(DUP(VARL("h_tmp163"))), VARL("h_tmp163"));
	RzILOpPure *arg_cast_101 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_105 = ITE(NON_ZERO(VARL("h_tmp161")), VARL("h_tmp164"), cast_106);
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, cond_105);
	RzILOpPure *cast_111 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_110 = LET("const_pos16", DUP(const_pos16), MUL(cast_111, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rss), op_MUL_110);
	RzILOpPure *cast_114 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_113 = LOGAND(op_RSHIFT_112, cast_114);
	RzILOpPure *cast_st16_115 = CAST(16, MSB(DUP(op_AND_113)), op_AND_113);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, cast_st16_115);
	RzILOpPure *op_LT_116 = LET("const_pos0", DUP(const_pos0), ULT(cast_117, VARLP("const_pos0")));
	RzILOpPure *cast_119 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_118 = LET("const_pos16", DUP(const_pos16), MUL(cast_119, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_118);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_NEG_124 = NEG(cast_st16_123);
	RzILOpPure *cast_126 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_125 = LET("const_pos16", DUP(const_pos16), MUL(cast_126, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_127 = SHIFTR0(DUP(Rss), op_MUL_125);
	RzILOpPure *cast_129 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_128 = LOGAND(op_RSHIFT_127, cast_129);
	RzILOpPure *cast_st16_130 = CAST(16, MSB(DUP(op_AND_128)), op_AND_128);
	RzILOpPure *cond_131 = ITE(op_LT_116, op_NEG_124, cast_st16_130);
	RzILOpPure *cast_133 = CAST(32, IL_FALSE, cond_131);
	RzILOpPure *op_LT_132 = LET("const_pos0", DUP(const_pos0), ULT(cast_133, VARLP("const_pos0")));
	RzILOpPure *op_SUB_134 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_135 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_134));
	RzILOpPure *op_NEG_136 = NEG(op_LSHIFT_135);
	RzILOpPure *op_SUB_137 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_138 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_137));
	RzILOpPure *cast_140 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_139 = SUB(op_LSHIFT_138, cast_140);
	RzILOpPure *cond_141 = ITE(op_LT_132, op_NEG_136, op_SUB_139);
	RzILOpPure *cast_143 = CAST(64, MSB(DUP(cond_87)), cond_87);
	RzILOpPure *cond_142 = ITE(op_EQ_64, cast_143, cond_141);
	RzILOpPure *cast_145 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_144 = LOGAND(cond_142, cast_145);
	RzILOpPure *cast_ut64_146 = CAST(64, IL_FALSE, op_AND_144);
	RzILOpPure *cast_148 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_147 = LET("const_pos16", DUP(const_pos16), MUL(cast_148, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_149 = SHIFTL0(cast_ut64_146, op_MUL_147);
	RzILOpPure *cast_151 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_150 = LOGOR(cast_151, op_LSHIFT_149);
	RzILOpPure *cast_153 = CAST(64, MSB(DUP(op_OR_150)), op_OR_150);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp159", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp160", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_88 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_89 = SETL("h_tmp161", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_90 = SEQN(2, c_call_88, op_ASSIGN_hybrid_tmp_89);
	RzILOpEffect *c_call_91 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_92 = SETL("h_tmp162", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_93 = SEQN(2, c_call_91, op_ASSIGN_hybrid_tmp_92);
	RzILOpEffect *c_call_94 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_95 = SETL("h_tmp163", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_96 = SEQN(2, c_call_94, op_ASSIGN_hybrid_tmp_95);
	RzILOpEffect *c_call_97 = HEX_DEPOSIT64(arg_cast_98, arg_cast_99, arg_cast_100, arg_cast_101);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_102 = SETL("h_tmp164", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_103 = SEQN(2, c_call_97, op_ASSIGN_hybrid_tmp_102);
	RzILOpEffect *seq_104 = SEQN(3, seq_93, seq_96, seq_103);
	RzILOpEffect *op_ASSIGN_107 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_108);
	RzILOpEffect *seq_109 = SEQN(3, seq_90, seq_104, op_ASSIGN_107);
	RzILOpEffect *op_ASSIGN_152 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_153);
	RzILOpEffect *seq_154 = SEQN(2, seq_40, op_ASSIGN_152);
	RzILOpEffect *empty_155 = EMPTY();
	RzILOpEffect *seq_156 = SEQN(2, seq_154, empty_155);
	RzILOpEffect *seq_157 = SEQN(2, seq_6, seq_156);
	RzILOpEffect *for_159 = REPEAT(op_LT_2, seq_157);
	RzILOpEffect *seq_158 = SEQN(2, op_ASSIGN_0, for_159);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_158, seq_109);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabsw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp165;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_18 = SLT(cast_st64_17, cast_19);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_23 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_22, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(DUP(cast_st32_24)), cast_st32_24);
	RzILOpPure *op_NEG_26 = NEG(cast_st64_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *cond_33 = ITE(op_LT_18, op_NEG_26, cast_st64_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(op_AND_34, op_MUL_35);
	RzILOpPure *op_OR_38 = LOGOR(op_AND_11, op_LSHIFT_37);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp165", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_38);
	RzILOpEffect *empty_40 = EMPTY();
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_39, empty_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_6, seq_41);
	RzILOpEffect *for_44 = REPEAT(op_LT_2, seq_42);
	RzILOpEffect *seq_43 = SEQN(2, op_ASSIGN_0, for_44);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_43);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vabswsat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp166;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_20 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_19 = SLT(cast_st64_18, cast_20);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_21);
	RzILOpPure *op_AND_24 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_23, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_25 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);
	RzILOpPure *cast_st64_26 = CAST(64, MSB(DUP(cast_st32_25)), cast_st32_25);
	RzILOpPure *op_NEG_27 = NEG(cast_st64_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(DUP(cast_st32_32)), cast_st32_32);
	RzILOpPure *cond_34 = ITE(op_LT_19, op_NEG_27, cast_st64_33);
	RzILOpPure *arg_cast_36 = CAST(64, IL_FALSE, cond_34);
	RzILOpPure *arg_cast_37 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_38 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_41 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp167"), VARLP("const_pos0LL")));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos32", DUP(const_pos32), MUL(cast_43, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_46 = CAST(32, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_st64_47 = CAST(64, MSB(DUP(cast_st32_46)), cast_st32_46);
	RzILOpPure *cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_48 = SLT(cast_st64_47, cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos32", DUP(const_pos32), MUL(cast_51, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(DUP(cast_st32_54)), cast_st32_54);
	RzILOpPure *op_NEG_56 = NEG(cast_st64_55);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_57 = LET("const_pos32", DUP(const_pos32), MUL(cast_58, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rss), op_MUL_57);
	RzILOpPure *op_AND_60 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_61 = CAST(32, MSB(DUP(op_AND_60)), op_AND_60);
	RzILOpPure *cast_st64_62 = CAST(64, MSB(DUP(cast_st32_61)), cast_st32_61);
	RzILOpPure *cond_63 = ITE(op_LT_48, op_NEG_56, cast_st64_62);
	RzILOpPure *op_EQ_64 = EQ(cond_41, cond_63);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos32", DUP(const_pos32), MUL(cast_66, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rss), op_MUL_65);
	RzILOpPure *op_AND_68 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_67, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_69 = CAST(32, MSB(DUP(op_AND_68)), op_AND_68);
	RzILOpPure *cast_st64_70 = CAST(64, MSB(DUP(cast_st32_69)), cast_st32_69);
	RzILOpPure *cast_72 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_71 = SLT(cast_st64_70, cast_72);
	RzILOpPure *cast_74 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_73 = LET("const_pos32", DUP(const_pos32), MUL(cast_74, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rss), op_MUL_73);
	RzILOpPure *op_AND_76 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_75, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_77 = CAST(32, MSB(DUP(op_AND_76)), op_AND_76);
	RzILOpPure *cast_st64_78 = CAST(64, MSB(DUP(cast_st32_77)), cast_st32_77);
	RzILOpPure *op_NEG_79 = NEG(cast_st64_78);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_80 = LET("const_pos32", DUP(const_pos32), MUL(cast_81, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rss), op_MUL_80);
	RzILOpPure *op_AND_83 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_82, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_84 = CAST(32, MSB(DUP(op_AND_83)), op_AND_83);
	RzILOpPure *cast_st64_85 = CAST(64, MSB(DUP(cast_st32_84)), cast_st32_84);
	RzILOpPure *cond_86 = ITE(op_LT_71, op_NEG_79, cast_st64_85);
	RzILOpPure *arg_cast_97 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_98 = CAST(64, MSB(DUP(VARL("h_tmp169"))), VARL("h_tmp169"));
	RzILOpPure *arg_cast_99 = CAST(64, MSB(DUP(VARL("h_tmp170"))), VARL("h_tmp170"));
	RzILOpPure *arg_cast_100 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_105 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_104 = ITE(NON_ZERO(VARL("h_tmp168")), VARL("h_tmp171"), cast_105);
	RzILOpPure *cast_107 = CAST(32, IL_FALSE, cond_104);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos32", DUP(const_pos32), MUL(cast_110, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_112 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_111, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_113 = CAST(32, MSB(DUP(op_AND_112)), op_AND_112);
	RzILOpPure *cast_st64_114 = CAST(64, MSB(DUP(cast_st32_113)), cast_st32_113);
	RzILOpPure *cast_116 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_115 = SLT(cast_st64_114, cast_116);
	RzILOpPure *cast_118 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_117 = LET("const_pos32", DUP(const_pos32), MUL(cast_118, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_119 = SHIFTR0(DUP(Rss), op_MUL_117);
	RzILOpPure *op_AND_120 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_119, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_121 = CAST(32, MSB(DUP(op_AND_120)), op_AND_120);
	RzILOpPure *cast_st64_122 = CAST(64, MSB(DUP(cast_st32_121)), cast_st32_121);
	RzILOpPure *op_NEG_123 = NEG(cast_st64_122);
	RzILOpPure *cast_125 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_124 = LET("const_pos32", DUP(const_pos32), MUL(cast_125, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(op_AND_127)), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *cond_130 = ITE(op_LT_115, op_NEG_123, cast_st64_129);
	RzILOpPure *cast_132 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_131 = SLT(cond_130, cast_132);
	RzILOpPure *op_SUB_133 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_134 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_133));
	RzILOpPure *op_NEG_135 = NEG(op_LSHIFT_134);
	RzILOpPure *op_SUB_136 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_136));
	RzILOpPure *cast_139 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_138 = SUB(op_LSHIFT_137, cast_139);
	RzILOpPure *cond_140 = ITE(op_LT_131, op_NEG_135, op_SUB_138);
	RzILOpPure *cond_141 = ITE(op_EQ_64, cond_86, cond_140);
	RzILOpPure *op_AND_142 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_141, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_144 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_143 = LET("const_pos32", DUP(const_pos32), MUL(cast_144, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_145 = SHIFTL0(op_AND_142, op_MUL_143);
	RzILOpPure *op_OR_146 = LOGOR(op_AND_11, op_LSHIFT_145);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp166", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_35 = HEX_SEXTRACT64(arg_cast_36, arg_cast_37, arg_cast_38);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp167", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_87 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_88 = SETL("h_tmp168", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_89 = SEQN(2, c_call_87, op_ASSIGN_hybrid_tmp_88);
	RzILOpEffect *c_call_90 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_91 = SETL("h_tmp169", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_92 = SEQN(2, c_call_90, op_ASSIGN_hybrid_tmp_91);
	RzILOpEffect *c_call_93 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_94 = SETL("h_tmp170", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_95 = SEQN(2, c_call_93, op_ASSIGN_hybrid_tmp_94);
	RzILOpEffect *c_call_96 = HEX_DEPOSIT64(arg_cast_97, arg_cast_98, arg_cast_99, arg_cast_100);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp171", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *seq_103 = SEQN(3, seq_92, seq_95, seq_102);
	RzILOpEffect *op_ASSIGN_106 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_107);
	RzILOpEffect *seq_108 = SEQN(3, seq_89, seq_103, op_ASSIGN_106);
	RzILOpEffect *op_ASSIGN_147 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_146);
	RzILOpEffect *seq_148 = SEQN(2, seq_40, op_ASSIGN_147);
	RzILOpEffect *empty_149 = EMPTY();
	RzILOpEffect *seq_150 = SEQN(2, seq_148, empty_149);
	RzILOpEffect *seq_151 = SEQN(2, seq_6, seq_150);
	RzILOpEffect *for_153 = REPEAT(op_LT_2, seq_151);
	RzILOpEffect *seq_152 = SEQN(2, op_ASSIGN_0, for_153);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_152, seq_108);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp172;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_ADD_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_OR_31)), op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp172", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp173;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_st16_18, cast_st16_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_ADD_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp174"), VARLP("const_pos0LL")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(cast_34, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_st16_38 = CAST(16, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos16", DUP(const_pos16), MUL(cast_40, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st16_44 = CAST(16, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *op_ADD_45 = ADD(cast_st16_38, cast_st16_44);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_ADD_45)), op_ADD_45);
	RzILOpPure *op_EQ_46 = EQ(cond_32, cast_47);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(cast_49, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *cast_52 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_51 = LOGAND(op_RSHIFT_50, cast_52);
	RzILOpPure *cast_st16_53 = CAST(16, MSB(DUP(op_AND_51)), op_AND_51);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_54 = LET("const_pos16", DUP(const_pos16), MUL(cast_55, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rtt), op_MUL_54);
	RzILOpPure *cast_58 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *op_ADD_60 = ADD(cast_st16_53, cast_st16_59);
	RzILOpPure *arg_cast_71 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_72 = CAST(64, MSB(DUP(VARL("h_tmp176"))), VARL("h_tmp176"));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp177"))), VARL("h_tmp177"));
	RzILOpPure *arg_cast_74 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_79 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_78 = ITE(NON_ZERO(VARL("h_tmp175")), VARL("h_tmp178"), cast_79);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_83);
	RzILOpPure *cast_87 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos16", DUP(const_pos16), MUL(cast_90, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rtt), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st16_94 = CAST(16, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *op_ADD_95 = ADD(cast_st16_88, cast_st16_94);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, op_ADD_95);
	RzILOpPure *op_LT_96 = LET("const_pos0", DUP(const_pos0), ULT(cast_97, VARLP("const_pos0")));
	RzILOpPure *op_SUB_98 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_98));
	RzILOpPure *op_NEG_100 = NEG(op_LSHIFT_99);
	RzILOpPure *op_SUB_101 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_102 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_101));
	RzILOpPure *cast_104 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_103 = SUB(op_LSHIFT_102, cast_104);
	RzILOpPure *cond_105 = ITE(op_LT_96, op_NEG_100, op_SUB_103);
	RzILOpPure *cast_107 = CAST(64, MSB(DUP(op_ADD_60)), op_ADD_60);
	RzILOpPure *cond_106 = ITE(op_EQ_46, cast_107, cond_105);
	RzILOpPure *cast_109 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_108 = LOGAND(cond_106, cast_109);
	RzILOpPure *cast_ut64_110 = CAST(64, IL_FALSE, op_AND_108);
	RzILOpPure *cast_112 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_111 = LET("const_pos16", DUP(const_pos16), MUL(cast_112, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_113 = SHIFTL0(cast_ut64_110, op_MUL_111);
	RzILOpPure *cast_115 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_114 = LOGOR(cast_115, op_LSHIFT_113);
	RzILOpPure *cast_117 = CAST(64, MSB(DUP(op_OR_114)), op_OR_114);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp173", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_SEXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp174", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_61 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_62 = SETL("h_tmp175", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_63 = SEQN(2, c_call_61, op_ASSIGN_hybrid_tmp_62);
	RzILOpEffect *c_call_64 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_65 = SETL("h_tmp176", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_66 = SEQN(2, c_call_64, op_ASSIGN_hybrid_tmp_65);
	RzILOpEffect *c_call_67 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp177", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *c_call_70 = HEX_DEPOSIT64(arg_cast_71, arg_cast_72, arg_cast_73, arg_cast_74);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp178", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(3, seq_66, seq_69, seq_76);
	RzILOpEffect *op_ASSIGN_80 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(3, seq_63, seq_77, op_ASSIGN_80);
	RzILOpEffect *op_ASSIGN_116 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_117);
	RzILOpEffect *seq_118 = SEQN(2, seq_31, op_ASSIGN_116);
	RzILOpEffect *empty_119 = EMPTY();
	RzILOpEffect *seq_120 = SEQN(2, seq_118, empty_119);
	RzILOpEffect *seq_121 = SEQN(2, seq_6, seq_120);
	RzILOpEffect *for_123 = REPEAT(op_LT_2, seq_121);
	RzILOpEffect *seq_122 = SEQN(2, op_ASSIGN_0, for_123);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_122, seq_82);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp179;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_ut8_17, cast_ut8_23);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_ADD_24)), op_ADD_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_26, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos8", DUP(const_pos8), MUL(cast_29, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_OR_31)), op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp179", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddubs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp180;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut8_18, cast_ut8_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_ADD_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_33 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = ITE(op_NE_12, VARL("h_tmp181"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(cast_35, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_ut8_39 = CAST(8, IL_FALSE, op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos8", DUP(const_pos8), MUL(cast_41, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_ut8_45 = CAST(8, IL_FALSE, op_AND_43);
	RzILOpPure *op_ADD_46 = ADD(cast_ut8_39, cast_ut8_45);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_ADD_46);
	RzILOpPure *op_EQ_47 = EQ(cond_32, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos8", DUP(const_pos8), MUL(cast_50, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_ut8_54 = CAST(8, IL_FALSE, op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos8", DUP(const_pos8), MUL(cast_56, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_ut8_60 = CAST(8, IL_FALSE, op_AND_58);
	RzILOpPure *op_ADD_61 = ADD(cast_ut8_54, cast_ut8_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp183"))), VARL("h_tmp183"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp184"))), VARL("h_tmp184"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp182")), VARL("h_tmp185"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos8", DUP(const_pos8), MUL(cast_85, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_ut8_89 = CAST(8, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos8", DUP(const_pos8), MUL(cast_91, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rtt), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_ut8_95 = CAST(8, IL_FALSE, op_AND_93);
	RzILOpPure *op_ADD_96 = ADD(cast_ut8_89, cast_ut8_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_ADD_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_101 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_100 = SUB(op_LSHIFT_99, cast_101);
	RzILOpPure *cast_103 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_102 = ITE(op_LT_97, cast_103, op_SUB_100);
	RzILOpPure *cast_105 = CAST(64, MSB(DUP(op_ADD_61)), op_ADD_61);
	RzILOpPure *cond_104 = ITE(op_EQ_47, cast_105, cond_102);
	RzILOpPure *op_AND_106 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_104, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_107 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_108 = LET("const_pos8", DUP(const_pos8), MUL(cast_109, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_110 = SHIFTL0(cast_ut64_107, op_MUL_108);
	RzILOpPure *cast_112 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_111 = LOGOR(cast_112, op_LSHIFT_110);
	RzILOpPure *cast_114 = CAST(64, MSB(DUP(op_OR_111)), op_OR_111);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp180", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_EXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp181", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp182", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp183", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp184", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp185", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_113 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_114);
	RzILOpEffect *seq_115 = SEQN(2, seq_31, op_ASSIGN_113);
	RzILOpEffect *empty_116 = EMPTY();
	RzILOpEffect *seq_117 = SEQN(2, seq_115, empty_116);
	RzILOpEffect *seq_118 = SEQN(2, seq_6, seq_117);
	RzILOpEffect *for_120 = REPEAT(op_LT_2, seq_118);
	RzILOpEffect *seq_119 = SEQN(2, op_ASSIGN_0, for_120);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_119, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vadduhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp186;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_ADD_25 = ADD(cast_ut16_18, cast_ut16_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_ADD_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_33 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = ITE(op_NE_12, VARL("h_tmp187"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_ut16_39 = CAST(16, IL_FALSE, op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_ut16_45 = CAST(16, IL_FALSE, op_AND_43);
	RzILOpPure *op_ADD_46 = ADD(cast_ut16_39, cast_ut16_45);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_ADD_46);
	RzILOpPure *op_EQ_47 = EQ(cond_32, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rss), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_ut16_54 = CAST(16, IL_FALSE, op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rtt), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_ut16_60 = CAST(16, IL_FALSE, op_AND_58);
	RzILOpPure *op_ADD_61 = ADD(cast_ut16_54, cast_ut16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp189"))), VARL("h_tmp189"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp190"))), VARL("h_tmp190"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp188")), VARL("h_tmp191"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_ut16_89 = CAST(16, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rtt), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_ut16_95 = CAST(16, IL_FALSE, op_AND_93);
	RzILOpPure *op_ADD_96 = ADD(cast_ut16_89, cast_ut16_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_ADD_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_101 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_100 = SUB(op_LSHIFT_99, cast_101);
	RzILOpPure *cast_103 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_102 = ITE(op_LT_97, cast_103, op_SUB_100);
	RzILOpPure *cast_105 = CAST(64, MSB(DUP(op_ADD_61)), op_ADD_61);
	RzILOpPure *cond_104 = ITE(op_EQ_47, cast_105, cond_102);
	RzILOpPure *cast_107 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_106 = LOGAND(cond_104, cast_107);
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos16", DUP(const_pos16), MUL(cast_110, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_111 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *cast_113 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_112 = LOGOR(cast_113, op_LSHIFT_111);
	RzILOpPure *cast_115 = CAST(64, MSB(DUP(op_OR_112)), op_OR_112);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp186", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_EXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp187", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp188", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp189", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp190", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp191", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_114 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_115);
	RzILOpEffect *seq_116 = SEQN(2, seq_31, op_ASSIGN_114);
	RzILOpEffect *empty_117 = EMPTY();
	RzILOpEffect *seq_118 = SEQN(2, seq_116, empty_117);
	RzILOpEffect *seq_119 = SEQN(2, seq_6, seq_118);
	RzILOpEffect *for_121 = REPEAT(op_LT_2, seq_119);
	RzILOpEffect *seq_120 = SEQN(2, op_ASSIGN_0, for_121);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_120, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp192;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_ADD_24 = ADD(cast_st64_17, cast_st64_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos32", DUP(const_pos32), MUL(cast_27, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_25, op_MUL_26);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_11, op_LSHIFT_28);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp192", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_30, empty_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_6, seq_32);
	RzILOpEffect *for_35 = REPEAT(op_LT_2, seq_33);
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_0, for_35);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vaddws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp193;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos32", DUP(const_pos32), MUL(cast_20, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_ADD_25 = ADD(cast_st64_18, cast_st64_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_ADD_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp194"), VARLP("const_pos0LL")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos32", DUP(const_pos32), MUL(cast_34, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(DUP(cast_st32_37)), cast_st32_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos32", DUP(const_pos32), MUL(cast_40, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *op_ADD_45 = ADD(cast_st64_38, cast_st64_44);
	RzILOpPure *op_EQ_46 = EQ(cond_32, op_ADD_45);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos32", DUP(const_pos32), MUL(cast_48, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(DUP(cast_st32_51)), cast_st32_51);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_53 = LET("const_pos32", DUP(const_pos32), MUL(cast_54, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rtt), op_MUL_53);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_57 = CAST(32, MSB(DUP(op_AND_56)), op_AND_56);
	RzILOpPure *cast_st64_58 = CAST(64, MSB(DUP(cast_st32_57)), cast_st32_57);
	RzILOpPure *op_ADD_59 = ADD(cast_st64_52, cast_st64_58);
	RzILOpPure *arg_cast_70 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_71 = CAST(64, MSB(DUP(VARL("h_tmp196"))), VARL("h_tmp196"));
	RzILOpPure *arg_cast_72 = CAST(64, MSB(DUP(VARL("h_tmp197"))), VARL("h_tmp197"));
	RzILOpPure *arg_cast_73 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_78 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_77 = ITE(NON_ZERO(VARL("h_tmp195")), VARL("h_tmp198"), cast_78);
	RzILOpPure *cast_80 = CAST(32, IL_FALSE, cond_77);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos32", DUP(const_pos32), MUL(cast_83, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rss), op_MUL_82);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(DUP(cast_st32_86)), cast_st32_86);
	RzILOpPure *cast_89 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_88 = LET("const_pos32", DUP(const_pos32), MUL(cast_89, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_90 = SHIFTR0(DUP(Rtt), op_MUL_88);
	RzILOpPure *op_AND_91 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_90, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_92 = CAST(32, MSB(DUP(op_AND_91)), op_AND_91);
	RzILOpPure *cast_st64_93 = CAST(64, MSB(DUP(cast_st32_92)), cast_st32_92);
	RzILOpPure *op_ADD_94 = ADD(cast_st64_87, cast_st64_93);
	RzILOpPure *cast_96 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_95 = SLT(op_ADD_94, cast_96);
	RzILOpPure *op_SUB_97 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_97));
	RzILOpPure *op_NEG_99 = NEG(op_LSHIFT_98);
	RzILOpPure *op_SUB_100 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_101 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_100));
	RzILOpPure *cast_103 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_102 = SUB(op_LSHIFT_101, cast_103);
	RzILOpPure *cond_104 = ITE(op_LT_95, op_NEG_99, op_SUB_102);
	RzILOpPure *cond_105 = ITE(op_EQ_46, op_ADD_59, cond_104);
	RzILOpPure *op_AND_106 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_105, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_107 = LET("const_pos32", DUP(const_pos32), MUL(cast_108, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_109 = SHIFTL0(op_AND_106, op_MUL_107);
	RzILOpPure *op_OR_110 = LOGOR(op_AND_11, op_LSHIFT_109);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp193", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_SEXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp194", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp195", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp196", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp197", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_DEPOSIT64(arg_cast_70, arg_cast_71, arg_cast_72, arg_cast_73);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp198", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *seq_76 = SEQN(3, seq_65, seq_68, seq_75);
	RzILOpEffect *op_ASSIGN_79 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_80);
	RzILOpEffect *seq_81 = SEQN(3, seq_62, seq_76, op_ASSIGN_79);
	RzILOpEffect *op_ASSIGN_111 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_110);
	RzILOpEffect *seq_112 = SEQN(2, seq_31, op_ASSIGN_111);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *seq_114 = SEQN(2, seq_112, empty_113);
	RzILOpEffect *seq_115 = SEQN(2, seq_6, seq_114);
	RzILOpEffect *for_117 = REPEAT(op_LT_2, seq_115);
	RzILOpEffect *seq_116 = SEQN(2, op_ASSIGN_0, for_117);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_116, seq_81);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp199;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_17, cast_st16_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp199", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp200;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_ADD_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x3", const_pos0x3, LOGAND(cast_26, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_27 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_25, VARLP("const_pos0x3")));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *op_ADD_40 = ADD(cast_st16_33, cast_st16_39);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, op_ADD_40);
	RzILOpPure *op_ADD_41 = LET("const_pos1", const_pos1, ADD(cast_42, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st16_48 = CAST(16, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_st16_54 = CAST(16, MSB(DUP(op_AND_52)), op_AND_52);
	RzILOpPure *op_ADD_55 = ADD(cast_st16_48, cast_st16_54);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, op_ADD_55);
	RzILOpPure *cond_56 = ITE(op_EQ_27, op_ADD_41, cast_57);
	RzILOpPure *op_RSHIFT_58 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_56, VARLP("const_pos1")));
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_58, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_61 = LET("const_pos16", DUP(const_pos16), MUL(cast_62, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_63 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *cast_65 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_64 = LOGOR(cast_65, op_LSHIFT_63);
	RzILOpPure *cast_67 = CAST(64, MSB(DUP(op_OR_64)), op_OR_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp200", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_67);
	RzILOpEffect *empty_68 = EMPTY();
	RzILOpEffect *seq_69 = SEQN(2, op_ASSIGN_66, empty_68);
	RzILOpEffect *seq_70 = SEQN(2, seq_6, seq_69);
	RzILOpEffect *for_72 = REPEAT(op_LT_2, seq_70);
	RzILOpEffect *seq_71 = SEQN(2, op_ASSIGN_0, for_72);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp201;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_ADD_24);
	RzILOpPure *op_ADD_25 = LET("const_pos1", const_pos1, ADD(cast_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_27 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp201", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp202;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_ut8_17, cast_ut8_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_RSHIFT_25)), op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_27, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos8", DUP(const_pos8), MUL(cast_30, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp202", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgubr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp203;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_ut8_17, cast_ut8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_ADD_24);
	RzILOpPure *op_ADD_25 = LET("const_pos1", const_pos1, ADD(cast_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_27 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(op_RSHIFT_27)), op_RSHIFT_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_29, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_34 = LOGOR(cast_35, op_LSHIFT_33);
	RzILOpPure *cast_37 = CAST(64, MSB(DUP(op_OR_34)), op_OR_34);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp203", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_36 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_37);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_36, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_6, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_2, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_0, for_42);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp204;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_ut16_17, cast_ut16_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_24, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp204", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp205;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rss, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rtt, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_21);
	RzILOpPure *op_ADD_24 = ADD(cast_ut16_17, cast_ut16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_ADD_24);
	RzILOpPure *op_ADD_25 = LET("const_pos1", const_pos1, ADD(cast_26, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_27 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_25, VARLP("const_pos1")));
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_29, op_MUL_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp205", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_35, empty_37);
	RzILOpEffect *seq_39 = SEQN(2, seq_6, seq_38);
	RzILOpEffect *for_41 = REPEAT(op_LT_2, seq_39);
	RzILOpEffect *seq_40 = SEQN(2, op_ASSIGN_0, for_41);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_40);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp206;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *arg_cast_20 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_21 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_25 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_24 = ITE(op_NE_12, VARL("h_tmp207"), cast_25);
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rtt, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_31 = CAST(32, IL_FALSE, op_AND_30);
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, cast_ut32_31);
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_39 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_38 = ITE(op_NE_26, VARL("h_tmp208"), cast_39);
	RzILOpPure *op_ADD_40 = ADD(cond_24, cond_38);
	RzILOpPure *op_RSHIFT_41 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_40, VARLP("const_pos1")));
	RzILOpPure *cast_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos32", DUP(const_pos32), MUL(cast_45, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_46 = SHIFTL0(op_AND_42, op_MUL_44);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_47 = LOGOR(cast_48, op_LSHIFT_46);
	RzILOpPure *cast_50 = CAST(64, MSB(DUP(op_OR_47)), op_OR_47);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp206", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(cast_ut64_18, arg_cast_20, arg_cast_21);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp207", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_33 = HEX_EXTRACT64(cast_ut64_32, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp208", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *op_ASSIGN_49 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_23, seq_37, op_ASSIGN_49);
	RzILOpEffect *empty_52 = EMPTY();
	RzILOpEffect *seq_53 = SEQN(2, seq_51, empty_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_6, seq_53);
	RzILOpEffect *for_56 = REPEAT(op_LT_2, seq_54);
	RzILOpEffect *seq_55 = SEQN(2, op_ASSIGN_0, for_56);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavguwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp209;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_17 = CAST(32, IL_FALSE, op_AND_16);
	RzILOpPure *cast_ut64_18 = CAST(64, IL_FALSE, cast_ut32_17);
	RzILOpPure *arg_cast_20 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_21 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_25 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_24 = ITE(op_NE_12, VARL("h_tmp210"), cast_25);
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rtt, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_31 = CAST(32, IL_FALSE, op_AND_30);
	RzILOpPure *cast_ut64_32 = CAST(64, IL_FALSE, cast_ut32_31);
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cast_39 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_38 = ITE(op_NE_26, VARL("h_tmp211"), cast_39);
	RzILOpPure *op_ADD_40 = ADD(cond_24, cond_38);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *op_ADD_41 = ADD(op_ADD_40, cast_42);
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_41, VARLP("const_pos1")));
	RzILOpPure *cast_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos32", DUP(const_pos32), MUL(cast_47, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_44, op_MUL_46);
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_49 = LOGOR(cast_50, op_LSHIFT_48);
	RzILOpPure *cast_52 = CAST(64, MSB(DUP(op_OR_49)), op_OR_49);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp209", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(cast_ut64_18, arg_cast_20, arg_cast_21);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_22 = SETL("h_tmp210", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_23 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_22);
	RzILOpEffect *c_call_33 = HEX_EXTRACT64(cast_ut64_32, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp211", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_52);
	RzILOpEffect *seq_53 = SEQN(3, seq_23, seq_37, op_ASSIGN_51);
	RzILOpEffect *empty_54 = EMPTY();
	RzILOpEffect *seq_55 = SEQN(2, seq_53, empty_54);
	RzILOpEffect *seq_56 = SEQN(2, seq_6, seq_55);
	RzILOpEffect *for_58 = REPEAT(op_LT_2, seq_56);
	RzILOpEffect *seq_57 = SEQN(2, op_ASSIGN_0, for_58);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp212;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp213"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rtt, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, cast_st64_32);
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_26, VARL("h_tmp214"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_40 = ADD(cond_25, cond_39);
	RzILOpPure *op_RSHIFT_41 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_40, VARLP("const_pos1")));
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_42, op_MUL_43);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_11, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp212", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp213", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp214", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_24, seq_38, op_ASSIGN_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(2, seq_48, empty_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_6, seq_50);
	RzILOpEffect *for_53 = REPEAT(op_LT_2, seq_51);
	RzILOpEffect *seq_52 = SEQN(2, op_ASSIGN_0, for_53);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp215;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp216"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rtt, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, cast_st64_32);
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_26, VARL("h_tmp217"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_40 = ADD(cond_25, cond_39);
	RzILOpPure *cast_42 = LET("const_pos0x3", const_pos0x3, CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_41 = LOGAND(op_ADD_40, cast_42);
	RzILOpPure *cast_44 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_43 = EQ(op_AND_41, cast_44);
	RzILOpPure *op_NE_45 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_46 = LET("const_pos32", DUP(const_pos32), MUL(cast_47, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rss), op_MUL_46);
	RzILOpPure *op_AND_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_48, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_49)), op_AND_49);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, cast_st64_51);
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_45, VARL("h_tmp218"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_59 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_60 = LET("const_pos32", DUP(const_pos32), MUL(cast_61, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rtt), op_MUL_60);
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_62, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_64 = CAST(32, MSB(DUP(op_AND_63)), op_AND_63);
	RzILOpPure *cast_st64_65 = CAST(64, MSB(DUP(cast_st32_64)), cast_st32_64);
	RzILOpPure *arg_cast_67 = CAST(64, IL_FALSE, cast_st64_65);
	RzILOpPure *arg_cast_68 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_69 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_72 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_59, VARL("h_tmp219"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_73 = ADD(cond_58, cond_72);
	RzILOpPure *cast_75 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_74 = ADD(op_ADD_73, cast_75);
	RzILOpPure *op_NE_76 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_78 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_77 = LET("const_pos32", DUP(const_pos32), MUL(cast_78, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_77);
	RzILOpPure *op_AND_80 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_79, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_81 = CAST(32, MSB(DUP(op_AND_80)), op_AND_80);
	RzILOpPure *cast_st64_82 = CAST(64, MSB(DUP(cast_st32_81)), cast_st32_81);
	RzILOpPure *arg_cast_84 = CAST(64, IL_FALSE, cast_st64_82);
	RzILOpPure *arg_cast_85 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_86 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_89 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_76, VARL("h_tmp220"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_90 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_92 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_91 = LET("const_pos32", DUP(const_pos32), MUL(cast_92, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rtt), op_MUL_91);
	RzILOpPure *op_AND_94 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_93, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_95 = CAST(32, MSB(DUP(op_AND_94)), op_AND_94);
	RzILOpPure *cast_st64_96 = CAST(64, MSB(DUP(cast_st32_95)), cast_st32_95);
	RzILOpPure *arg_cast_98 = CAST(64, IL_FALSE, cast_st64_96);
	RzILOpPure *arg_cast_99 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_100 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_103 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_90, VARL("h_tmp221"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_104 = ADD(cond_89, cond_103);
	RzILOpPure *cond_105 = ITE(op_EQ_43, op_ADD_74, op_ADD_104);
	RzILOpPure *op_RSHIFT_106 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_105, VARLP("const_pos1")));
	RzILOpPure *op_AND_107 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_106, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_108 = LET("const_pos32", DUP(const_pos32), MUL(cast_109, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_110 = SHIFTL0(op_AND_107, op_MUL_108);
	RzILOpPure *op_OR_111 = LOGOR(op_AND_11, op_LSHIFT_110);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp215", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp216", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp217", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp218", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *c_call_66 = HEX_SEXTRACT64(arg_cast_67, arg_cast_68, arg_cast_69);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp219", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *c_call_83 = HEX_SEXTRACT64(arg_cast_84, arg_cast_85, arg_cast_86);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_87 = SETL("h_tmp220", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_88 = SEQN(2, c_call_83, op_ASSIGN_hybrid_tmp_87);
	RzILOpEffect *c_call_97 = HEX_SEXTRACT64(arg_cast_98, arg_cast_99, arg_cast_100);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_101 = SETL("h_tmp221", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_102 = SEQN(2, c_call_97, op_ASSIGN_hybrid_tmp_101);
	RzILOpEffect *op_ASSIGN_112 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_111);
	RzILOpEffect *seq_113 = SEQN(7, seq_24, seq_38, seq_57, seq_71, seq_88, seq_102, op_ASSIGN_112);
	RzILOpEffect *empty_114 = EMPTY();
	RzILOpEffect *seq_115 = SEQN(2, seq_113, empty_114);
	RzILOpEffect *seq_116 = SEQN(2, seq_6, seq_115);
	RzILOpEffect *for_118 = REPEAT(op_LT_2, seq_116);
	RzILOpEffect *seq_117 = SEQN(2, op_ASSIGN_0, for_118);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_117);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp222;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp223"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rtt, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, cast_st64_32);
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_26, VARL("h_tmp224"), VARLP("const_pos0LL")));
	RzILOpPure *op_ADD_40 = ADD(cond_25, cond_39);
	RzILOpPure *cast_42 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_41 = ADD(op_ADD_40, cast_42);
	RzILOpPure *op_RSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_41, VARLP("const_pos1")));
	RzILOpPure *op_AND_44 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_43, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos32", DUP(const_pos32), MUL(cast_46, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_47 = SHIFTL0(op_AND_44, op_MUL_45);
	RzILOpPure *op_OR_48 = LOGOR(op_AND_11, op_LSHIFT_47);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp222", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp223", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp224", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *op_ASSIGN_49 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_48);
	RzILOpEffect *seq_50 = SEQN(3, seq_24, seq_38, op_ASSIGN_49);
	RzILOpEffect *empty_51 = EMPTY();
	RzILOpEffect *seq_52 = SEQN(2, seq_50, empty_51);
	RzILOpEffect *seq_53 = SEQN(2, seq_6, seq_52);
	RzILOpEffect *for_55 = REPEAT(op_LT_2, seq_53);
	RzILOpEffect *seq_54 = SEQN(2, op_ASSIGN_0, for_55);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_54);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpbeq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp225;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st8_16 = CAST(8, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_st8_22 = CAST(8, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *op_EQ_23 = EQ(cast_st8_16, cast_st8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_EQ_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp225", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_15 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_ut8_16 = CAST(8, IL_FALSE, op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(cast_18, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(Rtt, op_MUL_17);
	RzILOpPure *cast_21 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_ut8_22 = CAST(8, IL_FALSE, op_AND_20);
	RzILOpPure *op_GT_23 = UGT(cast_ut8_16, cast_ut8_22);
	RzILOpPure *cast_ut64_24 = CAST(64, IL_FALSE, op_GT_23);
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_24, VARL("i"));
	RzILOpPure *op_OR_26 = LOGOR(op_AND_9, op_LSHIFT_25);
	RzILOpPure *cast_28 = CAST(8, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp226", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_28);
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_EQ_25 = EQ(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_EQ_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, MSB(DUP(op_OR_30)), op_OR_30);
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
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_EQ_53 = EQ(cast_st16_46, cast_st16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_EQ_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, MSB(DUP(op_OR_59)), op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp227", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_61);
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_GT_25 = SGT(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_GT_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, MSB(DUP(op_OR_30)), op_OR_30);
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
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_GT_53 = SGT(cast_st16_46, cast_st16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, MSB(DUP(op_OR_59)), op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp228", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_61);
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rtt, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_GT_25 = UGT(cast_ut16_18, cast_ut16_24);
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, op_GT_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos2", DUP(const_pos2), MUL(cast_28, VARLP("const_pos2")));
	RzILOpPure *op_LSHIFT_29 = SHIFTL0(cast_ut64_26, op_MUL_27);
	RzILOpPure *op_OR_30 = LOGOR(op_AND_11, op_LSHIFT_29);
	RzILOpPure *cast_32 = CAST(8, MSB(DUP(op_OR_30)), op_OR_30);
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
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut16_46 = CAST(16, IL_FALSE, op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos16", DUP(const_pos16), MUL(cast_48, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_ut16_52 = CAST(16, IL_FALSE, op_AND_50);
	RzILOpPure *op_GT_53 = UGT(cast_ut16_46, cast_ut16_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos2", DUP(const_pos2), MUL(cast_56, VARLP("const_pos2")));
	RzILOpPure *op_ADD_57 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_55, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_58 = SHIFTL0(cast_ut64_54, op_ADD_57);
	RzILOpPure *op_OR_59 = LOGOR(op_AND_39, op_LSHIFT_58);
	RzILOpPure *cast_61 = CAST(8, MSB(DUP(op_OR_59)), op_OR_59);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp229", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_31 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_32);
	RzILOpEffect *empty_33 = EMPTY();
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_61);
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
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *op_EQ_21 = EQ(cast_st64_15, cast_st64_20);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_EQ_21);
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_22, VARL("j"));
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);
	RzILOpPure *cast_26 = CAST(8, MSB(DUP(op_OR_24)), op_OR_24);
	RzILOpPure *cast_34 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_35 = LET("const_pos7", const_pos7, ULE(cast_36, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_40 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_41 = LOGNOT(op_LSHIFT_40);
	RzILOpPure *cast_43 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_42 = LOGAND(cast_43, op_NOT_41);
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(DUP(cast_st32_47)), cast_st32_47);
	RzILOpPure *op_MUL_49 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_50, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(op_AND_51)), op_AND_51);
	RzILOpPure *cast_st64_53 = CAST(64, MSB(DUP(cast_st32_52)), cast_st32_52);
	RzILOpPure *op_EQ_54 = EQ(cast_st64_48, cast_st64_53);
	RzILOpPure *cast_ut64_55 = CAST(64, IL_FALSE, op_EQ_54);
	RzILOpPure *op_LSHIFT_56 = SHIFTL0(cast_ut64_55, VARL("j"));
	RzILOpPure *op_OR_57 = LOGOR(op_AND_42, op_LSHIFT_56);
	RzILOpPure *cast_59 = CAST(8, MSB(DUP(op_OR_57)), op_OR_57);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp230", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LE_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *op_ASSIGN_33 = SETL("j", cast_34);
	RzILOpEffect *op_INC_37 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp231", VARL("j"));
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_hybrid_tmp_38, op_INC_37);
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_59);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *seq_61 = SEQN(2, op_ASSIGN_58, empty_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_39, seq_61);
	RzILOpEffect *for_64 = REPEAT(op_LE_35, seq_62);
	RzILOpEffect *seq_63 = SEQN(2, op_ASSIGN_33, for_64);
	RzILOpEffect *instruction_sequence = SEQN(3, seq_30, empty_32, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgt(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp232;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(DUP(cast_st32_19)), cast_st32_19);
	RzILOpPure *op_GT_21 = SGT(cast_st64_15, cast_st64_20);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_21);
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_22, VARL("j"));
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);
	RzILOpPure *cast_26 = CAST(8, MSB(DUP(op_OR_24)), op_OR_24);
	RzILOpPure *cast_33 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_34 = LET("const_pos7", const_pos7, ULE(cast_35, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_41 = LOGAND(cast_42, op_NOT_40);
	RzILOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_46 = CAST(32, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_st64_47 = CAST(64, MSB(DUP(cast_st32_46)), cast_st32_46);
	RzILOpPure *op_MUL_48 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(DUP(cast_st32_51)), cast_st32_51);
	RzILOpPure *op_GT_53 = SGT(cast_st64_47, cast_st64_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_54, VARL("j"));
	RzILOpPure *op_OR_56 = LOGOR(op_AND_41, op_LSHIFT_55);
	RzILOpPure *cast_58 = CAST(8, MSB(DUP(op_OR_56)), op_OR_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp232", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LE_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *op_ASSIGN_32 = SETL("j", cast_33);
	RzILOpEffect *op_INC_36 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp233", VARL("j"));
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_hybrid_tmp_37, op_INC_36);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_58);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *seq_60 = SEQN(2, op_ASSIGN_57, empty_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_38, seq_60);
	RzILOpEffect *for_63 = REPEAT(op_LE_34, seq_61);
	RzILOpEffect *seq_62 = SEQN(2, op_ASSIGN_32, for_63);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_30, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vcmpwgtu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 j;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 h_tmp234;
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, op_AND_13);
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rtt, op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *op_GT_21 = UGT(cast_ut64_15, cast_ut64_20);
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_GT_21);
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_22, VARL("j"));
	RzILOpPure *op_OR_24 = LOGOR(op_AND_9, op_LSHIFT_23);
	RzILOpPure *cast_26 = CAST(8, MSB(DUP(op_OR_24)), op_OR_24);
	RzILOpPure *cast_33 = LET("const_pos4", const_pos4, CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("j"));
	RzILOpPure *op_LE_34 = LET("const_pos7", const_pos7, ULE(cast_35, VARLP("const_pos7")));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos1ULL", DUP(const_pos1ULL), SHIFTL0(VARLP("const_pos1ULL"), VARL("j")));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *cast_42 = CAST(64, IL_FALSE, VARG(Pd_assoc_tmp));
	RzILOpPure *op_AND_41 = LOGAND(cast_42, op_NOT_40);
	RzILOpPure *op_MUL_43 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_45 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_44, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_46 = CAST(32, IL_FALSE, op_AND_45);
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, cast_ut32_46);
	RzILOpPure *op_MUL_48 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_51 = CAST(32, IL_FALSE, op_AND_50);
	RzILOpPure *cast_ut64_52 = CAST(64, IL_FALSE, cast_ut32_51);
	RzILOpPure *op_GT_53 = UGT(cast_ut64_47, cast_ut64_52);
	RzILOpPure *cast_ut64_54 = CAST(64, IL_FALSE, op_GT_53);
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_54, VARL("j"));
	RzILOpPure *op_OR_56 = LOGOR(op_AND_41, op_LSHIFT_55);
	RzILOpPure *cast_58 = CAST(8, MSB(DUP(op_OR_56)), op_OR_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("j", cast_1);
	RzILOpEffect *op_INC_4 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp234", VARL("j"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LE_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *op_ASSIGN_32 = SETL("j", cast_33);
	RzILOpEffect *op_INC_36 = SETL("j", INC(VARL("j"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp235", VARL("j"));
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_hybrid_tmp_37, op_INC_36);
	RzILOpEffect *op_ASSIGN_57 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_58);
	RzILOpEffect *empty_59 = EMPTY();
	RzILOpEffect *seq_60 = SEQN(2, op_ASSIGN_57, empty_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_38, seq_60);
	RzILOpEffect *for_63 = REPEAT(op_LE_34, seq_61);
	RzILOpEffect *seq_62 = SEQN(2, op_ASSIGN_32, for_63);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_30, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vconj(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_NEG_10 = NEG(cast_st16_9);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, op_NEG_10);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp236"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *cast_21 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *op_NEG_23 = NEG(cast_st16_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_NEG_23)), op_NEG_23);
	RzILOpPure *op_EQ_24 = EQ(cond_17, cast_25);
	RzILOpPure *op_MUL_26 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *op_NEG_31 = NEG(cast_st16_30);
	RzILOpPure *arg_cast_42 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_43 = CAST(64, MSB(DUP(VARL("h_tmp238"))), VARL("h_tmp238"));
	RzILOpPure *arg_cast_44 = CAST(64, MSB(DUP(VARL("h_tmp239"))), VARL("h_tmp239"));
	RzILOpPure *arg_cast_45 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_50 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_49 = ITE(NON_ZERO(VARL("h_tmp237")), VARL("h_tmp240"), cast_50);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, cond_49);
	RzILOpPure *op_MUL_54 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzILOpPure *cast_57 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_56 = LOGAND(op_RSHIFT_55, cast_57);
	RzILOpPure *cast_st16_58 = CAST(16, MSB(DUP(op_AND_56)), op_AND_56);
	RzILOpPure *op_NEG_59 = NEG(cast_st16_58);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, op_NEG_59);
	RzILOpPure *op_LT_60 = LET("const_pos0", DUP(const_pos0), ULT(cast_61, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *cast_68 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_67 = SUB(op_LSHIFT_66, cast_68);
	RzILOpPure *cond_69 = ITE(op_LT_60, op_NEG_64, op_SUB_67);
	RzILOpPure *cast_71 = CAST(64, MSB(DUP(op_NEG_31)), op_NEG_31);
	RzILOpPure *cond_70 = ITE(op_EQ_24, cast_71, cond_69);
	RzILOpPure *cast_73 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_72 = LOGAND(cond_70, cast_73);
	RzILOpPure *cast_ut64_74 = CAST(64, IL_FALSE, op_AND_72);
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_76 = SHIFTL0(cast_ut64_74, op_MUL_75);
	RzILOpPure *cast_78 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_77 = LOGOR(cast_78, op_LSHIFT_76);
	RzILOpPure *cast_80 = CAST(64, MSB(DUP(op_OR_77)), op_OR_77);
	RzILOpPure *op_MUL_83 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_84 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_83));
	RzILOpPure *op_NOT_85 = LOGNOT(op_LSHIFT_84);
	RzILOpPure *op_AND_86 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_85);
	RzILOpPure *op_MUL_87 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_88 = SHIFTR0(DUP(Rss), op_MUL_87);
	RzILOpPure *cast_90 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_89 = LOGAND(op_RSHIFT_88, cast_90);
	RzILOpPure *cast_st16_91 = CAST(16, MSB(DUP(op_AND_89)), op_AND_89);
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, cast_st16_91);
	RzILOpPure *op_AND_92 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_93, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_94 = CAST(64, IL_FALSE, op_AND_92);
	RzILOpPure *op_MUL_95 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_96 = SHIFTL0(cast_ut64_94, op_MUL_95);
	RzILOpPure *cast_98 = CAST(64, IL_FALSE, op_AND_86);
	RzILOpPure *op_OR_97 = LOGOR(cast_98, op_LSHIFT_96);
	RzILOpPure *cast_100 = CAST(64, MSB(DUP(op_OR_97)), op_OR_97);
	RzILOpPure *op_MUL_102 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_102));
	RzILOpPure *op_NOT_104 = LOGNOT(op_LSHIFT_103);
	RzILOpPure *op_AND_105 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_104);
	RzILOpPure *op_NE_106 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_107 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rss), op_MUL_107);
	RzILOpPure *cast_110 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_109 = LOGAND(op_RSHIFT_108, cast_110);
	RzILOpPure *cast_st16_111 = CAST(16, MSB(DUP(op_AND_109)), op_AND_109);
	RzILOpPure *op_NEG_112 = NEG(cast_st16_111);
	RzILOpPure *arg_cast_114 = CAST(64, IL_FALSE, op_NEG_112);
	RzILOpPure *arg_cast_115 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_116 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_119 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_106, VARL("h_tmp241"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_120 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *cast_123 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_122 = LOGAND(op_RSHIFT_121, cast_123);
	RzILOpPure *cast_st16_124 = CAST(16, MSB(DUP(op_AND_122)), op_AND_122);
	RzILOpPure *op_NEG_125 = NEG(cast_st16_124);
	RzILOpPure *cast_127 = CAST(64, MSB(DUP(op_NEG_125)), op_NEG_125);
	RzILOpPure *op_EQ_126 = EQ(cond_119, cast_127);
	RzILOpPure *op_MUL_128 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_129 = SHIFTR0(DUP(Rss), op_MUL_128);
	RzILOpPure *cast_131 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_130 = LOGAND(op_RSHIFT_129, cast_131);
	RzILOpPure *cast_st16_132 = CAST(16, MSB(DUP(op_AND_130)), op_AND_130);
	RzILOpPure *op_NEG_133 = NEG(cast_st16_132);
	RzILOpPure *arg_cast_144 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_145 = CAST(64, MSB(DUP(VARL("h_tmp243"))), VARL("h_tmp243"));
	RzILOpPure *arg_cast_146 = CAST(64, MSB(DUP(VARL("h_tmp244"))), VARL("h_tmp244"));
	RzILOpPure *arg_cast_147 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_152 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_151 = ITE(NON_ZERO(VARL("h_tmp242")), VARL("h_tmp245"), cast_152);
	RzILOpPure *cast_154 = CAST(32, IL_FALSE, cond_151);
	RzILOpPure *op_MUL_156 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_157 = SHIFTR0(DUP(Rss), op_MUL_156);
	RzILOpPure *cast_159 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_158 = LOGAND(op_RSHIFT_157, cast_159);
	RzILOpPure *cast_st16_160 = CAST(16, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *op_NEG_161 = NEG(cast_st16_160);
	RzILOpPure *cast_163 = CAST(32, IL_FALSE, op_NEG_161);
	RzILOpPure *op_LT_162 = LET("const_pos0", DUP(const_pos0), ULT(cast_163, VARLP("const_pos0")));
	RzILOpPure *op_SUB_164 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_165 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_164));
	RzILOpPure *op_NEG_166 = NEG(op_LSHIFT_165);
	RzILOpPure *op_SUB_167 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_168 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_167));
	RzILOpPure *cast_170 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_169 = SUB(op_LSHIFT_168, cast_170);
	RzILOpPure *cond_171 = ITE(op_LT_162, op_NEG_166, op_SUB_169);
	RzILOpPure *cast_173 = CAST(64, MSB(DUP(op_NEG_133)), op_NEG_133);
	RzILOpPure *cond_172 = ITE(op_EQ_126, cast_173, cond_171);
	RzILOpPure *cast_175 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_174 = LOGAND(cond_172, cast_175);
	RzILOpPure *cast_ut64_176 = CAST(64, IL_FALSE, op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_178 = SHIFTL0(cast_ut64_176, op_MUL_177);
	RzILOpPure *cast_180 = CAST(64, IL_FALSE, op_AND_105);
	RzILOpPure *op_OR_179 = LOGOR(cast_180, op_LSHIFT_178);
	RzILOpPure *cast_182 = CAST(64, MSB(DUP(op_OR_179)), op_OR_179);
	RzILOpPure *op_MUL_185 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_186 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_185));
	RzILOpPure *op_NOT_187 = LOGNOT(op_LSHIFT_186);
	RzILOpPure *op_AND_188 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_187);
	RzILOpPure *op_MUL_189 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_190 = SHIFTR0(DUP(Rss), op_MUL_189);
	RzILOpPure *cast_192 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_191 = LOGAND(op_RSHIFT_190, cast_192);
	RzILOpPure *cast_st16_193 = CAST(16, MSB(DUP(op_AND_191)), op_AND_191);
	RzILOpPure *cast_195 = CAST(32, IL_FALSE, cast_st16_193);
	RzILOpPure *op_AND_194 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_195, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_196 = CAST(64, IL_FALSE, op_AND_194);
	RzILOpPure *op_MUL_197 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_198 = SHIFTL0(cast_ut64_196, op_MUL_197);
	RzILOpPure *cast_200 = CAST(64, IL_FALSE, op_AND_188);
	RzILOpPure *op_OR_199 = LOGOR(cast_200, op_LSHIFT_198);
	RzILOpPure *cast_202 = CAST(64, MSB(DUP(op_OR_199)), op_OR_199);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp236", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_32 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp237", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *c_call_35 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp238", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_35, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_38 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_39 = SETL("h_tmp239", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_40 = SEQN(2, c_call_38, op_ASSIGN_hybrid_tmp_39);
	RzILOpEffect *c_call_41 = HEX_DEPOSIT64(arg_cast_42, arg_cast_43, arg_cast_44, arg_cast_45);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp240", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_37, seq_40, seq_47);
	RzILOpEffect *op_ASSIGN_51 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_52);
	RzILOpEffect *seq_53 = SEQN(3, seq_34, seq_48, op_ASSIGN_51);
	RzILOpEffect *op_ASSIGN_79 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_80);
	RzILOpEffect *seq_81 = SEQN(2, seq_16, op_ASSIGN_79);
	RzILOpEffect *empty_82 = EMPTY();
	RzILOpEffect *op_ASSIGN_99 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_100);
	RzILOpEffect *empty_101 = EMPTY();
	RzILOpEffect *c_call_113 = HEX_SEXTRACT64(arg_cast_114, arg_cast_115, arg_cast_116);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_117 = SETL("h_tmp241", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_118 = SEQN(2, c_call_113, op_ASSIGN_hybrid_tmp_117);
	RzILOpEffect *c_call_134 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_135 = SETL("h_tmp242", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_136 = SEQN(2, c_call_134, op_ASSIGN_hybrid_tmp_135);
	RzILOpEffect *c_call_137 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_138 = SETL("h_tmp243", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_139 = SEQN(2, c_call_137, op_ASSIGN_hybrid_tmp_138);
	RzILOpEffect *c_call_140 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_141 = SETL("h_tmp244", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_142 = SEQN(2, c_call_140, op_ASSIGN_hybrid_tmp_141);
	RzILOpEffect *c_call_143 = HEX_DEPOSIT64(arg_cast_144, arg_cast_145, arg_cast_146, arg_cast_147);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_148 = SETL("h_tmp245", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_149 = SEQN(2, c_call_143, op_ASSIGN_hybrid_tmp_148);
	RzILOpEffect *seq_150 = SEQN(3, seq_139, seq_142, seq_149);
	RzILOpEffect *op_ASSIGN_153 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_154);
	RzILOpEffect *seq_155 = SEQN(3, seq_136, seq_150, op_ASSIGN_153);
	RzILOpEffect *op_ASSIGN_181 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_182);
	RzILOpEffect *seq_183 = SEQN(2, seq_118, op_ASSIGN_181);
	RzILOpEffect *empty_184 = EMPTY();
	RzILOpEffect *op_ASSIGN_201 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_202);
	RzILOpEffect *empty_203 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_81, empty_82, op_ASSIGN_99, empty_101, seq_183, empty_184, op_ASSIGN_201, empty_203, seq_53, seq_155);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp246;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st8_17 = CAST(8, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st8_23 = CAST(8, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_GT_24 = SGT(cast_st8_17, cast_st8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(cast_26, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st8_30 = CAST(8, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st8_36 = CAST(8, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_st8_30, cast_st8_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(cond_37)), cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp246", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp247;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_GT_24 = SGT(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(cast_26, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_st16_30, cast_st16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_39, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp247", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp248;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_GT_24 = UGT(cast_ut8_17, cast_ut8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(cast_26, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_ut8_30 = CAST(8, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_ut8_36 = CAST(8, IL_FALSE, op_AND_34);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_ut8_30, cast_ut8_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(cond_37)), cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp248", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp249;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_21);
	RzILOpPure *op_GT_24 = UGT(cast_ut16_17, cast_ut16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(cast_26, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_ut16_30 = CAST(16, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_ut16_36 = CAST(16, IL_FALSE, op_AND_34);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_ut16_30, cast_ut16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_39, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp249", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp250;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzILOpPure *op_GT_24 = UGT(cast_ut64_17, cast_ut64_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos32", DUP(const_pos32), MUL(cast_26, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos32", DUP(const_pos32), MUL(cast_32, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_35 = CAST(32, IL_FALSE, op_AND_34);
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, cast_ut32_35);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_ut64_30, cast_ut64_36);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(cond_37, cast_39);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos32", DUP(const_pos32), MUL(cast_41, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_38, op_MUL_40);
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_43 = LOGOR(cast_44, op_LSHIFT_42);
	RzILOpPure *cast_46 = CAST(64, MSB(DUP(op_OR_43)), op_OR_43);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp250", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_45 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_46);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_45, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vmaxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp251;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_GT_24 = SGT(cast_st64_17, cast_st64_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos32", DUP(const_pos32), MUL(cast_26, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos32", DUP(const_pos32), MUL(cast_32, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *cond_37 = ITE(op_GT_24, cast_st64_30, cast_st64_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos32", DUP(const_pos32), MUL(cast_40, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_11, op_LSHIFT_41);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp251", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_45 = SEQN(2, op_ASSIGN_43, empty_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_6, seq_45);
	RzILOpEffect *for_48 = REPEAT(op_LT_2, seq_46);
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_0, for_48);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp252;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st8_17 = CAST(8, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st8_23 = CAST(8, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_LT_24 = SLT(cast_st8_17, cast_st8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(cast_26, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st8_30 = CAST(8, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st8_36 = CAST(8, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_st8_30, cast_st8_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(cond_37)), cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp252", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp253;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_LT_24 = SLT(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(cast_26, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_st16_30, cast_st16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_39, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp253", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp254;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_LT_24 = ULT(cast_ut8_17, cast_ut8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(cast_26, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_ut8_30 = CAST(8, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_ut8_36 = CAST(8, IL_FALSE, op_AND_34);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_ut8_30, cast_ut8_36);
	RzILOpPure *cast_39 = CAST(64, MSB(DUP(cond_37)), cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp254", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp255;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut16_23 = CAST(16, IL_FALSE, op_AND_21);
	RzILOpPure *op_LT_24 = ULT(cast_ut16_17, cast_ut16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(cast_26, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_ut16_30 = CAST(16, IL_FALSE, op_AND_28);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos16", DUP(const_pos16), MUL(cast_32, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_ut16_36 = CAST(16, IL_FALSE, op_AND_34);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_ut16_30, cast_ut16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, cond_37);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_39, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(cast_42, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_40, op_MUL_41);
	RzILOpPure *cast_45 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_44 = LOGOR(cast_45, op_LSHIFT_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_OR_44)), op_OR_44);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp255", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_46 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_47);
	RzILOpEffect *empty_48 = EMPTY();
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_46, empty_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_6, seq_49);
	RzILOpEffect *for_52 = REPEAT(op_LT_2, seq_50);
	RzILOpEffect *seq_51 = SEQN(2, op_ASSIGN_0, for_52);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminuw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp256;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_22 = CAST(32, IL_FALSE, op_AND_21);
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, cast_ut32_22);
	RzILOpPure *op_LT_24 = ULT(cast_ut64_17, cast_ut64_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos32", DUP(const_pos32), MUL(cast_26, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_29 = CAST(32, IL_FALSE, op_AND_28);
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, cast_ut32_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos32", DUP(const_pos32), MUL(cast_32, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_35 = CAST(32, IL_FALSE, op_AND_34);
	RzILOpPure *cast_ut64_36 = CAST(64, IL_FALSE, cast_ut32_35);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_ut64_30, cast_ut64_36);
	RzILOpPure *cast_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_38 = LOGAND(cond_37, cast_39);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos32", DUP(const_pos32), MUL(cast_41, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(op_AND_38, op_MUL_40);
	RzILOpPure *cast_44 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_43 = LOGOR(cast_44, op_LSHIFT_42);
	RzILOpPure *cast_46 = CAST(64, MSB(DUP(op_OR_43)), op_OR_43);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp256", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_45 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_46);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, op_ASSIGN_45, empty_47);
	RzILOpEffect *seq_49 = SEQN(2, seq_6, seq_48);
	RzILOpEffect *for_51 = REPEAT(op_LT_2, seq_49);
	RzILOpEffect *seq_50 = SEQN(2, op_ASSIGN_0, for_51);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_50);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vminw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp257;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_LT_24 = SLT(cast_st64_17, cast_st64_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_25 = LET("const_pos32", DUP(const_pos32), MUL(cast_26, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_27, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos32", DUP(const_pos32), MUL(cast_32, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, MSB(DUP(cast_st32_35)), cast_st32_35);
	RzILOpPure *cond_37 = ITE(op_LT_24, cast_st64_30, cast_st64_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos32", DUP(const_pos32), MUL(cast_40, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(op_AND_38, op_MUL_39);
	RzILOpPure *op_OR_42 = LOGOR(op_AND_11, op_LSHIFT_41);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp257", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_42);
	RzILOpEffect *empty_44 = EMPTY();
	RzILOpEffect *seq_45 = SEQN(2, op_ASSIGN_43, empty_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_6, seq_45);
	RzILOpEffect *for_48 = REPEAT(op_LT_2, seq_46);
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_0, for_48);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_47);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp258;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_SUB_24 = SUB(cast_st16_17, cast_st16_23);
	RzILOpPure *op_RSHIFT_25 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_24, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_RSHIFT_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_27, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, op_AND_26);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_31 = SHIFTL0(cast_ut64_28, op_MUL_29);
	RzILOpPure *cast_33 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_32 = LOGOR(cast_33, op_LSHIFT_31);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_OR_32)), op_OR_32);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp258", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp259;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_AND_26 = LET("const_pos0x3", const_pos0x3, LOGAND(cast_27, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_28 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_26, VARLP("const_pos0x3")));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos16", DUP(const_pos16), MUL(cast_30, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *cast_33 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_32 = LOGAND(op_RSHIFT_31, cast_33);
	RzILOpPure *cast_st16_34 = CAST(16, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *op_SUB_41 = SUB(cast_st16_34, cast_st16_40);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_SUB_41);
	RzILOpPure *op_ADD_42 = LET("const_pos1", const_pos1, ADD(cast_43, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos16", DUP(const_pos16), MUL(cast_45, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rtt), op_MUL_44);
	RzILOpPure *cast_48 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_47 = LOGAND(op_RSHIFT_46, cast_48);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_50 = LET("const_pos16", DUP(const_pos16), MUL(cast_51, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_50);
	RzILOpPure *cast_54 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_53 = LOGAND(op_RSHIFT_52, cast_54);
	RzILOpPure *cast_st16_55 = CAST(16, MSB(DUP(op_AND_53)), op_AND_53);
	RzILOpPure *op_SUB_56 = SUB(cast_st16_49, cast_st16_55);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, op_SUB_56);
	RzILOpPure *cond_57 = ITE(op_EQ_28, op_ADD_42, cast_58);
	RzILOpPure *op_RSHIFT_59 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_57, VARLP("const_pos1")));
	RzILOpPure *arg_cast_61 = CAST(64, IL_FALSE, op_RSHIFT_59);
	RzILOpPure *arg_cast_62 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_63 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_66 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp260"), VARLP("const_pos0LL")));
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_67 = LET("const_pos16", DUP(const_pos16), MUL(cast_68, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *cast_71 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_70 = LOGAND(op_RSHIFT_69, cast_71);
	RzILOpPure *cast_st16_72 = CAST(16, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_74 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_73 = LET("const_pos16", DUP(const_pos16), MUL(cast_74, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rss), op_MUL_73);
	RzILOpPure *cast_77 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_76 = LOGAND(op_RSHIFT_75, cast_77);
	RzILOpPure *cast_st16_78 = CAST(16, MSB(DUP(op_AND_76)), op_AND_76);
	RzILOpPure *op_SUB_79 = SUB(cast_st16_72, cast_st16_78);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, op_SUB_79);
	RzILOpPure *op_AND_80 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_81, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_82 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_80, VARLP("const_pos0x3")));
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *cast_87 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos16", DUP(const_pos16), MUL(cast_90, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st16_94 = CAST(16, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *op_SUB_95 = SUB(cast_st16_88, cast_st16_94);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, op_SUB_95);
	RzILOpPure *op_ADD_96 = LET("const_pos1", DUP(const_pos1), ADD(cast_97, VARLP("const_pos1")));
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_98 = LET("const_pos16", DUP(const_pos16), MUL(cast_99, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *cast_102 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_101 = LOGAND(op_RSHIFT_100, cast_102);
	RzILOpPure *cast_st16_103 = CAST(16, MSB(DUP(op_AND_101)), op_AND_101);
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_104 = LET("const_pos16", DUP(const_pos16), MUL(cast_105, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_106 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *cast_108 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_107 = LOGAND(op_RSHIFT_106, cast_108);
	RzILOpPure *cast_st16_109 = CAST(16, MSB(DUP(op_AND_107)), op_AND_107);
	RzILOpPure *op_SUB_110 = SUB(cast_st16_103, cast_st16_109);
	RzILOpPure *cast_112 = CAST(32, IL_FALSE, op_SUB_110);
	RzILOpPure *cond_111 = ITE(op_EQ_82, op_ADD_96, cast_112);
	RzILOpPure *op_RSHIFT_113 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_111, VARLP("const_pos1")));
	RzILOpPure *cast_115 = CAST(64, MSB(DUP(op_RSHIFT_113)), op_RSHIFT_113);
	RzILOpPure *op_EQ_114 = EQ(cond_66, cast_115);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_116 = LET("const_pos16", DUP(const_pos16), MUL(cast_117, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rtt), op_MUL_116);
	RzILOpPure *cast_120 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_119 = LOGAND(op_RSHIFT_118, cast_120);
	RzILOpPure *cast_st16_121 = CAST(16, MSB(DUP(op_AND_119)), op_AND_119);
	RzILOpPure *cast_123 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_122 = LET("const_pos16", DUP(const_pos16), MUL(cast_123, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rss), op_MUL_122);
	RzILOpPure *cast_126 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_st16_127 = CAST(16, MSB(DUP(op_AND_125)), op_AND_125);
	RzILOpPure *op_SUB_128 = SUB(cast_st16_121, cast_st16_127);
	RzILOpPure *cast_130 = CAST(32, IL_FALSE, op_SUB_128);
	RzILOpPure *op_AND_129 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_130, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_131 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_129, VARLP("const_pos0x3")));
	RzILOpPure *cast_133 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_132 = LET("const_pos16", DUP(const_pos16), MUL(cast_133, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_134 = SHIFTR0(DUP(Rtt), op_MUL_132);
	RzILOpPure *cast_136 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_135 = LOGAND(op_RSHIFT_134, cast_136);
	RzILOpPure *cast_st16_137 = CAST(16, MSB(DUP(op_AND_135)), op_AND_135);
	RzILOpPure *cast_139 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_138 = LET("const_pos16", DUP(const_pos16), MUL(cast_139, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_138);
	RzILOpPure *cast_142 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st16_143 = CAST(16, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *op_SUB_144 = SUB(cast_st16_137, cast_st16_143);
	RzILOpPure *cast_146 = CAST(32, IL_FALSE, op_SUB_144);
	RzILOpPure *op_ADD_145 = LET("const_pos1", DUP(const_pos1), ADD(cast_146, VARLP("const_pos1")));
	RzILOpPure *cast_148 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_147 = LET("const_pos16", DUP(const_pos16), MUL(cast_148, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_149 = SHIFTR0(DUP(Rtt), op_MUL_147);
	RzILOpPure *cast_151 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_150 = LOGAND(op_RSHIFT_149, cast_151);
	RzILOpPure *cast_st16_152 = CAST(16, MSB(DUP(op_AND_150)), op_AND_150);
	RzILOpPure *cast_154 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_153 = LET("const_pos16", DUP(const_pos16), MUL(cast_154, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_155 = SHIFTR0(DUP(Rss), op_MUL_153);
	RzILOpPure *cast_157 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_156 = LOGAND(op_RSHIFT_155, cast_157);
	RzILOpPure *cast_st16_158 = CAST(16, MSB(DUP(op_AND_156)), op_AND_156);
	RzILOpPure *op_SUB_159 = SUB(cast_st16_152, cast_st16_158);
	RzILOpPure *cast_161 = CAST(32, IL_FALSE, op_SUB_159);
	RzILOpPure *cond_160 = ITE(op_EQ_131, op_ADD_145, cast_161);
	RzILOpPure *op_RSHIFT_162 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_160, VARLP("const_pos1")));
	RzILOpPure *arg_cast_173 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_174 = CAST(64, MSB(DUP(VARL("h_tmp262"))), VARL("h_tmp262"));
	RzILOpPure *arg_cast_175 = CAST(64, MSB(DUP(VARL("h_tmp263"))), VARL("h_tmp263"));
	RzILOpPure *arg_cast_176 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_181 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_180 = ITE(NON_ZERO(VARL("h_tmp261")), VARL("h_tmp264"), cast_181);
	RzILOpPure *cast_183 = CAST(32, IL_FALSE, cond_180);
	RzILOpPure *cast_186 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_185 = LET("const_pos16", DUP(const_pos16), MUL(cast_186, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_187 = SHIFTR0(DUP(Rtt), op_MUL_185);
	RzILOpPure *cast_189 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_188 = LOGAND(op_RSHIFT_187, cast_189);
	RzILOpPure *cast_st16_190 = CAST(16, MSB(DUP(op_AND_188)), op_AND_188);
	RzILOpPure *cast_192 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_191 = LET("const_pos16", DUP(const_pos16), MUL(cast_192, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_193 = SHIFTR0(DUP(Rss), op_MUL_191);
	RzILOpPure *cast_195 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_194 = LOGAND(op_RSHIFT_193, cast_195);
	RzILOpPure *cast_st16_196 = CAST(16, MSB(DUP(op_AND_194)), op_AND_194);
	RzILOpPure *op_SUB_197 = SUB(cast_st16_190, cast_st16_196);
	RzILOpPure *cast_199 = CAST(32, IL_FALSE, op_SUB_197);
	RzILOpPure *op_AND_198 = LET("const_pos0x3", DUP(const_pos0x3), LOGAND(cast_199, VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_200 = LET("const_pos0x3", DUP(const_pos0x3), EQ(op_AND_198, VARLP("const_pos0x3")));
	RzILOpPure *cast_202 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_201 = LET("const_pos16", DUP(const_pos16), MUL(cast_202, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_203 = SHIFTR0(DUP(Rtt), op_MUL_201);
	RzILOpPure *cast_205 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_204 = LOGAND(op_RSHIFT_203, cast_205);
	RzILOpPure *cast_st16_206 = CAST(16, MSB(DUP(op_AND_204)), op_AND_204);
	RzILOpPure *cast_208 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_207 = LET("const_pos16", DUP(const_pos16), MUL(cast_208, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_209 = SHIFTR0(DUP(Rss), op_MUL_207);
	RzILOpPure *cast_211 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_210 = LOGAND(op_RSHIFT_209, cast_211);
	RzILOpPure *cast_st16_212 = CAST(16, MSB(DUP(op_AND_210)), op_AND_210);
	RzILOpPure *op_SUB_213 = SUB(cast_st16_206, cast_st16_212);
	RzILOpPure *cast_215 = CAST(32, IL_FALSE, op_SUB_213);
	RzILOpPure *op_ADD_214 = LET("const_pos1", DUP(const_pos1), ADD(cast_215, VARLP("const_pos1")));
	RzILOpPure *cast_217 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_216 = LET("const_pos16", DUP(const_pos16), MUL(cast_217, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_218 = SHIFTR0(DUP(Rtt), op_MUL_216);
	RzILOpPure *cast_220 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_219 = LOGAND(op_RSHIFT_218, cast_220);
	RzILOpPure *cast_st16_221 = CAST(16, MSB(DUP(op_AND_219)), op_AND_219);
	RzILOpPure *cast_223 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_222 = LET("const_pos16", DUP(const_pos16), MUL(cast_223, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_224 = SHIFTR0(DUP(Rss), op_MUL_222);
	RzILOpPure *cast_226 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_225 = LOGAND(op_RSHIFT_224, cast_226);
	RzILOpPure *cast_st16_227 = CAST(16, MSB(DUP(op_AND_225)), op_AND_225);
	RzILOpPure *op_SUB_228 = SUB(cast_st16_221, cast_st16_227);
	RzILOpPure *cast_230 = CAST(32, IL_FALSE, op_SUB_228);
	RzILOpPure *cond_229 = ITE(op_EQ_200, op_ADD_214, cast_230);
	RzILOpPure *op_RSHIFT_231 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_229, VARLP("const_pos1")));
	RzILOpPure *op_LT_232 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_231, VARLP("const_pos0")));
	RzILOpPure *op_SUB_233 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_234 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_233));
	RzILOpPure *op_NEG_235 = NEG(op_LSHIFT_234);
	RzILOpPure *op_SUB_236 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_237 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_236));
	RzILOpPure *cast_239 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_238 = SUB(op_LSHIFT_237, cast_239);
	RzILOpPure *cond_240 = ITE(op_LT_232, op_NEG_235, op_SUB_238);
	RzILOpPure *cast_242 = CAST(64, MSB(DUP(op_RSHIFT_162)), op_RSHIFT_162);
	RzILOpPure *cond_241 = ITE(op_EQ_114, cast_242, cond_240);
	RzILOpPure *cast_244 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_243 = LOGAND(cond_241, cast_244);
	RzILOpPure *cast_ut64_245 = CAST(64, IL_FALSE, op_AND_243);
	RzILOpPure *cast_247 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_246 = LET("const_pos16", DUP(const_pos16), MUL(cast_247, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_248 = SHIFTL0(cast_ut64_245, op_MUL_246);
	RzILOpPure *cast_250 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_249 = LOGOR(cast_250, op_LSHIFT_248);
	RzILOpPure *cast_252 = CAST(64, MSB(DUP(op_OR_249)), op_OR_249);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp259", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_60 = HEX_SEXTRACT64(arg_cast_61, arg_cast_62, arg_cast_63);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp260", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_163 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp261", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_163, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *c_call_166 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_167 = SETL("h_tmp262", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_168 = SEQN(2, c_call_166, op_ASSIGN_hybrid_tmp_167);
	RzILOpEffect *c_call_169 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_170 = SETL("h_tmp263", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_171 = SEQN(2, c_call_169, op_ASSIGN_hybrid_tmp_170);
	RzILOpEffect *c_call_172 = HEX_DEPOSIT64(arg_cast_173, arg_cast_174, arg_cast_175, arg_cast_176);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp264", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_172, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *seq_179 = SEQN(3, seq_168, seq_171, seq_178);
	RzILOpEffect *op_ASSIGN_182 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_183);
	RzILOpEffect *seq_184 = SEQN(3, seq_165, seq_179, op_ASSIGN_182);
	RzILOpEffect *op_ASSIGN_251 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_252);
	RzILOpEffect *seq_253 = SEQN(2, seq_65, op_ASSIGN_251);
	RzILOpEffect *empty_254 = EMPTY();
	RzILOpEffect *seq_255 = SEQN(2, seq_253, empty_254);
	RzILOpEffect *seq_256 = SEQN(2, seq_6, seq_255);
	RzILOpEffect *for_258 = REPEAT(op_LT_2, seq_256);
	RzILOpEffect *seq_257 = SEQN(2, op_ASSIGN_0, for_258);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_257, seq_184);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavghr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp265;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_ADD_26 = LET("const_pos1", const_pos1, ADD(cast_27, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_28 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_26, VARLP("const_pos1")));
	RzILOpPure *arg_cast_30 = CAST(64, IL_FALSE, op_RSHIFT_28);
	RzILOpPure *arg_cast_31 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_32 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp266"), VARLP("const_pos0LL")));
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(cast_37, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos16", DUP(const_pos16), MUL(cast_43, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *op_SUB_48 = SUB(cast_st16_41, cast_st16_47);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, op_SUB_48);
	RzILOpPure *op_ADD_49 = LET("const_pos1", DUP(const_pos1), ADD(cast_50, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_51 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_49, VARLP("const_pos1")));
	RzILOpPure *cast_53 = CAST(64, MSB(DUP(op_RSHIFT_51)), op_RSHIFT_51);
	RzILOpPure *op_EQ_52 = EQ(cond_35, cast_53);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_54 = LET("const_pos16", DUP(const_pos16), MUL(cast_55, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rtt), op_MUL_54);
	RzILOpPure *cast_58 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_60 = LET("const_pos16", DUP(const_pos16), MUL(cast_61, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rss), op_MUL_60);
	RzILOpPure *cast_64 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_63 = LOGAND(op_RSHIFT_62, cast_64);
	RzILOpPure *cast_st16_65 = CAST(16, MSB(DUP(op_AND_63)), op_AND_63);
	RzILOpPure *op_SUB_66 = SUB(cast_st16_59, cast_st16_65);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, op_SUB_66);
	RzILOpPure *op_ADD_67 = LET("const_pos1", DUP(const_pos1), ADD(cast_68, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_69 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_67, VARLP("const_pos1")));
	RzILOpPure *arg_cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_81 = CAST(64, MSB(DUP(VARL("h_tmp268"))), VARL("h_tmp268"));
	RzILOpPure *arg_cast_82 = CAST(64, MSB(DUP(VARL("h_tmp269"))), VARL("h_tmp269"));
	RzILOpPure *arg_cast_83 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_88 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_87 = ITE(NON_ZERO(VARL("h_tmp267")), VARL("h_tmp270"), cast_88);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, cond_87);
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_92 = LET("const_pos16", DUP(const_pos16), MUL(cast_93, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rtt), op_MUL_92);
	RzILOpPure *cast_96 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_95 = LOGAND(op_RSHIFT_94, cast_96);
	RzILOpPure *cast_st16_97 = CAST(16, MSB(DUP(op_AND_95)), op_AND_95);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_98 = LET("const_pos16", DUP(const_pos16), MUL(cast_99, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rss), op_MUL_98);
	RzILOpPure *cast_102 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_101 = LOGAND(op_RSHIFT_100, cast_102);
	RzILOpPure *cast_st16_103 = CAST(16, MSB(DUP(op_AND_101)), op_AND_101);
	RzILOpPure *op_SUB_104 = SUB(cast_st16_97, cast_st16_103);
	RzILOpPure *cast_106 = CAST(32, IL_FALSE, op_SUB_104);
	RzILOpPure *op_ADD_105 = LET("const_pos1", DUP(const_pos1), ADD(cast_106, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_107 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_105, VARLP("const_pos1")));
	RzILOpPure *op_LT_108 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_107, VARLP("const_pos0")));
	RzILOpPure *op_SUB_109 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_110 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_109));
	RzILOpPure *op_NEG_111 = NEG(op_LSHIFT_110);
	RzILOpPure *op_SUB_112 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_113 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_112));
	RzILOpPure *cast_115 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_114 = SUB(op_LSHIFT_113, cast_115);
	RzILOpPure *cond_116 = ITE(op_LT_108, op_NEG_111, op_SUB_114);
	RzILOpPure *cast_118 = CAST(64, MSB(DUP(op_RSHIFT_69)), op_RSHIFT_69);
	RzILOpPure *cond_117 = ITE(op_EQ_52, cast_118, cond_116);
	RzILOpPure *cast_120 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_119 = LOGAND(cond_117, cast_120);
	RzILOpPure *cast_ut64_121 = CAST(64, IL_FALSE, op_AND_119);
	RzILOpPure *cast_123 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_122 = LET("const_pos16", DUP(const_pos16), MUL(cast_123, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_124 = SHIFTL0(cast_ut64_121, op_MUL_122);
	RzILOpPure *cast_126 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_125 = LOGOR(cast_126, op_LSHIFT_124);
	RzILOpPure *cast_128 = CAST(64, MSB(DUP(op_OR_125)), op_OR_125);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp265", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_29 = HEX_SEXTRACT64(arg_cast_30, arg_cast_31, arg_cast_32);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_33 = SETL("h_tmp266", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_34 = SEQN(2, c_call_29, op_ASSIGN_hybrid_tmp_33);
	RzILOpEffect *c_call_70 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp267", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *c_call_73 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp268", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_73, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *c_call_76 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_77 = SETL("h_tmp269", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_78 = SEQN(2, c_call_76, op_ASSIGN_hybrid_tmp_77);
	RzILOpEffect *c_call_79 = HEX_DEPOSIT64(arg_cast_80, arg_cast_81, arg_cast_82, arg_cast_83);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_84 = SETL("h_tmp270", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_85 = SEQN(2, c_call_79, op_ASSIGN_hybrid_tmp_84);
	RzILOpEffect *seq_86 = SEQN(3, seq_75, seq_78, seq_85);
	RzILOpEffect *op_ASSIGN_89 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_90);
	RzILOpEffect *seq_91 = SEQN(3, seq_72, seq_86, op_ASSIGN_89);
	RzILOpEffect *op_ASSIGN_127 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_128);
	RzILOpEffect *seq_129 = SEQN(2, seq_34, op_ASSIGN_127);
	RzILOpEffect *empty_130 = EMPTY();
	RzILOpEffect *seq_131 = SEQN(2, seq_129, empty_130);
	RzILOpEffect *seq_132 = SEQN(2, seq_6, seq_131);
	RzILOpEffect *for_134 = REPEAT(op_LT_2, seq_132);
	RzILOpEffect *seq_133 = SEQN(2, op_ASSIGN_0, for_134);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_133, seq_91);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp271;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp272"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_26 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(Rss, op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, cast_st64_32);
	RzILOpPure *arg_cast_35 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_36 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_39 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_26, VARL("h_tmp273"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_40 = SUB(cond_25, cond_39);
	RzILOpPure *op_RSHIFT_41 = LET("const_pos1", const_pos1, SHIFTR0(op_SUB_40, VARLP("const_pos1")));
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_45 = SHIFTL0(op_AND_42, op_MUL_43);
	RzILOpPure *op_OR_46 = LOGOR(op_AND_11, op_LSHIFT_45);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp271", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp272", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_33 = HEX_SEXTRACT64(arg_cast_34, arg_cast_35, arg_cast_36);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp273", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *op_ASSIGN_47 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_46);
	RzILOpEffect *seq_48 = SEQN(3, seq_24, seq_38, op_ASSIGN_47);
	RzILOpEffect *empty_49 = EMPTY();
	RzILOpEffect *seq_50 = SEQN(2, seq_48, empty_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_6, seq_50);
	RzILOpEffect *for_53 = REPEAT(op_LT_2, seq_51);
	RzILOpEffect *seq_52 = SEQN(2, op_ASSIGN_0, for_53);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_52);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp274;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st64_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp275"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_27 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(Rss, op_MUL_28);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(DUP(cast_st32_32)), cast_st32_32);
	RzILOpPure *arg_cast_35 = CAST(64, IL_FALSE, cast_st64_33);
	RzILOpPure *arg_cast_36 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_37 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_40 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp276"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_41 = SUB(cond_26, cond_40);
	RzILOpPure *cast_43 = LET("const_pos0x3", const_pos0x3, CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_42 = LOGAND(op_SUB_41, cast_43);
	RzILOpPure *cast_45 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_44 = EQ(op_AND_42, cast_45);
	RzILOpPure *op_NE_46 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos32", DUP(const_pos32), MUL(cast_48, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(DUP(cast_st32_51)), cast_st32_51);
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, cast_st64_52);
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_46, VARL("h_tmp277"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_60 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_61 = LET("const_pos32", DUP(const_pos32), MUL(cast_62, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_61);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(DUP(op_AND_64)), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(DUP(cast_st32_65)), cast_st32_65);
	RzILOpPure *arg_cast_68 = CAST(64, IL_FALSE, cast_st64_66);
	RzILOpPure *arg_cast_69 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_70 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_73 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_60, VARL("h_tmp278"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_74 = SUB(cond_59, cond_73);
	RzILOpPure *cast_76 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_75 = ADD(op_SUB_74, cast_76);
	RzILOpPure *op_NE_77 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_78 = LET("const_pos32", DUP(const_pos32), MUL(cast_79, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rtt), op_MUL_78);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_80, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_82 = CAST(32, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *cast_st64_83 = CAST(64, MSB(DUP(cast_st32_82)), cast_st32_82);
	RzILOpPure *arg_cast_85 = CAST(64, IL_FALSE, cast_st64_83);
	RzILOpPure *arg_cast_86 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_87 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_90 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_77, VARL("h_tmp279"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_91 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_92 = LET("const_pos32", DUP(const_pos32), MUL(cast_93, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rss), op_MUL_92);
	RzILOpPure *op_AND_95 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_94, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_96 = CAST(32, MSB(DUP(op_AND_95)), op_AND_95);
	RzILOpPure *cast_st64_97 = CAST(64, MSB(DUP(cast_st32_96)), cast_st32_96);
	RzILOpPure *arg_cast_99 = CAST(64, IL_FALSE, cast_st64_97);
	RzILOpPure *arg_cast_100 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_101 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_104 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_91, VARL("h_tmp280"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_105 = SUB(cond_90, cond_104);
	RzILOpPure *cond_106 = ITE(op_EQ_44, op_ADD_75, op_SUB_105);
	RzILOpPure *op_RSHIFT_107 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_106, VARLP("const_pos1")));
	RzILOpPure *arg_cast_109 = CAST(64, IL_FALSE, op_RSHIFT_107);
	RzILOpPure *arg_cast_110 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_111 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_115 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp281"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_116 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_118 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_117 = LET("const_pos32", DUP(const_pos32), MUL(cast_118, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_119 = SHIFTR0(DUP(Rtt), op_MUL_117);
	RzILOpPure *op_AND_120 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_119, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_121 = CAST(32, MSB(DUP(op_AND_120)), op_AND_120);
	RzILOpPure *cast_st64_122 = CAST(64, MSB(DUP(cast_st32_121)), cast_st32_121);
	RzILOpPure *arg_cast_124 = CAST(64, IL_FALSE, cast_st64_122);
	RzILOpPure *arg_cast_125 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_126 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_129 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_116, VARL("h_tmp282"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_130 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_132 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_131 = LET("const_pos32", DUP(const_pos32), MUL(cast_132, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rss), op_MUL_131);
	RzILOpPure *op_AND_134 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_133, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_135 = CAST(32, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *cast_st64_136 = CAST(64, MSB(DUP(cast_st32_135)), cast_st32_135);
	RzILOpPure *arg_cast_138 = CAST(64, IL_FALSE, cast_st64_136);
	RzILOpPure *arg_cast_139 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_140 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_143 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_130, VARL("h_tmp283"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_144 = SUB(cond_129, cond_143);
	RzILOpPure *cast_146 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_145 = LOGAND(op_SUB_144, cast_146);
	RzILOpPure *cast_148 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_147 = EQ(op_AND_145, cast_148);
	RzILOpPure *op_NE_149 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_151 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_150 = LET("const_pos32", DUP(const_pos32), MUL(cast_151, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_152 = SHIFTR0(DUP(Rtt), op_MUL_150);
	RzILOpPure *op_AND_153 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_152, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_154 = CAST(32, MSB(DUP(op_AND_153)), op_AND_153);
	RzILOpPure *cast_st64_155 = CAST(64, MSB(DUP(cast_st32_154)), cast_st32_154);
	RzILOpPure *arg_cast_157 = CAST(64, IL_FALSE, cast_st64_155);
	RzILOpPure *arg_cast_158 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_159 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_162 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_149, VARL("h_tmp284"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_163 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_165 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_164 = LET("const_pos32", DUP(const_pos32), MUL(cast_165, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_166 = SHIFTR0(DUP(Rss), op_MUL_164);
	RzILOpPure *op_AND_167 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_166, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_168 = CAST(32, MSB(DUP(op_AND_167)), op_AND_167);
	RzILOpPure *cast_st64_169 = CAST(64, MSB(DUP(cast_st32_168)), cast_st32_168);
	RzILOpPure *arg_cast_171 = CAST(64, IL_FALSE, cast_st64_169);
	RzILOpPure *arg_cast_172 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_173 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_176 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_163, VARL("h_tmp285"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_177 = SUB(cond_162, cond_176);
	RzILOpPure *cast_179 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_178 = ADD(op_SUB_177, cast_179);
	RzILOpPure *op_NE_180 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_182 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_181 = LET("const_pos32", DUP(const_pos32), MUL(cast_182, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rtt), op_MUL_181);
	RzILOpPure *op_AND_184 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_183, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_185 = CAST(32, MSB(DUP(op_AND_184)), op_AND_184);
	RzILOpPure *cast_st64_186 = CAST(64, MSB(DUP(cast_st32_185)), cast_st32_185);
	RzILOpPure *arg_cast_188 = CAST(64, IL_FALSE, cast_st64_186);
	RzILOpPure *arg_cast_189 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_190 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_193 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_180, VARL("h_tmp286"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_194 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_196 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_195 = LET("const_pos32", DUP(const_pos32), MUL(cast_196, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_197 = SHIFTR0(DUP(Rss), op_MUL_195);
	RzILOpPure *op_AND_198 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_197, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_199 = CAST(32, MSB(DUP(op_AND_198)), op_AND_198);
	RzILOpPure *cast_st64_200 = CAST(64, MSB(DUP(cast_st32_199)), cast_st32_199);
	RzILOpPure *arg_cast_202 = CAST(64, IL_FALSE, cast_st64_200);
	RzILOpPure *arg_cast_203 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_204 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_207 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_194, VARL("h_tmp287"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_208 = SUB(cond_193, cond_207);
	RzILOpPure *cond_209 = ITE(op_EQ_147, op_ADD_178, op_SUB_208);
	RzILOpPure *op_RSHIFT_210 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_209, VARLP("const_pos1")));
	RzILOpPure *op_EQ_211 = EQ(cond_115, op_RSHIFT_210);
	RzILOpPure *op_NE_212 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_214 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_213 = LET("const_pos32", DUP(const_pos32), MUL(cast_214, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rtt), op_MUL_213);
	RzILOpPure *op_AND_216 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_215, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_217 = CAST(32, MSB(DUP(op_AND_216)), op_AND_216);
	RzILOpPure *cast_st64_218 = CAST(64, MSB(DUP(cast_st32_217)), cast_st32_217);
	RzILOpPure *arg_cast_220 = CAST(64, IL_FALSE, cast_st64_218);
	RzILOpPure *arg_cast_221 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_222 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_225 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_212, VARL("h_tmp288"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_226 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_228 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_227 = LET("const_pos32", DUP(const_pos32), MUL(cast_228, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rss), op_MUL_227);
	RzILOpPure *op_AND_230 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_229, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_231 = CAST(32, MSB(DUP(op_AND_230)), op_AND_230);
	RzILOpPure *cast_st64_232 = CAST(64, MSB(DUP(cast_st32_231)), cast_st32_231);
	RzILOpPure *arg_cast_234 = CAST(64, IL_FALSE, cast_st64_232);
	RzILOpPure *arg_cast_235 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_236 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_239 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_226, VARL("h_tmp289"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_240 = SUB(cond_225, cond_239);
	RzILOpPure *cast_242 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_241 = LOGAND(op_SUB_240, cast_242);
	RzILOpPure *cast_244 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_243 = EQ(op_AND_241, cast_244);
	RzILOpPure *op_NE_245 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_247 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_246 = LET("const_pos32", DUP(const_pos32), MUL(cast_247, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_248 = SHIFTR0(DUP(Rtt), op_MUL_246);
	RzILOpPure *op_AND_249 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_248, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_250 = CAST(32, MSB(DUP(op_AND_249)), op_AND_249);
	RzILOpPure *cast_st64_251 = CAST(64, MSB(DUP(cast_st32_250)), cast_st32_250);
	RzILOpPure *arg_cast_253 = CAST(64, IL_FALSE, cast_st64_251);
	RzILOpPure *arg_cast_254 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_255 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_258 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_245, VARL("h_tmp290"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_259 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_261 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_260 = LET("const_pos32", DUP(const_pos32), MUL(cast_261, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_262 = SHIFTR0(DUP(Rss), op_MUL_260);
	RzILOpPure *op_AND_263 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_262, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_264 = CAST(32, MSB(DUP(op_AND_263)), op_AND_263);
	RzILOpPure *cast_st64_265 = CAST(64, MSB(DUP(cast_st32_264)), cast_st32_264);
	RzILOpPure *arg_cast_267 = CAST(64, IL_FALSE, cast_st64_265);
	RzILOpPure *arg_cast_268 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_269 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_272 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_259, VARL("h_tmp291"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_273 = SUB(cond_258, cond_272);
	RzILOpPure *cast_275 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_274 = ADD(op_SUB_273, cast_275);
	RzILOpPure *op_NE_276 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_278 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_277 = LET("const_pos32", DUP(const_pos32), MUL(cast_278, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_279 = SHIFTR0(DUP(Rtt), op_MUL_277);
	RzILOpPure *op_AND_280 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_279, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_281 = CAST(32, MSB(DUP(op_AND_280)), op_AND_280);
	RzILOpPure *cast_st64_282 = CAST(64, MSB(DUP(cast_st32_281)), cast_st32_281);
	RzILOpPure *arg_cast_284 = CAST(64, IL_FALSE, cast_st64_282);
	RzILOpPure *arg_cast_285 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_286 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_289 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_276, VARL("h_tmp292"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_290 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_292 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_291 = LET("const_pos32", DUP(const_pos32), MUL(cast_292, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_293 = SHIFTR0(DUP(Rss), op_MUL_291);
	RzILOpPure *op_AND_294 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_293, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_295 = CAST(32, MSB(DUP(op_AND_294)), op_AND_294);
	RzILOpPure *cast_st64_296 = CAST(64, MSB(DUP(cast_st32_295)), cast_st32_295);
	RzILOpPure *arg_cast_298 = CAST(64, IL_FALSE, cast_st64_296);
	RzILOpPure *arg_cast_299 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_300 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_303 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_290, VARL("h_tmp293"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_304 = SUB(cond_289, cond_303);
	RzILOpPure *cond_305 = ITE(op_EQ_243, op_ADD_274, op_SUB_304);
	RzILOpPure *op_RSHIFT_306 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_305, VARLP("const_pos1")));
	RzILOpPure *arg_cast_317 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_318 = CAST(64, MSB(DUP(VARL("h_tmp295"))), VARL("h_tmp295"));
	RzILOpPure *arg_cast_319 = CAST(64, MSB(DUP(VARL("h_tmp296"))), VARL("h_tmp296"));
	RzILOpPure *arg_cast_320 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_325 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_324 = ITE(NON_ZERO(VARL("h_tmp294")), VARL("h_tmp297"), cast_325);
	RzILOpPure *cast_327 = CAST(32, IL_FALSE, cond_324);
	RzILOpPure *op_NE_329 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_331 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_330 = LET("const_pos32", DUP(const_pos32), MUL(cast_331, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_332 = SHIFTR0(DUP(Rtt), op_MUL_330);
	RzILOpPure *op_AND_333 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_332, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_334 = CAST(32, MSB(DUP(op_AND_333)), op_AND_333);
	RzILOpPure *cast_st64_335 = CAST(64, MSB(DUP(cast_st32_334)), cast_st32_334);
	RzILOpPure *arg_cast_337 = CAST(64, IL_FALSE, cast_st64_335);
	RzILOpPure *arg_cast_338 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_339 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_342 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_329, VARL("h_tmp298"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_343 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_345 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_344 = LET("const_pos32", DUP(const_pos32), MUL(cast_345, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_346 = SHIFTR0(DUP(Rss), op_MUL_344);
	RzILOpPure *op_AND_347 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_346, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_348 = CAST(32, MSB(DUP(op_AND_347)), op_AND_347);
	RzILOpPure *cast_st64_349 = CAST(64, MSB(DUP(cast_st32_348)), cast_st32_348);
	RzILOpPure *arg_cast_351 = CAST(64, IL_FALSE, cast_st64_349);
	RzILOpPure *arg_cast_352 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_353 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_356 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_343, VARL("h_tmp299"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_357 = SUB(cond_342, cond_356);
	RzILOpPure *cast_359 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_AND_358 = LOGAND(op_SUB_357, cast_359);
	RzILOpPure *cast_361 = LET("const_pos0x3", DUP(const_pos0x3), CAST(64, MSB(DUP(VARLP("const_pos0x3"))), VARLP("const_pos0x3")));
	RzILOpPure *op_EQ_360 = EQ(op_AND_358, cast_361);
	RzILOpPure *op_NE_362 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_364 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_363 = LET("const_pos32", DUP(const_pos32), MUL(cast_364, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_365 = SHIFTR0(DUP(Rtt), op_MUL_363);
	RzILOpPure *op_AND_366 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_365, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_367 = CAST(32, MSB(DUP(op_AND_366)), op_AND_366);
	RzILOpPure *cast_st64_368 = CAST(64, MSB(DUP(cast_st32_367)), cast_st32_367);
	RzILOpPure *arg_cast_370 = CAST(64, IL_FALSE, cast_st64_368);
	RzILOpPure *arg_cast_371 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_372 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_375 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_362, VARL("h_tmp300"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_376 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_378 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_377 = LET("const_pos32", DUP(const_pos32), MUL(cast_378, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_379 = SHIFTR0(DUP(Rss), op_MUL_377);
	RzILOpPure *op_AND_380 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_379, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_381 = CAST(32, MSB(DUP(op_AND_380)), op_AND_380);
	RzILOpPure *cast_st64_382 = CAST(64, MSB(DUP(cast_st32_381)), cast_st32_381);
	RzILOpPure *arg_cast_384 = CAST(64, IL_FALSE, cast_st64_382);
	RzILOpPure *arg_cast_385 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_386 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_389 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_376, VARL("h_tmp301"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_390 = SUB(cond_375, cond_389);
	RzILOpPure *cast_392 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_391 = ADD(op_SUB_390, cast_392);
	RzILOpPure *op_NE_393 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_395 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_394 = LET("const_pos32", DUP(const_pos32), MUL(cast_395, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_396 = SHIFTR0(DUP(Rtt), op_MUL_394);
	RzILOpPure *op_AND_397 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_396, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_398 = CAST(32, MSB(DUP(op_AND_397)), op_AND_397);
	RzILOpPure *cast_st64_399 = CAST(64, MSB(DUP(cast_st32_398)), cast_st32_398);
	RzILOpPure *arg_cast_401 = CAST(64, IL_FALSE, cast_st64_399);
	RzILOpPure *arg_cast_402 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_403 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_406 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_393, VARL("h_tmp302"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_407 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_409 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_408 = LET("const_pos32", DUP(const_pos32), MUL(cast_409, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_410 = SHIFTR0(DUP(Rss), op_MUL_408);
	RzILOpPure *op_AND_411 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_410, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_412 = CAST(32, MSB(DUP(op_AND_411)), op_AND_411);
	RzILOpPure *cast_st64_413 = CAST(64, MSB(DUP(cast_st32_412)), cast_st32_412);
	RzILOpPure *arg_cast_415 = CAST(64, IL_FALSE, cast_st64_413);
	RzILOpPure *arg_cast_416 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_417 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_420 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_407, VARL("h_tmp303"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_421 = SUB(cond_406, cond_420);
	RzILOpPure *cond_422 = ITE(op_EQ_360, op_ADD_391, op_SUB_421);
	RzILOpPure *op_RSHIFT_423 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cond_422, VARLP("const_pos1")));
	RzILOpPure *cast_425 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_424 = SLT(op_RSHIFT_423, cast_425);
	RzILOpPure *op_SUB_426 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_427 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_426));
	RzILOpPure *op_NEG_428 = NEG(op_LSHIFT_427);
	RzILOpPure *op_SUB_429 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_430 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_429));
	RzILOpPure *cast_432 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_431 = SUB(op_LSHIFT_430, cast_432);
	RzILOpPure *cond_433 = ITE(op_LT_424, op_NEG_428, op_SUB_431);
	RzILOpPure *cond_434 = ITE(op_EQ_211, op_RSHIFT_306, cond_433);
	RzILOpPure *op_AND_435 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_434, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_437 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_436 = LET("const_pos32", DUP(const_pos32), MUL(cast_437, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_438 = SHIFTL0(op_AND_435, op_MUL_436);
	RzILOpPure *op_OR_439 = LOGOR(op_AND_11, op_LSHIFT_438);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp274", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp275", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_34 = HEX_SEXTRACT64(arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp276", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp277", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_67 = HEX_SEXTRACT64(arg_cast_68, arg_cast_69, arg_cast_70);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp278", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *c_call_84 = HEX_SEXTRACT64(arg_cast_85, arg_cast_86, arg_cast_87);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_88 = SETL("h_tmp279", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_89 = SEQN(2, c_call_84, op_ASSIGN_hybrid_tmp_88);
	RzILOpEffect *c_call_98 = HEX_SEXTRACT64(arg_cast_99, arg_cast_100, arg_cast_101);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_102 = SETL("h_tmp280", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_103 = SEQN(2, c_call_98, op_ASSIGN_hybrid_tmp_102);
	RzILOpEffect *c_call_108 = HEX_SEXTRACT64(arg_cast_109, arg_cast_110, arg_cast_111);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_112 = SETL("h_tmp281", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_113 = SEQN(2, c_call_108, op_ASSIGN_hybrid_tmp_112);
	RzILOpEffect *seq_114 = SEQN(7, seq_25, seq_39, seq_58, seq_72, seq_89, seq_103, seq_113);
	RzILOpEffect *c_call_123 = HEX_SEXTRACT64(arg_cast_124, arg_cast_125, arg_cast_126);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_127 = SETL("h_tmp282", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_128 = SEQN(2, c_call_123, op_ASSIGN_hybrid_tmp_127);
	RzILOpEffect *c_call_137 = HEX_SEXTRACT64(arg_cast_138, arg_cast_139, arg_cast_140);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_141 = SETL("h_tmp283", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_142 = SEQN(2, c_call_137, op_ASSIGN_hybrid_tmp_141);
	RzILOpEffect *c_call_156 = HEX_SEXTRACT64(arg_cast_157, arg_cast_158, arg_cast_159);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_160 = SETL("h_tmp284", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_161 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_160);
	RzILOpEffect *c_call_170 = HEX_SEXTRACT64(arg_cast_171, arg_cast_172, arg_cast_173);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp285", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *c_call_187 = HEX_SEXTRACT64(arg_cast_188, arg_cast_189, arg_cast_190);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_191 = SETL("h_tmp286", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_192 = SEQN(2, c_call_187, op_ASSIGN_hybrid_tmp_191);
	RzILOpEffect *c_call_201 = HEX_SEXTRACT64(arg_cast_202, arg_cast_203, arg_cast_204);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_205 = SETL("h_tmp287", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_206 = SEQN(2, c_call_201, op_ASSIGN_hybrid_tmp_205);
	RzILOpEffect *c_call_219 = HEX_SEXTRACT64(arg_cast_220, arg_cast_221, arg_cast_222);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_223 = SETL("h_tmp288", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_224 = SEQN(2, c_call_219, op_ASSIGN_hybrid_tmp_223);
	RzILOpEffect *c_call_233 = HEX_SEXTRACT64(arg_cast_234, arg_cast_235, arg_cast_236);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_237 = SETL("h_tmp289", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_238 = SEQN(2, c_call_233, op_ASSIGN_hybrid_tmp_237);
	RzILOpEffect *c_call_252 = HEX_SEXTRACT64(arg_cast_253, arg_cast_254, arg_cast_255);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_256 = SETL("h_tmp290", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_257 = SEQN(2, c_call_252, op_ASSIGN_hybrid_tmp_256);
	RzILOpEffect *c_call_266 = HEX_SEXTRACT64(arg_cast_267, arg_cast_268, arg_cast_269);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_270 = SETL("h_tmp291", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_271 = SEQN(2, c_call_266, op_ASSIGN_hybrid_tmp_270);
	RzILOpEffect *c_call_283 = HEX_SEXTRACT64(arg_cast_284, arg_cast_285, arg_cast_286);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_287 = SETL("h_tmp292", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_288 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_287);
	RzILOpEffect *c_call_297 = HEX_SEXTRACT64(arg_cast_298, arg_cast_299, arg_cast_300);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_301 = SETL("h_tmp293", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_302 = SEQN(2, c_call_297, op_ASSIGN_hybrid_tmp_301);
	RzILOpEffect *c_call_307 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_308 = SETL("h_tmp294", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_309 = SEQN(2, c_call_307, op_ASSIGN_hybrid_tmp_308);
	RzILOpEffect *c_call_310 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_311 = SETL("h_tmp295", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_312 = SEQN(2, c_call_310, op_ASSIGN_hybrid_tmp_311);
	RzILOpEffect *c_call_313 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_314 = SETL("h_tmp296", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_315 = SEQN(2, c_call_313, op_ASSIGN_hybrid_tmp_314);
	RzILOpEffect *c_call_316 = HEX_DEPOSIT64(arg_cast_317, arg_cast_318, arg_cast_319, arg_cast_320);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_321 = SETL("h_tmp297", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_322 = SEQN(2, c_call_316, op_ASSIGN_hybrid_tmp_321);
	RzILOpEffect *seq_323 = SEQN(3, seq_312, seq_315, seq_322);
	RzILOpEffect *op_ASSIGN_326 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_327);
	RzILOpEffect *seq_328 = SEQN(3, seq_309, seq_323, op_ASSIGN_326);
	RzILOpEffect *c_call_336 = HEX_SEXTRACT64(arg_cast_337, arg_cast_338, arg_cast_339);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_340 = SETL("h_tmp298", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_341 = SEQN(2, c_call_336, op_ASSIGN_hybrid_tmp_340);
	RzILOpEffect *c_call_350 = HEX_SEXTRACT64(arg_cast_351, arg_cast_352, arg_cast_353);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_354 = SETL("h_tmp299", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_355 = SEQN(2, c_call_350, op_ASSIGN_hybrid_tmp_354);
	RzILOpEffect *c_call_369 = HEX_SEXTRACT64(arg_cast_370, arg_cast_371, arg_cast_372);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_373 = SETL("h_tmp300", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_374 = SEQN(2, c_call_369, op_ASSIGN_hybrid_tmp_373);
	RzILOpEffect *c_call_383 = HEX_SEXTRACT64(arg_cast_384, arg_cast_385, arg_cast_386);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_387 = SETL("h_tmp301", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_388 = SEQN(2, c_call_383, op_ASSIGN_hybrid_tmp_387);
	RzILOpEffect *c_call_400 = HEX_SEXTRACT64(arg_cast_401, arg_cast_402, arg_cast_403);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_404 = SETL("h_tmp302", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_405 = SEQN(2, c_call_400, op_ASSIGN_hybrid_tmp_404);
	RzILOpEffect *c_call_414 = HEX_SEXTRACT64(arg_cast_415, arg_cast_416, arg_cast_417);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_418 = SETL("h_tmp303", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_419 = SEQN(2, c_call_414, op_ASSIGN_hybrid_tmp_418);
	RzILOpEffect *op_ASSIGN_440 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_439);
	RzILOpEffect *seq_441 = SEQN(20, seq_114, seq_128, seq_142, seq_161, seq_175, seq_192, seq_206, seq_224, seq_238, seq_257, seq_271, seq_288, seq_302, seq_341, seq_355, seq_374, seq_388, seq_405, seq_419, op_ASSIGN_440);
	RzILOpEffect *empty_442 = EMPTY();
	RzILOpEffect *seq_443 = SEQN(2, seq_441, empty_442);
	RzILOpEffect *seq_444 = SEQN(2, seq_6, seq_443);
	RzILOpEffect *for_446 = REPEAT(op_LT_2, seq_444);
	RzILOpEffect *seq_445 = SEQN(2, op_ASSIGN_0, for_446);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_445, seq_328);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vnavgwr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp304;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_NE_13 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st64_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp305"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_27 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(Rss, op_MUL_28);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(DUP(cast_st32_32)), cast_st32_32);
	RzILOpPure *arg_cast_35 = CAST(64, IL_FALSE, cast_st64_33);
	RzILOpPure *arg_cast_36 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_37 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_40 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp306"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_41 = SUB(cond_26, cond_40);
	RzILOpPure *cast_43 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_42 = ADD(op_SUB_41, cast_43);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_42, VARLP("const_pos1")));
	RzILOpPure *arg_cast_46 = CAST(64, IL_FALSE, op_RSHIFT_44);
	RzILOpPure *arg_cast_47 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_48 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_52 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp307"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_53 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_54 = LET("const_pos32", DUP(const_pos32), MUL(cast_55, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rtt), op_MUL_54);
	RzILOpPure *op_AND_57 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_56, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_58 = CAST(32, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *cast_st64_59 = CAST(64, MSB(DUP(cast_st32_58)), cast_st32_58);
	RzILOpPure *arg_cast_61 = CAST(64, IL_FALSE, cast_st64_59);
	RzILOpPure *arg_cast_62 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_63 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_66 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_53, VARL("h_tmp308"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_67 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos32", DUP(const_pos32), MUL(cast_69, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_72 = CAST(32, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *cast_st64_73 = CAST(64, MSB(DUP(cast_st32_72)), cast_st32_72);
	RzILOpPure *arg_cast_75 = CAST(64, IL_FALSE, cast_st64_73);
	RzILOpPure *arg_cast_76 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_77 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_80 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_67, VARL("h_tmp309"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_81 = SUB(cond_66, cond_80);
	RzILOpPure *cast_83 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_82 = ADD(op_SUB_81, cast_83);
	RzILOpPure *op_RSHIFT_84 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_82, VARLP("const_pos1")));
	RzILOpPure *op_EQ_85 = EQ(cond_52, op_RSHIFT_84);
	RzILOpPure *op_NE_86 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_88 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_87 = LET("const_pos32", DUP(const_pos32), MUL(cast_88, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_89 = SHIFTR0(DUP(Rtt), op_MUL_87);
	RzILOpPure *op_AND_90 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_89, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_91 = CAST(32, MSB(DUP(op_AND_90)), op_AND_90);
	RzILOpPure *cast_st64_92 = CAST(64, MSB(DUP(cast_st32_91)), cast_st32_91);
	RzILOpPure *arg_cast_94 = CAST(64, IL_FALSE, cast_st64_92);
	RzILOpPure *arg_cast_95 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_96 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_99 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_86, VARL("h_tmp310"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_100 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_102 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_101 = LET("const_pos32", DUP(const_pos32), MUL(cast_102, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_101);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *arg_cast_108 = CAST(64, IL_FALSE, cast_st64_106);
	RzILOpPure *arg_cast_109 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_110 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_113 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_100, VARL("h_tmp311"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_114 = SUB(cond_99, cond_113);
	RzILOpPure *cast_116 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_115 = ADD(op_SUB_114, cast_116);
	RzILOpPure *op_RSHIFT_117 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_115, VARLP("const_pos1")));
	RzILOpPure *arg_cast_128 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_129 = CAST(64, MSB(DUP(VARL("h_tmp313"))), VARL("h_tmp313"));
	RzILOpPure *arg_cast_130 = CAST(64, MSB(DUP(VARL("h_tmp314"))), VARL("h_tmp314"));
	RzILOpPure *arg_cast_131 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_136 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_135 = ITE(NON_ZERO(VARL("h_tmp312")), VARL("h_tmp315"), cast_136);
	RzILOpPure *cast_138 = CAST(32, IL_FALSE, cond_135);
	RzILOpPure *op_NE_140 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_142 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_141 = LET("const_pos32", DUP(const_pos32), MUL(cast_142, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_143 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_143, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_145 = CAST(32, MSB(DUP(op_AND_144)), op_AND_144);
	RzILOpPure *cast_st64_146 = CAST(64, MSB(DUP(cast_st32_145)), cast_st32_145);
	RzILOpPure *arg_cast_148 = CAST(64, IL_FALSE, cast_st64_146);
	RzILOpPure *arg_cast_149 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_150 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_153 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_140, VARL("h_tmp316"), VARLP("const_pos0LL")));
	RzILOpPure *op_NE_154 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_156 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_155 = LET("const_pos32", DUP(const_pos32), MUL(cast_156, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_157 = SHIFTR0(DUP(Rss), op_MUL_155);
	RzILOpPure *op_AND_158 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_157, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_159 = CAST(32, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *cast_st64_160 = CAST(64, MSB(DUP(cast_st32_159)), cast_st32_159);
	RzILOpPure *arg_cast_162 = CAST(64, IL_FALSE, cast_st64_160);
	RzILOpPure *arg_cast_163 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_164 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_167 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_154, VARL("h_tmp317"), VARLP("const_pos0LL")));
	RzILOpPure *op_SUB_168 = SUB(cond_153, cond_167);
	RzILOpPure *cast_170 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_169 = ADD(op_SUB_168, cast_170);
	RzILOpPure *op_RSHIFT_171 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_169, VARLP("const_pos1")));
	RzILOpPure *cast_173 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_172 = SLT(op_RSHIFT_171, cast_173);
	RzILOpPure *op_SUB_174 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_175 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_174));
	RzILOpPure *op_NEG_176 = NEG(op_LSHIFT_175);
	RzILOpPure *op_SUB_177 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_178 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_177));
	RzILOpPure *cast_180 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_179 = SUB(op_LSHIFT_178, cast_180);
	RzILOpPure *cond_181 = ITE(op_LT_172, op_NEG_176, op_SUB_179);
	RzILOpPure *cond_182 = ITE(op_EQ_85, op_RSHIFT_117, cond_181);
	RzILOpPure *op_AND_183 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_182, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_185 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_184 = LET("const_pos32", DUP(const_pos32), MUL(cast_185, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_186 = SHIFTL0(op_AND_183, op_MUL_184);
	RzILOpPure *op_OR_187 = LOGOR(op_AND_11, op_LSHIFT_186);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp304", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp305", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_34 = HEX_SEXTRACT64(arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp306", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_45 = HEX_SEXTRACT64(arg_cast_46, arg_cast_47, arg_cast_48);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp307", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *seq_51 = SEQN(3, seq_25, seq_39, seq_50);
	RzILOpEffect *c_call_60 = HEX_SEXTRACT64(arg_cast_61, arg_cast_62, arg_cast_63);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp308", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_74 = HEX_SEXTRACT64(arg_cast_75, arg_cast_76, arg_cast_77);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_78 = SETL("h_tmp309", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_79 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_78);
	RzILOpEffect *c_call_93 = HEX_SEXTRACT64(arg_cast_94, arg_cast_95, arg_cast_96);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp310", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_93, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *c_call_107 = HEX_SEXTRACT64(arg_cast_108, arg_cast_109, arg_cast_110);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_111 = SETL("h_tmp311", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_112 = SEQN(2, c_call_107, op_ASSIGN_hybrid_tmp_111);
	RzILOpEffect *c_call_118 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp312", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_118, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *c_call_121 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_122 = SETL("h_tmp313", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_123 = SEQN(2, c_call_121, op_ASSIGN_hybrid_tmp_122);
	RzILOpEffect *c_call_124 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_125 = SETL("h_tmp314", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_126 = SEQN(2, c_call_124, op_ASSIGN_hybrid_tmp_125);
	RzILOpEffect *c_call_127 = HEX_DEPOSIT64(arg_cast_128, arg_cast_129, arg_cast_130, arg_cast_131);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp315", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(3, seq_123, seq_126, seq_133);
	RzILOpEffect *op_ASSIGN_137 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_138);
	RzILOpEffect *seq_139 = SEQN(3, seq_120, seq_134, op_ASSIGN_137);
	RzILOpEffect *c_call_147 = HEX_SEXTRACT64(arg_cast_148, arg_cast_149, arg_cast_150);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_151 = SETL("h_tmp316", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_152 = SEQN(2, c_call_147, op_ASSIGN_hybrid_tmp_151);
	RzILOpEffect *c_call_161 = HEX_SEXTRACT64(arg_cast_162, arg_cast_163, arg_cast_164);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_165 = SETL("h_tmp317", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_166 = SEQN(2, c_call_161, op_ASSIGN_hybrid_tmp_165);
	RzILOpEffect *op_ASSIGN_188 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_187);
	RzILOpEffect *seq_189 = SEQN(8, seq_51, seq_65, seq_79, seq_98, seq_112, seq_152, seq_166, op_ASSIGN_188);
	RzILOpEffect *empty_190 = EMPTY();
	RzILOpEffect *seq_191 = SEQN(2, seq_189, empty_190);
	RzILOpEffect *seq_192 = SEQN(2, seq_6, seq_191);
	RzILOpEffect *for_194 = REPEAT(op_LT_2, seq_192);
	RzILOpEffect *seq_193 = SEQN(2, op_ASSIGN_0, for_194);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_193, seq_139);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos4", const_pos4, ULT(cast_5, VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(Rtt, op_MUL_24);
	RzILOpPure *cast_28 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_ut8_29 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_ADD_30 = ADD(cast_ut8_23, cast_ut8_29);
	RzILOpPure *cast_32 = CAST(64, MSB(DUP(op_ADD_30)), op_ADD_30);
	RzILOpPure *op_ADD_31 = ADD(cast_st64_17, cast_32);
	RzILOpPure *op_AND_33 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_34 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(op_AND_33, op_MUL_34);
	RzILOpPure *op_OR_36 = LOGOR(op_AND_12, op_LSHIFT_35);
	RzILOpPure *cast_44 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_45 = LET("const_pos8", DUP(const_pos8), ULT(cast_46, VARLP("const_pos8")));
	RzILOpPure *op_MUL_50 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_50));
	RzILOpPure *op_NOT_52 = LOGNOT(op_LSHIFT_51);
	RzILOpPure *op_AND_53 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_52);
	RzILOpPure *op_MUL_54 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_54);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_57 = CAST(32, MSB(DUP(op_AND_56)), op_AND_56);
	RzILOpPure *cast_st64_58 = CAST(64, MSB(DUP(cast_st32_57)), cast_st32_57);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos8", DUP(const_pos8), MUL(cast_60, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rss), op_MUL_59);
	RzILOpPure *cast_63 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_62 = LOGAND(op_RSHIFT_61, cast_63);
	RzILOpPure *cast_ut8_64 = CAST(8, IL_FALSE, op_AND_62);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_65 = LET("const_pos8", DUP(const_pos8), MUL(cast_66, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rtt), op_MUL_65);
	RzILOpPure *cast_69 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_68 = LOGAND(op_RSHIFT_67, cast_69);
	RzILOpPure *cast_ut8_70 = CAST(8, IL_FALSE, op_AND_68);
	RzILOpPure *op_ADD_71 = ADD(cast_ut8_64, cast_ut8_70);
	RzILOpPure *cast_73 = CAST(64, MSB(DUP(op_ADD_71)), op_ADD_71);
	RzILOpPure *op_ADD_72 = ADD(cast_st64_58, cast_73);
	RzILOpPure *op_AND_74 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_72, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_76 = SHIFTL0(op_AND_74, op_MUL_75);
	RzILOpPure *op_OR_77 = LOGOR(op_AND_53, op_LSHIFT_76);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp318", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_37 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_36);
	RzILOpEffect *empty_38 = EMPTY();
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_37, empty_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_8, seq_39);
	RzILOpEffect *for_42 = REPEAT(op_LT_4, seq_40);
	RzILOpEffect *seq_41 = SEQN(2, op_ASSIGN_2, for_42);
	RzILOpEffect *op_ASSIGN_43 = SETL("i", cast_44);
	RzILOpEffect *op_INC_47 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp319", VARL("i"));
	RzILOpEffect *seq_49 = SEQN(2, op_ASSIGN_hybrid_tmp_48, op_INC_47);
	RzILOpEffect *op_ASSIGN_78 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_77);
	RzILOpEffect *empty_79 = EMPTY();
	RzILOpEffect *seq_80 = SEQN(2, op_ASSIGN_78, empty_79);
	RzILOpEffect *seq_81 = SEQN(2, seq_49, seq_80);
	RzILOpEffect *for_83 = REPEAT(op_LT_45, seq_81);
	RzILOpEffect *seq_82 = SEQN(2, op_ASSIGN_43, for_83);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, seq_41, seq_82);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vraddub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp320;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
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
	RzILOpPure *op_AND_10 = LOGAND(Rxx, op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(DUP(Rxx), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(cast_17, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_20 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_ut8_21 = CAST(8, IL_FALSE, op_AND_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", DUP(const_pos8), MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *op_ADD_28 = ADD(cast_ut8_21, cast_ut8_27);
	RzILOpPure *cast_30 = CAST(64, MSB(DUP(op_ADD_28)), op_ADD_28);
	RzILOpPure *op_ADD_29 = ADD(cast_st64_15, cast_30);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_32 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_33 = SHIFTL0(op_AND_31, op_MUL_32);
	RzILOpPure *op_OR_34 = LOGOR(op_AND_10, op_LSHIFT_33);
	RzILOpPure *cast_42 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_43 = LET("const_pos8", DUP(const_pos8), ULT(cast_44, VARLP("const_pos8")));
	RzILOpPure *op_MUL_48 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_48));
	RzILOpPure *op_NOT_50 = LOGNOT(op_LSHIFT_49);
	RzILOpPure *op_AND_51 = LOGAND(DUP(Rxx), op_NOT_50);
	RzILOpPure *op_MUL_52 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rxx), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_53, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_55 = CAST(32, MSB(DUP(op_AND_54)), op_AND_54);
	RzILOpPure *cast_st64_56 = CAST(64, MSB(DUP(cast_st32_55)), cast_st32_55);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_57 = LET("const_pos8", DUP(const_pos8), MUL(cast_58, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(DUP(Rss), op_MUL_57);
	RzILOpPure *cast_61 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_60 = LOGAND(op_RSHIFT_59, cast_61);
	RzILOpPure *cast_ut8_62 = CAST(8, IL_FALSE, op_AND_60);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos8", DUP(const_pos8), MUL(cast_64, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rtt), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_ut8_68 = CAST(8, IL_FALSE, op_AND_66);
	RzILOpPure *op_ADD_69 = ADD(cast_ut8_62, cast_ut8_68);
	RzILOpPure *cast_71 = CAST(64, MSB(DUP(op_ADD_69)), op_ADD_69);
	RzILOpPure *op_ADD_70 = ADD(cast_st64_56, cast_71);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_74 = SHIFTL0(op_AND_72, op_MUL_73);
	RzILOpPure *op_OR_75 = LOGOR(op_AND_51, op_LSHIFT_74);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp320", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_34);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_35, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *op_ASSIGN_41 = SETL("i", cast_42);
	RzILOpEffect *op_INC_45 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp321", VARL("i"));
	RzILOpEffect *seq_47 = SEQN(2, op_ASSIGN_hybrid_tmp_46, op_INC_45);
	RzILOpEffect *op_ASSIGN_76 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_75);
	RzILOpEffect *empty_77 = EMPTY();
	RzILOpEffect *seq_78 = SEQN(2, op_ASSIGN_76, empty_77);
	RzILOpEffect *seq_79 = SEQN(2, seq_47, seq_78);
	RzILOpEffect *for_81 = REPEAT(op_LT_43, seq_79);
	RzILOpEffect *seq_80 = SEQN(2, op_ASSIGN_41, for_81);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_39, seq_80);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_4 = LET("const_pos4", const_pos4, ULT(cast_5, VARLP("const_pos4")));
	RzILOpPure *op_MUL_9 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(Rtt, op_MUL_24);
	RzILOpPure *cast_28 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_27 = LOGAND(op_RSHIFT_26, cast_28);
	RzILOpPure *cast_ut8_29 = CAST(8, IL_FALSE, op_AND_27);
	RzILOpPure *op_SUB_30 = SUB(cast_ut8_23, cast_ut8_29);
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, op_SUB_30);
	RzILOpPure *op_LT_31 = LET("const_pos0", DUP(const_pos0), ULT(cast_32, VARLP("const_pos0")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos8", DUP(const_pos8), MUL(cast_34, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_ut8_38 = CAST(8, IL_FALSE, op_AND_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos8", DUP(const_pos8), MUL(cast_40, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_ut8_44 = CAST(8, IL_FALSE, op_AND_42);
	RzILOpPure *op_SUB_45 = SUB(cast_ut8_38, cast_ut8_44);
	RzILOpPure *op_NEG_46 = NEG(op_SUB_45);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos8", DUP(const_pos8), MUL(cast_48, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_50);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_53 = LET("const_pos8", DUP(const_pos8), MUL(cast_54, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rtt), op_MUL_53);
	RzILOpPure *cast_57 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_56 = LOGAND(op_RSHIFT_55, cast_57);
	RzILOpPure *cast_ut8_58 = CAST(8, IL_FALSE, op_AND_56);
	RzILOpPure *op_SUB_59 = SUB(cast_ut8_52, cast_ut8_58);
	RzILOpPure *cond_60 = ITE(op_LT_31, op_NEG_46, op_SUB_59);
	RzILOpPure *cast_62 = CAST(64, MSB(DUP(cond_60)), cond_60);
	RzILOpPure *op_ADD_61 = ADD(cast_st64_17, cast_62);
	RzILOpPure *op_AND_63 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_61, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_64 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_65 = SHIFTL0(op_AND_63, op_MUL_64);
	RzILOpPure *op_OR_66 = LOGOR(op_AND_12, op_LSHIFT_65);
	RzILOpPure *cast_74 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_75 = LET("const_pos8", DUP(const_pos8), ULT(cast_76, VARLP("const_pos8")));
	RzILOpPure *op_MUL_80 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_81 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_80));
	RzILOpPure *op_NOT_82 = LOGNOT(op_LSHIFT_81);
	RzILOpPure *op_AND_83 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_82);
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(VARG(Rdd_assoc_tmp), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_87 = CAST(32, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(DUP(cast_st32_87)), cast_st32_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos8", DUP(const_pos8), MUL(cast_90, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_ut8_94 = CAST(8, IL_FALSE, op_AND_92);
	RzILOpPure *cast_96 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_95 = LET("const_pos8", DUP(const_pos8), MUL(cast_96, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rtt), op_MUL_95);
	RzILOpPure *cast_99 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_98 = LOGAND(op_RSHIFT_97, cast_99);
	RzILOpPure *cast_ut8_100 = CAST(8, IL_FALSE, op_AND_98);
	RzILOpPure *op_SUB_101 = SUB(cast_ut8_94, cast_ut8_100);
	RzILOpPure *cast_103 = CAST(32, IL_FALSE, op_SUB_101);
	RzILOpPure *op_LT_102 = LET("const_pos0", DUP(const_pos0), ULT(cast_103, VARLP("const_pos0")));
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_104 = LET("const_pos8", DUP(const_pos8), MUL(cast_105, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_106 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *cast_108 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_107 = LOGAND(op_RSHIFT_106, cast_108);
	RzILOpPure *cast_ut8_109 = CAST(8, IL_FALSE, op_AND_107);
	RzILOpPure *cast_111 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_110 = LET("const_pos8", DUP(const_pos8), MUL(cast_111, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_112 = SHIFTR0(DUP(Rtt), op_MUL_110);
	RzILOpPure *cast_114 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_113 = LOGAND(op_RSHIFT_112, cast_114);
	RzILOpPure *cast_ut8_115 = CAST(8, IL_FALSE, op_AND_113);
	RzILOpPure *op_SUB_116 = SUB(cast_ut8_109, cast_ut8_115);
	RzILOpPure *op_NEG_117 = NEG(op_SUB_116);
	RzILOpPure *cast_119 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_118 = LET("const_pos8", DUP(const_pos8), MUL(cast_119, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_118);
	RzILOpPure *cast_122 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_ut8_123 = CAST(8, IL_FALSE, op_AND_121);
	RzILOpPure *cast_125 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_124 = LET("const_pos8", DUP(const_pos8), MUL(cast_125, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_128 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_127 = LOGAND(op_RSHIFT_126, cast_128);
	RzILOpPure *cast_ut8_129 = CAST(8, IL_FALSE, op_AND_127);
	RzILOpPure *op_SUB_130 = SUB(cast_ut8_123, cast_ut8_129);
	RzILOpPure *cond_131 = ITE(op_LT_102, op_NEG_117, op_SUB_130);
	RzILOpPure *cast_133 = CAST(64, MSB(DUP(cond_131)), cond_131);
	RzILOpPure *op_ADD_132 = ADD(cast_st64_88, cast_133);
	RzILOpPure *op_AND_134 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_132, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_135 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_136 = SHIFTL0(op_AND_134, op_MUL_135);
	RzILOpPure *op_OR_137 = LOGOR(op_AND_83, op_LSHIFT_136);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_1);
	RzILOpEffect *op_ASSIGN_2 = SETL("i", cast_3);
	RzILOpEffect *op_INC_6 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp322", VARL("i"));
	RzILOpEffect *seq_8 = SEQN(2, op_ASSIGN_hybrid_tmp_7, op_INC_6);
	RzILOpEffect *op_ASSIGN_67 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_66);
	RzILOpEffect *empty_68 = EMPTY();
	RzILOpEffect *seq_69 = SEQN(2, op_ASSIGN_67, empty_68);
	RzILOpEffect *seq_70 = SEQN(2, seq_8, seq_69);
	RzILOpEffect *for_72 = REPEAT(op_LT_4, seq_70);
	RzILOpEffect *seq_71 = SEQN(2, op_ASSIGN_2, for_72);
	RzILOpEffect *op_ASSIGN_73 = SETL("i", cast_74);
	RzILOpEffect *op_INC_77 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_78 = SETL("h_tmp323", VARL("i"));
	RzILOpEffect *seq_79 = SEQN(2, op_ASSIGN_hybrid_tmp_78, op_INC_77);
	RzILOpEffect *op_ASSIGN_138 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_137);
	RzILOpEffect *empty_139 = EMPTY();
	RzILOpEffect *seq_140 = SEQN(2, op_ASSIGN_138, empty_139);
	RzILOpEffect *seq_141 = SEQN(2, seq_79, seq_140);
	RzILOpEffect *for_143 = REPEAT(op_LT_75, seq_141);
	RzILOpEffect *seq_142 = SEQN(2, op_ASSIGN_73, for_143);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, seq_71, seq_142);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vrsadub_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp324;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
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
	RzILOpPure *op_AND_10 = LOGAND(Rxx, op_NOT_9);
	RzILOpPure *op_MUL_11 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(DUP(Rxx), op_MUL_11);
	RzILOpPure *op_AND_13 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_12, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(DUP(cast_st32_14)), cast_st32_14);
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(cast_17, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_20 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_ut8_21 = CAST(8, IL_FALSE, op_AND_19);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos8", DUP(const_pos8), MUL(cast_23, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rtt, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_25);
	RzILOpPure *op_SUB_28 = SUB(cast_ut8_21, cast_ut8_27);
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, op_SUB_28);
	RzILOpPure *op_LT_29 = LET("const_pos0", DUP(const_pos0), ULT(cast_30, VARLP("const_pos0")));
	RzILOpPure *cast_32 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_31 = LET("const_pos8", DUP(const_pos8), MUL(cast_32, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_31);
	RzILOpPure *cast_35 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_ut8_36 = CAST(8, IL_FALSE, op_AND_34);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_37 = LET("const_pos8", DUP(const_pos8), MUL(cast_38, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_39 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *cast_41 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_40 = LOGAND(op_RSHIFT_39, cast_41);
	RzILOpPure *cast_ut8_42 = CAST(8, IL_FALSE, op_AND_40);
	RzILOpPure *op_SUB_43 = SUB(cast_ut8_36, cast_ut8_42);
	RzILOpPure *op_NEG_44 = NEG(op_SUB_43);
	RzILOpPure *cast_46 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_45 = LET("const_pos8", DUP(const_pos8), MUL(cast_46, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *cast_49 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_ut8_50 = CAST(8, IL_FALSE, op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos8", DUP(const_pos8), MUL(cast_52, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rtt), op_MUL_51);
	RzILOpPure *cast_55 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_54 = LOGAND(op_RSHIFT_53, cast_55);
	RzILOpPure *cast_ut8_56 = CAST(8, IL_FALSE, op_AND_54);
	RzILOpPure *op_SUB_57 = SUB(cast_ut8_50, cast_ut8_56);
	RzILOpPure *cond_58 = ITE(op_LT_29, op_NEG_44, op_SUB_57);
	RzILOpPure *cast_60 = CAST(64, MSB(DUP(cond_58)), cond_58);
	RzILOpPure *op_ADD_59 = ADD(cast_st64_15, cast_60);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_59, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_62 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_63 = SHIFTL0(op_AND_61, op_MUL_62);
	RzILOpPure *op_OR_64 = LOGOR(op_AND_10, op_LSHIFT_63);
	RzILOpPure *cast_72 = LET("const_pos4", DUP(const_pos4), CAST(32, MSB(DUP(VARLP("const_pos4"))), VARLP("const_pos4")));
	RzILOpPure *cast_74 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_73 = LET("const_pos8", DUP(const_pos8), ULT(cast_74, VARLP("const_pos8")));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_78));
	RzILOpPure *op_NOT_80 = LOGNOT(op_LSHIFT_79);
	RzILOpPure *op_AND_81 = LOGAND(DUP(Rxx), op_NOT_80);
	RzILOpPure *op_MUL_82 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_83 = SHIFTR0(DUP(Rxx), op_MUL_82);
	RzILOpPure *op_AND_84 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_83, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_85 = CAST(32, MSB(DUP(op_AND_84)), op_AND_84);
	RzILOpPure *cast_st64_86 = CAST(64, MSB(DUP(cast_st32_85)), cast_st32_85);
	RzILOpPure *cast_88 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_87 = LET("const_pos8", DUP(const_pos8), MUL(cast_88, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_89 = SHIFTR0(DUP(Rss), op_MUL_87);
	RzILOpPure *cast_91 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_90 = LOGAND(op_RSHIFT_89, cast_91);
	RzILOpPure *cast_ut8_92 = CAST(8, IL_FALSE, op_AND_90);
	RzILOpPure *cast_94 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_93 = LET("const_pos8", DUP(const_pos8), MUL(cast_94, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rtt), op_MUL_93);
	RzILOpPure *cast_97 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_96 = LOGAND(op_RSHIFT_95, cast_97);
	RzILOpPure *cast_ut8_98 = CAST(8, IL_FALSE, op_AND_96);
	RzILOpPure *op_SUB_99 = SUB(cast_ut8_92, cast_ut8_98);
	RzILOpPure *cast_101 = CAST(32, IL_FALSE, op_SUB_99);
	RzILOpPure *op_LT_100 = LET("const_pos0", DUP(const_pos0), ULT(cast_101, VARLP("const_pos0")));
	RzILOpPure *cast_103 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_102 = LET("const_pos8", DUP(const_pos8), MUL(cast_103, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *cast_106 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_105 = LOGAND(op_RSHIFT_104, cast_106);
	RzILOpPure *cast_ut8_107 = CAST(8, IL_FALSE, op_AND_105);
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_108 = LET("const_pos8", DUP(const_pos8), MUL(cast_109, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rtt), op_MUL_108);
	RzILOpPure *cast_112 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_111 = LOGAND(op_RSHIFT_110, cast_112);
	RzILOpPure *cast_ut8_113 = CAST(8, IL_FALSE, op_AND_111);
	RzILOpPure *op_SUB_114 = SUB(cast_ut8_107, cast_ut8_113);
	RzILOpPure *op_NEG_115 = NEG(op_SUB_114);
	RzILOpPure *cast_117 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_116 = LET("const_pos8", DUP(const_pos8), MUL(cast_117, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rss), op_MUL_116);
	RzILOpPure *cast_120 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_119 = LOGAND(op_RSHIFT_118, cast_120);
	RzILOpPure *cast_ut8_121 = CAST(8, IL_FALSE, op_AND_119);
	RzILOpPure *cast_123 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_122 = LET("const_pos8", DUP(const_pos8), MUL(cast_123, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_124 = SHIFTR0(DUP(Rtt), op_MUL_122);
	RzILOpPure *cast_126 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_125 = LOGAND(op_RSHIFT_124, cast_126);
	RzILOpPure *cast_ut8_127 = CAST(8, IL_FALSE, op_AND_125);
	RzILOpPure *op_SUB_128 = SUB(cast_ut8_121, cast_ut8_127);
	RzILOpPure *cond_129 = ITE(op_LT_100, op_NEG_115, op_SUB_128);
	RzILOpPure *cast_131 = CAST(64, MSB(DUP(cond_129)), cond_129);
	RzILOpPure *op_ADD_130 = ADD(cast_st64_86, cast_131);
	RzILOpPure *op_AND_132 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_ADD_130, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_133 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_134 = SHIFTL0(op_AND_132, op_MUL_133);
	RzILOpPure *op_OR_135 = LOGOR(op_AND_81, op_LSHIFT_134);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp324", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_64);
	RzILOpEffect *empty_66 = EMPTY();
	RzILOpEffect *seq_67 = SEQN(2, op_ASSIGN_65, empty_66);
	RzILOpEffect *seq_68 = SEQN(2, seq_6, seq_67);
	RzILOpEffect *for_70 = REPEAT(op_LT_2, seq_68);
	RzILOpEffect *seq_69 = SEQN(2, op_ASSIGN_0, for_70);
	RzILOpEffect *op_ASSIGN_71 = SETL("i", cast_72);
	RzILOpEffect *op_INC_75 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp325", VARL("i"));
	RzILOpEffect *seq_77 = SEQN(2, op_ASSIGN_hybrid_tmp_76, op_INC_75);
	RzILOpEffect *op_ASSIGN_136 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_135);
	RzILOpEffect *empty_137 = EMPTY();
	RzILOpEffect *seq_138 = SEQN(2, op_ASSIGN_136, empty_137);
	RzILOpEffect *seq_139 = SEQN(2, seq_77, seq_138);
	RzILOpEffect *for_141 = REPEAT(op_LT_73, seq_139);
	RzILOpEffect *seq_140 = SEQN(2, op_ASSIGN_71, for_141);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_69, seq_140);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp326;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos16", DUP(const_pos16), MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos16", DUP(const_pos16), MUL(cast_19, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *op_SUB_24 = SUB(cast_st16_17, cast_st16_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_SUB_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_26, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_OR_31)), op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp326", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp327;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_st16_18, cast_st16_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_SUB_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp328"), VARLP("const_pos0LL")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos16", DUP(const_pos16), MUL(cast_34, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_st16_38 = CAST(16, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos16", DUP(const_pos16), MUL(cast_40, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st16_44 = CAST(16, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *op_SUB_45 = SUB(cast_st16_38, cast_st16_44);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(op_SUB_45)), op_SUB_45);
	RzILOpPure *op_EQ_46 = EQ(cond_32, cast_47);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos16", DUP(const_pos16), MUL(cast_49, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *cast_52 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_51 = LOGAND(op_RSHIFT_50, cast_52);
	RzILOpPure *cast_st16_53 = CAST(16, MSB(DUP(op_AND_51)), op_AND_51);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_54 = LET("const_pos16", DUP(const_pos16), MUL(cast_55, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_56 = SHIFTR0(DUP(Rss), op_MUL_54);
	RzILOpPure *cast_58 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_57 = LOGAND(op_RSHIFT_56, cast_58);
	RzILOpPure *cast_st16_59 = CAST(16, MSB(DUP(op_AND_57)), op_AND_57);
	RzILOpPure *op_SUB_60 = SUB(cast_st16_53, cast_st16_59);
	RzILOpPure *arg_cast_71 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_72 = CAST(64, MSB(DUP(VARL("h_tmp330"))), VARL("h_tmp330"));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp331"))), VARL("h_tmp331"));
	RzILOpPure *arg_cast_74 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_79 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_78 = ITE(NON_ZERO(VARL("h_tmp329")), VARL("h_tmp332"), cast_79);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, cond_78);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *cast_87 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_89 = LET("const_pos16", DUP(const_pos16), MUL(cast_90, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rss), op_MUL_89);
	RzILOpPure *cast_93 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_92 = LOGAND(op_RSHIFT_91, cast_93);
	RzILOpPure *cast_st16_94 = CAST(16, MSB(DUP(op_AND_92)), op_AND_92);
	RzILOpPure *op_SUB_95 = SUB(cast_st16_88, cast_st16_94);
	RzILOpPure *cast_97 = CAST(32, IL_FALSE, op_SUB_95);
	RzILOpPure *op_LT_96 = LET("const_pos0", DUP(const_pos0), ULT(cast_97, VARLP("const_pos0")));
	RzILOpPure *op_SUB_98 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_98));
	RzILOpPure *op_NEG_100 = NEG(op_LSHIFT_99);
	RzILOpPure *op_SUB_101 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_102 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_101));
	RzILOpPure *cast_104 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_103 = SUB(op_LSHIFT_102, cast_104);
	RzILOpPure *cond_105 = ITE(op_LT_96, op_NEG_100, op_SUB_103);
	RzILOpPure *cast_107 = CAST(64, MSB(DUP(op_SUB_60)), op_SUB_60);
	RzILOpPure *cond_106 = ITE(op_EQ_46, cast_107, cond_105);
	RzILOpPure *cast_109 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_108 = LOGAND(cond_106, cast_109);
	RzILOpPure *cast_ut64_110 = CAST(64, IL_FALSE, op_AND_108);
	RzILOpPure *cast_112 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_111 = LET("const_pos16", DUP(const_pos16), MUL(cast_112, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_113 = SHIFTL0(cast_ut64_110, op_MUL_111);
	RzILOpPure *cast_115 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_114 = LOGOR(cast_115, op_LSHIFT_113);
	RzILOpPure *cast_117 = CAST(64, MSB(DUP(op_OR_114)), op_OR_114);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp327", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_SEXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp328", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_61 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_62 = SETL("h_tmp329", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_63 = SEQN(2, c_call_61, op_ASSIGN_hybrid_tmp_62);
	RzILOpEffect *c_call_64 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_65 = SETL("h_tmp330", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_66 = SEQN(2, c_call_64, op_ASSIGN_hybrid_tmp_65);
	RzILOpEffect *c_call_67 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_68 = SETL("h_tmp331", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_69 = SEQN(2, c_call_67, op_ASSIGN_hybrid_tmp_68);
	RzILOpEffect *c_call_70 = HEX_DEPOSIT64(arg_cast_71, arg_cast_72, arg_cast_73, arg_cast_74);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp332", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_70, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(3, seq_66, seq_69, seq_76);
	RzILOpEffect *op_ASSIGN_80 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_81);
	RzILOpEffect *seq_82 = SEQN(3, seq_63, seq_77, op_ASSIGN_80);
	RzILOpEffect *op_ASSIGN_116 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_117);
	RzILOpEffect *seq_118 = SEQN(2, seq_31, op_ASSIGN_116);
	RzILOpEffect *empty_119 = EMPTY();
	RzILOpEffect *seq_120 = SEQN(2, seq_118, empty_119);
	RzILOpEffect *seq_121 = SEQN(2, seq_6, seq_120);
	RzILOpEffect *for_123 = REPEAT(op_LT_2, seq_121);
	RzILOpEffect *seq_122 = SEQN(2, op_ASSIGN_0, for_123);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_122, seq_82);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp333;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_16 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_15 = LOGAND(op_RSHIFT_14, cast_16);
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos8", DUP(const_pos8), MUL(cast_19, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *cast_22 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_21 = LOGAND(op_RSHIFT_20, cast_22);
	RzILOpPure *cast_ut8_23 = CAST(8, IL_FALSE, op_AND_21);
	RzILOpPure *op_SUB_24 = SUB(cast_ut8_17, cast_ut8_23);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_SUB_24)), op_SUB_24);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_26, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos8", DUP(const_pos8), MUL(cast_29, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_30 = SHIFTL0(cast_ut64_27, op_MUL_28);
	RzILOpPure *cast_32 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_31 = LOGOR(cast_32, op_LSHIFT_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(op_OR_31)), op_OR_31);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp333", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_33 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_34);
	RzILOpEffect *empty_35 = EMPTY();
	RzILOpEffect *seq_36 = SEQN(2, op_ASSIGN_33, empty_35);
	RzILOpEffect *seq_37 = SEQN(2, seq_6, seq_36);
	RzILOpEffect *for_39 = REPEAT(op_LT_2, seq_37);
	RzILOpEffect *seq_38 = SEQN(2, op_ASSIGN_0, for_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_38);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsububs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp334;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(cast_14, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut8_18 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut8_24 = CAST(8, IL_FALSE, op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_ut8_18, cast_ut8_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_SUB_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_33 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = ITE(op_NE_12, VARL("h_tmp335"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(cast_35, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_ut8_39 = CAST(8, IL_FALSE, op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos8", DUP(const_pos8), MUL(cast_41, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_ut8_45 = CAST(8, IL_FALSE, op_AND_43);
	RzILOpPure *op_SUB_46 = SUB(cast_ut8_39, cast_ut8_45);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_SUB_46);
	RzILOpPure *op_EQ_47 = EQ(cond_32, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos8", DUP(const_pos8), MUL(cast_50, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_ut8_54 = CAST(8, IL_FALSE, op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos8", DUP(const_pos8), MUL(cast_56, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_ut8_60 = CAST(8, IL_FALSE, op_AND_58);
	RzILOpPure *op_SUB_61 = SUB(cast_ut8_54, cast_ut8_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp337"))), VARL("h_tmp337"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp338"))), VARL("h_tmp338"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp336")), VARL("h_tmp339"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos8", DUP(const_pos8), MUL(cast_85, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_ut8_89 = CAST(8, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos8", DUP(const_pos8), MUL(cast_91, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_ut8_95 = CAST(8, IL_FALSE, op_AND_93);
	RzILOpPure *op_SUB_96 = SUB(cast_ut8_89, cast_ut8_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_SUB_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_101 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_100 = SUB(op_LSHIFT_99, cast_101);
	RzILOpPure *cast_103 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_102 = ITE(op_LT_97, cast_103, op_SUB_100);
	RzILOpPure *cast_105 = CAST(64, MSB(DUP(op_SUB_61)), op_SUB_61);
	RzILOpPure *cond_104 = ITE(op_EQ_47, cast_105, cond_102);
	RzILOpPure *op_AND_106 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_104, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_107 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *cast_109 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_108 = LET("const_pos8", DUP(const_pos8), MUL(cast_109, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_110 = SHIFTL0(cast_ut64_107, op_MUL_108);
	RzILOpPure *cast_112 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_111 = LOGOR(cast_112, op_LSHIFT_110);
	RzILOpPure *cast_114 = CAST(64, MSB(DUP(op_OR_111)), op_OR_111);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp334", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_EXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp335", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp336", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp337", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp338", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp339", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_113 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_114);
	RzILOpEffect *seq_115 = SEQN(2, seq_31, op_ASSIGN_113);
	RzILOpEffect *empty_116 = EMPTY();
	RzILOpEffect *seq_117 = SEQN(2, seq_115, empty_116);
	RzILOpEffect *seq_118 = SEQN(2, seq_6, seq_117);
	RzILOpEffect *for_120 = REPEAT(op_LT_2, seq_118);
	RzILOpEffect *seq_119 = SEQN(2, op_ASSIGN_0, for_120);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_119, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubuhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp340;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_ut16_18 = CAST(16, IL_FALSE, op_AND_16);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_ut16_24 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_SUB_25 = SUB(cast_ut16_18, cast_ut16_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_SUB_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_33 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_32 = ITE(op_NE_12, VARL("h_tmp341"), cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_ut16_39 = CAST(16, IL_FALSE, op_AND_37);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos16", DUP(const_pos16), MUL(cast_41, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_ut16_45 = CAST(16, IL_FALSE, op_AND_43);
	RzILOpPure *op_SUB_46 = SUB(cast_ut16_39, cast_ut16_45);
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, op_SUB_46);
	RzILOpPure *op_EQ_47 = EQ(cond_32, cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos16", DUP(const_pos16), MUL(cast_50, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_51 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *cast_53 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_52 = LOGAND(op_RSHIFT_51, cast_53);
	RzILOpPure *cast_ut16_54 = CAST(16, IL_FALSE, op_AND_52);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_55 = LET("const_pos16", DUP(const_pos16), MUL(cast_56, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_55);
	RzILOpPure *cast_59 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_58 = LOGAND(op_RSHIFT_57, cast_59);
	RzILOpPure *cast_ut16_60 = CAST(16, IL_FALSE, op_AND_58);
	RzILOpPure *op_SUB_61 = SUB(cast_ut16_54, cast_ut16_60);
	RzILOpPure *arg_cast_72 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_73 = CAST(64, MSB(DUP(VARL("h_tmp343"))), VARL("h_tmp343"));
	RzILOpPure *arg_cast_74 = CAST(64, MSB(DUP(VARL("h_tmp344"))), VARL("h_tmp344"));
	RzILOpPure *arg_cast_75 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_80 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_79 = ITE(NON_ZERO(VARL("h_tmp342")), VARL("h_tmp345"), cast_80);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, cond_79);
	RzILOpPure *cast_85 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_84 = LET("const_pos16", DUP(const_pos16), MUL(cast_85, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_88 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_87 = LOGAND(op_RSHIFT_86, cast_88);
	RzILOpPure *cast_ut16_89 = CAST(16, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_92 = SHIFTR0(DUP(Rss), op_MUL_90);
	RzILOpPure *cast_94 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_93 = LOGAND(op_RSHIFT_92, cast_94);
	RzILOpPure *cast_ut16_95 = CAST(16, IL_FALSE, op_AND_93);
	RzILOpPure *op_SUB_96 = SUB(cast_ut16_89, cast_ut16_95);
	RzILOpPure *cast_98 = CAST(32, IL_FALSE, op_SUB_96);
	RzILOpPure *op_LT_97 = LET("const_pos0", DUP(const_pos0), ULT(cast_98, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_99 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_101 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_100 = SUB(op_LSHIFT_99, cast_101);
	RzILOpPure *cast_103 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_102 = ITE(op_LT_97, cast_103, op_SUB_100);
	RzILOpPure *cast_105 = CAST(64, MSB(DUP(op_SUB_61)), op_SUB_61);
	RzILOpPure *cond_104 = ITE(op_EQ_47, cast_105, cond_102);
	RzILOpPure *cast_107 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_106 = LOGAND(cond_104, cast_107);
	RzILOpPure *cast_ut64_108 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *cast_110 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_109 = LET("const_pos16", DUP(const_pos16), MUL(cast_110, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_111 = SHIFTL0(cast_ut64_108, op_MUL_109);
	RzILOpPure *cast_113 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_112 = LOGOR(cast_113, op_LSHIFT_111);
	RzILOpPure *cast_115 = CAST(64, MSB(DUP(op_OR_112)), op_OR_112);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp340", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_EXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp341", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp342", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_66 = SETL("h_tmp343", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_67 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_66);
	RzILOpEffect *c_call_68 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_69 = SETL("h_tmp344", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_70 = SEQN(2, c_call_68, op_ASSIGN_hybrid_tmp_69);
	RzILOpEffect *c_call_71 = HEX_DEPOSIT64(arg_cast_72, arg_cast_73, arg_cast_74, arg_cast_75);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_76 = SETL("h_tmp345", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_77 = SEQN(2, c_call_71, op_ASSIGN_hybrid_tmp_76);
	RzILOpEffect *seq_78 = SEQN(3, seq_67, seq_70, seq_77);
	RzILOpEffect *op_ASSIGN_81 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_82);
	RzILOpEffect *seq_83 = SEQN(3, seq_64, seq_78, op_ASSIGN_81);
	RzILOpEffect *op_ASSIGN_114 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_115);
	RzILOpEffect *seq_116 = SEQN(2, seq_31, op_ASSIGN_114);
	RzILOpEffect *empty_117 = EMPTY();
	RzILOpEffect *seq_118 = SEQN(2, seq_116, empty_117);
	RzILOpEffect *seq_119 = SEQN(2, seq_6, seq_118);
	RzILOpEffect *for_121 = REPEAT(op_LT_2, seq_119);
	RzILOpEffect *seq_120 = SEQN(2, op_ASSIGN_0, for_121);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_120, seq_83);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp346;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_12 = LET("const_pos32", DUP(const_pos32), MUL(cast_13, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *op_AND_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_18 = LET("const_pos32", DUP(const_pos32), MUL(cast_19, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(Rss, op_MUL_18);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_SUB_24 = SUB(cast_st64_17, cast_st64_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_SUB_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos32", DUP(const_pos32), MUL(cast_27, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(op_AND_25, op_MUL_26);
	RzILOpPure *op_OR_29 = LOGOR(op_AND_11, op_LSHIFT_28);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp346", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_29);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_30, empty_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_6, seq_32);
	RzILOpEffect *for_35 = REPEAT(op_LT_2, seq_33);
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_0, for_35);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_vsubws(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp347;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos32", DUP(const_pos32), MUL(cast_20, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(Rss, op_MUL_19);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_23 = CAST(32, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(DUP(cast_st32_23)), cast_st32_23);
	RzILOpPure *op_SUB_25 = SUB(cast_st64_18, cast_st64_24);
	RzILOpPure *arg_cast_27 = CAST(64, IL_FALSE, op_SUB_25);
	RzILOpPure *arg_cast_28 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_29 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_32 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp348"), VARLP("const_pos0LL")));
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos32", DUP(const_pos32), MUL(cast_34, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_33);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(DUP(cast_st32_37)), cast_st32_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos32", DUP(const_pos32), MUL(cast_40, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *op_SUB_45 = SUB(cast_st64_38, cast_st64_44);
	RzILOpPure *op_EQ_46 = EQ(cond_32, op_SUB_45);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos32", DUP(const_pos32), MUL(cast_48, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *op_AND_50 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_49, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_51 = CAST(32, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *cast_st64_52 = CAST(64, MSB(DUP(cast_st32_51)), cast_st32_51);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_53 = LET("const_pos32", DUP(const_pos32), MUL(cast_54, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_55 = SHIFTR0(DUP(Rss), op_MUL_53);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_55, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_57 = CAST(32, MSB(DUP(op_AND_56)), op_AND_56);
	RzILOpPure *cast_st64_58 = CAST(64, MSB(DUP(cast_st32_57)), cast_st32_57);
	RzILOpPure *op_SUB_59 = SUB(cast_st64_52, cast_st64_58);
	RzILOpPure *arg_cast_70 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_71 = CAST(64, MSB(DUP(VARL("h_tmp350"))), VARL("h_tmp350"));
	RzILOpPure *arg_cast_72 = CAST(64, MSB(DUP(VARL("h_tmp351"))), VARL("h_tmp351"));
	RzILOpPure *arg_cast_73 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_78 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_77 = ITE(NON_ZERO(VARL("h_tmp349")), VARL("h_tmp352"), cast_78);
	RzILOpPure *cast_80 = CAST(32, IL_FALSE, cond_77);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos32", DUP(const_pos32), MUL(cast_83, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_82);
	RzILOpPure *op_AND_85 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_84, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_86 = CAST(32, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *cast_st64_87 = CAST(64, MSB(DUP(cast_st32_86)), cast_st32_86);
	RzILOpPure *cast_89 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_88 = LET("const_pos32", DUP(const_pos32), MUL(cast_89, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_90 = SHIFTR0(DUP(Rss), op_MUL_88);
	RzILOpPure *op_AND_91 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_90, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_92 = CAST(32, MSB(DUP(op_AND_91)), op_AND_91);
	RzILOpPure *cast_st64_93 = CAST(64, MSB(DUP(cast_st32_92)), cast_st32_92);
	RzILOpPure *op_SUB_94 = SUB(cast_st64_87, cast_st64_93);
	RzILOpPure *cast_96 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_95 = SLT(op_SUB_94, cast_96);
	RzILOpPure *op_SUB_97 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_97));
	RzILOpPure *op_NEG_99 = NEG(op_LSHIFT_98);
	RzILOpPure *op_SUB_100 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_101 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_100));
	RzILOpPure *cast_103 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_102 = SUB(op_LSHIFT_101, cast_103);
	RzILOpPure *cond_104 = ITE(op_LT_95, op_NEG_99, op_SUB_102);
	RzILOpPure *cond_105 = ITE(op_EQ_46, op_SUB_59, cond_104);
	RzILOpPure *op_AND_106 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_105, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_108 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_107 = LET("const_pos32", DUP(const_pos32), MUL(cast_108, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_109 = SHIFTL0(op_AND_106, op_MUL_107);
	RzILOpPure *op_OR_110 = LOGOR(op_AND_11, op_LSHIFT_109);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp347", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_26 = HEX_SEXTRACT64(arg_cast_27, arg_cast_28, arg_cast_29);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_30 = SETL("h_tmp348", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_31 = SEQN(2, c_call_26, op_ASSIGN_hybrid_tmp_30);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp349", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp350", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp351", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *c_call_69 = HEX_DEPOSIT64(arg_cast_70, arg_cast_71, arg_cast_72, arg_cast_73);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_74 = SETL("h_tmp352", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_75 = SEQN(2, c_call_69, op_ASSIGN_hybrid_tmp_74);
	RzILOpEffect *seq_76 = SEQN(3, seq_65, seq_68, seq_75);
	RzILOpEffect *op_ASSIGN_79 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_80);
	RzILOpEffect *seq_81 = SEQN(3, seq_62, seq_76, op_ASSIGN_79);
	RzILOpEffect *op_ASSIGN_111 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_110);
	RzILOpEffect *seq_112 = SEQN(2, seq_31, op_ASSIGN_111);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *seq_114 = SEQN(2, seq_112, empty_113);
	RzILOpEffect *seq_115 = SEQN(2, seq_6, seq_114);
	RzILOpEffect *for_117 = REPEAT(op_LT_2, seq_115);
	RzILOpEffect *seq_116 = SEQN(2, op_ASSIGN_0, for_117);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_116, seq_81);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_xorp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_XOR_0);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_a2_zxth(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
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
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_EXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp353", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *seq_11 = SEQN(2, seq_6, op_ASSIGN_9);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>