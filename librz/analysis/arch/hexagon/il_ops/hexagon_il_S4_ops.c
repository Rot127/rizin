// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:38:03-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-19 17:04:30-04:00
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
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_ADD_0 = ADD(Rs, Ru);
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(op_ADD_0, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *op_LSHIFT_0 = LET("U", U, SHIFTL0(Rx, VARLP("U")));
	RzILOpPure *op_ADD_1 = LET("u", u, ADD(VARLP("u"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *op_LSHIFT_0 = LET("U", U, SHIFTL0(Rx, VARLP("U")));
	RzILOpPure *op_AND_1 = LET("u", u, LOGAND(VARLP("u"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_AND_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	// Declare: st32 h_tmp0;
	// Declare: st32 h_tmp1;
	// Declare: st32 h_tmp2;
	// Declare: st32 h_tmp3;
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_NOT_3 = LOGNOT(Rs);
	RzILOpPure *op_GT_8 = SGT(VARL("h_tmp0"), VARL("h_tmp1"));
	RzILOpPure *op_NOT_13 = LOGNOT(DUP(Rs));
	RzILOpPure *cond_18 = ITE(op_GT_8, VARL("h_tmp2"), VARL("h_tmp3"));
	RzILOpPure *op_ADD_19 = LET("s", s, ADD(cond_18, VARLP("s")));

	// WRITE
	RzILOpEffect *c_call_0 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_1 = SETL("h_tmp0", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_2 = SEQN(2, c_call_0, op_ASSIGN_hybrid_tmp_1);
	RzILOpEffect *c_call_4 = HEX_CLO32(op_NOT_3);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_6 = SEQN(2, c_call_4, op_ASSIGN_hybrid_tmp_5);
	RzILOpEffect *seq_7 = SEQN(2, seq_2, seq_6);
	RzILOpEffect *c_call_9 = HEX_CLO32(DUP(Rs));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp2", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_11 = SEQN(2, c_call_9, op_ASSIGN_hybrid_tmp_10);
	RzILOpEffect *seq_12 = SEQN(2, seq_7, seq_11);
	RzILOpEffect *c_call_14 = HEX_CLO32(op_NOT_13);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp3", SIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *seq_17 = SEQN(2, seq_12, seq_16);
	RzILOpEffect *op_ASSIGN_20 = SETG(Rd_assoc_tmp, op_ADD_19);
	RzILOpEffect *seq_21 = SEQN(2, seq_17, op_ASSIGN_20);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_21);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_clbpaddi(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_clbpnorm(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extract(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extract_rp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s4_extractp(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
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
	RzILOpPure *op_LSHIFT_0 = LET("const_pos1", const_pos1, LET("u", u, SHIFTL0(VARLP("const_pos1"), VARLP("u"))));
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_LSHIFT_0);
	RzILOpPure *op_EQ_2 = LET("const_pos0", const_pos0, EQ(op_AND_1, VARLP("const_pos0")));
	RzILOpPure *cond_3 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_2, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *op_ASSIGN_4 = SETG(Pd_assoc_tmp, cond_3);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_4);

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
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp1;
	// Declare: st64 h_tmp2;
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x00 = UN(32, 0x0);

	// EXEC
	RzILOpPure *cast_ut32_0 = CAST(32, IL_FALSE, Rs);
	RzILOpPure *cast_ut64_1 = CAST(32, IL_FALSE, cast_ut32_0);
	RzILOpPure *op_NE_2 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_6 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_2, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_LT_7 = LET("const_pos0", const_pos0, ULT(cond_6, VARLP("const_pos0")));
	RzILOpPure *cast_ut32_8 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_9 = CAST(64, IL_FALSE, cast_ut32_8);
	RzILOpPure *op_NE_10 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_10, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_NEG_16 = NEG(cond_15);
	RzILOpPure *op_SUB_17 = LET("const_pos1", const_pos1, SUB(op_NEG_16, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(cast_ut64_9, op_SUB_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos1", const_pos1, SHIFTR0(op_RSHIFT_18, VARLP("const_pos1")));
	RzILOpPure *cast_ut32_20 = LET("const_pos1", const_pos1, CAST(32, IL_FALSE, VARLP("const_pos1")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, cast_ut32_20);
	RzILOpPure *op_NE_22 = LET("const_pos7", const_pos7, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos7"), VARLP("const_pos0")))));
	RzILOpPure *cond_27 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_22, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_LSHIFT_28 = SHIFTL0(cast_ut64_21, cond_27);
	RzILOpPure *cond_29 = ITE(op_LT_7, op_RSHIFT_19, op_LSHIFT_28);
	RzILOpPure *op_AND_30 = LOGAND(cast_ut64_1, cond_29);
	RzILOpPure *op_EQ_31 = LET("const_pos0", const_pos0, EQ(op_AND_30, VARLP("const_pos0")));
	RzILOpPure *cond_32 = LET("const_pos0xff", const_pos0xff, LET("const_pos0x00", const_pos0x00, ITE(op_EQ_31, VARLP("const_pos0xff"), VARLP("const_pos0x00"))));

	// WRITE
	RzILOpEffect *c_call_3 = HEX_SEXTRACT64(Rt, VARLP("const_pos0"), VARLP("const_pos7"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_5 = SEQN(2, c_call_3, op_ASSIGN_hybrid_tmp_4);
	RzILOpEffect *c_call_11 = HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_13 = SEQN(2, c_call_11, op_ASSIGN_hybrid_tmp_12);
	RzILOpEffect *seq_14 = SEQN(2, seq_5, seq_13);
	RzILOpEffect *c_call_23 = HEX_SEXTRACT64(DUP(Rt), VARLP("const_pos0"), VARLP("const_pos7"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_24 = SETL("h_tmp2", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_25 = SEQN(2, c_call_23, op_ASSIGN_hybrid_tmp_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_14, seq_25);
	RzILOpEffect *op_ASSIGN_33 = SETG(Pd_assoc_tmp, cond_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_26, op_ASSIGN_33);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_34);

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
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_AND_0 = LET("s", s, LOGAND(Rs, VARLP("s")));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_AND_0 = LET("s", s, LOGAND(Rx, VARLP("s")));
	RzILOpPure *op_OR_1 = LOGOR(Ru, op_AND_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_OR_0 = LET("s", s, LOGOR(Rs, VARLP("s")));
	RzILOpPure *op_OR_1 = LOGOR(Rx, op_OR_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *op_LSHIFT_0 = LET("U", U, SHIFTL0(Rx, VARLP("U")));
	RzILOpPure *op_OR_1 = LET("u", u, LOGOR(VARLP("u"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_OR_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_3 = CAST(8, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3_4);

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
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_3 = CAST(16, IL_FALSE, VARL("EA"));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_op_3_4 = STOREW(VARL("EA"), op_3);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_op_3_4);

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
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *ms_S_3 = STOREW(VARL("EA"), VARLP("S"));
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, ms_S_3);

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
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5_6 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_7 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5_6, op_ASSIGN_7);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7_8 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7_8);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7_8 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7_8);

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
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_5 = CAST(8, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st8_5_6 = STOREW(VARL("EA"), cast_st8_5);
	RzILOpEffect *op_ASSIGN_7 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st8_5_6, op_ASSIGN_7);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7_8 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7_8);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, MUL(VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_7 = CAST(8, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st8_7_8 = STOREW(VARL("EA"), cast_st8_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st8_7_8);

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

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rtt_2 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *op_ASSIGN_3 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rtt_2, op_ASSIGN_3);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt_4 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt_4);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rtt_4 = STOREW(VARL("EA"), Rtt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rtt_4);

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
	RzILOpPure *op_MUL_2 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5_6 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_7 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5_6, op_ASSIGN_7);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *op_MUL_4 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Rt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5_6 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_7 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5_6, op_ASSIGN_7);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Rt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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
	RzILOpPure *op_MUL_2 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_3 = SHIFTR0(Nt, op_MUL_2);
	RzILOpPure *op_AND_4 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_3, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_5 = CAST(16, MSB(op_AND_4), op_AND_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_cast_st16_5_6 = STOREW(VARL("EA"), cast_st16_5);
	RzILOpEffect *op_ASSIGN_7 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_cast_st16_5_6, op_ASSIGN_7);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));
	RzILOpPure *op_MUL_4 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_5 = SHIFTR0(Nt, op_MUL_4);
	RzILOpPure *op_AND_6 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_5, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_7 = CAST(16, MSB(op_AND_6), op_AND_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_cast_st16_7_8 = STOREW(VARL("EA"), cast_st16_7);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_cast_st16_7_8);

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

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Rt_2 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *op_ASSIGN_3 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Rt_2, op_ASSIGN_3);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt_4 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt_4);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Rt_4 = STOREW(VARL("EA"), Rt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Rt_4);

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

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", LET("U", U, VARLP("U")));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *ms_Nt_2 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *op_ASSIGN_3 = SETG(Re_assoc_tmp, LET("U", U, VARLP("U")));
	RzILOpEffect *instruction_sequence = SEQN(4, op_ASSIGN_0, empty_1, ms_Nt_2, op_ASSIGN_3);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Rs, op_LSHIFT_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt_4 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt_4);

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
	RzILOpPure *op_LSHIFT_0 = LET("u", u, SHIFTL0(Ru, VARLP("u")));
	RzILOpPure *op_ADD_1 = LET("U", U, ADD(VARLP("U"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETL("EA", op_ADD_1);
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *ms_Nt_4 = STOREW(VARL("EA"), Nt);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_2, empty_3, ms_Nt_4);

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
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));

	// EXEC
	RzILOpPure *op_SUB_0 = SUB(Rs, Ru);
	RzILOpPure *op_ADD_1 = LET("s", s, ADD(op_SUB_0, VARLP("s")));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *op_LSHIFT_0 = LET("U", U, SHIFTL0(Rx, VARLP("U")));
	RzILOpPure *op_SUB_1 = LET("u", u, SUB(VARLP("u"), op_LSHIFT_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rx_assoc_tmp, op_SUB_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

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
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st16 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st16 h_tmp10;
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut64 h_tmp14;
	// Declare: st16 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut64 h_tmp19;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_ADD_26 = ADD(cast_st16_21, cast_st16_25);
	RzILOpPure *op_EQ_27 = EQ(cond_17, op_ADD_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(32, IL_FALSE, op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(op_AND_34), op_AND_34);
	RzILOpPure *op_ADD_36 = ADD(cast_st16_31, cast_st16_35);
	RzILOpPure *cond_53 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(32, IL_FALSE, op_AND_58);
	RzILOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rtt), op_MUL_60);
	RzILOpPure *op_AND_62 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_61, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_63 = CAST(16, MSB(op_AND_62), op_AND_62);
	RzILOpPure *op_ADD_64 = ADD(cast_st16_59, cast_st16_63);
	RzILOpPure *op_LT_65 = LET("const_pos0", const_pos0, ULT(op_ADD_64, VARLP("const_pos0")));
	RzILOpPure *op_SUB_66 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzILOpPure *op_NEG_68 = NEG(op_LSHIFT_67);
	RzILOpPure *op_SUB_69 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_70 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_69));
	RzILOpPure *op_SUB_71 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_70, VARLP("const_pos1")));
	RzILOpPure *cond_72 = ITE(op_LT_65, op_NEG_68, op_SUB_71);
	RzILOpPure *cond_73 = ITE(op_EQ_27, op_ADD_36, cond_72);
	RzILOpPure *op_AND_74 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_73, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_75 = CAST(64, IL_FALSE, op_AND_74);
	RzILOpPure *op_MUL_76 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_77 = SHIFTL0(cast_ut64_75, op_MUL_76);
	RzILOpPure *op_OR_78 = LOGOR(op_AND_3, op_LSHIFT_77);
	RzILOpPure *op_MUL_81 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_81));
	RzILOpPure *op_NOT_83 = LOGNOT(op_LSHIFT_82);
	RzILOpPure *op_AND_84 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_83);
	RzILOpPure *op_NE_85 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_86 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_MUL_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rtt), op_MUL_90);
	RzILOpPure *op_AND_92 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_91, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_93 = CAST(16, MSB(op_AND_92), op_AND_92);
	RzILOpPure *op_SUB_94 = SUB(cast_st16_89, cast_st16_93);
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_85, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rss), op_MUL_99);
	RzILOpPure *op_AND_101 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_100, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_102 = CAST(16, MSB(op_AND_101), op_AND_101);
	RzILOpPure *op_MUL_103 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rtt), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_104, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_106 = CAST(16, MSB(op_AND_105), op_AND_105);
	RzILOpPure *op_SUB_107 = SUB(cast_st16_102, cast_st16_106);
	RzILOpPure *op_EQ_108 = EQ(cond_98, op_SUB_107);
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_110, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_112 = CAST(32, IL_FALSE, op_AND_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_114, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_116 = CAST(16, MSB(op_AND_115), op_AND_115);
	RzILOpPure *op_SUB_117 = SUB(cast_st16_112, cast_st16_116);
	RzILOpPure *cond_134 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_137 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(32, IL_FALSE, op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_SUB_145 = SUB(cast_st16_140, cast_st16_144);
	RzILOpPure *op_LT_146 = LET("const_pos0", const_pos0, ULT(op_SUB_145, VARLP("const_pos0")));
	RzILOpPure *op_SUB_147 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_148 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_147));
	RzILOpPure *op_NEG_149 = NEG(op_LSHIFT_148);
	RzILOpPure *op_SUB_150 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_151 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_150));
	RzILOpPure *op_SUB_152 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_151, VARLP("const_pos1")));
	RzILOpPure *cond_153 = ITE(op_LT_146, op_NEG_149, op_SUB_152);
	RzILOpPure *cond_154 = ITE(op_EQ_108, op_SUB_117, cond_153);
	RzILOpPure *op_AND_155 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_154, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_156 = CAST(64, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_158 = SHIFTL0(cast_ut64_156, op_MUL_157);
	RzILOpPure *op_OR_159 = LOGOR(op_AND_84, op_LSHIFT_158);
	RzILOpPure *op_MUL_162 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_163 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_162));
	RzILOpPure *op_NOT_164 = LOGNOT(op_LSHIFT_163);
	RzILOpPure *op_AND_165 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rss), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *op_MUL_171 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_172 = SHIFTR0(DUP(Rtt), op_MUL_171);
	RzILOpPure *op_AND_173 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_172, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_174 = CAST(16, MSB(op_AND_173), op_AND_173);
	RzILOpPure *op_ADD_175 = ADD(cast_st16_170, cast_st16_174);
	RzILOpPure *cond_179 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_180 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_181 = SHIFTR0(DUP(Rss), op_MUL_180);
	RzILOpPure *op_AND_182 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_183 = CAST(16, MSB(op_AND_182), op_AND_182);
	RzILOpPure *op_MUL_184 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_185 = SHIFTR0(DUP(Rtt), op_MUL_184);
	RzILOpPure *op_AND_186 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_185, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_187 = CAST(16, MSB(op_AND_186), op_AND_186);
	RzILOpPure *op_ADD_188 = ADD(cast_st16_183, cast_st16_187);
	RzILOpPure *op_EQ_189 = EQ(cond_179, op_ADD_188);
	RzILOpPure *op_MUL_190 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_191 = SHIFTR0(DUP(Rss), op_MUL_190);
	RzILOpPure *op_AND_192 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_191, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_193 = CAST(32, IL_FALSE, op_AND_192);
	RzILOpPure *op_MUL_194 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_195 = SHIFTR0(DUP(Rtt), op_MUL_194);
	RzILOpPure *op_AND_196 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_195, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_197 = CAST(16, MSB(op_AND_196), op_AND_196);
	RzILOpPure *op_ADD_198 = ADD(cast_st16_193, cast_st16_197);
	RzILOpPure *cond_215 = ITE(VARL("h_tmp11"), VARL("h_tmp14"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rss), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(32, IL_FALSE, op_AND_220);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_223 = SHIFTR0(DUP(Rtt), op_MUL_222);
	RzILOpPure *op_AND_224 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_223, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_225 = CAST(16, MSB(op_AND_224), op_AND_224);
	RzILOpPure *op_ADD_226 = ADD(cast_st16_221, cast_st16_225);
	RzILOpPure *op_LT_227 = LET("const_pos0", const_pos0, ULT(op_ADD_226, VARLP("const_pos0")));
	RzILOpPure *op_SUB_228 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_229 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_228));
	RzILOpPure *op_NEG_230 = NEG(op_LSHIFT_229);
	RzILOpPure *op_SUB_231 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_232 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_231));
	RzILOpPure *op_SUB_233 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_232, VARLP("const_pos1")));
	RzILOpPure *cond_234 = ITE(op_LT_227, op_NEG_230, op_SUB_233);
	RzILOpPure *cond_235 = ITE(op_EQ_189, op_ADD_198, cond_234);
	RzILOpPure *op_AND_236 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_235, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_237 = CAST(64, IL_FALSE, op_AND_236);
	RzILOpPure *op_MUL_238 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_239 = SHIFTL0(cast_ut64_237, op_MUL_238);
	RzILOpPure *op_OR_240 = LOGOR(op_AND_165, op_LSHIFT_239);
	RzILOpPure *op_MUL_243 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_244 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_243));
	RzILOpPure *op_NOT_245 = LOGNOT(op_LSHIFT_244);
	RzILOpPure *op_AND_246 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_245);
	RzILOpPure *op_NE_247 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_248 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_249 = SHIFTR0(DUP(Rss), op_MUL_248);
	RzILOpPure *op_AND_250 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_249, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_251 = CAST(16, MSB(op_AND_250), op_AND_250);
	RzILOpPure *op_MUL_252 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rtt), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(16, MSB(op_AND_254), op_AND_254);
	RzILOpPure *op_SUB_256 = SUB(cast_st16_251, cast_st16_255);
	RzILOpPure *cond_260 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_247, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_261 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_262 = SHIFTR0(DUP(Rss), op_MUL_261);
	RzILOpPure *op_AND_263 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_262, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_264 = CAST(16, MSB(op_AND_263), op_AND_263);
	RzILOpPure *op_MUL_265 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_266 = SHIFTR0(DUP(Rtt), op_MUL_265);
	RzILOpPure *op_AND_267 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_266, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_268 = CAST(16, MSB(op_AND_267), op_AND_267);
	RzILOpPure *op_SUB_269 = SUB(cast_st16_264, cast_st16_268);
	RzILOpPure *op_EQ_270 = EQ(cond_260, op_SUB_269);
	RzILOpPure *op_MUL_271 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_272 = SHIFTR0(DUP(Rss), op_MUL_271);
	RzILOpPure *op_AND_273 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_272, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_274 = CAST(32, IL_FALSE, op_AND_273);
	RzILOpPure *op_MUL_275 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rtt), op_MUL_275);
	RzILOpPure *op_AND_277 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_276, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_278 = CAST(16, MSB(op_AND_277), op_AND_277);
	RzILOpPure *op_SUB_279 = SUB(cast_st16_274, cast_st16_278);
	RzILOpPure *cond_296 = ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_299 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_300 = SHIFTR0(DUP(Rss), op_MUL_299);
	RzILOpPure *op_AND_301 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_300, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_302 = CAST(32, IL_FALSE, op_AND_301);
	RzILOpPure *op_MUL_303 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_304 = SHIFTR0(DUP(Rtt), op_MUL_303);
	RzILOpPure *op_AND_305 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_304, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_306 = CAST(16, MSB(op_AND_305), op_AND_305);
	RzILOpPure *op_SUB_307 = SUB(cast_st16_302, cast_st16_306);
	RzILOpPure *op_LT_308 = LET("const_pos0", const_pos0, ULT(op_SUB_307, VARLP("const_pos0")));
	RzILOpPure *op_SUB_309 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_310 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_309));
	RzILOpPure *op_NEG_311 = NEG(op_LSHIFT_310);
	RzILOpPure *op_SUB_312 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_313 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_312));
	RzILOpPure *op_SUB_314 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_313, VARLP("const_pos1")));
	RzILOpPure *cond_315 = ITE(op_LT_308, op_NEG_311, op_SUB_314);
	RzILOpPure *cond_316 = ITE(op_EQ_270, op_SUB_279, cond_315);
	RzILOpPure *op_AND_317 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_316, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_318 = CAST(64, IL_FALSE, op_AND_317);
	RzILOpPure *op_MUL_319 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_320 = SHIFTL0(cast_ut64_318, op_MUL_319);
	RzILOpPure *op_OR_321 = LOGOR(op_AND_246, op_LSHIFT_320);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(op_ADD_13, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_16, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *c_call_49 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_48, seq_51);
	RzILOpEffect *op_ASSIGN_54 = SETG(usr_assoc_tmp, cond_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_52, op_ASSIGN_54);
	RzILOpEffect *op_ASSIGN_79 = SETG(Rdd_assoc_tmp, op_OR_78);
	RzILOpEffect *empty_80 = EMPTY();
	RzILOpEffect *c_call_95 = HEX_SEXTRACT64(op_SUB_94, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_96 = SETL("h_tmp5", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_97 = SEQN(2, c_call_95, op_ASSIGN_hybrid_tmp_96);
	RzILOpEffect *c_call_118 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_118, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *seq_121 = SEQN(2, seq_97, seq_120);
	RzILOpEffect *c_call_122 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_122, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *seq_125 = SEQN(2, seq_121, seq_124);
	RzILOpEffect *c_call_126 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_127 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_128 = SEQN(2, c_call_126, op_ASSIGN_hybrid_tmp_127);
	RzILOpEffect *seq_129 = SEQN(2, seq_125, seq_128);
	RzILOpEffect *c_call_130 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_131 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_132 = SEQN(2, c_call_130, op_ASSIGN_hybrid_tmp_131);
	RzILOpEffect *seq_133 = SEQN(2, seq_129, seq_132);
	RzILOpEffect *op_ASSIGN_135 = SETG(usr_assoc_tmp, cond_134);
	RzILOpEffect *seq_136 = SEQN(2, seq_133, op_ASSIGN_135);
	RzILOpEffect *op_ASSIGN_160 = SETG(Rdd_assoc_tmp, op_OR_159);
	RzILOpEffect *empty_161 = EMPTY();
	RzILOpEffect *c_call_176 = HEX_SEXTRACT64(op_ADD_175, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp10", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_199 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_200 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_201 = SEQN(2, c_call_199, op_ASSIGN_hybrid_tmp_200);
	RzILOpEffect *seq_202 = SEQN(2, seq_178, seq_201);
	RzILOpEffect *c_call_203 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_204 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_205 = SEQN(2, c_call_203, op_ASSIGN_hybrid_tmp_204);
	RzILOpEffect *seq_206 = SEQN(2, seq_202, seq_205);
	RzILOpEffect *c_call_207 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_207, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *seq_210 = SEQN(2, seq_206, seq_209);
	RzILOpEffect *c_call_211 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp12"), VARL("h_tmp13"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_212 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_213 = SEQN(2, c_call_211, op_ASSIGN_hybrid_tmp_212);
	RzILOpEffect *seq_214 = SEQN(2, seq_210, seq_213);
	RzILOpEffect *op_ASSIGN_216 = SETG(usr_assoc_tmp, cond_215);
	RzILOpEffect *seq_217 = SEQN(2, seq_214, op_ASSIGN_216);
	RzILOpEffect *op_ASSIGN_241 = SETG(Rdd_assoc_tmp, op_OR_240);
	RzILOpEffect *empty_242 = EMPTY();
	RzILOpEffect *c_call_257 = HEX_SEXTRACT64(op_SUB_256, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_258 = SETL("h_tmp15", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_259 = SEQN(2, c_call_257, op_ASSIGN_hybrid_tmp_258);
	RzILOpEffect *c_call_280 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_281 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_282 = SEQN(2, c_call_280, op_ASSIGN_hybrid_tmp_281);
	RzILOpEffect *seq_283 = SEQN(2, seq_259, seq_282);
	RzILOpEffect *c_call_284 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_285 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_286 = SEQN(2, c_call_284, op_ASSIGN_hybrid_tmp_285);
	RzILOpEffect *seq_287 = SEQN(2, seq_283, seq_286);
	RzILOpEffect *c_call_288 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_289 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_290 = SEQN(2, c_call_288, op_ASSIGN_hybrid_tmp_289);
	RzILOpEffect *seq_291 = SEQN(2, seq_287, seq_290);
	RzILOpEffect *c_call_292 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_293 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_294 = SEQN(2, c_call_292, op_ASSIGN_hybrid_tmp_293);
	RzILOpEffect *seq_295 = SEQN(2, seq_291, seq_294);
	RzILOpEffect *op_ASSIGN_297 = SETG(usr_assoc_tmp, cond_296);
	RzILOpEffect *seq_298 = SEQN(2, seq_295, op_ASSIGN_297);
	RzILOpEffect *op_ASSIGN_322 = SETG(Rdd_assoc_tmp, op_OR_321);
	RzILOpEffect *empty_323 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_79, empty_80, op_ASSIGN_160, empty_161, op_ASSIGN_241, empty_242, op_ASSIGN_322, empty_323, seq_55, seq_136, seq_217, seq_298);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp10;
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut64 h_tmp14;
	// Declare: ut32 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut64 h_tmp19;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_ADD_13 = ADD(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_ADD_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzILOpPure *op_ADD_29 = LET("const_pos1", const_pos1, ADD(op_ADD_28, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_30 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_29, VARLP("const_pos1")));
	RzILOpPure *op_EQ_31 = EQ(cond_19, op_RSHIFT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(32, IL_FALSE, op_AND_34);
	RzILOpPure *op_MUL_36 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(op_AND_38), op_AND_38);
	RzILOpPure *op_ADD_40 = ADD(cast_st16_35, cast_st16_39);
	RzILOpPure *op_ADD_41 = LET("const_pos1", const_pos1, ADD(op_ADD_40, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_41, VARLP("const_pos1")));
	RzILOpPure *cond_59 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_62 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_63, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_65 = CAST(32, IL_FALSE, op_AND_64);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rtt), op_MUL_66);
	RzILOpPure *op_AND_68 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_67, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(op_AND_68), op_AND_68);
	RzILOpPure *op_ADD_70 = ADD(cast_st16_65, cast_st16_69);
	RzILOpPure *op_ADD_71 = LET("const_pos1", const_pos1, ADD(op_ADD_70, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_72 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_71, VARLP("const_pos1")));
	RzILOpPure *op_LT_73 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_72, VARLP("const_pos0")));
	RzILOpPure *op_SUB_74 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_SUB_79 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_78, VARLP("const_pos1")));
	RzILOpPure *cond_80 = ITE(op_LT_73, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_81 = ITE(op_EQ_31, op_RSHIFT_42, cond_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_81, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_83 = CAST(64, IL_FALSE, op_AND_82);
	RzILOpPure *op_MUL_84 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_83, op_MUL_84);
	RzILOpPure *op_OR_86 = LOGOR(op_AND_3, op_LSHIFT_85);
	RzILOpPure *op_MUL_89 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_90 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_89));
	RzILOpPure *op_NOT_91 = LOGNOT(op_LSHIFT_90);
	RzILOpPure *op_AND_92 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_91);
	RzILOpPure *op_NE_93 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_94 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rss), op_MUL_94);
	RzILOpPure *op_AND_96 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_95, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_97 = CAST(32, IL_FALSE, op_AND_96);
	RzILOpPure *op_MUL_98 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_99, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_101 = CAST(16, MSB(op_AND_100), op_AND_100);
	RzILOpPure *op_SUB_102 = SUB(cast_st16_97, cast_st16_101);
	RzILOpPure *op_ADD_103 = LET("const_pos1", const_pos1, ADD(op_SUB_102, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_104 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_103, VARLP("const_pos1")));
	RzILOpPure *cond_108 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_93, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_110, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_112 = CAST(32, IL_FALSE, op_AND_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_114, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_116 = CAST(16, MSB(op_AND_115), op_AND_115);
	RzILOpPure *op_SUB_117 = SUB(cast_st16_112, cast_st16_116);
	RzILOpPure *op_ADD_118 = LET("const_pos1", const_pos1, ADD(op_SUB_117, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_119 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_118, VARLP("const_pos1")));
	RzILOpPure *op_EQ_120 = EQ(cond_108, op_RSHIFT_119);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_SUB_129 = SUB(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_SUB_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *cond_148 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_151 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_152 = SHIFTR0(DUP(Rss), op_MUL_151);
	RzILOpPure *op_AND_153 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_152, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_154 = CAST(32, IL_FALSE, op_AND_153);
	RzILOpPure *op_MUL_155 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rtt), op_MUL_155);
	RzILOpPure *op_AND_157 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_156, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_158 = CAST(16, MSB(op_AND_157), op_AND_157);
	RzILOpPure *op_SUB_159 = SUB(cast_st16_154, cast_st16_158);
	RzILOpPure *op_ADD_160 = LET("const_pos1", const_pos1, ADD(op_SUB_159, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_161 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_160, VARLP("const_pos1")));
	RzILOpPure *op_LT_162 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_161, VARLP("const_pos0")));
	RzILOpPure *op_SUB_163 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_164 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_163));
	RzILOpPure *op_NEG_165 = NEG(op_LSHIFT_164);
	RzILOpPure *op_SUB_166 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_167 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_166));
	RzILOpPure *op_SUB_168 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_167, VARLP("const_pos1")));
	RzILOpPure *cond_169 = ITE(op_LT_162, op_NEG_165, op_SUB_168);
	RzILOpPure *cond_170 = ITE(op_EQ_120, op_RSHIFT_131, cond_169);
	RzILOpPure *op_AND_171 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_170, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_172 = CAST(64, IL_FALSE, op_AND_171);
	RzILOpPure *op_MUL_173 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_174 = SHIFTL0(cast_ut64_172, op_MUL_173);
	RzILOpPure *op_OR_175 = LOGOR(op_AND_92, op_LSHIFT_174);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_179 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_178));
	RzILOpPure *op_NOT_180 = LOGNOT(op_LSHIFT_179);
	RzILOpPure *op_AND_181 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_180);
	RzILOpPure *op_NE_182 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_183 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_184 = SHIFTR0(DUP(Rss), op_MUL_183);
	RzILOpPure *op_AND_185 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_184, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_186 = CAST(32, IL_FALSE, op_AND_185);
	RzILOpPure *op_MUL_187 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_188 = SHIFTR0(DUP(Rtt), op_MUL_187);
	RzILOpPure *op_AND_189 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_188, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_190 = CAST(16, MSB(op_AND_189), op_AND_189);
	RzILOpPure *op_ADD_191 = ADD(cast_st16_186, cast_st16_190);
	RzILOpPure *op_ADD_192 = LET("const_pos1", const_pos1, ADD(op_ADD_191, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_193 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_192, VARLP("const_pos1")));
	RzILOpPure *cond_197 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_182, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_198 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_199 = SHIFTR0(DUP(Rss), op_MUL_198);
	RzILOpPure *op_AND_200 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_199, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_201 = CAST(32, IL_FALSE, op_AND_200);
	RzILOpPure *op_MUL_202 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_203 = SHIFTR0(DUP(Rtt), op_MUL_202);
	RzILOpPure *op_AND_204 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_203, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_205 = CAST(16, MSB(op_AND_204), op_AND_204);
	RzILOpPure *op_ADD_206 = ADD(cast_st16_201, cast_st16_205);
	RzILOpPure *op_ADD_207 = LET("const_pos1", const_pos1, ADD(op_ADD_206, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_208 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_207, VARLP("const_pos1")));
	RzILOpPure *op_EQ_209 = EQ(cond_197, op_RSHIFT_208);
	RzILOpPure *op_MUL_210 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_211 = SHIFTR0(DUP(Rss), op_MUL_210);
	RzILOpPure *op_AND_212 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_211, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_213 = CAST(32, IL_FALSE, op_AND_212);
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rtt), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_ADD_218 = ADD(cast_st16_213, cast_st16_217);
	RzILOpPure *op_ADD_219 = LET("const_pos1", const_pos1, ADD(op_ADD_218, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_220 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_219, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(VARL("h_tmp11"), VARL("h_tmp14"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_240 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_ADD_248 = ADD(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_ADD_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_LT_251 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_250, VARLP("const_pos0")));
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_NEG_254 = NEG(op_LSHIFT_253);
	RzILOpPure *op_SUB_255 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_256 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_255));
	RzILOpPure *op_SUB_257 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_256, VARLP("const_pos1")));
	RzILOpPure *cond_258 = ITE(op_LT_251, op_NEG_254, op_SUB_257);
	RzILOpPure *cond_259 = ITE(op_EQ_209, op_RSHIFT_220, cond_258);
	RzILOpPure *op_AND_260 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_259, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_261 = CAST(64, IL_FALSE, op_AND_260);
	RzILOpPure *op_MUL_262 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_263 = SHIFTL0(cast_ut64_261, op_MUL_262);
	RzILOpPure *op_OR_264 = LOGOR(op_AND_181, op_LSHIFT_263);
	RzILOpPure *op_MUL_267 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_268 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_267));
	RzILOpPure *op_NOT_269 = LOGNOT(op_LSHIFT_268);
	RzILOpPure *op_AND_270 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_269);
	RzILOpPure *op_NE_271 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_272 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_273 = SHIFTR0(DUP(Rss), op_MUL_272);
	RzILOpPure *op_AND_274 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_273, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_275 = CAST(32, IL_FALSE, op_AND_274);
	RzILOpPure *op_MUL_276 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_277 = SHIFTR0(DUP(Rtt), op_MUL_276);
	RzILOpPure *op_AND_278 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_277, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_279 = CAST(16, MSB(op_AND_278), op_AND_278);
	RzILOpPure *op_SUB_280 = SUB(cast_st16_275, cast_st16_279);
	RzILOpPure *op_ADD_281 = LET("const_pos1", const_pos1, ADD(op_SUB_280, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_282 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_281, VARLP("const_pos1")));
	RzILOpPure *cond_286 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_271, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_287 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_288 = SHIFTR0(DUP(Rss), op_MUL_287);
	RzILOpPure *op_AND_289 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_288, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_290 = CAST(32, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_292 = SHIFTR0(DUP(Rtt), op_MUL_291);
	RzILOpPure *op_AND_293 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_292, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_294 = CAST(16, MSB(op_AND_293), op_AND_293);
	RzILOpPure *op_SUB_295 = SUB(cast_st16_290, cast_st16_294);
	RzILOpPure *op_ADD_296 = LET("const_pos1", const_pos1, ADD(op_SUB_295, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_297 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_296, VARLP("const_pos1")));
	RzILOpPure *op_EQ_298 = EQ(cond_286, op_RSHIFT_297);
	RzILOpPure *op_MUL_299 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_300 = SHIFTR0(DUP(Rss), op_MUL_299);
	RzILOpPure *op_AND_301 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_300, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_302 = CAST(32, IL_FALSE, op_AND_301);
	RzILOpPure *op_MUL_303 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_304 = SHIFTR0(DUP(Rtt), op_MUL_303);
	RzILOpPure *op_AND_305 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_304, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_306 = CAST(16, MSB(op_AND_305), op_AND_305);
	RzILOpPure *op_SUB_307 = SUB(cast_st16_302, cast_st16_306);
	RzILOpPure *op_ADD_308 = LET("const_pos1", const_pos1, ADD(op_SUB_307, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_309 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_308, VARLP("const_pos1")));
	RzILOpPure *cond_326 = ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_329 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_330 = SHIFTR0(DUP(Rss), op_MUL_329);
	RzILOpPure *op_AND_331 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_330, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_332 = CAST(32, IL_FALSE, op_AND_331);
	RzILOpPure *op_MUL_333 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_334 = SHIFTR0(DUP(Rtt), op_MUL_333);
	RzILOpPure *op_AND_335 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_334, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_336 = CAST(16, MSB(op_AND_335), op_AND_335);
	RzILOpPure *op_SUB_337 = SUB(cast_st16_332, cast_st16_336);
	RzILOpPure *op_ADD_338 = LET("const_pos1", const_pos1, ADD(op_SUB_337, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_339 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_338, VARLP("const_pos1")));
	RzILOpPure *op_LT_340 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_339, VARLP("const_pos0")));
	RzILOpPure *op_SUB_341 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_342 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_341));
	RzILOpPure *op_NEG_343 = NEG(op_LSHIFT_342);
	RzILOpPure *op_SUB_344 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_345 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_344));
	RzILOpPure *op_SUB_346 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_345, VARLP("const_pos1")));
	RzILOpPure *cond_347 = ITE(op_LT_340, op_NEG_343, op_SUB_346);
	RzILOpPure *cond_348 = ITE(op_EQ_298, op_RSHIFT_309, cond_347);
	RzILOpPure *op_AND_349 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_348, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_350 = CAST(64, IL_FALSE, op_AND_349);
	RzILOpPure *op_MUL_351 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_352 = SHIFTL0(cast_ut64_350, op_MUL_351);
	RzILOpPure *op_OR_353 = LOGOR(op_AND_270, op_LSHIFT_352);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_18, seq_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_50, seq_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_54, seq_57);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cond_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_58, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_87 = SETG(Rdd_assoc_tmp, op_OR_86);
	RzILOpEffect *empty_88 = EMPTY();
	RzILOpEffect *c_call_105 = HEX_SEXTRACT64(op_RSHIFT_104, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_106 = SETL("h_tmp5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_107 = SEQN(2, c_call_105, op_ASSIGN_hybrid_tmp_106);
	RzILOpEffect *c_call_132 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_133 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_134 = SEQN(2, c_call_132, op_ASSIGN_hybrid_tmp_133);
	RzILOpEffect *seq_135 = SEQN(2, seq_107, seq_134);
	RzILOpEffect *c_call_136 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *seq_139 = SEQN(2, seq_135, seq_138);
	RzILOpEffect *c_call_140 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_141 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_142 = SEQN(2, c_call_140, op_ASSIGN_hybrid_tmp_141);
	RzILOpEffect *seq_143 = SEQN(2, seq_139, seq_142);
	RzILOpEffect *c_call_144 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_145 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_146 = SEQN(2, c_call_144, op_ASSIGN_hybrid_tmp_145);
	RzILOpEffect *seq_147 = SEQN(2, seq_143, seq_146);
	RzILOpEffect *op_ASSIGN_149 = SETG(usr_assoc_tmp, cond_148);
	RzILOpEffect *seq_150 = SEQN(2, seq_147, op_ASSIGN_149);
	RzILOpEffect *op_ASSIGN_176 = SETG(Rdd_assoc_tmp, op_OR_175);
	RzILOpEffect *empty_177 = EMPTY();
	RzILOpEffect *c_call_194 = HEX_SEXTRACT64(op_RSHIFT_193, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_195 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_196 = SEQN(2, c_call_194, op_ASSIGN_hybrid_tmp_195);
	RzILOpEffect *c_call_221 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_222 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_223 = SEQN(2, c_call_221, op_ASSIGN_hybrid_tmp_222);
	RzILOpEffect *seq_224 = SEQN(2, seq_196, seq_223);
	RzILOpEffect *c_call_225 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_226 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_227 = SEQN(2, c_call_225, op_ASSIGN_hybrid_tmp_226);
	RzILOpEffect *seq_228 = SEQN(2, seq_224, seq_227);
	RzILOpEffect *c_call_229 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_230 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_231 = SEQN(2, c_call_229, op_ASSIGN_hybrid_tmp_230);
	RzILOpEffect *seq_232 = SEQN(2, seq_228, seq_231);
	RzILOpEffect *c_call_233 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp12"), VARL("h_tmp13"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_234 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_235 = SEQN(2, c_call_233, op_ASSIGN_hybrid_tmp_234);
	RzILOpEffect *seq_236 = SEQN(2, seq_232, seq_235);
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc_tmp, cond_237);
	RzILOpEffect *seq_239 = SEQN(2, seq_236, op_ASSIGN_238);
	RzILOpEffect *op_ASSIGN_265 = SETG(Rdd_assoc_tmp, op_OR_264);
	RzILOpEffect *empty_266 = EMPTY();
	RzILOpEffect *c_call_283 = HEX_SEXTRACT64(op_RSHIFT_282, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_284 = SETL("h_tmp15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_285 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_284);
	RzILOpEffect *c_call_310 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_311 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_312 = SEQN(2, c_call_310, op_ASSIGN_hybrid_tmp_311);
	RzILOpEffect *seq_313 = SEQN(2, seq_285, seq_312);
	RzILOpEffect *c_call_314 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_315 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_316 = SEQN(2, c_call_314, op_ASSIGN_hybrid_tmp_315);
	RzILOpEffect *seq_317 = SEQN(2, seq_313, seq_316);
	RzILOpEffect *c_call_318 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_319 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_320 = SEQN(2, c_call_318, op_ASSIGN_hybrid_tmp_319);
	RzILOpEffect *seq_321 = SEQN(2, seq_317, seq_320);
	RzILOpEffect *c_call_322 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_323 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_324 = SEQN(2, c_call_322, op_ASSIGN_hybrid_tmp_323);
	RzILOpEffect *seq_325 = SEQN(2, seq_321, seq_324);
	RzILOpEffect *op_ASSIGN_327 = SETG(usr_assoc_tmp, cond_326);
	RzILOpEffect *seq_328 = SEQN(2, seq_325, op_ASSIGN_327);
	RzILOpEffect *op_ASSIGN_354 = SETG(Rdd_assoc_tmp, op_OR_353);
	RzILOpEffect *empty_355 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_87, empty_88, op_ASSIGN_176, empty_177, op_ASSIGN_265, empty_266, op_ASSIGN_354, empty_355, seq_61, seq_150, seq_239, seq_328);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxaddsubw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_ADD_15 = ADD(cast_st64_9, cast_st64_14);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_23 = CAST(32, MSB(op_AND_22), op_AND_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzILOpPure *op_ADD_30 = ADD(cast_st64_24, cast_st64_29);
	RzILOpPure *op_EQ_31 = EQ(cond_19, op_ADD_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, IL_FALSE, cast_st32_35);
	RzILOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzILOpPure *op_ADD_42 = ADD(cast_st64_36, cast_st64_41);
	RzILOpPure *cond_59 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_62 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(32, IL_FALSE, cast_st32_65);
	RzILOpPure *op_MUL_67 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_68, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_70 = CAST(32, MSB(op_AND_69), op_AND_69);
	RzILOpPure *cast_st64_71 = CAST(64, MSB(cast_st32_70), cast_st32_70);
	RzILOpPure *op_ADD_72 = ADD(cast_st64_66, cast_st64_71);
	RzILOpPure *op_LT_73 = LET("const_pos0", const_pos0, ULT(op_ADD_72, VARLP("const_pos0")));
	RzILOpPure *op_SUB_74 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_SUB_79 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_78, VARLP("const_pos1")));
	RzILOpPure *cond_80 = ITE(op_LT_73, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_81 = ITE(op_EQ_31, op_ADD_42, cond_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_81, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(op_AND_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_3, op_LSHIFT_84);
	RzILOpPure *op_MUL_88 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_89 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_88));
	RzILOpPure *op_NOT_90 = LOGNOT(op_LSHIFT_89);
	RzILOpPure *op_AND_91 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_90);
	RzILOpPure *op_NE_92 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rss), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_94, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_96 = CAST(32, MSB(op_AND_95), op_AND_95);
	RzILOpPure *cast_st64_97 = CAST(64, MSB(cast_st32_96), cast_st32_96);
	RzILOpPure *op_MUL_98 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_99, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_101 = CAST(32, MSB(op_AND_100), op_AND_100);
	RzILOpPure *cast_st64_102 = CAST(64, MSB(cast_st32_101), cast_st32_101);
	RzILOpPure *op_SUB_103 = SUB(cast_st64_97, cast_st64_102);
	RzILOpPure *cond_107 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_108 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_114, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_116 = CAST(32, MSB(op_AND_115), op_AND_115);
	RzILOpPure *cast_st64_117 = CAST(64, MSB(cast_st32_116), cast_st32_116);
	RzILOpPure *op_SUB_118 = SUB(cast_st64_112, cast_st64_117);
	RzILOpPure *op_EQ_119 = EQ(cond_107, op_SUB_118);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(64, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_SUB_130 = SUB(cast_st64_124, cast_st64_129);
	RzILOpPure *cond_147 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_150 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rss), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_151, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_153 = CAST(32, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cast_st64_154 = CAST(32, IL_FALSE, cast_st32_153);
	RzILOpPure *op_MUL_155 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rtt), op_MUL_155);
	RzILOpPure *op_AND_157 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_156, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_158 = CAST(32, MSB(op_AND_157), op_AND_157);
	RzILOpPure *cast_st64_159 = CAST(64, MSB(cast_st32_158), cast_st32_158);
	RzILOpPure *op_SUB_160 = SUB(cast_st64_154, cast_st64_159);
	RzILOpPure *op_LT_161 = LET("const_pos0", const_pos0, ULT(op_SUB_160, VARLP("const_pos0")));
	RzILOpPure *op_SUB_162 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_163 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_162));
	RzILOpPure *op_NEG_164 = NEG(op_LSHIFT_163);
	RzILOpPure *op_SUB_165 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_166 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_165));
	RzILOpPure *op_SUB_167 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_166, VARLP("const_pos1")));
	RzILOpPure *cond_168 = ITE(op_LT_161, op_NEG_164, op_SUB_167);
	RzILOpPure *cond_169 = ITE(op_EQ_119, op_SUB_130, cond_168);
	RzILOpPure *op_AND_170 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_169, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_171 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_172 = SHIFTL0(op_AND_170, op_MUL_171);
	RzILOpPure *op_OR_173 = LOGOR(op_AND_91, op_LSHIFT_172);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(op_ADD_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_18, seq_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_50, seq_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_54, seq_57);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cond_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_58, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *c_call_104 = HEX_SEXTRACT64(op_SUB_103, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_105 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_106 = SEQN(2, c_call_104, op_ASSIGN_hybrid_tmp_105);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_106, seq_133);
	RzILOpEffect *c_call_135 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *c_call_139 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_139, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *seq_142 = SEQN(2, seq_138, seq_141);
	RzILOpEffect *c_call_143 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_144 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_145 = SEQN(2, c_call_143, op_ASSIGN_hybrid_tmp_144);
	RzILOpEffect *seq_146 = SEQN(2, seq_142, seq_145);
	RzILOpEffect *op_ASSIGN_148 = SETG(usr_assoc_tmp, cond_147);
	RzILOpEffect *seq_149 = SEQN(2, seq_146, op_ASSIGN_148);
	RzILOpEffect *op_ASSIGN_174 = SETG(Rdd_assoc_tmp, op_OR_173);
	RzILOpEffect *empty_175 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_86, empty_87, op_ASSIGN_174, empty_175, seq_61, seq_149);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st16 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: st16 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: st16 h_tmp10;
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut64 h_tmp14;
	// Declare: st16 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut64 h_tmp19;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(16, MSB(op_AND_7), op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rtt), op_MUL_22);
	RzILOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzILOpPure *op_SUB_26 = SUB(cast_st16_21, cast_st16_25);
	RzILOpPure *op_EQ_27 = EQ(cond_17, op_SUB_26);
	RzILOpPure *op_MUL_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rss), op_MUL_28);
	RzILOpPure *op_AND_30 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_29, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_31 = CAST(32, IL_FALSE, op_AND_30);
	RzILOpPure *op_MUL_32 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rtt), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(16, MSB(op_AND_34), op_AND_34);
	RzILOpPure *op_SUB_36 = SUB(cast_st16_31, cast_st16_35);
	RzILOpPure *cond_53 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_56 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_57 = SHIFTR0(DUP(Rss), op_MUL_56);
	RzILOpPure *op_AND_58 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_57, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_59 = CAST(32, IL_FALSE, op_AND_58);
	RzILOpPure *op_MUL_60 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_61 = SHIFTR0(DUP(Rtt), op_MUL_60);
	RzILOpPure *op_AND_62 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_61, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_63 = CAST(16, MSB(op_AND_62), op_AND_62);
	RzILOpPure *op_SUB_64 = SUB(cast_st16_59, cast_st16_63);
	RzILOpPure *op_LT_65 = LET("const_pos0", const_pos0, ULT(op_SUB_64, VARLP("const_pos0")));
	RzILOpPure *op_SUB_66 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_67 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_66));
	RzILOpPure *op_NEG_68 = NEG(op_LSHIFT_67);
	RzILOpPure *op_SUB_69 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_70 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_69));
	RzILOpPure *op_SUB_71 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_70, VARLP("const_pos1")));
	RzILOpPure *cond_72 = ITE(op_LT_65, op_NEG_68, op_SUB_71);
	RzILOpPure *cond_73 = ITE(op_EQ_27, op_SUB_36, cond_72);
	RzILOpPure *op_AND_74 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_73, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_75 = CAST(64, IL_FALSE, op_AND_74);
	RzILOpPure *op_MUL_76 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_77 = SHIFTL0(cast_ut64_75, op_MUL_76);
	RzILOpPure *op_OR_78 = LOGOR(op_AND_3, op_LSHIFT_77);
	RzILOpPure *op_MUL_81 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_82 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_81));
	RzILOpPure *op_NOT_83 = LOGNOT(op_LSHIFT_82);
	RzILOpPure *op_AND_84 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_83);
	RzILOpPure *op_NE_85 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_86 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_87 = SHIFTR0(DUP(Rss), op_MUL_86);
	RzILOpPure *op_AND_88 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_87, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_89 = CAST(16, MSB(op_AND_88), op_AND_88);
	RzILOpPure *op_MUL_90 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_91 = SHIFTR0(DUP(Rtt), op_MUL_90);
	RzILOpPure *op_AND_92 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_91, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_93 = CAST(16, MSB(op_AND_92), op_AND_92);
	RzILOpPure *op_ADD_94 = ADD(cast_st16_89, cast_st16_93);
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_85, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_100 = SHIFTR0(DUP(Rss), op_MUL_99);
	RzILOpPure *op_AND_101 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_100, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_102 = CAST(16, MSB(op_AND_101), op_AND_101);
	RzILOpPure *op_MUL_103 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_104 = SHIFTR0(DUP(Rtt), op_MUL_103);
	RzILOpPure *op_AND_105 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_104, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_106 = CAST(16, MSB(op_AND_105), op_AND_105);
	RzILOpPure *op_ADD_107 = ADD(cast_st16_102, cast_st16_106);
	RzILOpPure *op_EQ_108 = EQ(cond_98, op_ADD_107);
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_110, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_112 = CAST(32, IL_FALSE, op_AND_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_114, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_116 = CAST(16, MSB(op_AND_115), op_AND_115);
	RzILOpPure *op_ADD_117 = ADD(cast_st16_112, cast_st16_116);
	RzILOpPure *cond_134 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_137 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_138 = SHIFTR0(DUP(Rss), op_MUL_137);
	RzILOpPure *op_AND_139 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_138, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_140 = CAST(32, IL_FALSE, op_AND_139);
	RzILOpPure *op_MUL_141 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_142 = SHIFTR0(DUP(Rtt), op_MUL_141);
	RzILOpPure *op_AND_143 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_142, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_144 = CAST(16, MSB(op_AND_143), op_AND_143);
	RzILOpPure *op_ADD_145 = ADD(cast_st16_140, cast_st16_144);
	RzILOpPure *op_LT_146 = LET("const_pos0", const_pos0, ULT(op_ADD_145, VARLP("const_pos0")));
	RzILOpPure *op_SUB_147 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_148 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_147));
	RzILOpPure *op_NEG_149 = NEG(op_LSHIFT_148);
	RzILOpPure *op_SUB_150 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_151 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_150));
	RzILOpPure *op_SUB_152 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_151, VARLP("const_pos1")));
	RzILOpPure *cond_153 = ITE(op_LT_146, op_NEG_149, op_SUB_152);
	RzILOpPure *cond_154 = ITE(op_EQ_108, op_ADD_117, cond_153);
	RzILOpPure *op_AND_155 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_154, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_156 = CAST(64, IL_FALSE, op_AND_155);
	RzILOpPure *op_MUL_157 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_158 = SHIFTL0(cast_ut64_156, op_MUL_157);
	RzILOpPure *op_OR_159 = LOGOR(op_AND_84, op_LSHIFT_158);
	RzILOpPure *op_MUL_162 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_163 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_162));
	RzILOpPure *op_NOT_164 = LOGNOT(op_LSHIFT_163);
	RzILOpPure *op_AND_165 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rss), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *op_MUL_171 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_172 = SHIFTR0(DUP(Rtt), op_MUL_171);
	RzILOpPure *op_AND_173 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_172, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_174 = CAST(16, MSB(op_AND_173), op_AND_173);
	RzILOpPure *op_SUB_175 = SUB(cast_st16_170, cast_st16_174);
	RzILOpPure *cond_179 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_180 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_181 = SHIFTR0(DUP(Rss), op_MUL_180);
	RzILOpPure *op_AND_182 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_181, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_183 = CAST(16, MSB(op_AND_182), op_AND_182);
	RzILOpPure *op_MUL_184 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_185 = SHIFTR0(DUP(Rtt), op_MUL_184);
	RzILOpPure *op_AND_186 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_185, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_187 = CAST(16, MSB(op_AND_186), op_AND_186);
	RzILOpPure *op_SUB_188 = SUB(cast_st16_183, cast_st16_187);
	RzILOpPure *op_EQ_189 = EQ(cond_179, op_SUB_188);
	RzILOpPure *op_MUL_190 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_191 = SHIFTR0(DUP(Rss), op_MUL_190);
	RzILOpPure *op_AND_192 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_191, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_193 = CAST(32, IL_FALSE, op_AND_192);
	RzILOpPure *op_MUL_194 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_195 = SHIFTR0(DUP(Rtt), op_MUL_194);
	RzILOpPure *op_AND_196 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_195, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_197 = CAST(16, MSB(op_AND_196), op_AND_196);
	RzILOpPure *op_SUB_198 = SUB(cast_st16_193, cast_st16_197);
	RzILOpPure *cond_215 = ITE(VARL("h_tmp11"), VARL("h_tmp14"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_218 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_219 = SHIFTR0(DUP(Rss), op_MUL_218);
	RzILOpPure *op_AND_220 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_219, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_221 = CAST(32, IL_FALSE, op_AND_220);
	RzILOpPure *op_MUL_222 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_223 = SHIFTR0(DUP(Rtt), op_MUL_222);
	RzILOpPure *op_AND_224 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_223, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_225 = CAST(16, MSB(op_AND_224), op_AND_224);
	RzILOpPure *op_SUB_226 = SUB(cast_st16_221, cast_st16_225);
	RzILOpPure *op_LT_227 = LET("const_pos0", const_pos0, ULT(op_SUB_226, VARLP("const_pos0")));
	RzILOpPure *op_SUB_228 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_229 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_228));
	RzILOpPure *op_NEG_230 = NEG(op_LSHIFT_229);
	RzILOpPure *op_SUB_231 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_232 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_231));
	RzILOpPure *op_SUB_233 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_232, VARLP("const_pos1")));
	RzILOpPure *cond_234 = ITE(op_LT_227, op_NEG_230, op_SUB_233);
	RzILOpPure *cond_235 = ITE(op_EQ_189, op_SUB_198, cond_234);
	RzILOpPure *op_AND_236 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_235, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_237 = CAST(64, IL_FALSE, op_AND_236);
	RzILOpPure *op_MUL_238 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_239 = SHIFTL0(cast_ut64_237, op_MUL_238);
	RzILOpPure *op_OR_240 = LOGOR(op_AND_165, op_LSHIFT_239);
	RzILOpPure *op_MUL_243 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_244 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_243));
	RzILOpPure *op_NOT_245 = LOGNOT(op_LSHIFT_244);
	RzILOpPure *op_AND_246 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_245);
	RzILOpPure *op_NE_247 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_248 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_249 = SHIFTR0(DUP(Rss), op_MUL_248);
	RzILOpPure *op_AND_250 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_249, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_251 = CAST(16, MSB(op_AND_250), op_AND_250);
	RzILOpPure *op_MUL_252 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_253 = SHIFTR0(DUP(Rtt), op_MUL_252);
	RzILOpPure *op_AND_254 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_253, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_255 = CAST(16, MSB(op_AND_254), op_AND_254);
	RzILOpPure *op_ADD_256 = ADD(cast_st16_251, cast_st16_255);
	RzILOpPure *cond_260 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_247, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_261 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_262 = SHIFTR0(DUP(Rss), op_MUL_261);
	RzILOpPure *op_AND_263 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_262, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_264 = CAST(16, MSB(op_AND_263), op_AND_263);
	RzILOpPure *op_MUL_265 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_266 = SHIFTR0(DUP(Rtt), op_MUL_265);
	RzILOpPure *op_AND_267 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_266, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_268 = CAST(16, MSB(op_AND_267), op_AND_267);
	RzILOpPure *op_ADD_269 = ADD(cast_st16_264, cast_st16_268);
	RzILOpPure *op_EQ_270 = EQ(cond_260, op_ADD_269);
	RzILOpPure *op_MUL_271 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_272 = SHIFTR0(DUP(Rss), op_MUL_271);
	RzILOpPure *op_AND_273 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_272, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_274 = CAST(32, IL_FALSE, op_AND_273);
	RzILOpPure *op_MUL_275 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_276 = SHIFTR0(DUP(Rtt), op_MUL_275);
	RzILOpPure *op_AND_277 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_276, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_278 = CAST(16, MSB(op_AND_277), op_AND_277);
	RzILOpPure *op_ADD_279 = ADD(cast_st16_274, cast_st16_278);
	RzILOpPure *cond_296 = ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_299 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_300 = SHIFTR0(DUP(Rss), op_MUL_299);
	RzILOpPure *op_AND_301 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_300, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_302 = CAST(32, IL_FALSE, op_AND_301);
	RzILOpPure *op_MUL_303 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_304 = SHIFTR0(DUP(Rtt), op_MUL_303);
	RzILOpPure *op_AND_305 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_304, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_306 = CAST(16, MSB(op_AND_305), op_AND_305);
	RzILOpPure *op_ADD_307 = ADD(cast_st16_302, cast_st16_306);
	RzILOpPure *op_LT_308 = LET("const_pos0", const_pos0, ULT(op_ADD_307, VARLP("const_pos0")));
	RzILOpPure *op_SUB_309 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_310 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_309));
	RzILOpPure *op_NEG_311 = NEG(op_LSHIFT_310);
	RzILOpPure *op_SUB_312 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_313 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_312));
	RzILOpPure *op_SUB_314 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_313, VARLP("const_pos1")));
	RzILOpPure *cond_315 = ITE(op_LT_308, op_NEG_311, op_SUB_314);
	RzILOpPure *cond_316 = ITE(op_EQ_270, op_ADD_279, cond_315);
	RzILOpPure *op_AND_317 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_316, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_318 = CAST(64, IL_FALSE, op_AND_317);
	RzILOpPure *op_MUL_319 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_320 = SHIFTL0(cast_ut64_318, op_MUL_319);
	RzILOpPure *op_OR_321 = LOGOR(op_AND_246, op_LSHIFT_320);

	// WRITE
	RzILOpEffect *c_call_14 = HEX_SEXTRACT64(op_SUB_13, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_15 = SETL("h_tmp0", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_16 = SEQN(2, c_call_14, op_ASSIGN_hybrid_tmp_15);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_16, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *c_call_49 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_50 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_51 = SEQN(2, c_call_49, op_ASSIGN_hybrid_tmp_50);
	RzILOpEffect *seq_52 = SEQN(2, seq_48, seq_51);
	RzILOpEffect *op_ASSIGN_54 = SETG(usr_assoc_tmp, cond_53);
	RzILOpEffect *seq_55 = SEQN(2, seq_52, op_ASSIGN_54);
	RzILOpEffect *op_ASSIGN_79 = SETG(Rdd_assoc_tmp, op_OR_78);
	RzILOpEffect *empty_80 = EMPTY();
	RzILOpEffect *c_call_95 = HEX_SEXTRACT64(op_ADD_94, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_96 = SETL("h_tmp5", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_97 = SEQN(2, c_call_95, op_ASSIGN_hybrid_tmp_96);
	RzILOpEffect *c_call_118 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_119 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_120 = SEQN(2, c_call_118, op_ASSIGN_hybrid_tmp_119);
	RzILOpEffect *seq_121 = SEQN(2, seq_97, seq_120);
	RzILOpEffect *c_call_122 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_123 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_124 = SEQN(2, c_call_122, op_ASSIGN_hybrid_tmp_123);
	RzILOpEffect *seq_125 = SEQN(2, seq_121, seq_124);
	RzILOpEffect *c_call_126 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_127 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_128 = SEQN(2, c_call_126, op_ASSIGN_hybrid_tmp_127);
	RzILOpEffect *seq_129 = SEQN(2, seq_125, seq_128);
	RzILOpEffect *c_call_130 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_131 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_132 = SEQN(2, c_call_130, op_ASSIGN_hybrid_tmp_131);
	RzILOpEffect *seq_133 = SEQN(2, seq_129, seq_132);
	RzILOpEffect *op_ASSIGN_135 = SETG(usr_assoc_tmp, cond_134);
	RzILOpEffect *seq_136 = SEQN(2, seq_133, op_ASSIGN_135);
	RzILOpEffect *op_ASSIGN_160 = SETG(Rdd_assoc_tmp, op_OR_159);
	RzILOpEffect *empty_161 = EMPTY();
	RzILOpEffect *c_call_176 = HEX_SEXTRACT64(op_SUB_175, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_177 = SETL("h_tmp10", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_178 = SEQN(2, c_call_176, op_ASSIGN_hybrid_tmp_177);
	RzILOpEffect *c_call_199 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_200 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_201 = SEQN(2, c_call_199, op_ASSIGN_hybrid_tmp_200);
	RzILOpEffect *seq_202 = SEQN(2, seq_178, seq_201);
	RzILOpEffect *c_call_203 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_204 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_205 = SEQN(2, c_call_203, op_ASSIGN_hybrid_tmp_204);
	RzILOpEffect *seq_206 = SEQN(2, seq_202, seq_205);
	RzILOpEffect *c_call_207 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_208 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_209 = SEQN(2, c_call_207, op_ASSIGN_hybrid_tmp_208);
	RzILOpEffect *seq_210 = SEQN(2, seq_206, seq_209);
	RzILOpEffect *c_call_211 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp12"), VARL("h_tmp13"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_212 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_213 = SEQN(2, c_call_211, op_ASSIGN_hybrid_tmp_212);
	RzILOpEffect *seq_214 = SEQN(2, seq_210, seq_213);
	RzILOpEffect *op_ASSIGN_216 = SETG(usr_assoc_tmp, cond_215);
	RzILOpEffect *seq_217 = SEQN(2, seq_214, op_ASSIGN_216);
	RzILOpEffect *op_ASSIGN_241 = SETG(Rdd_assoc_tmp, op_OR_240);
	RzILOpEffect *empty_242 = EMPTY();
	RzILOpEffect *c_call_257 = HEX_SEXTRACT64(op_ADD_256, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_258 = SETL("h_tmp15", SIGNED(16, VARL("ret_val")));
	RzILOpEffect *seq_259 = SEQN(2, c_call_257, op_ASSIGN_hybrid_tmp_258);
	RzILOpEffect *c_call_280 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_281 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_282 = SEQN(2, c_call_280, op_ASSIGN_hybrid_tmp_281);
	RzILOpEffect *seq_283 = SEQN(2, seq_259, seq_282);
	RzILOpEffect *c_call_284 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_285 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_286 = SEQN(2, c_call_284, op_ASSIGN_hybrid_tmp_285);
	RzILOpEffect *seq_287 = SEQN(2, seq_283, seq_286);
	RzILOpEffect *c_call_288 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_289 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_290 = SEQN(2, c_call_288, op_ASSIGN_hybrid_tmp_289);
	RzILOpEffect *seq_291 = SEQN(2, seq_287, seq_290);
	RzILOpEffect *c_call_292 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_293 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_294 = SEQN(2, c_call_292, op_ASSIGN_hybrid_tmp_293);
	RzILOpEffect *seq_295 = SEQN(2, seq_291, seq_294);
	RzILOpEffect *op_ASSIGN_297 = SETG(usr_assoc_tmp, cond_296);
	RzILOpEffect *seq_298 = SEQN(2, seq_295, op_ASSIGN_297);
	RzILOpEffect *op_ASSIGN_322 = SETG(Rdd_assoc_tmp, op_OR_321);
	RzILOpEffect *empty_323 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_79, empty_80, op_ASSIGN_160, empty_161, op_ASSIGN_241, empty_242, op_ASSIGN_322, empty_323, seq_55, seq_136, seq_217, seq_298);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddhr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut32 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);
	// Declare: ut32 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	// Declare: ut32 h_tmp10;
	// Declare: ut32 h_tmp11;
	// Declare: ut32 h_tmp12;
	// Declare: ut32 h_tmp13;
	// Declare: ut64 h_tmp14;
	// Declare: ut32 h_tmp15;
	// Declare: ut32 h_tmp16;
	// Declare: ut32 h_tmp17;
	// Declare: ut32 h_tmp18;
	// Declare: ut64 h_tmp19;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_6, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_8 = CAST(32, IL_FALSE, op_AND_7);
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rtt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_SUB_13 = SUB(cast_st16_8, cast_st16_12);
	RzILOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_SUB_13, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(32, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_SUB_28 = SUB(cast_st16_23, cast_st16_27);
	RzILOpPure *op_ADD_29 = LET("const_pos1", const_pos1, ADD(op_SUB_28, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_30 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_29, VARLP("const_pos1")));
	RzILOpPure *op_EQ_31 = EQ(cond_19, op_RSHIFT_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_33, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_35 = CAST(32, IL_FALSE, op_AND_34);
	RzILOpPure *op_MUL_36 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rtt), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_37, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_39 = CAST(16, MSB(op_AND_38), op_AND_38);
	RzILOpPure *op_SUB_40 = SUB(cast_st16_35, cast_st16_39);
	RzILOpPure *op_ADD_41 = LET("const_pos1", const_pos1, ADD(op_SUB_40, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_42 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_41, VARLP("const_pos1")));
	RzILOpPure *cond_59 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_62 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_63, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_65 = CAST(32, IL_FALSE, op_AND_64);
	RzILOpPure *op_MUL_66 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_67 = SHIFTR0(DUP(Rtt), op_MUL_66);
	RzILOpPure *op_AND_68 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_67, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_69 = CAST(16, MSB(op_AND_68), op_AND_68);
	RzILOpPure *op_SUB_70 = SUB(cast_st16_65, cast_st16_69);
	RzILOpPure *op_ADD_71 = LET("const_pos1", const_pos1, ADD(op_SUB_70, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_72 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_71, VARLP("const_pos1")));
	RzILOpPure *op_LT_73 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_72, VARLP("const_pos0")));
	RzILOpPure *op_SUB_74 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_SUB_79 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_78, VARLP("const_pos1")));
	RzILOpPure *cond_80 = ITE(op_LT_73, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_81 = ITE(op_EQ_31, op_RSHIFT_42, cond_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_81, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_83 = CAST(64, IL_FALSE, op_AND_82);
	RzILOpPure *op_MUL_84 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_85 = SHIFTL0(cast_ut64_83, op_MUL_84);
	RzILOpPure *op_OR_86 = LOGOR(op_AND_3, op_LSHIFT_85);
	RzILOpPure *op_MUL_89 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_90 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_89));
	RzILOpPure *op_NOT_91 = LOGNOT(op_LSHIFT_90);
	RzILOpPure *op_AND_92 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_91);
	RzILOpPure *op_NE_93 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_94 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_95 = SHIFTR0(DUP(Rss), op_MUL_94);
	RzILOpPure *op_AND_96 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_95, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_97 = CAST(32, IL_FALSE, op_AND_96);
	RzILOpPure *op_MUL_98 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_99, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_101 = CAST(16, MSB(op_AND_100), op_AND_100);
	RzILOpPure *op_ADD_102 = ADD(cast_st16_97, cast_st16_101);
	RzILOpPure *op_ADD_103 = LET("const_pos1", const_pos1, ADD(op_ADD_102, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_104 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_103, VARLP("const_pos1")));
	RzILOpPure *cond_108 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_93, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_110, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_112 = CAST(32, IL_FALSE, op_AND_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_114, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_116 = CAST(16, MSB(op_AND_115), op_AND_115);
	RzILOpPure *op_ADD_117 = ADD(cast_st16_112, cast_st16_116);
	RzILOpPure *op_ADD_118 = LET("const_pos1", const_pos1, ADD(op_ADD_117, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_119 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_118, VARLP("const_pos1")));
	RzILOpPure *op_EQ_120 = EQ(cond_108, op_RSHIFT_119);
	RzILOpPure *op_MUL_121 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_122 = SHIFTR0(DUP(Rss), op_MUL_121);
	RzILOpPure *op_AND_123 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_122, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_124 = CAST(32, IL_FALSE, op_AND_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_126, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_128 = CAST(16, MSB(op_AND_127), op_AND_127);
	RzILOpPure *op_ADD_129 = ADD(cast_st16_124, cast_st16_128);
	RzILOpPure *op_ADD_130 = LET("const_pos1", const_pos1, ADD(op_ADD_129, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_131 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_130, VARLP("const_pos1")));
	RzILOpPure *cond_148 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_151 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_152 = SHIFTR0(DUP(Rss), op_MUL_151);
	RzILOpPure *op_AND_153 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_152, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_154 = CAST(32, IL_FALSE, op_AND_153);
	RzILOpPure *op_MUL_155 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rtt), op_MUL_155);
	RzILOpPure *op_AND_157 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_156, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_158 = CAST(16, MSB(op_AND_157), op_AND_157);
	RzILOpPure *op_ADD_159 = ADD(cast_st16_154, cast_st16_158);
	RzILOpPure *op_ADD_160 = LET("const_pos1", const_pos1, ADD(op_ADD_159, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_161 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_160, VARLP("const_pos1")));
	RzILOpPure *op_LT_162 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_161, VARLP("const_pos0")));
	RzILOpPure *op_SUB_163 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_164 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_163));
	RzILOpPure *op_NEG_165 = NEG(op_LSHIFT_164);
	RzILOpPure *op_SUB_166 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_167 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_166));
	RzILOpPure *op_SUB_168 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_167, VARLP("const_pos1")));
	RzILOpPure *cond_169 = ITE(op_LT_162, op_NEG_165, op_SUB_168);
	RzILOpPure *cond_170 = ITE(op_EQ_120, op_RSHIFT_131, cond_169);
	RzILOpPure *op_AND_171 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_170, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_172 = CAST(64, IL_FALSE, op_AND_171);
	RzILOpPure *op_MUL_173 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_174 = SHIFTL0(cast_ut64_172, op_MUL_173);
	RzILOpPure *op_OR_175 = LOGOR(op_AND_92, op_LSHIFT_174);
	RzILOpPure *op_MUL_178 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_179 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_178));
	RzILOpPure *op_NOT_180 = LOGNOT(op_LSHIFT_179);
	RzILOpPure *op_AND_181 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_180);
	RzILOpPure *op_NE_182 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_183 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_184 = SHIFTR0(DUP(Rss), op_MUL_183);
	RzILOpPure *op_AND_185 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_184, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_186 = CAST(32, IL_FALSE, op_AND_185);
	RzILOpPure *op_MUL_187 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_188 = SHIFTR0(DUP(Rtt), op_MUL_187);
	RzILOpPure *op_AND_189 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_188, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_190 = CAST(16, MSB(op_AND_189), op_AND_189);
	RzILOpPure *op_SUB_191 = SUB(cast_st16_186, cast_st16_190);
	RzILOpPure *op_ADD_192 = LET("const_pos1", const_pos1, ADD(op_SUB_191, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_193 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_192, VARLP("const_pos1")));
	RzILOpPure *cond_197 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_182, VARL("h_tmp10"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_198 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_199 = SHIFTR0(DUP(Rss), op_MUL_198);
	RzILOpPure *op_AND_200 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_199, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_201 = CAST(32, IL_FALSE, op_AND_200);
	RzILOpPure *op_MUL_202 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_203 = SHIFTR0(DUP(Rtt), op_MUL_202);
	RzILOpPure *op_AND_204 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_203, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_205 = CAST(16, MSB(op_AND_204), op_AND_204);
	RzILOpPure *op_SUB_206 = SUB(cast_st16_201, cast_st16_205);
	RzILOpPure *op_ADD_207 = LET("const_pos1", const_pos1, ADD(op_SUB_206, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_208 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_207, VARLP("const_pos1")));
	RzILOpPure *op_EQ_209 = EQ(cond_197, op_RSHIFT_208);
	RzILOpPure *op_MUL_210 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_211 = SHIFTR0(DUP(Rss), op_MUL_210);
	RzILOpPure *op_AND_212 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_211, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_213 = CAST(32, IL_FALSE, op_AND_212);
	RzILOpPure *op_MUL_214 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_215 = SHIFTR0(DUP(Rtt), op_MUL_214);
	RzILOpPure *op_AND_216 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_215, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_217 = CAST(16, MSB(op_AND_216), op_AND_216);
	RzILOpPure *op_SUB_218 = SUB(cast_st16_213, cast_st16_217);
	RzILOpPure *op_ADD_219 = LET("const_pos1", const_pos1, ADD(op_SUB_218, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_220 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_219, VARLP("const_pos1")));
	RzILOpPure *cond_237 = ITE(VARL("h_tmp11"), VARL("h_tmp14"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_240 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_241 = SHIFTR0(DUP(Rss), op_MUL_240);
	RzILOpPure *op_AND_242 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_241, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_243 = CAST(32, IL_FALSE, op_AND_242);
	RzILOpPure *op_MUL_244 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_245 = SHIFTR0(DUP(Rtt), op_MUL_244);
	RzILOpPure *op_AND_246 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_245, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_247 = CAST(16, MSB(op_AND_246), op_AND_246);
	RzILOpPure *op_SUB_248 = SUB(cast_st16_243, cast_st16_247);
	RzILOpPure *op_ADD_249 = LET("const_pos1", const_pos1, ADD(op_SUB_248, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_250 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_249, VARLP("const_pos1")));
	RzILOpPure *op_LT_251 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_250, VARLP("const_pos0")));
	RzILOpPure *op_SUB_252 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_253 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_252));
	RzILOpPure *op_NEG_254 = NEG(op_LSHIFT_253);
	RzILOpPure *op_SUB_255 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_256 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_255));
	RzILOpPure *op_SUB_257 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_256, VARLP("const_pos1")));
	RzILOpPure *cond_258 = ITE(op_LT_251, op_NEG_254, op_SUB_257);
	RzILOpPure *cond_259 = ITE(op_EQ_209, op_RSHIFT_220, cond_258);
	RzILOpPure *op_AND_260 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_259, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_261 = CAST(64, IL_FALSE, op_AND_260);
	RzILOpPure *op_MUL_262 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_263 = SHIFTL0(cast_ut64_261, op_MUL_262);
	RzILOpPure *op_OR_264 = LOGOR(op_AND_181, op_LSHIFT_263);
	RzILOpPure *op_MUL_267 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_268 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_267));
	RzILOpPure *op_NOT_269 = LOGNOT(op_LSHIFT_268);
	RzILOpPure *op_AND_270 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_269);
	RzILOpPure *op_NE_271 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_272 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_273 = SHIFTR0(DUP(Rss), op_MUL_272);
	RzILOpPure *op_AND_274 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_273, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_275 = CAST(32, IL_FALSE, op_AND_274);
	RzILOpPure *op_MUL_276 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_277 = SHIFTR0(DUP(Rtt), op_MUL_276);
	RzILOpPure *op_AND_278 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_277, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_279 = CAST(16, MSB(op_AND_278), op_AND_278);
	RzILOpPure *op_ADD_280 = ADD(cast_st16_275, cast_st16_279);
	RzILOpPure *op_ADD_281 = LET("const_pos1", const_pos1, ADD(op_ADD_280, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_282 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_281, VARLP("const_pos1")));
	RzILOpPure *cond_286 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_271, VARL("h_tmp15"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_287 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_288 = SHIFTR0(DUP(Rss), op_MUL_287);
	RzILOpPure *op_AND_289 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_288, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_290 = CAST(32, IL_FALSE, op_AND_289);
	RzILOpPure *op_MUL_291 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_292 = SHIFTR0(DUP(Rtt), op_MUL_291);
	RzILOpPure *op_AND_293 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_292, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_294 = CAST(16, MSB(op_AND_293), op_AND_293);
	RzILOpPure *op_ADD_295 = ADD(cast_st16_290, cast_st16_294);
	RzILOpPure *op_ADD_296 = LET("const_pos1", const_pos1, ADD(op_ADD_295, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_297 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_296, VARLP("const_pos1")));
	RzILOpPure *op_EQ_298 = EQ(cond_286, op_RSHIFT_297);
	RzILOpPure *op_MUL_299 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_300 = SHIFTR0(DUP(Rss), op_MUL_299);
	RzILOpPure *op_AND_301 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_300, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_302 = CAST(32, IL_FALSE, op_AND_301);
	RzILOpPure *op_MUL_303 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_304 = SHIFTR0(DUP(Rtt), op_MUL_303);
	RzILOpPure *op_AND_305 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_304, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_306 = CAST(16, MSB(op_AND_305), op_AND_305);
	RzILOpPure *op_ADD_307 = ADD(cast_st16_302, cast_st16_306);
	RzILOpPure *op_ADD_308 = LET("const_pos1", const_pos1, ADD(op_ADD_307, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_309 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_308, VARLP("const_pos1")));
	RzILOpPure *cond_326 = ITE(VARL("h_tmp16"), VARL("h_tmp19"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_329 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_330 = SHIFTR0(DUP(Rss), op_MUL_329);
	RzILOpPure *op_AND_331 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_330, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_332 = CAST(32, IL_FALSE, op_AND_331);
	RzILOpPure *op_MUL_333 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_334 = SHIFTR0(DUP(Rtt), op_MUL_333);
	RzILOpPure *op_AND_335 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_334, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_336 = CAST(16, MSB(op_AND_335), op_AND_335);
	RzILOpPure *op_ADD_337 = ADD(cast_st16_332, cast_st16_336);
	RzILOpPure *op_ADD_338 = LET("const_pos1", const_pos1, ADD(op_ADD_337, VARLP("const_pos1")));
	RzILOpPure *op_RSHIFT_339 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_338, VARLP("const_pos1")));
	RzILOpPure *op_LT_340 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_339, VARLP("const_pos0")));
	RzILOpPure *op_SUB_341 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_342 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_341));
	RzILOpPure *op_NEG_343 = NEG(op_LSHIFT_342);
	RzILOpPure *op_SUB_344 = LET("const_pos16", const_pos16, LET("const_pos1", const_pos1, SUB(VARLP("const_pos16"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_345 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_344));
	RzILOpPure *op_SUB_346 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_345, VARLP("const_pos1")));
	RzILOpPure *cond_347 = ITE(op_LT_340, op_NEG_343, op_SUB_346);
	RzILOpPure *cond_348 = ITE(op_EQ_298, op_RSHIFT_309, cond_347);
	RzILOpPure *op_AND_349 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cond_348, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_350 = CAST(64, IL_FALSE, op_AND_349);
	RzILOpPure *op_MUL_351 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_LSHIFT_352 = SHIFTL0(cast_ut64_350, op_MUL_351);
	RzILOpPure *op_OR_353 = LOGOR(op_AND_270, op_LSHIFT_352);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp0", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_18, seq_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_50, seq_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_54, seq_57);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cond_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_58, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_87 = SETG(Rdd_assoc_tmp, op_OR_86);
	RzILOpEffect *empty_88 = EMPTY();
	RzILOpEffect *c_call_105 = HEX_SEXTRACT64(op_RSHIFT_104, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_106 = SETL("h_tmp5", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_107 = SEQN(2, c_call_105, op_ASSIGN_hybrid_tmp_106);
	RzILOpEffect *c_call_132 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_133 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_134 = SEQN(2, c_call_132, op_ASSIGN_hybrid_tmp_133);
	RzILOpEffect *seq_135 = SEQN(2, seq_107, seq_134);
	RzILOpEffect *c_call_136 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_137 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_138 = SEQN(2, c_call_136, op_ASSIGN_hybrid_tmp_137);
	RzILOpEffect *seq_139 = SEQN(2, seq_135, seq_138);
	RzILOpEffect *c_call_140 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_141 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_142 = SEQN(2, c_call_140, op_ASSIGN_hybrid_tmp_141);
	RzILOpEffect *seq_143 = SEQN(2, seq_139, seq_142);
	RzILOpEffect *c_call_144 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_145 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_146 = SEQN(2, c_call_144, op_ASSIGN_hybrid_tmp_145);
	RzILOpEffect *seq_147 = SEQN(2, seq_143, seq_146);
	RzILOpEffect *op_ASSIGN_149 = SETG(usr_assoc_tmp, cond_148);
	RzILOpEffect *seq_150 = SEQN(2, seq_147, op_ASSIGN_149);
	RzILOpEffect *op_ASSIGN_176 = SETG(Rdd_assoc_tmp, op_OR_175);
	RzILOpEffect *empty_177 = EMPTY();
	RzILOpEffect *c_call_194 = HEX_SEXTRACT64(op_RSHIFT_193, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_195 = SETL("h_tmp10", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_196 = SEQN(2, c_call_194, op_ASSIGN_hybrid_tmp_195);
	RzILOpEffect *c_call_221 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_222 = SETL("h_tmp11", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_223 = SEQN(2, c_call_221, op_ASSIGN_hybrid_tmp_222);
	RzILOpEffect *seq_224 = SEQN(2, seq_196, seq_223);
	RzILOpEffect *c_call_225 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_226 = SETL("h_tmp12", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_227 = SEQN(2, c_call_225, op_ASSIGN_hybrid_tmp_226);
	RzILOpEffect *seq_228 = SEQN(2, seq_224, seq_227);
	RzILOpEffect *c_call_229 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_230 = SETL("h_tmp13", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_231 = SEQN(2, c_call_229, op_ASSIGN_hybrid_tmp_230);
	RzILOpEffect *seq_232 = SEQN(2, seq_228, seq_231);
	RzILOpEffect *c_call_233 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp12"), VARL("h_tmp13"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_234 = SETL("h_tmp14", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_235 = SEQN(2, c_call_233, op_ASSIGN_hybrid_tmp_234);
	RzILOpEffect *seq_236 = SEQN(2, seq_232, seq_235);
	RzILOpEffect *op_ASSIGN_238 = SETG(usr_assoc_tmp, cond_237);
	RzILOpEffect *seq_239 = SEQN(2, seq_236, op_ASSIGN_238);
	RzILOpEffect *op_ASSIGN_265 = SETG(Rdd_assoc_tmp, op_OR_264);
	RzILOpEffect *empty_266 = EMPTY();
	RzILOpEffect *c_call_283 = HEX_SEXTRACT64(op_RSHIFT_282, VARLP("const_pos0"), VARLP("const_pos16"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_284 = SETL("h_tmp15", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_285 = SEQN(2, c_call_283, op_ASSIGN_hybrid_tmp_284);
	RzILOpEffect *c_call_310 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_311 = SETL("h_tmp16", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_312 = SEQN(2, c_call_310, op_ASSIGN_hybrid_tmp_311);
	RzILOpEffect *seq_313 = SEQN(2, seq_285, seq_312);
	RzILOpEffect *c_call_314 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_315 = SETL("h_tmp17", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_316 = SEQN(2, c_call_314, op_ASSIGN_hybrid_tmp_315);
	RzILOpEffect *seq_317 = SEQN(2, seq_313, seq_316);
	RzILOpEffect *c_call_318 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_319 = SETL("h_tmp18", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_320 = SEQN(2, c_call_318, op_ASSIGN_hybrid_tmp_319);
	RzILOpEffect *seq_321 = SEQN(2, seq_317, seq_320);
	RzILOpEffect *c_call_322 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp17"), VARL("h_tmp18"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_323 = SETL("h_tmp19", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_324 = SEQN(2, c_call_322, op_ASSIGN_hybrid_tmp_323);
	RzILOpEffect *seq_325 = SEQN(2, seq_321, seq_324);
	RzILOpEffect *op_ASSIGN_327 = SETG(usr_assoc_tmp, cond_326);
	RzILOpEffect *seq_328 = SEQN(2, seq_325, op_ASSIGN_327);
	RzILOpEffect *op_ASSIGN_354 = SETG(Rdd_assoc_tmp, op_OR_353);
	RzILOpEffect *empty_355 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(12, op_ASSIGN_87, empty_88, op_ASSIGN_176, empty_177, op_ASSIGN_265, empty_266, op_ASSIGN_354, empty_355, seq_61, seq_150, seq_239, seq_328);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s4_vxsubaddw(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	// Declare: ut64 h_tmp4;
	RzILOpPure *const_pos1LL = SN(64, 0x1);
	// Declare: st64 h_tmp5;
	// Declare: ut32 h_tmp6;
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut64 h_tmp9;

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_1 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_0));
	RzILOpPure *op_NOT_2 = LOGNOT(op_LSHIFT_1);
	RzILOpPure *op_AND_3 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_2);
	RzILOpPure *op_NE_4 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_5 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_6 = SHIFTR0(Rss, op_MUL_5);
	RzILOpPure *op_AND_7 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_6, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_8 = CAST(32, MSB(op_AND_7), op_AND_7);
	RzILOpPure *cast_st64_9 = CAST(64, MSB(cast_st32_8), cast_st32_8);
	RzILOpPure *op_MUL_10 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_11 = SHIFTR0(Rtt, op_MUL_10);
	RzILOpPure *op_AND_12 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_11, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_13 = CAST(32, MSB(op_AND_12), op_AND_12);
	RzILOpPure *cast_st64_14 = CAST(64, MSB(cast_st32_13), cast_st32_13);
	RzILOpPure *op_SUB_15 = SUB(cast_st64_9, cast_st64_14);
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_4, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_21, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_23 = CAST(32, MSB(op_AND_22), op_AND_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_26, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_28 = CAST(32, MSB(op_AND_27), op_AND_27);
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzILOpPure *op_SUB_30 = SUB(cast_st64_24, cast_st64_29);
	RzILOpPure *op_EQ_31 = EQ(cond_19, op_SUB_30);
	RzILOpPure *op_MUL_32 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_33 = SHIFTR0(DUP(Rss), op_MUL_32);
	RzILOpPure *op_AND_34 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_33, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_35 = CAST(32, MSB(op_AND_34), op_AND_34);
	RzILOpPure *cast_st64_36 = CAST(64, IL_FALSE, cast_st32_35);
	RzILOpPure *op_MUL_37 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_38 = SHIFTR0(DUP(Rtt), op_MUL_37);
	RzILOpPure *op_AND_39 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_38, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_40 = CAST(32, MSB(op_AND_39), op_AND_39);
	RzILOpPure *cast_st64_41 = CAST(64, MSB(cast_st32_40), cast_st32_40);
	RzILOpPure *op_SUB_42 = SUB(cast_st64_36, cast_st64_41);
	RzILOpPure *cond_59 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_62 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(32, IL_FALSE, cast_st32_65);
	RzILOpPure *op_MUL_67 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_68 = SHIFTR0(DUP(Rtt), op_MUL_67);
	RzILOpPure *op_AND_69 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_68, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_70 = CAST(32, MSB(op_AND_69), op_AND_69);
	RzILOpPure *cast_st64_71 = CAST(64, MSB(cast_st32_70), cast_st32_70);
	RzILOpPure *op_SUB_72 = SUB(cast_st64_66, cast_st64_71);
	RzILOpPure *op_LT_73 = LET("const_pos0", const_pos0, ULT(op_SUB_72, VARLP("const_pos0")));
	RzILOpPure *op_SUB_74 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_75 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_74));
	RzILOpPure *op_NEG_76 = NEG(op_LSHIFT_75);
	RzILOpPure *op_SUB_77 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_78 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_77));
	RzILOpPure *op_SUB_79 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_78, VARLP("const_pos1")));
	RzILOpPure *cond_80 = ITE(op_LT_73, op_NEG_76, op_SUB_79);
	RzILOpPure *cond_81 = ITE(op_EQ_31, op_SUB_42, cond_80);
	RzILOpPure *op_AND_82 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_81, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_83 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_84 = SHIFTL0(op_AND_82, op_MUL_83);
	RzILOpPure *op_OR_85 = LOGOR(op_AND_3, op_LSHIFT_84);
	RzILOpPure *op_MUL_88 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_89 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, SHIFTL0(VARLP("const_pos0x0ffffffffLL"), op_MUL_88));
	RzILOpPure *op_NOT_90 = LOGNOT(op_LSHIFT_89);
	RzILOpPure *op_AND_91 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_90);
	RzILOpPure *op_NE_92 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rss), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_94, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_96 = CAST(32, MSB(op_AND_95), op_AND_95);
	RzILOpPure *cast_st64_97 = CAST(64, MSB(cast_st32_96), cast_st32_96);
	RzILOpPure *op_MUL_98 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_99 = SHIFTR0(DUP(Rtt), op_MUL_98);
	RzILOpPure *op_AND_100 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_99, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_101 = CAST(32, MSB(op_AND_100), op_AND_100);
	RzILOpPure *cast_st64_102 = CAST(64, MSB(cast_st32_101), cast_st32_101);
	RzILOpPure *op_ADD_103 = ADD(cast_st64_97, cast_st64_102);
	RzILOpPure *cond_107 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_108 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_109 = SHIFTR0(DUP(Rss), op_MUL_108);
	RzILOpPure *op_AND_110 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_109, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_111 = CAST(32, MSB(op_AND_110), op_AND_110);
	RzILOpPure *cast_st64_112 = CAST(64, MSB(cast_st32_111), cast_st32_111);
	RzILOpPure *op_MUL_113 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_114 = SHIFTR0(DUP(Rtt), op_MUL_113);
	RzILOpPure *op_AND_115 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_114, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_116 = CAST(32, MSB(op_AND_115), op_AND_115);
	RzILOpPure *cast_st64_117 = CAST(64, MSB(cast_st32_116), cast_st32_116);
	RzILOpPure *op_ADD_118 = ADD(cast_st64_112, cast_st64_117);
	RzILOpPure *op_EQ_119 = EQ(cond_107, op_ADD_118);
	RzILOpPure *op_MUL_120 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_121 = SHIFTR0(DUP(Rss), op_MUL_120);
	RzILOpPure *op_AND_122 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_121, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_123 = CAST(32, MSB(op_AND_122), op_AND_122);
	RzILOpPure *cast_st64_124 = CAST(64, IL_FALSE, cast_st32_123);
	RzILOpPure *op_MUL_125 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_126 = SHIFTR0(DUP(Rtt), op_MUL_125);
	RzILOpPure *op_AND_127 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_126, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_128 = CAST(32, MSB(op_AND_127), op_AND_127);
	RzILOpPure *cast_st64_129 = CAST(64, MSB(cast_st32_128), cast_st32_128);
	RzILOpPure *op_ADD_130 = ADD(cast_st64_124, cast_st64_129);
	RzILOpPure *cond_147 = ITE(VARL("h_tmp6"), VARL("h_tmp9"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_150 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rss), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_151, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_153 = CAST(32, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cast_st64_154 = CAST(32, IL_FALSE, cast_st32_153);
	RzILOpPure *op_MUL_155 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_156 = SHIFTR0(DUP(Rtt), op_MUL_155);
	RzILOpPure *op_AND_157 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_156, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_158 = CAST(32, MSB(op_AND_157), op_AND_157);
	RzILOpPure *cast_st64_159 = CAST(64, MSB(cast_st32_158), cast_st32_158);
	RzILOpPure *op_ADD_160 = ADD(cast_st64_154, cast_st64_159);
	RzILOpPure *op_LT_161 = LET("const_pos0", const_pos0, ULT(op_ADD_160, VARLP("const_pos0")));
	RzILOpPure *op_SUB_162 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_163 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_162));
	RzILOpPure *op_NEG_164 = NEG(op_LSHIFT_163);
	RzILOpPure *op_SUB_165 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_166 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_165));
	RzILOpPure *op_SUB_167 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_166, VARLP("const_pos1")));
	RzILOpPure *cond_168 = ITE(op_LT_161, op_NEG_164, op_SUB_167);
	RzILOpPure *cond_169 = ITE(op_EQ_119, op_ADD_130, cond_168);
	RzILOpPure *op_AND_170 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(cond_169, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *op_MUL_171 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_LSHIFT_172 = SHIFTL0(op_AND_170, op_MUL_171);
	RzILOpPure *op_OR_173 = LOGOR(op_AND_91, op_LSHIFT_172);

	// WRITE
	RzILOpEffect *c_call_16 = HEX_SEXTRACT64(op_SUB_15, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_17 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_18 = SEQN(2, c_call_16, op_ASSIGN_hybrid_tmp_17);
	RzILOpEffect *c_call_43 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_44 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_45 = SEQN(2, c_call_43, op_ASSIGN_hybrid_tmp_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_18, seq_45);
	RzILOpEffect *c_call_47 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_48 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_49 = SEQN(2, c_call_47, op_ASSIGN_hybrid_tmp_48);
	RzILOpEffect *seq_50 = SEQN(2, seq_46, seq_49);
	RzILOpEffect *c_call_51 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_52 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_53 = SEQN(2, c_call_51, op_ASSIGN_hybrid_tmp_52);
	RzILOpEffect *seq_54 = SEQN(2, seq_50, seq_53);
	RzILOpEffect *c_call_55 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_56 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_57 = SEQN(2, c_call_55, op_ASSIGN_hybrid_tmp_56);
	RzILOpEffect *seq_58 = SEQN(2, seq_54, seq_57);
	RzILOpEffect *op_ASSIGN_60 = SETG(usr_assoc_tmp, cond_59);
	RzILOpEffect *seq_61 = SEQN(2, seq_58, op_ASSIGN_60);
	RzILOpEffect *op_ASSIGN_86 = SETG(Rdd_assoc_tmp, op_OR_85);
	RzILOpEffect *empty_87 = EMPTY();
	RzILOpEffect *c_call_104 = HEX_SEXTRACT64(op_ADD_103, VARLP("const_pos0"), VARLP("const_pos32"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_105 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_106 = SEQN(2, c_call_104, op_ASSIGN_hybrid_tmp_105);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp6", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_106, seq_133);
	RzILOpEffect *c_call_135 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *c_call_139 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_140 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_141 = SEQN(2, c_call_139, op_ASSIGN_hybrid_tmp_140);
	RzILOpEffect *seq_142 = SEQN(2, seq_138, seq_141);
	RzILOpEffect *c_call_143 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp7"), VARL("h_tmp8"), VARLP("const_pos1"));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_144 = SETL("h_tmp9", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_145 = SEQN(2, c_call_143, op_ASSIGN_hybrid_tmp_144);
	RzILOpEffect *seq_146 = SEQN(2, seq_142, seq_145);
	RzILOpEffect *op_ASSIGN_148 = SETG(usr_assoc_tmp, cond_147);
	RzILOpEffect *seq_149 = SEQN(2, seq_146, op_ASSIGN_148);
	RzILOpEffect *op_ASSIGN_174 = SETG(Rdd_assoc_tmp, op_OR_173);
	RzILOpEffect *empty_175 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_86, empty_87, op_ASSIGN_174, empty_175, seq_61, seq_149);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>