// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-06 11:05:56-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_s5_asrhub_rnd_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(cast_st16_12, VARL("u"));
	RzIlOpPure *op_ADD_14 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_13, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_15 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_14, VARLP("const_pos1")));
	RzIlOpPure *c_call_16 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_RSHIFT_15, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_17 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_16, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_18 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzIlOpPure *op_AND_20 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_19, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_21 = CAST(16, MSB(op_AND_20), op_AND_20);
	RzIlOpPure *op_RSHIFT_22 = SHIFTR0(cast_st16_21, VARL("u"));
	RzIlOpPure *op_ADD_23 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_22, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_24 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_23, VARLP("const_pos1")));
	RzIlOpPure *op_EQ_25 = EQ(cond_17, op_RSHIFT_24);
	RzIlOpPure *op_MUL_26 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rss), op_MUL_26);
	RzIlOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzIlOpPure *op_RSHIFT_30 = SHIFTR0(cast_st16_29, VARL("u"));
	RzIlOpPure *op_ADD_31 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_30, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_32 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_31, VARLP("const_pos1")));
	RzIlOpPure *c_call_33 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_34 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_35 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_36 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_34, c_call_35, VARLP("const_pos1")));
	RzIlOpPure *cond_37 = ITE(c_call_33, c_call_36, usr);
	RzIlOpPure *op_MUL_39 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_40 = SHIFTR0(DUP(Rss), op_MUL_39);
	RzIlOpPure *op_AND_41 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_40, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_42 = CAST(16, MSB(op_AND_41), op_AND_41);
	RzIlOpPure *op_RSHIFT_43 = SHIFTR0(cast_st16_42, VARL("u"));
	RzIlOpPure *op_ADD_44 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_43, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_45 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_44, VARLP("const_pos1")));
	RzIlOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_45, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_47 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_48 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_47, VARLP("const_pos1")));
	RzIlOpPure *cond_49 = LET("const_pos0", const_pos0, ITE(op_LT_46, VARLP("const_pos0"), op_SUB_48));
	RzIlOpPure *cond_50 = ITE(op_EQ_25, op_RSHIFT_32, cond_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_50, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_52 = CAST(64, IL_FALSE, op_AND_51);
	RzIlOpPure *op_MUL_53 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_54 = SHIFTL0(cast_ut64_52, op_MUL_53);
	RzIlOpPure *op_OR_55 = LOGOR(op_AND_7, op_LSHIFT_54);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_38 = SETG(usr_assoc, cond_37);
	RzIlOpEffect *op_ASSIGN_56 = SETG(Rd_assoc, op_OR_55);
	RzIlOpEffect *empty_57 = EMPTY();
	RzIlOpEffect *seq_58 = SEQN(3, op_ASSIGN_56, empty_57, op_INC_3);
	RzIlOpEffect *for_59 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_58));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_59);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_asrhub_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rd_assoc = ISA2REG(hi, "Rd", false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 255);
	RzILOpPure *const_pos8 = UN(32, 8);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 16);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos0LL = SN(64, 0);
	const char *usr_assoc = ALIAS2REG(, HEX_REG_ALIAS_USR);
	RzIlOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos1LL = UN(32, 1);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzIlOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzIlOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzIlOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzIlOpPure *op_RSHIFT_13 = SHIFTR0(cast_st16_12, VARL("u"));
	RzIlOpPure *c_call_14 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_RSHIFT_13, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_14, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_16 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzIlOpPure *op_AND_18 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_17, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_19 = CAST(16, MSB(op_AND_18), op_AND_18);
	RzIlOpPure *op_RSHIFT_20 = SHIFTR0(cast_st16_19, VARL("u"));
	RzIlOpPure *op_EQ_21 = EQ(cond_15, op_RSHIFT_20);
	RzIlOpPure *op_MUL_22 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_23 = SHIFTR0(DUP(Rss), op_MUL_22);
	RzIlOpPure *op_AND_24 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_23, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_25 = CAST(16, MSB(op_AND_24), op_AND_24);
	RzIlOpPure *op_RSHIFT_26 = SHIFTR0(cast_st16_25, VARL("u"));
	RzIlOpPure *c_call_27 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_28 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_29 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_30 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_28, c_call_29, VARLP("const_pos1")));
	RzIlOpPure *cond_31 = ITE(c_call_27, c_call_30, usr);
	RzIlOpPure *op_MUL_33 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_34 = SHIFTR0(DUP(Rss), op_MUL_33);
	RzIlOpPure *op_AND_35 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_34, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_36 = CAST(16, MSB(op_AND_35), op_AND_35);
	RzIlOpPure *op_RSHIFT_37 = SHIFTR0(cast_st16_36, VARL("u"));
	RzIlOpPure *op_LT_38 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_37, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_39 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_40 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_39, VARLP("const_pos1")));
	RzIlOpPure *cond_41 = LET("const_pos0", const_pos0, ITE(op_LT_38, VARLP("const_pos0"), op_SUB_40));
	RzIlOpPure *cond_42 = ITE(op_EQ_21, op_RSHIFT_26, cond_41);
	RzIlOpPure *op_AND_43 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_42, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_44 = CAST(64, IL_FALSE, op_AND_43);
	RzIlOpPure *op_MUL_45 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_46 = SHIFTL0(cast_ut64_44, op_MUL_45);
	RzIlOpPure *op_OR_47 = LOGOR(op_AND_7, op_LSHIFT_46);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_32 = SETG(usr_assoc, cond_31);
	RzIlOpEffect *op_ASSIGN_48 = SETG(Rd_assoc, op_OR_47);
	RzIlOpEffect *empty_49 = EMPTY();
	RzIlOpEffect *seq_50 = SEQN(3, op_ASSIGN_48, empty_49, op_INC_3);
	RzIlOpEffect *for_51 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_50));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_s5_popcountp(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_s5_vasrhrnd(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0);
	RzILOpPure *const_pos4 = UN(32, 4);
	const char *Rdd_assoc = ISA2REG(hi, "Rdd", false);
	RzIlOpPure *Rdd = VARG(Rdd_assoc);
	RzILOpPure *const_pos0x0ffffLL = UN(64, 65535);
	RzILOpPure *const_pos16 = UN(32, 16);
	const char *Rss_assoc = ISA2REG(hi, "Rss", false);
	RzIlOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 65535);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	RzILOpPure *const_pos1 = UN(32, 1);
	RzILOpPure *const_pos0x0ffff = UN(32, 65535);

	// EXEC
	RzIlOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzIlOpPure *op_MUL_4 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_5 = LET("const_pos0x0ffffLL", const_pos0x0ffffLL, SHIFTL0(VARLP("const_pos0x0ffffLL"), op_MUL_4));
	RzIlOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzIlOpPure *op_AND_7 = LOGAND(Rdd, op_NOT_6);
	RzIlOpPure *op_MUL_8 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_9 = SHIFTR0(Rss, op_MUL_8);
	RzIlOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzIlOpPure *op_RSHIFT_12 = SHIFTR0(cast_st16_11, VARL("u"));
	RzIlOpPure *op_ADD_13 = LET("const_pos1", const_pos1, ADD(op_RSHIFT_12, VARLP("const_pos1")));
	RzIlOpPure *op_RSHIFT_14 = LET("const_pos1", const_pos1, SHIFTR0(op_ADD_13, VARLP("const_pos1")));
	RzIlOpPure *op_AND_15 = LET("const_pos0x0ffff", const_pos0x0ffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0x0ffff")));
	RzIlOpPure *cast_ut64_16 = CAST(64, IL_FALSE, op_AND_15);
	RzIlOpPure *op_MUL_17 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_LSHIFT_18 = SHIFTL0(cast_ut64_16, op_MUL_17);
	RzIlOpPure *op_OR_19 = LOGOR(op_AND_7, op_LSHIFT_18);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_20 = SETG(Rdd_assoc, op_OR_19);
	RzIlOpEffect *empty_21 = EMPTY();
	RzIlOpEffect *seq_22 = SEQN(3, op_ASSIGN_20, empty_21, op_INC_3);
	RzIlOpEffect *for_23 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_22));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_23);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>