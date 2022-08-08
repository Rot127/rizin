// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-07 19:19:30-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon.h"
#include "../hexagon_il.h"

#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_op_a5_acs_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a5_vaddhubs_part0(HexInsnPktBundle *bundle) {
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_ADD_17 = ADD(cast_st16_12, cast_st16_16);
	RzILOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzILOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(64, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzILOpPure *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzILOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzILOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzILOpPure *op_ADD_53 = ADD(cast_st16_48, cast_st16_52);
	RzILOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzILOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_58, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzILOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	// Declare: ut32 i;
	RzILOpPure *const_pos0 = UN(32, 0x0);
	RzILOpPure *const_pos4 = UN(32, 0x4);
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos0x0ffLL = UN(64, 0xff);
	RzILOpPure *const_pos8 = UN(32, 0x8);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = UN(32, 0x1);

	// EXEC
	RzILOpPure *op_LT_2 = LET("const_pos4", const_pos4, ULT(VARL("i"), VARLP("const_pos4")));
	RzILOpPure *op_MUL_4 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_5 = LET("const_pos0x0ffLL", const_pos0x0ffLL, SHIFTL0(VARLP("const_pos0x0ffLL"), op_MUL_4));
	RzILOpPure *op_NOT_6 = LOGNOT(op_LSHIFT_5);
	RzILOpPure *op_AND_7 = LOGAND(Rd, op_NOT_6);
	RzILOpPure *op_NE_8 = LET("const_pos8", const_pos8, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos8"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rss, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzILOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzILOpPure *op_ADD_17 = ADD(cast_st16_12, cast_st16_16);
	RzILOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzILOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzILOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzILOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzILOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzILOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzILOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_33 = CAST(64, MSB(op_AND_32), op_AND_32);
	RzILOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzILOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzILOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzILOpPure *c_call_39 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_40 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzILOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzILOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzILOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzILOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzILOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzILOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzILOpPure *op_ADD_53 = ADD(cast_st16_48, cast_st16_52);
	RzILOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzILOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzILOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzILOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzILOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzILOpPure *op_AND_59 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_58, VARLP("const_pos0x0ffLL")));
	RzILOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzILOpPure *op_MUL_61 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzILOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzILOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzILOpEffect *empty_0 = EMPTY();
	RzILOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzILOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzILOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzILOpEffect *op_ASSIGN_64 = SETG(Rd_assoc, op_OR_63);
	RzILOpEffect *empty_65 = EMPTY();
	RzILOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzILOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzILOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>