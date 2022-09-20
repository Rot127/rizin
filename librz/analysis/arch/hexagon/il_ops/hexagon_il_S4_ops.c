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

RzILOpEffect *hex_il_op_s4_addaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Ru);
	RzILOpPure *op_ADD_2 = ADD(op_ADD_0, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("u"), cast_4);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_ADD_3)), op_ADD_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_andi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARL("u"), cast_4);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_AND_3)), op_AND_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_andi_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp2152;
	// Declare: st32 h_tmp2153;
	// Declare: st32 h_tmp2154;
	// Declare: st32 h_tmp2155;
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *arg_cast_1 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_NOT_4 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_6 = CAST(32, IL_FALSE, op_NOT_4);
	RzILOpPure *op_GT_9 = SGT(VARL("h_tmp2152"), VARL("h_tmp2153"));
	RzILOpPure *arg_cast_11 = CAST(32, IL_FALSE, DUP(Rs));
	RzILOpPure *op_NOT_14 = LOGNOT(DUP(Rs));
	RzILOpPure *arg_cast_16 = CAST(32, IL_FALSE, op_NOT_14);
	RzILOpPure *cond_19 = ITE(op_GT_9, VARL("h_tmp2154"), VARL("h_tmp2155"));
	RzILOpPure *op_ADD_21 = ADD(cond_19, VARL("s"));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(arg_cast_1);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_2 = SETL("h_tmp2152", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_3 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_2);
	RzILOpEffect *c_call_5 = HEX_CLO32(arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2153", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_5, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_10 = HEX_CLO32(arg_cast_11);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp2154", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *c_call_15 = HEX_CLO32(arg_cast_16);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp2155", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *imm_assign_20 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_22 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_21);
	RzILOpEffect *seq_23 = SEQN(5, seq_3, seq_8, seq_13, seq_18, op_ASSIGN_22);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_20, seq_23);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_clbpaddi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbpnorm(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extract(HexInsnPktBundle *bundle) {
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
	// Declare: st64 h_tmp2156;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, VARL("h_tmp2156"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, MSB(DUP(cond_16)), cond_16);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp2156", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_extract_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp2157;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp2158;
	// Declare: st32 offset;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp2159;

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
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp2157"), cast_13);
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
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp2158"), VARLP("const_pos0LL")));
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
	RzILOpPure *cond_57 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_33, VARL("h_tmp2159"), VARLP("const_pos0LL")));
	RzILOpPure *cast_59 = CAST(32, MSB(DUP(cond_57)), cond_57);

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2157", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2158", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *c_call_52 = HEX_SEXTRACT64(cond_51, arg_cast_53, arg_cast_54);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2159", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *op_ASSIGN_58 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_59);
	RzILOpEffect *seq_60 = SEQN(2, seq_56, op_ASSIGN_58);
	RzILOpEffect *instruction_sequence = SEQN(3, seq_15, seq_31, seq_60);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_extractp(HexInsnPktBundle *bundle) {
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
	// Declare: st64 h_tmp2160;
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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, VARL("h_tmp2160"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_RSHIFT_9, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp2160", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *op_ASSIGN_16 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_14, op_ASSIGN_16);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_17);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_extractp_rp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos6 = UN(32, 0x6);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	// Declare: ut64 h_tmp2161;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st32 width;
	RzILOpPure *const_pos7 = UN(32, 0x7);
	// Declare: st64 h_tmp2162;
	// Declare: st32 offset;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2163;

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
	RzILOpPure *cond_12 = ITE(op_NE_0, VARL("h_tmp2161"), cast_13);
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
	RzILOpPure *cond_29 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_17, VARL("h_tmp2162"), VARLP("const_pos0LL")));
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
	RzILOpPure *cond_53 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_33, VARL("h_tmp2163"), VARLP("const_pos0LL")));

	// WRITE
	RzILOpEffect *c_call_6 = HEX_EXTRACT64(arg_cast_7, arg_cast_8, arg_cast_9);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2161", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_6, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *op_ASSIGN_14 = SETL("width", cast_16);
	RzILOpEffect *seq_15 = SEQN(2, seq_11, op_ASSIGN_14);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(arg_cast_24, arg_cast_25, arg_cast_26);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_27 = SETL("h_tmp2162", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_28 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_27);
	RzILOpEffect *op_ASSIGN_30 = SETL("offset", cast_32);
	RzILOpEffect *seq_31 = SEQN(2, seq_28, op_ASSIGN_30);
	RzILOpEffect *c_call_48 = HEX_SEXTRACT64(cond_47, arg_cast_49, arg_cast_50);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2163", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *op_ASSIGN_54 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cond_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_52, op_ASSIGN_54);
	RzILOpEffect *instruction_sequence = SEQN(3, seq_15, seq_31, seq_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_lsli(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2164;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st4 shamt;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	RzILOpPure *const_pos1 = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_2 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_3 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_4 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_7 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2164"), VARLP("const_pos0LL")));
	RzILOpPure *cast_10 = CAST(4, MSB(DUP(cond_7)), cond_7);
	RzILOpPure *cast_12 = CAST(32, IL_FALSE, VARL("shamt"));
	RzILOpPure *op_LT_11 = LET("const_pos0", DUP(const_pos0), ULT(cast_12, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_14 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_15 = CAST(64, IL_FALSE, cast_ut32_14);
	RzILOpPure *op_NEG_16 = NEG(VARL("shamt"));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_NEG_16);
	RzILOpPure *op_SUB_17 = LET("const_pos1", const_pos1, SUB(cast_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(cast_ut64_15, op_SUB_17);
	RzILOpPure *op_RSHIFT_20 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_RSHIFT_19, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_21 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *cast_ut64_22 = CAST(64, IL_FALSE, cast_ut32_21);
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_22, VARL("shamt"));
	RzILOpPure *cond_24 = ITE(op_LT_11, op_RSHIFT_20, op_LSHIFT_23);
	RzILOpPure *cast_26 = CAST(32, MSB(DUP(cond_24)), cond_24);

	// WRITE
	RzILOpEffect *c_call_1 = HEX_SEXTRACT64(arg_cast_2, arg_cast_3, arg_cast_4);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2164", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_1, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *op_ASSIGN_8 = SETL("shamt", cast_10);
	RzILOpEffect *seq_9 = SEQN(2, seq_6, op_ASSIGN_8);
	RzILOpEffect *imm_assign_13 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_25 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, cast_26);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_13, seq_9, op_ASSIGN_25);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ntstbit_i(HexInsnPktBundle *bundle) {
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
	RzILOpPure *op_EQ_4 = LET("const_pos0", const_pos0, EQ(op_AND_2, VARLP("const_pos0")));
	RzILOpPure *cond_5 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_4, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_7 = CAST(8, MSB(DUP(cond_5)), cond_5);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_6 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_7);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ntstbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2165;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2166;
	// Declare: st64 h_tmp2167;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp2165"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_10 = SLT(cond_9, cast_11);
	RzILOpPure *cast_ut32_12 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NE_14 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_21 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_14, VARL("h_tmp2166"), VARLP("const_pos0LL")));
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
	RzILOpPure *cond_36 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp2167"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(cast_ut64_28, cond_36);
	RzILOpPure *cond_38 = ITE(op_LT_10, op_RSHIFT_26, op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(cast_ut64_1, cond_38);
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_40 = EQ(op_AND_39, cast_41);
	RzILOpPure *cond_42 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_40, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_44 = CAST(8, MSB(DUP(cond_42)), cond_42);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2165", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp2166", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2167", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_43 = HEX_WRITE_GLOBAL(Pd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(4, seq_8, seq_20, seq_35, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_AND_1 = LOGAND(Rs, VARL("s"));
	RzILOpPure *op_OR_2 = LOGOR(Rx, op_AND_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andix(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_AND_1 = LOGAND(Rx, VARL("s"));
	RzILOpPure *op_OR_2 = LOGOR(Ru, op_AND_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_ori(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_OR_1 = LOGOR(Rs, VARL("s"));
	RzILOpPure *op_OR_2 = LOGOR(Rx, op_OR_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, op_OR_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ori_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_OR_3 = LOGOR(VARL("u"), cast_4);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_OR_3)), op_OR_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ori_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_parity(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewt_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewt_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbnewtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbt_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbt_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerbtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdt_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdt_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerdtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerff_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerff_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerffnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerft_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerft_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerftnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewt_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewt_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhnewtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerht_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerht_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerhtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerif_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerif_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerifnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewf_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewf_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewfnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewt_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewt_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerinewtnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerit_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstorerit_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_abs(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_pstoreritnew_rr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_rl_at_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_stored_rl_st_vi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *op_6 = CAST(8, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("S", S);
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_5, op_ASSIGN_3, empty_4, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeirbf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbt_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirbtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *op_6 = CAST(16, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("S", S);
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_5, op_ASSIGN_3, empty_4, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeirhf_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirhfnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirht_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirhtnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeiri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *S = SN(32, (st32)ISA2IMM(hi, 'S'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *op_ADD_1 = ADD(cast_2, VARL("u"));
	RzILOpPure *op_6 = CAST(32, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *imm_assign_5 = SETL("S", S);
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_5, op_ASSIGN_3, empty_4, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeirif_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirifnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeirit_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storeiritnew_io(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_storerb_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, op_RSHIFT_4);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_8 = CAST(8, IL_FALSE, cast_st8_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_8_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerb_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerb_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, cast_st8_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, op_RSHIFT_4);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_8 = CAST(8, IL_FALSE, cast_st8_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_8_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_9, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_10 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(8, IL_FALSE, cast_st8_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerbnew_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xff", const_pos0xff, LOGAND(cast_10, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_11 = CAST(8, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(8, IL_FALSE, cast_st8_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_3 = CAST(64, IL_FALSE, Rtt);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_3_4, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_6 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_7 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, op_RSHIFT_4);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_8_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerf_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, op_RSHIFT_4);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_8_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerh_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Rt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *cast_6 = CAST(32, IL_FALSE, op_RSHIFT_4);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_8 = CAST(16, IL_FALSE, cast_st16_7);
	RzILOpPure *cast_11 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_8_9 = STOREW(VARL("EA"), op_8);
	RzILOpEffect *op_ASSIGN_10 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_11);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_8_9, op_ASSIGN_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *cast_9 = CAST(32, IL_FALSE, op_RSHIFT_7);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_11 = CAST(16, IL_FALSE, cast_st16_10);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_11_12 = STOREW(VARL("EA"), op_11);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_11_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerhnew_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_MUL_7 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_8 = SHIFTR0(Nt, op_MUL_7);
	RzILOpPure *cast_10 = CAST(32, IL_FALSE, op_RSHIFT_8);
	RzILOpPure *op_AND_9 = LET("const_pos0xffff", const_pos0xffff, LOGAND(cast_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(DUP(op_AND_9)), op_AND_9);
	RzILOpPure *op_12 = CAST(16, IL_FALSE, cast_st16_11);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_12_13 = STOREW(VARL("EA"), op_12);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_12_13);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_3 = CAST(32, IL_FALSE, Rt);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_3_4, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', true);

	// EXEC
	RzILOpPure *op_3 = CAST(32, IL_FALSE, Nt);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(VARL("U"))), VARL("U"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Re_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_3_4, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_rr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *op_ADD_2 = ADD(Rs, op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_ADD_2);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", cast_4);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_ur(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Ru, VARL("u"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), cast_4);
	RzILOpPure *op_7 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_6 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_5, empty_6, ms_op_7_8);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', true);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rs, Ru);
	RzILOpPure *op_ADD_2 = ADD(op_SUB_0, VARL("s"));

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_3 = HEX_WRITE_GLOBAL(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_3);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', true);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *cast_4 = CAST(32, IL_FALSE, op_LSHIFT_2);
	RzILOpPure *op_SUB_3 = SUB(VARL("u"), cast_4);
	RzILOpPure *cast_6 = CAST(32, MSB(DUP(op_SUB_3)), op_SUB_3);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_5 = HEX_WRITE_GLOBAL(Rx_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subi_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vrcrotate(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vrcrotate_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_vxaddsubh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2168;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2169;
	// Declare: ut32 h_tmp2170;
	// Declare: ut32 h_tmp2171;
	// Declare: ut64 h_tmp2172;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2173;
	// Declare: ut32 h_tmp2174;
	// Declare: ut32 h_tmp2175;
	// Declare: ut32 h_tmp2176;
	// Declare: ut64 h_tmp2177;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2178;
	// Declare: ut32 h_tmp2179;
	// Declare: ut32 h_tmp2180;
	// Declare: ut32 h_tmp2181;
	// Declare: ut64 h_tmp2182;
	// Declare: st64 h_tmp2183;
	// Declare: ut32 h_tmp2184;
	// Declare: ut32 h_tmp2185;
	// Declare: ut32 h_tmp2186;
	// Declare: ut64 h_tmp2187;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st16_14 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *op_ADD_15 = ADD(cast_st16_9, cast_st16_14);
	RzILOpPure *arg_cast_17 = CAST(64, IL_FALSE, op_ADD_15);
	RzILOpPure *arg_cast_18 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_19 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2168"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_ADD_33 = ADD(cast_st16_27, cast_st16_32);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_ADD_33)), op_ADD_33);
	RzILOpPure *op_EQ_34 = EQ(cond_22, cast_35);
	RzILOpPure *op_MUL_36 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_ADD_46 = ADD(cast_st16_40, cast_st16_45);
	RzILOpPure *arg_cast_57 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2170"))), VARL("h_tmp2170"));
	RzILOpPure *arg_cast_59 = CAST(64, MSB(DUP(VARL("h_tmp2171"))), VARL("h_tmp2171"));
	RzILOpPure *arg_cast_60 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_65 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_64 = ITE(NON_ZERO(VARL("h_tmp2169")), VARL("h_tmp2172"), cast_65);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, cond_64);
	RzILOpPure *op_MUL_69 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *op_MUL_74 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rtt), op_MUL_74);
	RzILOpPure *cast_77 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_76 = LOGAND(op_RSHIFT_75, cast_77);
	RzILOpPure *cast_st16_78 = CAST(16, MSB(DUP(op_AND_76)), op_AND_76);
	RzILOpPure *op_ADD_79 = ADD(cast_st16_73, cast_st16_78);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, op_ADD_79);
	RzILOpPure *op_LT_80 = LET("const_pos0", DUP(const_pos0), ULT(cast_81, VARLP("const_pos0")));
	RzILOpPure *op_SUB_82 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_83 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_82));
	RzILOpPure *op_NEG_84 = NEG(op_LSHIFT_83);
	RzILOpPure *op_SUB_85 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_86 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_85));
	RzILOpPure *cast_88 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_87 = SUB(op_LSHIFT_86, cast_88);
	RzILOpPure *cond_89 = ITE(op_LT_80, op_NEG_84, op_SUB_87);
	RzILOpPure *cast_91 = CAST(64, MSB(DUP(op_ADD_46)), op_ADD_46);
	RzILOpPure *cond_90 = ITE(op_EQ_34, cast_91, cond_89);
	RzILOpPure *cast_93 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_92 = LOGAND(cond_90, cast_93);
	RzILOpPure *cast_ut64_94 = CAST(64, IL_FALSE, op_AND_92);
	RzILOpPure *op_MUL_95 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_96 = SHIFTL0(cast_ut64_94, op_MUL_95);
	RzILOpPure *cast_98 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_97 = LOGOR(cast_98, op_LSHIFT_96);
	RzILOpPure *cast_100 = CAST(64, MSB(DUP(op_OR_97)), op_OR_97);
	RzILOpPure *op_MUL_103 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_104 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_103));
	RzILOpPure *op_NOT_105 = LOGNOT(op_LSHIFT_104);
	RzILOpPure *op_AND_106 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_105);
	RzILOpPure *op_NE_107 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_108 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *cast_111 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_st16_112 = CAST(16, MSB(DUP(op_AND_110)), op_AND_110);
	RzILOpPure *op_MUL_113 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st16_117 = CAST(16, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *op_SUB_118 = SUB(cast_st16_112, cast_st16_117);
	RzILOpPure *arg_cast_120 = CAST(64, IL_FALSE, op_SUB_118);
	RzILOpPure *arg_cast_121 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_122 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_125 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_107, VARL("h_tmp2173"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_126 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_127 = SHIFTR0(DUP(Rss), op_MUL_126);
	RzILOpPure *cast_129 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_128 = LOGAND(op_RSHIFT_127, cast_129);
	RzILOpPure *cast_st16_130 = CAST(16, MSB(DUP(op_AND_128)), op_AND_128);
	RzILOpPure *op_MUL_131 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rtt), op_MUL_131);
	RzILOpPure *cast_134 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_133 = LOGAND(op_RSHIFT_132, cast_134);
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *op_SUB_136 = SUB(cast_st16_130, cast_st16_135);
	RzILOpPure *cast_138 = CAST(64, MSB(DUP(op_SUB_136)), op_SUB_136);
	RzILOpPure *op_EQ_137 = EQ(cond_125, cast_138);
	RzILOpPure *op_MUL_139 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st16_143 = CAST(16, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *op_MUL_144 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_145 = SHIFTR0(DUP(Rtt), op_MUL_144);
	RzILOpPure *cast_147 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_146 = LOGAND(op_RSHIFT_145, cast_147);
	RzILOpPure *cast_st16_148 = CAST(16, MSB(DUP(op_AND_146)), op_AND_146);
	RzILOpPure *op_SUB_149 = SUB(cast_st16_143, cast_st16_148);
	RzILOpPure *arg_cast_160 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_161 = CAST(64, MSB(DUP(VARL("h_tmp2175"))), VARL("h_tmp2175"));
	RzILOpPure *arg_cast_162 = CAST(64, MSB(DUP(VARL("h_tmp2176"))), VARL("h_tmp2176"));
	RzILOpPure *arg_cast_163 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_168 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_167 = ITE(NON_ZERO(VARL("h_tmp2174")), VARL("h_tmp2177"), cast_168);
	RzILOpPure *cast_170 = CAST(32, IL_FALSE, cond_167);
	RzILOpPure *op_MUL_172 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_173 = SHIFTR0(DUP(Rss), op_MUL_172);
	RzILOpPure *cast_175 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_174 = LOGAND(op_RSHIFT_173, cast_175);
	RzILOpPure *cast_st16_176 = CAST(16, MSB(DUP(op_AND_174)), op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *cast_180 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_179 = LOGAND(op_RSHIFT_178, cast_180);
	RzILOpPure *cast_st16_181 = CAST(16, MSB(DUP(op_AND_179)), op_AND_179);
	RzILOpPure *op_SUB_182 = SUB(cast_st16_176, cast_st16_181);
	RzILOpPure *cast_184 = CAST(32, IL_FALSE, op_SUB_182);
	RzILOpPure *op_LT_183 = LET("const_pos0", DUP(const_pos0), ULT(cast_184, VARLP("const_pos0")));
	RzILOpPure *op_SUB_185 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_186 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_185));
	RzILOpPure *op_NEG_187 = NEG(op_LSHIFT_186);
	RzILOpPure *op_SUB_188 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_189 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_188));
	RzILOpPure *cast_191 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_190 = SUB(op_LSHIFT_189, cast_191);
	RzILOpPure *cond_192 = ITE(op_LT_183, op_NEG_187, op_SUB_190);
	RzILOpPure *cast_194 = CAST(64, MSB(DUP(op_SUB_149)), op_SUB_149);
	RzILOpPure *cond_193 = ITE(op_EQ_137, cast_194, cond_192);
	RzILOpPure *cast_196 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_195 = LOGAND(cond_193, cast_196);
	RzILOpPure *cast_ut64_197 = CAST(64, IL_FALSE, op_AND_195);
	RzILOpPure *op_MUL_198 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = SHIFTL0(cast_ut64_197, op_MUL_198);
	RzILOpPure *cast_201 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *op_OR_200 = LOGOR(cast_201, op_LSHIFT_199);
	RzILOpPure *cast_203 = CAST(64, MSB(DUP(op_OR_200)), op_OR_200);
	RzILOpPure *op_MUL_206 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_207 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_206));
	RzILOpPure *op_NOT_208 = LOGNOT(op_LSHIFT_207);
	RzILOpPure *op_AND_209 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_208);
	RzILOpPure *op_NE_210 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_211 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_212 = SHIFTR0(DUP(Rss), op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_213 = LOGAND(op_RSHIFT_212, cast_214);
	RzILOpPure *cast_st16_215 = CAST(16, MSB(DUP(op_AND_213)), op_AND_213);
	RzILOpPure *op_MUL_216 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_217 = SHIFTR0(DUP(Rtt), op_MUL_216);
	RzILOpPure *cast_219 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_218 = LOGAND(op_RSHIFT_217, cast_219);
	RzILOpPure *cast_st16_220 = CAST(16, MSB(DUP(op_AND_218)), op_AND_218);
	RzILOpPure *op_ADD_221 = ADD(cast_st16_215, cast_st16_220);
	RzILOpPure *arg_cast_223 = CAST(64, IL_FALSE, op_ADD_221);
	RzILOpPure *arg_cast_224 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_225 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_228 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_210, VARL("h_tmp2178"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_229 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_230 = SHIFTR0(DUP(Rss), op_MUL_229);
	RzILOpPure *cast_232 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_231 = LOGAND(op_RSHIFT_230, cast_232);
	RzILOpPure *cast_st16_233 = CAST(16, MSB(DUP(op_AND_231)), op_AND_231);
	RzILOpPure *op_MUL_234 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_235 = SHIFTR0(DUP(Rtt), op_MUL_234);
	RzILOpPure *cast_237 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_236 = LOGAND(op_RSHIFT_235, cast_237);
	RzILOpPure *cast_st16_238 = CAST(16, MSB(DUP(op_AND_236)), op_AND_236);
	RzILOpPure *op_ADD_239 = ADD(cast_st16_233, cast_st16_238);
	RzILOpPure *cast_241 = CAST(64, MSB(DUP(op_ADD_239)), op_ADD_239);
	RzILOpPure *op_EQ_240 = EQ(cond_228, cast_241);
	RzILOpPure *op_MUL_242 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_243 = SHIFTR0(DUP(Rss), op_MUL_242);
	RzILOpPure *cast_245 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_244 = LOGAND(op_RSHIFT_243, cast_245);
	RzILOpPure *cast_st16_246 = CAST(16, MSB(DUP(op_AND_244)), op_AND_244);
	RzILOpPure *op_MUL_247 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_248 = SHIFTR0(DUP(Rtt), op_MUL_247);
	RzILOpPure *cast_250 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_249 = LOGAND(op_RSHIFT_248, cast_250);
	RzILOpPure *cast_st16_251 = CAST(16, MSB(DUP(op_AND_249)), op_AND_249);
	RzILOpPure *op_ADD_252 = ADD(cast_st16_246, cast_st16_251);
	RzILOpPure *arg_cast_263 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_264 = CAST(64, MSB(DUP(VARL("h_tmp2180"))), VARL("h_tmp2180"));
	RzILOpPure *arg_cast_265 = CAST(64, MSB(DUP(VARL("h_tmp2181"))), VARL("h_tmp2181"));
	RzILOpPure *arg_cast_266 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_271 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_270 = ITE(NON_ZERO(VARL("h_tmp2179")), VARL("h_tmp2182"), cast_271);
	RzILOpPure *cast_273 = CAST(32, IL_FALSE, cond_270);
	RzILOpPure *op_MUL_275 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rss), op_MUL_275);
	RzILOpPure *cast_278 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_277 = LOGAND(op_RSHIFT_276, cast_278);
	RzILOpPure *cast_st16_279 = CAST(16, MSB(DUP(op_AND_277)), op_AND_277);
	RzILOpPure *op_MUL_280 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_281 = SHIFTR0(DUP(Rtt), op_MUL_280);
	RzILOpPure *cast_283 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_282 = LOGAND(op_RSHIFT_281, cast_283);
	RzILOpPure *cast_st16_284 = CAST(16, MSB(DUP(op_AND_282)), op_AND_282);
	RzILOpPure *op_ADD_285 = ADD(cast_st16_279, cast_st16_284);
	RzILOpPure *cast_287 = CAST(32, IL_FALSE, op_ADD_285);
	RzILOpPure *op_LT_286 = LET("const_pos0", DUP(const_pos0), ULT(cast_287, VARLP("const_pos0")));
	RzILOpPure *op_SUB_288 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_289 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_288));
	RzILOpPure *op_NEG_290 = NEG(op_LSHIFT_289);
	RzILOpPure *op_SUB_291 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_292 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_291));
	RzILOpPure *cast_294 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_293 = SUB(op_LSHIFT_292, cast_294);
	RzILOpPure *cond_295 = ITE(op_LT_286, op_NEG_290, op_SUB_293);
	RzILOpPure *cast_297 = CAST(64, MSB(DUP(op_ADD_252)), op_ADD_252);
	RzILOpPure *cond_296 = ITE(op_EQ_240, cast_297, cond_295);
	RzILOpPure *cast_299 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_298 = LOGAND(cond_296, cast_299);
	RzILOpPure *cast_ut64_300 = CAST(64, IL_FALSE, op_AND_298);
	RzILOpPure *op_MUL_301 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_302 = SHIFTL0(cast_ut64_300, op_MUL_301);
	RzILOpPure *cast_304 = CAST(64, IL_FALSE, op_AND_209);
	RzILOpPure *op_OR_303 = LOGOR(cast_304, op_LSHIFT_302);
	RzILOpPure *cast_306 = CAST(64, MSB(DUP(op_OR_303)), op_OR_303);
	RzILOpPure *op_MUL_309 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_310 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_309));
	RzILOpPure *op_NOT_311 = LOGNOT(op_LSHIFT_310);
	RzILOpPure *op_AND_312 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_311);
	RzILOpPure *op_NE_313 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_314 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_315 = SHIFTR0(DUP(Rss), op_MUL_314);
	RzILOpPure *cast_317 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_316 = LOGAND(op_RSHIFT_315, cast_317);
	RzILOpPure *cast_st16_318 = CAST(16, MSB(DUP(op_AND_316)), op_AND_316);
	RzILOpPure *op_MUL_319 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_320 = SHIFTR0(DUP(Rtt), op_MUL_319);
	RzILOpPure *cast_322 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_321 = LOGAND(op_RSHIFT_320, cast_322);
	RzILOpPure *cast_st16_323 = CAST(16, MSB(DUP(op_AND_321)), op_AND_321);
	RzILOpPure *op_SUB_324 = SUB(cast_st16_318, cast_st16_323);
	RzILOpPure *arg_cast_326 = CAST(64, IL_FALSE, op_SUB_324);
	RzILOpPure *arg_cast_327 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_328 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_331 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_313, VARL("h_tmp2183"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_332 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_333 = SHIFTR0(DUP(Rss), op_MUL_332);
	RzILOpPure *cast_335 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_334 = LOGAND(op_RSHIFT_333, cast_335);
	RzILOpPure *cast_st16_336 = CAST(16, MSB(DUP(op_AND_334)), op_AND_334);
	RzILOpPure *op_MUL_337 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_338 = SHIFTR0(DUP(Rtt), op_MUL_337);
	RzILOpPure *cast_340 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_339 = LOGAND(op_RSHIFT_338, cast_340);
	RzILOpPure *cast_st16_341 = CAST(16, MSB(DUP(op_AND_339)), op_AND_339);
	RzILOpPure *op_SUB_342 = SUB(cast_st16_336, cast_st16_341);
	RzILOpPure *cast_344 = CAST(64, MSB(DUP(op_SUB_342)), op_SUB_342);
	RzILOpPure *op_EQ_343 = EQ(cond_331, cast_344);
	RzILOpPure *op_MUL_345 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_346 = SHIFTR0(DUP(Rss), op_MUL_345);
	RzILOpPure *cast_348 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_347 = LOGAND(op_RSHIFT_346, cast_348);
	RzILOpPure *cast_st16_349 = CAST(16, MSB(DUP(op_AND_347)), op_AND_347);
	RzILOpPure *op_MUL_350 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_351 = SHIFTR0(DUP(Rtt), op_MUL_350);
	RzILOpPure *cast_353 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_352 = LOGAND(op_RSHIFT_351, cast_353);
	RzILOpPure *cast_st16_354 = CAST(16, MSB(DUP(op_AND_352)), op_AND_352);
	RzILOpPure *op_SUB_355 = SUB(cast_st16_349, cast_st16_354);
	RzILOpPure *arg_cast_366 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_367 = CAST(64, MSB(DUP(VARL("h_tmp2185"))), VARL("h_tmp2185"));
	RzILOpPure *arg_cast_368 = CAST(64, MSB(DUP(VARL("h_tmp2186"))), VARL("h_tmp2186"));
	RzILOpPure *arg_cast_369 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_374 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_373 = ITE(NON_ZERO(VARL("h_tmp2184")), VARL("h_tmp2187"), cast_374);
	RzILOpPure *cast_376 = CAST(32, IL_FALSE, cond_373);
	RzILOpPure *op_MUL_378 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_379 = SHIFTR0(DUP(Rss), op_MUL_378);
	RzILOpPure *cast_381 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_380 = LOGAND(op_RSHIFT_379, cast_381);
	RzILOpPure *cast_st16_382 = CAST(16, MSB(DUP(op_AND_380)), op_AND_380);
	RzILOpPure *op_MUL_383 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_384 = SHIFTR0(DUP(Rtt), op_MUL_383);
	RzILOpPure *cast_386 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_385 = LOGAND(op_RSHIFT_384, cast_386);
	RzILOpPure *cast_st16_387 = CAST(16, MSB(DUP(op_AND_385)), op_AND_385);
	RzILOpPure *op_SUB_388 = SUB(cast_st16_382, cast_st16_387);
	RzILOpPure *cast_390 = CAST(32, IL_FALSE, op_SUB_388);
	RzILOpPure *op_LT_389 = LET("const_pos0", DUP(const_pos0), ULT(cast_390, VARLP("const_pos0")));
	RzILOpPure *op_SUB_391 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_392 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_391));
	RzILOpPure *op_NEG_393 = NEG(op_LSHIFT_392);
	RzILOpPure *op_SUB_394 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_395 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_394));
	RzILOpPure *cast_397 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_396 = SUB(op_LSHIFT_395, cast_397);
	RzILOpPure *cond_398 = ITE(op_LT_389, op_NEG_393, op_SUB_396);
	RzILOpPure *cast_400 = CAST(64, MSB(DUP(op_SUB_355)), op_SUB_355);
	RzILOpPure *cond_399 = ITE(op_EQ_343, cast_400, cond_398);
	RzILOpPure *cast_402 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_401 = LOGAND(cond_399, cast_402);
	RzILOpPure *cast_ut64_403 = CAST(64, IL_FALSE, op_AND_401);
	RzILOpPure *op_MUL_404 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_405 = SHIFTL0(cast_ut64_403, op_MUL_404);
	RzILOpPure *cast_407 = CAST(64, IL_FALSE, op_AND_312);
	RzILOpPure *op_OR_406 = LOGOR(cast_407, op_LSHIFT_405);
	RzILOpPure *cast_409 = CAST(64, MSB(DUP(op_OR_406)), op_OR_406);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(arg_cast_17, arg_cast_18, arg_cast_19);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2168", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2169", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2170", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *c_call_53 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2171", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(arg_cast_57, arg_cast_58, arg_cast_59, arg_cast_60);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp2172", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *seq_63 = SEQN(3, seq_52, seq_55, seq_62);
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_67);
	RzILOpEffect *seq_68 = SEQN(3, seq_49, seq_63, op_ASSIGN_66);
	RzILOpEffect *op_ASSIGN_99 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_100);
	RzILOpEffect *seq_101 = SEQN(2, seq_21, op_ASSIGN_99);
	RzILOpEffect *empty_102 = EMPTY();
	RzILOpEffect *c_call_119 = HEX_SEXTRACT64(arg_cast_120, arg_cast_121, arg_cast_122);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp2173", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_119, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *c_call_150 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_151 = SETL("h_tmp2174", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_152 = SEQN(2, c_call_150, op_ASSIGN_hybrid_tmp_151);
	RzILOpEffect *c_call_153 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_154 = SETL("h_tmp2175", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_155 = SEQN(2, c_call_153, op_ASSIGN_hybrid_tmp_154);
	RzILOpEffect *c_call_156 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2176", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *c_call_159 = HEX_DEPOSIT64(arg_cast_160, arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2177", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_159, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *seq_166 = SEQN(3, seq_155, seq_158, seq_165);
	RzILOpEffect *op_ASSIGN_169 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(3, seq_152, seq_166, op_ASSIGN_169);
	RzILOpEffect *op_ASSIGN_202 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_203);
	RzILOpEffect *seq_204 = SEQN(2, seq_124, op_ASSIGN_202);
	RzILOpEffect *empty_205 = EMPTY();
	RzILOpEffect *c_call_222 = HEX_SEXTRACT64(arg_cast_223, arg_cast_224, arg_cast_225);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_226 = SETL("h_tmp2178", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_227 = SEQN(2, c_call_222, op_ASSIGN_hybrid_tmp_226);
	RzILOpEffect *c_call_253 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_254 = SETL("h_tmp2179", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_255 = SEQN(2, c_call_253, op_ASSIGN_hybrid_tmp_254);
	RzILOpEffect *c_call_256 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_257 = SETL("h_tmp2180", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_258 = SEQN(2, c_call_256, op_ASSIGN_hybrid_tmp_257);
	RzILOpEffect *c_call_259 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_260 = SETL("h_tmp2181", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_261 = SEQN(2, c_call_259, op_ASSIGN_hybrid_tmp_260);
	RzILOpEffect *c_call_262 = HEX_DEPOSIT64(arg_cast_263, arg_cast_264, arg_cast_265, arg_cast_266);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_267 = SETL("h_tmp2182", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_268 = SEQN(2, c_call_262, op_ASSIGN_hybrid_tmp_267);
	RzILOpEffect *seq_269 = SEQN(3, seq_258, seq_261, seq_268);
	RzILOpEffect *op_ASSIGN_272 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_273);
	RzILOpEffect *seq_274 = SEQN(3, seq_255, seq_269, op_ASSIGN_272);
	RzILOpEffect *op_ASSIGN_305 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_306);
	RzILOpEffect *seq_307 = SEQN(2, seq_227, op_ASSIGN_305);
	RzILOpEffect *empty_308 = EMPTY();
	RzILOpEffect *c_call_325 = HEX_SEXTRACT64(arg_cast_326, arg_cast_327, arg_cast_328);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_329 = SETL("h_tmp2183", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_330 = SEQN(2, c_call_325, op_ASSIGN_hybrid_tmp_329);
	RzILOpEffect *c_call_356 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_357 = SETL("h_tmp2184", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_358 = SEQN(2, c_call_356, op_ASSIGN_hybrid_tmp_357);
	RzILOpEffect *c_call_359 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_360 = SETL("h_tmp2185", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_361 = SEQN(2, c_call_359, op_ASSIGN_hybrid_tmp_360);
	RzILOpEffect *c_call_362 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_363 = SETL("h_tmp2186", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_364 = SEQN(2, c_call_362, op_ASSIGN_hybrid_tmp_363);
	RzILOpEffect *c_call_365 = HEX_DEPOSIT64(arg_cast_366, arg_cast_367, arg_cast_368, arg_cast_369);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_370 = SETL("h_tmp2187", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_371 = SEQN(2, c_call_365, op_ASSIGN_hybrid_tmp_370);
	RzILOpEffect *seq_372 = SEQN(3, seq_361, seq_364, seq_371);
	RzILOpEffect *op_ASSIGN_375 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_376);
	RzILOpEffect *seq_377 = SEQN(3, seq_358, seq_372, op_ASSIGN_375);
	RzILOpEffect *op_ASSIGN_408 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_409);
	RzILOpEffect *seq_410 = SEQN(2, seq_330, op_ASSIGN_408);
	RzILOpEffect *empty_411 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_101, empty_102, seq_204, empty_205, seq_307, empty_308, seq_410, empty_411, seq_68, seq_171, seq_274, seq_377);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2188;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2189;
	// Declare: ut32 h_tmp2190;
	// Declare: ut32 h_tmp2191;
	// Declare: ut64 h_tmp2192;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2193;
	// Declare: ut32 h_tmp2194;
	// Declare: ut32 h_tmp2195;
	// Declare: ut32 h_tmp2196;
	// Declare: ut64 h_tmp2197;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2198;
	// Declare: ut32 h_tmp2199;
	// Declare: ut32 h_tmp2200;
	// Declare: ut32 h_tmp2201;
	// Declare: ut64 h_tmp2202;
	// Declare: st64 h_tmp2203;
	// Declare: ut32 h_tmp2204;
	// Declare: ut32 h_tmp2205;
	// Declare: ut32 h_tmp2206;
	// Declare: ut64 h_tmp2207;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st16_14 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *op_ADD_15 = ADD(cast_st16_9, cast_st16_14);
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_ADD_15);
	RzILOpPure *op_ADD_16 = LET("const_pos1", DUP(const_pos1), ADD(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, op_RSHIFT_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2188"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_26 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_30, cast_st16_35);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, op_ADD_36);
	RzILOpPure *op_ADD_37 = LET("const_pos1", DUP(const_pos1), ADD(cast_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_39 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_37, VARLP("const_pos1")));
	RzILOpPure *cast_41 = CAST(64, MSB(DUP(op_RSHIFT_39)), op_RSHIFT_39);
	RzILOpPure *op_EQ_40 = EQ(cond_25, cast_41);
	RzILOpPure *op_MUL_42 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *op_MUL_47 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_50 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_49 = LOGAND(op_RSHIFT_48, cast_50);
	RzILOpPure *cast_st16_51 = CAST(16, MSB(DUP(op_AND_49)), op_AND_49);
	RzILOpPure *op_ADD_52 = ADD(cast_st16_46, cast_st16_51);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, op_ADD_52);
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(cast_54, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_55 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_53, VARLP("const_pos1")));
	RzILOpPure *arg_cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_67 = CAST(64, MSB(DUP(VARL("h_tmp2190"))), VARL("h_tmp2190"));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp2191"))), VARL("h_tmp2191"));
	RzILOpPure *arg_cast_69 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_73 = ITE(NON_ZERO(VARL("h_tmp2189")), VARL("h_tmp2192"), cast_74);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, cond_73);
	RzILOpPure *op_MUL_78 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *cast_81 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_80 = LOGAND(op_RSHIFT_79, cast_81);
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_80)), op_AND_80);
	RzILOpPure *op_MUL_83 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *cast_86 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_85 = LOGAND(op_RSHIFT_84, cast_86);
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *op_ADD_88 = ADD(cast_st16_82, cast_st16_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, op_ADD_88);
	RzILOpPure *op_ADD_89 = LET("const_pos1", DUP(const_pos1), ADD(cast_90, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_91 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_89, VARLP("const_pos1")));
	RzILOpPure *op_LT_92 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_91, VARLP("const_pos0")));
	RzILOpPure *op_SUB_93 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_94 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_93));
	RzILOpPure *op_NEG_95 = NEG(op_LSHIFT_94);
	RzILOpPure *op_SUB_96 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_97 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_96));
	RzILOpPure *cast_99 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_98 = SUB(op_LSHIFT_97, cast_99);
	RzILOpPure *cond_100 = ITE(op_LT_92, op_NEG_95, op_SUB_98);
	RzILOpPure *cast_102 = CAST(64, MSB(DUP(op_RSHIFT_55)), op_RSHIFT_55);
	RzILOpPure *cond_101 = ITE(op_EQ_40, cast_102, cond_100);
	RzILOpPure *cast_104 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_103 = LOGAND(cond_101, cast_104);
	RzILOpPure *cast_ut64_105 = CAST(64, IL_FALSE, op_AND_103);
	RzILOpPure *op_MUL_106 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_107 = SHIFTL0(cast_ut64_105, op_MUL_106);
	RzILOpPure *cast_109 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_108 = LOGOR(cast_109, op_LSHIFT_107);
	RzILOpPure *cast_111 = CAST(64, MSB(DUP(op_OR_108)), op_OR_108);
	RzILOpPure *op_MUL_114 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_115 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_114));
	RzILOpPure *op_NOT_116 = LOGNOT(op_LSHIFT_115);
	RzILOpPure *op_AND_117 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_116);
	RzILOpPure *op_NE_118 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_119 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_MUL_124 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_127 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_st16_128 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_123, cast_st16_128);
	RzILOpPure *cast_131 = CAST(32, IL_FALSE, op_SUB_129);
	RzILOpPure *op_ADD_130 = LET("const_pos1", DUP(const_pos1), ADD(cast_131, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_132 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_139 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_118, VARL("h_tmp2193"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_140 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_140);
	RzILOpPure *cast_143 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st16_144 = CAST(16, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *op_MUL_145 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_146 = SHIFTR0(DUP(Rtt), op_MUL_145);
	RzILOpPure *cast_148 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_147 = LOGAND(op_RSHIFT_146, cast_148);
	RzILOpPure *cast_st16_149 = CAST(16, MSB(DUP(op_AND_147)), op_AND_147);
	RzILOpPure *op_SUB_150 = SUB(cast_st16_144, cast_st16_149);
	RzILOpPure *cast_152 = CAST(32, IL_FALSE, op_SUB_150);
	RzILOpPure *op_ADD_151 = LET("const_pos1", DUP(const_pos1), ADD(cast_152, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_153 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_151, VARLP("const_pos1")));
	RzILOpPure *cast_155 = CAST(64, MSB(DUP(op_RSHIFT_153)), op_RSHIFT_153);
	RzILOpPure *op_EQ_154 = EQ(cond_139, cast_155);
	RzILOpPure *op_MUL_156 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_157 = SHIFTR0(DUP(Rss), op_MUL_156);
	RzILOpPure *cast_159 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_158 = LOGAND(op_RSHIFT_157, cast_159);
	RzILOpPure *cast_st16_160 = CAST(16, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *op_MUL_161 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_162 = SHIFTR0(DUP(Rtt), op_MUL_161);
	RzILOpPure *cast_164 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_163 = LOGAND(op_RSHIFT_162, cast_164);
	RzILOpPure *cast_st16_165 = CAST(16, MSB(DUP(op_AND_163)), op_AND_163);
	RzILOpPure *op_SUB_166 = SUB(cast_st16_160, cast_st16_165);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, op_SUB_166);
	RzILOpPure *op_ADD_167 = LET("const_pos1", DUP(const_pos1), ADD(cast_168, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_169 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_167, VARLP("const_pos1")));
	RzILOpPure *arg_cast_180 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_181 = CAST(64, MSB(DUP(VARL("h_tmp2195"))), VARL("h_tmp2195"));
	RzILOpPure *arg_cast_182 = CAST(64, MSB(DUP(VARL("h_tmp2196"))), VARL("h_tmp2196"));
	RzILOpPure *arg_cast_183 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_188 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_187 = ITE(NON_ZERO(VARL("h_tmp2194")), VARL("h_tmp2197"), cast_188);
	RzILOpPure *cast_190 = CAST(32, IL_FALSE, cond_187);
	RzILOpPure *op_MUL_192 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_193 = SHIFTR0(DUP(Rss), op_MUL_192);
	RzILOpPure *cast_195 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_194 = LOGAND(op_RSHIFT_193, cast_195);
	RzILOpPure *cast_st16_196 = CAST(16, MSB(DUP(op_AND_194)), op_AND_194);
	RzILOpPure *op_MUL_197 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_198 = SHIFTR0(DUP(Rtt), op_MUL_197);
	RzILOpPure *cast_200 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_199 = LOGAND(op_RSHIFT_198, cast_200);
	RzILOpPure *cast_st16_201 = CAST(16, MSB(DUP(op_AND_199)), op_AND_199);
	RzILOpPure *op_SUB_202 = SUB(cast_st16_196, cast_st16_201);
	RzILOpPure *cast_204 = CAST(32, IL_FALSE, op_SUB_202);
	RzILOpPure *op_ADD_203 = LET("const_pos1", DUP(const_pos1), ADD(cast_204, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_203, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *cast_213 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_212 = SUB(op_LSHIFT_211, cast_213);
	RzILOpPure *cond_214 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cast_216 = CAST(64, MSB(DUP(op_RSHIFT_169)), op_RSHIFT_169);
	RzILOpPure *cond_215 = ITE(op_EQ_154, cast_216, cond_214);
	RzILOpPure *cast_218 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_217 = LOGAND(cond_215, cast_218);
	RzILOpPure *cast_ut64_219 = CAST(64, IL_FALSE, op_AND_217);
	RzILOpPure *op_MUL_220 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_221 = SHIFTL0(cast_ut64_219, op_MUL_220);
	RzILOpPure *cast_223 = CAST(64, IL_FALSE, op_AND_117);
	RzILOpPure *op_OR_222 = LOGOR(cast_223, op_LSHIFT_221);
	RzILOpPure *cast_225 = CAST(64, MSB(DUP(op_OR_222)), op_OR_222);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_229 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_228));
	RzILOpPure *op_NOT_230 = LOGNOT(op_LSHIFT_229);
	RzILOpPure *op_AND_231 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_230);
	RzILOpPure *op_NE_232 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_233 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_234 = SHIFTR0(DUP(Rss), op_MUL_233);
	RzILOpPure *cast_236 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_235 = LOGAND(op_RSHIFT_234, cast_236);
	RzILOpPure *cast_st16_237 = CAST(16, MSB(DUP(op_AND_235)), op_AND_235);
	RzILOpPure *op_MUL_238 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_239 = SHIFTR0(DUP(Rtt), op_MUL_238);
	RzILOpPure *cast_241 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_240 = LOGAND(op_RSHIFT_239, cast_241);
	RzILOpPure *cast_st16_242 = CAST(16, MSB(DUP(op_AND_240)), op_AND_240);
	RzILOpPure *op_ADD_243 = ADD(cast_st16_237, cast_st16_242);
	RzILOpPure *cast_245 = CAST(32, IL_FALSE, op_ADD_243);
	RzILOpPure *op_ADD_244 = LET("const_pos1", DUP(const_pos1), ADD(cast_245, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_246 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_244, VARLP("const_pos1")));
	RzILOpPure *arg_cast_248 = CAST(64, IL_FALSE, op_RSHIFT_246);
	RzILOpPure *arg_cast_249 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_250 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_253 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_232, VARL("h_tmp2198"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_254 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_255 = SHIFTR0(DUP(Rss), op_MUL_254);
	RzILOpPure *cast_257 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_256 = LOGAND(op_RSHIFT_255, cast_257);
	RzILOpPure *cast_st16_258 = CAST(16, MSB(DUP(op_AND_256)), op_AND_256);
	RzILOpPure *op_MUL_259 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_260 = SHIFTR0(DUP(Rtt), op_MUL_259);
	RzILOpPure *cast_262 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_261 = LOGAND(op_RSHIFT_260, cast_262);
	RzILOpPure *cast_st16_263 = CAST(16, MSB(DUP(op_AND_261)), op_AND_261);
	RzILOpPure *op_ADD_264 = ADD(cast_st16_258, cast_st16_263);
	RzILOpPure *cast_266 = CAST(32, IL_FALSE, op_ADD_264);
	RzILOpPure *op_ADD_265 = LET("const_pos1", DUP(const_pos1), ADD(cast_266, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_267 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_265, VARLP("const_pos1")));
	RzILOpPure *cast_269 = CAST(64, MSB(DUP(op_RSHIFT_267)), op_RSHIFT_267);
	RzILOpPure *op_EQ_268 = EQ(cond_253, cast_269);
	RzILOpPure *op_MUL_270 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_271 = SHIFTR0(DUP(Rss), op_MUL_270);
	RzILOpPure *cast_273 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_272 = LOGAND(op_RSHIFT_271, cast_273);
	RzILOpPure *cast_st16_274 = CAST(16, MSB(DUP(op_AND_272)), op_AND_272);
	RzILOpPure *op_MUL_275 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rtt), op_MUL_275);
	RzILOpPure *cast_278 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_277 = LOGAND(op_RSHIFT_276, cast_278);
	RzILOpPure *cast_st16_279 = CAST(16, MSB(DUP(op_AND_277)), op_AND_277);
	RzILOpPure *op_ADD_280 = ADD(cast_st16_274, cast_st16_279);
	RzILOpPure *cast_282 = CAST(32, IL_FALSE, op_ADD_280);
	RzILOpPure *op_ADD_281 = LET("const_pos1", DUP(const_pos1), ADD(cast_282, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_283 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_281, VARLP("const_pos1")));
	RzILOpPure *arg_cast_294 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_295 = CAST(64, MSB(DUP(VARL("h_tmp2200"))), VARL("h_tmp2200"));
	RzILOpPure *arg_cast_296 = CAST(64, MSB(DUP(VARL("h_tmp2201"))), VARL("h_tmp2201"));
	RzILOpPure *arg_cast_297 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_302 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_301 = ITE(NON_ZERO(VARL("h_tmp2199")), VARL("h_tmp2202"), cast_302);
	RzILOpPure *cast_304 = CAST(32, IL_FALSE, cond_301);
	RzILOpPure *op_MUL_306 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_307 = SHIFTR0(DUP(Rss), op_MUL_306);
	RzILOpPure *cast_309 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_308 = LOGAND(op_RSHIFT_307, cast_309);
	RzILOpPure *cast_st16_310 = CAST(16, MSB(DUP(op_AND_308)), op_AND_308);
	RzILOpPure *op_MUL_311 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_312 = SHIFTR0(DUP(Rtt), op_MUL_311);
	RzILOpPure *cast_314 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_313 = LOGAND(op_RSHIFT_312, cast_314);
	RzILOpPure *cast_st16_315 = CAST(16, MSB(DUP(op_AND_313)), op_AND_313);
	RzILOpPure *op_ADD_316 = ADD(cast_st16_310, cast_st16_315);
	RzILOpPure *cast_318 = CAST(32, IL_FALSE, op_ADD_316);
	RzILOpPure *op_ADD_317 = LET("const_pos1", DUP(const_pos1), ADD(cast_318, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_319 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_317, VARLP("const_pos1")));
	RzILOpPure *op_LT_320 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_319, VARLP("const_pos0")));
	RzILOpPure *op_SUB_321 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_322 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_321));
	RzILOpPure *op_NEG_323 = NEG(op_LSHIFT_322);
	RzILOpPure *op_SUB_324 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_325 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_324));
	RzILOpPure *cast_327 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_326 = SUB(op_LSHIFT_325, cast_327);
	RzILOpPure *cond_328 = ITE(op_LT_320, op_NEG_323, op_SUB_326);
	RzILOpPure *cast_330 = CAST(64, MSB(DUP(op_RSHIFT_283)), op_RSHIFT_283);
	RzILOpPure *cond_329 = ITE(op_EQ_268, cast_330, cond_328);
	RzILOpPure *cast_332 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_331 = LOGAND(cond_329, cast_332);
	RzILOpPure *cast_ut64_333 = CAST(64, IL_FALSE, op_AND_331);
	RzILOpPure *op_MUL_334 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_335 = SHIFTL0(cast_ut64_333, op_MUL_334);
	RzILOpPure *cast_337 = CAST(64, IL_FALSE, op_AND_231);
	RzILOpPure *op_OR_336 = LOGOR(cast_337, op_LSHIFT_335);
	RzILOpPure *cast_339 = CAST(64, MSB(DUP(op_OR_336)), op_OR_336);
	RzILOpPure *op_MUL_342 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_343 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_342));
	RzILOpPure *op_NOT_344 = LOGNOT(op_LSHIFT_343);
	RzILOpPure *op_AND_345 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_344);
	RzILOpPure *op_NE_346 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_347 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_348 = SHIFTR0(DUP(Rss), op_MUL_347);
	RzILOpPure *cast_350 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_349 = LOGAND(op_RSHIFT_348, cast_350);
	RzILOpPure *cast_st16_351 = CAST(16, MSB(DUP(op_AND_349)), op_AND_349);
	RzILOpPure *op_MUL_352 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_353 = SHIFTR0(DUP(Rtt), op_MUL_352);
	RzILOpPure *cast_355 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_354 = LOGAND(op_RSHIFT_353, cast_355);
	RzILOpPure *cast_st16_356 = CAST(16, MSB(DUP(op_AND_354)), op_AND_354);
	RzILOpPure *op_SUB_357 = SUB(cast_st16_351, cast_st16_356);
	RzILOpPure *cast_359 = CAST(32, IL_FALSE, op_SUB_357);
	RzILOpPure *op_ADD_358 = LET("const_pos1", DUP(const_pos1), ADD(cast_359, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_360 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_358, VARLP("const_pos1")));
	RzILOpPure *arg_cast_362 = CAST(64, IL_FALSE, op_RSHIFT_360);
	RzILOpPure *arg_cast_363 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_364 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_367 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_346, VARL("h_tmp2203"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_368 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_369 = SHIFTR0(DUP(Rss), op_MUL_368);
	RzILOpPure *cast_371 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_370 = LOGAND(op_RSHIFT_369, cast_371);
	RzILOpPure *cast_st16_372 = CAST(16, MSB(DUP(op_AND_370)), op_AND_370);
	RzILOpPure *op_MUL_373 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_374 = SHIFTR0(DUP(Rtt), op_MUL_373);
	RzILOpPure *cast_376 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_375 = LOGAND(op_RSHIFT_374, cast_376);
	RzILOpPure *cast_st16_377 = CAST(16, MSB(DUP(op_AND_375)), op_AND_375);
	RzILOpPure *op_SUB_378 = SUB(cast_st16_372, cast_st16_377);
	RzILOpPure *cast_380 = CAST(32, IL_FALSE, op_SUB_378);
	RzILOpPure *op_ADD_379 = LET("const_pos1", DUP(const_pos1), ADD(cast_380, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_381 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_379, VARLP("const_pos1")));
	RzILOpPure *cast_383 = CAST(64, MSB(DUP(op_RSHIFT_381)), op_RSHIFT_381);
	RzILOpPure *op_EQ_382 = EQ(cond_367, cast_383);
	RzILOpPure *op_MUL_384 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_385 = SHIFTR0(DUP(Rss), op_MUL_384);
	RzILOpPure *cast_387 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_386 = LOGAND(op_RSHIFT_385, cast_387);
	RzILOpPure *cast_st16_388 = CAST(16, MSB(DUP(op_AND_386)), op_AND_386);
	RzILOpPure *op_MUL_389 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_390 = SHIFTR0(DUP(Rtt), op_MUL_389);
	RzILOpPure *cast_392 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_391 = LOGAND(op_RSHIFT_390, cast_392);
	RzILOpPure *cast_st16_393 = CAST(16, MSB(DUP(op_AND_391)), op_AND_391);
	RzILOpPure *op_SUB_394 = SUB(cast_st16_388, cast_st16_393);
	RzILOpPure *cast_396 = CAST(32, IL_FALSE, op_SUB_394);
	RzILOpPure *op_ADD_395 = LET("const_pos1", DUP(const_pos1), ADD(cast_396, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_397 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_395, VARLP("const_pos1")));
	RzILOpPure *arg_cast_408 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_409 = CAST(64, MSB(DUP(VARL("h_tmp2205"))), VARL("h_tmp2205"));
	RzILOpPure *arg_cast_410 = CAST(64, MSB(DUP(VARL("h_tmp2206"))), VARL("h_tmp2206"));
	RzILOpPure *arg_cast_411 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_416 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_415 = ITE(NON_ZERO(VARL("h_tmp2204")), VARL("h_tmp2207"), cast_416);
	RzILOpPure *cast_418 = CAST(32, IL_FALSE, cond_415);
	RzILOpPure *op_MUL_420 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_421 = SHIFTR0(DUP(Rss), op_MUL_420);
	RzILOpPure *cast_423 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_422 = LOGAND(op_RSHIFT_421, cast_423);
	RzILOpPure *cast_st16_424 = CAST(16, MSB(DUP(op_AND_422)), op_AND_422);
	RzILOpPure *op_MUL_425 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_426 = SHIFTR0(DUP(Rtt), op_MUL_425);
	RzILOpPure *cast_428 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_427 = LOGAND(op_RSHIFT_426, cast_428);
	RzILOpPure *cast_st16_429 = CAST(16, MSB(DUP(op_AND_427)), op_AND_427);
	RzILOpPure *op_SUB_430 = SUB(cast_st16_424, cast_st16_429);
	RzILOpPure *cast_432 = CAST(32, IL_FALSE, op_SUB_430);
	RzILOpPure *op_ADD_431 = LET("const_pos1", DUP(const_pos1), ADD(cast_432, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_433 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_431, VARLP("const_pos1")));
	RzILOpPure *op_LT_434 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_433, VARLP("const_pos0")));
	RzILOpPure *op_SUB_435 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_436 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_435));
	RzILOpPure *op_NEG_437 = NEG(op_LSHIFT_436);
	RzILOpPure *op_SUB_438 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_439 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_438));
	RzILOpPure *cast_441 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_440 = SUB(op_LSHIFT_439, cast_441);
	RzILOpPure *cond_442 = ITE(op_LT_434, op_NEG_437, op_SUB_440);
	RzILOpPure *cast_444 = CAST(64, MSB(DUP(op_RSHIFT_397)), op_RSHIFT_397);
	RzILOpPure *cond_443 = ITE(op_EQ_382, cast_444, cond_442);
	RzILOpPure *cast_446 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_445 = LOGAND(cond_443, cast_446);
	RzILOpPure *cast_ut64_447 = CAST(64, IL_FALSE, op_AND_445);
	RzILOpPure *op_MUL_448 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_449 = SHIFTL0(cast_ut64_447, op_MUL_448);
	RzILOpPure *cast_451 = CAST(64, IL_FALSE, op_AND_345);
	RzILOpPure *op_OR_450 = LOGOR(cast_451, op_LSHIFT_449);
	RzILOpPure *cast_453 = CAST(64, MSB(DUP(op_OR_450)), op_OR_450);

	// WRITE
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2188", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2189", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2190", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp2191", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_DEPOSIT64(arg_cast_66, arg_cast_67, arg_cast_68, arg_cast_69);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp2192", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *seq_72 = SEQN(3, seq_61, seq_64, seq_71);
	RzILOpEffect *op_ASSIGN_75 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(3, seq_58, seq_72, op_ASSIGN_75);
	RzILOpEffect *op_ASSIGN_110 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_111);
	RzILOpEffect *seq_112 = SEQN(2, seq_24, op_ASSIGN_110);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *c_call_133 = HEX_SEXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp2193", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_170 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_171 = SETL("h_tmp2194", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_172 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_171);
	RzILOpEffect *c_call_173 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2195", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_173, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *c_call_176 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp2196", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_179 = HEX_DEPOSIT64(arg_cast_180, arg_cast_181, arg_cast_182, arg_cast_183);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_184 = SETL("h_tmp2197", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_185 = SEQN(2, c_call_179, op_ASSIGN_hybrid_tmp_184);
	RzILOpEffect *seq_186 = SEQN(3, seq_175, seq_178, seq_185);
	RzILOpEffect *op_ASSIGN_189 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_190);
	RzILOpEffect *seq_191 = SEQN(3, seq_172, seq_186, op_ASSIGN_189);
	RzILOpEffect *op_ASSIGN_224 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_225);
	RzILOpEffect *seq_226 = SEQN(2, seq_138, op_ASSIGN_224);
	RzILOpEffect *empty_227 = EMPTY();
	RzILOpEffect *c_call_247 = HEX_SEXTRACT64(arg_cast_248, arg_cast_249, arg_cast_250);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_251 = SETL("h_tmp2198", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_252 = SEQN(2, c_call_247, op_ASSIGN_hybrid_tmp_251);
	RzILOpEffect *c_call_284 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_285 = SETL("h_tmp2199", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_286 = SEQN(2, c_call_284, op_ASSIGN_hybrid_tmp_285);
	RzILOpEffect *c_call_287 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_288 = SETL("h_tmp2200", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_289 = SEQN(2, c_call_287, op_ASSIGN_hybrid_tmp_288);
	RzILOpEffect *c_call_290 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_291 = SETL("h_tmp2201", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_292 = SEQN(2, c_call_290, op_ASSIGN_hybrid_tmp_291);
	RzILOpEffect *c_call_293 = HEX_DEPOSIT64(arg_cast_294, arg_cast_295, arg_cast_296, arg_cast_297);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_298 = SETL("h_tmp2202", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_299 = SEQN(2, c_call_293, op_ASSIGN_hybrid_tmp_298);
	RzILOpEffect *seq_300 = SEQN(3, seq_289, seq_292, seq_299);
	RzILOpEffect *op_ASSIGN_303 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_304);
	RzILOpEffect *seq_305 = SEQN(3, seq_286, seq_300, op_ASSIGN_303);
	RzILOpEffect *op_ASSIGN_338 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_339);
	RzILOpEffect *seq_340 = SEQN(2, seq_252, op_ASSIGN_338);
	RzILOpEffect *empty_341 = EMPTY();
	RzILOpEffect *c_call_361 = HEX_SEXTRACT64(arg_cast_362, arg_cast_363, arg_cast_364);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_365 = SETL("h_tmp2203", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_366 = SEQN(2, c_call_361, op_ASSIGN_hybrid_tmp_365);
	RzILOpEffect *c_call_398 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_399 = SETL("h_tmp2204", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_400 = SEQN(2, c_call_398, op_ASSIGN_hybrid_tmp_399);
	RzILOpEffect *c_call_401 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_402 = SETL("h_tmp2205", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_403 = SEQN(2, c_call_401, op_ASSIGN_hybrid_tmp_402);
	RzILOpEffect *c_call_404 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_405 = SETL("h_tmp2206", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_406 = SEQN(2, c_call_404, op_ASSIGN_hybrid_tmp_405);
	RzILOpEffect *c_call_407 = HEX_DEPOSIT64(arg_cast_408, arg_cast_409, arg_cast_410, arg_cast_411);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_412 = SETL("h_tmp2207", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_413 = SEQN(2, c_call_407, op_ASSIGN_hybrid_tmp_412);
	RzILOpEffect *seq_414 = SEQN(3, seq_403, seq_406, seq_413);
	RzILOpEffect *op_ASSIGN_417 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_418);
	RzILOpEffect *seq_419 = SEQN(3, seq_400, seq_414, op_ASSIGN_417);
	RzILOpEffect *op_ASSIGN_452 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_453);
	RzILOpEffect *seq_454 = SEQN(2, seq_366, op_ASSIGN_452);
	RzILOpEffect *empty_455 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_112, empty_113, seq_226, empty_227, seq_340, empty_341, seq_454, empty_455, seq_77, seq_191, seq_305, seq_419);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2208;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2209;
	// Declare: ut32 h_tmp2210;
	// Declare: ut32 h_tmp2211;
	// Declare: ut64 h_tmp2212;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2213;
	// Declare: ut32 h_tmp2214;
	// Declare: ut32 h_tmp2215;
	// Declare: ut32 h_tmp2216;
	// Declare: ut64 h_tmp2217;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(DUP(cast_st32_8)), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_ADD_15 = ADD(cast_st64_9, cast_st64_14);
	RzILOpPure *arg_cast_17 = CAST(64, IL_FALSE, op_ADD_15);
	RzILOpPure *arg_cast_18 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_19 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2208"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_ADD_33 = ADD(cast_st64_27, cast_st64_32);
	RzILOpPure *op_EQ_34 = EQ(cond_22, op_ADD_33);
	RzILOpPure *op_MUL_35 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(DUP(cast_st32_38)), cast_st32_38);
	RzILOpPure *op_MUL_40 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *op_ADD_45 = ADD(cast_st64_39, cast_st64_44);
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2210"))), VARL("h_tmp2210"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2211"))), VARL("h_tmp2211"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2209")), VARL("h_tmp2212"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *op_MUL_68 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *op_AND_70 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_71 = CAST(32, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_st64_72 = CAST(64, MSB(DUP(cast_st32_71)), cast_st32_71);
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rtt), op_MUL_73);
	RzILOpPure *op_AND_75 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_74, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_76 = CAST(32, MSB(DUP(op_AND_75)), op_AND_75);
	RzILOpPure *cast_st64_77 = CAST(64, MSB(DUP(cast_st32_76)), cast_st32_76);
	RzILOpPure *op_ADD_78 = ADD(cast_st64_72, cast_st64_77);
	RzILOpPure *cast_80 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_79 = SLT(op_ADD_78, cast_80);
	RzILOpPure *op_SUB_81 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *op_NEG_83 = NEG(op_LSHIFT_82);
	RzILOpPure *op_SUB_84 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_84));
	RzILOpPure *cast_87 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_86 = SUB(op_LSHIFT_85, cast_87);
	RzILOpPure *cond_88 = ITE(op_LT_79, op_NEG_83, op_SUB_86);
	RzILOpPure *cond_89 = ITE(op_EQ_34, op_ADD_45, cond_88);
	RzILOpPure *op_AND_90 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_89, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_91 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_92 = SHIFTL0(op_AND_90, op_MUL_91);
	RzILOpPure *op_OR_93 = LOGOR(op_AND_3, op_LSHIFT_92);
	RzILOpPure *op_MUL_97 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_97));
	RzILOpPure *op_NOT_99 = LOGNOT(op_LSHIFT_98);
	RzILOpPure *op_AND_100 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_99);
	RzILOpPure *op_NE_101 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *op_MUL_107 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rtt), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_108, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_110 = CAST(32, MSB(DUP(op_AND_109)), op_AND_109);
	RzILOpPure *cast_st64_111 = CAST(64, MSB(DUP(cast_st32_110)), cast_st32_110);
	RzILOpPure *op_SUB_112 = SUB(cast_st64_106, cast_st64_111);
	RzILOpPure *arg_cast_114 = CAST(64, IL_FALSE, op_SUB_112);
	RzILOpPure *arg_cast_115 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_116 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_119 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_101, VARL("h_tmp2213"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_120 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(DUP(op_AND_122)), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(64, MSB(DUP(cast_st32_123)), cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(op_AND_127)), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_SUB_130 = SUB(cast_st64_124, cast_st64_129);
	RzILOpPure *op_EQ_131 = EQ(cond_119, op_SUB_130);
	RzILOpPure *op_MUL_132 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rss), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_133, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_135 = CAST(32, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *cast_st64_136 = CAST(64, MSB(DUP(cast_st32_135)), cast_st32_135);
	RzILOpPure *op_MUL_137 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rtt), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_138, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_140 = CAST(32, MSB(DUP(op_AND_139)), op_AND_139);
	RzILOpPure *cast_st64_141 = CAST(64, MSB(DUP(cast_st32_140)), cast_st32_140);
	RzILOpPure *op_SUB_142 = SUB(cast_st64_136, cast_st64_141);
	RzILOpPure *arg_cast_153 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_154 = CAST(64, MSB(DUP(VARL("h_tmp2215"))), VARL("h_tmp2215"));
	RzILOpPure *arg_cast_155 = CAST(64, MSB(DUP(VARL("h_tmp2216"))), VARL("h_tmp2216"));
	RzILOpPure *arg_cast_156 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_161 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_160 = ITE(NON_ZERO(VARL("h_tmp2214")), VARL("h_tmp2217"), cast_161);
	RzILOpPure *cast_163 = CAST(32, IL_FALSE, cond_160);
	RzILOpPure *op_MUL_165 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_166 = SHIFTR0(DUP(Rss), op_MUL_165);
	RzILOpPure *op_AND_167 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_166, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_168 = CAST(32, MSB(DUP(op_AND_167)), op_AND_167);
	RzILOpPure *cast_st64_169 = CAST(64, MSB(DUP(cast_st32_168)), cast_st32_168);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *op_SUB_175 = SUB(cast_st64_169, cast_st64_174);
	RzILOpPure *cast_177 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_176 = SLT(op_SUB_175, cast_177);
	RzILOpPure *op_SUB_178 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_179 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_178));
	RzILOpPure *op_NEG_180 = NEG(op_LSHIFT_179);
	RzILOpPure *op_SUB_181 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *cast_184 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_183 = SUB(op_LSHIFT_182, cast_184);
	RzILOpPure *cond_185 = ITE(op_LT_176, op_NEG_180, op_SUB_183);
	RzILOpPure *cond_186 = ITE(op_EQ_131, op_SUB_142, cond_185);
	RzILOpPure *op_AND_187 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_186, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_188 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_189 = SHIFTL0(op_AND_187, op_MUL_188);
	RzILOpPure *op_OR_190 = LOGOR(op_AND_100, op_LSHIFT_189);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(arg_cast_17, arg_cast_18, arg_cast_19);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2208", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2209", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2210", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2211", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2212", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_94 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_93);
	RzILOpEffect *seq_95 = SEQN(2, seq_21, op_ASSIGN_94);
	RzILOpEffect *empty_96 = EMPTY();
	RzILOpEffect *c_call_113 = HEX_SEXTRACT64(arg_cast_114, arg_cast_115, arg_cast_116);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_117 = SETL("h_tmp2213", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_118 = SEQN(2, c_call_113, op_ASSIGN_hybrid_tmp_117);
	RzILOpEffect *c_call_143 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_144 = SETL("h_tmp2214", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_145 = SEQN(2, c_call_143, op_ASSIGN_hybrid_tmp_144);
	RzILOpEffect *c_call_146 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_147 = SETL("h_tmp2215", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_148 = SEQN(2, c_call_146, op_ASSIGN_hybrid_tmp_147);
	RzILOpEffect *c_call_149 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_150 = SETL("h_tmp2216", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_151 = SEQN(2, c_call_149, op_ASSIGN_hybrid_tmp_150);
	RzILOpEffect *c_call_152 = HEX_DEPOSIT64(arg_cast_153, arg_cast_154, arg_cast_155, arg_cast_156);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2217", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_152, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *seq_159 = SEQN(3, seq_148, seq_151, seq_158);
	RzILOpEffect *op_ASSIGN_162 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_163);
	RzILOpEffect *seq_164 = SEQN(3, seq_145, seq_159, op_ASSIGN_162);
	RzILOpEffect *op_ASSIGN_191 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_190);
	RzILOpEffect *seq_192 = SEQN(2, seq_118, op_ASSIGN_191);
	RzILOpEffect *empty_193 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, seq_95, empty_96, seq_192, empty_193, seq_67, seq_164);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2218;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2219;
	// Declare: ut32 h_tmp2220;
	// Declare: ut32 h_tmp2221;
	// Declare: ut64 h_tmp2222;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2223;
	// Declare: ut32 h_tmp2224;
	// Declare: ut32 h_tmp2225;
	// Declare: ut32 h_tmp2226;
	// Declare: ut64 h_tmp2227;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2228;
	// Declare: ut32 h_tmp2229;
	// Declare: ut32 h_tmp2230;
	// Declare: ut32 h_tmp2231;
	// Declare: ut64 h_tmp2232;
	// Declare: st64 h_tmp2233;
	// Declare: ut32 h_tmp2234;
	// Declare: ut32 h_tmp2235;
	// Declare: ut32 h_tmp2236;
	// Declare: ut64 h_tmp2237;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st16_14 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *op_SUB_15 = SUB(cast_st16_9, cast_st16_14);
	RzILOpPure *arg_cast_17 = CAST(64, IL_FALSE, op_SUB_15);
	RzILOpPure *arg_cast_18 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_19 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2218"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *cast_26 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_25 = LOGAND(op_RSHIFT_24, cast_26);
	RzILOpPure *cast_st16_27 = CAST(16, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_31 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st16_32 = CAST(16, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *op_SUB_33 = SUB(cast_st16_27, cast_st16_32);
	RzILOpPure *cast_35 = CAST(64, MSB(DUP(op_SUB_33)), op_SUB_33);
	RzILOpPure *op_EQ_34 = EQ(cond_22, cast_35);
	RzILOpPure *op_MUL_36 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *cast_39 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_38 = LOGAND(op_RSHIFT_37, cast_39);
	RzILOpPure *cast_st16_40 = CAST(16, MSB(DUP(op_AND_38)), op_AND_38);
	RzILOpPure *op_MUL_41 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_42 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_44 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_43 = LOGAND(op_RSHIFT_42, cast_44);
	RzILOpPure *cast_st16_45 = CAST(16, MSB(DUP(op_AND_43)), op_AND_43);
	RzILOpPure *op_SUB_46 = SUB(cast_st16_40, cast_st16_45);
	RzILOpPure *arg_cast_57 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2220"))), VARL("h_tmp2220"));
	RzILOpPure *arg_cast_59 = CAST(64, MSB(DUP(VARL("h_tmp2221"))), VARL("h_tmp2221"));
	RzILOpPure *arg_cast_60 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_65 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_64 = ITE(NON_ZERO(VARL("h_tmp2219")), VARL("h_tmp2222"), cast_65);
	RzILOpPure *cast_67 = CAST(32, IL_FALSE, cond_64);
	RzILOpPure *op_MUL_69 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_70 = SHIFTR0(DUP(Rss), op_MUL_69);
	RzILOpPure *cast_72 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_71 = LOGAND(op_RSHIFT_70, cast_72);
	RzILOpPure *cast_st16_73 = CAST(16, MSB(DUP(op_AND_71)), op_AND_71);
	RzILOpPure *op_MUL_74 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_75 = SHIFTR0(DUP(Rtt), op_MUL_74);
	RzILOpPure *cast_77 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_76 = LOGAND(op_RSHIFT_75, cast_77);
	RzILOpPure *cast_st16_78 = CAST(16, MSB(DUP(op_AND_76)), op_AND_76);
	RzILOpPure *op_SUB_79 = SUB(cast_st16_73, cast_st16_78);
	RzILOpPure *cast_81 = CAST(32, IL_FALSE, op_SUB_79);
	RzILOpPure *op_LT_80 = LET("const_pos0", DUP(const_pos0), ULT(cast_81, VARLP("const_pos0")));
	RzILOpPure *op_SUB_82 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_83 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_82));
	RzILOpPure *op_NEG_84 = NEG(op_LSHIFT_83);
	RzILOpPure *op_SUB_85 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_86 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_85));
	RzILOpPure *cast_88 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_87 = SUB(op_LSHIFT_86, cast_88);
	RzILOpPure *cond_89 = ITE(op_LT_80, op_NEG_84, op_SUB_87);
	RzILOpPure *cast_91 = CAST(64, MSB(DUP(op_SUB_46)), op_SUB_46);
	RzILOpPure *cond_90 = ITE(op_EQ_34, cast_91, cond_89);
	RzILOpPure *cast_93 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_92 = LOGAND(cond_90, cast_93);
	RzILOpPure *cast_ut64_94 = CAST(64, IL_FALSE, op_AND_92);
	RzILOpPure *op_MUL_95 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_96 = SHIFTL0(cast_ut64_94, op_MUL_95);
	RzILOpPure *cast_98 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_97 = LOGOR(cast_98, op_LSHIFT_96);
	RzILOpPure *cast_100 = CAST(64, MSB(DUP(op_OR_97)), op_OR_97);
	RzILOpPure *op_MUL_103 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_104 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_103));
	RzILOpPure *op_NOT_105 = LOGNOT(op_LSHIFT_104);
	RzILOpPure *op_AND_106 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_105);
	RzILOpPure *op_NE_107 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_108 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *cast_111 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_st16_112 = CAST(16, MSB(DUP(op_AND_110)), op_AND_110);
	RzILOpPure *op_MUL_113 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st16_117 = CAST(16, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *op_ADD_118 = ADD(cast_st16_112, cast_st16_117);
	RzILOpPure *arg_cast_120 = CAST(64, IL_FALSE, op_ADD_118);
	RzILOpPure *arg_cast_121 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_122 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_125 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_107, VARL("h_tmp2223"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_126 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_127 = SHIFTR0(DUP(Rss), op_MUL_126);
	RzILOpPure *cast_129 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_128 = LOGAND(op_RSHIFT_127, cast_129);
	RzILOpPure *cast_st16_130 = CAST(16, MSB(DUP(op_AND_128)), op_AND_128);
	RzILOpPure *op_MUL_131 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rtt), op_MUL_131);
	RzILOpPure *cast_134 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_133 = LOGAND(op_RSHIFT_132, cast_134);
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *op_ADD_136 = ADD(cast_st16_130, cast_st16_135);
	RzILOpPure *cast_138 = CAST(64, MSB(DUP(op_ADD_136)), op_ADD_136);
	RzILOpPure *op_EQ_137 = EQ(cond_125, cast_138);
	RzILOpPure *op_MUL_139 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st16_143 = CAST(16, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *op_MUL_144 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_145 = SHIFTR0(DUP(Rtt), op_MUL_144);
	RzILOpPure *cast_147 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_146 = LOGAND(op_RSHIFT_145, cast_147);
	RzILOpPure *cast_st16_148 = CAST(16, MSB(DUP(op_AND_146)), op_AND_146);
	RzILOpPure *op_ADD_149 = ADD(cast_st16_143, cast_st16_148);
	RzILOpPure *arg_cast_160 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_161 = CAST(64, MSB(DUP(VARL("h_tmp2225"))), VARL("h_tmp2225"));
	RzILOpPure *arg_cast_162 = CAST(64, MSB(DUP(VARL("h_tmp2226"))), VARL("h_tmp2226"));
	RzILOpPure *arg_cast_163 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_168 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_167 = ITE(NON_ZERO(VARL("h_tmp2224")), VARL("h_tmp2227"), cast_168);
	RzILOpPure *cast_170 = CAST(32, IL_FALSE, cond_167);
	RzILOpPure *op_MUL_172 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_173 = SHIFTR0(DUP(Rss), op_MUL_172);
	RzILOpPure *cast_175 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_174 = LOGAND(op_RSHIFT_173, cast_175);
	RzILOpPure *cast_st16_176 = CAST(16, MSB(DUP(op_AND_174)), op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *cast_180 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_179 = LOGAND(op_RSHIFT_178, cast_180);
	RzILOpPure *cast_st16_181 = CAST(16, MSB(DUP(op_AND_179)), op_AND_179);
	RzILOpPure *op_ADD_182 = ADD(cast_st16_176, cast_st16_181);
	RzILOpPure *cast_184 = CAST(32, IL_FALSE, op_ADD_182);
	RzILOpPure *op_LT_183 = LET("const_pos0", DUP(const_pos0), ULT(cast_184, VARLP("const_pos0")));
	RzILOpPure *op_SUB_185 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_186 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_185));
	RzILOpPure *op_NEG_187 = NEG(op_LSHIFT_186);
	RzILOpPure *op_SUB_188 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_189 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_188));
	RzILOpPure *cast_191 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_190 = SUB(op_LSHIFT_189, cast_191);
	RzILOpPure *cond_192 = ITE(op_LT_183, op_NEG_187, op_SUB_190);
	RzILOpPure *cast_194 = CAST(64, MSB(DUP(op_ADD_149)), op_ADD_149);
	RzILOpPure *cond_193 = ITE(op_EQ_137, cast_194, cond_192);
	RzILOpPure *cast_196 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_195 = LOGAND(cond_193, cast_196);
	RzILOpPure *cast_ut64_197 = CAST(64, IL_FALSE, op_AND_195);
	RzILOpPure *op_MUL_198 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_199 = SHIFTL0(cast_ut64_197, op_MUL_198);
	RzILOpPure *cast_201 = CAST(64, IL_FALSE, op_AND_106);
	RzILOpPure *op_OR_200 = LOGOR(cast_201, op_LSHIFT_199);
	RzILOpPure *cast_203 = CAST(64, MSB(DUP(op_OR_200)), op_OR_200);
	RzILOpPure *op_MUL_206 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_207 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_206));
	RzILOpPure *op_NOT_208 = LOGNOT(op_LSHIFT_207);
	RzILOpPure *op_AND_209 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_208);
	RzILOpPure *op_NE_210 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_211 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_212 = SHIFTR0(DUP(Rss), op_MUL_211);
	RzILOpPure *cast_214 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_213 = LOGAND(op_RSHIFT_212, cast_214);
	RzILOpPure *cast_st16_215 = CAST(16, MSB(DUP(op_AND_213)), op_AND_213);
	RzILOpPure *op_MUL_216 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_217 = SHIFTR0(DUP(Rtt), op_MUL_216);
	RzILOpPure *cast_219 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_218 = LOGAND(op_RSHIFT_217, cast_219);
	RzILOpPure *cast_st16_220 = CAST(16, MSB(DUP(op_AND_218)), op_AND_218);
	RzILOpPure *op_SUB_221 = SUB(cast_st16_215, cast_st16_220);
	RzILOpPure *arg_cast_223 = CAST(64, IL_FALSE, op_SUB_221);
	RzILOpPure *arg_cast_224 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_225 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_228 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_210, VARL("h_tmp2228"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_229 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_230 = SHIFTR0(DUP(Rss), op_MUL_229);
	RzILOpPure *cast_232 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_231 = LOGAND(op_RSHIFT_230, cast_232);
	RzILOpPure *cast_st16_233 = CAST(16, MSB(DUP(op_AND_231)), op_AND_231);
	RzILOpPure *op_MUL_234 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_235 = SHIFTR0(DUP(Rtt), op_MUL_234);
	RzILOpPure *cast_237 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_236 = LOGAND(op_RSHIFT_235, cast_237);
	RzILOpPure *cast_st16_238 = CAST(16, MSB(DUP(op_AND_236)), op_AND_236);
	RzILOpPure *op_SUB_239 = SUB(cast_st16_233, cast_st16_238);
	RzILOpPure *cast_241 = CAST(64, MSB(DUP(op_SUB_239)), op_SUB_239);
	RzILOpPure *op_EQ_240 = EQ(cond_228, cast_241);
	RzILOpPure *op_MUL_242 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_243 = SHIFTR0(DUP(Rss), op_MUL_242);
	RzILOpPure *cast_245 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_244 = LOGAND(op_RSHIFT_243, cast_245);
	RzILOpPure *cast_st16_246 = CAST(16, MSB(DUP(op_AND_244)), op_AND_244);
	RzILOpPure *op_MUL_247 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_248 = SHIFTR0(DUP(Rtt), op_MUL_247);
	RzILOpPure *cast_250 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_249 = LOGAND(op_RSHIFT_248, cast_250);
	RzILOpPure *cast_st16_251 = CAST(16, MSB(DUP(op_AND_249)), op_AND_249);
	RzILOpPure *op_SUB_252 = SUB(cast_st16_246, cast_st16_251);
	RzILOpPure *arg_cast_263 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_264 = CAST(64, MSB(DUP(VARL("h_tmp2230"))), VARL("h_tmp2230"));
	RzILOpPure *arg_cast_265 = CAST(64, MSB(DUP(VARL("h_tmp2231"))), VARL("h_tmp2231"));
	RzILOpPure *arg_cast_266 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_271 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_270 = ITE(NON_ZERO(VARL("h_tmp2229")), VARL("h_tmp2232"), cast_271);
	RzILOpPure *cast_273 = CAST(32, IL_FALSE, cond_270);
	RzILOpPure *op_MUL_275 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rss), op_MUL_275);
	RzILOpPure *cast_278 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_277 = LOGAND(op_RSHIFT_276, cast_278);
	RzILOpPure *cast_st16_279 = CAST(16, MSB(DUP(op_AND_277)), op_AND_277);
	RzILOpPure *op_MUL_280 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_281 = SHIFTR0(DUP(Rtt), op_MUL_280);
	RzILOpPure *cast_283 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_282 = LOGAND(op_RSHIFT_281, cast_283);
	RzILOpPure *cast_st16_284 = CAST(16, MSB(DUP(op_AND_282)), op_AND_282);
	RzILOpPure *op_SUB_285 = SUB(cast_st16_279, cast_st16_284);
	RzILOpPure *cast_287 = CAST(32, IL_FALSE, op_SUB_285);
	RzILOpPure *op_LT_286 = LET("const_pos0", DUP(const_pos0), ULT(cast_287, VARLP("const_pos0")));
	RzILOpPure *op_SUB_288 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_289 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_288));
	RzILOpPure *op_NEG_290 = NEG(op_LSHIFT_289);
	RzILOpPure *op_SUB_291 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_292 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_291));
	RzILOpPure *cast_294 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_293 = SUB(op_LSHIFT_292, cast_294);
	RzILOpPure *cond_295 = ITE(op_LT_286, op_NEG_290, op_SUB_293);
	RzILOpPure *cast_297 = CAST(64, MSB(DUP(op_SUB_252)), op_SUB_252);
	RzILOpPure *cond_296 = ITE(op_EQ_240, cast_297, cond_295);
	RzILOpPure *cast_299 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_298 = LOGAND(cond_296, cast_299);
	RzILOpPure *cast_ut64_300 = CAST(64, IL_FALSE, op_AND_298);
	RzILOpPure *op_MUL_301 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_302 = SHIFTL0(cast_ut64_300, op_MUL_301);
	RzILOpPure *cast_304 = CAST(64, IL_FALSE, op_AND_209);
	RzILOpPure *op_OR_303 = LOGOR(cast_304, op_LSHIFT_302);
	RzILOpPure *cast_306 = CAST(64, MSB(DUP(op_OR_303)), op_OR_303);
	RzILOpPure *op_MUL_309 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_310 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_309));
	RzILOpPure *op_NOT_311 = LOGNOT(op_LSHIFT_310);
	RzILOpPure *op_AND_312 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_311);
	RzILOpPure *op_NE_313 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_314 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_315 = SHIFTR0(DUP(Rss), op_MUL_314);
	RzILOpPure *cast_317 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_316 = LOGAND(op_RSHIFT_315, cast_317);
	RzILOpPure *cast_st16_318 = CAST(16, MSB(DUP(op_AND_316)), op_AND_316);
	RzILOpPure *op_MUL_319 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_320 = SHIFTR0(DUP(Rtt), op_MUL_319);
	RzILOpPure *cast_322 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_321 = LOGAND(op_RSHIFT_320, cast_322);
	RzILOpPure *cast_st16_323 = CAST(16, MSB(DUP(op_AND_321)), op_AND_321);
	RzILOpPure *op_ADD_324 = ADD(cast_st16_318, cast_st16_323);
	RzILOpPure *arg_cast_326 = CAST(64, IL_FALSE, op_ADD_324);
	RzILOpPure *arg_cast_327 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_328 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_331 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_313, VARL("h_tmp2233"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_332 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_333 = SHIFTR0(DUP(Rss), op_MUL_332);
	RzILOpPure *cast_335 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_334 = LOGAND(op_RSHIFT_333, cast_335);
	RzILOpPure *cast_st16_336 = CAST(16, MSB(DUP(op_AND_334)), op_AND_334);
	RzILOpPure *op_MUL_337 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_338 = SHIFTR0(DUP(Rtt), op_MUL_337);
	RzILOpPure *cast_340 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_339 = LOGAND(op_RSHIFT_338, cast_340);
	RzILOpPure *cast_st16_341 = CAST(16, MSB(DUP(op_AND_339)), op_AND_339);
	RzILOpPure *op_ADD_342 = ADD(cast_st16_336, cast_st16_341);
	RzILOpPure *cast_344 = CAST(64, MSB(DUP(op_ADD_342)), op_ADD_342);
	RzILOpPure *op_EQ_343 = EQ(cond_331, cast_344);
	RzILOpPure *op_MUL_345 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_346 = SHIFTR0(DUP(Rss), op_MUL_345);
	RzILOpPure *cast_348 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_347 = LOGAND(op_RSHIFT_346, cast_348);
	RzILOpPure *cast_st16_349 = CAST(16, MSB(DUP(op_AND_347)), op_AND_347);
	RzILOpPure *op_MUL_350 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_351 = SHIFTR0(DUP(Rtt), op_MUL_350);
	RzILOpPure *cast_353 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_352 = LOGAND(op_RSHIFT_351, cast_353);
	RzILOpPure *cast_st16_354 = CAST(16, MSB(DUP(op_AND_352)), op_AND_352);
	RzILOpPure *op_ADD_355 = ADD(cast_st16_349, cast_st16_354);
	RzILOpPure *arg_cast_366 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_367 = CAST(64, MSB(DUP(VARL("h_tmp2235"))), VARL("h_tmp2235"));
	RzILOpPure *arg_cast_368 = CAST(64, MSB(DUP(VARL("h_tmp2236"))), VARL("h_tmp2236"));
	RzILOpPure *arg_cast_369 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_374 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_373 = ITE(NON_ZERO(VARL("h_tmp2234")), VARL("h_tmp2237"), cast_374);
	RzILOpPure *cast_376 = CAST(32, IL_FALSE, cond_373);
	RzILOpPure *op_MUL_378 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_379 = SHIFTR0(DUP(Rss), op_MUL_378);
	RzILOpPure *cast_381 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_380 = LOGAND(op_RSHIFT_379, cast_381);
	RzILOpPure *cast_st16_382 = CAST(16, MSB(DUP(op_AND_380)), op_AND_380);
	RzILOpPure *op_MUL_383 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_384 = SHIFTR0(DUP(Rtt), op_MUL_383);
	RzILOpPure *cast_386 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_385 = LOGAND(op_RSHIFT_384, cast_386);
	RzILOpPure *cast_st16_387 = CAST(16, MSB(DUP(op_AND_385)), op_AND_385);
	RzILOpPure *op_ADD_388 = ADD(cast_st16_382, cast_st16_387);
	RzILOpPure *cast_390 = CAST(32, IL_FALSE, op_ADD_388);
	RzILOpPure *op_LT_389 = LET("const_pos0", DUP(const_pos0), ULT(cast_390, VARLP("const_pos0")));
	RzILOpPure *op_SUB_391 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_392 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_391));
	RzILOpPure *op_NEG_393 = NEG(op_LSHIFT_392);
	RzILOpPure *op_SUB_394 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_395 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_394));
	RzILOpPure *cast_397 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_396 = SUB(op_LSHIFT_395, cast_397);
	RzILOpPure *cond_398 = ITE(op_LT_389, op_NEG_393, op_SUB_396);
	RzILOpPure *cast_400 = CAST(64, MSB(DUP(op_ADD_355)), op_ADD_355);
	RzILOpPure *cond_399 = ITE(op_EQ_343, cast_400, cond_398);
	RzILOpPure *cast_402 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_401 = LOGAND(cond_399, cast_402);
	RzILOpPure *cast_ut64_403 = CAST(64, IL_FALSE, op_AND_401);
	RzILOpPure *op_MUL_404 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_405 = SHIFTL0(cast_ut64_403, op_MUL_404);
	RzILOpPure *cast_407 = CAST(64, IL_FALSE, op_AND_312);
	RzILOpPure *op_OR_406 = LOGOR(cast_407, op_LSHIFT_405);
	RzILOpPure *cast_409 = CAST(64, MSB(DUP(op_OR_406)), op_OR_406);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(arg_cast_17, arg_cast_18, arg_cast_19);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2218", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2219", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *c_call_50 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_51 = SETL("h_tmp2220", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_52 = SEQN(2, c_call_50, op_ASSIGN_hybrid_tmp_51);
	RzILOpEffect *c_call_53 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2221", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *c_call_56 = HEX_DEPOSIT64(arg_cast_57, arg_cast_58, arg_cast_59, arg_cast_60);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp2222", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *seq_63 = SEQN(3, seq_52, seq_55, seq_62);
	RzILOpEffect *op_ASSIGN_66 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_67);
	RzILOpEffect *seq_68 = SEQN(3, seq_49, seq_63, op_ASSIGN_66);
	RzILOpEffect *op_ASSIGN_99 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_100);
	RzILOpEffect *seq_101 = SEQN(2, seq_21, op_ASSIGN_99);
	RzILOpEffect *empty_102 = EMPTY();
	RzILOpEffect *c_call_119 = HEX_SEXTRACT64(arg_cast_120, arg_cast_121, arg_cast_122);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp2223", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_119, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *c_call_150 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_151 = SETL("h_tmp2224", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_152 = SEQN(2, c_call_150, op_ASSIGN_hybrid_tmp_151);
	RzILOpEffect *c_call_153 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_154 = SETL("h_tmp2225", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_155 = SEQN(2, c_call_153, op_ASSIGN_hybrid_tmp_154);
	RzILOpEffect *c_call_156 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2226", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *c_call_159 = HEX_DEPOSIT64(arg_cast_160, arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2227", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_159, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *seq_166 = SEQN(3, seq_155, seq_158, seq_165);
	RzILOpEffect *op_ASSIGN_169 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(3, seq_152, seq_166, op_ASSIGN_169);
	RzILOpEffect *op_ASSIGN_202 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_203);
	RzILOpEffect *seq_204 = SEQN(2, seq_124, op_ASSIGN_202);
	RzILOpEffect *empty_205 = EMPTY();
	RzILOpEffect *c_call_222 = HEX_SEXTRACT64(arg_cast_223, arg_cast_224, arg_cast_225);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_226 = SETL("h_tmp2228", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_227 = SEQN(2, c_call_222, op_ASSIGN_hybrid_tmp_226);
	RzILOpEffect *c_call_253 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_254 = SETL("h_tmp2229", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_255 = SEQN(2, c_call_253, op_ASSIGN_hybrid_tmp_254);
	RzILOpEffect *c_call_256 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_257 = SETL("h_tmp2230", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_258 = SEQN(2, c_call_256, op_ASSIGN_hybrid_tmp_257);
	RzILOpEffect *c_call_259 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_260 = SETL("h_tmp2231", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_261 = SEQN(2, c_call_259, op_ASSIGN_hybrid_tmp_260);
	RzILOpEffect *c_call_262 = HEX_DEPOSIT64(arg_cast_263, arg_cast_264, arg_cast_265, arg_cast_266);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_267 = SETL("h_tmp2232", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_268 = SEQN(2, c_call_262, op_ASSIGN_hybrid_tmp_267);
	RzILOpEffect *seq_269 = SEQN(3, seq_258, seq_261, seq_268);
	RzILOpEffect *op_ASSIGN_272 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_273);
	RzILOpEffect *seq_274 = SEQN(3, seq_255, seq_269, op_ASSIGN_272);
	RzILOpEffect *op_ASSIGN_305 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_306);
	RzILOpEffect *seq_307 = SEQN(2, seq_227, op_ASSIGN_305);
	RzILOpEffect *empty_308 = EMPTY();
	RzILOpEffect *c_call_325 = HEX_SEXTRACT64(arg_cast_326, arg_cast_327, arg_cast_328);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_329 = SETL("h_tmp2233", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_330 = SEQN(2, c_call_325, op_ASSIGN_hybrid_tmp_329);
	RzILOpEffect *c_call_356 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_357 = SETL("h_tmp2234", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_358 = SEQN(2, c_call_356, op_ASSIGN_hybrid_tmp_357);
	RzILOpEffect *c_call_359 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_360 = SETL("h_tmp2235", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_361 = SEQN(2, c_call_359, op_ASSIGN_hybrid_tmp_360);
	RzILOpEffect *c_call_362 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_363 = SETL("h_tmp2236", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_364 = SEQN(2, c_call_362, op_ASSIGN_hybrid_tmp_363);
	RzILOpEffect *c_call_365 = HEX_DEPOSIT64(arg_cast_366, arg_cast_367, arg_cast_368, arg_cast_369);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_370 = SETL("h_tmp2237", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_371 = SEQN(2, c_call_365, op_ASSIGN_hybrid_tmp_370);
	RzILOpEffect *seq_372 = SEQN(3, seq_361, seq_364, seq_371);
	RzILOpEffect *op_ASSIGN_375 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_376);
	RzILOpEffect *seq_377 = SEQN(3, seq_358, seq_372, op_ASSIGN_375);
	RzILOpEffect *op_ASSIGN_408 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_409);
	RzILOpEffect *seq_410 = SEQN(2, seq_330, op_ASSIGN_408);
	RzILOpEffect *empty_411 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_101, empty_102, seq_204, empty_205, seq_307, empty_308, seq_410, empty_411, seq_68, seq_171, seq_274, seq_377);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2238;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2239;
	// Declare: ut32 h_tmp2240;
	// Declare: ut32 h_tmp2241;
	// Declare: ut64 h_tmp2242;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2243;
	// Declare: ut32 h_tmp2244;
	// Declare: ut32 h_tmp2245;
	// Declare: ut32 h_tmp2246;
	// Declare: ut64 h_tmp2247;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2248;
	// Declare: ut32 h_tmp2249;
	// Declare: ut32 h_tmp2250;
	// Declare: ut32 h_tmp2251;
	// Declare: ut64 h_tmp2252;
	// Declare: st64 h_tmp2253;
	// Declare: ut32 h_tmp2254;
	// Declare: ut32 h_tmp2255;
	// Declare: ut32 h_tmp2256;
	// Declare: ut64 h_tmp2257;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *cast_8 = LET("const_pos0xffff", const_pos0xffff, CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_7 = LOGAND(op_RSHIFT_6, cast_8);
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *cast_13 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_12 = LOGAND(op_RSHIFT_11, cast_13);
	RzILOpPure *cast_st16_14 = CAST(16, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *op_SUB_15 = SUB(cast_st16_9, cast_st16_14);
	RzILOpPure *cast_17 = CAST(32, IL_FALSE, op_SUB_15);
	RzILOpPure *op_ADD_16 = LET("const_pos1", DUP(const_pos1), ADD(cast_17, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_16, VARLP("const_pos1")));
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, op_RSHIFT_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2238"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_26 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st16_30 = CAST(16, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *op_MUL_31 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_32 = SHIFTR0(DUP(Rtt), op_MUL_31);
	RzILOpPure *cast_34 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_33 = LOGAND(op_RSHIFT_32, cast_34);
	RzILOpPure *cast_st16_35 = CAST(16, MSB(DUP(op_AND_33)), op_AND_33);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_30, cast_st16_35);
	RzILOpPure *cast_38 = CAST(32, IL_FALSE, op_SUB_36);
	RzILOpPure *op_ADD_37 = LET("const_pos1", DUP(const_pos1), ADD(cast_38, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_39 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_37, VARLP("const_pos1")));
	RzILOpPure *cast_41 = CAST(64, MSB(DUP(op_RSHIFT_39)), op_RSHIFT_39);
	RzILOpPure *op_EQ_40 = EQ(cond_25, cast_41);
	RzILOpPure *op_MUL_42 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rss), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *op_MUL_47 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_48 = SHIFTR0(DUP(Rtt), op_MUL_47);
	RzILOpPure *cast_50 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_49 = LOGAND(op_RSHIFT_48, cast_50);
	RzILOpPure *cast_st16_51 = CAST(16, MSB(DUP(op_AND_49)), op_AND_49);
	RzILOpPure *op_SUB_52 = SUB(cast_st16_46, cast_st16_51);
	RzILOpPure *cast_54 = CAST(32, IL_FALSE, op_SUB_52);
	RzILOpPure *op_ADD_53 = LET("const_pos1", DUP(const_pos1), ADD(cast_54, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_55 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_53, VARLP("const_pos1")));
	RzILOpPure *arg_cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_67 = CAST(64, MSB(DUP(VARL("h_tmp2240"))), VARL("h_tmp2240"));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp2241"))), VARL("h_tmp2241"));
	RzILOpPure *arg_cast_69 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_74 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_73 = ITE(NON_ZERO(VARL("h_tmp2239")), VARL("h_tmp2242"), cast_74);
	RzILOpPure *cast_76 = CAST(32, IL_FALSE, cond_73);
	RzILOpPure *op_MUL_78 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rss), op_MUL_78);
	RzILOpPure *cast_81 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_80 = LOGAND(op_RSHIFT_79, cast_81);
	RzILOpPure *cast_st16_82 = CAST(16, MSB(DUP(op_AND_80)), op_AND_80);
	RzILOpPure *op_MUL_83 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_84 = SHIFTR0(DUP(Rtt), op_MUL_83);
	RzILOpPure *cast_86 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_85 = LOGAND(op_RSHIFT_84, cast_86);
	RzILOpPure *cast_st16_87 = CAST(16, MSB(DUP(op_AND_85)), op_AND_85);
	RzILOpPure *op_SUB_88 = SUB(cast_st16_82, cast_st16_87);
	RzILOpPure *cast_90 = CAST(32, IL_FALSE, op_SUB_88);
	RzILOpPure *op_ADD_89 = LET("const_pos1", DUP(const_pos1), ADD(cast_90, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_91 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_89, VARLP("const_pos1")));
	RzILOpPure *op_LT_92 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_91, VARLP("const_pos0")));
	RzILOpPure *op_SUB_93 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_94 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_93));
	RzILOpPure *op_NEG_95 = NEG(op_LSHIFT_94);
	RzILOpPure *op_SUB_96 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_97 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_96));
	RzILOpPure *cast_99 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_98 = SUB(op_LSHIFT_97, cast_99);
	RzILOpPure *cond_100 = ITE(op_LT_92, op_NEG_95, op_SUB_98);
	RzILOpPure *cast_102 = CAST(64, MSB(DUP(op_RSHIFT_55)), op_RSHIFT_55);
	RzILOpPure *cond_101 = ITE(op_EQ_40, cast_102, cond_100);
	RzILOpPure *cast_104 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_103 = LOGAND(cond_101, cast_104);
	RzILOpPure *cast_ut64_105 = CAST(64, IL_FALSE, op_AND_103);
	RzILOpPure *op_MUL_106 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_107 = SHIFTL0(cast_ut64_105, op_MUL_106);
	RzILOpPure *cast_109 = CAST(64, IL_FALSE, op_AND_3);
	RzILOpPure *op_OR_108 = LOGOR(cast_109, op_LSHIFT_107);
	RzILOpPure *cast_111 = CAST(64, MSB(DUP(op_OR_108)), op_OR_108);
	RzILOpPure *op_MUL_114 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_115 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_114));
	RzILOpPure *op_NOT_116 = LOGNOT(op_LSHIFT_115);
	RzILOpPure *op_AND_117 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_116);
	RzILOpPure *op_NE_118 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_119 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_MUL_124 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_127 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_st16_128 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *op_ADD_129 = ADD(cast_st16_123, cast_st16_128);
	RzILOpPure *cast_131 = CAST(32, IL_FALSE, op_ADD_129);
	RzILOpPure *op_ADD_130 = LET("const_pos1", DUP(const_pos1), ADD(cast_131, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_132 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_139 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_118, VARL("h_tmp2243"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_140 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_140);
	RzILOpPure *cast_143 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st16_144 = CAST(16, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *op_MUL_145 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_146 = SHIFTR0(DUP(Rtt), op_MUL_145);
	RzILOpPure *cast_148 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_147 = LOGAND(op_RSHIFT_146, cast_148);
	RzILOpPure *cast_st16_149 = CAST(16, MSB(DUP(op_AND_147)), op_AND_147);
	RzILOpPure *op_ADD_150 = ADD(cast_st16_144, cast_st16_149);
	RzILOpPure *cast_152 = CAST(32, IL_FALSE, op_ADD_150);
	RzILOpPure *op_ADD_151 = LET("const_pos1", DUP(const_pos1), ADD(cast_152, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_153 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_151, VARLP("const_pos1")));
	RzILOpPure *cast_155 = CAST(64, MSB(DUP(op_RSHIFT_153)), op_RSHIFT_153);
	RzILOpPure *op_EQ_154 = EQ(cond_139, cast_155);
	RzILOpPure *op_MUL_156 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_157 = SHIFTR0(DUP(Rss), op_MUL_156);
	RzILOpPure *cast_159 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_158 = LOGAND(op_RSHIFT_157, cast_159);
	RzILOpPure *cast_st16_160 = CAST(16, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *op_MUL_161 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_162 = SHIFTR0(DUP(Rtt), op_MUL_161);
	RzILOpPure *cast_164 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_163 = LOGAND(op_RSHIFT_162, cast_164);
	RzILOpPure *cast_st16_165 = CAST(16, MSB(DUP(op_AND_163)), op_AND_163);
	RzILOpPure *op_ADD_166 = ADD(cast_st16_160, cast_st16_165);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, op_ADD_166);
	RzILOpPure *op_ADD_167 = LET("const_pos1", DUP(const_pos1), ADD(cast_168, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_169 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_167, VARLP("const_pos1")));
	RzILOpPure *arg_cast_180 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_181 = CAST(64, MSB(DUP(VARL("h_tmp2245"))), VARL("h_tmp2245"));
	RzILOpPure *arg_cast_182 = CAST(64, MSB(DUP(VARL("h_tmp2246"))), VARL("h_tmp2246"));
	RzILOpPure *arg_cast_183 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_188 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_187 = ITE(NON_ZERO(VARL("h_tmp2244")), VARL("h_tmp2247"), cast_188);
	RzILOpPure *cast_190 = CAST(32, IL_FALSE, cond_187);
	RzILOpPure *op_MUL_192 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_193 = SHIFTR0(DUP(Rss), op_MUL_192);
	RzILOpPure *cast_195 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_194 = LOGAND(op_RSHIFT_193, cast_195);
	RzILOpPure *cast_st16_196 = CAST(16, MSB(DUP(op_AND_194)), op_AND_194);
	RzILOpPure *op_MUL_197 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_198 = SHIFTR0(DUP(Rtt), op_MUL_197);
	RzILOpPure *cast_200 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_199 = LOGAND(op_RSHIFT_198, cast_200);
	RzILOpPure *cast_st16_201 = CAST(16, MSB(DUP(op_AND_199)), op_AND_199);
	RzILOpPure *op_ADD_202 = ADD(cast_st16_196, cast_st16_201);
	RzILOpPure *cast_204 = CAST(32, IL_FALSE, op_ADD_202);
	RzILOpPure *op_ADD_203 = LET("const_pos1", DUP(const_pos1), ADD(cast_204, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_205 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_203, VARLP("const_pos1")));
	RzILOpPure *op_LT_206 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_205, VARLP("const_pos0")));
	RzILOpPure *op_SUB_207 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_208 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_207));
	RzILOpPure *op_NEG_209 = NEG(op_LSHIFT_208);
	RzILOpPure *op_SUB_210 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_211 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_210));
	RzILOpPure *cast_213 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_212 = SUB(op_LSHIFT_211, cast_213);
	RzILOpPure *cond_214 = ITE(op_LT_206, op_NEG_209, op_SUB_212);
	RzILOpPure *cast_216 = CAST(64, MSB(DUP(op_RSHIFT_169)), op_RSHIFT_169);
	RzILOpPure *cond_215 = ITE(op_EQ_154, cast_216, cond_214);
	RzILOpPure *cast_218 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_217 = LOGAND(cond_215, cast_218);
	RzILOpPure *cast_ut64_219 = CAST(64, IL_FALSE, op_AND_217);
	RzILOpPure *op_MUL_220 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_221 = SHIFTL0(cast_ut64_219, op_MUL_220);
	RzILOpPure *cast_223 = CAST(64, IL_FALSE, op_AND_117);
	RzILOpPure *op_OR_222 = LOGOR(cast_223, op_LSHIFT_221);
	RzILOpPure *cast_225 = CAST(64, MSB(DUP(op_OR_222)), op_OR_222);
	RzILOpPure *op_MUL_228 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_229 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_228));
	RzILOpPure *op_NOT_230 = LOGNOT(op_LSHIFT_229);
	RzILOpPure *op_AND_231 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_230);
	RzILOpPure *op_NE_232 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_233 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_234 = SHIFTR0(DUP(Rss), op_MUL_233);
	RzILOpPure *cast_236 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_235 = LOGAND(op_RSHIFT_234, cast_236);
	RzILOpPure *cast_st16_237 = CAST(16, MSB(DUP(op_AND_235)), op_AND_235);
	RzILOpPure *op_MUL_238 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_239 = SHIFTR0(DUP(Rtt), op_MUL_238);
	RzILOpPure *cast_241 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_240 = LOGAND(op_RSHIFT_239, cast_241);
	RzILOpPure *cast_st16_242 = CAST(16, MSB(DUP(op_AND_240)), op_AND_240);
	RzILOpPure *op_SUB_243 = SUB(cast_st16_237, cast_st16_242);
	RzILOpPure *cast_245 = CAST(32, IL_FALSE, op_SUB_243);
	RzILOpPure *op_ADD_244 = LET("const_pos1", DUP(const_pos1), ADD(cast_245, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_246 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_244, VARLP("const_pos1")));
	RzILOpPure *arg_cast_248 = CAST(64, IL_FALSE, op_RSHIFT_246);
	RzILOpPure *arg_cast_249 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_250 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_253 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_232, VARL("h_tmp2248"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_254 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_255 = SHIFTR0(DUP(Rss), op_MUL_254);
	RzILOpPure *cast_257 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_256 = LOGAND(op_RSHIFT_255, cast_257);
	RzILOpPure *cast_st16_258 = CAST(16, MSB(DUP(op_AND_256)), op_AND_256);
	RzILOpPure *op_MUL_259 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_260 = SHIFTR0(DUP(Rtt), op_MUL_259);
	RzILOpPure *cast_262 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_261 = LOGAND(op_RSHIFT_260, cast_262);
	RzILOpPure *cast_st16_263 = CAST(16, MSB(DUP(op_AND_261)), op_AND_261);
	RzILOpPure *op_SUB_264 = SUB(cast_st16_258, cast_st16_263);
	RzILOpPure *cast_266 = CAST(32, IL_FALSE, op_SUB_264);
	RzILOpPure *op_ADD_265 = LET("const_pos1", DUP(const_pos1), ADD(cast_266, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_267 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_265, VARLP("const_pos1")));
	RzILOpPure *cast_269 = CAST(64, MSB(DUP(op_RSHIFT_267)), op_RSHIFT_267);
	RzILOpPure *op_EQ_268 = EQ(cond_253, cast_269);
	RzILOpPure *op_MUL_270 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_271 = SHIFTR0(DUP(Rss), op_MUL_270);
	RzILOpPure *cast_273 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_272 = LOGAND(op_RSHIFT_271, cast_273);
	RzILOpPure *cast_st16_274 = CAST(16, MSB(DUP(op_AND_272)), op_AND_272);
	RzILOpPure *op_MUL_275 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rtt), op_MUL_275);
	RzILOpPure *cast_278 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_277 = LOGAND(op_RSHIFT_276, cast_278);
	RzILOpPure *cast_st16_279 = CAST(16, MSB(DUP(op_AND_277)), op_AND_277);
	RzILOpPure *op_SUB_280 = SUB(cast_st16_274, cast_st16_279);
	RzILOpPure *cast_282 = CAST(32, IL_FALSE, op_SUB_280);
	RzILOpPure *op_ADD_281 = LET("const_pos1", DUP(const_pos1), ADD(cast_282, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_283 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_281, VARLP("const_pos1")));
	RzILOpPure *arg_cast_294 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_295 = CAST(64, MSB(DUP(VARL("h_tmp2250"))), VARL("h_tmp2250"));
	RzILOpPure *arg_cast_296 = CAST(64, MSB(DUP(VARL("h_tmp2251"))), VARL("h_tmp2251"));
	RzILOpPure *arg_cast_297 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_302 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_301 = ITE(NON_ZERO(VARL("h_tmp2249")), VARL("h_tmp2252"), cast_302);
	RzILOpPure *cast_304 = CAST(32, IL_FALSE, cond_301);
	RzILOpPure *op_MUL_306 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_307 = SHIFTR0(DUP(Rss), op_MUL_306);
	RzILOpPure *cast_309 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_308 = LOGAND(op_RSHIFT_307, cast_309);
	RzILOpPure *cast_st16_310 = CAST(16, MSB(DUP(op_AND_308)), op_AND_308);
	RzILOpPure *op_MUL_311 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_312 = SHIFTR0(DUP(Rtt), op_MUL_311);
	RzILOpPure *cast_314 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_313 = LOGAND(op_RSHIFT_312, cast_314);
	RzILOpPure *cast_st16_315 = CAST(16, MSB(DUP(op_AND_313)), op_AND_313);
	RzILOpPure *op_SUB_316 = SUB(cast_st16_310, cast_st16_315);
	RzILOpPure *cast_318 = CAST(32, IL_FALSE, op_SUB_316);
	RzILOpPure *op_ADD_317 = LET("const_pos1", DUP(const_pos1), ADD(cast_318, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_319 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_317, VARLP("const_pos1")));
	RzILOpPure *op_LT_320 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_319, VARLP("const_pos0")));
	RzILOpPure *op_SUB_321 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_322 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_321));
	RzILOpPure *op_NEG_323 = NEG(op_LSHIFT_322);
	RzILOpPure *op_SUB_324 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_325 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_324));
	RzILOpPure *cast_327 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_326 = SUB(op_LSHIFT_325, cast_327);
	RzILOpPure *cond_328 = ITE(op_LT_320, op_NEG_323, op_SUB_326);
	RzILOpPure *cast_330 = CAST(64, MSB(DUP(op_RSHIFT_283)), op_RSHIFT_283);
	RzILOpPure *cond_329 = ITE(op_EQ_268, cast_330, cond_328);
	RzILOpPure *cast_332 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_331 = LOGAND(cond_329, cast_332);
	RzILOpPure *cast_ut64_333 = CAST(64, IL_FALSE, op_AND_331);
	RzILOpPure *op_MUL_334 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_335 = SHIFTL0(cast_ut64_333, op_MUL_334);
	RzILOpPure *cast_337 = CAST(64, IL_FALSE, op_AND_231);
	RzILOpPure *op_OR_336 = LOGOR(cast_337, op_LSHIFT_335);
	RzILOpPure *cast_339 = CAST(64, MSB(DUP(op_OR_336)), op_OR_336);
	RzILOpPure *op_MUL_342 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_343 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_342));
	RzILOpPure *op_NOT_344 = LOGNOT(op_LSHIFT_343);
	RzILOpPure *op_AND_345 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_344);
	RzILOpPure *op_NE_346 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_347 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_348 = SHIFTR0(DUP(Rss), op_MUL_347);
	RzILOpPure *cast_350 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_349 = LOGAND(op_RSHIFT_348, cast_350);
	RzILOpPure *cast_st16_351 = CAST(16, MSB(DUP(op_AND_349)), op_AND_349);
	RzILOpPure *op_MUL_352 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_353 = SHIFTR0(DUP(Rtt), op_MUL_352);
	RzILOpPure *cast_355 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_354 = LOGAND(op_RSHIFT_353, cast_355);
	RzILOpPure *cast_st16_356 = CAST(16, MSB(DUP(op_AND_354)), op_AND_354);
	RzILOpPure *op_ADD_357 = ADD(cast_st16_351, cast_st16_356);
	RzILOpPure *cast_359 = CAST(32, IL_FALSE, op_ADD_357);
	RzILOpPure *op_ADD_358 = LET("const_pos1", DUP(const_pos1), ADD(cast_359, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_360 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_358, VARLP("const_pos1")));
	RzILOpPure *arg_cast_362 = CAST(64, IL_FALSE, op_RSHIFT_360);
	RzILOpPure *arg_cast_363 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_364 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_367 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_346, VARL("h_tmp2253"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_368 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_369 = SHIFTR0(DUP(Rss), op_MUL_368);
	RzILOpPure *cast_371 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_370 = LOGAND(op_RSHIFT_369, cast_371);
	RzILOpPure *cast_st16_372 = CAST(16, MSB(DUP(op_AND_370)), op_AND_370);
	RzILOpPure *op_MUL_373 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_374 = SHIFTR0(DUP(Rtt), op_MUL_373);
	RzILOpPure *cast_376 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_375 = LOGAND(op_RSHIFT_374, cast_376);
	RzILOpPure *cast_st16_377 = CAST(16, MSB(DUP(op_AND_375)), op_AND_375);
	RzILOpPure *op_ADD_378 = ADD(cast_st16_372, cast_st16_377);
	RzILOpPure *cast_380 = CAST(32, IL_FALSE, op_ADD_378);
	RzILOpPure *op_ADD_379 = LET("const_pos1", DUP(const_pos1), ADD(cast_380, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_381 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_379, VARLP("const_pos1")));
	RzILOpPure *cast_383 = CAST(64, MSB(DUP(op_RSHIFT_381)), op_RSHIFT_381);
	RzILOpPure *op_EQ_382 = EQ(cond_367, cast_383);
	RzILOpPure *op_MUL_384 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_385 = SHIFTR0(DUP(Rss), op_MUL_384);
	RzILOpPure *cast_387 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_386 = LOGAND(op_RSHIFT_385, cast_387);
	RzILOpPure *cast_st16_388 = CAST(16, MSB(DUP(op_AND_386)), op_AND_386);
	RzILOpPure *op_MUL_389 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_390 = SHIFTR0(DUP(Rtt), op_MUL_389);
	RzILOpPure *cast_392 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_391 = LOGAND(op_RSHIFT_390, cast_392);
	RzILOpPure *cast_st16_393 = CAST(16, MSB(DUP(op_AND_391)), op_AND_391);
	RzILOpPure *op_ADD_394 = ADD(cast_st16_388, cast_st16_393);
	RzILOpPure *cast_396 = CAST(32, IL_FALSE, op_ADD_394);
	RzILOpPure *op_ADD_395 = LET("const_pos1", DUP(const_pos1), ADD(cast_396, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_397 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_395, VARLP("const_pos1")));
	RzILOpPure *arg_cast_408 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_409 = CAST(64, MSB(DUP(VARL("h_tmp2255"))), VARL("h_tmp2255"));
	RzILOpPure *arg_cast_410 = CAST(64, MSB(DUP(VARL("h_tmp2256"))), VARL("h_tmp2256"));
	RzILOpPure *arg_cast_411 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_416 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_415 = ITE(NON_ZERO(VARL("h_tmp2254")), VARL("h_tmp2257"), cast_416);
	RzILOpPure *cast_418 = CAST(32, IL_FALSE, cond_415);
	RzILOpPure *op_MUL_420 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_421 = SHIFTR0(DUP(Rss), op_MUL_420);
	RzILOpPure *cast_423 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_422 = LOGAND(op_RSHIFT_421, cast_423);
	RzILOpPure *cast_st16_424 = CAST(16, MSB(DUP(op_AND_422)), op_AND_422);
	RzILOpPure *op_MUL_425 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_426 = SHIFTR0(DUP(Rtt), op_MUL_425);
	RzILOpPure *cast_428 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, MSB(DUP(VARLP("const_pos0xffff"))), VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_427 = LOGAND(op_RSHIFT_426, cast_428);
	RzILOpPure *cast_st16_429 = CAST(16, MSB(DUP(op_AND_427)), op_AND_427);
	RzILOpPure *op_ADD_430 = ADD(cast_st16_424, cast_st16_429);
	RzILOpPure *cast_432 = CAST(32, IL_FALSE, op_ADD_430);
	RzILOpPure *op_ADD_431 = LET("const_pos1", DUP(const_pos1), ADD(cast_432, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_433 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_431, VARLP("const_pos1")));
	RzILOpPure *op_LT_434 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_433, VARLP("const_pos0")));
	RzILOpPure *op_SUB_435 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_436 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_435));
	RzILOpPure *op_NEG_437 = NEG(op_LSHIFT_436);
	RzILOpPure *op_SUB_438 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_439 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_438));
	RzILOpPure *cast_441 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_440 = SUB(op_LSHIFT_439, cast_441);
	RzILOpPure *cond_442 = ITE(op_LT_434, op_NEG_437, op_SUB_440);
	RzILOpPure *cast_444 = CAST(64, MSB(DUP(op_RSHIFT_397)), op_RSHIFT_397);
	RzILOpPure *cond_443 = ITE(op_EQ_382, cast_444, cond_442);
	RzILOpPure *cast_446 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_445 = LOGAND(cond_443, cast_446);
	RzILOpPure *cast_ut64_447 = CAST(64, IL_FALSE, op_AND_445);
	RzILOpPure *op_MUL_448 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_449 = SHIFTL0(cast_ut64_447, op_MUL_448);
	RzILOpPure *cast_451 = CAST(64, IL_FALSE, op_AND_345);
	RzILOpPure *op_OR_450 = LOGOR(cast_451, op_LSHIFT_449);
	RzILOpPure *cast_453 = CAST(64, MSB(DUP(op_OR_450)), op_OR_450);

	// WRITE
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2238", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2239", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2240", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_63 = SETL("h_tmp2241", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_64 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_63);
	RzILOpEffect *c_call_65 = HEX_DEPOSIT64(arg_cast_66, arg_cast_67, arg_cast_68, arg_cast_69);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_70 = SETL("h_tmp2242", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_71 = SEQN(2, c_call_65, op_ASSIGN_hybrid_tmp_70);
	RzILOpEffect *seq_72 = SEQN(3, seq_61, seq_64, seq_71);
	RzILOpEffect *op_ASSIGN_75 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_76);
	RzILOpEffect *seq_77 = SEQN(3, seq_58, seq_72, op_ASSIGN_75);
	RzILOpEffect *op_ASSIGN_110 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_111);
	RzILOpEffect *seq_112 = SEQN(2, seq_24, op_ASSIGN_110);
	RzILOpEffect *empty_113 = EMPTY();
	RzILOpEffect *c_call_133 = HEX_SEXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp2243", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_170 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_171 = SETL("h_tmp2244", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_172 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_171);
	RzILOpEffect *c_call_173 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2245", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_173, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *c_call_176 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp2246", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_179 = HEX_DEPOSIT64(arg_cast_180, arg_cast_181, arg_cast_182, arg_cast_183);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_184 = SETL("h_tmp2247", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_185 = SEQN(2, c_call_179, op_ASSIGN_hybrid_tmp_184);
	RzILOpEffect *seq_186 = SEQN(3, seq_175, seq_178, seq_185);
	RzILOpEffect *op_ASSIGN_189 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_190);
	RzILOpEffect *seq_191 = SEQN(3, seq_172, seq_186, op_ASSIGN_189);
	RzILOpEffect *op_ASSIGN_224 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_225);
	RzILOpEffect *seq_226 = SEQN(2, seq_138, op_ASSIGN_224);
	RzILOpEffect *empty_227 = EMPTY();
	RzILOpEffect *c_call_247 = HEX_SEXTRACT64(arg_cast_248, arg_cast_249, arg_cast_250);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_251 = SETL("h_tmp2248", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_252 = SEQN(2, c_call_247, op_ASSIGN_hybrid_tmp_251);
	RzILOpEffect *c_call_284 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_285 = SETL("h_tmp2249", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_286 = SEQN(2, c_call_284, op_ASSIGN_hybrid_tmp_285);
	RzILOpEffect *c_call_287 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_288 = SETL("h_tmp2250", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_289 = SEQN(2, c_call_287, op_ASSIGN_hybrid_tmp_288);
	RzILOpEffect *c_call_290 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_291 = SETL("h_tmp2251", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_292 = SEQN(2, c_call_290, op_ASSIGN_hybrid_tmp_291);
	RzILOpEffect *c_call_293 = HEX_DEPOSIT64(arg_cast_294, arg_cast_295, arg_cast_296, arg_cast_297);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_298 = SETL("h_tmp2252", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_299 = SEQN(2, c_call_293, op_ASSIGN_hybrid_tmp_298);
	RzILOpEffect *seq_300 = SEQN(3, seq_289, seq_292, seq_299);
	RzILOpEffect *op_ASSIGN_303 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_304);
	RzILOpEffect *seq_305 = SEQN(3, seq_286, seq_300, op_ASSIGN_303);
	RzILOpEffect *op_ASSIGN_338 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_339);
	RzILOpEffect *seq_340 = SEQN(2, seq_252, op_ASSIGN_338);
	RzILOpEffect *empty_341 = EMPTY();
	RzILOpEffect *c_call_361 = HEX_SEXTRACT64(arg_cast_362, arg_cast_363, arg_cast_364);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_365 = SETL("h_tmp2253", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_366 = SEQN(2, c_call_361, op_ASSIGN_hybrid_tmp_365);
	RzILOpEffect *c_call_398 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_399 = SETL("h_tmp2254", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_400 = SEQN(2, c_call_398, op_ASSIGN_hybrid_tmp_399);
	RzILOpEffect *c_call_401 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_402 = SETL("h_tmp2255", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_403 = SEQN(2, c_call_401, op_ASSIGN_hybrid_tmp_402);
	RzILOpEffect *c_call_404 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_405 = SETL("h_tmp2256", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_406 = SEQN(2, c_call_404, op_ASSIGN_hybrid_tmp_405);
	RzILOpEffect *c_call_407 = HEX_DEPOSIT64(arg_cast_408, arg_cast_409, arg_cast_410, arg_cast_411);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_412 = SETL("h_tmp2257", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_413 = SEQN(2, c_call_407, op_ASSIGN_hybrid_tmp_412);
	RzILOpEffect *seq_414 = SEQN(3, seq_403, seq_406, seq_413);
	RzILOpEffect *op_ASSIGN_417 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_418);
	RzILOpEffect *seq_419 = SEQN(3, seq_400, seq_414, op_ASSIGN_417);
	RzILOpEffect *op_ASSIGN_452 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_453);
	RzILOpEffect *seq_454 = SEQN(2, seq_366, op_ASSIGN_452);
	RzILOpEffect *empty_455 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_112, empty_113, seq_226, empty_227, seq_340, empty_341, seq_454, empty_455, seq_77, seq_191, seq_305, seq_419);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', true);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2258;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2259;
	// Declare: ut32 h_tmp2260;
	// Declare: ut32 h_tmp2261;
	// Declare: ut64 h_tmp2262;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2263;
	// Declare: ut32 h_tmp2264;
	// Declare: ut32 h_tmp2265;
	// Declare: ut32 h_tmp2266;
	// Declare: ut64 h_tmp2267;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(DUP(cast_st32_8)), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(DUP(op_AND_12)), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(DUP(cast_st32_13)), cast_st32_13);
	RzILOpPure *op_SUB_15 = SUB(cast_st64_9, cast_st64_14);
	RzILOpPure *arg_cast_17 = CAST(64, IL_FALSE, op_SUB_15);
	RzILOpPure *arg_cast_18 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_19 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_22 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp2258"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_23 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_24 = SHIFTR0(DUP(Rss), op_MUL_23);
	RzILOpPure *op_AND_25 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_24, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(op_AND_25)), op_AND_25);
	RzILOpPure *cast_st64_27 = CAST(64, MSB(DUP(cast_st32_26)), cast_st32_26);
	RzILOpPure *op_MUL_28 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_29, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_31 = CAST(32, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(DUP(cast_st32_31)), cast_st32_31);
	RzILOpPure *op_SUB_33 = SUB(cast_st64_27, cast_st64_32);
	RzILOpPure *op_EQ_34 = EQ(cond_22, op_SUB_33);
	RzILOpPure *op_MUL_35 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_35);
	RzILOpPure *op_AND_37 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_36, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_38 = CAST(32, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *cast_st64_39 = CAST(64, MSB(DUP(cast_st32_38)), cast_st32_38);
	RzILOpPure *op_MUL_40 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rtt), op_MUL_40);
	RzILOpPure *op_AND_42 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_41, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_43 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_44 = CAST(64, MSB(DUP(cast_st32_43)), cast_st32_43);
	RzILOpPure *op_SUB_45 = SUB(cast_st64_39, cast_st64_44);
	RzILOpPure *arg_cast_56 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_57 = CAST(64, MSB(DUP(VARL("h_tmp2260"))), VARL("h_tmp2260"));
	RzILOpPure *arg_cast_58 = CAST(64, MSB(DUP(VARL("h_tmp2261"))), VARL("h_tmp2261"));
	RzILOpPure *arg_cast_59 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_64 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_63 = ITE(NON_ZERO(VARL("h_tmp2259")), VARL("h_tmp2262"), cast_64);
	RzILOpPure *cast_66 = CAST(32, IL_FALSE, cond_63);
	RzILOpPure *op_MUL_68 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_69 = SHIFTR0(DUP(Rss), op_MUL_68);
	RzILOpPure *op_AND_70 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_69, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_71 = CAST(32, MSB(DUP(op_AND_70)), op_AND_70);
	RzILOpPure *cast_st64_72 = CAST(64, MSB(DUP(cast_st32_71)), cast_st32_71);
	RzILOpPure *op_MUL_73 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_74 = SHIFTR0(DUP(Rtt), op_MUL_73);
	RzILOpPure *op_AND_75 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_74, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_76 = CAST(32, MSB(DUP(op_AND_75)), op_AND_75);
	RzILOpPure *cast_st64_77 = CAST(64, MSB(DUP(cast_st32_76)), cast_st32_76);
	RzILOpPure *op_SUB_78 = SUB(cast_st64_72, cast_st64_77);
	RzILOpPure *cast_80 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_79 = SLT(op_SUB_78, cast_80);
	RzILOpPure *op_SUB_81 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_81));
	RzILOpPure *op_NEG_83 = NEG(op_LSHIFT_82);
	RzILOpPure *op_SUB_84 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_85 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_84));
	RzILOpPure *cast_87 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_86 = SUB(op_LSHIFT_85, cast_87);
	RzILOpPure *cond_88 = ITE(op_LT_79, op_NEG_83, op_SUB_86);
	RzILOpPure *cond_89 = ITE(op_EQ_34, op_SUB_45, cond_88);
	RzILOpPure *op_AND_90 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_89, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_91 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_92 = SHIFTL0(op_AND_90, op_MUL_91);
	RzILOpPure *op_OR_93 = LOGOR(op_AND_3, op_LSHIFT_92);
	RzILOpPure *op_MUL_97 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_97));
	RzILOpPure *op_NOT_99 = LOGNOT(op_LSHIFT_98);
	RzILOpPure *op_AND_100 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_99);
	RzILOpPure *op_NE_101 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(DUP(op_AND_104)), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(DUP(cast_st32_105)), cast_st32_105);
	RzILOpPure *op_MUL_107 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_108 = SHIFTR0(DUP(Rtt), op_MUL_107);
	RzILOpPure *op_AND_109 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_108, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_110 = CAST(32, MSB(DUP(op_AND_109)), op_AND_109);
	RzILOpPure *cast_st64_111 = CAST(64, MSB(DUP(cast_st32_110)), cast_st32_110);
	RzILOpPure *op_ADD_112 = ADD(cast_st64_106, cast_st64_111);
	RzILOpPure *arg_cast_114 = CAST(64, IL_FALSE, op_ADD_112);
	RzILOpPure *arg_cast_115 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_116 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_119 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_101, VARL("h_tmp2263"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_120 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(DUP(op_AND_122)), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(64, MSB(DUP(cast_st32_123)), cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(DUP(op_AND_127)), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(DUP(cast_st32_128)), cast_st32_128);
	RzILOpPure *op_ADD_130 = ADD(cast_st64_124, cast_st64_129);
	RzILOpPure *op_EQ_131 = EQ(cond_119, op_ADD_130);
	RzILOpPure *op_MUL_132 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rss), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_133, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_135 = CAST(32, MSB(DUP(op_AND_134)), op_AND_134);
	RzILOpPure *cast_st64_136 = CAST(64, MSB(DUP(cast_st32_135)), cast_st32_135);
	RzILOpPure *op_MUL_137 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rtt), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_138, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_140 = CAST(32, MSB(DUP(op_AND_139)), op_AND_139);
	RzILOpPure *cast_st64_141 = CAST(64, MSB(DUP(cast_st32_140)), cast_st32_140);
	RzILOpPure *op_ADD_142 = ADD(cast_st64_136, cast_st64_141);
	RzILOpPure *arg_cast_153 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_154 = CAST(64, MSB(DUP(VARL("h_tmp2265"))), VARL("h_tmp2265"));
	RzILOpPure *arg_cast_155 = CAST(64, MSB(DUP(VARL("h_tmp2266"))), VARL("h_tmp2266"));
	RzILOpPure *arg_cast_156 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_161 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_160 = ITE(NON_ZERO(VARL("h_tmp2264")), VARL("h_tmp2267"), cast_161);
	RzILOpPure *cast_163 = CAST(32, IL_FALSE, cond_160);
	RzILOpPure *op_MUL_165 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_166 = SHIFTR0(DUP(Rss), op_MUL_165);
	RzILOpPure *op_AND_167 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_166, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_168 = CAST(32, MSB(DUP(op_AND_167)), op_AND_167);
	RzILOpPure *cast_st64_169 = CAST(64, MSB(DUP(cast_st32_168)), cast_st32_168);
	RzILOpPure *op_MUL_170 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_171 = SHIFTR0(DUP(Rtt), op_MUL_170);
	RzILOpPure *op_AND_172 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(op_RSHIFT_171, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_173 = CAST(32, MSB(DUP(op_AND_172)), op_AND_172);
	RzILOpPure *cast_st64_174 = CAST(64, MSB(DUP(cast_st32_173)), cast_st32_173);
	RzILOpPure *op_ADD_175 = ADD(cast_st64_169, cast_st64_174);
	RzILOpPure *cast_177 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_176 = SLT(op_ADD_175, cast_177);
	RzILOpPure *op_SUB_178 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_179 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_178));
	RzILOpPure *op_NEG_180 = NEG(op_LSHIFT_179);
	RzILOpPure *op_SUB_181 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *cast_184 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_183 = SUB(op_LSHIFT_182, cast_184);
	RzILOpPure *cond_185 = ITE(op_LT_176, op_NEG_180, op_SUB_183);
	RzILOpPure *cond_186 = ITE(op_EQ_131, op_ADD_142, cond_185);
	RzILOpPure *op_AND_187 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_186, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_188 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_189 = SHIFTL0(op_AND_187, op_MUL_188);
	RzILOpPure *op_OR_190 = LOGOR(op_AND_100, op_LSHIFT_189);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(arg_cast_17, arg_cast_18, arg_cast_19);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_20 = SETL("h_tmp2258", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_21 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_20);
	RzILOpEffect *c_call_46 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_47 = SETL("h_tmp2259", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_48 = SEQN(2, c_call_46, op_ASSIGN_hybrid_tmp_47);
	RzILOpEffect *c_call_49 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp2260", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *c_call_52 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_53 = SETL("h_tmp2261", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_54 = SEQN(2, c_call_52, op_ASSIGN_hybrid_tmp_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(arg_cast_56, arg_cast_57, arg_cast_58, arg_cast_59);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2262", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *seq_62 = SEQN(3, seq_51, seq_54, seq_61);
	RzILOpEffect *op_ASSIGN_65 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_66);
	RzILOpEffect *seq_67 = SEQN(3, seq_48, seq_62, op_ASSIGN_65);
	RzILOpEffect *op_ASSIGN_94 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_93);
	RzILOpEffect *seq_95 = SEQN(2, seq_21, op_ASSIGN_94);
	RzILOpEffect *empty_96 = EMPTY();
	RzILOpEffect *c_call_113 = HEX_SEXTRACT64(arg_cast_114, arg_cast_115, arg_cast_116);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_117 = SETL("h_tmp2263", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_118 = SEQN(2, c_call_113, op_ASSIGN_hybrid_tmp_117);
	RzILOpEffect *c_call_143 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_144 = SETL("h_tmp2264", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_145 = SEQN(2, c_call_143, op_ASSIGN_hybrid_tmp_144);
	RzILOpEffect *c_call_146 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_147 = SETL("h_tmp2265", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_148 = SEQN(2, c_call_146, op_ASSIGN_hybrid_tmp_147);
	RzILOpEffect *c_call_149 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_150 = SETL("h_tmp2266", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_151 = SEQN(2, c_call_149, op_ASSIGN_hybrid_tmp_150);
	RzILOpEffect *c_call_152 = HEX_DEPOSIT64(arg_cast_153, arg_cast_154, arg_cast_155, arg_cast_156);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2267", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_152, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *seq_159 = SEQN(3, seq_148, seq_151, seq_158);
	RzILOpEffect *op_ASSIGN_162 = HEX_WRITE_GLOBAL(usr_assoc_tmp, cast_163);
	RzILOpEffect *seq_164 = SEQN(3, seq_145, seq_159, op_ASSIGN_162);
	RzILOpEffect *op_ASSIGN_191 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, op_OR_190);
	RzILOpEffect *seq_192 = SEQN(2, seq_118, op_ASSIGN_191);
	RzILOpEffect *empty_193 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, seq_95, empty_96, seq_192, empty_193, seq_67, seq_164);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>