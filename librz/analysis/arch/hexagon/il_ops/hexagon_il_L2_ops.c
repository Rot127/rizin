// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-03 08:20:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_l2_deallocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *framekey_assoc = ALIAS2REG(HEX_REG_ALIAS_FRAMEKEY, false);
	RzILOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 0x20);
	const char *sp_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_SP, true);
	RzILOpPure *const_pos8 = UN(32, 0x8);

	// EXEC
	RzILOpPure *ml_EA_2 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA_2);
	RzILOpPure *cast_ut64_5 = CAST(64, IL_FALSE, framekey);
	RzILOpPure *op_LSHIFT_6 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_5, VARLP("const_pos32")));
	RzILOpPure *op_XOR_7 = LOGXOR(VARL("tmp"), op_LSHIFT_6);
	RzILOpPure *op_ADD_9 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETL("tmp", cast_ut8_3);
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, op_XOR_7);
	RzILOpEffect *op_ASSIGN_10 = SETG(sp_assoc_tmp, op_ADD_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_4, op_ASSIGN_8, op_ASSIGN_10, empty_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_7 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_6, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_9 = LOGOR(op_RSHIFT_7, op_LSHIFT_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut1_4);
	RzILOpEffect *op_ASSIGN_10 = SETG(Ryy_assoc_tmp, op_OR_9);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_11 = LOGOR(op_RSHIFT_9, op_LSHIFT_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut1_6);
	RzILOpEffect *op_ASSIGN_12 = SETG(Ryy_assoc_tmp, op_OR_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos56 = UN(32, 0x38);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_8, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzILOpPure *op_OR_11 = LOGOR(op_RSHIFT_9, op_LSHIFT_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut1_6);
	RzILOpEffect *op_ASSIGN_12 = SETG(Ryy_assoc_tmp, op_OR_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_7 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_6, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_8 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_9 = LOGOR(op_RSHIFT_7, op_LSHIFT_8);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzILOpEffect *op_ASSIGN_10 = SETG(Ryy_assoc_tmp, op_OR_9);
	RzILOpEffect *empty_11 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_5, op_ASSIGN_10, empty_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_11 = LOGOR(op_RSHIFT_9, op_LSHIFT_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_12 = SETG(Ryy_assoc_tmp, op_OR_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc_tmp = ISA2REG(hi, 'y', false);
	const char *Ryy_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos48 = UN(32, 0x30);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);
	RzILOpPure *cast_ut8_8 = CAST(8, IL_FALSE, Ryy);
	RzILOpPure *op_RSHIFT_9 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_8, VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_10 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzILOpPure *op_OR_11 = LOGOR(op_RSHIFT_9, op_LSHIFT_10);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzILOpEffect *op_ASSIGN_12 = SETG(Ryy_assoc_tmp, op_OR_11);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmpV"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_15, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_11 = SEQN(2, op_ASSIGN_hybrid_tmp_10, op_INC_9);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_11, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_7, REPEAT(op_LT_8, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_6, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *instruction_sequence = SEQN(7, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmpV"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_15, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_11 = SEQN(2, op_ASSIGN_hybrid_tmp_10, op_INC_9);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_11, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_7, REPEAT(op_LT_8, seq_28));
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_6, for_29, empty_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);
	RzILOpPure *op_LT_8 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmpV"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_15, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut2_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_11 = SEQN(2, op_ASSIGN_hybrid_tmp_10, op_INC_9);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_11, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_7, REPEAT(op_LT_8, seq_28));
	RzILOpEffect *empty_30 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_6, for_29, empty_30);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	// Declare: ut32 h_tmp0;
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut2_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);
	RzILOpPure *op_LT_8 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_12 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_13 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_12));
	RzILOpPure *op_NOT_14 = LOGNOT(op_LSHIFT_13);
	RzILOpPure *op_AND_15 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_14);
	RzILOpPure *op_MUL_16 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(VARL("tmpV"), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_19 = CAST(32, IL_FALSE, op_AND_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_19, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_21 = CAST(64, IL_FALSE, op_AND_20);
	RzILOpPure *op_MUL_22 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_23 = SHIFTL0(cast_ut64_21, op_MUL_22);
	RzILOpPure *op_OR_24 = LOGOR(op_AND_15, op_LSHIFT_23);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *empty_3 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETL("tmpV", cast_ut4_5);
	RzILOpEffect *op_ASSIGN_7 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_9 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_10 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_11 = SEQN(2, op_ASSIGN_hybrid_tmp_10, op_INC_9);
	RzILOpEffect *op_ASSIGN_25 = SETG(Rdd_assoc_tmp, op_OR_24);
	RzILOpEffect *seq_26 = SEQN(2, seq_11, op_ASSIGN_25);
	RzILOpEffect *empty_27 = EMPTY();
	RzILOpEffect *seq_28 = SEQN(2, seq_26, empty_27);
	RzILOpEffect *for_29 = SEQ2(op_ASSIGN_7, REPEAT(op_LT_8, seq_28));
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_6, for_29);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	// Declare: ut32 h_tmp0;
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 0xffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	RzILOpPure *const_pos0xff = UN(32, 0xff);
	RzILOpPure *const_pos0x0ffff = UN(32, 0xffff);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);
	RzILOpPure *op_LT_10 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_14 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_15 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_14));
	RzILOpPure *op_NOT_16 = LOGNOT(op_LSHIFT_15);
	RzILOpPure *op_AND_17 = LOGAND(VARG(Rdd_assoc_tmp), op_NOT_16);
	RzILOpPure *op_MUL_18 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(VARL("tmpV"), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_21 = CAST(32, IL_FALSE, op_AND_20);
	RzILOpPure *op_AND_22 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_21, VARLP("const_pos0x0ffff")));
	RzILOpPure *cast_ut64_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", DUP(const_pos16), MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_LSHIFT_25 = SHIFTL0(cast_ut64_23, op_MUL_24);
	RzILOpPure *op_OR_26 = LOGOR(op_AND_17, op_LSHIFT_25);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETL("tmpV", cast_ut4_7);
	RzILOpEffect *op_ASSIGN_9 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_11 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_12 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_13 = SEQN(2, op_ASSIGN_hybrid_tmp_12, op_INC_11);
	RzILOpEffect *op_ASSIGN_27 = SETG(Rdd_assoc_tmp, op_OR_26);
	RzILOpEffect *seq_28 = SEQN(2, seq_13, op_ASSIGN_27);
	RzILOpEffect *empty_29 = EMPTY();
	RzILOpEffect *seq_30 = SEQN(2, seq_28, empty_29);
	RzILOpEffect *for_31 = SEQ2(op_ASSIGN_9, REPEAT(op_LT_10, seq_30));
	RzILOpEffect *empty_32 = EMPTY();
	RzILOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_8, for_31, empty_32);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_6 = CAST(1, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st1_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_4 = CAST(1, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc_tmp, cast_ut8_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc_tmp, cast_ut8_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_6 = CAST(2, MSB(ml_EA_5), ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_st2_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_4 = CAST(2, MSB(ml_EA_3), ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_st2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut4_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut4_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut1_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrubgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut1_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, 's'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("s", s, ADD(Rs, VARLP("s")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pbr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pci(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pcr(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzILOpPure *ml_EA_5 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA_5);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_3 = SETG(Rx_assoc_tmp, op_ADD_2);
	RzILOpEffect *empty_4 = EMPTY();
	RzILOpEffect *op_ASSIGN_7 = SETG(Rd_assoc_tmp, cast_ut2_6);
	RzILOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_7);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(HEX_REG_ALIAS_GP, false);
	RzILOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(gp, VARLP("u")));
	RzILOpPure *ml_EA_3 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA_3);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_5 = SETG(Rd_assoc_tmp, cast_ut2_4);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_5);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadw_aq(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadw_locked(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_5 = CAST(1, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_st1_7 = CAST(1, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, cast_ut8_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, cast_ut8_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, cast_ut8_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc_tmp, cast_ut8_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(64, VARL("EA"));
	RzILOpPure *cast_ut8_7 = CAST(8, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rdd_assoc_tmp, cast_ut8_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_5 = CAST(2, MSB(ml_EA_4), ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_st2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_st2_7 = CAST(2, MSB(ml_EA_6), ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_st2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut4_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut4_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut4_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut4_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(32, VARL("EA"));
	RzILOpPure *cast_ut4_7 = CAST(4, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut4_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut1_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(8, VARL("EA"));
	RzILOpPure *cast_ut1_7 = CAST(1, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut1_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_ADD_0 = LET("u", u, ADD(Rs, VARLP("u")));
	RzILOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *ml_EA_4 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA_4);

	// WRITE
	RzILOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzILOpEffect *empty_2 = EMPTY();
	RzILOpEffect *op_ASSIGN_6 = SETG(Rd_assoc_tmp, cast_ut2_5);
	RzILOpEffect *nop_7 = NOP();
	RzILOpEffect *empty_8 = EMPTY();
	RzILOpEffect *seq_then_9 = SEQN(1, op_ASSIGN_6);
	RzILOpEffect *seq_else_11 = SEQN(2, nop_7, empty_8);
	RzILOpEffect *branch_10 = BRANCH(op_AND_3, seq_then_9, seq_else_11);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, 't', true);
	RzILOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, 's'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);

	// EXEC
	RzILOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzILOpPure *op_ADD_3 = LET("s", s, ADD(Rx, VARLP("s")));
	RzILOpPure *ml_EA_6 = LOADW(16, VARL("EA"));
	RzILOpPure *cast_ut2_7 = CAST(2, IL_FALSE, ml_EA_6);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("EA", DUP(Rx));
	RzILOpEffect *empty_1 = EMPTY();
	RzILOpEffect *op_ASSIGN_4 = SETG(Rx_assoc_tmp, op_ADD_3);
	RzILOpEffect *empty_5 = EMPTY();
	RzILOpEffect *op_ASSIGN_8 = SETG(Rd_assoc_tmp, cast_ut2_7);
	RzILOpEffect *nop_9 = NOP();
	RzILOpEffect *empty_10 = EMPTY();
	RzILOpEffect *seq_then_11 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_8);
	RzILOpEffect *seq_else_13 = SEQN(2, nop_9, empty_10);
	RzILOpEffect *branch_12 = BRANCH(op_AND_2, seq_then_11, seq_else_13);
	RzILOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_12);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>