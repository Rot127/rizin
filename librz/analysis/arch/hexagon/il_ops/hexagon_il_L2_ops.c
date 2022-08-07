// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 15:53:51-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_l2_deallocframe(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut64 tmp;
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	const char *framekey_assoc = ALIAS2REG(, HEX_REG_ALIAS_FRAMEKEY);
	RzIlOpPure *framekey = VARG(framekey_assoc);
	RzILOpPure *const_pos32 = UN(64, 32);
	const char *sp_assoc = ALIAS2REG(, HEX_REG_ALIAS_SP);
	RzIlOpPure *sp = VARG(sp_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);

	// EXEC
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_2 = CAST(8, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut64_4 = CAST(64, IL_FALSE, framekey);
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos32", const_pos32, SHIFTL0(cast_ut64_4, VARLP("const_pos32")));
	RzIlOpPure *op_XOR_6 = LOGXOR(VARL("tmp"), op_LSHIFT_5);
	RzIlOpPure *op_ADD_8 = LET("const_pos8", const_pos8, ADD(VARL("EA"), VARLP("const_pos8")));

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rs);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETL("tmp", cast_ut8_2);
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, op_XOR_6);
	RzIlOpEffect *op_ASSIGN_9 = SETG(sp_assoc, op_ADD_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_0, empty_1, op_ASSIGN_3, op_ASSIGN_7, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, "Ryy", false);
	RzIlOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos56 = UN(32, 56);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, Ryy);
	RzIlOpPure *op_RSHIFT_6 = LET("const_pos8", const_pos8, SHIFTR0(cast_ut8_5, VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos56", const_pos56, SHIFTL0(VARL("tmpV"), VARLP("const_pos56")));
	RzIlOpPure *op_OR_8 = LOGOR(op_RSHIFT_6, op_LSHIFT_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut1_3);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Ryy_assoc, op_OR_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut8 tmpV;
	const char *Ryy_assoc = ISA2REG(hi, "Ryy", false);
	RzIlOpPure *Ryy = VARG(Ryy_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos48 = UN(32, 48);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, Ryy);
	RzIlOpPure *op_RSHIFT_6 = LET("const_pos16", const_pos16, SHIFTR0(cast_ut8_5, VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_7 = LET("const_pos48", const_pos48, SHIFTL0(VARL("tmpV"), VARLP("const_pos48")));
	RzIlOpPure *op_OR_8 = LOGOR(op_RSHIFT_6, op_LSHIFT_7);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETL("tmpV", cast_ut2_3);
	RzIlOpEffect *op_ASSIGN_9 = SETG(Ryy_assoc, op_OR_8);
	RzIlOpEffect *empty_10 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_1, empty_2, op_ASSIGN_4, op_ASSIGN_9, empty_10);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadalignh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_7 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzIlOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzIlOpPure *op_AND_12 = LOGAND(Rdd, op_NOT_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut4_4);
	RzIlOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rdd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbsw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_st8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_st8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_7 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_10 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_9));
	RzIlOpPure *op_NOT_11 = LOGNOT(op_LSHIFT_10);
	RzIlOpPure *op_AND_12 = LOGAND(Rd, op_NOT_11);
	RzIlOpPure *op_MUL_13 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(VARL("tmpV"), op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_16 = CAST(32, IL_FALSE, op_AND_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_16, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_18 = CAST(64, IL_FALSE, op_AND_17);
	RzIlOpPure *op_MUL_19 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_20 = SHIFTL0(cast_ut64_18, op_MUL_19);
	RzIlOpPure *op_OR_21 = LOGOR(op_AND_12, op_LSHIFT_20);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *empty_3 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETL("tmpV", cast_ut2_4);
	RzIlOpEffect *op_ASSIGN_6 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_8 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_22 = SETG(Rd_assoc, op_OR_21);
	RzIlOpEffect *empty_23 = EMPTY();
	RzIlOpEffect *seq_24 = SEQN(3, op_ASSIGN_22, empty_23, op_INC_8);
	RzIlOpEffect *for_25 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_7, seq_24));
	RzIlOpEffect *empty_26 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(6, op_ASSIGN_1, empty_2, empty_3, op_ASSIGN_5, for_25, empty_26);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw2_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut2 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos2 = UN(32, 2);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos2", const_pos2, ULT(VARL("i"), VARLP("const_pos2")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut2_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadbzw4_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	// Declare: ut4 tmpV;
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos8 = UN(32, 8);
	RzILOpPure *const_pos0xff = UN(32, 255);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);
	RzIlOpPure *op_LT_9 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_11 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_12 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_11));
	RzIlOpPure *op_NOT_13 = LOGNOT(op_LSHIFT_12);
	RzIlOpPure *op_AND_14 = LOGAND(Rdd, op_NOT_13);
	RzIlOpPure *op_MUL_15 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_RSHIFT_16 = SHIFTR0(VARL("tmpV"), op_MUL_15);
	RzIlOpPure *op_AND_17 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_16, VARLP("const_pos0xff")));
	RzIlOpPure *cast_ut8_18 = CAST(32, IL_FALSE, op_AND_17);
	RzIlOpPure *op_AND_19 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(cast_ut8_18, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_20 = CAST(64, IL_FALSE, op_AND_19);
	RzIlOpPure *op_MUL_21 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_22 = SHIFTL0(cast_ut64_20, op_MUL_21);
	RzIlOpPure *op_OR_23 = LOGOR(op_AND_14, op_LSHIFT_22);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETL("tmpV", cast_ut4_6);
	RzIlOpEffect *op_ASSIGN_8 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_10 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_24 = SETG(Rdd_assoc, op_OR_23);
	RzIlOpEffect *empty_25 = EMPTY();
	RzIlOpEffect *seq_26 = SEQN(3, op_ASSIGN_24, empty_25, op_INC_10);
	RzIlOpEffect *for_27 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_9, seq_26));
	RzIlOpEffect *empty_28 = EMPTY();
	RzIlOpEffect *instruction_sequence = SEQN(8, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, empty_5, op_ASSIGN_7, for_27, empty_28);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrb_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrb_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_5 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st1_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrbgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_3 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st1_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrd_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrd_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_5 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rdd_assoc, cast_ut8_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrdgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_3 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rdd_assoc, cast_ut8_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_5 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_st2_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_3 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_st2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadri_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadri_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_5 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut4_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrigp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_3 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut4_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadrub_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrub_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_5 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut1_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadrubgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_3 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut1_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *s = SN(32, (st32)ISA2IMM(hi, "s"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pbr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pci(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pcr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadruh_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruh_pr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Mu_assoc = ISA2REG(hi, "Mu", false);
	RzIlOpPure *Mu = VARG(Mu_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_2 = ADD(Rx, Mu);
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_5 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_3 = SETG(Rx_assoc, op_ADD_2);
	RzIlOpEffect *empty_4 = EMPTY();
	RzIlOpEffect *op_ASSIGN_6 = SETG(Rd_assoc, cast_ut2_5);
	RzIlOpEffect *instruction_sequence = SEQN(5, op_ASSIGN_0, empty_1, op_ASSIGN_3, empty_4, op_ASSIGN_6);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadruhgp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *gp_assoc = ALIAS2REG(, HEX_REG_ALIAS_GP);
	RzIlOpPure *gp = VARG(gp_assoc);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(gp, VARL("u"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_3 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rd_assoc, cast_ut2_3);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, op_ASSIGN_4);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_loadw_aq(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_loadw_locked(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_4 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrbtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_st1_6 = CAST(1, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_4 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rdd_assoc, cast_ut8_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrdtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(64, VARL("EA"));
	RzIlOpPure *cast_ut8_6 = CAST(8, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rdd_assoc, cast_ut8_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_4 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_st2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_st2_6 = CAST(2, MSB(ml_EA), ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_st2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrif_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrifnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrit_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_4 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut4_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadritnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(32, VARL("EA"));
	RzIlOpPure *cast_ut4_6 = CAST(4, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut4_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubt_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_4 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut1_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadrubtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(8, VARL("EA"));
	RzIlOpPure *cast_ut1_6 = CAST(1, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut1_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhf_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhfnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruht_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_assoc = ISA2REG(hi, "Pt", false);
	RzIlOpPure *Pt = VARG(Pt_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_io(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	// Declare: ut32 EA;
	const char *Rs_assoc = ISA2REG(hi, "Rs", false);
	RzIlOpPure *Rs = VARG(Rs_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_ADD_0 = ADD(Rs, VARL("u"));
	RzIlOpPure *op_AND_3 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_4 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_1 = SETL("EA", op_ADD_0);
	RzIlOpEffect *empty_2 = EMPTY();
	RzIlOpEffect *op_ASSIGN_5 = SETG(Rd_assoc, cast_ut2_4);
	RzIlOpEffect *nop_6 = NOP;
	RzIlOpEffect *empty_7 = EMPTY();
	RzIlOpEffect *seq_then_8 = SEQN(1, op_ASSIGN_5);
	RzIlOpEffect *seq_else_10 = SEQN(2, nop_6, empty_7);
	RzIlOpEffect *branch_9 = BRANCH(op_AND_3, seq_then_8, seq_else_10);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_1, empty_2, branch_9);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_l2_ploadruhtnew_pi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 EA;
	const char *Rx_assoc = ISA2REG(hi, "Rx", false);
	RzIlOpPure *Rx = VARG(Rx_assoc);
	const char *Pt_tmp_assoc = ISA2REG(hi, "Pt", true);
	RzIlOpPure *Pt = VARG(Pt_tmp_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *s = UN(32, (ut32)ISA2IMM(hi, "s"));
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);

	// EXEC
	RzIlOpPure *op_AND_2 = LET("const_pos1", const_pos1, LOGAND(Pt, VARLP("const_pos1")));
	RzIlOpPure *op_ADD_3 = ADD(Rx, VARL("s"));
	RzIlOpPure *ml_EA = LOADW(16, VARL("EA"));
	RzIlOpPure *cast_ut2_6 = CAST(2, IL_FALSE, ml_EA);

	// WRITE
	RzIlOpEffect *op_ASSIGN_0 = SETL("EA", Rx);
	RzIlOpEffect *empty_1 = EMPTY();
	RzIlOpEffect *op_ASSIGN_4 = SETG(Rx_assoc, op_ADD_3);
	RzIlOpEffect *empty_5 = EMPTY();
	RzIlOpEffect *op_ASSIGN_7 = SETG(Rd_assoc, cast_ut2_6);
	RzIlOpEffect *nop_8 = NOP;
	RzIlOpEffect *empty_9 = EMPTY();
	RzIlOpEffect *seq_then_10 = SEQN(3, op_ASSIGN_4, empty_5, op_ASSIGN_7);
	RzIlOpEffect *seq_else_12 = SEQN(2, nop_8, empty_9);
	RzIlOpEffect *branch_11 = BRANCH(op_AND_2, seq_then_10, seq_else_12);
	RzIlOpEffect *instruction_sequence = SEQN(3, op_ASSIGN_0, empty_1, branch_11);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>