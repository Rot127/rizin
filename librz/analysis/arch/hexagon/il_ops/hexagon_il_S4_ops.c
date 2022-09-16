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

RzILOpEffect *hex_il_op_s4_addaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Ru);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_2 = ADD(op_ADD_0, cast_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_ADD_3 = ADD(VARL("u"), op_LSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_addi_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_andi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_AND_3 = LOGAND(VARL("u"), op_LSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_AND_3);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_andi_lsr_ri(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st32 h_tmp2194;
	// Declare: st32 h_tmp2195;
	// Declare: st32 h_tmp2196;
	// Declare: st32 h_tmp2197;
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_NOT_3 = LOGNOT(Rs);
	RzILOpPure *op_GT_7 = SGT(VARL("h_tmp2194"), VARL("h_tmp2195"));
	RzILOpPure *op_NOT_11 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_15 = ITE(op_GT_7, VARL("h_tmp2196"), VARL("h_tmp2197"));
	RzILOpPure *op_ADD_17 = ADD(cond_15, VARL("s"));
	RzILOpPure *cast_19 = CAST(32, IL_FALSE, op_ADD_17);

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp2194", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_4 = HEX_CLO32(op_NOT_3);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp2195", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *c_call_8 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_9 = SETL("h_tmp2196", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_10 = SEQN(2, c_call_8, op_ASSIGN_hybrid_tmp_9);
	RzILOpEffect *c_call_12 = HEX_CLO32(op_NOT_11);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp2197", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *imm_assign_16 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_18 = SETG(Rd_assoc_tmp, cast_19);
	RzILOpEffect *seq_20 = SEQN(5, seq_2, seq_6, seq_10, seq_14, op_ASSIGN_18);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_16, seq_20);

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
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: st64 h_tmp2198;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, VARL("h_tmp2198"), VARLP("const_pos0LL")));
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, cond_16);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(arg_cast_11, arg_cast_12, arg_cast_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp2198", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *op_ASSIGN_17 = SETG(Rd_assoc_tmp, cast_18);
	RzILOpEffect *seq_19 = SEQN(2, seq_15, op_ASSIGN_17);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_19);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_extract_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extractp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: st32 width;
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: st32 offset;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	// Declare: st64 h_tmp2200;
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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_6, VARL("h_tmp2200"), VARLP("const_pos0LL")));
	RzILOpPure *cast_17 = CAST(64, IL_FALSE, cond_15);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_1 = SETL("width", cast_2);
	RzILOpEffect *imm_assign_3 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETL("offset", cast_5);
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_RSHIFT_9, arg_cast_11, arg_cast_12);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp2200", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *op_ASSIGN_16 = SETG(Rdd_assoc_tmp, cast_17);
	RzILOpEffect *seq_18 = SEQN(2, seq_14, op_ASSIGN_16);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_3, op_ASSIGN_1, op_ASSIGN_4, seq_18);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_extractp_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_lsli(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_ntstbit_i(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *op_LSHIFT_1 = LET("const_pos1", const_pos1, SHIFTL0(VARLP("const_pos1"), VARL("u")));
	RzILOpPure *op_AND_2 = LOGAND(Rs, op_LSHIFT_1);
	RzILOpPure *op_EQ_3 = LET("const_pos0", const_pos0, EQ(op_AND_2, VARLP("const_pos0")));
	RzILOpPure *cond_4 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_3, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_6 = CAST(8, IL_FALSE, cond_4);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_5 = SETG(Pd_assoc_tmp, cast_6);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ntstbit_r(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Pd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *const_pos7 = UN(32, 0x7);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	// Declare: st64 h_tmp2203;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2204;
	// Declare: st64 h_tmp2205;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(64, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_4 = CAST(64, IL_FALSE, Rt);
	RzILOpPure *arg_cast_5 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_6 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_9 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp2203"), VARLP("const_pos0LL")));
	RzILOpPure *cast_11 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_10 = SLT(cond_9, cast_11);
	RzILOpPure *cast_ut32_12 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_13 = CAST(64, IL_FALSE, cast_ut32_12);
	RzILOpPure *op_NE_14 = LET("const_pos7", DUP(const_pos7), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *arg_cast_16 = CAST(64, IL_FALSE, DUP(Rt));
	RzILOpPure *arg_cast_17 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_18 = LET("const_pos7", DUP(const_pos7), CAST(64, MSB(DUP(VARLP("const_pos7"))), VARLP("const_pos7")));
	RzILOpPure *cond_21 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_14, VARL("h_tmp2204"), VARLP("const_pos0LL")));
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
	RzILOpPure *cond_36 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_29, VARL("h_tmp2205"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_37 = SHIFTL0(cast_ut64_28, cond_36);
	RzILOpPure *cond_38 = ITE(op_LT_10, op_RSHIFT_26, op_LSHIFT_37);
	RzILOpPure *op_AND_39 = LOGAND(cast_ut64_1, cond_38);
	RzILOpPure *cast_41 = LET("const_pos0", DUP(const_pos0), CAST(64, IL_FALSE, VARLP("const_pos0")));
	RzILOpPure *op_EQ_40 = EQ(op_AND_39, cast_41);
	RzILOpPure *cond_42 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_40, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));
	RzILOpPure *cast_44 = CAST(8, IL_FALSE, cond_42);

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(arg_cast_4, arg_cast_5, arg_cast_6);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_7 = SETL("h_tmp2203", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_8 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_7);
	RzILOpEffect *c_call_15 = HEX_SEXTRACT64(arg_cast_16, arg_cast_17, arg_cast_18);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_19 = SETL("h_tmp2204", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_20 = SEQN(2, c_call_15, op_ASSIGN_hybrid_tmp_19);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(arg_cast_31, arg_cast_32, arg_cast_33);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp2205", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *op_ASSIGN_43 = SETG(Pd_assoc_tmp, cast_44);
	RzILOpEffect *seq_45 = SEQN(4, seq_8, seq_20, seq_35, op_ASSIGN_43);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_45);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_AND_1 = LOGAND(Rs, cast_2);
	RzILOpPure *op_OR_3 = LOGOR(Rx, op_AND_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_andix(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_AND_1 = LOGAND(Rx, cast_2);
	RzILOpPure *op_OR_3 = LOGOR(Ru, op_AND_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_or_ori(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *cast_2 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_OR_1 = LOGOR(Rs, cast_2);
	RzILOpPure *op_OR_3 = LOGOR(Rx, op_OR_1);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_0, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_ori_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_OR_3 = LOGOR(VARL("u"), op_LSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_OR_3);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_4);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_5 = CAST(8, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("S", S);
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_4, op_ASSIGN_2, empty_3, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_5 = CAST(16, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("S", S);
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_4, op_ASSIGN_2, empty_3, ms_op_5_6);

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
	RzILOpPure *op_ADD_1 = ADD(Rs, VARL("u"));
	RzILOpPure *op_5 = CAST(32, IL_FALSE, VARL("S"));

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *imm_assign_4 = SETL("S", S);
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_4, op_ASSIGN_2, empty_3, ms_op_5_6);

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
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_7 = CAST(8, IL_FALSE, cast_st8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *op_ASSIGN_9 = SETG(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_7_8, op_ASSIGN_9);

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
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_10 = CAST(8, IL_FALSE, cast_st8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_10_11);

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
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_6 = CAST(8, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_7 = CAST(8, IL_FALSE, cast_st8_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *op_ASSIGN_9 = SETG(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_7_8, op_ASSIGN_9);

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
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_8 = CAST(8, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(8, IL_FALSE, cast_st8_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_9 = CAST(8, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_10 = CAST(8, IL_FALSE, cast_st8_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerd_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_3 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, VARL("U"));
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
	RzILOpPure *op_5 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_6 = CAST(64, IL_FALSE, Rtt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_6_7);

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
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_7 = CAST(16, IL_FALSE, cast_st16_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *op_ASSIGN_9 = SETG(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_7_8, op_ASSIGN_9);

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
	RzILOpPure *op_MUL_5 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_MUL_6 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_10_11);

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
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Rt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_7 = CAST(16, IL_FALSE, cast_st16_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *op_ASSIGN_9 = SETG(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_7_8, op_ASSIGN_9);

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
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_10_11);

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
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_MUL_3 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_4 = SHIFTR0(Nt, op_MUL_3);
	RzILOpPure *op_AND_5 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_4, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_6 = CAST(16, MSB(DUP(op_AND_5)), op_AND_5);
	RzILOpPure *op_7 = CAST(16, IL_FALSE, cast_st16_6);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_7_8 = STOREW(VARL("EA"), op_7);
	RzILOpEffect *op_ASSIGN_9 = SETG(Re_assoc_tmp, VARL("U"));
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, op_ASSIGN_1, empty_2, ms_op_7_8, op_ASSIGN_9);

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
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Nt, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(DUP(op_AND_7)), op_AND_7);
	RzILOpPure *op_9 = CAST(16, IL_FALSE, cast_st16_8);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_9_10 = STOREW(VARL("EA"), op_9);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_9_10);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_MUL_6 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Nt, op_MUL_6);
	RzILOpPure *op_AND_8 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_7, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_9 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_10 = CAST(16, IL_FALSE, cast_st16_9);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_10_11 = STOREW(VARL("EA"), op_10);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_10_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storeri_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_3 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, VARL("U"));
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
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Rt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_storerinew_ap(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));
	// Declare: ut32 EA;
	const char *Nt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Nt = VARG(Nt_tmp_assoc);
	const char *Re_assoc_tmp = ISA2REG(hi, 'e', false);

	// EXEC
	RzILOpPure *op_3 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", VARL("U"));
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *op_ASSIGN_5 = SETG(Re_assoc_tmp, VARL("U"));
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
	RzILOpPure *op_5 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_3 = SETL("EA", op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *ms_op_5_6 = STOREW(VARL("EA"), op_5);
	RzILOpEffect *instruction_sequence = SEQN(4, imm_assign_0, op_ASSIGN_3, empty_4, ms_op_5_6);

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
	RzILOpPure *op_ADD_3 = ADD(VARL("U"), op_LSHIFT_2);
	RzILOpPure *op_6 = CAST(32, IL_FALSE, Nt);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("U", U);
	RzILOpEffect *imm_assign_1 = SETL("u", u);
	RzILOpEffect *op_ASSIGN_4 = SETL("EA", op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *ms_op_6_7 = STOREW(VARL("EA"), op_6);
	RzILOpEffect *instruction_sequence = SEQN(5, imm_assign_0, imm_assign_1, op_ASSIGN_4, empty_5, ms_op_6_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subaddi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rs, Ru);
	RzILOpPure *cast_3 = CAST(32, IL_FALSE, VARL("s"));
	RzILOpPure *op_ADD_2 = ADD(op_SUB_0, cast_3);

	// WRITE
	RzILOpEffect *imm_assign_1 = SETL("s", s);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rd_assoc_tmp, op_ADD_2);
	RzILOpEffect *instruction_sequence = SEQN(2, imm_assign_1, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_subi_asl_ri(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_LSHIFT_2 = SHIFTL0(Rx, VARL("U"));
	RzILOpPure *op_SUB_3 = SUB(VARL("u"), op_LSHIFT_2);

	// WRITE
	RzILOpEffect *imm_assign_0 = SETL("u", u);
	RzILOpEffect *imm_assign_1 = SETL("U", U);
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_SUB_3);
	RzILOpEffect *instruction_sequence = SEQN(3, imm_assign_0, imm_assign_1, op_ASSIGN_4);

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
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2206;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2207;
	// Declare: ut32 h_tmp2208;
	// Declare: ut32 h_tmp2209;
	// Declare: ut64 h_tmp2210;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2211;
	// Declare: ut32 h_tmp2212;
	// Declare: ut32 h_tmp2213;
	// Declare: ut32 h_tmp2214;
	// Declare: ut64 h_tmp2215;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2216;
	// Declare: ut32 h_tmp2217;
	// Declare: ut32 h_tmp2218;
	// Declare: ut32 h_tmp2219;
	// Declare: ut64 h_tmp2220;
	// Declare: st64 h_tmp2221;
	// Declare: ut32 h_tmp2222;
	// Declare: ut32 h_tmp2223;
	// Declare: ut32 h_tmp2224;
	// Declare: ut64 h_tmp2225;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st16_15 = CAST(16, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *op_ADD_16 = ADD(cast_st16_10, cast_st16_15);
	RzILOpPure *arg_cast_18 = CAST(64, IL_FALSE, op_ADD_16);
	RzILOpPure *arg_cast_19 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_20 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2206"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *op_ADD_34 = ADD(cast_st16_28, cast_st16_33);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_ADD_34)), op_ADD_34);
	RzILOpPure *op_EQ_35 = EQ(cond_23, cast_36);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_MUL_42 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *op_ADD_47 = ADD(cast_st16_41, cast_st16_46);
	RzILOpPure *arg_cast_58 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_59 = CAST(64, MSB(DUP(VARL("h_tmp2208"))), VARL("h_tmp2208"));
	RzILOpPure *arg_cast_60 = CAST(64, MSB(DUP(VARL("h_tmp2209"))), VARL("h_tmp2209"));
	RzILOpPure *arg_cast_61 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_65 = ITE(NON_ZERO(VARL("h_tmp2207")), VARL("h_tmp2210"), cast_66);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, cond_65);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *cast_73 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_72 = LOGAND(op_RSHIFT_71, cast_73);
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *cast_78 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st16_79 = CAST(16, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *op_ADD_80 = ADD(cast_st16_74, cast_st16_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_ADD_80);
	RzILOpPure *op_LT_81 = LET("const_pos0", DUP(const_pos0), ULT(cast_82, VARLP("const_pos0")));
	RzILOpPure *op_SUB_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_84 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_83));
	RzILOpPure *op_NEG_85 = NEG(op_LSHIFT_84);
	RzILOpPure *op_SUB_86 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_87 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_86));
	RzILOpPure *cast_89 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_88 = SUB(op_LSHIFT_87, cast_89);
	RzILOpPure *cond_90 = ITE(op_LT_81, op_NEG_85, op_SUB_88);
	RzILOpPure *cast_92 = CAST(64, MSB(DUP(op_ADD_47)), op_ADD_47);
	RzILOpPure *cond_91 = ITE(op_EQ_35, cast_92, cond_90);
	RzILOpPure *cast_94 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_93 = LOGAND(cond_91, cast_94);
	RzILOpPure *cast_ut64_95 = CAST(64, IL_FALSE, op_AND_93);
	RzILOpPure *op_MUL_96 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_97 = SHIFTL0(cast_ut64_95, op_MUL_96);
	RzILOpPure *op_OR_98 = LOGOR(op_AND_3, op_LSHIFT_97);
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_102));
	RzILOpPure *op_NOT_104 = LOGNOT(op_LSHIFT_103);
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, op_NOT_104);
	RzILOpPure *op_AND_105 = LOGAND(VARG(Rdd_assoc_tmp), cast_106);
	RzILOpPure *op_NE_107 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_108 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *cast_111 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_st16_112 = CAST(16, MSB(DUP(op_AND_110)), op_AND_110);
	RzILOpPure *op_MUL_113 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st16_117 = CAST(16, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *op_SUB_118 = SUB(cast_st16_112, cast_st16_117);
	RzILOpPure *arg_cast_120 = CAST(64, IL_FALSE, op_SUB_118);
	RzILOpPure *arg_cast_121 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_122 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_125 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_107, VARL("h_tmp2211"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_126 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_127 = SHIFTR0(DUP(Rss), op_MUL_126);
	RzILOpPure *cast_129 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_128 = LOGAND(op_RSHIFT_127, cast_129);
	RzILOpPure *cast_st16_130 = CAST(16, MSB(DUP(op_AND_128)), op_AND_128);
	RzILOpPure *op_MUL_131 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rtt), op_MUL_131);
	RzILOpPure *cast_134 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_133 = LOGAND(op_RSHIFT_132, cast_134);
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *op_SUB_136 = SUB(cast_st16_130, cast_st16_135);
	RzILOpPure *cast_138 = CAST(64, MSB(DUP(op_SUB_136)), op_SUB_136);
	RzILOpPure *op_EQ_137 = EQ(cond_125, cast_138);
	RzILOpPure *op_MUL_139 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st16_143 = CAST(16, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *op_MUL_144 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_145 = SHIFTR0(DUP(Rtt), op_MUL_144);
	RzILOpPure *cast_147 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_146 = LOGAND(op_RSHIFT_145, cast_147);
	RzILOpPure *cast_st16_148 = CAST(16, MSB(DUP(op_AND_146)), op_AND_146);
	RzILOpPure *op_SUB_149 = SUB(cast_st16_143, cast_st16_148);
	RzILOpPure *arg_cast_160 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_161 = CAST(64, MSB(DUP(VARL("h_tmp2213"))), VARL("h_tmp2213"));
	RzILOpPure *arg_cast_162 = CAST(64, MSB(DUP(VARL("h_tmp2214"))), VARL("h_tmp2214"));
	RzILOpPure *arg_cast_163 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_168 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_167 = ITE(NON_ZERO(VARL("h_tmp2212")), VARL("h_tmp2215"), cast_168);
	RzILOpPure *cast_170 = CAST(32, IL_FALSE, cond_167);
	RzILOpPure *op_MUL_172 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_173 = SHIFTR0(DUP(Rss), op_MUL_172);
	RzILOpPure *cast_175 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_174 = LOGAND(op_RSHIFT_173, cast_175);
	RzILOpPure *cast_st16_176 = CAST(16, MSB(DUP(op_AND_174)), op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *cast_180 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *op_OR_200 = LOGOR(op_AND_105, op_LSHIFT_199);
	RzILOpPure *op_MUL_204 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_205 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_204));
	RzILOpPure *op_NOT_206 = LOGNOT(op_LSHIFT_205);
	RzILOpPure *cast_208 = CAST(64, IL_FALSE, op_NOT_206);
	RzILOpPure *op_AND_207 = LOGAND(VARG(Rdd_assoc_tmp), cast_208);
	RzILOpPure *op_NE_209 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_210 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_211 = SHIFTR0(DUP(Rss), op_MUL_210);
	RzILOpPure *cast_213 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_212 = LOGAND(op_RSHIFT_211, cast_213);
	RzILOpPure *cast_st16_214 = CAST(16, MSB(DUP(op_AND_212)), op_AND_212);
	RzILOpPure *op_MUL_215 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_216 = SHIFTR0(DUP(Rtt), op_MUL_215);
	RzILOpPure *cast_218 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_217 = LOGAND(op_RSHIFT_216, cast_218);
	RzILOpPure *cast_st16_219 = CAST(16, MSB(DUP(op_AND_217)), op_AND_217);
	RzILOpPure *op_ADD_220 = ADD(cast_st16_214, cast_st16_219);
	RzILOpPure *arg_cast_222 = CAST(64, IL_FALSE, op_ADD_220);
	RzILOpPure *arg_cast_223 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_224 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_227 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_209, VARL("h_tmp2216"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_228 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rss), op_MUL_228);
	RzILOpPure *cast_231 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_230 = LOGAND(op_RSHIFT_229, cast_231);
	RzILOpPure *cast_st16_232 = CAST(16, MSB(DUP(op_AND_230)), op_AND_230);
	RzILOpPure *op_MUL_233 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_234 = SHIFTR0(DUP(Rtt), op_MUL_233);
	RzILOpPure *cast_236 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_235 = LOGAND(op_RSHIFT_234, cast_236);
	RzILOpPure *cast_st16_237 = CAST(16, MSB(DUP(op_AND_235)), op_AND_235);
	RzILOpPure *op_ADD_238 = ADD(cast_st16_232, cast_st16_237);
	RzILOpPure *cast_240 = CAST(64, MSB(DUP(op_ADD_238)), op_ADD_238);
	RzILOpPure *op_EQ_239 = EQ(cond_227, cast_240);
	RzILOpPure *op_MUL_241 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_242 = SHIFTR0(DUP(Rss), op_MUL_241);
	RzILOpPure *cast_244 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_243 = LOGAND(op_RSHIFT_242, cast_244);
	RzILOpPure *cast_st16_245 = CAST(16, MSB(DUP(op_AND_243)), op_AND_243);
	RzILOpPure *op_MUL_246 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_247 = SHIFTR0(DUP(Rtt), op_MUL_246);
	RzILOpPure *cast_249 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_248 = LOGAND(op_RSHIFT_247, cast_249);
	RzILOpPure *cast_st16_250 = CAST(16, MSB(DUP(op_AND_248)), op_AND_248);
	RzILOpPure *op_ADD_251 = ADD(cast_st16_245, cast_st16_250);
	RzILOpPure *arg_cast_262 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_263 = CAST(64, MSB(DUP(VARL("h_tmp2218"))), VARL("h_tmp2218"));
	RzILOpPure *arg_cast_264 = CAST(64, MSB(DUP(VARL("h_tmp2219"))), VARL("h_tmp2219"));
	RzILOpPure *arg_cast_265 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_270 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_269 = ITE(NON_ZERO(VARL("h_tmp2217")), VARL("h_tmp2220"), cast_270);
	RzILOpPure *cast_272 = CAST(32, IL_FALSE, cond_269);
	RzILOpPure *op_MUL_274 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_275 = SHIFTR0(DUP(Rss), op_MUL_274);
	RzILOpPure *cast_277 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_276 = LOGAND(op_RSHIFT_275, cast_277);
	RzILOpPure *cast_st16_278 = CAST(16, MSB(DUP(op_AND_276)), op_AND_276);
	RzILOpPure *op_MUL_279 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_280 = SHIFTR0(DUP(Rtt), op_MUL_279);
	RzILOpPure *cast_282 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_281 = LOGAND(op_RSHIFT_280, cast_282);
	RzILOpPure *cast_st16_283 = CAST(16, MSB(DUP(op_AND_281)), op_AND_281);
	RzILOpPure *op_ADD_284 = ADD(cast_st16_278, cast_st16_283);
	RzILOpPure *cast_286 = CAST(32, IL_FALSE, op_ADD_284);
	RzILOpPure *op_LT_285 = LET("const_pos0", DUP(const_pos0), ULT(cast_286, VARLP("const_pos0")));
	RzILOpPure *op_SUB_287 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_288 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_287));
	RzILOpPure *op_NEG_289 = NEG(op_LSHIFT_288);
	RzILOpPure *op_SUB_290 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_291 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_290));
	RzILOpPure *cast_293 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_292 = SUB(op_LSHIFT_291, cast_293);
	RzILOpPure *cond_294 = ITE(op_LT_285, op_NEG_289, op_SUB_292);
	RzILOpPure *cast_296 = CAST(64, MSB(DUP(op_ADD_251)), op_ADD_251);
	RzILOpPure *cond_295 = ITE(op_EQ_239, cast_296, cond_294);
	RzILOpPure *cast_298 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_297 = LOGAND(cond_295, cast_298);
	RzILOpPure *cast_ut64_299 = CAST(64, IL_FALSE, op_AND_297);
	RzILOpPure *op_MUL_300 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_301 = SHIFTL0(cast_ut64_299, op_MUL_300);
	RzILOpPure *op_OR_302 = LOGOR(op_AND_207, op_LSHIFT_301);
	RzILOpPure *op_MUL_306 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_307 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_306));
	RzILOpPure *op_NOT_308 = LOGNOT(op_LSHIFT_307);
	RzILOpPure *cast_310 = CAST(64, IL_FALSE, op_NOT_308);
	RzILOpPure *op_AND_309 = LOGAND(VARG(Rdd_assoc_tmp), cast_310);
	RzILOpPure *op_NE_311 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_312 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_313 = SHIFTR0(DUP(Rss), op_MUL_312);
	RzILOpPure *cast_315 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_314 = LOGAND(op_RSHIFT_313, cast_315);
	RzILOpPure *cast_st16_316 = CAST(16, MSB(DUP(op_AND_314)), op_AND_314);
	RzILOpPure *op_MUL_317 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_318 = SHIFTR0(DUP(Rtt), op_MUL_317);
	RzILOpPure *cast_320 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_319 = LOGAND(op_RSHIFT_318, cast_320);
	RzILOpPure *cast_st16_321 = CAST(16, MSB(DUP(op_AND_319)), op_AND_319);
	RzILOpPure *op_SUB_322 = SUB(cast_st16_316, cast_st16_321);
	RzILOpPure *arg_cast_324 = CAST(64, IL_FALSE, op_SUB_322);
	RzILOpPure *arg_cast_325 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_326 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_329 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_311, VARL("h_tmp2221"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_330 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_331 = SHIFTR0(DUP(Rss), op_MUL_330);
	RzILOpPure *cast_333 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_332 = LOGAND(op_RSHIFT_331, cast_333);
	RzILOpPure *cast_st16_334 = CAST(16, MSB(DUP(op_AND_332)), op_AND_332);
	RzILOpPure *op_MUL_335 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_336 = SHIFTR0(DUP(Rtt), op_MUL_335);
	RzILOpPure *cast_338 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_337 = LOGAND(op_RSHIFT_336, cast_338);
	RzILOpPure *cast_st16_339 = CAST(16, MSB(DUP(op_AND_337)), op_AND_337);
	RzILOpPure *op_SUB_340 = SUB(cast_st16_334, cast_st16_339);
	RzILOpPure *cast_342 = CAST(64, MSB(DUP(op_SUB_340)), op_SUB_340);
	RzILOpPure *op_EQ_341 = EQ(cond_329, cast_342);
	RzILOpPure *op_MUL_343 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_344 = SHIFTR0(DUP(Rss), op_MUL_343);
	RzILOpPure *cast_346 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_345 = LOGAND(op_RSHIFT_344, cast_346);
	RzILOpPure *cast_st16_347 = CAST(16, MSB(DUP(op_AND_345)), op_AND_345);
	RzILOpPure *op_MUL_348 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_349 = SHIFTR0(DUP(Rtt), op_MUL_348);
	RzILOpPure *cast_351 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_350 = LOGAND(op_RSHIFT_349, cast_351);
	RzILOpPure *cast_st16_352 = CAST(16, MSB(DUP(op_AND_350)), op_AND_350);
	RzILOpPure *op_SUB_353 = SUB(cast_st16_347, cast_st16_352);
	RzILOpPure *arg_cast_364 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_365 = CAST(64, MSB(DUP(VARL("h_tmp2223"))), VARL("h_tmp2223"));
	RzILOpPure *arg_cast_366 = CAST(64, MSB(DUP(VARL("h_tmp2224"))), VARL("h_tmp2224"));
	RzILOpPure *arg_cast_367 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_372 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_371 = ITE(NON_ZERO(VARL("h_tmp2222")), VARL("h_tmp2225"), cast_372);
	RzILOpPure *cast_374 = CAST(32, IL_FALSE, cond_371);
	RzILOpPure *op_MUL_376 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_377 = SHIFTR0(DUP(Rss), op_MUL_376);
	RzILOpPure *cast_379 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_378 = LOGAND(op_RSHIFT_377, cast_379);
	RzILOpPure *cast_st16_380 = CAST(16, MSB(DUP(op_AND_378)), op_AND_378);
	RzILOpPure *op_MUL_381 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_382 = SHIFTR0(DUP(Rtt), op_MUL_381);
	RzILOpPure *cast_384 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_383 = LOGAND(op_RSHIFT_382, cast_384);
	RzILOpPure *cast_st16_385 = CAST(16, MSB(DUP(op_AND_383)), op_AND_383);
	RzILOpPure *op_SUB_386 = SUB(cast_st16_380, cast_st16_385);
	RzILOpPure *cast_388 = CAST(32, IL_FALSE, op_SUB_386);
	RzILOpPure *op_LT_387 = LET("const_pos0", DUP(const_pos0), ULT(cast_388, VARLP("const_pos0")));
	RzILOpPure *op_SUB_389 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_390 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_389));
	RzILOpPure *op_NEG_391 = NEG(op_LSHIFT_390);
	RzILOpPure *op_SUB_392 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_393 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_392));
	RzILOpPure *cast_395 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_394 = SUB(op_LSHIFT_393, cast_395);
	RzILOpPure *cond_396 = ITE(op_LT_387, op_NEG_391, op_SUB_394);
	RzILOpPure *cast_398 = CAST(64, MSB(DUP(op_SUB_353)), op_SUB_353);
	RzILOpPure *cond_397 = ITE(op_EQ_341, cast_398, cond_396);
	RzILOpPure *cast_400 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_399 = LOGAND(cond_397, cast_400);
	RzILOpPure *cast_ut64_401 = CAST(64, IL_FALSE, op_AND_399);
	RzILOpPure *op_MUL_402 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_403 = SHIFTL0(cast_ut64_401, op_MUL_402);
	RzILOpPure *op_OR_404 = LOGOR(op_AND_309, op_LSHIFT_403);

	// WRITE
	RzILOpEffect *c_call_17 = HEX_SEXTRACT64(arg_cast_18, arg_cast_19, arg_cast_20);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp2206", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2207", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp2208", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *c_call_54 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2209", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *c_call_57 = HEX_DEPOSIT64(arg_cast_58, arg_cast_59, arg_cast_60, arg_cast_61);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_62 = SETL("h_tmp2210", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_63 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_62);
	RzILOpEffect *seq_64 = SEQN(3, seq_53, seq_56, seq_63);
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc_tmp, cast_68);
	RzILOpEffect *seq_69 = SEQN(3, seq_50, seq_64, op_ASSIGN_67);
	RzILOpEffect *op_ASSIGN_99 = SETG(Rdd_assoc_tmp, op_OR_98);
	RzILOpEffect *seq_100 = SEQN(2, seq_22, op_ASSIGN_99);
	RzILOpEffect *empty_101 = EMPTY();
	RzILOpEffect *c_call_119 = HEX_SEXTRACT64(arg_cast_120, arg_cast_121, arg_cast_122);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp2211", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_119, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *c_call_150 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_151 = SETL("h_tmp2212", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_152 = SEQN(2, c_call_150, op_ASSIGN_hybrid_tmp_151);
	RzILOpEffect *c_call_153 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_154 = SETL("h_tmp2213", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_155 = SEQN(2, c_call_153, op_ASSIGN_hybrid_tmp_154);
	RzILOpEffect *c_call_156 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2214", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *c_call_159 = HEX_DEPOSIT64(arg_cast_160, arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2215", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_159, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *seq_166 = SEQN(3, seq_155, seq_158, seq_165);
	RzILOpEffect *op_ASSIGN_169 = SETG(usr_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(3, seq_152, seq_166, op_ASSIGN_169);
	RzILOpEffect *op_ASSIGN_201 = SETG(Rdd_assoc_tmp, op_OR_200);
	RzILOpEffect *seq_202 = SEQN(2, seq_124, op_ASSIGN_201);
	RzILOpEffect *empty_203 = EMPTY();
	RzILOpEffect *c_call_221 = HEX_SEXTRACT64(arg_cast_222, arg_cast_223, arg_cast_224);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_225 = SETL("h_tmp2216", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_226 = SEQN(2, c_call_221, op_ASSIGN_hybrid_tmp_225);
	RzILOpEffect *c_call_252 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_253 = SETL("h_tmp2217", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_254 = SEQN(2, c_call_252, op_ASSIGN_hybrid_tmp_253);
	RzILOpEffect *c_call_255 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_256 = SETL("h_tmp2218", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_257 = SEQN(2, c_call_255, op_ASSIGN_hybrid_tmp_256);
	RzILOpEffect *c_call_258 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_259 = SETL("h_tmp2219", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_260 = SEQN(2, c_call_258, op_ASSIGN_hybrid_tmp_259);
	RzILOpEffect *c_call_261 = HEX_DEPOSIT64(arg_cast_262, arg_cast_263, arg_cast_264, arg_cast_265);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_266 = SETL("h_tmp2220", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_267 = SEQN(2, c_call_261, op_ASSIGN_hybrid_tmp_266);
	RzILOpEffect *seq_268 = SEQN(3, seq_257, seq_260, seq_267);
	RzILOpEffect *op_ASSIGN_271 = SETG(usr_assoc_tmp, cast_272);
	RzILOpEffect *seq_273 = SEQN(3, seq_254, seq_268, op_ASSIGN_271);
	RzILOpEffect *op_ASSIGN_303 = SETG(Rdd_assoc_tmp, op_OR_302);
	RzILOpEffect *seq_304 = SEQN(2, seq_226, op_ASSIGN_303);
	RzILOpEffect *empty_305 = EMPTY();
	RzILOpEffect *c_call_323 = HEX_SEXTRACT64(arg_cast_324, arg_cast_325, arg_cast_326);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_327 = SETL("h_tmp2221", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_328 = SEQN(2, c_call_323, op_ASSIGN_hybrid_tmp_327);
	RzILOpEffect *c_call_354 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_355 = SETL("h_tmp2222", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_356 = SEQN(2, c_call_354, op_ASSIGN_hybrid_tmp_355);
	RzILOpEffect *c_call_357 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_358 = SETL("h_tmp2223", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_359 = SEQN(2, c_call_357, op_ASSIGN_hybrid_tmp_358);
	RzILOpEffect *c_call_360 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_361 = SETL("h_tmp2224", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_362 = SEQN(2, c_call_360, op_ASSIGN_hybrid_tmp_361);
	RzILOpEffect *c_call_363 = HEX_DEPOSIT64(arg_cast_364, arg_cast_365, arg_cast_366, arg_cast_367);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_368 = SETL("h_tmp2225", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_369 = SEQN(2, c_call_363, op_ASSIGN_hybrid_tmp_368);
	RzILOpEffect *seq_370 = SEQN(3, seq_359, seq_362, seq_369);
	RzILOpEffect *op_ASSIGN_373 = SETG(usr_assoc_tmp, cast_374);
	RzILOpEffect *seq_375 = SEQN(3, seq_356, seq_370, op_ASSIGN_373);
	RzILOpEffect *op_ASSIGN_405 = SETG(Rdd_assoc_tmp, op_OR_404);
	RzILOpEffect *seq_406 = SEQN(2, seq_328, op_ASSIGN_405);
	RzILOpEffect *empty_407 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_100, empty_101, seq_202, empty_203, seq_304, empty_305, seq_406, empty_407, seq_69, seq_171, seq_273, seq_375);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2226;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2227;
	// Declare: ut32 h_tmp2228;
	// Declare: ut32 h_tmp2229;
	// Declare: ut64 h_tmp2230;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2231;
	// Declare: ut32 h_tmp2232;
	// Declare: ut32 h_tmp2233;
	// Declare: ut32 h_tmp2234;
	// Declare: ut64 h_tmp2235;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2236;
	// Declare: ut32 h_tmp2237;
	// Declare: ut32 h_tmp2238;
	// Declare: ut32 h_tmp2239;
	// Declare: ut64 h_tmp2240;
	// Declare: st64 h_tmp2241;
	// Declare: ut32 h_tmp2242;
	// Declare: ut32 h_tmp2243;
	// Declare: ut32 h_tmp2244;
	// Declare: ut64 h_tmp2245;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st16_15 = CAST(16, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *op_ADD_16 = ADD(cast_st16_10, cast_st16_15);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_ADD_16);
	RzILOpPure *op_ADD_17 = LET("const_pos1", DUP(const_pos1), ADD(cast_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, op_RSHIFT_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2226"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_27 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_ADD_37 = ADD(cast_st16_31, cast_st16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, op_ADD_37);
	RzILOpPure *op_ADD_38 = LET("const_pos1", DUP(const_pos1), ADD(cast_39, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_38, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(op_RSHIFT_40)), op_RSHIFT_40);
	RzILOpPure *op_EQ_41 = EQ(cond_26, cast_42);
	RzILOpPure *op_MUL_43 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *op_MUL_48 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_ADD_53 = ADD(cast_st16_47, cast_st16_52);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, op_ADD_53);
	RzILOpPure *op_ADD_54 = LET("const_pos1", DUP(const_pos1), ADD(cast_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_56 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_54, VARLP("const_pos1")));
	RzILOpPure *arg_cast_67 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp2228"))), VARL("h_tmp2228"));
	RzILOpPure *arg_cast_69 = CAST(64, MSB(DUP(VARL("h_tmp2229"))), VARL("h_tmp2229"));
	RzILOpPure *arg_cast_70 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_75 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_74 = ITE(NON_ZERO(VARL("h_tmp2227")), VARL("h_tmp2230"), cast_75);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, cond_74);
	RzILOpPure *op_MUL_79 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *cast_82 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_81 = LOGAND(op_RSHIFT_80, cast_82);
	RzILOpPure *cast_st16_83 = CAST(16, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_87 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *op_ADD_89 = ADD(cast_st16_83, cast_st16_88);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, op_ADD_89);
	RzILOpPure *op_ADD_90 = LET("const_pos1", DUP(const_pos1), ADD(cast_91, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_92 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_90, VARLP("const_pos1")));
	RzILOpPure *op_LT_93 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_92, VARLP("const_pos0")));
	RzILOpPure *op_SUB_94 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_95 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_94));
	RzILOpPure *op_NEG_96 = NEG(op_LSHIFT_95);
	RzILOpPure *op_SUB_97 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_97));
	RzILOpPure *cast_100 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_99 = SUB(op_LSHIFT_98, cast_100);
	RzILOpPure *cond_101 = ITE(op_LT_93, op_NEG_96, op_SUB_99);
	RzILOpPure *cast_103 = CAST(64, MSB(DUP(op_RSHIFT_56)), op_RSHIFT_56);
	RzILOpPure *cond_102 = ITE(op_EQ_41, cast_103, cond_101);
	RzILOpPure *cast_105 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_104 = LOGAND(cond_102, cast_105);
	RzILOpPure *cast_ut64_106 = CAST(64, IL_FALSE, op_AND_104);
	RzILOpPure *op_MUL_107 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_108 = SHIFTL0(cast_ut64_106, op_MUL_107);
	RzILOpPure *op_OR_109 = LOGOR(op_AND_3, op_LSHIFT_108);
	RzILOpPure *op_MUL_113 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_114 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_113));
	RzILOpPure *op_NOT_115 = LOGNOT(op_LSHIFT_114);
	RzILOpPure *cast_117 = CAST(64, IL_FALSE, op_NOT_115);
	RzILOpPure *op_AND_116 = LOGAND(VARG(Rdd_assoc_tmp), cast_117);
	RzILOpPure *op_NE_118 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_119 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_MUL_124 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_127 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_st16_128 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_123, cast_st16_128);
	RzILOpPure *cast_131 = CAST(32, IL_FALSE, op_SUB_129);
	RzILOpPure *op_ADD_130 = LET("const_pos1", DUP(const_pos1), ADD(cast_131, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_132 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_139 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_118, VARL("h_tmp2231"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_140 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_140);
	RzILOpPure *cast_143 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st16_144 = CAST(16, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *op_MUL_145 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_146 = SHIFTR0(DUP(Rtt), op_MUL_145);
	RzILOpPure *cast_148 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_159 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_158 = LOGAND(op_RSHIFT_157, cast_159);
	RzILOpPure *cast_st16_160 = CAST(16, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *op_MUL_161 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_162 = SHIFTR0(DUP(Rtt), op_MUL_161);
	RzILOpPure *cast_164 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_163 = LOGAND(op_RSHIFT_162, cast_164);
	RzILOpPure *cast_st16_165 = CAST(16, MSB(DUP(op_AND_163)), op_AND_163);
	RzILOpPure *op_SUB_166 = SUB(cast_st16_160, cast_st16_165);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, op_SUB_166);
	RzILOpPure *op_ADD_167 = LET("const_pos1", DUP(const_pos1), ADD(cast_168, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_169 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_167, VARLP("const_pos1")));
	RzILOpPure *arg_cast_180 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_181 = CAST(64, MSB(DUP(VARL("h_tmp2233"))), VARL("h_tmp2233"));
	RzILOpPure *arg_cast_182 = CAST(64, MSB(DUP(VARL("h_tmp2234"))), VARL("h_tmp2234"));
	RzILOpPure *arg_cast_183 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_188 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_187 = ITE(NON_ZERO(VARL("h_tmp2232")), VARL("h_tmp2235"), cast_188);
	RzILOpPure *cast_190 = CAST(32, IL_FALSE, cond_187);
	RzILOpPure *op_MUL_192 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_193 = SHIFTR0(DUP(Rss), op_MUL_192);
	RzILOpPure *cast_195 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_194 = LOGAND(op_RSHIFT_193, cast_195);
	RzILOpPure *cast_st16_196 = CAST(16, MSB(DUP(op_AND_194)), op_AND_194);
	RzILOpPure *op_MUL_197 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_198 = SHIFTR0(DUP(Rtt), op_MUL_197);
	RzILOpPure *cast_200 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *op_OR_222 = LOGOR(op_AND_116, op_LSHIFT_221);
	RzILOpPure *op_MUL_226 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_227 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_226));
	RzILOpPure *op_NOT_228 = LOGNOT(op_LSHIFT_227);
	RzILOpPure *cast_230 = CAST(64, IL_FALSE, op_NOT_228);
	RzILOpPure *op_AND_229 = LOGAND(VARG(Rdd_assoc_tmp), cast_230);
	RzILOpPure *op_NE_231 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_232 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_233 = SHIFTR0(DUP(Rss), op_MUL_232);
	RzILOpPure *cast_235 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_234 = LOGAND(op_RSHIFT_233, cast_235);
	RzILOpPure *cast_st16_236 = CAST(16, MSB(DUP(op_AND_234)), op_AND_234);
	RzILOpPure *op_MUL_237 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_238 = SHIFTR0(DUP(Rtt), op_MUL_237);
	RzILOpPure *cast_240 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_239 = LOGAND(op_RSHIFT_238, cast_240);
	RzILOpPure *cast_st16_241 = CAST(16, MSB(DUP(op_AND_239)), op_AND_239);
	RzILOpPure *op_ADD_242 = ADD(cast_st16_236, cast_st16_241);
	RzILOpPure *cast_244 = CAST(32, IL_FALSE, op_ADD_242);
	RzILOpPure *op_ADD_243 = LET("const_pos1", DUP(const_pos1), ADD(cast_244, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_245 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_243, VARLP("const_pos1")));
	RzILOpPure *arg_cast_247 = CAST(64, IL_FALSE, op_RSHIFT_245);
	RzILOpPure *arg_cast_248 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_249 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_252 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_231, VARL("h_tmp2236"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_253 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_254 = SHIFTR0(DUP(Rss), op_MUL_253);
	RzILOpPure *cast_256 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_255 = LOGAND(op_RSHIFT_254, cast_256);
	RzILOpPure *cast_st16_257 = CAST(16, MSB(DUP(op_AND_255)), op_AND_255);
	RzILOpPure *op_MUL_258 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_259 = SHIFTR0(DUP(Rtt), op_MUL_258);
	RzILOpPure *cast_261 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_260 = LOGAND(op_RSHIFT_259, cast_261);
	RzILOpPure *cast_st16_262 = CAST(16, MSB(DUP(op_AND_260)), op_AND_260);
	RzILOpPure *op_ADD_263 = ADD(cast_st16_257, cast_st16_262);
	RzILOpPure *cast_265 = CAST(32, IL_FALSE, op_ADD_263);
	RzILOpPure *op_ADD_264 = LET("const_pos1", DUP(const_pos1), ADD(cast_265, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_266 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_264, VARLP("const_pos1")));
	RzILOpPure *cast_268 = CAST(64, MSB(DUP(op_RSHIFT_266)), op_RSHIFT_266);
	RzILOpPure *op_EQ_267 = EQ(cond_252, cast_268);
	RzILOpPure *op_MUL_269 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *cast_272 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_271 = LOGAND(op_RSHIFT_270, cast_272);
	RzILOpPure *cast_st16_273 = CAST(16, MSB(DUP(op_AND_271)), op_AND_271);
	RzILOpPure *op_MUL_274 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_275 = SHIFTR0(DUP(Rtt), op_MUL_274);
	RzILOpPure *cast_277 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_276 = LOGAND(op_RSHIFT_275, cast_277);
	RzILOpPure *cast_st16_278 = CAST(16, MSB(DUP(op_AND_276)), op_AND_276);
	RzILOpPure *op_ADD_279 = ADD(cast_st16_273, cast_st16_278);
	RzILOpPure *cast_281 = CAST(32, IL_FALSE, op_ADD_279);
	RzILOpPure *op_ADD_280 = LET("const_pos1", DUP(const_pos1), ADD(cast_281, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_282 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_280, VARLP("const_pos1")));
	RzILOpPure *arg_cast_293 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_294 = CAST(64, MSB(DUP(VARL("h_tmp2238"))), VARL("h_tmp2238"));
	RzILOpPure *arg_cast_295 = CAST(64, MSB(DUP(VARL("h_tmp2239"))), VARL("h_tmp2239"));
	RzILOpPure *arg_cast_296 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_301 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_300 = ITE(NON_ZERO(VARL("h_tmp2237")), VARL("h_tmp2240"), cast_301);
	RzILOpPure *cast_303 = CAST(32, IL_FALSE, cond_300);
	RzILOpPure *op_MUL_305 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_306 = SHIFTR0(DUP(Rss), op_MUL_305);
	RzILOpPure *cast_308 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_307 = LOGAND(op_RSHIFT_306, cast_308);
	RzILOpPure *cast_st16_309 = CAST(16, MSB(DUP(op_AND_307)), op_AND_307);
	RzILOpPure *op_MUL_310 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_311 = SHIFTR0(DUP(Rtt), op_MUL_310);
	RzILOpPure *cast_313 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_312 = LOGAND(op_RSHIFT_311, cast_313);
	RzILOpPure *cast_st16_314 = CAST(16, MSB(DUP(op_AND_312)), op_AND_312);
	RzILOpPure *op_ADD_315 = ADD(cast_st16_309, cast_st16_314);
	RzILOpPure *cast_317 = CAST(32, IL_FALSE, op_ADD_315);
	RzILOpPure *op_ADD_316 = LET("const_pos1", DUP(const_pos1), ADD(cast_317, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_318 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_316, VARLP("const_pos1")));
	RzILOpPure *op_LT_319 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_318, VARLP("const_pos0")));
	RzILOpPure *op_SUB_320 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_321 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_320));
	RzILOpPure *op_NEG_322 = NEG(op_LSHIFT_321);
	RzILOpPure *op_SUB_323 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_324 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_323));
	RzILOpPure *cast_326 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_325 = SUB(op_LSHIFT_324, cast_326);
	RzILOpPure *cond_327 = ITE(op_LT_319, op_NEG_322, op_SUB_325);
	RzILOpPure *cast_329 = CAST(64, MSB(DUP(op_RSHIFT_282)), op_RSHIFT_282);
	RzILOpPure *cond_328 = ITE(op_EQ_267, cast_329, cond_327);
	RzILOpPure *cast_331 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_330 = LOGAND(cond_328, cast_331);
	RzILOpPure *cast_ut64_332 = CAST(64, IL_FALSE, op_AND_330);
	RzILOpPure *op_MUL_333 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_334 = SHIFTL0(cast_ut64_332, op_MUL_333);
	RzILOpPure *op_OR_335 = LOGOR(op_AND_229, op_LSHIFT_334);
	RzILOpPure *op_MUL_339 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_340 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_339));
	RzILOpPure *op_NOT_341 = LOGNOT(op_LSHIFT_340);
	RzILOpPure *cast_343 = CAST(64, IL_FALSE, op_NOT_341);
	RzILOpPure *op_AND_342 = LOGAND(VARG(Rdd_assoc_tmp), cast_343);
	RzILOpPure *op_NE_344 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_345 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_346 = SHIFTR0(DUP(Rss), op_MUL_345);
	RzILOpPure *cast_348 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_347 = LOGAND(op_RSHIFT_346, cast_348);
	RzILOpPure *cast_st16_349 = CAST(16, MSB(DUP(op_AND_347)), op_AND_347);
	RzILOpPure *op_MUL_350 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_351 = SHIFTR0(DUP(Rtt), op_MUL_350);
	RzILOpPure *cast_353 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_352 = LOGAND(op_RSHIFT_351, cast_353);
	RzILOpPure *cast_st16_354 = CAST(16, MSB(DUP(op_AND_352)), op_AND_352);
	RzILOpPure *op_SUB_355 = SUB(cast_st16_349, cast_st16_354);
	RzILOpPure *cast_357 = CAST(32, IL_FALSE, op_SUB_355);
	RzILOpPure *op_ADD_356 = LET("const_pos1", DUP(const_pos1), ADD(cast_357, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_358 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_356, VARLP("const_pos1")));
	RzILOpPure *arg_cast_360 = CAST(64, IL_FALSE, op_RSHIFT_358);
	RzILOpPure *arg_cast_361 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_362 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_365 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_344, VARL("h_tmp2241"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_366 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_367 = SHIFTR0(DUP(Rss), op_MUL_366);
	RzILOpPure *cast_369 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_368 = LOGAND(op_RSHIFT_367, cast_369);
	RzILOpPure *cast_st16_370 = CAST(16, MSB(DUP(op_AND_368)), op_AND_368);
	RzILOpPure *op_MUL_371 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_372 = SHIFTR0(DUP(Rtt), op_MUL_371);
	RzILOpPure *cast_374 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_373 = LOGAND(op_RSHIFT_372, cast_374);
	RzILOpPure *cast_st16_375 = CAST(16, MSB(DUP(op_AND_373)), op_AND_373);
	RzILOpPure *op_SUB_376 = SUB(cast_st16_370, cast_st16_375);
	RzILOpPure *cast_378 = CAST(32, IL_FALSE, op_SUB_376);
	RzILOpPure *op_ADD_377 = LET("const_pos1", DUP(const_pos1), ADD(cast_378, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_379 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_377, VARLP("const_pos1")));
	RzILOpPure *cast_381 = CAST(64, MSB(DUP(op_RSHIFT_379)), op_RSHIFT_379);
	RzILOpPure *op_EQ_380 = EQ(cond_365, cast_381);
	RzILOpPure *op_MUL_382 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_383 = SHIFTR0(DUP(Rss), op_MUL_382);
	RzILOpPure *cast_385 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_384 = LOGAND(op_RSHIFT_383, cast_385);
	RzILOpPure *cast_st16_386 = CAST(16, MSB(DUP(op_AND_384)), op_AND_384);
	RzILOpPure *op_MUL_387 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_388 = SHIFTR0(DUP(Rtt), op_MUL_387);
	RzILOpPure *cast_390 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_389 = LOGAND(op_RSHIFT_388, cast_390);
	RzILOpPure *cast_st16_391 = CAST(16, MSB(DUP(op_AND_389)), op_AND_389);
	RzILOpPure *op_SUB_392 = SUB(cast_st16_386, cast_st16_391);
	RzILOpPure *cast_394 = CAST(32, IL_FALSE, op_SUB_392);
	RzILOpPure *op_ADD_393 = LET("const_pos1", DUP(const_pos1), ADD(cast_394, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_395 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_393, VARLP("const_pos1")));
	RzILOpPure *arg_cast_406 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_407 = CAST(64, MSB(DUP(VARL("h_tmp2243"))), VARL("h_tmp2243"));
	RzILOpPure *arg_cast_408 = CAST(64, MSB(DUP(VARL("h_tmp2244"))), VARL("h_tmp2244"));
	RzILOpPure *arg_cast_409 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_414 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_413 = ITE(NON_ZERO(VARL("h_tmp2242")), VARL("h_tmp2245"), cast_414);
	RzILOpPure *cast_416 = CAST(32, IL_FALSE, cond_413);
	RzILOpPure *op_MUL_418 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_419 = SHIFTR0(DUP(Rss), op_MUL_418);
	RzILOpPure *cast_421 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_420 = LOGAND(op_RSHIFT_419, cast_421);
	RzILOpPure *cast_st16_422 = CAST(16, MSB(DUP(op_AND_420)), op_AND_420);
	RzILOpPure *op_MUL_423 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_424 = SHIFTR0(DUP(Rtt), op_MUL_423);
	RzILOpPure *cast_426 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_425 = LOGAND(op_RSHIFT_424, cast_426);
	RzILOpPure *cast_st16_427 = CAST(16, MSB(DUP(op_AND_425)), op_AND_425);
	RzILOpPure *op_SUB_428 = SUB(cast_st16_422, cast_st16_427);
	RzILOpPure *cast_430 = CAST(32, IL_FALSE, op_SUB_428);
	RzILOpPure *op_ADD_429 = LET("const_pos1", DUP(const_pos1), ADD(cast_430, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_431 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_429, VARLP("const_pos1")));
	RzILOpPure *op_LT_432 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_431, VARLP("const_pos0")));
	RzILOpPure *op_SUB_433 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_434 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_433));
	RzILOpPure *op_NEG_435 = NEG(op_LSHIFT_434);
	RzILOpPure *op_SUB_436 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_437 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_436));
	RzILOpPure *cast_439 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_438 = SUB(op_LSHIFT_437, cast_439);
	RzILOpPure *cond_440 = ITE(op_LT_432, op_NEG_435, op_SUB_438);
	RzILOpPure *cast_442 = CAST(64, MSB(DUP(op_RSHIFT_395)), op_RSHIFT_395);
	RzILOpPure *cond_441 = ITE(op_EQ_380, cast_442, cond_440);
	RzILOpPure *cast_444 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_443 = LOGAND(cond_441, cast_444);
	RzILOpPure *cast_ut64_445 = CAST(64, IL_FALSE, op_AND_443);
	RzILOpPure *op_MUL_446 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_447 = SHIFTL0(cast_ut64_445, op_MUL_446);
	RzILOpPure *op_OR_448 = LOGOR(op_AND_342, op_LSHIFT_447);

	// WRITE
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2226", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_57 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_58 = SETL("h_tmp2227", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_59 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_58);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp2228", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp2229", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_DEPOSIT64(arg_cast_67, arg_cast_68, arg_cast_69, arg_cast_70);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp2230", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *seq_73 = SEQN(3, seq_62, seq_65, seq_72);
	RzILOpEffect *op_ASSIGN_76 = SETG(usr_assoc_tmp, cast_77);
	RzILOpEffect *seq_78 = SEQN(3, seq_59, seq_73, op_ASSIGN_76);
	RzILOpEffect *op_ASSIGN_110 = SETG(Rdd_assoc_tmp, op_OR_109);
	RzILOpEffect *seq_111 = SEQN(2, seq_25, op_ASSIGN_110);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *c_call_133 = HEX_SEXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp2231", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_170 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_171 = SETL("h_tmp2232", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_172 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_171);
	RzILOpEffect *c_call_173 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2233", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_173, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *c_call_176 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp2234", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_179 = HEX_DEPOSIT64(arg_cast_180, arg_cast_181, arg_cast_182, arg_cast_183);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_184 = SETL("h_tmp2235", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_185 = SEQN(2, c_call_179, op_ASSIGN_hybrid_tmp_184);
	RzILOpEffect *seq_186 = SEQN(3, seq_175, seq_178, seq_185);
	RzILOpEffect *op_ASSIGN_189 = SETG(usr_assoc_tmp, cast_190);
	RzILOpEffect *seq_191 = SEQN(3, seq_172, seq_186, op_ASSIGN_189);
	RzILOpEffect *op_ASSIGN_223 = SETG(Rdd_assoc_tmp, op_OR_222);
	RzILOpEffect *seq_224 = SEQN(2, seq_138, op_ASSIGN_223);
	RzILOpEffect *empty_225 = EMPTY();
	RzILOpEffect *c_call_246 = HEX_SEXTRACT64(arg_cast_247, arg_cast_248, arg_cast_249);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_250 = SETL("h_tmp2236", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_251 = SEQN(2, c_call_246, op_ASSIGN_hybrid_tmp_250);
	RzILOpEffect *c_call_283 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_284 = SETL("h_tmp2237", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_285 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_284);
	RzILOpEffect *c_call_286 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_287 = SETL("h_tmp2238", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_288 = SEQN(2, c_call_286, op_ASSIGN_hybrid_tmp_287);
	RzILOpEffect *c_call_289 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_290 = SETL("h_tmp2239", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_291 = SEQN(2, c_call_289, op_ASSIGN_hybrid_tmp_290);
	RzILOpEffect *c_call_292 = HEX_DEPOSIT64(arg_cast_293, arg_cast_294, arg_cast_295, arg_cast_296);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_297 = SETL("h_tmp2240", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_298 = SEQN(2, c_call_292, op_ASSIGN_hybrid_tmp_297);
	RzILOpEffect *seq_299 = SEQN(3, seq_288, seq_291, seq_298);
	RzILOpEffect *op_ASSIGN_302 = SETG(usr_assoc_tmp, cast_303);
	RzILOpEffect *seq_304 = SEQN(3, seq_285, seq_299, op_ASSIGN_302);
	RzILOpEffect *op_ASSIGN_336 = SETG(Rdd_assoc_tmp, op_OR_335);
	RzILOpEffect *seq_337 = SEQN(2, seq_251, op_ASSIGN_336);
	RzILOpEffect *empty_338 = EMPTY();
	RzILOpEffect *c_call_359 = HEX_SEXTRACT64(arg_cast_360, arg_cast_361, arg_cast_362);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_363 = SETL("h_tmp2241", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_364 = SEQN(2, c_call_359, op_ASSIGN_hybrid_tmp_363);
	RzILOpEffect *c_call_396 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_397 = SETL("h_tmp2242", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_398 = SEQN(2, c_call_396, op_ASSIGN_hybrid_tmp_397);
	RzILOpEffect *c_call_399 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_400 = SETL("h_tmp2243", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_401 = SEQN(2, c_call_399, op_ASSIGN_hybrid_tmp_400);
	RzILOpEffect *c_call_402 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_403 = SETL("h_tmp2244", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_404 = SEQN(2, c_call_402, op_ASSIGN_hybrid_tmp_403);
	RzILOpEffect *c_call_405 = HEX_DEPOSIT64(arg_cast_406, arg_cast_407, arg_cast_408, arg_cast_409);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_410 = SETL("h_tmp2245", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_411 = SEQN(2, c_call_405, op_ASSIGN_hybrid_tmp_410);
	RzILOpEffect *seq_412 = SEQN(3, seq_401, seq_404, seq_411);
	RzILOpEffect *op_ASSIGN_415 = SETG(usr_assoc_tmp, cast_416);
	RzILOpEffect *seq_417 = SEQN(3, seq_398, seq_412, op_ASSIGN_415);
	RzILOpEffect *op_ASSIGN_449 = SETG(Rdd_assoc_tmp, op_OR_448);
	RzILOpEffect *seq_450 = SEQN(2, seq_364, op_ASSIGN_449);
	RzILOpEffect *empty_451 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_111, empty_112, seq_224, empty_225, seq_337, empty_338, seq_450, empty_451, seq_78, seq_191, seq_304, seq_417);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2246;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2247;
	// Declare: ut32 h_tmp2248;
	// Declare: ut32 h_tmp2249;
	// Declare: ut64 h_tmp2250;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2251;
	// Declare: ut32 h_tmp2252;
	// Declare: ut32 h_tmp2253;
	// Declare: ut32 h_tmp2254;
	// Declare: ut64 h_tmp2255;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *op_ADD_18 = ADD(cast_st64_11, cast_st64_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, op_ADD_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2246"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_26 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *cast_35 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st32_36 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(cast_st32_36)), cast_st32_36);
	RzILOpPure *op_ADD_38 = ADD(cast_st64_31, cast_st64_37);
	RzILOpPure *op_EQ_39 = EQ(cond_25, op_ADD_38);
	RzILOpPure *op_MUL_40 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st32_44 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_45 = CAST(64, MSB(DUP(cast_st32_44)), cast_st32_44);
	RzILOpPure *op_MUL_46 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rtt), op_MUL_46);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *op_ADD_52 = ADD(cast_st64_45, cast_st64_51);
	RzILOpPure *arg_cast_63 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_64 = CAST(64, MSB(DUP(VARL("h_tmp2248"))), VARL("h_tmp2248"));
	RzILOpPure *arg_cast_65 = CAST(64, MSB(DUP(VARL("h_tmp2249"))), VARL("h_tmp2249"));
	RzILOpPure *arg_cast_66 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_71 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_70 = ITE(NON_ZERO(VARL("h_tmp2247")), VARL("h_tmp2250"), cast_71);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, cond_70);
	RzILOpPure *op_MUL_75 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rss), op_MUL_75);
	RzILOpPure *cast_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *op_MUL_81 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rtt), op_MUL_81);
	RzILOpPure *cast_84 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_83 = LOGAND(op_RSHIFT_82, cast_84);
	RzILOpPure *cast_st32_85 = CAST(32, MSB(DUP(op_AND_83)), op_AND_83);
	RzILOpPure *cast_st64_86 = CAST(64, MSB(DUP(cast_st32_85)), cast_st32_85);
	RzILOpPure *op_ADD_87 = ADD(cast_st64_80, cast_st64_86);
	RzILOpPure *cast_89 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_88 = SLT(op_ADD_87, cast_89);
	RzILOpPure *op_SUB_90 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_91 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_90));
	RzILOpPure *op_NEG_92 = NEG(op_LSHIFT_91);
	RzILOpPure *op_SUB_93 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_94 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_93));
	RzILOpPure *cast_96 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_95 = SUB(op_LSHIFT_94, cast_96);
	RzILOpPure *cond_97 = ITE(op_LT_88, op_NEG_92, op_SUB_95);
	RzILOpPure *cond_98 = ITE(op_EQ_39, op_ADD_52, cond_97);
	RzILOpPure *op_AND_99 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_98, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_100 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_101 = SHIFTL0(op_AND_99, op_MUL_100);
	RzILOpPure *cast_103 = CAST(64, IL_FALSE, op_LSHIFT_101);
	RzILOpPure *op_OR_102 = LOGOR(op_AND_3, cast_103);
	RzILOpPure *op_MUL_107 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_108 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_107));
	RzILOpPure *op_NOT_109 = LOGNOT(op_LSHIFT_108);
	RzILOpPure *cast_111 = CAST(64, IL_FALSE, op_NOT_109);
	RzILOpPure *op_AND_110 = LOGAND(VARG(Rdd_assoc_tmp), cast_111);
	RzILOpPure *op_NE_112 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_113 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rss), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st32_117 = CAST(32, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *cast_st64_118 = CAST(64, MSB(DUP(cast_st32_117)), cast_st32_117);
	RzILOpPure *op_MUL_119 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rtt), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st32_123 = CAST(32, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *cast_st64_124 = CAST(64, MSB(DUP(cast_st32_123)), cast_st32_123);
	RzILOpPure *op_SUB_125 = SUB(cast_st64_118, cast_st64_124);
	RzILOpPure *arg_cast_127 = CAST(64, IL_FALSE, op_SUB_125);
	RzILOpPure *arg_cast_128 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_129 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_132 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_112, VARL("h_tmp2251"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_133 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_134 = SHIFTR0(DUP(Rss), op_MUL_133);
	RzILOpPure *cast_136 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_135 = LOGAND(op_RSHIFT_134, cast_136);
	RzILOpPure *cast_st32_137 = CAST(32, MSB(DUP(op_AND_135)), op_AND_135);
	RzILOpPure *cast_st64_138 = CAST(64, MSB(DUP(cast_st32_137)), cast_st32_137);
	RzILOpPure *op_MUL_139 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rtt), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st32_143 = CAST(32, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *cast_st64_144 = CAST(64, MSB(DUP(cast_st32_143)), cast_st32_143);
	RzILOpPure *op_SUB_145 = SUB(cast_st64_138, cast_st64_144);
	RzILOpPure *op_EQ_146 = EQ(cond_132, op_SUB_145);
	RzILOpPure *op_MUL_147 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_148 = SHIFTR0(DUP(Rss), op_MUL_147);
	RzILOpPure *cast_150 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_149 = LOGAND(op_RSHIFT_148, cast_150);
	RzILOpPure *cast_st32_151 = CAST(32, MSB(DUP(op_AND_149)), op_AND_149);
	RzILOpPure *cast_st64_152 = CAST(64, MSB(DUP(cast_st32_151)), cast_st32_151);
	RzILOpPure *op_MUL_153 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rtt), op_MUL_153);
	RzILOpPure *cast_156 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_155 = LOGAND(op_RSHIFT_154, cast_156);
	RzILOpPure *cast_st32_157 = CAST(32, MSB(DUP(op_AND_155)), op_AND_155);
	RzILOpPure *cast_st64_158 = CAST(64, MSB(DUP(cast_st32_157)), cast_st32_157);
	RzILOpPure *op_SUB_159 = SUB(cast_st64_152, cast_st64_158);
	RzILOpPure *arg_cast_170 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_171 = CAST(64, MSB(DUP(VARL("h_tmp2253"))), VARL("h_tmp2253"));
	RzILOpPure *arg_cast_172 = CAST(64, MSB(DUP(VARL("h_tmp2254"))), VARL("h_tmp2254"));
	RzILOpPure *arg_cast_173 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_178 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_177 = ITE(NON_ZERO(VARL("h_tmp2252")), VARL("h_tmp2255"), cast_178);
	RzILOpPure *cast_180 = CAST(32, IL_FALSE, cond_177);
	RzILOpPure *op_MUL_182 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rss), op_MUL_182);
	RzILOpPure *cast_185 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_184 = LOGAND(op_RSHIFT_183, cast_185);
	RzILOpPure *cast_st32_186 = CAST(32, MSB(DUP(op_AND_184)), op_AND_184);
	RzILOpPure *cast_st64_187 = CAST(64, MSB(DUP(cast_st32_186)), cast_st32_186);
	RzILOpPure *op_MUL_188 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_189 = SHIFTR0(DUP(Rtt), op_MUL_188);
	RzILOpPure *cast_191 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_190 = LOGAND(op_RSHIFT_189, cast_191);
	RzILOpPure *cast_st32_192 = CAST(32, MSB(DUP(op_AND_190)), op_AND_190);
	RzILOpPure *cast_st64_193 = CAST(64, MSB(DUP(cast_st32_192)), cast_st32_192);
	RzILOpPure *op_SUB_194 = SUB(cast_st64_187, cast_st64_193);
	RzILOpPure *cast_196 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_195 = SLT(op_SUB_194, cast_196);
	RzILOpPure *op_SUB_197 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_198 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_197));
	RzILOpPure *op_NEG_199 = NEG(op_LSHIFT_198);
	RzILOpPure *op_SUB_200 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_201 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_200));
	RzILOpPure *cast_203 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_202 = SUB(op_LSHIFT_201, cast_203);
	RzILOpPure *cond_204 = ITE(op_LT_195, op_NEG_199, op_SUB_202);
	RzILOpPure *cond_205 = ITE(op_EQ_146, op_SUB_159, cond_204);
	RzILOpPure *op_AND_206 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_205, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_207 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_208 = SHIFTL0(op_AND_206, op_MUL_207);
	RzILOpPure *cast_210 = CAST(64, IL_FALSE, op_LSHIFT_208);
	RzILOpPure *op_OR_209 = LOGOR(op_AND_110, cast_210);

	// WRITE
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2246", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_53 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2247", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2248", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2249", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_DEPOSIT64(arg_cast_63, arg_cast_64, arg_cast_65, arg_cast_66);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp2250", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *seq_69 = SEQN(3, seq_58, seq_61, seq_68);
	RzILOpEffect *op_ASSIGN_72 = SETG(usr_assoc_tmp, cast_73);
	RzILOpEffect *seq_74 = SEQN(3, seq_55, seq_69, op_ASSIGN_72);
	RzILOpEffect *op_ASSIGN_104 = SETG(Rdd_assoc_tmp, op_OR_102);
	RzILOpEffect *seq_105 = SEQN(2, seq_24, op_ASSIGN_104);
	RzILOpEffect *empty_106 = EMPTY();
	RzILOpEffect *c_call_126 = HEX_SEXTRACT64(arg_cast_127, arg_cast_128, arg_cast_129);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_130 = SETL("h_tmp2251", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_131 = SEQN(2, c_call_126, op_ASSIGN_hybrid_tmp_130);
	RzILOpEffect *c_call_160 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_161 = SETL("h_tmp2252", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_162 = SEQN(2, c_call_160, op_ASSIGN_hybrid_tmp_161);
	RzILOpEffect *c_call_163 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2253", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_163, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *c_call_166 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_167 = SETL("h_tmp2254", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_168 = SEQN(2, c_call_166, op_ASSIGN_hybrid_tmp_167);
	RzILOpEffect *c_call_169 = HEX_DEPOSIT64(arg_cast_170, arg_cast_171, arg_cast_172, arg_cast_173);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2255", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_169, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *seq_176 = SEQN(3, seq_165, seq_168, seq_175);
	RzILOpEffect *op_ASSIGN_179 = SETG(usr_assoc_tmp, cast_180);
	RzILOpEffect *seq_181 = SEQN(3, seq_162, seq_176, op_ASSIGN_179);
	RzILOpEffect *op_ASSIGN_211 = SETG(Rdd_assoc_tmp, op_OR_209);
	RzILOpEffect *seq_212 = SEQN(2, seq_131, op_ASSIGN_211);
	RzILOpEffect *empty_213 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, seq_105, empty_106, seq_212, empty_213, seq_74, seq_181);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2256;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2257;
	// Declare: ut32 h_tmp2258;
	// Declare: ut32 h_tmp2259;
	// Declare: ut64 h_tmp2260;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2261;
	// Declare: ut32 h_tmp2262;
	// Declare: ut32 h_tmp2263;
	// Declare: ut32 h_tmp2264;
	// Declare: ut64 h_tmp2265;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2266;
	// Declare: ut32 h_tmp2267;
	// Declare: ut32 h_tmp2268;
	// Declare: ut32 h_tmp2269;
	// Declare: ut64 h_tmp2270;
	// Declare: st64 h_tmp2271;
	// Declare: ut32 h_tmp2272;
	// Declare: ut32 h_tmp2273;
	// Declare: ut32 h_tmp2274;
	// Declare: ut64 h_tmp2275;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st16_15 = CAST(16, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *op_SUB_16 = SUB(cast_st16_10, cast_st16_15);
	RzILOpPure *arg_cast_18 = CAST(64, IL_FALSE, op_SUB_16);
	RzILOpPure *arg_cast_19 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_20 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_23 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2256"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_24 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *cast_27 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_26 = LOGAND(op_RSHIFT_25, cast_27);
	RzILOpPure *cast_st16_28 = CAST(16, MSB(DUP(op_AND_26)), op_AND_26);
	RzILOpPure *op_MUL_29 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_29);
	RzILOpPure *cast_32 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st16_33 = CAST(16, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *op_SUB_34 = SUB(cast_st16_28, cast_st16_33);
	RzILOpPure *cast_36 = CAST(64, MSB(DUP(op_SUB_34)), op_SUB_34);
	RzILOpPure *op_EQ_35 = EQ(cond_23, cast_36);
	RzILOpPure *op_MUL_37 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rss), op_MUL_37);
	RzILOpPure *cast_40 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_39 = LOGAND(op_RSHIFT_38, cast_40);
	RzILOpPure *cast_st16_41 = CAST(16, MSB(DUP(op_AND_39)), op_AND_39);
	RzILOpPure *op_MUL_42 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *cast_45 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st16_46 = CAST(16, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *op_SUB_47 = SUB(cast_st16_41, cast_st16_46);
	RzILOpPure *arg_cast_58 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_59 = CAST(64, MSB(DUP(VARL("h_tmp2258"))), VARL("h_tmp2258"));
	RzILOpPure *arg_cast_60 = CAST(64, MSB(DUP(VARL("h_tmp2259"))), VARL("h_tmp2259"));
	RzILOpPure *arg_cast_61 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_66 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_65 = ITE(NON_ZERO(VARL("h_tmp2257")), VARL("h_tmp2260"), cast_66);
	RzILOpPure *cast_68 = CAST(32, IL_FALSE, cond_65);
	RzILOpPure *op_MUL_70 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *cast_73 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_72 = LOGAND(op_RSHIFT_71, cast_73);
	RzILOpPure *cast_st16_74 = CAST(16, MSB(DUP(op_AND_72)), op_AND_72);
	RzILOpPure *op_MUL_75 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rtt), op_MUL_75);
	RzILOpPure *cast_78 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st16_79 = CAST(16, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *op_SUB_80 = SUB(cast_st16_74, cast_st16_79);
	RzILOpPure *cast_82 = CAST(32, IL_FALSE, op_SUB_80);
	RzILOpPure *op_LT_81 = LET("const_pos0", DUP(const_pos0), ULT(cast_82, VARLP("const_pos0")));
	RzILOpPure *op_SUB_83 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_84 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_83));
	RzILOpPure *op_NEG_85 = NEG(op_LSHIFT_84);
	RzILOpPure *op_SUB_86 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_87 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_86));
	RzILOpPure *cast_89 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_88 = SUB(op_LSHIFT_87, cast_89);
	RzILOpPure *cond_90 = ITE(op_LT_81, op_NEG_85, op_SUB_88);
	RzILOpPure *cast_92 = CAST(64, MSB(DUP(op_SUB_47)), op_SUB_47);
	RzILOpPure *cond_91 = ITE(op_EQ_35, cast_92, cond_90);
	RzILOpPure *cast_94 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_93 = LOGAND(cond_91, cast_94);
	RzILOpPure *cast_ut64_95 = CAST(64, IL_FALSE, op_AND_93);
	RzILOpPure *op_MUL_96 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_97 = SHIFTL0(cast_ut64_95, op_MUL_96);
	RzILOpPure *op_OR_98 = LOGOR(op_AND_3, op_LSHIFT_97);
	RzILOpPure *op_MUL_102 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_103 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_102));
	RzILOpPure *op_NOT_104 = LOGNOT(op_LSHIFT_103);
	RzILOpPure *cast_106 = CAST(64, IL_FALSE, op_NOT_104);
	RzILOpPure *op_AND_105 = LOGAND(VARG(Rdd_assoc_tmp), cast_106);
	RzILOpPure *op_NE_107 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_108 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *cast_111 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_110 = LOGAND(op_RSHIFT_109, cast_111);
	RzILOpPure *cast_st16_112 = CAST(16, MSB(DUP(op_AND_110)), op_AND_110);
	RzILOpPure *op_MUL_113 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st16_117 = CAST(16, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *op_ADD_118 = ADD(cast_st16_112, cast_st16_117);
	RzILOpPure *arg_cast_120 = CAST(64, IL_FALSE, op_ADD_118);
	RzILOpPure *arg_cast_121 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_122 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_125 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_107, VARL("h_tmp2261"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_126 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_127 = SHIFTR0(DUP(Rss), op_MUL_126);
	RzILOpPure *cast_129 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_128 = LOGAND(op_RSHIFT_127, cast_129);
	RzILOpPure *cast_st16_130 = CAST(16, MSB(DUP(op_AND_128)), op_AND_128);
	RzILOpPure *op_MUL_131 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_132 = SHIFTR0(DUP(Rtt), op_MUL_131);
	RzILOpPure *cast_134 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_133 = LOGAND(op_RSHIFT_132, cast_134);
	RzILOpPure *cast_st16_135 = CAST(16, MSB(DUP(op_AND_133)), op_AND_133);
	RzILOpPure *op_ADD_136 = ADD(cast_st16_130, cast_st16_135);
	RzILOpPure *cast_138 = CAST(64, MSB(DUP(op_ADD_136)), op_ADD_136);
	RzILOpPure *op_EQ_137 = EQ(cond_125, cast_138);
	RzILOpPure *op_MUL_139 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rss), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st16_143 = CAST(16, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *op_MUL_144 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_145 = SHIFTR0(DUP(Rtt), op_MUL_144);
	RzILOpPure *cast_147 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_146 = LOGAND(op_RSHIFT_145, cast_147);
	RzILOpPure *cast_st16_148 = CAST(16, MSB(DUP(op_AND_146)), op_AND_146);
	RzILOpPure *op_ADD_149 = ADD(cast_st16_143, cast_st16_148);
	RzILOpPure *arg_cast_160 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_161 = CAST(64, MSB(DUP(VARL("h_tmp2263"))), VARL("h_tmp2263"));
	RzILOpPure *arg_cast_162 = CAST(64, MSB(DUP(VARL("h_tmp2264"))), VARL("h_tmp2264"));
	RzILOpPure *arg_cast_163 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_168 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_167 = ITE(NON_ZERO(VARL("h_tmp2262")), VARL("h_tmp2265"), cast_168);
	RzILOpPure *cast_170 = CAST(32, IL_FALSE, cond_167);
	RzILOpPure *op_MUL_172 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_173 = SHIFTR0(DUP(Rss), op_MUL_172);
	RzILOpPure *cast_175 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_174 = LOGAND(op_RSHIFT_173, cast_175);
	RzILOpPure *cast_st16_176 = CAST(16, MSB(DUP(op_AND_174)), op_AND_174);
	RzILOpPure *op_MUL_177 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_178 = SHIFTR0(DUP(Rtt), op_MUL_177);
	RzILOpPure *cast_180 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *op_OR_200 = LOGOR(op_AND_105, op_LSHIFT_199);
	RzILOpPure *op_MUL_204 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_205 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_204));
	RzILOpPure *op_NOT_206 = LOGNOT(op_LSHIFT_205);
	RzILOpPure *cast_208 = CAST(64, IL_FALSE, op_NOT_206);
	RzILOpPure *op_AND_207 = LOGAND(VARG(Rdd_assoc_tmp), cast_208);
	RzILOpPure *op_NE_209 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_210 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_211 = SHIFTR0(DUP(Rss), op_MUL_210);
	RzILOpPure *cast_213 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_212 = LOGAND(op_RSHIFT_211, cast_213);
	RzILOpPure *cast_st16_214 = CAST(16, MSB(DUP(op_AND_212)), op_AND_212);
	RzILOpPure *op_MUL_215 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_216 = SHIFTR0(DUP(Rtt), op_MUL_215);
	RzILOpPure *cast_218 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_217 = LOGAND(op_RSHIFT_216, cast_218);
	RzILOpPure *cast_st16_219 = CAST(16, MSB(DUP(op_AND_217)), op_AND_217);
	RzILOpPure *op_SUB_220 = SUB(cast_st16_214, cast_st16_219);
	RzILOpPure *arg_cast_222 = CAST(64, IL_FALSE, op_SUB_220);
	RzILOpPure *arg_cast_223 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_224 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_227 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_209, VARL("h_tmp2266"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_228 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_229 = SHIFTR0(DUP(Rss), op_MUL_228);
	RzILOpPure *cast_231 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_230 = LOGAND(op_RSHIFT_229, cast_231);
	RzILOpPure *cast_st16_232 = CAST(16, MSB(DUP(op_AND_230)), op_AND_230);
	RzILOpPure *op_MUL_233 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_234 = SHIFTR0(DUP(Rtt), op_MUL_233);
	RzILOpPure *cast_236 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_235 = LOGAND(op_RSHIFT_234, cast_236);
	RzILOpPure *cast_st16_237 = CAST(16, MSB(DUP(op_AND_235)), op_AND_235);
	RzILOpPure *op_SUB_238 = SUB(cast_st16_232, cast_st16_237);
	RzILOpPure *cast_240 = CAST(64, MSB(DUP(op_SUB_238)), op_SUB_238);
	RzILOpPure *op_EQ_239 = EQ(cond_227, cast_240);
	RzILOpPure *op_MUL_241 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_242 = SHIFTR0(DUP(Rss), op_MUL_241);
	RzILOpPure *cast_244 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_243 = LOGAND(op_RSHIFT_242, cast_244);
	RzILOpPure *cast_st16_245 = CAST(16, MSB(DUP(op_AND_243)), op_AND_243);
	RzILOpPure *op_MUL_246 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_247 = SHIFTR0(DUP(Rtt), op_MUL_246);
	RzILOpPure *cast_249 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_248 = LOGAND(op_RSHIFT_247, cast_249);
	RzILOpPure *cast_st16_250 = CAST(16, MSB(DUP(op_AND_248)), op_AND_248);
	RzILOpPure *op_SUB_251 = SUB(cast_st16_245, cast_st16_250);
	RzILOpPure *arg_cast_262 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_263 = CAST(64, MSB(DUP(VARL("h_tmp2268"))), VARL("h_tmp2268"));
	RzILOpPure *arg_cast_264 = CAST(64, MSB(DUP(VARL("h_tmp2269"))), VARL("h_tmp2269"));
	RzILOpPure *arg_cast_265 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_270 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_269 = ITE(NON_ZERO(VARL("h_tmp2267")), VARL("h_tmp2270"), cast_270);
	RzILOpPure *cast_272 = CAST(32, IL_FALSE, cond_269);
	RzILOpPure *op_MUL_274 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_275 = SHIFTR0(DUP(Rss), op_MUL_274);
	RzILOpPure *cast_277 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_276 = LOGAND(op_RSHIFT_275, cast_277);
	RzILOpPure *cast_st16_278 = CAST(16, MSB(DUP(op_AND_276)), op_AND_276);
	RzILOpPure *op_MUL_279 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_280 = SHIFTR0(DUP(Rtt), op_MUL_279);
	RzILOpPure *cast_282 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_281 = LOGAND(op_RSHIFT_280, cast_282);
	RzILOpPure *cast_st16_283 = CAST(16, MSB(DUP(op_AND_281)), op_AND_281);
	RzILOpPure *op_SUB_284 = SUB(cast_st16_278, cast_st16_283);
	RzILOpPure *cast_286 = CAST(32, IL_FALSE, op_SUB_284);
	RzILOpPure *op_LT_285 = LET("const_pos0", DUP(const_pos0), ULT(cast_286, VARLP("const_pos0")));
	RzILOpPure *op_SUB_287 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_288 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_287));
	RzILOpPure *op_NEG_289 = NEG(op_LSHIFT_288);
	RzILOpPure *op_SUB_290 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_291 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_290));
	RzILOpPure *cast_293 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_292 = SUB(op_LSHIFT_291, cast_293);
	RzILOpPure *cond_294 = ITE(op_LT_285, op_NEG_289, op_SUB_292);
	RzILOpPure *cast_296 = CAST(64, MSB(DUP(op_SUB_251)), op_SUB_251);
	RzILOpPure *cond_295 = ITE(op_EQ_239, cast_296, cond_294);
	RzILOpPure *cast_298 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_297 = LOGAND(cond_295, cast_298);
	RzILOpPure *cast_ut64_299 = CAST(64, IL_FALSE, op_AND_297);
	RzILOpPure *op_MUL_300 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_301 = SHIFTL0(cast_ut64_299, op_MUL_300);
	RzILOpPure *op_OR_302 = LOGOR(op_AND_207, op_LSHIFT_301);
	RzILOpPure *op_MUL_306 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_307 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_306));
	RzILOpPure *op_NOT_308 = LOGNOT(op_LSHIFT_307);
	RzILOpPure *cast_310 = CAST(64, IL_FALSE, op_NOT_308);
	RzILOpPure *op_AND_309 = LOGAND(VARG(Rdd_assoc_tmp), cast_310);
	RzILOpPure *op_NE_311 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_312 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_313 = SHIFTR0(DUP(Rss), op_MUL_312);
	RzILOpPure *cast_315 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_314 = LOGAND(op_RSHIFT_313, cast_315);
	RzILOpPure *cast_st16_316 = CAST(16, MSB(DUP(op_AND_314)), op_AND_314);
	RzILOpPure *op_MUL_317 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_318 = SHIFTR0(DUP(Rtt), op_MUL_317);
	RzILOpPure *cast_320 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_319 = LOGAND(op_RSHIFT_318, cast_320);
	RzILOpPure *cast_st16_321 = CAST(16, MSB(DUP(op_AND_319)), op_AND_319);
	RzILOpPure *op_ADD_322 = ADD(cast_st16_316, cast_st16_321);
	RzILOpPure *arg_cast_324 = CAST(64, IL_FALSE, op_ADD_322);
	RzILOpPure *arg_cast_325 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_326 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_329 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_311, VARL("h_tmp2271"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_330 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_331 = SHIFTR0(DUP(Rss), op_MUL_330);
	RzILOpPure *cast_333 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_332 = LOGAND(op_RSHIFT_331, cast_333);
	RzILOpPure *cast_st16_334 = CAST(16, MSB(DUP(op_AND_332)), op_AND_332);
	RzILOpPure *op_MUL_335 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_336 = SHIFTR0(DUP(Rtt), op_MUL_335);
	RzILOpPure *cast_338 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_337 = LOGAND(op_RSHIFT_336, cast_338);
	RzILOpPure *cast_st16_339 = CAST(16, MSB(DUP(op_AND_337)), op_AND_337);
	RzILOpPure *op_ADD_340 = ADD(cast_st16_334, cast_st16_339);
	RzILOpPure *cast_342 = CAST(64, MSB(DUP(op_ADD_340)), op_ADD_340);
	RzILOpPure *op_EQ_341 = EQ(cond_329, cast_342);
	RzILOpPure *op_MUL_343 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_344 = SHIFTR0(DUP(Rss), op_MUL_343);
	RzILOpPure *cast_346 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_345 = LOGAND(op_RSHIFT_344, cast_346);
	RzILOpPure *cast_st16_347 = CAST(16, MSB(DUP(op_AND_345)), op_AND_345);
	RzILOpPure *op_MUL_348 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_349 = SHIFTR0(DUP(Rtt), op_MUL_348);
	RzILOpPure *cast_351 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_350 = LOGAND(op_RSHIFT_349, cast_351);
	RzILOpPure *cast_st16_352 = CAST(16, MSB(DUP(op_AND_350)), op_AND_350);
	RzILOpPure *op_ADD_353 = ADD(cast_st16_347, cast_st16_352);
	RzILOpPure *arg_cast_364 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_365 = CAST(64, MSB(DUP(VARL("h_tmp2273"))), VARL("h_tmp2273"));
	RzILOpPure *arg_cast_366 = CAST(64, MSB(DUP(VARL("h_tmp2274"))), VARL("h_tmp2274"));
	RzILOpPure *arg_cast_367 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_372 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_371 = ITE(NON_ZERO(VARL("h_tmp2272")), VARL("h_tmp2275"), cast_372);
	RzILOpPure *cast_374 = CAST(32, IL_FALSE, cond_371);
	RzILOpPure *op_MUL_376 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_377 = SHIFTR0(DUP(Rss), op_MUL_376);
	RzILOpPure *cast_379 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_378 = LOGAND(op_RSHIFT_377, cast_379);
	RzILOpPure *cast_st16_380 = CAST(16, MSB(DUP(op_AND_378)), op_AND_378);
	RzILOpPure *op_MUL_381 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_382 = SHIFTR0(DUP(Rtt), op_MUL_381);
	RzILOpPure *cast_384 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_383 = LOGAND(op_RSHIFT_382, cast_384);
	RzILOpPure *cast_st16_385 = CAST(16, MSB(DUP(op_AND_383)), op_AND_383);
	RzILOpPure *op_ADD_386 = ADD(cast_st16_380, cast_st16_385);
	RzILOpPure *cast_388 = CAST(32, IL_FALSE, op_ADD_386);
	RzILOpPure *op_LT_387 = LET("const_pos0", DUP(const_pos0), ULT(cast_388, VARLP("const_pos0")));
	RzILOpPure *op_SUB_389 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_390 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_389));
	RzILOpPure *op_NEG_391 = NEG(op_LSHIFT_390);
	RzILOpPure *op_SUB_392 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_393 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_392));
	RzILOpPure *cast_395 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_394 = SUB(op_LSHIFT_393, cast_395);
	RzILOpPure *cond_396 = ITE(op_LT_387, op_NEG_391, op_SUB_394);
	RzILOpPure *cast_398 = CAST(64, MSB(DUP(op_ADD_353)), op_ADD_353);
	RzILOpPure *cond_397 = ITE(op_EQ_341, cast_398, cond_396);
	RzILOpPure *cast_400 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_399 = LOGAND(cond_397, cast_400);
	RzILOpPure *cast_ut64_401 = CAST(64, IL_FALSE, op_AND_399);
	RzILOpPure *op_MUL_402 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_403 = SHIFTL0(cast_ut64_401, op_MUL_402);
	RzILOpPure *op_OR_404 = LOGOR(op_AND_309, op_LSHIFT_403);

	// WRITE
	RzILOpEffect *c_call_17 = HEX_SEXTRACT64(arg_cast_18, arg_cast_19, arg_cast_20);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_21 = SETL("h_tmp2256", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_22 = SEQN(2, c_call_17, op_ASSIGN_hybrid_tmp_21);
	RzILOpEffect *c_call_48 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_49 = SETL("h_tmp2257", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_50 = SEQN(2, c_call_48, op_ASSIGN_hybrid_tmp_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp2258", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *c_call_54 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_55 = SETL("h_tmp2259", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_56 = SEQN(2, c_call_54, op_ASSIGN_hybrid_tmp_55);
	RzILOpEffect *c_call_57 = HEX_DEPOSIT64(arg_cast_58, arg_cast_59, arg_cast_60, arg_cast_61);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_62 = SETL("h_tmp2260", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_63 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_62);
	RzILOpEffect *seq_64 = SEQN(3, seq_53, seq_56, seq_63);
	RzILOpEffect *op_ASSIGN_67 = SETG(usr_assoc_tmp, cast_68);
	RzILOpEffect *seq_69 = SEQN(3, seq_50, seq_64, op_ASSIGN_67);
	RzILOpEffect *op_ASSIGN_99 = SETG(Rdd_assoc_tmp, op_OR_98);
	RzILOpEffect *seq_100 = SEQN(2, seq_22, op_ASSIGN_99);
	RzILOpEffect *empty_101 = EMPTY();
	RzILOpEffect *c_call_119 = HEX_SEXTRACT64(arg_cast_120, arg_cast_121, arg_cast_122);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp2261", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_119, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *c_call_150 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_151 = SETL("h_tmp2262", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_152 = SEQN(2, c_call_150, op_ASSIGN_hybrid_tmp_151);
	RzILOpEffect *c_call_153 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_154 = SETL("h_tmp2263", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_155 = SEQN(2, c_call_153, op_ASSIGN_hybrid_tmp_154);
	RzILOpEffect *c_call_156 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_157 = SETL("h_tmp2264", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_158 = SEQN(2, c_call_156, op_ASSIGN_hybrid_tmp_157);
	RzILOpEffect *c_call_159 = HEX_DEPOSIT64(arg_cast_160, arg_cast_161, arg_cast_162, arg_cast_163);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2265", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_159, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *seq_166 = SEQN(3, seq_155, seq_158, seq_165);
	RzILOpEffect *op_ASSIGN_169 = SETG(usr_assoc_tmp, cast_170);
	RzILOpEffect *seq_171 = SEQN(3, seq_152, seq_166, op_ASSIGN_169);
	RzILOpEffect *op_ASSIGN_201 = SETG(Rdd_assoc_tmp, op_OR_200);
	RzILOpEffect *seq_202 = SEQN(2, seq_124, op_ASSIGN_201);
	RzILOpEffect *empty_203 = EMPTY();
	RzILOpEffect *c_call_221 = HEX_SEXTRACT64(arg_cast_222, arg_cast_223, arg_cast_224);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_225 = SETL("h_tmp2266", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_226 = SEQN(2, c_call_221, op_ASSIGN_hybrid_tmp_225);
	RzILOpEffect *c_call_252 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_253 = SETL("h_tmp2267", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_254 = SEQN(2, c_call_252, op_ASSIGN_hybrid_tmp_253);
	RzILOpEffect *c_call_255 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_256 = SETL("h_tmp2268", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_257 = SEQN(2, c_call_255, op_ASSIGN_hybrid_tmp_256);
	RzILOpEffect *c_call_258 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_259 = SETL("h_tmp2269", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_260 = SEQN(2, c_call_258, op_ASSIGN_hybrid_tmp_259);
	RzILOpEffect *c_call_261 = HEX_DEPOSIT64(arg_cast_262, arg_cast_263, arg_cast_264, arg_cast_265);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_266 = SETL("h_tmp2270", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_267 = SEQN(2, c_call_261, op_ASSIGN_hybrid_tmp_266);
	RzILOpEffect *seq_268 = SEQN(3, seq_257, seq_260, seq_267);
	RzILOpEffect *op_ASSIGN_271 = SETG(usr_assoc_tmp, cast_272);
	RzILOpEffect *seq_273 = SEQN(3, seq_254, seq_268, op_ASSIGN_271);
	RzILOpEffect *op_ASSIGN_303 = SETG(Rdd_assoc_tmp, op_OR_302);
	RzILOpEffect *seq_304 = SEQN(2, seq_226, op_ASSIGN_303);
	RzILOpEffect *empty_305 = EMPTY();
	RzILOpEffect *c_call_323 = HEX_SEXTRACT64(arg_cast_324, arg_cast_325, arg_cast_326);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_327 = SETL("h_tmp2271", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_328 = SEQN(2, c_call_323, op_ASSIGN_hybrid_tmp_327);
	RzILOpEffect *c_call_354 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_355 = SETL("h_tmp2272", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_356 = SEQN(2, c_call_354, op_ASSIGN_hybrid_tmp_355);
	RzILOpEffect *c_call_357 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_358 = SETL("h_tmp2273", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_359 = SEQN(2, c_call_357, op_ASSIGN_hybrid_tmp_358);
	RzILOpEffect *c_call_360 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_361 = SETL("h_tmp2274", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_362 = SEQN(2, c_call_360, op_ASSIGN_hybrid_tmp_361);
	RzILOpEffect *c_call_363 = HEX_DEPOSIT64(arg_cast_364, arg_cast_365, arg_cast_366, arg_cast_367);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_368 = SETL("h_tmp2275", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_369 = SEQN(2, c_call_363, op_ASSIGN_hybrid_tmp_368);
	RzILOpEffect *seq_370 = SEQN(3, seq_359, seq_362, seq_369);
	RzILOpEffect *op_ASSIGN_373 = SETG(usr_assoc_tmp, cast_374);
	RzILOpEffect *seq_375 = SEQN(3, seq_356, seq_370, op_ASSIGN_373);
	RzILOpEffect *op_ASSIGN_405 = SETG(Rdd_assoc_tmp, op_OR_404);
	RzILOpEffect *seq_406 = SEQN(2, seq_328, op_ASSIGN_405);
	RzILOpEffect *empty_407 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_100, empty_101, seq_202, empty_203, seq_304, empty_305, seq_406, empty_407, seq_69, seq_171, seq_273, seq_375);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = SN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2276;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2277;
	// Declare: ut32 h_tmp2278;
	// Declare: ut32 h_tmp2279;
	// Declare: ut64 h_tmp2280;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st64 h_tmp2281;
	// Declare: ut32 h_tmp2282;
	// Declare: ut32 h_tmp2283;
	// Declare: ut32 h_tmp2284;
	// Declare: ut64 h_tmp2285;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st64 h_tmp2286;
	// Declare: ut32 h_tmp2287;
	// Declare: ut32 h_tmp2288;
	// Declare: ut32 h_tmp2289;
	// Declare: ut64 h_tmp2290;
	// Declare: st64 h_tmp2291;
	// Declare: ut32 h_tmp2292;
	// Declare: ut32 h_tmp2293;
	// Declare: ut32 h_tmp2294;
	// Declare: ut64 h_tmp2295;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0xffff", const_pos0xffff, CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st16_10 = CAST(16, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *op_MUL_11 = LET("const_pos1", const_pos1, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_12 = SHIFTR0(Rtt, op_MUL_11);
	RzILOpPure *cast_14 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_13 = LOGAND(op_RSHIFT_12, cast_14);
	RzILOpPure *cast_st16_15 = CAST(16, MSB(DUP(op_AND_13)), op_AND_13);
	RzILOpPure *op_SUB_16 = SUB(cast_st16_10, cast_st16_15);
	RzILOpPure *cast_18 = CAST(32, IL_FALSE, op_SUB_16);
	RzILOpPure *op_ADD_17 = LET("const_pos1", DUP(const_pos1), ADD(cast_18, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_17, VARLP("const_pos1")));
	RzILOpPure *arg_cast_21 = CAST(64, IL_FALSE, op_RSHIFT_19);
	RzILOpPure *arg_cast_22 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_23 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_26 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2276"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_27 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rss), op_MUL_27);
	RzILOpPure *cast_30 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_29 = LOGAND(op_RSHIFT_28, cast_30);
	RzILOpPure *cast_st16_31 = CAST(16, MSB(DUP(op_AND_29)), op_AND_29);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *cast_35 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st16_36 = CAST(16, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *op_SUB_37 = SUB(cast_st16_31, cast_st16_36);
	RzILOpPure *cast_39 = CAST(32, IL_FALSE, op_SUB_37);
	RzILOpPure *op_ADD_38 = LET("const_pos1", DUP(const_pos1), ADD(cast_39, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_40 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_38, VARLP("const_pos1")));
	RzILOpPure *cast_42 = CAST(64, MSB(DUP(op_RSHIFT_40)), op_RSHIFT_40);
	RzILOpPure *op_EQ_41 = EQ(cond_26, cast_42);
	RzILOpPure *op_MUL_43 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rss), op_MUL_43);
	RzILOpPure *cast_46 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st16_47 = CAST(16, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *op_MUL_48 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rtt), op_MUL_48);
	RzILOpPure *cast_51 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st16_52 = CAST(16, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_SUB_53 = SUB(cast_st16_47, cast_st16_52);
	RzILOpPure *cast_55 = CAST(32, IL_FALSE, op_SUB_53);
	RzILOpPure *op_ADD_54 = LET("const_pos1", DUP(const_pos1), ADD(cast_55, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_56 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_54, VARLP("const_pos1")));
	RzILOpPure *arg_cast_67 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_68 = CAST(64, MSB(DUP(VARL("h_tmp2278"))), VARL("h_tmp2278"));
	RzILOpPure *arg_cast_69 = CAST(64, MSB(DUP(VARL("h_tmp2279"))), VARL("h_tmp2279"));
	RzILOpPure *arg_cast_70 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_75 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_74 = ITE(NON_ZERO(VARL("h_tmp2277")), VARL("h_tmp2280"), cast_75);
	RzILOpPure *cast_77 = CAST(32, IL_FALSE, cond_74);
	RzILOpPure *op_MUL_79 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_80 = SHIFTR0(DUP(Rss), op_MUL_79);
	RzILOpPure *cast_82 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_81 = LOGAND(op_RSHIFT_80, cast_82);
	RzILOpPure *cast_st16_83 = CAST(16, MSB(DUP(op_AND_81)), op_AND_81);
	RzILOpPure *op_MUL_84 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rtt), op_MUL_84);
	RzILOpPure *cast_87 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_86 = LOGAND(op_RSHIFT_85, cast_87);
	RzILOpPure *cast_st16_88 = CAST(16, MSB(DUP(op_AND_86)), op_AND_86);
	RzILOpPure *op_SUB_89 = SUB(cast_st16_83, cast_st16_88);
	RzILOpPure *cast_91 = CAST(32, IL_FALSE, op_SUB_89);
	RzILOpPure *op_ADD_90 = LET("const_pos1", DUP(const_pos1), ADD(cast_91, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_92 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_90, VARLP("const_pos1")));
	RzILOpPure *op_LT_93 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_92, VARLP("const_pos0")));
	RzILOpPure *op_SUB_94 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_95 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_94));
	RzILOpPure *op_NEG_96 = NEG(op_LSHIFT_95);
	RzILOpPure *op_SUB_97 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_98 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_97));
	RzILOpPure *cast_100 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_99 = SUB(op_LSHIFT_98, cast_100);
	RzILOpPure *cond_101 = ITE(op_LT_93, op_NEG_96, op_SUB_99);
	RzILOpPure *cast_103 = CAST(64, MSB(DUP(op_RSHIFT_56)), op_RSHIFT_56);
	RzILOpPure *cond_102 = ITE(op_EQ_41, cast_103, cond_101);
	RzILOpPure *cast_105 = LET("const_pos0x0ffff", const_pos0x0ffff, CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_104 = LOGAND(cond_102, cast_105);
	RzILOpPure *cast_ut64_106 = CAST(64, IL_FALSE, op_AND_104);
	RzILOpPure *op_MUL_107 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_108 = SHIFTL0(cast_ut64_106, op_MUL_107);
	RzILOpPure *op_OR_109 = LOGOR(op_AND_3, op_LSHIFT_108);
	RzILOpPure *op_MUL_113 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_114 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_113));
	RzILOpPure *op_NOT_115 = LOGNOT(op_LSHIFT_114);
	RzILOpPure *cast_117 = CAST(64, IL_FALSE, op_NOT_115);
	RzILOpPure *op_AND_116 = LOGAND(VARG(Rdd_assoc_tmp), cast_117);
	RzILOpPure *op_NE_118 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_119 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rss), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st16_123 = CAST(16, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *op_MUL_124 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rtt), op_MUL_124);
	RzILOpPure *cast_127 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_126 = LOGAND(op_RSHIFT_125, cast_127);
	RzILOpPure *cast_st16_128 = CAST(16, MSB(DUP(op_AND_126)), op_AND_126);
	RzILOpPure *op_ADD_129 = ADD(cast_st16_123, cast_st16_128);
	RzILOpPure *cast_131 = CAST(32, IL_FALSE, op_ADD_129);
	RzILOpPure *op_ADD_130 = LET("const_pos1", DUP(const_pos1), ADD(cast_131, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_132 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *arg_cast_134 = CAST(64, IL_FALSE, op_RSHIFT_132);
	RzILOpPure *arg_cast_135 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_136 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_139 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_118, VARL("h_tmp2281"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_140 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_141 = SHIFTR0(DUP(Rss), op_MUL_140);
	RzILOpPure *cast_143 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_142 = LOGAND(op_RSHIFT_141, cast_143);
	RzILOpPure *cast_st16_144 = CAST(16, MSB(DUP(op_AND_142)), op_AND_142);
	RzILOpPure *op_MUL_145 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_146 = SHIFTR0(DUP(Rtt), op_MUL_145);
	RzILOpPure *cast_148 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *cast_159 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_158 = LOGAND(op_RSHIFT_157, cast_159);
	RzILOpPure *cast_st16_160 = CAST(16, MSB(DUP(op_AND_158)), op_AND_158);
	RzILOpPure *op_MUL_161 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_162 = SHIFTR0(DUP(Rtt), op_MUL_161);
	RzILOpPure *cast_164 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_163 = LOGAND(op_RSHIFT_162, cast_164);
	RzILOpPure *cast_st16_165 = CAST(16, MSB(DUP(op_AND_163)), op_AND_163);
	RzILOpPure *op_ADD_166 = ADD(cast_st16_160, cast_st16_165);
	RzILOpPure *cast_168 = CAST(32, IL_FALSE, op_ADD_166);
	RzILOpPure *op_ADD_167 = LET("const_pos1", DUP(const_pos1), ADD(cast_168, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_169 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_167, VARLP("const_pos1")));
	RzILOpPure *arg_cast_180 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_181 = CAST(64, MSB(DUP(VARL("h_tmp2283"))), VARL("h_tmp2283"));
	RzILOpPure *arg_cast_182 = CAST(64, MSB(DUP(VARL("h_tmp2284"))), VARL("h_tmp2284"));
	RzILOpPure *arg_cast_183 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_188 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_187 = ITE(NON_ZERO(VARL("h_tmp2282")), VARL("h_tmp2285"), cast_188);
	RzILOpPure *cast_190 = CAST(32, IL_FALSE, cond_187);
	RzILOpPure *op_MUL_192 = LET("const_pos1", DUP(const_pos1), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_193 = SHIFTR0(DUP(Rss), op_MUL_192);
	RzILOpPure *cast_195 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_194 = LOGAND(op_RSHIFT_193, cast_195);
	RzILOpPure *cast_st16_196 = CAST(16, MSB(DUP(op_AND_194)), op_AND_194);
	RzILOpPure *op_MUL_197 = LET("const_pos0", DUP(const_pos0), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_198 = SHIFTR0(DUP(Rtt), op_MUL_197);
	RzILOpPure *cast_200 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
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
	RzILOpPure *op_OR_222 = LOGOR(op_AND_116, op_LSHIFT_221);
	RzILOpPure *op_MUL_226 = LET("const_pos2", const_pos2, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_227 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_226));
	RzILOpPure *op_NOT_228 = LOGNOT(op_LSHIFT_227);
	RzILOpPure *cast_230 = CAST(64, IL_FALSE, op_NOT_228);
	RzILOpPure *op_AND_229 = LOGAND(VARG(Rdd_assoc_tmp), cast_230);
	RzILOpPure *op_NE_231 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_232 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_233 = SHIFTR0(DUP(Rss), op_MUL_232);
	RzILOpPure *cast_235 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_234 = LOGAND(op_RSHIFT_233, cast_235);
	RzILOpPure *cast_st16_236 = CAST(16, MSB(DUP(op_AND_234)), op_AND_234);
	RzILOpPure *op_MUL_237 = LET("const_pos3", const_pos3, LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_238 = SHIFTR0(DUP(Rtt), op_MUL_237);
	RzILOpPure *cast_240 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_239 = LOGAND(op_RSHIFT_238, cast_240);
	RzILOpPure *cast_st16_241 = CAST(16, MSB(DUP(op_AND_239)), op_AND_239);
	RzILOpPure *op_SUB_242 = SUB(cast_st16_236, cast_st16_241);
	RzILOpPure *cast_244 = CAST(32, IL_FALSE, op_SUB_242);
	RzILOpPure *op_ADD_243 = LET("const_pos1", DUP(const_pos1), ADD(cast_244, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_245 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_243, VARLP("const_pos1")));
	RzILOpPure *arg_cast_247 = CAST(64, IL_FALSE, op_RSHIFT_245);
	RzILOpPure *arg_cast_248 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_249 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_252 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_231, VARL("h_tmp2286"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_253 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_254 = SHIFTR0(DUP(Rss), op_MUL_253);
	RzILOpPure *cast_256 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_255 = LOGAND(op_RSHIFT_254, cast_256);
	RzILOpPure *cast_st16_257 = CAST(16, MSB(DUP(op_AND_255)), op_AND_255);
	RzILOpPure *op_MUL_258 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_259 = SHIFTR0(DUP(Rtt), op_MUL_258);
	RzILOpPure *cast_261 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_260 = LOGAND(op_RSHIFT_259, cast_261);
	RzILOpPure *cast_st16_262 = CAST(16, MSB(DUP(op_AND_260)), op_AND_260);
	RzILOpPure *op_SUB_263 = SUB(cast_st16_257, cast_st16_262);
	RzILOpPure *cast_265 = CAST(32, IL_FALSE, op_SUB_263);
	RzILOpPure *op_ADD_264 = LET("const_pos1", DUP(const_pos1), ADD(cast_265, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_266 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_264, VARLP("const_pos1")));
	RzILOpPure *cast_268 = CAST(64, MSB(DUP(op_RSHIFT_266)), op_RSHIFT_266);
	RzILOpPure *op_EQ_267 = EQ(cond_252, cast_268);
	RzILOpPure *op_MUL_269 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_270 = SHIFTR0(DUP(Rss), op_MUL_269);
	RzILOpPure *cast_272 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_271 = LOGAND(op_RSHIFT_270, cast_272);
	RzILOpPure *cast_st16_273 = CAST(16, MSB(DUP(op_AND_271)), op_AND_271);
	RzILOpPure *op_MUL_274 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_275 = SHIFTR0(DUP(Rtt), op_MUL_274);
	RzILOpPure *cast_277 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_276 = LOGAND(op_RSHIFT_275, cast_277);
	RzILOpPure *cast_st16_278 = CAST(16, MSB(DUP(op_AND_276)), op_AND_276);
	RzILOpPure *op_SUB_279 = SUB(cast_st16_273, cast_st16_278);
	RzILOpPure *cast_281 = CAST(32, IL_FALSE, op_SUB_279);
	RzILOpPure *op_ADD_280 = LET("const_pos1", DUP(const_pos1), ADD(cast_281, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_282 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_280, VARLP("const_pos1")));
	RzILOpPure *arg_cast_293 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_294 = CAST(64, MSB(DUP(VARL("h_tmp2288"))), VARL("h_tmp2288"));
	RzILOpPure *arg_cast_295 = CAST(64, MSB(DUP(VARL("h_tmp2289"))), VARL("h_tmp2289"));
	RzILOpPure *arg_cast_296 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_301 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_300 = ITE(NON_ZERO(VARL("h_tmp2287")), VARL("h_tmp2290"), cast_301);
	RzILOpPure *cast_303 = CAST(32, IL_FALSE, cond_300);
	RzILOpPure *op_MUL_305 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_306 = SHIFTR0(DUP(Rss), op_MUL_305);
	RzILOpPure *cast_308 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_307 = LOGAND(op_RSHIFT_306, cast_308);
	RzILOpPure *cast_st16_309 = CAST(16, MSB(DUP(op_AND_307)), op_AND_307);
	RzILOpPure *op_MUL_310 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_311 = SHIFTR0(DUP(Rtt), op_MUL_310);
	RzILOpPure *cast_313 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_312 = LOGAND(op_RSHIFT_311, cast_313);
	RzILOpPure *cast_st16_314 = CAST(16, MSB(DUP(op_AND_312)), op_AND_312);
	RzILOpPure *op_SUB_315 = SUB(cast_st16_309, cast_st16_314);
	RzILOpPure *cast_317 = CAST(32, IL_FALSE, op_SUB_315);
	RzILOpPure *op_ADD_316 = LET("const_pos1", DUP(const_pos1), ADD(cast_317, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_318 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_316, VARLP("const_pos1")));
	RzILOpPure *op_LT_319 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_318, VARLP("const_pos0")));
	RzILOpPure *op_SUB_320 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_321 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_320));
	RzILOpPure *op_NEG_322 = NEG(op_LSHIFT_321);
	RzILOpPure *op_SUB_323 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_324 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_323));
	RzILOpPure *cast_326 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_325 = SUB(op_LSHIFT_324, cast_326);
	RzILOpPure *cond_327 = ITE(op_LT_319, op_NEG_322, op_SUB_325);
	RzILOpPure *cast_329 = CAST(64, MSB(DUP(op_RSHIFT_282)), op_RSHIFT_282);
	RzILOpPure *cond_328 = ITE(op_EQ_267, cast_329, cond_327);
	RzILOpPure *cast_331 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_330 = LOGAND(cond_328, cast_331);
	RzILOpPure *cast_ut64_332 = CAST(64, IL_FALSE, op_AND_330);
	RzILOpPure *op_MUL_333 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_334 = SHIFTL0(cast_ut64_332, op_MUL_333);
	RzILOpPure *op_OR_335 = LOGOR(op_AND_229, op_LSHIFT_334);
	RzILOpPure *op_MUL_339 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_340 = LET("const_pos0x0ffffLL", DUP(const_pos0x0ffffLL), SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_339));
	RzILOpPure *op_NOT_341 = LOGNOT(op_LSHIFT_340);
	RzILOpPure *cast_343 = CAST(64, IL_FALSE, op_NOT_341);
	RzILOpPure *op_AND_342 = LOGAND(VARG(Rdd_assoc_tmp), cast_343);
	RzILOpPure *op_NE_344 = LET("const_pos16", DUP(const_pos16), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_345 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_346 = SHIFTR0(DUP(Rss), op_MUL_345);
	RzILOpPure *cast_348 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_347 = LOGAND(op_RSHIFT_346, cast_348);
	RzILOpPure *cast_st16_349 = CAST(16, MSB(DUP(op_AND_347)), op_AND_347);
	RzILOpPure *op_MUL_350 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_351 = SHIFTR0(DUP(Rtt), op_MUL_350);
	RzILOpPure *cast_353 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_352 = LOGAND(op_RSHIFT_351, cast_353);
	RzILOpPure *cast_st16_354 = CAST(16, MSB(DUP(op_AND_352)), op_AND_352);
	RzILOpPure *op_ADD_355 = ADD(cast_st16_349, cast_st16_354);
	RzILOpPure *cast_357 = CAST(32, IL_FALSE, op_ADD_355);
	RzILOpPure *op_ADD_356 = LET("const_pos1", DUP(const_pos1), ADD(cast_357, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_358 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_356, VARLP("const_pos1")));
	RzILOpPure *arg_cast_360 = CAST(64, IL_FALSE, op_RSHIFT_358);
	RzILOpPure *arg_cast_361 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_362 = LET("const_pos16", DUP(const_pos16), CAST(64, MSB(DUP(VARLP("const_pos16"))), VARLP("const_pos16")));
	RzILOpPure *cond_365 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_344, VARL("h_tmp2291"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_366 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_367 = SHIFTR0(DUP(Rss), op_MUL_366);
	RzILOpPure *cast_369 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_368 = LOGAND(op_RSHIFT_367, cast_369);
	RzILOpPure *cast_st16_370 = CAST(16, MSB(DUP(op_AND_368)), op_AND_368);
	RzILOpPure *op_MUL_371 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_372 = SHIFTR0(DUP(Rtt), op_MUL_371);
	RzILOpPure *cast_374 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_373 = LOGAND(op_RSHIFT_372, cast_374);
	RzILOpPure *cast_st16_375 = CAST(16, MSB(DUP(op_AND_373)), op_AND_373);
	RzILOpPure *op_ADD_376 = ADD(cast_st16_370, cast_st16_375);
	RzILOpPure *cast_378 = CAST(32, IL_FALSE, op_ADD_376);
	RzILOpPure *op_ADD_377 = LET("const_pos1", DUP(const_pos1), ADD(cast_378, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_379 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_377, VARLP("const_pos1")));
	RzILOpPure *cast_381 = CAST(64, MSB(DUP(op_RSHIFT_379)), op_RSHIFT_379);
	RzILOpPure *op_EQ_380 = EQ(cond_365, cast_381);
	RzILOpPure *op_MUL_382 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_383 = SHIFTR0(DUP(Rss), op_MUL_382);
	RzILOpPure *cast_385 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_384 = LOGAND(op_RSHIFT_383, cast_385);
	RzILOpPure *cast_st16_386 = CAST(16, MSB(DUP(op_AND_384)), op_AND_384);
	RzILOpPure *op_MUL_387 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_388 = SHIFTR0(DUP(Rtt), op_MUL_387);
	RzILOpPure *cast_390 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_389 = LOGAND(op_RSHIFT_388, cast_390);
	RzILOpPure *cast_st16_391 = CAST(16, MSB(DUP(op_AND_389)), op_AND_389);
	RzILOpPure *op_ADD_392 = ADD(cast_st16_386, cast_st16_391);
	RzILOpPure *cast_394 = CAST(32, IL_FALSE, op_ADD_392);
	RzILOpPure *op_ADD_393 = LET("const_pos1", DUP(const_pos1), ADD(cast_394, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_395 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_393, VARLP("const_pos1")));
	RzILOpPure *arg_cast_406 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_407 = CAST(64, MSB(DUP(VARL("h_tmp2293"))), VARL("h_tmp2293"));
	RzILOpPure *arg_cast_408 = CAST(64, MSB(DUP(VARL("h_tmp2294"))), VARL("h_tmp2294"));
	RzILOpPure *arg_cast_409 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_414 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_413 = ITE(NON_ZERO(VARL("h_tmp2292")), VARL("h_tmp2295"), cast_414);
	RzILOpPure *cast_416 = CAST(32, IL_FALSE, cond_413);
	RzILOpPure *op_MUL_418 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_419 = SHIFTR0(DUP(Rss), op_MUL_418);
	RzILOpPure *cast_421 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_420 = LOGAND(op_RSHIFT_419, cast_421);
	RzILOpPure *cast_st16_422 = CAST(16, MSB(DUP(op_AND_420)), op_AND_420);
	RzILOpPure *op_MUL_423 = LET("const_pos2", DUP(const_pos2), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_424 = SHIFTR0(DUP(Rtt), op_MUL_423);
	RzILOpPure *cast_426 = LET("const_pos0xffff", DUP(const_pos0xffff), CAST(64, IL_FALSE, VARLP("const_pos0xffff")));
	RzILOpPure *op_AND_425 = LOGAND(op_RSHIFT_424, cast_426);
	RzILOpPure *cast_st16_427 = CAST(16, MSB(DUP(op_AND_425)), op_AND_425);
	RzILOpPure *op_ADD_428 = ADD(cast_st16_422, cast_st16_427);
	RzILOpPure *cast_430 = CAST(32, IL_FALSE, op_ADD_428);
	RzILOpPure *op_ADD_429 = LET("const_pos1", DUP(const_pos1), ADD(cast_430, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_431 = LET("const_pos1", DUP(const_pos1), SHIFTR0(op_ADD_429, VARLP("const_pos1")));
	RzILOpPure *op_LT_432 = LET("const_pos0", DUP(const_pos0), ULT(op_RSHIFT_431, VARLP("const_pos0")));
	RzILOpPure *op_SUB_433 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_434 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_433));
	RzILOpPure *op_NEG_435 = NEG(op_LSHIFT_434);
	RzILOpPure *op_SUB_436 = LET("const_pos16", DUP(const_pos16), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_437 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_436));
	RzILOpPure *cast_439 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_438 = SUB(op_LSHIFT_437, cast_439);
	RzILOpPure *cond_440 = ITE(op_LT_432, op_NEG_435, op_SUB_438);
	RzILOpPure *cast_442 = CAST(64, MSB(DUP(op_RSHIFT_395)), op_RSHIFT_395);
	RzILOpPure *cond_441 = ITE(op_EQ_380, cast_442, cond_440);
	RzILOpPure *cast_444 = LET("const_pos0x0ffff", DUP(const_pos0x0ffff), CAST(64, MSB(DUP(VARLP("const_pos0x0ffff"))), VARLP("const_pos0x0ffff")));
	RzILOpPure *op_AND_443 = LOGAND(cond_441, cast_444);
	RzILOpPure *cast_ut64_445 = CAST(64, IL_FALSE, op_AND_443);
	RzILOpPure *op_MUL_446 = LET("const_pos3", DUP(const_pos3), LET("const_pos16", DUP(const_pos16), MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_447 = SHIFTL0(cast_ut64_445, op_MUL_446);
	RzILOpPure *op_OR_448 = LOGOR(op_AND_342, op_LSHIFT_447);

	// WRITE
	RzILOpEffect *c_call_20 = HEX_SEXTRACT64(arg_cast_21, arg_cast_22, arg_cast_23);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2276", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_20, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *c_call_57 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_58 = SETL("h_tmp2277", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_59 = SEQN(2, c_call_57, op_ASSIGN_hybrid_tmp_58);
	RzILOpEffect *c_call_60 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_61 = SETL("h_tmp2278", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_62 = SEQN(2, c_call_60, op_ASSIGN_hybrid_tmp_61);
	RzILOpEffect *c_call_63 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_64 = SETL("h_tmp2279", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_65 = SEQN(2, c_call_63, op_ASSIGN_hybrid_tmp_64);
	RzILOpEffect *c_call_66 = HEX_DEPOSIT64(arg_cast_67, arg_cast_68, arg_cast_69, arg_cast_70);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_71 = SETL("h_tmp2280", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_72 = SEQN(2, c_call_66, op_ASSIGN_hybrid_tmp_71);
	RzILOpEffect *seq_73 = SEQN(3, seq_62, seq_65, seq_72);
	RzILOpEffect *op_ASSIGN_76 = SETG(usr_assoc_tmp, cast_77);
	RzILOpEffect *seq_78 = SEQN(3, seq_59, seq_73, op_ASSIGN_76);
	RzILOpEffect *op_ASSIGN_110 = SETG(Rdd_assoc_tmp, op_OR_109);
	RzILOpEffect *seq_111 = SEQN(2, seq_25, op_ASSIGN_110);
	RzILOpEffect *empty_112 = EMPTY();
	RzILOpEffect *c_call_133 = HEX_SEXTRACT64(arg_cast_134, arg_cast_135, arg_cast_136);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp2281", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_133, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *c_call_170 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_171 = SETL("h_tmp2282", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_172 = SEQN(2, c_call_170, op_ASSIGN_hybrid_tmp_171);
	RzILOpEffect *c_call_173 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2283", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_173, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *c_call_176 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp2284", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_179 = HEX_DEPOSIT64(arg_cast_180, arg_cast_181, arg_cast_182, arg_cast_183);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_184 = SETL("h_tmp2285", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_185 = SEQN(2, c_call_179, op_ASSIGN_hybrid_tmp_184);
	RzILOpEffect *seq_186 = SEQN(3, seq_175, seq_178, seq_185);
	RzILOpEffect *op_ASSIGN_189 = SETG(usr_assoc_tmp, cast_190);
	RzILOpEffect *seq_191 = SEQN(3, seq_172, seq_186, op_ASSIGN_189);
	RzILOpEffect *op_ASSIGN_223 = SETG(Rdd_assoc_tmp, op_OR_222);
	RzILOpEffect *seq_224 = SEQN(2, seq_138, op_ASSIGN_223);
	RzILOpEffect *empty_225 = EMPTY();
	RzILOpEffect *c_call_246 = HEX_SEXTRACT64(arg_cast_247, arg_cast_248, arg_cast_249);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_250 = SETL("h_tmp2286", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_251 = SEQN(2, c_call_246, op_ASSIGN_hybrid_tmp_250);
	RzILOpEffect *c_call_283 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_284 = SETL("h_tmp2287", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_285 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_284);
	RzILOpEffect *c_call_286 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_287 = SETL("h_tmp2288", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_288 = SEQN(2, c_call_286, op_ASSIGN_hybrid_tmp_287);
	RzILOpEffect *c_call_289 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_290 = SETL("h_tmp2289", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_291 = SEQN(2, c_call_289, op_ASSIGN_hybrid_tmp_290);
	RzILOpEffect *c_call_292 = HEX_DEPOSIT64(arg_cast_293, arg_cast_294, arg_cast_295, arg_cast_296);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_297 = SETL("h_tmp2290", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_298 = SEQN(2, c_call_292, op_ASSIGN_hybrid_tmp_297);
	RzILOpEffect *seq_299 = SEQN(3, seq_288, seq_291, seq_298);
	RzILOpEffect *op_ASSIGN_302 = SETG(usr_assoc_tmp, cast_303);
	RzILOpEffect *seq_304 = SEQN(3, seq_285, seq_299, op_ASSIGN_302);
	RzILOpEffect *op_ASSIGN_336 = SETG(Rdd_assoc_tmp, op_OR_335);
	RzILOpEffect *seq_337 = SEQN(2, seq_251, op_ASSIGN_336);
	RzILOpEffect *empty_338 = EMPTY();
	RzILOpEffect *c_call_359 = HEX_SEXTRACT64(arg_cast_360, arg_cast_361, arg_cast_362);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_363 = SETL("h_tmp2291", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_364 = SEQN(2, c_call_359, op_ASSIGN_hybrid_tmp_363);
	RzILOpEffect *c_call_396 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_397 = SETL("h_tmp2292", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_398 = SEQN(2, c_call_396, op_ASSIGN_hybrid_tmp_397);
	RzILOpEffect *c_call_399 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_400 = SETL("h_tmp2293", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_401 = SEQN(2, c_call_399, op_ASSIGN_hybrid_tmp_400);
	RzILOpEffect *c_call_402 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_403 = SETL("h_tmp2294", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_404 = SEQN(2, c_call_402, op_ASSIGN_hybrid_tmp_403);
	RzILOpEffect *c_call_405 = HEX_DEPOSIT64(arg_cast_406, arg_cast_407, arg_cast_408, arg_cast_409);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_410 = SETL("h_tmp2295", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_411 = SEQN(2, c_call_405, op_ASSIGN_hybrid_tmp_410);
	RzILOpEffect *seq_412 = SEQN(3, seq_401, seq_404, seq_411);
	RzILOpEffect *op_ASSIGN_415 = SETG(usr_assoc_tmp, cast_416);
	RzILOpEffect *seq_417 = SEQN(3, seq_398, seq_412, op_ASSIGN_415);
	RzILOpEffect *op_ASSIGN_449 = SETG(Rdd_assoc_tmp, op_OR_448);
	RzILOpEffect *seq_450 = SEQN(2, seq_364, op_ASSIGN_449);
	RzILOpEffect *empty_451 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, seq_111, empty_112, seq_224, empty_225, seq_337, empty_338, seq_450, empty_451, seq_78, seq_191, seq_304, seq_417);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = SN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp2296;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp2297;
	// Declare: ut32 h_tmp2298;
	// Declare: ut32 h_tmp2299;
	// Declare: ut64 h_tmp2300;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp2301;
	// Declare: ut32 h_tmp2302;
	// Declare: ut32 h_tmp2303;
	// Declare: ut32 h_tmp2304;
	// Declare: ut64 h_tmp2305;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *cast_4 = CAST(64, IL_FALSE, op_NOT_2);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), cast_4);
	RzILOpPure *op_NE_5 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_6 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_7 = SHIFTR0(Rss, op_MUL_6);
	RzILOpPure *cast_9 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_8 = LOGAND(op_RSHIFT_7, cast_9);
	RzILOpPure *cast_st32_10 = CAST(32, MSB(DUP(op_AND_8)), op_AND_8);
	RzILOpPure *cast_st64_11 = CAST(64, MSB(DUP(cast_st32_10)), cast_st32_10);
	RzILOpPure *op_MUL_12 = LET("const_pos1", const_pos1, LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_13 = SHIFTR0(Rtt, op_MUL_12);
	RzILOpPure *cast_15 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_14 = LOGAND(op_RSHIFT_13, cast_15);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(op_AND_14)), op_AND_14);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(DUP(cast_st32_16)), cast_st32_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st64_11, cast_st64_17);
	RzILOpPure *arg_cast_20 = CAST(64, IL_FALSE, op_SUB_18);
	RzILOpPure *arg_cast_21 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_22 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_25 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_5, VARL("h_tmp2296"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_26 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzILOpPure *cast_29 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_28 = LOGAND(op_RSHIFT_27, cast_29);
	RzILOpPure *cast_st32_30 = CAST(32, MSB(DUP(op_AND_28)), op_AND_28);
	RzILOpPure *cast_st64_31 = CAST(64, MSB(DUP(cast_st32_30)), cast_st32_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *cast_35 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_34 = LOGAND(op_RSHIFT_33, cast_35);
	RzILOpPure *cast_st32_36 = CAST(32, MSB(DUP(op_AND_34)), op_AND_34);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(DUP(cast_st32_36)), cast_st32_36);
	RzILOpPure *op_SUB_38 = SUB(cast_st64_31, cast_st64_37);
	RzILOpPure *op_EQ_39 = EQ(cond_25, op_SUB_38);
	RzILOpPure *op_MUL_40 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_41 = SHIFTR0(DUP(Rss), op_MUL_40);
	RzILOpPure *cast_43 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_42 = LOGAND(op_RSHIFT_41, cast_43);
	RzILOpPure *cast_st32_44 = CAST(32, MSB(DUP(op_AND_42)), op_AND_42);
	RzILOpPure *cast_st64_45 = CAST(64, MSB(DUP(cast_st32_44)), cast_st32_44);
	RzILOpPure *op_MUL_46 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_47 = SHIFTR0(DUP(Rtt), op_MUL_46);
	RzILOpPure *cast_49 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_48 = LOGAND(op_RSHIFT_47, cast_49);
	RzILOpPure *cast_st32_50 = CAST(32, MSB(DUP(op_AND_48)), op_AND_48);
	RzILOpPure *cast_st64_51 = CAST(64, MSB(DUP(cast_st32_50)), cast_st32_50);
	RzILOpPure *op_SUB_52 = SUB(cast_st64_45, cast_st64_51);
	RzILOpPure *arg_cast_63 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_64 = CAST(64, MSB(DUP(VARL("h_tmp2298"))), VARL("h_tmp2298"));
	RzILOpPure *arg_cast_65 = CAST(64, MSB(DUP(VARL("h_tmp2299"))), VARL("h_tmp2299"));
	RzILOpPure *arg_cast_66 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_71 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_70 = ITE(NON_ZERO(VARL("h_tmp2297")), VARL("h_tmp2300"), cast_71);
	RzILOpPure *cast_73 = CAST(32, IL_FALSE, cond_70);
	RzILOpPure *op_MUL_75 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_76 = SHIFTR0(DUP(Rss), op_MUL_75);
	RzILOpPure *cast_78 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_77 = LOGAND(op_RSHIFT_76, cast_78);
	RzILOpPure *cast_st32_79 = CAST(32, MSB(DUP(op_AND_77)), op_AND_77);
	RzILOpPure *cast_st64_80 = CAST(64, MSB(DUP(cast_st32_79)), cast_st32_79);
	RzILOpPure *op_MUL_81 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_82 = SHIFTR0(DUP(Rtt), op_MUL_81);
	RzILOpPure *cast_84 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_83 = LOGAND(op_RSHIFT_82, cast_84);
	RzILOpPure *cast_st32_85 = CAST(32, MSB(DUP(op_AND_83)), op_AND_83);
	RzILOpPure *cast_st64_86 = CAST(64, MSB(DUP(cast_st32_85)), cast_st32_85);
	RzILOpPure *op_SUB_87 = SUB(cast_st64_80, cast_st64_86);
	RzILOpPure *cast_89 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_88 = SLT(op_SUB_87, cast_89);
	RzILOpPure *op_SUB_90 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_91 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_90));
	RzILOpPure *op_NEG_92 = NEG(op_LSHIFT_91);
	RzILOpPure *op_SUB_93 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_94 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_93));
	RzILOpPure *cast_96 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_95 = SUB(op_LSHIFT_94, cast_96);
	RzILOpPure *cond_97 = ITE(op_LT_88, op_NEG_92, op_SUB_95);
	RzILOpPure *cond_98 = ITE(op_EQ_39, op_SUB_52, cond_97);
	RzILOpPure *op_AND_99 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_98, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_100 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_101 = SHIFTL0(op_AND_99, op_MUL_100);
	RzILOpPure *cast_103 = CAST(64, IL_FALSE, op_LSHIFT_101);
	RzILOpPure *op_OR_102 = LOGOR(op_AND_3, cast_103);
	RzILOpPure *op_MUL_107 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_108 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_107));
	RzILOpPure *op_NOT_109 = LOGNOT(op_LSHIFT_108);
	RzILOpPure *cast_111 = CAST(64, IL_FALSE, op_NOT_109);
	RzILOpPure *op_AND_110 = LOGAND(VARG(Rdd_assoc_tmp), cast_111);
	RzILOpPure *op_NE_112 = LET("const_pos32", DUP(const_pos32), LET("const_pos0", DUP(const_pos0), INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_113 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rss), op_MUL_113);
	RzILOpPure *cast_116 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_115 = LOGAND(op_RSHIFT_114, cast_116);
	RzILOpPure *cast_st32_117 = CAST(32, MSB(DUP(op_AND_115)), op_AND_115);
	RzILOpPure *cast_st64_118 = CAST(64, MSB(DUP(cast_st32_117)), cast_st32_117);
	RzILOpPure *op_MUL_119 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_120 = SHIFTR0(DUP(Rtt), op_MUL_119);
	RzILOpPure *cast_122 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_121 = LOGAND(op_RSHIFT_120, cast_122);
	RzILOpPure *cast_st32_123 = CAST(32, MSB(DUP(op_AND_121)), op_AND_121);
	RzILOpPure *cast_st64_124 = CAST(64, MSB(DUP(cast_st32_123)), cast_st32_123);
	RzILOpPure *op_ADD_125 = ADD(cast_st64_118, cast_st64_124);
	RzILOpPure *arg_cast_127 = CAST(64, IL_FALSE, op_ADD_125);
	RzILOpPure *arg_cast_128 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *arg_cast_129 = LET("const_pos32", DUP(const_pos32), CAST(64, MSB(DUP(VARLP("const_pos32"))), VARLP("const_pos32")));
	RzILOpPure *cond_132 = LET("const_pos0LL", DUP(const_pos0LL), ITE(op_NE_112, VARL("h_tmp2301"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_133 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_134 = SHIFTR0(DUP(Rss), op_MUL_133);
	RzILOpPure *cast_136 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_135 = LOGAND(op_RSHIFT_134, cast_136);
	RzILOpPure *cast_st32_137 = CAST(32, MSB(DUP(op_AND_135)), op_AND_135);
	RzILOpPure *cast_st64_138 = CAST(64, MSB(DUP(cast_st32_137)), cast_st32_137);
	RzILOpPure *op_MUL_139 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_140 = SHIFTR0(DUP(Rtt), op_MUL_139);
	RzILOpPure *cast_142 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_141 = LOGAND(op_RSHIFT_140, cast_142);
	RzILOpPure *cast_st32_143 = CAST(32, MSB(DUP(op_AND_141)), op_AND_141);
	RzILOpPure *cast_st64_144 = CAST(64, MSB(DUP(cast_st32_143)), cast_st32_143);
	RzILOpPure *op_ADD_145 = ADD(cast_st64_138, cast_st64_144);
	RzILOpPure *op_EQ_146 = EQ(cond_132, op_ADD_145);
	RzILOpPure *op_MUL_147 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_148 = SHIFTR0(DUP(Rss), op_MUL_147);
	RzILOpPure *cast_150 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_149 = LOGAND(op_RSHIFT_148, cast_150);
	RzILOpPure *cast_st32_151 = CAST(32, MSB(DUP(op_AND_149)), op_AND_149);
	RzILOpPure *cast_st64_152 = CAST(64, MSB(DUP(cast_st32_151)), cast_st32_151);
	RzILOpPure *op_MUL_153 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_154 = SHIFTR0(DUP(Rtt), op_MUL_153);
	RzILOpPure *cast_156 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_155 = LOGAND(op_RSHIFT_154, cast_156);
	RzILOpPure *cast_st32_157 = CAST(32, MSB(DUP(op_AND_155)), op_AND_155);
	RzILOpPure *cast_st64_158 = CAST(64, MSB(DUP(cast_st32_157)), cast_st32_157);
	RzILOpPure *op_ADD_159 = ADD(cast_st64_152, cast_st64_158);
	RzILOpPure *arg_cast_170 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *arg_cast_171 = CAST(64, MSB(DUP(VARL("h_tmp2303"))), VARL("h_tmp2303"));
	RzILOpPure *arg_cast_172 = CAST(64, MSB(DUP(VARL("h_tmp2304"))), VARL("h_tmp2304"));
	RzILOpPure *arg_cast_173 = LET("const_pos1", DUP(const_pos1), CAST(64, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_178 = CAST(64, IL_FALSE, VARG(usr_assoc_tmp));
	RzILOpPure *cond_177 = ITE(NON_ZERO(VARL("h_tmp2302")), VARL("h_tmp2305"), cast_178);
	RzILOpPure *cast_180 = CAST(32, IL_FALSE, cond_177);
	RzILOpPure *op_MUL_182 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_183 = SHIFTR0(DUP(Rss), op_MUL_182);
	RzILOpPure *cast_185 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_184 = LOGAND(op_RSHIFT_183, cast_185);
	RzILOpPure *cast_st32_186 = CAST(32, MSB(DUP(op_AND_184)), op_AND_184);
	RzILOpPure *cast_st64_187 = CAST(64, MSB(DUP(cast_st32_186)), cast_st32_186);
	RzILOpPure *op_MUL_188 = LET("const_pos0", DUP(const_pos0), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_189 = SHIFTR0(DUP(Rtt), op_MUL_188);
	RzILOpPure *cast_191 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), CAST(64, IL_FALSE, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_AND_190 = LOGAND(op_RSHIFT_189, cast_191);
	RzILOpPure *cast_st32_192 = CAST(32, MSB(DUP(op_AND_190)), op_AND_190);
	RzILOpPure *cast_st64_193 = CAST(64, MSB(DUP(cast_st32_192)), cast_st32_192);
	RzILOpPure *op_ADD_194 = ADD(cast_st64_187, cast_st64_193);
	RzILOpPure *cast_196 = LET("const_pos0", DUP(const_pos0), CAST(64, MSB(DUP(VARLP("const_pos0"))), VARLP("const_pos0")));
	RzILOpPure *op_LT_195 = SLT(op_ADD_194, cast_196);
	RzILOpPure *op_SUB_197 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_198 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_197));
	RzILOpPure *op_NEG_199 = NEG(op_LSHIFT_198);
	RzILOpPure *op_SUB_200 = LET("const_pos32", DUP(const_pos32), LET("const_pos1", DUP(const_pos1), SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_201 = LET("const_pos1LL", DUP(const_pos1LL), SHIFTL0(VARLP("const_pos1LL"), op_SUB_200));
	RzILOpPure *cast_203 = LET("const_pos1", DUP(const_pos1), CAST(64, MSB(DUP(VARLP("const_pos1"))), VARLP("const_pos1")));
	RzILOpPure *op_SUB_202 = SUB(op_LSHIFT_201, cast_203);
	RzILOpPure *cond_204 = ITE(op_LT_195, op_NEG_199, op_SUB_202);
	RzILOpPure *cond_205 = ITE(op_EQ_146, op_ADD_159, cond_204);
	RzILOpPure *op_AND_206 = LET("const_pos0x0ffffffffLL", DUP(const_pos0x0ffffffffLL), LOGAND(cond_205, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_207 = LET("const_pos1", DUP(const_pos1), LET("const_pos32", DUP(const_pos32), MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_208 = SHIFTL0(op_AND_206, op_MUL_207);
	RzILOpPure *cast_210 = CAST(64, IL_FALSE, op_LSHIFT_208);
	RzILOpPure *op_OR_209 = LOGOR(op_AND_110, cast_210);

	// WRITE
	RzILOpEffect *c_call_19 = HEX_SEXTRACT64(arg_cast_20, arg_cast_21, arg_cast_22);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_23 = SETL("h_tmp2296", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_24 = SEQN(2, c_call_19, op_ASSIGN_hybrid_tmp_23);
	RzILOpEffect *c_call_53 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_54 = SETL("h_tmp2297", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_55 = SEQN(2, c_call_53, op_ASSIGN_hybrid_tmp_54);
	RzILOpEffect *c_call_56 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp2298", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *c_call_59 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_60 = SETL("h_tmp2299", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_61 = SEQN(2, c_call_59, op_ASSIGN_hybrid_tmp_60);
	RzILOpEffect *c_call_62 = HEX_DEPOSIT64(arg_cast_63, arg_cast_64, arg_cast_65, arg_cast_66);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_67 = SETL("h_tmp2300", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_68 = SEQN(2, c_call_62, op_ASSIGN_hybrid_tmp_67);
	RzILOpEffect *seq_69 = SEQN(3, seq_58, seq_61, seq_68);
	RzILOpEffect *op_ASSIGN_72 = SETG(usr_assoc_tmp, cast_73);
	RzILOpEffect *seq_74 = SEQN(3, seq_55, seq_69, op_ASSIGN_72);
	RzILOpEffect *op_ASSIGN_104 = SETG(Rdd_assoc_tmp, op_OR_102);
	RzILOpEffect *seq_105 = SEQN(2, seq_24, op_ASSIGN_104);
	RzILOpEffect *empty_106 = EMPTY();
	RzILOpEffect *c_call_126 = HEX_SEXTRACT64(arg_cast_127, arg_cast_128, arg_cast_129);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_130 = SETL("h_tmp2301", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_131 = SEQN(2, c_call_126, op_ASSIGN_hybrid_tmp_130);
	RzILOpEffect *c_call_160 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_161 = SETL("h_tmp2302", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_162 = SEQN(2, c_call_160, op_ASSIGN_hybrid_tmp_161);
	RzILOpEffect *c_call_163 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_164 = SETL("h_tmp2303", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_165 = SEQN(2, c_call_163, op_ASSIGN_hybrid_tmp_164);
	RzILOpEffect *c_call_166 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_167 = SETL("h_tmp2304", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_168 = SEQN(2, c_call_166, op_ASSIGN_hybrid_tmp_167);
	RzILOpEffect *c_call_169 = HEX_DEPOSIT64(arg_cast_170, arg_cast_171, arg_cast_172, arg_cast_173);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_174 = SETL("h_tmp2305", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_175 = SEQN(2, c_call_169, op_ASSIGN_hybrid_tmp_174);
	RzILOpEffect *seq_176 = SEQN(3, seq_165, seq_168, seq_175);
	RzILOpEffect *op_ASSIGN_179 = SETG(usr_assoc_tmp, cast_180);
	RzILOpEffect *seq_181 = SEQN(3, seq_162, seq_176, op_ASSIGN_179);
	RzILOpEffect *op_ASSIGN_211 = SETG(Rdd_assoc_tmp, op_OR_209);
	RzILOpEffect *seq_212 = SEQN(2, seq_131, op_ASSIGN_211);
	RzILOpEffect *empty_213 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, seq_105, empty_106, seq_212, empty_213, seq_74, seq_181);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>