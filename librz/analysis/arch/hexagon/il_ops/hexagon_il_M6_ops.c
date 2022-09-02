// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-21 16:48:53-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <rz_il/rz_il_opbuilder_begin.h>
#include "../hexagon_il.h"
#include <hexagon.h>
#include <rz_il/rz_il_opcodes.h>

RzILOpEffect *hex_il_op_m6_vabsdiffb(HexInsnPktBundle *bundle) {
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
	RzILOpPure *cast_st8_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_17 = CAST(8, MSB(op_AND_16), op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_st8_13, cast_st8_17);
	RzILOpPure *op_LT_19 = LET("const_pos0", const_pos0, ULT(op_SUB_18, VARLP("const_pos0")));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_23 = CAST(64, MSB(op_AND_22), op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_27 = CAST(8, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_SUB_28 = SUB(cast_st8_23, cast_st8_27);
	RzILOpPure *op_NEG_29 = NEG(op_SUB_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_33 = CAST(8, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzILOpPure *cast_st8_37 = CAST(8, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_SUB_38 = SUB(cast_st8_33, cast_st8_37);
	RzILOpPure *cond_39 = ITE(op_LT_19, op_NEG_29, op_SUB_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_40);
	RzILOpPure *op_MUL_42 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_9, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_45 = SETG(Rdd_assoc_tmp, op_OR_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_5, op_ASSIGN_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, seq_46, empty_47);
	RzILOpEffect *for_49 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_48));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_49);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m6_vabsdiffub(HexInsnPktBundle *bundle) {
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
	RzILOpPure *cast_ut8_13 = CAST(32, IL_FALSE, op_AND_12);
	RzILOpPure *op_MUL_14 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_15 = SHIFTR0(Rss, op_MUL_14);
	RzILOpPure *op_AND_16 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_15, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_17 = CAST(8, IL_FALSE, op_AND_16);
	RzILOpPure *op_SUB_18 = SUB(cast_ut8_13, cast_ut8_17);
	RzILOpPure *op_LT_19 = LET("const_pos0", const_pos0, ULT(op_SUB_18, VARLP("const_pos0")));
	RzILOpPure *op_MUL_20 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rtt), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_23 = CAST(64, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rss), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_27 = CAST(8, IL_FALSE, op_AND_26);
	RzILOpPure *op_SUB_28 = SUB(cast_ut8_23, cast_ut8_27);
	RzILOpPure *op_NEG_29 = NEG(op_SUB_28);
	RzILOpPure *op_MUL_30 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rtt), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_33 = CAST(8, IL_FALSE, op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xff", const_pos0xff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xff")));
	RzILOpPure *cast_ut8_37 = CAST(8, IL_FALSE, op_AND_36);
	RzILOpPure *op_SUB_38 = SUB(cast_ut8_33, cast_ut8_37);
	RzILOpPure *cond_39 = ITE(op_LT_19, op_NEG_29, op_SUB_38);
	RzILOpPure *op_AND_40 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_39, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_41 = CAST(64, IL_FALSE, op_AND_40);
	RzILOpPure *op_MUL_42 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_43 = SHIFTL0(cast_ut64_41, op_MUL_42);
	RzILOpPure *op_OR_44 = LOGOR(op_AND_9, op_LSHIFT_43);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", LET("const_pos0", const_pos0, VARLP("const_pos0")));
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_4 = SETL("h_tmp0", VARL("i"));
	RzILOpEffect *seq_5 = SEQN(2, op_ASSIGN_hybrid_tmp_4, op_INC_3);
	RzILOpEffect *op_ASSIGN_45 = SETG(Rdd_assoc_tmp, op_OR_44);
	RzILOpEffect *seq_46 = SEQN(2, seq_5, op_ASSIGN_45);
	RzILOpEffect *empty_47 = EMPTY();
	RzILOpEffect *seq_48 = SEQN(2, seq_46, empty_47);
	RzILOpEffect *for_49 = SEQ2(op_ASSIGN_1, REPEAT(op_LT_2, seq_48));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_49);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>