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

RzILOpEffect *hex_il_op_s2_addasl_rrri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *op_ADD_9 = ADD(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_ADD_9)), op_ADD_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_allocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_neg8 = SN(32, -0x8);
	const char *lr_assoc = ALIAS2REG(HEX_REG_ALIAS_LR, false);
	RzILOpPure *lr = VARG(lr_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *fp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_FP, true);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_ADD_0 = LET("const_neg8", const_neg8, ADD(Rx, VARLP("const_neg8")));
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, op_ADD_0);
	RzILOpPure *cast_ut64_4 = CAST(64, IL_FALSE, lr);
	RzILOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzILOpPure *cast_ut32_6 = CAST(32, IL_FALSE, VARG(fp_assoc_tmp));
	RzILOpPure *cast_8 = CAST(64, IL_FALSE, cast_ut32_6);
	RzILOpPure *op_OR_7 = LOGOR(op_LSHIFT_5, cast_8);
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_10 = LET("const_pos32", DUP(const_pos32), SHIFTL0(cast_ut64_9, VARLP("const_pos32")));
	RzILOpPure *op_XOR_11 = LOGXOR(op_OR_7, op_LSHIFT_10);
	RzILOpPure *op_12 = CAST(64, IL_FALSE, op_XOR_11);
	RzILOpPure *op_SUB_18 = SUB(VARL("EA"), VARL("u"));
	RzILOpPure *cast_20 = CAST(32, MSB(DUP(op_SUB_18)), op_SUB_18);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", cast_2);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *op_ASSIGN_14 = HEX_WRITE_GLOBAL(fp_assoc_tmp, VARL("EA"));
	RzILOpEffect *empty_15 = EMPTY();
	RzILOpEffect *empty_16 = EMPTY();
	RzILOpEffect *imm_assign_17 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_19 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_20);
	RzILOpEffect *instruction_sequence = SEQN(8, imm_assign_17, op_ASSIGN_1, empty_3, ms_op_12_13, op_ASSIGN_14, empty_15, empty_16, op_ASSIGN_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_7);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);
	RzILOpPure *op_ADD_9 = ADD(Rxx, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_ADD_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);
	RzILOpPure *op_AND_9 = LOGAND(Rxx, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_AND_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);
	RzILOpPure *op_SUB_9 = SUB(Rxx, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_SUB_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);
	RzILOpPure *op_OR_9 = LOGOR(Rxx, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_LSHIFT_6);
	RzILOpPure *op_XOR_9 = LOGXOR(Rxx, cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_XOR_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_9 = ADD(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_ADD_9)), op_ADD_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_AND_9 = LOGAND(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_AND_9)), op_AND_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_SUB_9 = SUB(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_SUB_9)), op_SUB_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_OR_9 = LOGOR(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_OR_9)), op_OR_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_2 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st64 h_tmp1891;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *op_sizeof_Rs_18 = SN(32, 0x4);
	RzILOpPure *op_sizeof_Rs_28 = SN(32, 0x4);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1892;
	// Declare: ut32 h_tmp1893;
	// Declare: ut32 h_tmp1894;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp1895;
	RzILOpPure *op_sizeof_Rs_59 = SN(32, 0x4);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_4 = LET("op_sizeof_Rs_2", op_sizeof_Rs_2, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_2")));
	RzILOpPure *op_MUL_3 = LET("const_pos8", const_pos8, MUL(cast_4, VARLP("const_pos8")));
	RzILOpPure *op_GE_5 = UGE(VARL("u"), op_MUL_3);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(cast_st32_6)), cast_st32_6);
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_7, VARL("u"));
	RzILOpPure *cast_10 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_9 = ITE(op_GE_5, cast_10, op_LSHIFT_8);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cond_9);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1891"), VARLP("const_pos0LL")));
	RzILOpPure *cast_20 = LET("op_sizeof_Rs_18", op_sizeof_Rs_18, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_18")));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_GE_21 = UGE(VARL("u"), op_MUL_19);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(DUP(cast_st32_22)), cast_st32_22);
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(cast_st64_23, VARL("u"));
	RzILOpPure *cast_26 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_25 = ITE(op_GE_21, cast_26, op_LSHIFT_24);
	RzILOpPure *op_EQ_27 = EQ(cond_17, cond_25);
	RzILOpPure *cast_30 = LET("op_sizeof_Rs_28", op_sizeof_Rs_28, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_28")));
	RzILOpPure *op_MUL_29 = LET("const_pos8", DUP(const_pos8), MUL(cast_30, VARLP("const_pos8")));
	RzILOpPure *op_GE_31 = UGE(VARL("u"), op_MUL_29);
	RzILOpPure *cast_st32_32 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_33 = CAST(64, MSB(DUP(cast_st32_32)), cast_st32_32);
	RzILOpPure *op_LSHIFT_34 = SHIFTL0(cast_st64_33, VARL("u"));
	RzILOpPure *cast_36 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_35 = ITE(op_GE_31, cast_36, op_LSHIFT_34);
	RzILOpPure *arg_cast_47 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_48 = CAST(64, MSB(DUP(VARL("h_tmp1893"))), VARL("h_tmp1893"));
	RzILOpPure *arg_cast_49 = CAST(64, MSB(DUP(VARL("h_tmp1894"))), VARL("h_tmp1894"));
	RzILOpPure *arg_cast_50 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_54 = ITE(NON_ZERO(VARL("h_tmp1892")), VARL("h_tmp1895"), cast_55);
	RzILOpPure *cast_57 = CAST(32, IL_FALSE, cond_54);
	RzILOpPure *cast_61 = LET("op_sizeof_Rs_59", op_sizeof_Rs_59, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_59")));
	RzILOpPure *op_MUL_60 = LET("const_pos8", DUP(const_pos8), MUL(cast_61, VARLP("const_pos8")));
	RzILOpPure *op_GE_62 = UGE(VARL("u"), op_MUL_60);
	RzILOpPure *cast_st32_63 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_64 = CAST(64, MSB(DUP(cast_st32_63)), cast_st32_63);
	RzILOpPure *op_LSHIFT_65 = SHIFTL0(cast_st64_64, VARL("u"));
	RzILOpPure *cast_67 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_66 = ITE(op_GE_62, cast_67, op_LSHIFT_65);
	RzILOpPure *cast_69 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_68 = SLT(cond_66, cast_69);
	RzILOpPure *op_SUB_70 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cond_78 = ITE(op_EQ_27, cond_35, cond_77);
	RzILOpPure *cast_80 = CAST(32, MSB(DUP(cond_78)), cond_78);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp1891", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp1892", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp1893", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1894", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_DEPOSIT64(arg_cast_47, arg_cast_48, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1895", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *seq_53 = SEQN(3, seq_42, seq_45, seq_52);
	RzILOpEffect *op_ASSIGN_56 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_57);
	RzILOpEffect *seq_58 = SEQN(3, seq_39, seq_53, op_ASSIGN_56);
	RzILOpEffect *op_ASSIGN_79 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_80);
	RzILOpEffect *seq_81 = SEQN(2, seq_16, op_ASSIGN_79);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_1, seq_81, seq_58);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_LSHIFT_6 = SHIFTL0(cast_st32_5, VARL("u"));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_LSHIFT_6);
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), cast_8));
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_XOR_9 = LOGXOR(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(32, MSB(DUP(op_XOR_9)), op_XOR_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1896;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
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
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_st16_17, VARL("u"));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, op_LSHIFT_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1896", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_28, empty_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_6, seq_31);
	RzILOpEffect *for_34 = REPEAT(op_LT_2, seq_32);
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_0, for_34);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1897;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

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
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(cast_st64_17, VARL("u"));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_LSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_21);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_11, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1897", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1898;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1898"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1898", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_21);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1899;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1899"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *op_ADD_22 = ADD(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1899", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_ADD_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1900;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1900"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1900", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_AND_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1901;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1901"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *op_SUB_22 = SUB(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1901", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_SUB_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1902;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1902"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *op_OR_22 = LOGOR(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1902", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1903;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1903"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *op_XOR_22 = LOGXOR(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1903", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_XOR_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1904;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1904"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(32, MSB(DUP(cond_23)), cond_23);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1904", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1905;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1905"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_ADD_24 = ADD(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_ADD_24)), op_ADD_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1905", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1906;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1906"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_AND_24 = LOGAND(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1906", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1907;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1907"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_SUB_24 = SUB(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_SUB_24)), op_SUB_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1907", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1908;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1908"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_OR_24 = LOGOR(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1908", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_r_sat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1919;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1920;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1921;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1922;
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
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp1920"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(cast_st16_27)), cast_st16_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st16_28)), cast_st16_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1921"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(cast_st64_29, op_SUB_39);
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st16_48 = CAST(16, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(cast_st16_48)), cast_st16_48);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st16_49)), cast_st16_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp1922"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_st64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_RSHIFT_42, op_LSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_ut64_63 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_63, op_MUL_64);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(64, MSB(DUP(op_OR_67)), op_OR_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1919", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1920", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp1921", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp1922", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_69 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_70);
	RzILOpEffect *seq_71 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_69);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1923;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1924;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1925;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1926;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp1924"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1925"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(cast_st64_29, op_SUB_39);
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(DUP(cast_st32_47)), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(DUP(cast_st64_48)), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st32_49)), cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp1926"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_st64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_RSHIFT_42, op_LSHIFT_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_60, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos32", DUP(const_pos32), MUL(cast_63, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(op_AND_61, op_MUL_62);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_11, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1923", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1924", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp1925", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp1926", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *seq_67 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_66);
	RzILOpEffect *empty_68 = EMPTY();
	RzILOpEffect *seq_69 = SEQN(2, seq_67, empty_68);
	RzILOpEffect *seq_70 = SEQN(2, seq_6, seq_69);
	RzILOpEffect *for_72 = REPEAT(op_LT_2, seq_70);
	RzILOpEffect *seq_71 = SEQN(2, op_ASSIGN_0, for_72);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(Rxx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_AND_3 = LOGAND(Rxx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_SUB_3 = SUB(Rxx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_SUB_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *op_OR_3 = LOGOR(Rxx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_p_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut8 tmp;
	// Declare: ut8 rnd;
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);

	// EXEC
	RzILOpPure *cast_st64_0 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st64_0, VARL("u"));
	RzILOpPure *cast_4 = CAST(8, IL_FALSE, op_RSHIFT_2);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("tmp"));
	RzILOpPure *op_AND_5 = LET("const_pos1", const_pos1, LOGAND(cast_6, VARLP("const_pos1")));
	RzILOpPure *cast_8 = CAST(8, IL_FALSE, op_AND_5);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(DUP(VARL("tmp"))), VARL("tmp"));
	RzILOpPure *op_RSHIFT_10 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_9, VARLP("const_pos1")));
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(VARL("rnd"))), VARL("rnd"));
	RzILOpPure *op_ADD_11 = ADD(op_RSHIFT_10, cast_12);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("tmp", cast_4);
	RzILOpEffect *op_ASSIGN_7 = SETL("rnd", cast_8);
	RzILOpEffect *op_ASSIGN_13 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_ADD_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_RSHIFT_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_ADD_3 = ADD(Rx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_AND_3 = LOGAND(Rx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_SUB_3 = SUB(Rx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_SUB_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(cast_st32_0, VARL("u"));
	RzILOpPure *op_OR_3 = LOGOR(Rx, op_RSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_r_rnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_st32_0 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_1 = CAST(64, MSB(DUP(cast_st32_0)), cast_st32_0);
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(cast_st64_1, VARL("u"));
	RzILOpPure *cast_5 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_ADD_4 = ADD(op_RSHIFT_3, cast_5);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(op_ADD_4)), op_ADD_4);
	RzILOpPure *op_RSHIFT_7 = LET("const_pos1", DUP(const_pos1), SHIFTR0(cast_st64_6, VARLP("const_pos1")));
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(op_RSHIFT_7)), op_RSHIFT_7);

	// WRITE
	RzILOpEffect *imm_assign_2 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_2, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1927;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
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
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_18, VARL("u"));
	RzILOpPure *op_MUL_21 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(op_RSHIFT_20, op_MUL_21);
	RzILOpPure *cast_24 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st16_25);
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
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1927", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_19 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_34 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_35);
	RzILOpEffect *empty_36 = EMPTY();
	RzILOpEffect *seq_37 = SEQN(2, op_ASSIGN_34, empty_36);
	RzILOpEffect *seq_38 = SEQN(2, seq_6, seq_37);
	RzILOpEffect *for_40 = REPEAT(op_LT_2, seq_38);
	RzILOpEffect *seq_39 = SEQN(2, op_ASSIGN_0, for_40);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_19, seq_39);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1928;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
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
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(cast_st16_17, VARL("u"));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, op_RSHIFT_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1928", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_28, empty_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_6, seq_31);
	RzILOpEffect *for_34 = REPEAT(op_LT_2, seq_32);
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_0, for_34);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1929;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

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
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(cast_st64_17, VARL("u"));
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos32", DUP(const_pos32), MUL(cast_22, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(op_AND_20, op_MUL_21);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_11, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1929", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *empty_26 = EMPTY();
	RzILOpEffect *seq_27 = SEQN(2, op_ASSIGN_25, empty_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_6, seq_27);
	RzILOpEffect *for_30 = REPEAT(op_LT_2, seq_28);
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_0, for_30);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1930;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1930"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1930", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_21);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1931;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1931"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *op_ADD_22 = ADD(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1931", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_ADD_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1932;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1932"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1932", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_AND_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1933;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1933"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *op_SUB_22 = SUB(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1933", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_SUB_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1934;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1934"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *op_OR_22 = LOGOR(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1934", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_OR_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1935;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1935"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(DUP(Rss)), DUP(Rss));
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_st64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(DUP(Rss))), DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_st64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *op_XOR_22 = LOGXOR(Rxx, cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1935", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_23 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, op_XOR_22);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1936;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1936"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(32, MSB(DUP(cond_23)), cond_23);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1936", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1937;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1937"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_ADD_24 = ADD(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_ADD_24)), op_ADD_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1937", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1938;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1938"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_AND_24 = LOGAND(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1938", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1939;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1939"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_SUB_24 = SUB(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_SUB_24)), op_SUB_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1939", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1940;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1940"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_st64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(DUP(DUP(Rs))), DUP(Rs));
	RzILOpPure *cast_st64_21 = CAST(64, MSB(DUP(cast_st32_20)), cast_st32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_st64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *op_OR_24 = LOGOR(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1940", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_r_sat(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_asr_r_svw_trun(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1951;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1952;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp1953;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1954;
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
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
	RzILOpPure *op_NE_13 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_20 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp1952"), VARLP("const_pos0LL")));
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_21 = SLT(cond_20, cast_22);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos32", const_pos32, MUL(cast_24, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(Rss, op_MUL_23);
	RzILOpPure *op_AND_26 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_25, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_27 = CAST(32, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *cast_st64_28 = CAST(64, MSB(DUP(cast_st32_27)), cast_st32_27);
	RzILOpPure *cast_st32_29 = CAST(32, MSB(DUP(cast_st64_28)), cast_st64_28);
	RzILOpPure *cast_st64_30 = CAST(64, MSB(DUP(cast_st32_29)), cast_st32_29);
	RzILOpPure *op_NE_31 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_33 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_34 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_35 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_38 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_31, VARL("h_tmp1953"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_39 = NEG(cond_38);
	RzILOpPure *cast_41 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_40 = SUB(op_NEG_39, cast_41);
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_st64_30, op_SUB_40);
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_44 = LET("const_pos32", DUP(const_pos32), MUL(cast_45, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_46, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_48 = CAST(32, MSB(DUP(op_AND_47)), op_AND_47);
	RzILOpPure *cast_st64_49 = CAST(64, MSB(DUP(cast_st32_48)), cast_st32_48);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(cast_st64_49)), cast_st64_49);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *op_NE_52 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_54 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_55 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_56 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_59 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_52, VARL("h_tmp1954"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(cast_st64_51, cond_59);
	RzILOpPure *cond_61 = ITE(op_LT_21, op_LSHIFT_43, op_RSHIFT_60);
	RzILOpPure *op_MUL_62 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(cond_61, op_MUL_62);
	RzILOpPure *cast_65 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_64 = LOGAND(op_RSHIFT_63, cast_65);
	RzILOpPure *cast_st16_66 = CAST(16, MSB(DUP(op_AND_64)), op_AND_64);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, cast_st16_66);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_68, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_69 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *cast_71 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_70 = LET("const_pos16", DUP(const_pos16), MUL(cast_71, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_72 = SHIFTL0(cast_ut64_69, op_MUL_70);
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_73 = LOGOR(cast_74, op_LSHIFT_72);
	RzILOpPure *cast_76 = CAST(32, MSB(DUP(op_OR_73)), op_OR_73);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1951", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp1952", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *c_call_32 = HEX_SEXTRACT64(arg_cast_33, arg_cast_34, arg_cast_35);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_36 = SETL("h_tmp1953", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_37 = SEQN(2, c_call_32, op_ASSIGN_hybrid_tmp_36);
	RzILOpEffect *c_call_53 = HEX_SEXTRACT64(arg_cast_54, arg_cast_55, arg_cast_56);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp1954", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *op_ASSIGN_75 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(4, seq_19, seq_37, seq_58, op_ASSIGN_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *seq_79 = SEQN(2, seq_77, empty_78);
	RzILOpEffect *seq_80 = SEQN(2, seq_6, seq_79);
	RzILOpEffect *for_82 = REPEAT(op_LT_2, seq_80);
	RzILOpEffect *seq_81 = SEQN(2, op_ASSIGN_0, for_82);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_81);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp1955;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1956;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp1957;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1958;
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
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp1956"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(cast_st16_27)), cast_st16_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st16_28)), cast_st16_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1957"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_st64_29, op_SUB_39);
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_st16_48 = CAST(16, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st16_49 = CAST(16, MSB(DUP(cast_st16_48)), cast_st16_48);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st16_49)), cast_st16_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp1958"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(cast_st64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_LSHIFT_42, op_RSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_ut64_63 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_63, op_MUL_64);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(64, MSB(DUP(op_OR_67)), op_OR_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1955", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1956", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp1957", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp1958", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_69 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_70);
	RzILOpEffect *seq_71 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_69);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_asr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp1959;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1960;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp1961;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1962;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp1960"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(cast_st64_27)), cast_st64_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(DUP(cast_st32_28)), cast_st32_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp1961"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_st64_29, op_SUB_39);
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(DUP(op_AND_46)), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(DUP(cast_st32_47)), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(DUP(cast_st64_48)), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(64, MSB(DUP(cast_st32_49)), cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp1962"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(cast_st64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_LSHIFT_42, op_RSHIFT_59);
	RzILOpPure *op_AND_61 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_60, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos32", DUP(const_pos32), MUL(cast_63, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_64 = SHIFTL0(op_AND_61, op_MUL_62);
	RzILOpPure *op_OR_65 = LOGOR(op_AND_11, op_LSHIFT_64);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1959", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1960", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp1961", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp1962", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_65);
	RzILOpEffect *seq_67 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_66);
	RzILOpEffect *empty_68 = EMPTY();
	RzILOpEffect *seq_69 = SEQN(2, seq_67, empty_68);
	RzILOpEffect *seq_70 = SEQN(2, seq_6, seq_69);
	RzILOpEffect *for_72 = REPEAT(op_LT_2, seq_70);
	RzILOpEffect *seq_71 = SEQN(2, op_ASSIGN_0, for_72);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_71);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_brev(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_brevp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cabacdecbin(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp1966;

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rs);
	RzILOpPure *arg_cast_2 = CAST(32, IL_FALSE, op_NOT_0);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_CLO32(arg_cast_2);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_3 = SETL("h_tmp1966", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_4 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_3);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("h_tmp1966"));
	RzILOpEffect *seq_6 = SEQN(2, seq_4, op_ASSIGN_5);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl0p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_cl1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp1967;

	// EXEC
	RzILOpPure *arg_cast_1 = CAST(32, IL_FALSE, Rs);

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(arg_cast_1);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp1967", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, VARL("h_tmp1967"));
	RzILOpEffect *seq_5 = SEQN(2, seq_3, op_ASSIGN_4);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_cl1p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp1968;
	// Declare: st32 h_tmp1969;
	// Declare: st32 h_tmp1970;
	// Declare: st32 h_tmp1971;

	// EXEC
	RzILOpPure *arg_cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_NOT_4 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_6 = CAST(32, IL_FALSE, op_NOT_4);
	RzILOpPure *op_GT_9 = SGT(VARL("h_tmp1968"), VARL("h_tmp1969"));
	RzILOpPure *arg_cast_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_NOT_14 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_16 = CAST(32, IL_FALSE, op_NOT_14);
	RzILOpPure *cond_19 = ITE(op_GT_9, VARL("h_tmp1970"), VARL("h_tmp1971"));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(arg_cast_1);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp1968", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_5 = HEX_CLO32(arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp1969", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_5, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_10 = HEX_CLO32(arg_cast_11);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1970", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *c_call_15 = HEX_CLO32(arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1971", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *op_ASSIGN_20 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cond_19);
	RzILOpEffect *seq_21 = SEQN(5, seq_3, seq_8, seq_13, seq_18, op_ASSIGN_20);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbnorm(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	// Declare: st32 h_tmp1972;
	// Declare: st32 h_tmp1973;
	// Declare: st32 h_tmp1974;
	// Declare: st32 h_tmp1975;
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_EQ_0 = LET("const_pos0", const_pos0, EQ(cast_1, VARLP("const_pos0")));
	RzILOpPure *cast_3 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_5 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_NOT_8 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_10 = CAST(32, IL_FALSE, op_NOT_8);
	RzILOpPure *op_GT_13 = SGT(VARL("h_tmp1972"), VARL("h_tmp1973"));
	RzILOpPure *arg_cast_15 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_NOT_18 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_20 = CAST(32, IL_FALSE, op_NOT_18);
	RzILOpPure *cond_23 = ITE(op_GT_13, VARL("h_tmp1974"), VARL("h_tmp1975"));
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, cond_23);
	RzILOpPure *op_SUB_24 = LET("const_pos1", const_pos1, SUB(cast_25, VARLP("const_pos1")));
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_SUB_24)), op_SUB_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_3);
	RzILOpEffect *c_call_4 = HEX_CLO32(arg_cast_5);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_6 = SETL("h_tmp1972", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_7 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_6);
	RzILOpEffect *c_call_9 = HEX_CLO32(arg_cast_10);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp1973", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_14 = HEX_CLO32(arg_cast_15);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_16 = SETL("h_tmp1974", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_17 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_16);
	RzILOpEffect *c_call_19 = HEX_CLO32(arg_cast_20);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp1975", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_27);
	RzILOpEffect *seq_28 = SEQN(5, seq_7, seq_12, seq_17, seq_22, op_ASSIGN_26);
	RzILOpEffect *seq_then_29 = SEQN(1, op_ASSIGN_2);
	RzILOpEffect *seq_else_31 = SEQN(1, seq_28);
	RzILOpEffect *branch_30 = BRANCH(op_EQ_0, seq_then_29, seq_else_31);
	RzILOpEffect *instruction_sequence = SEQN(1, branch_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clbp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_clrbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_clrbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1976;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1977;
	// Declare: st64 h_tmp1978;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1976"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp1977"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp1978"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *op_NOT_37 = LOGNOT(cond_36);
	RzILOpPure *cast_39 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_AND_38 = LOGAND(cast_39, op_NOT_37);
	RzILOpPure *cast_41 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1976", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp1977", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1978", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_40 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_41);
	RzILOpEffect *seq_42 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_42);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_ct0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct0p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_ct1p(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_deinterleave(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_extractu(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp1979;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_6 = LET("const_pos0", const_pos0, INV(EQ(cast_7, VARLP("const_pos0"))));
	RzILOpPure *cast_ut32_8 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut32_8, VARL("offset"));
	RzILOpPure *arg_cast_11 = CAST(64, IL_FALSE, op_RSHIFT_9);
	RzILOpPure *arg_cast_12 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_13 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_17 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_16 = ITE(op_NE_6, VARL("h_tmp1979"), cast_17);
	RzILOpPure *cast_19 = CAST(32, MSB(DUP(cond_16)), cond_16);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp1979", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_18 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_19);
	RzILOpEffect *seq_20 = SEQN(2, seq_15, op_ASSIGN_18);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_extractu_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp1980;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp1981;
	// Declare: st32 offset;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp1982;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos6", const_pos6, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos6"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rtt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos6", DUP(const_pos6), CAST(64, MSB(DUP(VARLP("const_pos6"))), VARLP("const_pos6")));
	RzILOpPure *cast_13 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp1980"), cast_13);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(cond_12)), cond_12);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, cast_st64_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp1981"), VARLP("const_pos0LL")));
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_29)), cond_29);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_33 = LET("const_pos0", DUP(const_pos0), INV(EQ(cast_34, VARLP("const_pos0"))));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_35 = LET("const_pos0", DUP(const_pos0), ULT(cast_36, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_37 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut32_37);
	RzILOpPure *cast_ut32_39 = CAST(32, IL_FALSE, cast_ut64_38);
	RzILOpPure *cast_ut64_40 = CAST(64, IL_FALSE, cast_ut32_39);
	RzILOpPure *op_NEG_41 = NEG(VARL("offset"));
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, op_NEG_41);
	RzILOpPure *op_SUB_42 = LET("const_pos1", DUP(const_pos1), SUB(cast_43, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_44 = SHIFTL0(cast_ut64_40, op_SUB_42);
	RzILOpPure *op_LSHIFT_45 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_44, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_46 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_47 = CAST(64, IL_FALSE, cast_ut32_46);
	RzILOpPure *cast_ut32_48 = CAST(32, IL_FALSE, cast_ut64_47);
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, cast_ut32_48);
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(cast_ut64_49, VARL("offset"));
	RzILOpPure *cond_51 = ITE(op_LT_35, op_LSHIFT_45, op_RSHIFT_50);
	RzILOpPure *arg_cast_53 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_58 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_57 = ITE(op_NE_33, VARL("h_tmp1982"), cast_58);
	RzILOpPure *cast_60 = CAST(32, MSB(DUP(cond_57)), cond_57);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1980", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1981", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *c_call_52 = HEX_EXTRACT64(cond_51, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp1982", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_60);
	RzILOpEffect *seq_61 = SEQN(2, seq_56, op_ASSIGN_59);
	RzILOpEffect *instruction_sequence = SEQN(3, seq_15, seq_31, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_extractup(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1983;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_6 = LET("const_pos0", const_pos0, INV(EQ(cast_7, VARLP("const_pos0"))));
	RzILOpPure *cast_ut64_8 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(cast_ut64_8, VARL("offset"));
	RzILOpPure *arg_cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_12 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_16 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_15 = ITE(op_NE_6, VARL("h_tmp1983"), cast_16);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(cond_15)), cond_15);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_EXTRACT64(op_RSHIFT_9, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp1983", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *op_ASSIGN_17 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_14, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_extractup_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp1984;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp1985;
	// Declare: st32 offset;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp1986;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos6", const_pos6, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos6"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rtt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos6", DUP(const_pos6), CAST(64, MSB(DUP(VARLP("const_pos6"))), VARLP("const_pos6")));
	RzILOpPure *cast_13 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp1984"), cast_13);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(cond_12)), cond_12);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, cast_st64_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp1985"), VARLP("const_pos0LL")));
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_29)), cond_29);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_33 = LET("const_pos0", DUP(const_pos0), INV(EQ(cast_34, VARLP("const_pos0"))));
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_35 = LET("const_pos0", DUP(const_pos0), ULT(cast_36, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_37 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_ut64_38 = CAST(64, IL_FALSE, cast_ut64_37);
	RzILOpPure *op_NEG_39 = NEG(VARL("offset"));
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, op_NEG_39);
	RzILOpPure *op_SUB_40 = LET("const_pos1", DUP(const_pos1), SUB(cast_41, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(cast_ut64_38, op_SUB_40);
	RzILOpPure *op_LSHIFT_43 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_42, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_44 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *cast_ut64_45 = CAST(64, IL_FALSE, cast_ut64_44);
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(cast_ut64_45, VARL("offset"));
	RzILOpPure *cond_47 = ITE(op_LT_35, op_LSHIFT_43, op_RSHIFT_46);
	RzILOpPure *arg_cast_49 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_54 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_53 = ITE(op_NE_33, VARL("h_tmp1986"), cast_54);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(cond_53)), cond_53);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1984", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1985", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *c_call_48 = HEX_EXTRACT64(cond_47, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp1986", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *op_ASSIGN_55 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_56);
	RzILOpEffect *seq_57 = SEQN(2, seq_52, op_ASSIGN_55);
	RzILOpEffect *instruction_sequence = SEQN(3, seq_15, seq_31, seq_57);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_insert(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_8 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_7 = SUB(op_LSHIFT_6, cast_8);
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_SUB_7, VARL("offset"));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *andop_NOT_10Rx = LOGAND(op_NOT_10, cast_12);
	RzILOpPure *cast_13 = CAST(32, MSB(DUP(andop_NOT_10Rx)), andop_NOT_10Rx);
	RzILOpPure *op_LSHIFT_14 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_16 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_15 = SUB(op_LSHIFT_14, cast_16);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *op_AND_17 = LOGAND(cast_18, op_SUB_15);
	RzILOpPure *op_LSHIFT_19 = SHIFTL0(op_AND_17, VARL("offset"));
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(DUP(Rx))), DUP(Rx));
	RzILOpPure *orop_LSHIFT_19Rx = LOGOR(op_LSHIFT_19, cast_21);
	RzILOpPure *cast_22 = CAST(32, MSB(DUP(orop_LSHIFT_19Rx)), orop_LSHIFT_19Rx);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *op_ASSIGN_AND_11 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_13);
	RzILOpEffect *op_ASSIGN_OR_20 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_22);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, op_ASSIGN_AND_11, op_ASSIGN_OR_20);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_insert_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp1987;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp1988;
	// Declare: st32 offset;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut8 mask;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos6", const_pos6, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos6"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rtt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos6", DUP(const_pos6), CAST(64, MSB(DUP(VARLP("const_pos6"))), VARLP("const_pos6")));
	RzILOpPure *cast_13 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp1987"), cast_13);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(cond_12)), cond_12);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, cast_st64_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp1988"), VARLP("const_pos0LL")));
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_29)), cond_29);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_35 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_34 = SUB(op_LSHIFT_33, cast_35);
	RzILOpPure *cast_37 = CAST(8, IL_FALSE, op_SUB_34);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_38 = LET("const_pos0", DUP(const_pos0), ULT(cast_39, VARLP("const_pos0")));
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(VARL("mask"), VARL("offset"));
	RzILOpPure *op_NOT_43 = LOGNOT(op_LSHIFT_42);
	RzILOpPure *cast_45 = CAST(32, MSB(DUP(op_NOT_43)), op_NOT_43);
	RzILOpPure *andop_NOT_43Rx = LOGAND(cast_45, Rx);
	RzILOpPure *cast_47 = CAST(32, MSB(DUP(VARL("mask"))), VARL("mask"));
	RzILOpPure *op_AND_46 = LOGAND(Rs, cast_47);
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_46, VARL("offset"));
	RzILOpPure *orop_LSHIFT_48Rx = LOGOR(op_LSHIFT_48, DUP(Rx));

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1987", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1988", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_36 = SETL("mask", cast_37);
	RzILOpEffect *op_ASSIGN_40 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_41);
	RzILOpEffect *op_ASSIGN_AND_44 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, andop_NOT_43Rx);
	RzILOpEffect *op_ASSIGN_OR_49 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, orop_LSHIFT_48Rx);
	RzILOpEffect *seq_then_50 = SEQN(1, op_ASSIGN_40);
	RzILOpEffect *seq_else_52 = SEQN(2, op_ASSIGN_AND_44, op_ASSIGN_OR_49);
	RzILOpEffect *branch_51 = BRANCH(op_LT_38, seq_then_50, seq_else_52);
	RzILOpEffect *instruction_sequence = SEQN(4, seq_15, seq_31, op_ASSIGN_36, branch_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_insertp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));
	RzILOpPure *op_LSHIFT_6 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_8 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_7 = SUB(op_LSHIFT_6, cast_8);
	RzILOpPure *op_LSHIFT_9 = SHIFTL0(op_SUB_7, VARL("offset"));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *andop_NOT_10Rxx = LOGAND(op_NOT_10, Rxx);
	RzILOpPure *op_LSHIFT_12 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_14 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_13 = SUB(op_LSHIFT_12, cast_14);
	RzILOpPure *op_AND_15 = LOGAND(Rss, op_SUB_13);
	RzILOpPure *op_LSHIFT_16 = SHIFTL0(op_AND_15, VARL("offset"));
	RzILOpPure *orop_LSHIFT_16Rxx = LOGOR(op_LSHIFT_16, DUP(Rxx));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *op_ASSIGN_AND_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, andop_NOT_10Rxx);
	RzILOpEffect *op_ASSIGN_OR_17 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, orop_LSHIFT_16Rxx);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, op_ASSIGN_AND_11, op_ASSIGN_OR_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_insertp_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp1989;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp1990;
	// Declare: st32 offset;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut8 mask;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos6", const_pos6, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos6"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rtt, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(DUP(cast_st32_4)), cast_st32_4);
	RzILOpPure *arg_cast_7 = CAST(64, IL_FALSE, cast_st64_5);
	RzILOpPure *arg_cast_8 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_9 = LET("const_pos6", DUP(const_pos6), CAST(64, MSB(DUP(VARLP("const_pos6"))), VARLP("const_pos6")));
	RzILOpPure *cast_13 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp1989"), cast_13);
	RzILOpPure *cast_16 = CAST(32, MSB(DUP(cond_12)), cond_12);
	RzILOpPure *op_NE_17 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rtt), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(cast_st32_21)), cast_st32_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, cast_st64_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp1990"), VARLP("const_pos0LL")));
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_29)), cond_29);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), VARL("width")));
	RzILOpPure *cast_35 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_34 = SUB(op_LSHIFT_33, cast_35);
	RzILOpPure *cast_37 = CAST(8, IL_FALSE, op_SUB_34);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_38 = LET("const_pos0", DUP(const_pos0), ULT(cast_39, VARLP("const_pos0")));
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_42 = SHIFTL0(VARL("mask"), VARL("offset"));
	RzILOpPure *op_NOT_43 = LOGNOT(op_LSHIFT_42);
	RzILOpPure *cast_45 = CAST(64, MSB(DUP(op_NOT_43)), op_NOT_43);
	RzILOpPure *andop_NOT_43Rxx = LOGAND(cast_45, Rxx);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(VARL("mask"))), VARL("mask"));
	RzILOpPure *op_AND_46 = LOGAND(Rss, cast_47);
	RzILOpPure *op_LSHIFT_48 = SHIFTL0(op_AND_46, VARL("offset"));
	RzILOpPure *orop_LSHIFT_48Rxx = LOGOR(op_LSHIFT_48, DUP(Rxx));

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp1989", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp1990", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *op_ASSIGN_36 = SETL("mask", cast_37);
	RzILOpEffect *op_ASSIGN_40 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_41);
	RzILOpEffect *op_ASSIGN_AND_44 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, andop_NOT_43Rxx);
	RzILOpEffect *op_ASSIGN_OR_49 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, orop_LSHIFT_48Rxx);
	RzILOpEffect *seq_then_50 = SEQN(1, op_ASSIGN_40);
	RzILOpEffect *seq_else_52 = SEQN(2, op_ASSIGN_AND_44, op_ASSIGN_OR_49);
	RzILOpEffect *branch_51 = BRANCH(op_LT_38, seq_then_50, seq_else_52);
	RzILOpEffect *instruction_sequence = SEQN(4, seq_15, seq_31, op_ASSIGN_36, branch_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_interleave(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lfsp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1991;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1991"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(cond_21)), cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1991", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_23);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1992;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1992"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_ADD_22 = ADD(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_ADD_22)), op_ADD_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1992", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1993;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1993"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_AND_22 = LOGAND(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_AND_22)), op_AND_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1993", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1994;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1994"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_SUB_22 = SUB(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_SUB_22)), op_SUB_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1994", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1995;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1995"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_OR_22 = LOGOR(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1995", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1996;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1996"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_RSHIFT_18, op_LSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_XOR_22 = LOGXOR(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_XOR_22)), op_XOR_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1996", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1997;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1997"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(32, MSB(DUP(cond_23)), cond_23);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1997", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1998;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1998"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_ADD_24 = ADD(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_ADD_24)), op_ADD_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1998", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp1999;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp1999"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_AND_24 = LOGAND(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1999", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2000;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2000"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_SUB_24 = SUB(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_SUB_24)), op_SUB_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2000", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2001;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2001"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_RSHIFT_19, op_LSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_OR_24 = LOGOR(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2001", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2002;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2003;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2004;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2005;
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
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2003"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, cast_ut16_27);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut16_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp2004"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(cast_ut64_29, op_SUB_39);
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_ut16_48 = CAST(16, IL_FALSE, op_AND_46);
	RzILOpPure *cast_ut16_49 = CAST(16, IL_FALSE, cast_ut16_48);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, cast_ut16_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp2005"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_ut64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_RSHIFT_42, op_LSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, IL_FALSE, VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_ut64_63 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_63, op_MUL_64);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(64, MSB(DUP(op_OR_67)), op_OR_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2002", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2003", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2004", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2005", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_69 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_70);
	RzILOpEffect *seq_71 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_69);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsl_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2006;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2007;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2008;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2009;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2007"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_26 = CAST(32, IL_FALSE, op_AND_25);
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, cast_ut32_26);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, cast_ut64_27);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp2008"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(cast_ut64_29, op_SUB_39);
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_47 = CAST(32, IL_FALSE, op_AND_46);
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, cast_ut32_47);
	RzILOpPure *cast_ut32_49 = CAST(32, IL_FALSE, cast_ut64_48);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, cast_ut32_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp2009"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_59 = SHIFTL0(cast_ut64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_RSHIFT_42, op_LSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos32", DUP(const_pos32), MUL(cast_64, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_65 = SHIFTL0(op_AND_61, op_MUL_63);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_66 = LOGOR(cast_67, op_LSHIFT_65);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(op_OR_66)), op_OR_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2006", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2007", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2008", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2009", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_69);
	RzILOpEffect *seq_70 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_68);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_9 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_10);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_ADD_9 = ADD(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(op_ADD_9)), op_ADD_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_AND_9 = LOGAND(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(op_AND_9)), op_AND_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_SUB_9 = SUB(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(op_SUB_9)), op_SUB_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_OR_9 = LOGOR(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(op_OR_9)), op_OR_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_p_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_1 = SN(32, 0x8);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rss_1", op_sizeof_Rss_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut64_5, VARL("u"));
	RzILOpPure *cast_8 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_7 = ITE(op_GE_4, cast_8, op_RSHIFT_6);
	RzILOpPure *cast_10 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_XOR_9 = LOGXOR(cast_10, cond_7);
	RzILOpPure *cast_12 = CAST(64, MSB(DUP(op_XOR_9)), op_XOR_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_11 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_12);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, MSB(DUP(cond_7)), cond_7);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_8 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_9);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_8 = ADD(cast_9, cond_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_ADD_8)), op_ADD_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_AND_8 = LOGAND(cast_9, cond_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_SUB_8 = SUB(cast_9, cond_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_SUB_8)), op_SUB_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_OR_8 = LOGOR(cast_9, cond_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_OR_8)), op_OR_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_r_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *op_sizeof_Rs_1 = SN(32, 0x4);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_3 = LET("op_sizeof_Rs_1", op_sizeof_Rs_1, CAST(32, IL_FALSE, VARLP("op_sizeof_Rs_1")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(cast_3, VARLP("const_pos8")));
	RzILOpPure *op_GE_4 = UGE(VARL("u"), op_MUL_2);
	RzILOpPure *cast_ut32_5 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(cast_ut32_5, VARL("u"));
	RzILOpPure *cond_7 = LET("const_pos0", const_pos0, ITE(op_GE_4, VARLP("const_pos0"), op_RSHIFT_6));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_XOR_8 = LOGXOR(cast_9, cond_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(op_XOR_8)), op_XOR_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2010;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
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
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(cast_ut16_17, VARL("u"));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, op_RSHIFT_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos16", DUP(const_pos16), MUL(cast_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(64, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2010", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_28, empty_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_6, seq_31);
	RzILOpEffect *for_34 = REPEAT(op_LT_2, seq_32);
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_0, for_34);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_i_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2011;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

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
	RzILOpPure *cast_ut32_16 = CAST(32, IL_FALSE, op_AND_15);
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(cast_ut64_17, VARL("u"));
	RzILOpPure *cast_21 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_20 = LOGAND(op_RSHIFT_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_24 = SHIFTL0(op_AND_20, op_MUL_22);
	RzILOpPure *cast_26 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_25 = LOGOR(cast_26, op_LSHIFT_24);
	RzILOpPure *cast_28 = CAST(64, MSB(DUP(op_OR_25)), op_OR_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2011", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *imm_assign_18 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_27 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_28);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_27, empty_29);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_18, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2012;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2012"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, MSB(DUP(cond_21)), cond_21);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2012", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_23);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_22);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2013;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2013"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_ADD_22 = ADD(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_ADD_22)), op_ADD_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2013", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2014;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2014"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_AND_22 = LOGAND(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_AND_22)), op_AND_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2014", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2015;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2015"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_SUB_22 = SUB(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_SUB_22)), op_SUB_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2015", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2016;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2016"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_OR_22 = LOGOR(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2016", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_p_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2017;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2017"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_NEG_14 = NEG(VARL("shamt"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, DUP(Rss));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(cast_ut64_19, VARL("shamt"));
	RzILOpPure *cond_21 = ITE(op_LT_11, op_LSHIFT_18, op_RSHIFT_20);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, Rxx);
	RzILOpPure *op_XOR_22 = LOGXOR(cast_23, cond_21);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_XOR_22)), op_XOR_22);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2017", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2018;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2018"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(32, MSB(DUP(cond_23)), cond_23);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2018", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_25);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_24);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_acc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2019;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2019"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_ADD_24 = ADD(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_ADD_24)), op_ADD_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2019", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2020;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2020"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_AND_24 = LOGAND(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_AND_24)), op_AND_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2020", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_nac(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2021;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2021"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_SUB_24 = SUB(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_SUB_24)), op_SUB_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2021", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_r_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2022;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2022"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_13 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_14 = CAST(64, IL_FALSE, cast_ut32_13);
	RzILOpPure *op_NEG_15 = NEG(VARL("shamt"));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_NEG_15);
	RzILOpPure *op_SUB_16 = LET("const_pos1", const_pos1, SUB(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_14, op_SUB_16);
	RzILOpPure *op_LSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(cast_ut64_21, VARL("shamt"));
	RzILOpPure *cond_23 = ITE(op_LT_11, op_LSHIFT_19, op_RSHIFT_22);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *op_OR_24 = LOGOR(cast_25, cond_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2022", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_27);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_9, op_ASSIGN_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2023;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2024;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2025;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2026;
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
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2024"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(cast_23, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *cast_26 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_ut16_27 = CAST(16, IL_FALSE, op_AND_25);
	RzILOpPure *cast_ut16_28 = CAST(16, IL_FALSE, cast_ut16_27);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut16_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp2025"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_29, op_SUB_39);
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(cast_44, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_47 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_46 = LOGAND(op_RSHIFT_45, cast_47);
	RzILOpPure *cast_ut16_48 = CAST(16, IL_FALSE, op_AND_46);
	RzILOpPure *cast_ut16_49 = CAST(16, IL_FALSE, cast_ut16_48);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, cast_ut16_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp2026"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(cast_ut64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_LSHIFT_42, op_RSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, IL_FALSE, VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_ut64_63 = CAST(64, IL_FALSE, op_AND_61);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_66 = SHIFTL0(cast_ut64_63, op_MUL_64);
	RzILOpPure *cast_68 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_67 = LOGOR(cast_68, op_LSHIFT_66);
	RzILOpPure *cast_70 = CAST(64, MSB(DUP(op_OR_67)), op_OR_67);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2023", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2024", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2025", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2026", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_69 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_70);
	RzILOpEffect *seq_71 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_69);
	RzILOpEffect *empty_72 = EMPTY();
	RzILOpEffect *seq_73 = SEQN(2, seq_71, empty_72);
	RzILOpEffect *seq_74 = SEQN(2, seq_6, seq_73);
	RzILOpEffect *for_76 = REPEAT(op_LT_2, seq_74);
	RzILOpEffect *seq_75 = SEQN(2, op_ASSIGN_0, for_76);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_lsr_r_vw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2027;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2028;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2029;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2030;

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos32", const_pos32, MUL(cast_8, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_9 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_7));
	RzILOpPure *op_NOT_10 = LOGNOT(op_LSHIFT_9);
	RzILOpPure *op_AND_11 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", const_pos7, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2028"), VARLP("const_pos0LL")));
	RzILOpPure *cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_20 = SLT(cond_19, cast_21);
	RzILOpPure *cast_23 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_22 = LET("const_pos32", DUP(const_pos32), MUL(cast_23, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rss, op_MUL_22);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_26 = CAST(32, IL_FALSE, op_AND_25);
	RzILOpPure *cast_ut64_27 = CAST(64, IL_FALSE, cast_ut32_26);
	RzILOpPure *cast_ut32_28 = CAST(32, IL_FALSE, cast_ut64_27);
	RzILOpPure *cast_ut64_29 = CAST(64, IL_FALSE, cast_ut32_28);
	RzILOpPure *op_NE_30 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_32 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_33 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_34 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_37 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_30, VARL("h_tmp2029"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_38 = NEG(cond_37);
	RzILOpPure *cast_40 = LET("const_pos1", const_pos1, CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_39 = SUB(op_NEG_38, cast_40);
	RzILOpPure *op_LSHIFT_41 = SHIFTL0(cast_ut64_29, op_SUB_39);
	RzILOpPure *op_LSHIFT_42 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_41, VARLP("const_pos1")));
	RzILOpPure *cast_44 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_43 = LET("const_pos32", DUP(const_pos32), MUL(cast_44, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_ut32_47 = CAST(32, IL_FALSE, op_AND_46);
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, cast_ut32_47);
	RzILOpPure *cast_ut32_49 = CAST(32, IL_FALSE, cast_ut64_48);
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, cast_ut32_49);
	RzILOpPure *op_NE_51 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_53 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_54 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_55 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_58 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_51, VARL("h_tmp2030"), VARLP("const_pos0LL")));
	RzILOpPure *op_RSHIFT_59 = SHIFTR0(cast_ut64_50, cond_58);
	RzILOpPure *cond_60 = ITE(op_LT_20, op_LSHIFT_42, op_RSHIFT_59);
	RzILOpPure *cast_62 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_61 = LOGAND(cond_60, cast_62);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos32", DUP(const_pos32), MUL(cast_64, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_65 = SHIFTL0(op_AND_61, op_MUL_63);
	RzILOpPure *cast_67 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_66 = LOGOR(cast_67, op_LSHIFT_65);
	RzILOpPure *cast_69 = CAST(64, MSB(DUP(op_OR_66)), op_OR_66);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2027", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2028", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2029", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2030", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *op_ASSIGN_68 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_69);
	RzILOpEffect *seq_70 = SEQN(4, seq_18, seq_36, seq_57, op_ASSIGN_68);
	RzILOpEffect *empty_71 = EMPTY();
	RzILOpEffect *seq_72 = SEQN(2, seq_70, empty_71);
	RzILOpEffect *seq_73 = SEQN(2, seq_6, seq_72);
	RzILOpEffect *for_75 = REPEAT(op_LT_2, seq_73);
	RzILOpEffect *seq_74 = SEQN(2, op_ASSIGN_0, for_75);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_74);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_mask(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_SUB_2 = LET("const_pos1", DUP(const_pos1), SUB(op_LSHIFT_1, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_4 = SHIFTL0(op_SUB_2, VARL("U"));
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_LSHIFT_4)), op_LSHIFT_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_3, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_packhl(HexInsnPktBundle *bundle) {
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
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st16_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(op_OR_14)), op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_21);
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(Rs, op_MUL_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_RSHIFT_24);
	RzILOpPure *op_AND_25 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st16_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);
	RzILOpPure *op_MUL_38 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_38));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *op_AND_41 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_40);
	RzILOpPure *op_MUL_42 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rt), op_MUL_42);
	RzILOpPure *cast_45 = CAST(32, IL_FALSE, op_RSHIFT_43);
	RzILOpPure *op_AND_44 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, cast_st16_46);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_48, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_50 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_49, op_MUL_50);
	RzILOpPure *cast_53 = CAST(64, IL_FALSE, op_AND_41);
	RzILOpPure *op_OR_52 = LOGOR(cast_53, op_LSHIFT_51);
	RzILOpPure *cast_55 = CAST(64, MSB(DUP(op_OR_52)), op_OR_52);
	RzILOpPure *op_MUL_57 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_57));
	RzILOpPure *op_NOT_59 = LOGNOT(op_LSHIFT_58);
	RzILOpPure *op_AND_60 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_59);
	RzILOpPure *op_MUL_61 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rs), op_MUL_61);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, op_RSHIFT_62);
	RzILOpPure *op_AND_63 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_64, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_65 = CAST(16, MSB(DUP(op_AND_63)), op_AND_63);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, cast_st16_65);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_67, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_66);
	RzILOpPure *op_MUL_69 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_OR_71 = LOGOR(cast_72, op_LSHIFT_70);
	RzILOpPure *cast_74 = CAST(64, MSB(DUP(op_OR_71)), op_OR_71);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *op_ASSIGN_73 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_74);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_18, op_ASSIGN_35, empty_37, op_ASSIGN_54, empty_56, op_ASSIGN_73, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_parityp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbnewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerbtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerdtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerff_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerffnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerft_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerftnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhnewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerht_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerhtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerif_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerifnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewf_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewfnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewt_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerinewtnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstorerit_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_pstoreritnew_pi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_setbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_OR_2 = LOGOR(cast_3, op_LSHIFT_1);
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(op_OR_2)), op_OR_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_setbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2031;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2032;
	// Declare: st64 h_tmp2033;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2031"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp2032"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp2033"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_OR_37 = LOGOR(cast_38, cond_36);
	RzILOpPure *cast_40 = CAST(32, MSB(DUP(op_OR_37)), op_OR_37);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2031", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2032", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2033", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2034;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", DUP(const_pos2), MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st8_19 = CAST(8, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(cast_st8_19)), cast_st8_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_21, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_MUL_25 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_23, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_22, op_MUL_25);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_OR_27 = LOGOR(cast_28, op_LSHIFT_26);
	RzILOpPure *cast_30 = CAST(64, MSB(DUP(op_OR_27)), op_OR_27);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(cast_33, VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_35 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_34, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_35));
	RzILOpPure *op_NOT_37 = LOGNOT(op_LSHIFT_36);
	RzILOpPure *op_AND_38 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos2", DUP(const_pos2), MUL(cast_40, VARLP("const_pos2")));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_39, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st8_45 = CAST(8, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(64, MSB(DUP(cast_st8_45)), cast_st8_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_47, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), MUL(cast_50, VARLP("const_pos2")));
	RzILOpPure *op_ADD_51 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_49, VARLP("const_pos1")));
	RzILOpPure *op_MUL_52 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_51, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_53 = SHIFTL0(cast_ut64_48, op_MUL_52);
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_OR_54 = LOGOR(cast_55, op_LSHIFT_53);
	RzILOpPure *cast_57 = CAST(64, MSB(DUP(op_OR_54)), op_OR_54);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2034", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *op_ASSIGN_56 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_57);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *seq_59 = SEQN(4, op_ASSIGN_29, empty_31, op_ASSIGN_56, empty_58);
	RzILOpEffect *seq_60 = SEQN(2, seq_6, seq_59);
	RzILOpEffect *for_62 = REPEAT(op_LT_2, seq_60);
	RzILOpEffect *seq_61 = SEQN(2, op_ASSIGN_0, for_62);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffeh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2035;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", DUP(const_pos2), MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(op_MUL_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", DUP(const_pos2), MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_MUL_15 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rtt, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, cast_st16_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos2", DUP(const_pos2), MUL(cast_24, VARLP("const_pos2")));
	RzILOpPure *op_MUL_25 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_23, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_22, op_MUL_25);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_OR_27 = LOGOR(cast_28, op_LSHIFT_26);
	RzILOpPure *cast_30 = CAST(64, MSB(DUP(op_OR_27)), op_OR_27);
	RzILOpPure *cast_33 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_32 = LET("const_pos2", DUP(const_pos2), MUL(cast_33, VARLP("const_pos2")));
	RzILOpPure *op_ADD_34 = LET("const_pos1", const_pos1, ADD(op_MUL_32, VARLP("const_pos1")));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_34, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_36 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_35));
	RzILOpPure *op_NOT_37 = LOGNOT(op_LSHIFT_36);
	RzILOpPure *op_AND_38 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_37);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos2", DUP(const_pos2), MUL(cast_40, VARLP("const_pos2")));
	RzILOpPure *op_MUL_41 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_39, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(Rss, op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *cast_47 = CAST(32, IL_FALSE, cast_st16_45);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_47, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_48 = CAST(64, IL_FALSE, op_AND_46);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_49 = LET("const_pos2", DUP(const_pos2), MUL(cast_50, VARLP("const_pos2")));
	RzILOpPure *op_ADD_51 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_49, VARLP("const_pos1")));
	RzILOpPure *op_MUL_52 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_51, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_53 = SHIFTL0(cast_ut64_48, op_MUL_52);
	RzILOpPure *cast_55 = CAST(64, IL_FALSE, op_AND_38);
	RzILOpPure *op_OR_54 = LOGOR(cast_55, op_LSHIFT_53);
	RzILOpPure *cast_57 = CAST(64, MSB(DUP(op_OR_54)), op_OR_54);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2035", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *op_ASSIGN_56 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_57);
	RzILOpEffect *empty_58 = EMPTY();
	RzILOpEffect *seq_59 = SEQN(4, op_ASSIGN_29, empty_31, op_ASSIGN_56, empty_58);
	RzILOpEffect *seq_60 = SEQN(2, seq_6, seq_59);
	RzILOpEffect *for_62 = REPEAT(op_LT_2, seq_60);
	RzILOpEffect *seq_61 = SEQN(2, op_ASSIGN_0, for_62);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffob(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2036;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", const_pos2, MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos8", const_pos8, MUL(op_MUL_7, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", DUP(const_pos2), MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_MUL_13, VARLP("const_pos1")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st8_20)), cast_st8_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos2", DUP(const_pos2), MUL(cast_25, VARLP("const_pos2")));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(cast_ut64_23, op_MUL_26);
	RzILOpPure *cast_29 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_OR_28 = LOGOR(cast_29, op_LSHIFT_27);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_OR_28)), op_OR_28);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos2", DUP(const_pos2), MUL(cast_34, VARLP("const_pos2")));
	RzILOpPure *op_ADD_35 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_33, VARLP("const_pos1")));
	RzILOpPure *op_MUL_36 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_35, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_38);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(cast_41, VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_43 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(Rtt, op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st8_47 = CAST(8, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(64, MSB(DUP(cast_st8_47)), cast_st8_47);
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_49, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos2", DUP(const_pos2), MUL(cast_52, VARLP("const_pos2")));
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_51, VARLP("const_pos1")));
	RzILOpPure *op_MUL_54 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_53, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_50, op_MUL_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_OR_56 = LOGOR(cast_57, op_LSHIFT_55);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(op_OR_56)), op_OR_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2036", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_59);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *seq_61 = SEQN(4, op_ASSIGN_30, empty_32, op_ASSIGN_58, empty_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_6, seq_61);
	RzILOpEffect *for_64 = REPEAT(op_LT_2, seq_62);
	RzILOpEffect *seq_63 = SEQN(2, op_ASSIGN_0, for_64);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_shuffoh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2037;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos2", const_pos2, ULT(cast_3, VARLP("const_pos2")));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_7 = LET("const_pos2", DUP(const_pos2), MUL(cast_8, VARLP("const_pos2")));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(op_MUL_7, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzILOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzILOpPure *op_AND_12 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_11);
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", DUP(const_pos2), MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_MUL_13, VARLP("const_pos1")));
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_15, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st16_20 = CAST(16, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, cast_st16_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_22, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos2", DUP(const_pos2), MUL(cast_25, VARLP("const_pos2")));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(op_MUL_24, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(cast_ut64_23, op_MUL_26);
	RzILOpPure *cast_29 = CAST(64, IL_FALSE, op_AND_12);
	RzILOpPure *op_OR_28 = LOGOR(cast_29, op_LSHIFT_27);
	RzILOpPure *cast_31 = CAST(64, MSB(DUP(op_OR_28)), op_OR_28);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos2", DUP(const_pos2), MUL(cast_34, VARLP("const_pos2")));
	RzILOpPure *op_ADD_35 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_33, VARLP("const_pos1")));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_35, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_37 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_36));
	RzILOpPure *op_NOT_38 = LOGNOT(op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_38);
	RzILOpPure *cast_41 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_40 = LET("const_pos2", DUP(const_pos2), MUL(cast_41, VARLP("const_pos2")));
	RzILOpPure *op_ADD_42 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_40, VARLP("const_pos1")));
	RzILOpPure *op_MUL_43 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_42, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(Rtt, op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, cast_st16_47);
	RzILOpPure *op_AND_48 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_49, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_50 = CAST(64, IL_FALSE, op_AND_48);
	RzILOpPure *cast_52 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_51 = LET("const_pos2", DUP(const_pos2), MUL(cast_52, VARLP("const_pos2")));
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(op_MUL_51, VARLP("const_pos1")));
	RzILOpPure *op_MUL_54 = LET("const_pos16", DUP(const_pos16), MUL(op_ADD_53, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_55 = SHIFTL0(cast_ut64_50, op_MUL_54);
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, op_AND_39);
	RzILOpPure *op_OR_56 = LOGOR(cast_57, op_LSHIFT_55);
	RzILOpPure *cast_59 = CAST(64, MSB(DUP(op_OR_56)), op_OR_56);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2037", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_30 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_31);
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_59);
	RzILOpEffect *empty_60 = EMPTY();
	RzILOpEffect *seq_61 = SEQN(4, op_ASSIGN_30, empty_32, op_ASSIGN_58, empty_60);
	RzILOpEffect *seq_62 = SEQN(2, seq_6, seq_61);
	RzILOpEffect *for_64 = REPEAT(op_LT_2, seq_62);
	RzILOpEffect *seq_63 = SEQN(2, op_ASSIGN_0, for_64);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_10 = CAST(8, IL_FALSE, cast_st8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, cast_st8_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_7, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_8, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_10 = CAST(8, IL_FALSE, cast_st8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, cast_st8_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerbnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_7, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_5 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_5_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_7 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_6 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerf_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerfgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, op_RSHIFT_6);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_8, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerhnewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *cast_7 = CAST(32, IL_FALSE, op_RSHIFT_5);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_9_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_5_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storeri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storeri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("s"));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, op_ADD_1);
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", cast_3);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_4, ms_op_5_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storerinew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_4 = ADD(DUP(Rx), VARL("s"));
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *imm_assign_3 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_4);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_3, op_ASSIGN_0, empty_2, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinew_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Rx);
	RzILOpPure *op_ADD_3 = ADD(DUP(Rx), Mu);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", cast_1);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_2, op_ASSIGN_4, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storerinewgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_ADD_1 = ADD(gp, VARL("u"));
	RzILOpPure *op_4 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_op_4_5 = STOREW(VARL("EA"), op_4);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_2, empty_3, ms_op_4_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_storew_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_at_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_storew_rl_st_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_svsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2046;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2047;
	// Declare: ut32 h_tmp2048;
	// Declare: ut32 h_tmp2049;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2050;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2051;
	// Declare: ut32 h_tmp2052;
	// Declare: ut32 h_tmp2053;
	// Declare: ut32 h_tmp2054;
	// Declare: ut64 h_tmp2055;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_NE_5 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cast_st16_10);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2046"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rs), op_MUL_18);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, op_RSHIFT_19);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_22 = CAST(16, MSB(DUP(op_AND_20)), op_AND_20);
	RzILOpPure *cast_24 = CAST(64, MSB(DUP(cast_st16_22)), cast_st16_22);
	RzILOpPure *op_EQ_23 = EQ(cond_17, cast_24);
	RzILOpPure *op_MUL_25 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rs), op_MUL_25);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, op_RSHIFT_26);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(DUP(op_AND_27)), op_AND_27);
	RzILOpPure *arg_cast_40 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_41 = CAST(64, MSB(DUP(VARL("h_tmp2048"))), VARL("h_tmp2048"));
	RzILOpPure *arg_cast_42 = CAST(64, MSB(DUP(VARL("h_tmp2049"))), VARL("h_tmp2049"));
	RzILOpPure *arg_cast_43 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_48 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_47 = ITE(NON_ZERO(VARL("h_tmp2047")), VARL("h_tmp2050"), cast_48);
	RzILOpPure *cast_50 = CAST(32, IL_FALSE, cond_47);
	RzILOpPure *op_MUL_52 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rs), op_MUL_52);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, op_RSHIFT_53);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_55, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_56 = CAST(16, MSB(DUP(op_AND_54)), op_AND_54);
	RzILOpPure *cast_58 = CAST(32, IL_FALSE, cast_st16_56);
	RzILOpPure *op_LT_57 = LET("const_pos0", DUP(const_pos0), ULT(cast_58, VARLP("const_pos0")));
	RzILOpPure *op_SUB_59 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_59));
	RzILOpPure *op_NEG_61 = NEG(op_LSHIFT_60);
	RzILOpPure *op_SUB_62 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *cast_65 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_64 = SUB(op_LSHIFT_63, cast_65);
	RzILOpPure *cond_66 = ITE(op_LT_57, op_NEG_61, op_SUB_64);
	RzILOpPure *cast_68 = CAST(64, MSB(DUP(cast_st16_29)), cast_st16_29);
	RzILOpPure *cond_67 = ITE(op_EQ_23, cast_68, cond_66);
	RzILOpPure *op_AND_69 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_67, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_70 = CAST(64, IL_FALSE, op_AND_69);
	RzILOpPure *op_MUL_71 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_72 = SHIFTL0(cast_ut64_70, op_MUL_71);
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_73 = LOGOR(cast_74, op_LSHIFT_72);
	RzILOpPure *cast_76 = CAST(32, MSB(DUP(op_OR_73)), op_OR_73);
	RzILOpPure *op_MUL_79 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_80 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_79));
	RzILOpPure *op_NOT_81 = LOGNOT(op_LSHIFT_80);
	RzILOpPure *cast_83 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_82 = LOGAND(cast_83, op_NOT_81);
	RzILOpPure *op_NE_84 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_85 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rs), op_MUL_85);
	RzILOpPure *cast_88 = CAST(32, IL_FALSE, op_RSHIFT_86);
	RzILOpPure *op_AND_87 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_88, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(DUP(op_AND_87)), op_AND_87);
	RzILOpPure *arg_cast_91 = CAST(64, IL_FALSE, cast_st16_89);
	RzILOpPure *arg_cast_92 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_93 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_96 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_84, VARL("h_tmp2051"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_97 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_98 = SHIFTR0(DUP(Rs), op_MUL_97);
	RzILOpPure *cast_100 = CAST(32, IL_FALSE, op_RSHIFT_98);
	RzILOpPure *op_AND_99 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_100, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_101 = CAST(16, MSB(DUP(op_AND_99)), op_AND_99);
	RzILOpPure *cast_103 = CAST(64, MSB(DUP(cast_st16_101)), cast_st16_101);
	RzILOpPure *op_EQ_102 = EQ(cond_96, cast_103);
	RzILOpPure *op_MUL_104 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_105 = SHIFTR0(DUP(Rs), op_MUL_104);
	RzILOpPure *cast_107 = CAST(32, IL_FALSE, op_RSHIFT_105);
	RzILOpPure *op_AND_106 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_107, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_108 = CAST(16, MSB(DUP(op_AND_106)), op_AND_106);
	RzILOpPure *arg_cast_119 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_120 = CAST(64, MSB(DUP(VARL("h_tmp2053"))), VARL("h_tmp2053"));
	RzILOpPure *arg_cast_121 = CAST(64, MSB(DUP(VARL("h_tmp2054"))), VARL("h_tmp2054"));
	RzILOpPure *arg_cast_122 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_127 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_126 = ITE(NON_ZERO(VARL("h_tmp2052")), VARL("h_tmp2055"), cast_127);
	RzILOpPure *cast_129 = CAST(32, IL_FALSE, cond_126);
	RzILOpPure *op_MUL_131 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rs), op_MUL_131);
	RzILOpPure *cast_134 = CAST(32, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *op_AND_133 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_134, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *cast_137 = CAST(32, IL_FALSE, cast_st16_135);
	RzILOpPure *op_LT_136 = LET("const_pos0", DUP(const_pos0), ULT(cast_137, VARLP("const_pos0")));
	RzILOpPure *op_SUB_138 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_139 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_138));
	RzILOpPure *op_NEG_140 = NEG(op_LSHIFT_139);
	RzILOpPure *op_SUB_141 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_142 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_141));
	RzILOpPure *cast_144 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_143 = SUB(op_LSHIFT_142, cast_144);
	RzILOpPure *cond_145 = ITE(op_LT_136, op_NEG_140, op_SUB_143);
	RzILOpPure *cast_147 = CAST(64, MSB(DUP(cast_st16_108)), cast_st16_108);
	RzILOpPure *cond_146 = ITE(op_EQ_102, cast_147, cond_145);
	RzILOpPure *op_AND_148 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_146, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_149 = CAST(64, IL_FALSE, op_AND_148);
	RzILOpPure *op_MUL_150 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_151 = SHIFTL0(cast_ut64_149, op_MUL_150);
	RzILOpPure *cast_153 = CAST(64, IL_FALSE, op_AND_82);
	RzILOpPure *op_OR_152 = LOGOR(cast_153, op_LSHIFT_151);
	RzILOpPure *cast_155 = CAST(32, MSB(DUP(op_OR_152)), op_OR_152);
	RzILOpPure *op_MUL_158 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_159 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_158));
	RzILOpPure *op_NOT_160 = LOGNOT(op_LSHIFT_159);
	RzILOpPure *cast_162 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_161 = LOGAND(cast_162, op_NOT_160);
	RzILOpPure *cast_164 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_163 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_164, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_165 = CAST(64, IL_FALSE, op_AND_163);
	RzILOpPure *op_MUL_166 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_167 = SHIFTL0(cast_ut64_165, op_MUL_166);
	RzILOpPure *cast_169 = CAST(64, IL_FALSE, op_AND_161);
	RzILOpPure *op_OR_168 = LOGOR(cast_169, op_LSHIFT_167);
	RzILOpPure *cast_171 = CAST(32, MSB(DUP(op_OR_168)), op_OR_168);
	RzILOpPure *op_MUL_173 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_174 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_173));
	RzILOpPure *op_NOT_175 = LOGNOT(op_LSHIFT_174);
	RzILOpPure *cast_177 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_176 = LOGAND(cast_177, op_NOT_175);
	RzILOpPure *cast_179 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_178 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_179, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_180 = CAST(64, IL_FALSE, op_AND_178);
	RzILOpPure *op_MUL_181 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_182 = SHIFTL0(cast_ut64_180, op_MUL_181);
	RzILOpPure *cast_184 = CAST(64, IL_FALSE, op_AND_176);
	RzILOpPure *op_OR_183 = LOGOR(cast_184, op_LSHIFT_182);
	RzILOpPure *cast_186 = CAST(32, MSB(DUP(op_OR_183)), op_OR_183);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp2046", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_30 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp2047", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2048", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *c_call_36 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_37 = SETL("h_tmp2049", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_38 = SEQN(2, c_call_36, op_ASSIGN_hybrid_tmp_37);
	RzILOpEffect *c_call_39 = HEX_DEPOSIT64(arg_cast_40, arg_cast_41, arg_cast_42, arg_cast_43);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp2050", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(3, seq_35, seq_38, seq_45);
	RzILOpEffect *op_ASSIGN_49 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_50);
	RzILOpEffect *seq_51 = SEQN(3, seq_32, seq_46, op_ASSIGN_49);
	RzILOpEffect *op_ASSIGN_75 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(2, seq_16, op_ASSIGN_75);
	RzILOpEffect *empty_78 = EMPTY();
	RzILOpEffect *c_call_90 = HEX_SEXTRACT64(arg_cast_91, arg_cast_92, arg_cast_93);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_94 = SETL("h_tmp2051", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_95 = SEQN(2, c_call_90, op_ASSIGN_hybrid_tmp_94);
	RzILOpEffect *c_call_109 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_110 = SETL("h_tmp2052", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_111 = SEQN(2, c_call_109, op_ASSIGN_hybrid_tmp_110);
	RzILOpEffect *c_call_112 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_113 = SETL("h_tmp2053", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_114 = SEQN(2, c_call_112, op_ASSIGN_hybrid_tmp_113);
	RzILOpEffect *c_call_115 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_116 = SETL("h_tmp2054", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_117 = SEQN(2, c_call_115, op_ASSIGN_hybrid_tmp_116);
	RzILOpEffect *c_call_118 = HEX_DEPOSIT64(arg_cast_119, arg_cast_120, arg_cast_121, arg_cast_122);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp2055", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_118, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *seq_125 = SEQN(3, seq_114, seq_117, seq_124);
	RzILOpEffect *op_ASSIGN_128 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_129);
	RzILOpEffect *seq_130 = SEQN(3, seq_111, seq_125, op_ASSIGN_128);
	RzILOpEffect *op_ASSIGN_154 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_155);
	RzILOpEffect *seq_156 = SEQN(2, seq_95, op_ASSIGN_154);
	RzILOpEffect *empty_157 = EMPTY();
	RzILOpEffect *op_ASSIGN_170 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_171);
	RzILOpEffect *empty_172 = EMPTY();
	RzILOpEffect *op_ASSIGN_185 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_186);
	RzILOpEffect *empty_187 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_77, empty_78, seq_156, empty_157, op_ASSIGN_170, empty_172, op_ASSIGN_185, empty_187, seq_51, seq_130);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_svsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2056;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2057;
	// Declare: ut32 h_tmp2058;
	// Declare: ut32 h_tmp2059;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2060;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: ut64 h_tmp2061;
	// Declare: ut32 h_tmp2062;
	// Declare: ut32 h_tmp2063;
	// Declare: ut32 h_tmp2064;
	// Declare: ut64 h_tmp2065;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_3 = LOGAND(cast_4, op_NOT_2);
	RzILOpPure *op_NE_5 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rs, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *arg_cast_12 = CAST(64, IL_FALSE, cast_st16_10);
	RzILOpPure *arg_cast_13 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_14 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_18 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_17 = ITE(op_NE_5, VARL("h_tmp2056"), cast_18);
	RzILOpPure *op_MUL_19 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rs), op_MUL_19);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, op_RSHIFT_20);
	RzILOpPure *op_AND_21 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_22, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, MSB(DUP(op_AND_21)), op_AND_21);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, cast_st16_23);
	RzILOpPure *op_EQ_24 = EQ(cond_17, cast_25);
	RzILOpPure *op_MUL_26 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rs), op_MUL_26);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, op_RSHIFT_27);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *arg_cast_41 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_42 = CAST(64, MSB(DUP(VARL("h_tmp2058"))), VARL("h_tmp2058"));
	RzILOpPure *arg_cast_43 = CAST(64, MSB(DUP(VARL("h_tmp2059"))), VARL("h_tmp2059"));
	RzILOpPure *arg_cast_44 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_48 = ITE(NON_ZERO(VARL("h_tmp2057")), VARL("h_tmp2060"), cast_49);
	RzILOpPure *cast_51 = CAST(32, IL_FALSE, cond_48);
	RzILOpPure *op_MUL_53 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_54 = SHIFTR0(DUP(Rs), op_MUL_53);
	RzILOpPure *cast_56 = CAST(32, IL_FALSE, op_RSHIFT_54);
	RzILOpPure *op_AND_55 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_56, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_57 = CAST(16, MSB(DUP(op_AND_55)), op_AND_55);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, cast_st16_57);
	RzILOpPure *op_LT_58 = LET("const_pos0", DUP(const_pos0), ULT(cast_59, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_60 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_62 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_61 = SUB(op_LSHIFT_60, cast_62);
	RzILOpPure *cast_64 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_63 = ITE(op_LT_58, cast_64, op_SUB_61);
	RzILOpPure *cast_66 = CAST(64, MSB(DUP(cast_st16_30)), cast_st16_30);
	RzILOpPure *cond_65 = ITE(op_EQ_24, cast_66, cond_63);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_65, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_67);
	RzILOpPure *op_MUL_69 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_71 = LOGOR(cast_72, op_LSHIFT_70);
	RzILOpPure *cast_74 = CAST(32, MSB(DUP(op_OR_71)), op_OR_71);
	RzILOpPure *op_MUL_77 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_77));
	RzILOpPure *op_NOT_79 = LOGNOT(op_LSHIFT_78);
	RzILOpPure *cast_81 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_80 = LOGAND(cast_81, op_NOT_79);
	RzILOpPure *op_NE_82 = LET("const_pos8", DUP(const_pos8), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_83 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rs), op_MUL_83);
	RzILOpPure *cast_86 = CAST(32, IL_FALSE, op_RSHIFT_84);
	RzILOpPure *op_AND_85 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_86, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *arg_cast_89 = CAST(64, IL_FALSE, cast_st16_87);
	RzILOpPure *arg_cast_90 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_91 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_95 = LET("const_pos0LL", DUP(const_pos0LL), CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_94 = ITE(op_NE_82, VARL("h_tmp2061"), cast_95);
	RzILOpPure *op_MUL_96 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_97 = SHIFTR0(DUP(Rs), op_MUL_96);
	RzILOpPure *cast_99 = CAST(32, IL_FALSE, op_RSHIFT_97);
	RzILOpPure *op_AND_98 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_99, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_100 = CAST(16, MSB(DUP(op_AND_98)), op_AND_98);
	RzILOpPure *cast_102 = CAST(64, IL_FALSE, cast_st16_100);
	RzILOpPure *op_EQ_101 = EQ(cond_94, cast_102);
	RzILOpPure *op_MUL_103 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rs), op_MUL_103);
	RzILOpPure *cast_106 = CAST(32, IL_FALSE, op_RSHIFT_104);
	RzILOpPure *op_AND_105 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_106, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_107 = CAST(16, MSB(DUP(op_AND_105)), op_AND_105);
	RzILOpPure *arg_cast_118 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_119 = CAST(64, MSB(DUP(VARL("h_tmp2063"))), VARL("h_tmp2063"));
	RzILOpPure *arg_cast_120 = CAST(64, MSB(DUP(VARL("h_tmp2064"))), VARL("h_tmp2064"));
	RzILOpPure *arg_cast_121 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_126 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_125 = ITE(NON_ZERO(VARL("h_tmp2062")), VARL("h_tmp2065"), cast_126);
	RzILOpPure *cast_128 = CAST(32, IL_FALSE, cond_125);
	RzILOpPure *op_MUL_130 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_131 = SHIFTR0(DUP(Rs), op_MUL_130);
	RzILOpPure *cast_133 = CAST(32, IL_FALSE, op_RSHIFT_131);
	RzILOpPure *op_AND_132 = LET("const_pos0xffff", DUP(const_pos0xffff), LOGAND(cast_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_134 = CAST(16, MSB(DUP(op_AND_132)), op_AND_132);
	RzILOpPure *cast_136 = CAST(32, IL_FALSE, cast_st16_134);
	RzILOpPure *op_LT_135 = LET("const_pos0", DUP(const_pos0), ULT(cast_136, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_137 = LET("const_pos1LL", DUP(const_pos1LL), LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_139 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_138 = SUB(op_LSHIFT_137, cast_139);
	RzILOpPure *cast_141 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_140 = ITE(op_LT_135, cast_141, op_SUB_138);
	RzILOpPure *cast_143 = CAST(64, MSB(DUP(cast_st16_107)), cast_st16_107);
	RzILOpPure *cond_142 = ITE(op_EQ_101, cast_143, cond_140);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_142, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_145 = CAST(64, IL_FALSE, op_AND_144);
	RzILOpPure *op_MUL_146 = LET("const_pos1", DUP(const_pos1), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos1"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_147 = SHIFTL0(cast_ut64_145, op_MUL_146);
	RzILOpPure *cast_149 = CAST(64, IL_FALSE, op_AND_80);
	RzILOpPure *op_OR_148 = LOGOR(cast_149, op_LSHIFT_147);
	RzILOpPure *cast_151 = CAST(32, MSB(DUP(op_OR_148)), op_OR_148);
	RzILOpPure *op_MUL_154 = LET("const_pos2", const_pos2, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_155 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_154));
	RzILOpPure *op_NOT_156 = LOGNOT(op_LSHIFT_155);
	RzILOpPure *cast_158 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_157 = LOGAND(cast_158, op_NOT_156);
	RzILOpPure *cast_160 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_159 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_160, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_161 = CAST(64, IL_FALSE, op_AND_159);
	RzILOpPure *op_MUL_162 = LET("const_pos2", DUP(const_pos2), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos2"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_163 = SHIFTL0(cast_ut64_161, op_MUL_162);
	RzILOpPure *cast_165 = CAST(64, IL_FALSE, op_AND_157);
	RzILOpPure *op_OR_164 = LOGOR(cast_165, op_LSHIFT_163);
	RzILOpPure *cast_167 = CAST(32, MSB(DUP(op_OR_164)), op_OR_164);
	RzILOpPure *op_MUL_169 = LET("const_pos3", const_pos3, LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_170 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_169));
	RzILOpPure *op_NOT_171 = LOGNOT(op_LSHIFT_170);
	RzILOpPure *cast_173 = CAST(64, MSB(DUP(VARG(Rd_assoc_tmp))), VARG(Rd_assoc_tmp));
	RzILOpPure *op_AND_172 = LOGAND(cast_173, op_NOT_171);
	RzILOpPure *cast_175 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_AND_174 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_175, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_176 = CAST(64, IL_FALSE, op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos3", DUP(const_pos3), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos3"), VARLP("const_pos8"))));
	RzILOpPure *op_LSHIFT_178 = SHIFTL0(cast_ut64_176, op_MUL_177);
	RzILOpPure *cast_180 = CAST(64, IL_FALSE, op_AND_172);
	RzILOpPure *op_OR_179 = LOGOR(cast_180, op_LSHIFT_178);
	RzILOpPure *cast_182 = CAST(32, MSB(DUP(op_OR_179)), op_OR_179);

	// WRITE
	RzILOpEffect *c_call_11 = HEX_EXTRACT64(arg_cast_12, arg_cast_13, arg_cast_14);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp2056", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2057", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *c_call_34 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2058", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_34, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2059", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *c_call_40 = HEX_DEPOSIT64(arg_cast_41, arg_cast_42, arg_cast_43, arg_cast_44);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2060", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *seq_47 = SEQN(3, seq_36, seq_39, seq_46);
	RzILOpEffect *op_ASSIGN_50 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_51);
	RzILOpEffect *seq_52 = SEQN(3, seq_33, seq_47, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_73 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_74);
	RzILOpEffect *seq_75 = SEQN(2, seq_16, op_ASSIGN_73);
	RzILOpEffect *empty_76 = EMPTY();
	RzILOpEffect *c_call_88 = HEX_EXTRACT64(arg_cast_89, arg_cast_90, arg_cast_91);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_92 = SETL("h_tmp2061", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_93 = SEQN(2, c_call_88, op_ASSIGN_hybrid_tmp_92);
	RzILOpEffect *c_call_108 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_109 = SETL("h_tmp2062", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_110 = SEQN(2, c_call_108, op_ASSIGN_hybrid_tmp_109);
	RzILOpEffect *c_call_111 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_112 = SETL("h_tmp2063", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_113 = SEQN(2, c_call_111, op_ASSIGN_hybrid_tmp_112);
	RzILOpEffect *c_call_114 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp2064", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *c_call_117 = HEX_DEPOSIT64(arg_cast_118, arg_cast_119, arg_cast_120, arg_cast_121);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_122 = SETL("h_tmp2065", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_123 = SEQN(2, c_call_117, op_ASSIGN_hybrid_tmp_122);
	RzILOpEffect *seq_124 = SEQN(3, seq_113, seq_116, seq_123);
	RzILOpEffect *op_ASSIGN_127 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_128);
	RzILOpEffect *seq_129 = SEQN(3, seq_110, seq_124, op_ASSIGN_127);
	RzILOpEffect *op_ASSIGN_150 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_151);
	RzILOpEffect *seq_152 = SEQN(2, seq_93, op_ASSIGN_150);
	RzILOpEffect *empty_153 = EMPTY();
	RzILOpEffect *op_ASSIGN_166 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_167);
	RzILOpEffect *empty_168 = EMPTY();
	RzILOpEffect *op_ASSIGN_181 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_182);
	RzILOpEffect *empty_183 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(10, seq_75, empty_76, seq_152, empty_153, op_ASSIGN_166, empty_168, op_ASSIGN_181, empty_183, seq_52, seq_129);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	// Declare: st32 offset;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2066;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 field;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	// Declare: ut64 h_tmp2067;

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_5 = LET("const_pos0", const_pos0, INV(EQ(cast_6, VARLP("const_pos0"))));
	RzILOpPure *cast_8 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_7 = LET("const_pos0", DUP(const_pos0), ULT(cast_8, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_9 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_10 = CAST(64, IL_FALSE, cast_ut32_9);
	RzILOpPure *op_NEG_11 = NEG(VARL("offset"));
	RzILOpPure *cast_13 = CAST(32, IL_FALSE, op_NEG_11);
	RzILOpPure *op_SUB_12 = LET("const_pos1", const_pos1, SUB(cast_13, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_14 = SHIFTL0(cast_ut64_10, op_SUB_12);
	RzILOpPure *op_LSHIFT_15 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_14, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_16 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_17 = CAST(64, IL_FALSE, cast_ut32_16);
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_17, VARL("offset"));
	RzILOpPure *cond_19 = ITE(op_LT_7, op_LSHIFT_15, op_RSHIFT_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_26 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_25 = ITE(op_NE_5, VARL("h_tmp2066"), cast_26);
	RzILOpPure *cast_29 = CAST(32, MSB(DUP(cond_25)), cond_25);
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, VARL("field"));
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, DUP(Rx));
	RzILOpPure *cond_37 = ITE(NON_ZERO(VARL("width")), VARL("h_tmp2067"), cast_38);
	RzILOpPure *cast_40 = CAST(32, MSB(DUP(cond_37)), cond_37);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", VARL("S"));
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(cond_19, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2066", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *op_ASSIGN_27 = SETL("field", cast_29);
	RzILOpEffect *seq_28 = SEQN(2, seq_24, op_ASSIGN_27);
	RzILOpEffect *c_call_30 = HEX_DEPOSIT64(arg_cast_31, arg_cast_32, arg_cast_33, arg_cast_34);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_35 = SETL("h_tmp2067", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_36 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_35);
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(2, seq_36, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_28, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st32 offset;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2068;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 field;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	// Declare: ut64 h_tmp2069;

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("S"));
	RzILOpPure *op_ADD_4 = LET("const_pos3", const_pos3, ADD(cast_5, VARLP("const_pos3")));
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(op_ADD_4)), op_ADD_4);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_8 = LET("const_pos0", const_pos0, INV(EQ(cast_9, VARLP("const_pos0"))));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_10 = LET("const_pos0", DUP(const_pos0), ULT(cast_11, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NEG_14 = NEG(VARL("offset"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_ut64_20, VARL("offset"));
	RzILOpPure *cond_22 = ITE(op_LT_10, op_LSHIFT_18, op_RSHIFT_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_29 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_28 = ITE(op_NE_8, VARL("h_tmp2068"), cast_29);
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_28)), cond_28);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *arg_cast_35 = LET("const_pos3", DUP(const_pos3), CAST(64, MSB(DUP(VARLP("const_pos3"))), VARLP("const_pos3")));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, VARL("field"));
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, DUP(Rx));
	RzILOpPure *cond_40 = ITE(NON_ZERO(VARL("width")), VARL("h_tmp2069"), cast_41);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_40)), cond_40);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_6 = SETL("offset", cast_7);
	RzILOpEffect *c_call_23 = HEX_EXTRACT64(cond_22, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2068", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("field", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2069", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_39, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_6, seq_31, seq_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st32 offset;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut64 h_tmp2070;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 field;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	// Declare: ut64 h_tmp2071;

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("S"));
	RzILOpPure *op_ADD_4 = LET("const_pos1", const_pos1, ADD(cast_5, VARLP("const_pos1")));
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(op_ADD_4)), op_ADD_4);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_8 = LET("const_pos0", const_pos0, INV(EQ(cast_9, VARLP("const_pos0"))));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_10 = LET("const_pos0", DUP(const_pos0), ULT(cast_11, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NEG_14 = NEG(VARL("offset"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", DUP(const_pos1), SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_ut64_20, VARL("offset"));
	RzILOpPure *cond_22 = ITE(op_LT_10, op_LSHIFT_18, op_RSHIFT_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_29 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_28 = ITE(op_NE_8, VARL("h_tmp2070"), cast_29);
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_28)), cond_28);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *arg_cast_35 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, VARL("field"));
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, DUP(Rx));
	RzILOpPure *cond_40 = ITE(NON_ZERO(VARL("width")), VARL("h_tmp2071"), cast_41);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_40)), cond_40);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_6 = SETL("offset", cast_7);
	RzILOpEffect *c_call_23 = HEX_EXTRACT64(cond_22, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2070", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("field", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2071", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_39, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_6, seq_31, seq_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tableidxw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 offset;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2072;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 field;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	// Declare: ut64 h_tmp2073;

	// EXEC
	RzILOpPure *cast_2 = CAST(32, MSB(DUP(VARL("u"))), VARL("u"));
	RzILOpPure *cast_5 = CAST(32, IL_FALSE, VARL("S"));
	RzILOpPure *op_ADD_4 = LET("const_pos2", const_pos2, ADD(cast_5, VARLP("const_pos2")));
	RzILOpPure *cast_7 = CAST(32, MSB(DUP(op_ADD_4)), op_ADD_4);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, VARL("width"));
	RzILOpPure *op_NE_8 = LET("const_pos0", const_pos0, INV(EQ(cast_9, VARLP("const_pos0"))));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("offset"));
	RzILOpPure *op_LT_10 = LET("const_pos0", DUP(const_pos0), ULT(cast_11, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_12 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NEG_14 = NEG(VARL("offset"));
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_NEG_14);
	RzILOpPure *op_SUB_15 = LET("const_pos1", const_pos1, SUB(cast_16, VARLP("const_pos1")));
	RzILOpPure *op_LSHIFT_17 = SHIFTL0(cast_ut64_13, op_SUB_15);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTL0(op_LSHIFT_17, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_19 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, cast_ut32_19);
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(cast_ut64_20, VARL("offset"));
	RzILOpPure *cond_22 = ITE(op_LT_10, op_LSHIFT_18, op_RSHIFT_21);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *cast_29 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_28 = ITE(op_NE_8, VARL("h_tmp2072"), cast_29);
	RzILOpPure *cast_32 = CAST(32, MSB(DUP(cond_28)), cond_28);
	RzILOpPure *arg_cast_34 = CAST(64, IL_FALSE, Rx);
	RzILOpPure *arg_cast_35 = LET("const_pos2", DUP(const_pos2), CAST(64, MSB(DUP(VARLP("const_pos2"))), VARLP("const_pos2")));
	RzILOpPure *arg_cast_36 = CAST(64, MSB(DUP(VARL("width"))), VARL("width"));
	RzILOpPure *arg_cast_37 = CAST(64, IL_FALSE, VARL("field"));
	RzILOpPure *cast_41 = CAST(64, IL_FALSE, DUP(Rx));
	RzILOpPure *cond_40 = ITE(NON_ZERO(VARL("width")), VARL("h_tmp2073"), cast_41);
	RzILOpPure *cast_43 = CAST(32, MSB(DUP(cond_40)), cond_40);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("S", S);
	RzILOpEffect *op_ASSIGN_6 = SETL("offset", cast_7);
	RzILOpEffect *c_call_23 = HEX_EXTRACT64(cond_22, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2072", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *op_ASSIGN_30 = SETL("field", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_27, op_ASSIGN_30);
	RzILOpEffect *c_call_33 = HEX_DEPOSIT64(arg_cast_34, arg_cast_35, arg_cast_36, arg_cast_37);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2073", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *op_ASSIGN_42 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_43);
	RzILOpEffect *seq_44 = SEQN(2, seq_39, op_ASSIGN_42);
	RzILOpEffect *instruction_sequence = SEQN(6, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_6, seq_31, seq_44);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_togglebit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_XOR_2 = LOGXOR(cast_3, op_LSHIFT_1);
	RzILOpPure *cast_5 = CAST(32, MSB(DUP(op_XOR_2)), op_XOR_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_5);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_togglebit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2074;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2075;
	// Declare: st64 h_tmp2076;

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2074"), VARLP("const_pos0LL")));
	RzILOpPure *cast_9 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_8 = SLT(cond_7, cast_9);
	RzILOpPure *cast_ut32_10 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, cast_ut32_10);
	RzILOpPure *op_NE_12 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_14 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_15 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_16 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_19 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_12, VARL("h_tmp2075"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_20 = NEG(cond_19);
	RzILOpPure *cast_22 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_21 = SUB(op_NEG_20, cast_22);
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(cast_ut64_11, op_SUB_21);
	RzILOpPure *op_RSHIFT_24 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_23, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_25 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_26 = CAST(64, IL_FALSE, cast_ut32_25);
	RzILOpPure *op_NE_27 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_29 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_30 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_31 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_34 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_27, VARL("h_tmp2076"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_35 = SHIFTL0(cast_ut64_26, cond_34);
	RzILOpPure *cond_36 = ITE(op_LT_8, op_RSHIFT_24, op_LSHIFT_35);
	RzILOpPure *cast_38 = CAST(64, IL_FALSE, Rs);
	RzILOpPure *op_XOR_37 = LOGXOR(cast_38, cond_36);
	RzILOpPure *cast_40 = CAST(32, MSB(DUP(op_XOR_37)), op_XOR_37);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2074", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(arg_cast_14, arg_cast_15, arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2075", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_28 = HEX_SEXTRACT64(arg_cast_29, arg_cast_30, arg_cast_31);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp2076", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_28, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *op_ASSIGN_39 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_40);
	RzILOpEffect *seq_41 = SEQN(4, seq_6, seq_18, seq_33, op_ASSIGN_39);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_AND_2 = LOGAND(cast_3, op_LSHIFT_1);
	RzILOpPure *op_NE_4 = LET("const_pos0", const_pos0, INV(EQ(op_AND_2, VARLP("const_pos0"))));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_tstbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2077;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2078;
	// Declare: st64 h_tmp2079;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp2077"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_10 = SLT(cond_9, cast_11);
	RzILOpPure *cast_ut32_12 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NE_14 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_21 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_14, VARL("h_tmp2078"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_22 = NEG(cond_21);
	RzILOpPure *cast_24 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_23 = SUB(op_NEG_22, cast_24);
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(cast_ut64_13, op_SUB_23);
	RzILOpPure *op_RSHIFT_26 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_25, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_27 = LET("const_pos1", DUP(const_pos1), CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_28 = CAST(64, IL_FALSE, cast_ut32_27);
	RzILOpPure *op_NE_29 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_31 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_32 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_33 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_36 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp2079"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(cast_ut64_28, cond_36);
	RzILOpPure *cond_38 = ITE(op_LT_10, op_RSHIFT_26, op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(cast_ut64_1, cond_38);
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_NE_40 = INV(EQ(op_AND_39, cast_41));
	RzILOpPure *cond_42 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_NE_40, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_44 = CAST(8, MSB(DUP(cond_42)), cond_42);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2077", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp2078", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2079", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(4, seq_8, seq_20, seq_35, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_valignib(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_2 = SN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *op_sizeof_Rtt_13 = SN(32, 0x8);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos8", const_pos8, MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *cast_4 = LET("op_sizeof_Rss_2", op_sizeof_Rss_2, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_2")));
	RzILOpPure *op_MUL_3 = LET("const_pos8", DUP(const_pos8), MUL(cast_4, VARLP("const_pos8")));
	RzILOpPure *op_GE_5 = UGE(op_MUL_1, op_MUL_3);
	RzILOpPure *cast_ut64_6 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(cast_ut64_6, op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_9 = ITE(op_GE_5, cast_10, op_RSHIFT_8);
	RzILOpPure *op_SUB_11 = LET("const_pos8", DUP(const_pos8), SUB(VARLP("const_pos8"), VARL("u")));
	RzILOpPure *op_MUL_12 = LET("const_pos8", DUP(const_pos8), MUL(op_SUB_11, VARLP("const_pos8")));
	RzILOpPure *cast_15 = LET("op_sizeof_Rtt_13", op_sizeof_Rtt_13, CAST(32, IL_FALSE, VARLP("op_sizeof_Rtt_13")));
	RzILOpPure *op_MUL_14 = LET("const_pos8", DUP(const_pos8), MUL(cast_15, VARLP("const_pos8")));
	RzILOpPure *op_GE_16 = UGE(op_MUL_12, op_MUL_14);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(Rtt)), DUP(Rtt));
	RzILOpPure *op_SUB_18 = LET("const_pos8", DUP(const_pos8), SUB(VARLP("const_pos8"), VARL("u")));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(op_SUB_18, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_20 = SHIFTL0(cast_st64_17, op_MUL_19);
	RzILOpPure *cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_21 = ITE(op_GE_16, cast_22, op_LSHIFT_20);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, cond_21);
	RzILOpPure *op_OR_23 = LOGOR(cond_9, cast_24);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_OR_23)), op_OR_23);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_26);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_valignrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos0x7 = UN(32, 0x7);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *op_sizeof_Rss_3 = SN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *op_sizeof_Rtt_18 = SN(32, 0x8);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos0x7", const_pos0x7, LOGAND(cast_1, VARLP("const_pos0x7")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(op_AND_0, VARLP("const_pos8")));
	RzILOpPure *cast_5 = LET("op_sizeof_Rss_3", op_sizeof_Rss_3, CAST(32, IL_FALSE, VARLP("op_sizeof_Rss_3")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", DUP(const_pos8), MUL(cast_5, VARLP("const_pos8")));
	RzILOpPure *op_GE_6 = UGE(op_MUL_2, op_MUL_4);
	RzILOpPure *cast_ut64_7 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_8 = LET("const_pos0x7", DUP(const_pos0x7), LOGAND(cast_9, VARLP("const_pos0x7")));
	RzILOpPure *op_MUL_10 = LET("const_pos8", DUP(const_pos8), MUL(op_AND_8, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(cast_ut64_7, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0", const_pos0, CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *cond_12 = ITE(op_GE_6, cast_13, op_RSHIFT_11);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_14 = LET("const_pos0x7", DUP(const_pos0x7), LOGAND(cast_15, VARLP("const_pos0x7")));
	RzILOpPure *op_SUB_16 = LET("const_pos8", DUP(const_pos8), SUB(VARLP("const_pos8"), op_AND_14));
	RzILOpPure *op_MUL_17 = LET("const_pos8", DUP(const_pos8), MUL(op_SUB_16, VARLP("const_pos8")));
	RzILOpPure *cast_20 = LET("op_sizeof_Rtt_18", op_sizeof_Rtt_18, CAST(32, IL_FALSE, VARLP("op_sizeof_Rtt_18")));
	RzILOpPure *op_MUL_19 = LET("const_pos8", DUP(const_pos8), MUL(cast_20, VARLP("const_pos8")));
	RzILOpPure *op_GE_21 = UGE(op_MUL_17, op_MUL_19);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(DUP(Rtt)), DUP(Rtt));
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_23 = LET("const_pos0x7", DUP(const_pos0x7), LOGAND(cast_24, VARLP("const_pos0x7")));
	RzILOpPure *op_SUB_25 = LET("const_pos8", DUP(const_pos8), SUB(VARLP("const_pos8"), op_AND_23));
	RzILOpPure *op_MUL_26 = LET("const_pos8", DUP(const_pos8), MUL(op_SUB_25, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_27 = SHIFTL0(cast_st64_22, op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_28 = ITE(op_GE_21, cast_29, op_LSHIFT_27);
	RzILOpPure *cast_31 = CAST(64, IL_FALSE, cond_28);
	RzILOpPure *op_OR_30 = LOGOR(cond_12, cast_31);
	RzILOpPure *cast_33 = CAST(64, MSB(DUP(op_OR_30)), op_OR_30);

	// WRITE
	RzILOpEffect *op_ASSIGN_32 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_33);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2080;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2081;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2082;
	// Declare: ut32 h_tmp2083;
	// Declare: ut32 h_tmp2084;
	// Declare: ut64 h_tmp2085;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos1", const_pos1, LOGAND(cast_9, VARLP("const_pos1")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(cast_11, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_10));
	RzILOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzILOpPure *op_AND_14 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_13);
	RzILOpPure *op_NE_15 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_16 = LET("const_pos16", DUP(const_pos16), MUL(cast_17, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_20 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_19 = LOGAND(op_RSHIFT_18, cast_20);
	RzILOpPure *cast_st16_21 = CAST(16, MSB(DUP(op_AND_19)), op_AND_19);
	RzILOpPure *op_NEG_22 = NEG(cast_st16_21);
	RzILOpPure *arg_cast_24 = CAST(64, IL_FALSE, op_NEG_22);
	RzILOpPure *arg_cast_25 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_26 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_15, VARL("h_tmp2081"), VARLP("const_pos0LL")));
	RzILOpPure *cast_31 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_30 = LET("const_pos16", DUP(const_pos16), MUL(cast_31, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *op_NEG_36 = NEG(cast_st16_35);
	RzILOpPure *cast_38 = CAST(64, MSB(DUP(op_NEG_36)), op_NEG_36);
	RzILOpPure *op_EQ_37 = EQ(cond_29, cast_38);
	RzILOpPure *cast_40 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_39 = LET("const_pos16", DUP(const_pos16), MUL(cast_40, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzILOpPure *cast_43 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st16_44 = CAST(16, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *op_NEG_45 = NEG(cast_st16_44);
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2083"))), VARL("h_tmp2083"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2084"))), VARL("h_tmp2084"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2082")), VARL("h_tmp2085"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos16", DUP(const_pos16), MUL(cast_69, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *op_NEG_74 = NEG(cast_st16_73);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, op_NEG_74);
	RzILOpPure *op_LT_75 = LET("const_pos0", DUP(const_pos0), ULT(cast_76, VARLP("const_pos0")));
	RzILOpPure *op_SUB_77 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_NEG_79 = NEG(op_LSHIFT_78);
	RzILOpPure *op_SUB_80 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_81 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_80));
	RzILOpPure *cast_83 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_82 = SUB(op_LSHIFT_81, cast_83);
	RzILOpPure *cond_84 = ITE(op_LT_75, op_NEG_79, op_SUB_82);
	RzILOpPure *cast_86 = CAST(64, MSB(DUP(op_NEG_45)), op_NEG_45);
	RzILOpPure *cond_85 = ITE(op_EQ_37, cast_86, cond_84);
	RzILOpPure *cast_88 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_87 = LOGAND(cond_85, cast_88);
	RzILOpPure *cast_ut64_89 = CAST(64, IL_FALSE, op_AND_87);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_90 = LET("const_pos16", DUP(const_pos16), MUL(cast_91, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_92 = SHIFTL0(cast_ut64_89, op_MUL_90);
	RzILOpPure *cast_94 = CAST(64, IL_FALSE, op_AND_14);
	RzILOpPure *op_OR_93 = LOGOR(cast_94, op_LSHIFT_92);
	RzILOpPure *cast_96 = CAST(64, MSB(DUP(op_OR_93)), op_OR_93);
	RzILOpPure *cast_100 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_99 = LET("const_pos16", DUP(const_pos16), MUL(cast_100, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_101 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_99));
	RzILOpPure *op_NOT_102 = LOGNOT(op_LSHIFT_101);
	RzILOpPure *op_AND_103 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_102);
	RzILOpPure *cast_105 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_104 = LET("const_pos16", DUP(const_pos16), MUL(cast_105, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_106 = SHIFTR0(DUP(Rss), op_MUL_104);
	RzILOpPure *cast_108 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_107 = LOGAND(op_RSHIFT_106, cast_108);
	RzILOpPure *cast_st16_109 = CAST(16, MSB(DUP(op_AND_107)), op_AND_107);
	RzILOpPure *cast_111 = CAST(32, IL_FALSE, cast_st16_109);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_111, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_112 = CAST(64, IL_FALSE, op_AND_110);
	RzILOpPure *cast_114 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_113 = LET("const_pos16", DUP(const_pos16), MUL(cast_114, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_115 = SHIFTL0(cast_ut64_112, op_MUL_113);
	RzILOpPure *cast_117 = CAST(64, IL_FALSE, op_AND_103);
	RzILOpPure *op_OR_116 = LOGOR(cast_117, op_LSHIFT_115);
	RzILOpPure *cast_119 = CAST(64, MSB(DUP(op_OR_116)), op_OR_116);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2080", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2081", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2082", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2083", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2084", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2085", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_95 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_96);
	RzILOpEffect *seq_97 = SEQN(2, seq_28, op_ASSIGN_95);
	RzILOpEffect *empty_98 = EMPTY();
	RzILOpEffect *op_ASSIGN_118 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_119);
	RzILOpEffect *empty_120 = EMPTY();
	RzILOpEffect *seq_then_121 = SEQN(2, seq_97, empty_98);
	RzILOpEffect *seq_else_123 = SEQN(2, op_ASSIGN_118, empty_120);
	RzILOpEffect *branch_122 = BRANCH(NON_ZERO(op_AND_8), seq_then_121, seq_else_123);
	RzILOpEffect *seq_124 = SEQN(1, branch_122);
	RzILOpEffect *seq_125 = SEQN(2, seq_6, seq_124);
	RzILOpEffect *for_127 = REPEAT(op_LT_2, seq_125);
	RzILOpEffect *seq_126 = SEQN(2, op_ASSIGN_0, for_127);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_126, seq_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vcrotate(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s2_vrcnegh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2086;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *cast_1 = LET("const_pos0", const_pos0, CAST(32, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(cast_3, VARLP("const_pos4")));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, VARL("i"));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos1", const_pos1, LOGAND(cast_9, VARLP("const_pos1")));
	RzILOpPure *cast_11 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_10 = LET("const_pos16", const_pos16, MUL(cast_11, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rss, op_MUL_10);
	RzILOpPure *cast_14 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st16_15 = CAST(16, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *op_NEG_16 = NEG(cast_st16_15);
	RzILOpPure *cast_18 = CAST(64, MSB(DUP(op_NEG_16)), op_NEG_16);
	RzILOpPure *addop_NEG_16Rxx = ADD(cast_18, Rxx);
	RzILOpPure *cast_20 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_19 = LET("const_pos16", DUP(const_pos16), MUL(cast_20, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *cast_23 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_22 = LOGAND(op_RSHIFT_21, cast_23);
	RzILOpPure *cast_st16_24 = CAST(16, MSB(DUP(op_AND_22)), op_AND_22);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(cast_st16_24)), cast_st16_24);
	RzILOpPure *addcast_st16_24Rxx = ADD(cast_26, DUP(Rxx));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2086", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_ADD_17 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addop_NEG_16Rxx);
	RzILOpEffect *op_ASSIGN_ADD_25 = HEX_WRITE_GLOBAL(Rxx_assoc_tmp, addcast_st16_24Rxx);
	RzILOpEffect *seq_then_27 = SEQN(1, op_ASSIGN_ADD_17);
	RzILOpEffect *seq_else_29 = SEQN(1, op_ASSIGN_ADD_25);
	RzILOpEffect *branch_28 = BRANCH(NON_ZERO(op_AND_8), seq_then_27, seq_else_29);
	RzILOpEffect *seq_30 = SEQN(1, branch_28);
	RzILOpEffect *seq_31 = SEQN(2, seq_6, seq_30);
	RzILOpEffect *for_33 = REPEAT(op_LT_2, seq_31);
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_0, for_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vrndpackwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2087;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
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
	RzILOpPure *op_MUL_13 = LET("const_pos32", const_pos32, MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *cast_20 = LET("const_pos0x08000", const_pos0x08000, CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_19 = ADD(cast_st64_18, cast_20);
	RzILOpPure *op_MUL_21 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_22 = SHIFTR0(op_ADD_19, op_MUL_21);
	RzILOpPure *cast_24 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_23 = LOGAND(op_RSHIFT_22, cast_24);
	RzILOpPure *cast_st16_25 = CAST(16, MSB(DUP(op_AND_23)), op_AND_23);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, cast_st16_25);
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
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2087", VARL("i"));
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

RzILOpEffect *hex_il_op_s2_vrndpackwhs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2088;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0x08000 = UN(32, 0x8000);
	// Declare: st64 h_tmp2089;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2090;
	// Declare: ut32 h_tmp2091;
	// Declare: ut32 h_tmp2092;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2093;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
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
	RzILOpPure *op_NE_13 = LET("const_pos32", const_pos32, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_14 = LET("const_pos32", DUP(const_pos32), MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *cast_21 = LET("const_pos0x08000", const_pos0x08000, CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_20 = ADD(cast_st64_19, cast_21);
	RzILOpPure *arg_cast_23 = CAST(64, IL_FALSE, op_ADD_20);
	RzILOpPure *arg_cast_24 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_25 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_28 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2089"), VARLP("const_pos0LL")));
	RzILOpPure *cast_30 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_29 = LET("const_pos32", DUP(const_pos32), MUL(cast_30, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_29);
	RzILOpPure *op_AND_32 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_31, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_33 = CAST(32, MSB(DUP(op_AND_32)), op_AND_32);
	RzILOpPure *cast_st64_34 = CAST(64, MSB(DUP(cast_st32_33)), cast_st32_33);
	RzILOpPure *cast_36 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_35 = ADD(cast_st64_34, cast_36);
	RzILOpPure *op_EQ_37 = EQ(cond_28, op_ADD_35);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_38 = LET("const_pos32", DUP(const_pos32), MUL(cast_39, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_38);
	RzILOpPure *op_AND_41 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_40, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_42 = CAST(32, MSB(DUP(op_AND_41)), op_AND_41);
	RzILOpPure *cast_st64_43 = CAST(64, MSB(DUP(cast_st32_42)), cast_st32_42);
	RzILOpPure *cast_45 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_44 = ADD(cast_st64_43, cast_45);
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2091"))), VARL("h_tmp2091"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2092"))), VARL("h_tmp2092"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2090")), VARL("h_tmp2093"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_68 = LET("const_pos32", DUP(const_pos32), MUL(cast_69, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *op_AND_71 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_70, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_72 = CAST(32, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *cast_st64_73 = CAST(64, MSB(DUP(cast_st32_72)), cast_st32_72);
	RzILOpPure *cast_75 = LET("const_pos0x08000", DUP(const_pos0x08000), CAST(64, MSB(DUP(VARLP("const_pos0x08000"))), VARLP("const_pos0x08000")));
	RzILOpPure *op_ADD_74 = ADD(cast_st64_73, cast_75);
	RzILOpPure *cast_77 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_76 = SLT(op_ADD_74, cast_77);
	RzILOpPure *op_SUB_78 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_79 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_78));
	RzILOpPure *op_NEG_80 = NEG(op_LSHIFT_79);
	RzILOpPure *op_SUB_81 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *cast_84 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_83 = SUB(op_LSHIFT_82, cast_84);
	RzILOpPure *cond_85 = ITE(op_LT_76, op_NEG_80, op_SUB_83);
	RzILOpPure *cond_86 = ITE(op_EQ_37, op_ADD_44, cond_85);
	RzILOpPure *op_MUL_87 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_88 = SHIFTR0(cond_86, op_MUL_87);
	RzILOpPure *cast_90 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_89 = LOGAND(op_RSHIFT_88, cast_90);
	RzILOpPure *cast_st16_91 = CAST(16, MSB(DUP(op_AND_89)), op_AND_89);
	RzILOpPure *cast_93 = CAST(32, IL_FALSE, cast_st16_91);
	RzILOpPure *op_AND_92 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_93, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_94 = CAST(64, IL_FALSE, op_AND_92);
	RzILOpPure *cast_96 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_95 = LET("const_pos16", DUP(const_pos16), MUL(cast_96, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_97 = SHIFTL0(cast_ut64_94, op_MUL_95);
	RzILOpPure *cast_99 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_98 = LOGOR(cast_99, op_LSHIFT_97);
	RzILOpPure *cast_101 = CAST(32, MSB(DUP(op_OR_98)), op_OR_98);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2088", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_22 = HEX_SEXTRACT64(arg_cast_23, arg_cast_24, arg_cast_25);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_26 = SETL("h_tmp2089", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_27 = SEQN(2, c_call_22, op_ASSIGN_hybrid_tmp_26);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2090", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2091", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2092", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2093", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_100 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_101);
	RzILOpEffect *seq_102 = SEQN(2, seq_27, op_ASSIGN_100);
	RzILOpEffect *empty_103 = EMPTY();
	RzILOpEffect *seq_104 = SEQN(2, seq_102, empty_103);
	RzILOpEffect *seq_105 = SEQN(2, seq_6, seq_104);
	RzILOpEffect *for_107 = REPEAT(op_LT_2, seq_105);
	RzILOpEffect *seq_106 = SEQN(2, op_ASSIGN_0, for_107);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_106, seq_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2094;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2095;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2096;
	// Declare: ut32 h_tmp2097;
	// Declare: ut32 h_tmp2098;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2099;
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
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2095"), VARLP("const_pos0LL")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_34 = CAST(64, MSB(DUP(cast_st16_32)), cast_st16_32);
	RzILOpPure *op_EQ_33 = EQ(cond_26, cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2097"))), VARL("h_tmp2097"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2098"))), VARL("h_tmp2098"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp2096")), VARL("h_tmp2099"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(cast_64, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st16_68 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, cast_st16_68);
	RzILOpPure *op_LT_69 = LET("const_pos0", DUP(const_pos0), ULT(cast_70, VARLP("const_pos0")));
	RzILOpPure *op_SUB_71 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_71));
	RzILOpPure *op_NEG_73 = NEG(op_LSHIFT_72);
	RzILOpPure *op_SUB_74 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *cast_77 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_76 = SUB(op_LSHIFT_75, cast_77);
	RzILOpPure *cond_78 = ITE(op_LT_69, op_NEG_73, op_SUB_76);
	RzILOpPure *cast_80 = CAST(64, MSB(DUP(cast_st16_40)), cast_st16_40);
	RzILOpPure *cond_79 = ITE(op_EQ_33, cast_80, cond_78);
	RzILOpPure *op_AND_81 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_79, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_81);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos8", DUP(const_pos8), MUL(cast_84, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *cast_87 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_86 = LOGOR(cast_87, op_LSHIFT_85);
	RzILOpPure *cast_89 = CAST(32, MSB(DUP(op_OR_86)), op_OR_86);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2094", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2095", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2096", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2097", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2098", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2099", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_25, op_ASSIGN_88);
	RzILOpEffect *empty_91 = EMPTY();
	RzILOpEffect *seq_92 = SEQN(2, seq_90, empty_91);
	RzILOpEffect *seq_93 = SEQN(2, seq_6, seq_92);
	RzILOpEffect *for_95 = REPEAT(op_LT_2, seq_93);
	RzILOpEffect *seq_94 = SEQN(2, op_ASSIGN_0, for_95);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_94, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathb_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2100;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2101;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2102;
	// Declare: ut32 h_tmp2103;
	// Declare: ut32 h_tmp2104;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2105;
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
	RzILOpPure *op_NE_12 = LET("const_pos8", const_pos8, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st16_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2101"), VARLP("const_pos0LL")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos16", DUP(const_pos16), MUL(cast_27, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_33 = CAST(64, MSB(DUP(cast_st16_31)), cast_st16_31);
	RzILOpPure *op_EQ_32 = EQ(cond_25, cast_33);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos16", DUP(const_pos16), MUL(cast_35, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st16_39 = CAST(16, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *arg_cast_50 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp2103"))), VARL("h_tmp2103"));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2104"))), VARL("h_tmp2104"));
	RzILOpPure *arg_cast_53 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_57 = ITE(NON_ZERO(VARL("h_tmp2102")), VARL("h_tmp2105"), cast_58);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, cond_57);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos16", DUP(const_pos16), MUL(cast_63, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *cast_66 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_65 = LOGAND(op_RSHIFT_64, cast_66);
	RzILOpPure *cast_st16_67 = CAST(16, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *cast_69 = CAST(32, IL_FALSE, cast_st16_67);
	RzILOpPure *op_LT_68 = LET("const_pos0", DUP(const_pos0), ULT(cast_69, VARLP("const_pos0")));
	RzILOpPure *op_SUB_70 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos8", DUP(const_pos8), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos8"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cast_79 = CAST(64, MSB(DUP(cast_st16_39)), cast_st16_39);
	RzILOpPure *cond_78 = ITE(op_EQ_32, cast_79, cond_77);
	RzILOpPure *cast_81 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_80 = LOGAND(cond_78, cast_81);
	RzILOpPure *cast_ut64_82 = CAST(64, IL_FALSE, op_AND_80);
	RzILOpPure *cast_84 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_83 = LET("const_pos16", DUP(const_pos16), MUL(cast_84, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_82, op_MUL_83);
	RzILOpPure *cast_87 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_86 = LOGOR(cast_87, op_LSHIFT_85);
	RzILOpPure *cast_89 = CAST(64, MSB(DUP(op_OR_86)), op_OR_86);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2100", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2101", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp2102", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp2103", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2104", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_DEPOSIT64(arg_cast_50, arg_cast_51, arg_cast_52, arg_cast_53);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2105", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(3, seq_45, seq_48, seq_55);
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_60);
	RzILOpEffect *seq_61 = SEQN(3, seq_42, seq_56, op_ASSIGN_59);
	RzILOpEffect *op_ASSIGN_88 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_89);
	RzILOpEffect *seq_90 = SEQN(2, seq_24, op_ASSIGN_88);
	RzILOpEffect *empty_91 = EMPTY();
	RzILOpEffect *seq_92 = SEQN(2, seq_90, empty_91);
	RzILOpEffect *seq_93 = SEQN(2, seq_6, seq_92);
	RzILOpEffect *for_95 = REPEAT(op_LT_2, seq_93);
	RzILOpEffect *seq_94 = SEQN(2, op_ASSIGN_0, for_95);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_94, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2106;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2107;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2108;
	// Declare: ut32 h_tmp2109;
	// Declare: ut32 h_tmp2110;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2111;
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
	RzILOpPure *cast_18 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st16_19 = CAST(16, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st16_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp2107"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos16", DUP(const_pos16), MUL(cast_29, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, cast_st16_33);
	RzILOpPure *op_EQ_34 = EQ(cond_26, cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos16", DUP(const_pos16), MUL(cast_37, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *arg_cast_52 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2109"))), VARL("h_tmp2109"));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2110"))), VARL("h_tmp2110"));
	RzILOpPure *arg_cast_55 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_59 = ITE(NON_ZERO(VARL("h_tmp2108")), VARL("h_tmp2111"), cast_60);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, cond_59);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos16", DUP(const_pos16), MUL(cast_65, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzILOpPure *cast_68 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_67 = LOGAND(op_RSHIFT_66, cast_68);
	RzILOpPure *cast_st16_69 = CAST(16, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_71 = CAST(32, IL_FALSE, cast_st16_69);
	RzILOpPure *op_LT_70 = LET("const_pos0", DUP(const_pos0), ULT(cast_71, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_74 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_73 = SUB(op_LSHIFT_72, cast_74);
	RzILOpPure *cast_76 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_75 = ITE(op_LT_70, cast_76, op_SUB_73);
	RzILOpPure *cast_78 = CAST(64, MSB(DUP(cast_st16_41)), cast_st16_41);
	RzILOpPure *cond_77 = ITE(op_EQ_34, cast_78, cond_75);
	RzILOpPure *op_AND_79 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cond_77, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_80 = CAST(64, IL_FALSE, op_AND_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos8", DUP(const_pos8), MUL(cast_82, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_83 = SHIFTL0(cast_ut64_80, op_MUL_81);
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_84 = LOGOR(cast_85, op_LSHIFT_83);
	RzILOpPure *cast_87 = CAST(32, MSB(DUP(op_OR_84)), op_OR_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2106", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2107", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2108", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2109", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2110", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_DEPOSIT64(arg_cast_52, arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2111", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(3, seq_47, seq_50, seq_57);
	RzILOpEffect *op_ASSIGN_61 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_62);
	RzILOpEffect *seq_63 = SEQN(3, seq_44, seq_58, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(2, seq_25, op_ASSIGN_86);
	RzILOpEffect *empty_89 = EMPTY();
	RzILOpEffect *seq_90 = SEQN(2, seq_88, empty_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_6, seq_90);
	RzILOpEffect *for_93 = REPEAT(op_LT_2, seq_91);
	RzILOpEffect *seq_92 = SEQN(2, op_ASSIGN_0, for_93);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_92, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsathub_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2112;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: ut64 h_tmp2113;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2114;
	// Declare: ut32 h_tmp2115;
	// Declare: ut32 h_tmp2116;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2117;
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
	RzILOpPure *op_NE_12 = LET("const_pos8", const_pos8, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos16", DUP(const_pos16), MUL(cast_14, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *cast_17 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_16 = LOGAND(op_RSHIFT_15, cast_17);
	RzILOpPure *cast_st16_18 = CAST(16, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st16_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos8", DUP(const_pos8), CAST(64, MSB(DUP(VARLP("const_pos8"))), VARLP("const_pos8")));
	RzILOpPure *cast_26 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_25 = ITE(op_NE_12, VARL("h_tmp2113"), cast_26);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos16", DUP(const_pos16), MUL(cast_28, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, cast_st16_32);
	RzILOpPure *op_EQ_33 = EQ(cond_25, cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos16", DUP(const_pos16), MUL(cast_36, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2115"))), VARL("h_tmp2115"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2116"))), VARL("h_tmp2116"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp2114")), VARL("h_tmp2117"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos16", DUP(const_pos16), MUL(cast_64, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *cast_67 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_66 = LOGAND(op_RSHIFT_65, cast_67);
	RzILOpPure *cast_st16_68 = CAST(16, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_70 = CAST(32, IL_FALSE, cast_st16_68);
	RzILOpPure *op_LT_69 = LET("const_pos0", DUP(const_pos0), ULT(cast_70, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", DUP(const_pos8), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *cast_73 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_72 = SUB(op_LSHIFT_71, cast_73);
	RzILOpPure *cast_75 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_74 = ITE(op_LT_69, cast_75, op_SUB_72);
	RzILOpPure *cast_77 = CAST(64, MSB(DUP(cast_st16_40)), cast_st16_40);
	RzILOpPure *cond_76 = ITE(op_EQ_33, cast_77, cond_74);
	RzILOpPure *cast_79 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_78 = LOGAND(cond_76, cast_79);
	RzILOpPure *cast_ut64_80 = CAST(64, IL_FALSE, op_AND_78);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos16", DUP(const_pos16), MUL(cast_82, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_83 = SHIFTL0(cast_ut64_80, op_MUL_81);
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_84 = LOGOR(cast_85, op_LSHIFT_83);
	RzILOpPure *cast_87 = CAST(64, MSB(DUP(op_OR_84)), op_OR_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2112", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2113", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2114", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2115", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2116", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2117", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_86 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(2, seq_24, op_ASSIGN_86);
	RzILOpEffect *empty_89 = EMPTY();
	RzILOpEffect *seq_90 = SEQN(2, seq_88, empty_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_6, seq_90);
	RzILOpEffect *for_93 = REPEAT(op_LT_2, seq_91);
	RzILOpEffect *seq_92 = SEQN(2, op_ASSIGN_0, for_93);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_92, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2118;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: st64 h_tmp2119;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2120;
	// Declare: ut32 h_tmp2121;
	// Declare: ut32 h_tmp2122;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2123;
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
	RzILOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st64_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_13, VARL("h_tmp2119"), VARLP("const_pos0LL")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_EQ_33 = EQ(cond_26, cast_st64_32);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos32", DUP(const_pos32), MUL(cast_35, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(DUP(cast_st32_38)), cast_st32_38);
	RzILOpPure *arg_cast_50 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp2121"))), VARL("h_tmp2121"));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2122"))), VARL("h_tmp2122"));
	RzILOpPure *arg_cast_53 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_58 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_57 = ITE(NON_ZERO(VARL("h_tmp2120")), VARL("h_tmp2123"), cast_58);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, cond_57);
	RzILOpPure *cast_63 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_62 = LET("const_pos32", DUP(const_pos32), MUL(cast_63, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_64 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_65 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_64, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_66 = CAST(32, MSB(DUP(op_AND_65)), op_AND_65);
	RzILOpPure *cast_st64_67 = CAST(64, MSB(DUP(cast_st32_66)), cast_st32_66);
	RzILOpPure *cast_69 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_68 = SLT(cast_st64_67, cast_69);
	RzILOpPure *op_SUB_70 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_70));
	RzILOpPure *op_NEG_72 = NEG(op_LSHIFT_71);
	RzILOpPure *op_SUB_73 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_74 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_73));
	RzILOpPure *cast_76 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_75 = SUB(op_LSHIFT_74, cast_76);
	RzILOpPure *cond_77 = ITE(op_LT_68, op_NEG_72, op_SUB_75);
	RzILOpPure *cond_78 = ITE(op_EQ_33, cast_st64_39, cond_77);
	RzILOpPure *cast_80 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_79 = LOGAND(cond_78, cast_80);
	RzILOpPure *cast_ut64_81 = CAST(64, IL_FALSE, op_AND_79);
	RzILOpPure *cast_83 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_82 = LET("const_pos16", DUP(const_pos16), MUL(cast_83, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(cast_ut64_81, op_MUL_82);
	RzILOpPure *cast_86 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_85 = LOGOR(cast_86, op_LSHIFT_84);
	RzILOpPure *cast_88 = CAST(32, MSB(DUP(op_OR_85)), op_OR_85);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2118", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2119", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_40 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_41 = SETL("h_tmp2120", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_42 = SEQN(2, c_call_40, op_ASSIGN_hybrid_tmp_41);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp2121", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2122", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_DEPOSIT64(arg_cast_50, arg_cast_51, arg_cast_52, arg_cast_53);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2123", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *seq_56 = SEQN(3, seq_45, seq_48, seq_55);
	RzILOpEffect *op_ASSIGN_59 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_60);
	RzILOpEffect *seq_61 = SEQN(3, seq_42, seq_56, op_ASSIGN_59);
	RzILOpEffect *op_ASSIGN_87 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_88);
	RzILOpEffect *seq_89 = SEQN(2, seq_25, op_ASSIGN_87);
	RzILOpEffect *empty_90 = EMPTY();
	RzILOpEffect *seq_91 = SEQN(2, seq_89, empty_90);
	RzILOpEffect *seq_92 = SEQN(2, seq_6, seq_91);
	RzILOpEffect *for_94 = REPEAT(op_LT_2, seq_92);
	RzILOpEffect *seq_93 = SEQN(2, op_ASSIGN_0, for_94);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_93, seq_61);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2124;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2125;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2126;
	// Declare: ut32 h_tmp2127;
	// Declare: ut32 h_tmp2128;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2129;
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
	RzILOpPure *op_NE_12 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_12, VARL("h_tmp2125"), VARLP("const_pos0LL")));
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_26 = LET("const_pos32", DUP(const_pos32), MUL(cast_27, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *op_AND_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_28, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_EQ_32 = EQ(cond_25, cast_st64_31);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos32", DUP(const_pos32), MUL(cast_34, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *op_AND_36 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_35, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *cast_st64_38 = CAST(64, MSB(DUP(cast_st32_37)), cast_st32_37);
	RzILOpPure *arg_cast_49 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_50 = CAST(64, MSB(DUP(VARL("h_tmp2127"))), VARL("h_tmp2127"));
	RzILOpPure *arg_cast_51 = CAST(64, MSB(DUP(VARL("h_tmp2128"))), VARL("h_tmp2128"));
	RzILOpPure *arg_cast_52 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_57 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_56 = ITE(NON_ZERO(VARL("h_tmp2126")), VARL("h_tmp2129"), cast_57);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, cond_56);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_61 = LET("const_pos32", DUP(const_pos32), MUL(cast_62, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_61);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(DUP(op_AND_64)), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(DUP(cast_st32_65)), cast_st32_65);
	RzILOpPure *cast_68 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_67 = SLT(cast_st64_66, cast_68);
	RzILOpPure *op_SUB_69 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_70 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_69));
	RzILOpPure *op_NEG_71 = NEG(op_LSHIFT_70);
	RzILOpPure *op_SUB_72 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_73 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_72));
	RzILOpPure *cast_75 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_74 = SUB(op_LSHIFT_73, cast_75);
	RzILOpPure *cond_76 = ITE(op_LT_67, op_NEG_71, op_SUB_74);
	RzILOpPure *cond_77 = ITE(op_EQ_32, cast_st64_38, cond_76);
	RzILOpPure *op_AND_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_77, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_80 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_79 = LET("const_pos32", DUP(const_pos32), MUL(cast_80, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_81 = SHIFTL0(op_AND_78, op_MUL_79);
	RzILOpPure *op_OR_82 = LOGOR(op_AND_11, op_LSHIFT_81);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2124", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2125", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp2126", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2127", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2128", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_DEPOSIT64(arg_cast_49, arg_cast_50, arg_cast_51, arg_cast_52);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2129", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *seq_55 = SEQN(3, seq_44, seq_47, seq_54);
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_59);
	RzILOpEffect *seq_60 = SEQN(3, seq_41, seq_55, op_ASSIGN_58);
	RzILOpEffect *op_ASSIGN_83 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_82);
	RzILOpEffect *seq_84 = SEQN(2, seq_24, op_ASSIGN_83);
	RzILOpEffect *empty_85 = EMPTY();
	RzILOpEffect *seq_86 = SEQN(2, seq_84, empty_85);
	RzILOpEffect *seq_87 = SEQN(2, seq_6, seq_86);
	RzILOpEffect *for_89 = REPEAT(op_LT_2, seq_87);
	RzILOpEffect *seq_88 = SEQN(2, op_ASSIGN_0, for_89);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_88, seq_60);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2130;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp2131;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2132;
	// Declare: ut32 h_tmp2133;
	// Declare: ut32 h_tmp2134;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2135;
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
	RzILOpPure *op_MUL_14 = LET("const_pos32", const_pos32, MUL(cast_15, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_16, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_st64_19 = CAST(64, MSB(DUP(cast_st32_18)), cast_st32_18);
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, cast_st64_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_27 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_26 = ITE(op_NE_13, VARL("h_tmp2131"), cast_27);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos32", DUP(const_pos32), MUL(cast_29, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *op_AND_31 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_30, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_32 = CAST(32, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_st64_33 = CAST(64, MSB(DUP(cast_st32_32)), cast_st32_32);
	RzILOpPure *cast_35 = CAST(64, IL_FALSE, cast_st64_33);
	RzILOpPure *op_EQ_34 = EQ(cond_26, cast_35);
	RzILOpPure *cast_37 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_36 = LET("const_pos32", DUP(const_pos32), MUL(cast_37, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(DUP(cast_st32_40)), cast_st32_40);
	RzILOpPure *arg_cast_52 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2133"))), VARL("h_tmp2133"));
	RzILOpPure *arg_cast_54 = CAST(64, MSB(DUP(VARL("h_tmp2134"))), VARL("h_tmp2134"));
	RzILOpPure *arg_cast_55 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_60 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_59 = ITE(NON_ZERO(VARL("h_tmp2132")), VARL("h_tmp2135"), cast_60);
	RzILOpPure *cast_62 = CAST(32, IL_FALSE, cond_59);
	RzILOpPure *cast_65 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_64 = LET("const_pos32", DUP(const_pos32), MUL(cast_65, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_66 = SHIFTR0(DUP(Rss), op_MUL_64);
	RzILOpPure *op_AND_67 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_66, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_68 = CAST(32, MSB(DUP(op_AND_67)), op_AND_67);
	RzILOpPure *cast_st64_69 = CAST(64, MSB(DUP(cast_st32_68)), cast_st32_68);
	RzILOpPure *cast_71 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_70 = SLT(cast_st64_69, cast_71);
	RzILOpPure *op_LSHIFT_72 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_74 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_73 = SUB(op_LSHIFT_72, cast_74);
	RzILOpPure *cast_76 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_75 = ITE(op_LT_70, cast_76, op_SUB_73);
	RzILOpPure *cond_77 = ITE(op_EQ_34, cast_st64_41, cond_75);
	RzILOpPure *cast_79 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_78 = LOGAND(cond_77, cast_79);
	RzILOpPure *cast_ut64_80 = CAST(64, IL_FALSE, op_AND_78);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_81 = LET("const_pos16", DUP(const_pos16), MUL(cast_82, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_83 = SHIFTL0(cast_ut64_80, op_MUL_81);
	RzILOpPure *cast_85 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_84 = LOGOR(cast_85, op_LSHIFT_83);
	RzILOpPure *cast_87 = CAST(32, MSB(DUP(op_OR_84)), op_OR_84);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2130", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_20 = HEX_EXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2131", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_42 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_43 = SETL("h_tmp2132", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_44 = SEQN(2, c_call_42, op_ASSIGN_hybrid_tmp_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp2133", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2134", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_DEPOSIT64(arg_cast_52, arg_cast_53, arg_cast_54, arg_cast_55);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp2135", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(3, seq_47, seq_50, seq_57);
	RzILOpEffect *op_ASSIGN_61 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_62);
	RzILOpEffect *seq_63 = SEQN(3, seq_44, seq_58, op_ASSIGN_61);
	RzILOpEffect *op_ASSIGN_86 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_87);
	RzILOpEffect *seq_88 = SEQN(2, seq_25, op_ASSIGN_86);
	RzILOpEffect *empty_89 = EMPTY();
	RzILOpEffect *seq_90 = SEQN(2, seq_88, empty_89);
	RzILOpEffect *seq_91 = SEQN(2, seq_6, seq_90);
	RzILOpEffect *for_93 = REPEAT(op_LT_2, seq_91);
	RzILOpEffect *seq_92 = SEQN(2, op_ASSIGN_0, for_93);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_92, seq_63);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsatwuh_nopack(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2136;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp2137;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2138;
	// Declare: ut32 h_tmp2139;
	// Declare: ut32 h_tmp2140;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp2141;
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
	RzILOpPure *op_NE_12 = LET("const_pos16", const_pos16, LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos32", DUP(const_pos32), MUL(cast_14, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_13);
	RzILOpPure *op_AND_16 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_15, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_17 = CAST(32, MSB(DUP(op_AND_16)), op_AND_16);
	RzILOpPure *cast_st64_18 = CAST(64, MSB(DUP(cast_st32_17)), cast_st32_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, cast_st64_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cast_26 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_25 = ITE(op_NE_12, VARL("h_tmp2137"), cast_26);
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos32", DUP(const_pos32), MUL(cast_28, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, cast_st64_32);
	RzILOpPure *op_EQ_33 = EQ(cond_25, cast_34);
	RzILOpPure *cast_36 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_35 = LET("const_pos32", DUP(const_pos32), MUL(cast_36, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(DUP(cast_st32_39)), cast_st32_39);
	RzILOpPure *arg_cast_51 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_52 = CAST(64, MSB(DUP(VARL("h_tmp2139"))), VARL("h_tmp2139"));
	RzILOpPure *arg_cast_53 = CAST(64, MSB(DUP(VARL("h_tmp2140"))), VARL("h_tmp2140"));
	RzILOpPure *arg_cast_54 = LET("const_pos1", const_pos1, CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_59 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_58 = ITE(NON_ZERO(VARL("h_tmp2138")), VARL("h_tmp2141"), cast_59);
	RzILOpPure *cast_61 = CAST(32, IL_FALSE, cond_58);
	RzILOpPure *cast_64 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_63 = LET("const_pos32", DUP(const_pos32), MUL(cast_64, VARLP("const_pos32")));
	RzILOpPure *op_RSHIFT_65 = SHIFTR0(DUP(Rss), op_MUL_63);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_65, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_67 = CAST(32, MSB(DUP(op_AND_66)), op_AND_66);
	RzILOpPure *cast_st64_68 = CAST(64, MSB(DUP(cast_st32_67)), cast_st32_67);
	RzILOpPure *cast_70 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_69 = SLT(cast_st64_68, cast_70);
	RzILOpPure *op_LSHIFT_71 = LET("const_pos1LL", const_pos1LL, LET("const_pos16", DUP(const_pos16), SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos16"))));
	RzILOpPure *cast_73 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_72 = SUB(op_LSHIFT_71, cast_73);
	RzILOpPure *cast_75 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_74 = ITE(op_LT_69, cast_75, op_SUB_72);
	RzILOpPure *cond_76 = ITE(op_EQ_33, cast_st64_40, cond_74);
	RzILOpPure *op_AND_77 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_76, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_79 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_78 = LET("const_pos32", DUP(const_pos32), MUL(cast_79, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_80 = SHIFTL0(op_AND_77, op_MUL_78);
	RzILOpPure *op_OR_81 = LOGOR(op_AND_11, op_LSHIFT_80);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2136", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *c_call_19 = HEX_EXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2137", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2138", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *c_call_44 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_45 = SETL("h_tmp2139", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_46 = SEQN(2, c_call_44, op_ASSIGN_hybrid_tmp_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2140", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_DEPOSIT64(arg_cast_51, arg_cast_52, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2141", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *seq_57 = SEQN(3, seq_46, seq_49, seq_56);
	RzILOpEffect *op_ASSIGN_60 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_61);
	RzILOpEffect *seq_62 = SEQN(3, seq_43, seq_57, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_82 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_81);
	RzILOpEffect *seq_83 = SEQN(2, seq_24, op_ASSIGN_82);
	RzILOpEffect *empty_84 = EMPTY();
	RzILOpEffect *seq_85 = SEQN(2, seq_83, empty_84);
	RzILOpEffect *seq_86 = SEQN(2, seq_6, seq_85);
	RzILOpEffect *for_88 = REPEAT(op_LT_2, seq_86);
	RzILOpEffect *seq_87 = SEQN(2, op_ASSIGN_0, for_88);
	RzILOpEffect *instruction_sequence = SEQN(2, seq_87, seq_62);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2142;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

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
	RzILOpPure *op_MUL_13 = LET("const_pos0", DUP(const_pos0), LET("const_pos8", DUP(const_pos8), MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_13);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_RSHIFT_14);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(cast_st8_17)), cast_st8_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_19, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos8", DUP(const_pos8), MUL(cast_22, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_24 = LOGOR(cast_25, op_LSHIFT_23);
	RzILOpPure *cast_27 = CAST(32, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2142", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_27);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_26, empty_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_6, seq_29);
	RzILOpEffect *for_32 = REPEAT(op_LT_2, seq_30);
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_0, for_32);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplatrh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2143;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
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
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, op_RSHIFT_13);
	RzILOpPure *op_AND_14 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_15, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cast_st16_16);
	RzILOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_18, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_19 = CAST(64, IL_FALSE, op_AND_17);
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos16", DUP(const_pos16), MUL(cast_21, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_19, op_MUL_20);
	RzILOpPure *cast_24 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_23 = LOGOR(cast_24, op_LSHIFT_22);
	RzILOpPure *cast_26 = CAST(64, MSB(DUP(op_OR_23)), op_OR_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2143", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_26);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_25, empty_27);
	RzILOpEffect *seq_29 = SEQN(2, seq_6, seq_28);
	RzILOpEffect *for_31 = REPEAT(op_LT_2, seq_29);
	RzILOpEffect *seq_30 = SEQN(2, op_ASSIGN_0, for_31);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vspliceib(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *op_sizeof_Rtt_2 = SN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp2144;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_1 = LET("const_pos8", const_pos8, MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *cast_4 = LET("op_sizeof_Rtt_2", op_sizeof_Rtt_2, CAST(32, IL_FALSE, VARLP("op_sizeof_Rtt_2")));
	RzILOpPure *op_MUL_3 = LET("const_pos8", DUP(const_pos8), MUL(cast_4, VARLP("const_pos8")));
	RzILOpPure *op_GE_5 = UGE(op_MUL_1, op_MUL_3);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(DUP(Rtt)), DUP(Rtt));
	RzILOpPure *op_MUL_7 = LET("const_pos8", DUP(const_pos8), MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_8 = SHIFTL0(cast_st64_6, op_MUL_7);
	RzILOpPure *cast_10 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_9 = ITE(op_GE_5, cast_10, op_LSHIFT_8);
	RzILOpPure *op_MUL_11 = LET("const_pos8", DUP(const_pos8), MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *op_NE_12 = LET("const_pos0", DUP(const_pos0), INV(EQ(op_MUL_11, VARLP("const_pos0"))));
	RzILOpPure *op_MUL_13 = LET("const_pos8", DUP(const_pos8), MUL(VARL("u"), VARLP("const_pos8")));
	RzILOpPure *arg_cast_15 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *arg_cast_16 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_17 = CAST(64, MSB(DUP(op_MUL_13)), op_MUL_13);
	RzILOpPure *cast_21 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_20 = ITE(op_NE_12, VARL("h_tmp2144"), cast_21);
	RzILOpPure *cast_23 = CAST(64, IL_FALSE, cond_9);
	RzILOpPure *op_OR_22 = LOGOR(cast_23, cond_20);
	RzILOpPure *cast_25 = CAST(64, MSB(DUP(op_OR_22)), op_OR_22);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *c_call_14 = HEX_EXTRACT64(arg_cast_15, arg_cast_16, arg_cast_17);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_18 = SETL("h_tmp2144", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_19 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_18);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_25);
	RzILOpEffect *seq_26 = SEQN(2, seq_19, op_ASSIGN_24);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, seq_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsplicerb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Pu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Pu = VARG(Pu_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *op_sizeof_Rtt_3 = SN(32, 0x8);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: ut64 h_tmp2145;
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *cast_1 = CAST(32, IL_FALSE, Pu);
	RzILOpPure *op_AND_0 = LET("const_pos7", const_pos7, LOGAND(cast_1, VARLP("const_pos7")));
	RzILOpPure *op_MUL_2 = LET("const_pos8", const_pos8, MUL(op_AND_0, VARLP("const_pos8")));
	RzILOpPure *cast_5 = LET("op_sizeof_Rtt_3", op_sizeof_Rtt_3, CAST(32, IL_FALSE, VARLP("op_sizeof_Rtt_3")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", DUP(const_pos8), MUL(cast_5, VARLP("const_pos8")));
	RzILOpPure *op_GE_6 = UGE(op_MUL_2, op_MUL_4);
	RzILOpPure *cast_st64_7 = CAST(64, MSB(DUP(Rtt)), DUP(Rtt));
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_8 = LET("const_pos7", DUP(const_pos7), LOGAND(cast_9, VARLP("const_pos7")));
	RzILOpPure *op_MUL_10 = LET("const_pos8", DUP(const_pos8), MUL(op_AND_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_11 = SHIFTL0(cast_st64_7, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0", const_pos0, CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *cond_12 = ITE(op_GE_6, cast_13, op_LSHIFT_11);
	RzILOpPure *cast_15 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_14 = LET("const_pos7", DUP(const_pos7), LOGAND(cast_15, VARLP("const_pos7")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_AND_14, VARLP("const_pos8")));
	RzILOpPure *op_NE_17 = LET("const_pos0", DUP(const_pos0), INV(EQ(op_MUL_16, VARLP("const_pos0"))));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, DUP(Pu));
	RzILOpPure *op_AND_18 = LET("const_pos7", DUP(const_pos7), LOGAND(cast_19, VARLP("const_pos7")));
	RzILOpPure *op_MUL_20 = LET("const_pos8", DUP(const_pos8), MUL(op_AND_18, VARLP("const_pos8")));
	RzILOpPure *arg_cast_22 = CAST(64, IL_FALSE, Rss);
	RzILOpPure *arg_cast_23 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_24 = CAST(64, MSB(DUP(op_MUL_20)), op_MUL_20);
	RzILOpPure *cast_28 = LET("const_pos0LL", const_pos0LL, CAST(64, IL_FALSE, VARLP("const_pos0LL")));
	RzILOpPure *cond_27 = ITE(op_NE_17, VARL("h_tmp2145"), cast_28);
	RzILOpPure *cast_30 = CAST(64, IL_FALSE, cond_12);
	RzILOpPure *op_OR_29 = LOGOR(cast_30, cond_27);
	RzILOpPure *cast_32 = CAST(64, MSB(DUP(op_OR_29)), op_OR_29);

	// WRITE
	RzILOpEffect *c_call_21 = HEX_EXTRACT64(arg_cast_22, arg_cast_23, arg_cast_24);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_25 = SETL("h_tmp2145", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_26 = SEQN(2, c_call_21, op_ASSIGN_hybrid_tmp_25);
	RzILOpEffect *op_ASSIGN_31 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_32);
	RzILOpEffect *seq_33 = SEQN(2, seq_26, op_ASSIGN_31);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2146;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
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
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_RSHIFT_14);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_st8_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_24 = LOGOR(cast_25, op_LSHIFT_23);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2146", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_27);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_26, empty_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_6, seq_29);
	RzILOpEffect *for_32 = REPEAT(op_LT_2, seq_30);
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_0, for_32);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vsxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2147;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

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
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_RSHIFT_14);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_17 = CAST(16, MSB(DUP(op_AND_15)), op_AND_15);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(cast_st16_17)), cast_st16_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2147", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_24, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunehb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2148;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

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
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_MUL_15 = LET("const_pos8", DUP(const_pos8), MUL(op_MUL_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_16 = SHIFTR0(Rss, op_MUL_15);
	RzILOpPure *cast_18 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_17 = LOGAND(op_RSHIFT_16, cast_18);
	RzILOpPure *cast_st8_19 = CAST(8, MSB(DUP(op_AND_17)), op_AND_17);
	RzILOpPure *cast_21 = CAST(64, MSB(DUP(cast_st8_19)), cast_st8_19);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_21, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *cast_24 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_23 = LET("const_pos8", DUP(const_pos8), MUL(cast_24, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_22, op_MUL_23);
	RzILOpPure *cast_27 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_26 = LOGOR(cast_27, op_LSHIFT_25);
	RzILOpPure *cast_29 = CAST(32, MSB(DUP(op_OR_26)), op_OR_26);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2148", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_28 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_29);
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_28, empty_30);
	RzILOpEffect *seq_32 = SEQN(2, seq_6, seq_31);
	RzILOpEffect *for_34 = REPEAT(op_LT_2, seq_32);
	RzILOpEffect *seq_33 = SEQN(2, op_ASSIGN_0, for_34);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_33);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunewh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *cast_7 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_6 = LOGAND(op_RSHIFT_5, cast_7);
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st16_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(op_OR_14)), op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_21);
	RzILOpPure *op_MUL_23 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st16_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);
	RzILOpPure *op_MUL_38 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_38));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *op_AND_41 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_40);
	RzILOpPure *op_MUL_42 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(Rss, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, cast_st16_46);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_48, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_50 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_49, op_MUL_50);
	RzILOpPure *cast_53 = CAST(64, IL_FALSE, op_AND_41);
	RzILOpPure *op_OR_52 = LOGOR(cast_53, op_LSHIFT_51);
	RzILOpPure *cast_55 = CAST(64, MSB(DUP(op_OR_52)), op_OR_52);
	RzILOpPure *op_MUL_57 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_57));
	RzILOpPure *op_NOT_59 = LOGNOT(op_LSHIFT_58);
	RzILOpPure *op_AND_60 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_59);
	RzILOpPure *op_MUL_61 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rss), op_MUL_61);
	RzILOpPure *cast_64 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_63 = LOGAND(op_RSHIFT_62, cast_64);
	RzILOpPure *cast_st16_65 = CAST(16, MSB(DUP(op_AND_63)), op_AND_63);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, cast_st16_65);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_67, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_66);
	RzILOpPure *op_MUL_69 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_OR_71 = LOGOR(cast_72, op_LSHIFT_70);
	RzILOpPure *cast_74 = CAST(64, MSB(DUP(op_OR_71)), op_OR_71);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *op_ASSIGN_73 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_74);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_18, op_ASSIGN_35, empty_37, op_ASSIGN_54, empty_56, op_ASSIGN_73, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunohb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2149;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffLL = SN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

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
	RzILOpPure *cast_14 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_13 = LET("const_pos2", const_pos2, MUL(cast_14, VARLP("const_pos2")));
	RzILOpPure *op_ADD_15 = LET("const_pos1", const_pos1, ADD(op_MUL_13, VARLP("const_pos1")));
	RzILOpPure *op_MUL_16 = LET("const_pos8", DUP(const_pos8), MUL(op_ADD_15, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(Rss, op_MUL_16);
	RzILOpPure *cast_19 = LET("const_pos0xff", const_pos0xff, CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_18 = LOGAND(op_RSHIFT_17, cast_19);
	RzILOpPure *cast_st8_20 = CAST(8, MSB(DUP(op_AND_18)), op_AND_18);
	RzILOpPure *cast_22 = CAST(64, MSB(DUP(cast_st8_20)), cast_st8_20);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_22, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_21);
	RzILOpPure *cast_25 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_24 = LET("const_pos8", DUP(const_pos8), MUL(cast_25, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_26 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *cast_28 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_27 = LOGOR(cast_28, op_LSHIFT_26);
	RzILOpPure *cast_30 = CAST(32, MSB(DUP(op_OR_27)), op_OR_27);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2149", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_29 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_30);
	RzILOpEffect *empty_31 = EMPTY();
	RzILOpEffect *seq_32 = SEQN(2, op_ASSIGN_29, empty_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_6, seq_32);
	RzILOpEffect *for_35 = REPEAT(op_LT_2, seq_33);
	RzILOpEffect *seq_34 = SEQN(2, op_ASSIGN_0, for_35);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vtrunowh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rtt, op_MUL_4);
	RzILOpPure *cast_7 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_6 = LOGAND(op_RSHIFT_5, cast_7);
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_6)), op_AND_6);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, cast_st16_8);
	RzILOpPure *op_AND_9 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_10, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_11 = CAST(64, IL_FALSE, op_AND_9);
	RzILOpPure *op_MUL_12 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_13 = SHIFTL0(cast_ut64_11, op_MUL_12);
	RzILOpPure *cast_15 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_14 = LOGOR(cast_15, op_LSHIFT_13);
	RzILOpPure *cast_17 = CAST(64, MSB(DUP(op_OR_14)), op_OR_14);
	RzILOpPure *op_MUL_19 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_20 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_19));
	RzILOpPure *op_NOT_21 = LOGNOT(op_LSHIFT_20);
	RzILOpPure *op_AND_22 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_21);
	RzILOpPure *op_MUL_23 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rtt), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, cast_st16_27);
	RzILOpPure *op_AND_28 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_29, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_30 = CAST(64, IL_FALSE, op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_32 = SHIFTL0(cast_ut64_30, op_MUL_31);
	RzILOpPure *cast_34 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_OR_33 = LOGOR(cast_34, op_LSHIFT_32);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_OR_33)), op_OR_33);
	RzILOpPure *op_MUL_38 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_39 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_38));
	RzILOpPure *op_NOT_40 = LOGNOT(op_LSHIFT_39);
	RzILOpPure *op_AND_41 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_40);
	RzILOpPure *op_MUL_42 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(Rss, op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, cast_st16_46);
	RzILOpPure *op_AND_47 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_48, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_49 = CAST(64, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_50 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_51 = SHIFTL0(cast_ut64_49, op_MUL_50);
	RzILOpPure *cast_53 = CAST(64, IL_FALSE, op_AND_41);
	RzILOpPure *op_OR_52 = LOGOR(cast_53, op_LSHIFT_51);
	RzILOpPure *cast_55 = CAST(64, MSB(DUP(op_OR_52)), op_OR_52);
	RzILOpPure *op_MUL_57 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_58 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_57));
	RzILOpPure *op_NOT_59 = LOGNOT(op_LSHIFT_58);
	RzILOpPure *op_AND_60 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_59);
	RzILOpPure *op_MUL_61 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_62 = SHIFTR0(DUP(Rss), op_MUL_61);
	RzILOpPure *cast_64 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_63 = LOGAND(op_RSHIFT_62, cast_64);
	RzILOpPure *cast_st16_65 = CAST(16, MSB(DUP(op_AND_63)), op_AND_63);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, cast_st16_65);
	RzILOpPure *op_AND_66 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), LOGAND(cast_67, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_68 = CAST(64, IL_FALSE, op_AND_66);
	RzILOpPure *op_MUL_69 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_70 = SHIFTL0(cast_ut64_68, op_MUL_69);
	RzILOpPure *cast_72 = CAST(64, IL_FALSE, op_AND_60);
	RzILOpPure *op_OR_71 = LOGOR(cast_72, op_LSHIFT_70);
	RzILOpPure *cast_74 = CAST(64, MSB(DUP(op_OR_71)), op_OR_71);

	// WRITE
	RzILOpEffect *op_ASSIGN_16 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_17);
	RzILOpEffect *empty_18 = EMPTY();
	RzILOpEffect *op_ASSIGN_35 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_36);
	RzILOpEffect *empty_37 = EMPTY();
	RzILOpEffect *op_ASSIGN_54 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_55);
	RzILOpEffect *empty_56 = EMPTY();
	RzILOpEffect *op_ASSIGN_73 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_74);
	RzILOpEffect *empty_75 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_16, empty_18, op_ASSIGN_35, empty_37, op_ASSIGN_54, empty_56, op_ASSIGN_73, empty_75);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxtbh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: st32 h_tmp2150;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
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
	RzILOpPure *op_MUL_12 = LET("const_pos8", const_pos8, MUL(cast_13, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_RSHIFT_14);
	RzILOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_16, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, cast_ut8_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_18);
	RzILOpPure *cast_22 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_21 = LET("const_pos16", DUP(const_pos16), MUL(cast_22, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzILOpPure *cast_25 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_24 = LOGOR(cast_25, op_LSHIFT_23);
	RzILOpPure *cast_27 = CAST(64, MSB(DUP(op_OR_24)), op_OR_24);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2150", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_26 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_27);
	RzILOpEffect *empty_28 = EMPTY();
	RzILOpEffect *seq_29 = SEQN(2, op_ASSIGN_26, empty_28);
	RzILOpEffect *seq_30 = SEQN(2, seq_6, seq_29);
	RzILOpEffect *for_32 = REPEAT(op_LT_2, seq_30);
	RzILOpEffect *seq_31 = SEQN(2, op_ASSIGN_0, for_32);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s2_vzxthw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: st32 h_tmp2151;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

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
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(cast_13, VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rs, op_MUL_12);
	RzILOpPure *cast_16 = CAST(32, IL_FALSE, op_RSHIFT_14);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_16, VARLP("const_pos0xffff")));
	RzILOpPure *cast_ut16_17 = CAST(16, IL_FALSE, op_AND_15);
	RzILOpPure *cast_19 = CAST(64, MSB(DUP(cast_ut16_17)), cast_ut16_17);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cast_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_21 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_20 = LET("const_pos32", DUP(const_pos32), MUL(cast_21, VARLP("const_pos32")));
	RzILOpPure *op_LSHIFT_22 = SHIFTL0(op_AND_18, op_MUL_20);
	RzILOpPure *op_OR_23 = LOGOR(op_AND_11, op_LSHIFT_22);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2151", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_24 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_23);
	RzILOpEffect *empty_25 = EMPTY();
	RzILOpEffect *seq_26 = SEQN(2, op_ASSIGN_24, empty_25);
	RzILOpEffect *seq_27 = SEQN(2, seq_6, seq_26);
	RzILOpEffect *for_29 = REPEAT(op_LT_2, seq_27);
	RzILOpEffect *seq_28 = SEQN(2, op_ASSIGN_0, for_29);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_28);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>