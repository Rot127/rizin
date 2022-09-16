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

RzILOpEffect *hex_il_op_m6_vabsdiffb(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp1966;
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
	RzILOpPure *op_SUB_25 = SUB(cast_st8_18, cast_st8_24);
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_LT_26 = LET("const_pos0", DUP(const_pos0), ULT(cast_27, VARLP("const_pos0")));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos8", DUP(const_pos8), MUL(cast_29, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_st8_33 = CAST(8, MSB(DUP(op_AND_31)), op_AND_31);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(cast_35, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_st8_39 = CAST(8, MSB(DUP(op_AND_37)), op_AND_37);
	RzILOpPure *op_SUB_40 = SUB(cast_st8_33, cast_st8_39);
	RzILOpPure *op_NEG_41 = NEG(op_SUB_40);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *cast_46 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_st8_47 = CAST(8, MSB(DUP(op_AND_45)), op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos8", DUP(const_pos8), MUL(cast_49, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *cast_52 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_51 = LOGAND(op_RSHIFT_50, cast_52);
	RzILOpPure *cast_st8_53 = CAST(8, MSB(DUP(op_AND_51)), op_AND_51);
	RzILOpPure *op_SUB_54 = SUB(cast_st8_47, cast_st8_53);
	RzILOpPure *cond_55 = ITE(op_LT_26, op_NEG_41, op_SUB_54);
	RzILOpPure *cast_57 = CAST(64, MSB(DUP(cond_55)), cond_55);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_57, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_AND_56);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos8", DUP(const_pos8), MUL(cast_60, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(cast_ut64_58, op_MUL_59);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_11, op_LSHIFT_61);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1966", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_63 = SETG(Rdd_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_64 = EMPTY();
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_63, empty_64);
	RzILOpEffect *seq_66 = SEQN(2, seq_6, seq_65);
	RzILOpEffect *for_68 = REPEAT(op_LT_2, seq_66);
	RzILOpEffect *seq_67 = SEQN(2, op_ASSIGN_0, for_68);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_67);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m6_vabsdiffub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp1967;
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
	RzILOpPure *cast_27 = CAST(32, IL_FALSE, op_SUB_25);
	RzILOpPure *op_LT_26 = LET("const_pos0", DUP(const_pos0), ULT(cast_27, VARLP("const_pos0")));
	RzILOpPure *cast_29 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_28 = LET("const_pos8", DUP(const_pos8), MUL(cast_29, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_30 = SHIFTR0(DUP(Rtt), op_MUL_28);
	RzILOpPure *cast_32 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_31 = LOGAND(op_RSHIFT_30, cast_32);
	RzILOpPure *cast_ut8_33 = CAST(8, IL_FALSE, op_AND_31);
	RzILOpPure *cast_35 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_34 = LET("const_pos8", DUP(const_pos8), MUL(cast_35, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_36 = SHIFTR0(DUP(Rss), op_MUL_34);
	RzILOpPure *cast_38 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_37 = LOGAND(op_RSHIFT_36, cast_38);
	RzILOpPure *cast_ut8_39 = CAST(8, IL_FALSE, op_AND_37);
	RzILOpPure *op_SUB_40 = SUB(cast_ut8_33, cast_ut8_39);
	RzILOpPure *op_NEG_41 = NEG(op_SUB_40);
	RzILOpPure *cast_43 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_42 = LET("const_pos8", DUP(const_pos8), MUL(cast_43, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_44 = SHIFTR0(DUP(Rtt), op_MUL_42);
	RzILOpPure *cast_46 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_45 = LOGAND(op_RSHIFT_44, cast_46);
	RzILOpPure *cast_ut8_47 = CAST(8, IL_FALSE, op_AND_45);
	RzILOpPure *cast_49 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_48 = LET("const_pos8", DUP(const_pos8), MUL(cast_49, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rss), op_MUL_48);
	RzILOpPure *cast_52 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, IL_FALSE, VARLP("const_pos0xff")));
	RzILOpPure *op_AND_51 = LOGAND(op_RSHIFT_50, cast_52);
	RzILOpPure *cast_ut8_53 = CAST(8, IL_FALSE, op_AND_51);
	RzILOpPure *op_SUB_54 = SUB(cast_ut8_47, cast_ut8_53);
	RzILOpPure *cond_55 = ITE(op_LT_26, op_NEG_41, op_SUB_54);
	RzILOpPure *cast_57 = CAST(64, MSB(DUP(cond_55)), cond_55);
	RzILOpPure *op_AND_56 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_57, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_58 = CAST(64, IL_FALSE, op_AND_56);
	RzILOpPure *cast_60 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_59 = LET("const_pos8", DUP(const_pos8), MUL(cast_60, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_61 = SHIFTL0(cast_ut64_58, op_MUL_59);
	RzILOpPure *op_OR_62 = LOGOR(op_AND_11, op_LSHIFT_61);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1967", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_63 = SETG(Rdd_assoc_tmp, op_OR_62);
	RzILOpEffect *empty_64 = EMPTY();
	RzILOpEffect *seq_65 = SEQN(2, op_ASSIGN_63, empty_64);
	RzILOpEffect *seq_66 = SEQN(2, seq_6, seq_65);
	RzILOpEffect *for_68 = REPEAT(op_LT_2, seq_66);
	RzILOpEffect *seq_67 = SEQN(2, op_ASSIGN_0, for_68);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_67);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>