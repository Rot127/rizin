// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 01:09:57-04:00
// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-21 00:30:08-04:00
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
	// Declare: st32 h_tmp1889;
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
	RzILOpPure *op_SUB_24 = SUB(cast_st8_17, cast_st8_23);
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_SUB_24);
	RzILOpPure *op_LT_25 = LET("const_pos0", DUP(const_pos0), ULT(cast_26, VARLP("const_pos0")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos8", DUP(const_pos8), MUL(cast_28, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_st8_32 = CAST(8, MSB(DUP(op_AND_30)), op_AND_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos8", DUP(const_pos8), MUL(cast_34, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_st8_38 = CAST(8, MSB(DUP(op_AND_36)), op_AND_36);
	RzILOpPure *op_SUB_39 = SUB(cast_st8_32, cast_st8_38);
	RzILOpPure *op_NEG_40 = NEG(op_SUB_39);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_st8_46 = CAST(8, MSB(DUP(op_AND_44)), op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos8", DUP(const_pos8), MUL(cast_48, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_st8_52 = CAST(8, MSB(DUP(op_AND_50)), op_AND_50);
	RzILOpPure *op_SUB_53 = SUB(cast_st8_46, cast_st8_52);
	RzILOpPure *cond_54 = ITE(op_LT_25, op_NEG_40, op_SUB_53);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(cond_54)), cond_54);
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_56, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_57 = CAST(64, IL_FALSE, op_AND_55);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_58 = LET("const_pos8", DUP(const_pos8), MUL(cast_59, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_57, op_MUL_58);
	RzILOpPure *cast_62 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_61 = LOGOR(cast_62, op_LSHIFT_60);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(op_OR_61)), op_OR_61);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1889", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_63 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_64);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *seq_66 = SEQN(2, op_ASSIGN_63, empty_65);
	RzILOpEffect *seq_67 = SEQN(2, seq_6, seq_66);
	RzILOpEffect *for_69 = REPEAT(op_LT_2, seq_67);
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_0, for_69);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_68);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m6_vabsdiffub(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: st32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	// Declare: st32 h_tmp1890;
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
	RzILOpPure *cast_26 = CAST(32, IL_FALSE, op_SUB_24);
	RzILOpPure *op_LT_25 = LET("const_pos0", DUP(const_pos0), ULT(cast_26, VARLP("const_pos0")));
	RzILOpPure *cast_28 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_27 = LET("const_pos8", DUP(const_pos8), MUL(cast_28, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_29 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *cast_31 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_30 = LOGAND(op_RSHIFT_29, cast_31);
	RzILOpPure *cast_ut8_32 = CAST(8, IL_FALSE, op_AND_30);
	RzILOpPure *cast_34 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_33 = LET("const_pos8", DUP(const_pos8), MUL(cast_34, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzILOpPure *cast_37 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_36 = LOGAND(op_RSHIFT_35, cast_37);
	RzILOpPure *cast_ut8_38 = CAST(8, IL_FALSE, op_AND_36);
	RzILOpPure *op_SUB_39 = SUB(cast_ut8_32, cast_ut8_38);
	RzILOpPure *op_NEG_40 = NEG(op_SUB_39);
	RzILOpPure *cast_42 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_41 = LET("const_pos8", DUP(const_pos8), MUL(cast_42, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_43 = SHIFTR0(DUP(Rtt), op_MUL_41);
	RzILOpPure *cast_45 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_44 = LOGAND(op_RSHIFT_43, cast_45);
	RzILOpPure *cast_ut8_46 = CAST(8, IL_FALSE, op_AND_44);
	RzILOpPure *cast_48 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_47 = LET("const_pos8", DUP(const_pos8), MUL(cast_48, VARLP("const_pos8")));
	RzILOpPure *op_RSHIFT_49 = SHIFTR0(DUP(Rss), op_MUL_47);
	RzILOpPure *cast_51 = LET("const_pos0xff", DUP(const_pos0xff), CAST(64, MSB(DUP(VARLP("const_pos0xff"))), VARLP("const_pos0xff")));
	RzILOpPure *op_AND_50 = LOGAND(op_RSHIFT_49, cast_51);
	RzILOpPure *cast_ut8_52 = CAST(8, IL_FALSE, op_AND_50);
	RzILOpPure *op_SUB_53 = SUB(cast_ut8_46, cast_ut8_52);
	RzILOpPure *cond_54 = ITE(op_LT_25, op_NEG_40, op_SUB_53);
	RzILOpPure *cast_56 = CAST(64, MSB(DUP(cond_54)), cond_54);
	RzILOpPure *op_AND_55 = LET("const_pos0x0ffLL", DUP(const_pos0x0ffLL), LOGAND(cast_56, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_57 = CAST(64, IL_FALSE, op_AND_55);
	RzILOpPure *cast_59 = CAST(32, IL_FALSE, VARL("i"));
	RzILOpPure *op_MUL_58 = LET("const_pos8", DUP(const_pos8), MUL(cast_59, VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_60 = SHIFTL0(cast_ut64_57, op_MUL_58);
	RzILOpPure *cast_62 = CAST(64, IL_FALSE, op_AND_11);
	RzILOpPure *op_OR_61 = LOGOR(cast_62, op_LSHIFT_60);
	RzILOpPure *cast_64 = CAST(64, MSB(DUP(op_OR_61)), op_OR_61);

	// WRITE
	RzILOpEffect *op_ASSIGN_0 = SETL("i", cast_1);
	RzILOpEffect *op_INC_4 = SETL("i", INC(VARL("i"), 32));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_5 = SETL("h_tmp1890", VARL("i"));
	RzILOpEffect *seq_6 = SEQN(2, op_ASSIGN_hybrid_tmp_5, op_INC_4);
	RzILOpEffect *op_ASSIGN_63 = HEX_WRITE_GLOBAL(Rdd_assoc_tmp, cast_64);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *seq_66 = SEQN(2, op_ASSIGN_63, empty_65);
	RzILOpEffect *seq_67 = SEQN(2, seq_6, seq_66);
	RzILOpEffect *for_69 = REPEAT(op_LT_2, seq_67);
	RzILOpEffect *seq_68 = SEQN(2, op_ASSIGN_0, for_69);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_68);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>