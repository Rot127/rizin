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

RzILOpEffect *hex_il_op_a5_acs(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_a5_vaddhubs(HexInsnPktBundle *bundle) {
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
	const char *Rtt_assoc = ISA2REG(hi, "Rtt", false);
	RzIlOpPure *Rtt = VARG(Rtt_assoc);
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
	RzIlOpPure *op_MUL_13 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_14 = SHIFTR0(Rtt, op_MUL_13);
	RzIlOpPure *op_AND_15 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_14, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_16 = CAST(16, MSB(op_AND_15), op_AND_15);
	RzIlOpPure *op_ADD_17 = ADD(cast_st16_12, cast_st16_16);
	RzIlOpPure *c_call_18 = LET("const_pos0", const_pos0, LET("const_pos8", const_pos8, HEX_EXTRACT64(op_ADD_17, VARLP("const_pos0"), VARLP("const_pos8"))));
	RzIlOpPure *cond_19 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_18, VARLP("const_pos0LL")));
	RzIlOpPure *op_MUL_20 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_21 = SHIFTR0(DUP(Rss), op_MUL_20);
	RzIlOpPure *op_AND_22 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_21, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_23 = CAST(16, IL_FALSE, op_AND_22);
	RzIlOpPure *op_MUL_24 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rtt), op_MUL_24);
	RzIlOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzIlOpPure *op_ADD_28 = ADD(cast_st16_23, cast_st16_27);
	RzIlOpPure *op_EQ_29 = EQ(cond_19, op_ADD_28);
	RzIlOpPure *op_MUL_30 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_31 = SHIFTR0(DUP(Rss), op_MUL_30);
	RzIlOpPure *op_AND_32 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_31, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_33 = CAST(64, MSB(op_AND_32), op_AND_32);
	RzIlOpPure *op_MUL_34 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_35 = SHIFTR0(DUP(Rtt), op_MUL_34);
	RzIlOpPure *op_AND_36 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_35, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_37 = CAST(16, MSB(op_AND_36), op_AND_36);
	RzIlOpPure *op_ADD_38 = ADD(cast_st16_33, cast_st16_37);
	RzIlOpPure *c_call_39 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_40 = HEX_REGFIELD(RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_41 = HEX_REGFIELD(RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzIlOpPure *c_call_42 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_40, c_call_41, VARLP("const_pos1")));
	RzIlOpPure *cond_43 = ITE(c_call_39, c_call_42, usr);
	RzIlOpPure *op_MUL_45 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_46 = SHIFTR0(DUP(Rss), op_MUL_45);
	RzIlOpPure *op_AND_47 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_46, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_48 = CAST(32, IL_FALSE, op_AND_47);
	RzIlOpPure *op_MUL_49 = LET("const_pos16", const_pos16, MUL(VARL("i"), VARLP("const_pos16")));
	RzIlOpPure *op_RSHIFT_50 = SHIFTR0(DUP(Rtt), op_MUL_49);
	RzIlOpPure *op_AND_51 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_50, VARLP("const_pos0xffff")));
	RzIlOpPure *cast_st16_52 = CAST(16, MSB(op_AND_51), op_AND_51);
	RzIlOpPure *op_ADD_53 = ADD(cast_st16_48, cast_st16_52);
	RzIlOpPure *op_LT_54 = LET("const_pos0", const_pos0, ULT(op_ADD_53, VARLP("const_pos0")));
	RzIlOpPure *op_LSHIFT_55 = LET("const_pos1LL", const_pos1LL, LET("const_pos8", const_pos8, SHIFTL0(VARLP("const_pos1LL"), VARLP("const_pos8"))));
	RzIlOpPure *op_SUB_56 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_55, VARLP("const_pos1")));
	RzIlOpPure *cond_57 = LET("const_pos0", const_pos0, ITE(op_LT_54, VARLP("const_pos0"), op_SUB_56));
	RzIlOpPure *cond_58 = ITE(op_EQ_29, op_ADD_38, cond_57);
	RzIlOpPure *op_AND_59 = LET("const_pos0x0ffLL", const_pos0x0ffLL, LOGAND(cond_58, VARLP("const_pos0x0ffLL")));
	RzIlOpPure *cast_ut64_60 = CAST(64, IL_FALSE, op_AND_59);
	RzIlOpPure *op_MUL_61 = LET("const_pos8", const_pos8, MUL(VARL("i"), VARLP("const_pos8")));
	RzIlOpPure *op_LSHIFT_62 = SHIFTL0(cast_ut64_60, op_MUL_61);
	RzIlOpPure *op_OR_63 = LOGOR(op_AND_7, op_LSHIFT_62);

	// WRITE
	RzIlOpEffect *empty_0 = EMPTY();
	RzIlOpEffect *op_ASSIGN_1 = SETL("i", const_pos0);
	RzIlOpEffect *op_INC_3 = SETL("i", INC(VARL("i")));
	RzIlOpEffect *op_ASSIGN_44 = SETG(usr_assoc, cond_43);
	RzIlOpEffect *op_ASSIGN_64 = SETG(Rd_assoc, op_OR_63);
	RzIlOpEffect *empty_65 = EMPTY();
	RzIlOpEffect *seq_66 = SEQN(3, op_ASSIGN_64, empty_65, op_INC_3);
	RzIlOpEffect *for_67 = SEQ2(SETL("i", const_pos0), REPEAT(op_LT_2, seq_66));
	RzIlOpEffect *instruction_sequence = SEQN(2, empty_0, for_67);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>