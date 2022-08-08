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

RzILOpEffect *hex_il_op_m4_and_and_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *andop_AND_0Rx = LOGAND(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *andop_AND_0Rx = LOGAND(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_andn_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *andop_AND_1Rx = LOGAND(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_2 = SETG(Rx_assoc, andop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *andop_AND_1Rx = LOGAND(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_2 = SETG(Rx_assoc, andop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_or_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *andop_OR_0Rx = LOGAND(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *andop_OR_0Rx = LOGAND(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_xor_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *andop_XOR_0Rx = LOGAND(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *andop_XOR_0Rx = LOGAND(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc, andop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_wh_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_ADD_31 = ADD(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_ADD_66 = ADD(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_ADD_100 = ADD(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_ADD_139 = ADD(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_ADD_31 = ADD(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_ADD_66 = ADD(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_ADD_100 = ADD(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_ADD_139 = ADD(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_whc_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_SUB_31 = SUB(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_SUB_66 = SUB(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_SUB_100 = SUB(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_SUB_139 = SUB(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_SUB_31 = SUB(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_SUB_66 = SUB(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_SUB_100 = SUB(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_SUB_139 = SUB(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_wh_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_SUB_31 = SUB(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_SUB_66 = SUB(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_SUB_100 = SUB(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_SUB_139 = SUB(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_SUB_31 = SUB(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_SUB_66 = SUB(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_SUB_100 = SUB(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_SUB_139 = SUB(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_whc_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_ADD_31 = ADD(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_ADD_66 = ADD(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_ADD_100 = ADD(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_ADD_139 = ADD(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_1 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_2 = SHIFTR0(Rss, op_MUL_1);
	RzILOpPure *op_AND_3 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_2, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_4 = CAST(32, MSB(op_AND_3), op_AND_3);
	RzILOpPure *cast_st64_5 = CAST(64, MSB(cast_st32_4), cast_st32_4);
	RzILOpPure *cast_st32_6 = CAST(32, MSB(cast_st64_5), cast_st64_5);
	RzILOpPure *cast_st64_7 = CAST(32, IL_FALSE, cast_st32_6);
	RzILOpPure *op_NE_8 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_9 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_10 = SHIFTR0(Rt, op_MUL_9);
	RzILOpPure *op_AND_11 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_10, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_12 = CAST(16, MSB(op_AND_11), op_AND_11);
	RzILOpPure *c_call_13 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_12, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_14 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, c_call_13, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_15 = MUL(cast_st64_7, cond_14);
	RzILOpPure *op_MUL_16 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_17 = SHIFTR0(DUP(Rss), op_MUL_16);
	RzILOpPure *op_AND_18 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_17, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_19 = CAST(32, MSB(op_AND_18), op_AND_18);
	RzILOpPure *cast_st64_20 = CAST(64, MSB(cast_st32_19), cast_st32_19);
	RzILOpPure *cast_st32_21 = CAST(32, MSB(cast_st64_20), cast_st64_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *op_NE_23 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_24 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_25 = SHIFTR0(DUP(Rt), op_MUL_24);
	RzILOpPure *op_AND_26 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_25, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_27 = CAST(16, MSB(op_AND_26), op_AND_26);
	RzILOpPure *c_call_28 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_27, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_29 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_23, c_call_28, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_30 = MUL(cast_st64_22, cond_29);
	RzILOpPure *op_ADD_31 = ADD(op_MUL_15, op_MUL_30);
	RzILOpPure *op_ADD_32 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_31, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_33 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_32, VARLP("const_pos15")));
	RzILOpPure *c_call_34 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_RSHIFT_33, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_34, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_37 = SHIFTR0(DUP(Rss), op_MUL_36);
	RzILOpPure *op_AND_38 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_37, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_39 = CAST(32, MSB(op_AND_38), op_AND_38);
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(cast_st64_40), cast_st64_40);
	RzILOpPure *cast_st64_42 = CAST(32, IL_FALSE, cast_st32_41);
	RzILOpPure *op_NE_43 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rt), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_45, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_47 = CAST(16, MSB(op_AND_46), op_AND_46);
	RzILOpPure *c_call_48 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_47, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_49 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_43, c_call_48, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_50 = MUL(cast_st64_42, cond_49);
	RzILOpPure *op_MUL_51 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_52 = SHIFTR0(DUP(Rss), op_MUL_51);
	RzILOpPure *op_AND_53 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_52, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_54 = CAST(32, MSB(op_AND_53), op_AND_53);
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(cast_st64_55), cast_st64_55);
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_NE_58 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_59 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_60 = SHIFTR0(DUP(Rt), op_MUL_59);
	RzILOpPure *op_AND_61 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_60, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_62 = CAST(16, MSB(op_AND_61), op_AND_61);
	RzILOpPure *c_call_63 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_62, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_64 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_58, c_call_63, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_65 = MUL(cast_st64_57, cond_64);
	RzILOpPure *op_ADD_66 = ADD(op_MUL_50, op_MUL_65);
	RzILOpPure *op_ADD_67 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_66, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_68 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_67, VARLP("const_pos15")));
	RzILOpPure *op_EQ_69 = EQ(cond_35, op_RSHIFT_68);
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rss), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_71, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_73 = CAST(32, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cast_st64_74 = CAST(64, MSB(cast_st32_73), cast_st32_73);
	RzILOpPure *cast_st32_75 = CAST(32, MSB(cast_st64_74), cast_st64_74);
	RzILOpPure *cast_st64_76 = CAST(32, IL_FALSE, cast_st32_75);
	RzILOpPure *op_NE_77 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_78 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_79 = SHIFTR0(DUP(Rt), op_MUL_78);
	RzILOpPure *op_AND_80 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_79, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_81 = CAST(16, MSB(op_AND_80), op_AND_80);
	RzILOpPure *c_call_82 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_81, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_83 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_77, c_call_82, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_84 = MUL(cast_st64_76, cond_83);
	RzILOpPure *op_MUL_85 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_86 = SHIFTR0(DUP(Rss), op_MUL_85);
	RzILOpPure *op_AND_87 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_86, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_88 = CAST(32, MSB(op_AND_87), op_AND_87);
	RzILOpPure *cast_st64_89 = CAST(64, MSB(cast_st32_88), cast_st32_88);
	RzILOpPure *cast_st32_90 = CAST(32, MSB(cast_st64_89), cast_st64_89);
	RzILOpPure *cast_st64_91 = CAST(64, MSB(cast_st32_90), cast_st32_90);
	RzILOpPure *op_NE_92 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_93 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_94 = SHIFTR0(DUP(Rt), op_MUL_93);
	RzILOpPure *op_AND_95 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_94, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_96 = CAST(16, MSB(op_AND_95), op_AND_95);
	RzILOpPure *c_call_97 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_96, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_98 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_92, c_call_97, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_99 = MUL(cast_st64_91, cond_98);
	RzILOpPure *op_ADD_100 = ADD(op_MUL_84, op_MUL_99);
	RzILOpPure *op_ADD_101 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_100, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_102 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_101, VARLP("const_pos15")));
	RzILOpPure *c_call_103 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_104 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_105 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_106 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_104, c_call_105, VARLP("const_pos1")));
	RzILOpPure *cond_107 = ITE(c_call_103, c_call_106, usr);
	RzILOpPure *op_MUL_109 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_110 = SHIFTR0(DUP(Rss), op_MUL_109);
	RzILOpPure *op_AND_111 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_110, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_112 = CAST(32, MSB(op_AND_111), op_AND_111);
	RzILOpPure *cast_st64_113 = CAST(64, MSB(cast_st32_112), cast_st32_112);
	RzILOpPure *cast_st32_114 = CAST(32, MSB(cast_st64_113), cast_st64_113);
	RzILOpPure *cast_st64_115 = CAST(32, IL_FALSE, cast_st32_114);
	RzILOpPure *op_NE_116 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_117 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_118 = SHIFTR0(DUP(Rt), op_MUL_117);
	RzILOpPure *op_AND_119 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_118, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_120 = CAST(16, MSB(op_AND_119), op_AND_119);
	RzILOpPure *c_call_121 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_120, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_122 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_116, c_call_121, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_123 = MUL(cast_st64_115, cond_122);
	RzILOpPure *op_MUL_124 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_125 = SHIFTR0(DUP(Rss), op_MUL_124);
	RzILOpPure *op_AND_126 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_125, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_127 = CAST(32, MSB(op_AND_126), op_AND_126);
	RzILOpPure *cast_st64_128 = CAST(64, MSB(cast_st32_127), cast_st32_127);
	RzILOpPure *cast_st32_129 = CAST(32, MSB(cast_st64_128), cast_st64_128);
	RzILOpPure *cast_st64_130 = CAST(64, MSB(cast_st32_129), cast_st32_129);
	RzILOpPure *op_NE_131 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_132 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_133 = SHIFTR0(DUP(Rt), op_MUL_132);
	RzILOpPure *op_AND_134 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_133, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_135 = CAST(16, MSB(op_AND_134), op_AND_134);
	RzILOpPure *c_call_136 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_135, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_137 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_131, c_call_136, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_138 = MUL(cast_st64_130, cond_137);
	RzILOpPure *op_ADD_139 = ADD(op_MUL_123, op_MUL_138);
	RzILOpPure *op_ADD_140 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_139, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_141 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_140, VARLP("const_pos15")));
	RzILOpPure *op_LT_142 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_141, VARLP("const_pos0")));
	RzILOpPure *op_SUB_143 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_144 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_143));
	RzILOpPure *op_NEG_145 = NEG(op_LSHIFT_144);
	RzILOpPure *op_SUB_146 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_147 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_146));
	RzILOpPure *op_SUB_148 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_147, VARLP("const_pos1")));
	RzILOpPure *cond_149 = ITE(op_LT_142, op_NEG_145, op_SUB_148);
	RzILOpPure *cond_150 = ITE(op_EQ_69, op_RSHIFT_102, cond_149);

	// WRITE
	RzILOpEffect *op_ASSIGN_108 = SETG(usr_assoc, cond_107);
	RzILOpEffect *op_ASSIGN_151 = SETG(Rd_assoc, cond_150);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_151);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mac_up_s1_sat_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rx), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_ADD_9 = ADD(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *op_MUL_18 = MUL(cast_st64_15, cast_st64_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_18, VARLP("const_pos31")));
	RzILOpPure *op_ADD_20 = ADD(cast_st64_13, op_RSHIFT_19);
	RzILOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_MUL_28 = MUL(cast_st64_25, cast_st64_27);
	RzILOpPure *op_RSHIFT_29 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_28, VARLP("const_pos31")));
	RzILOpPure *op_ADD_30 = ADD(cast_st64_23, op_RSHIFT_29);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzILOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzILOpPure *op_MUL_43 = MUL(cast_st64_40, cast_st64_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_43, VARLP("const_pos31")));
	RzILOpPure *op_ADD_45 = ADD(cast_st64_38, op_RSHIFT_44);
	RzILOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzILOpPure *op_SUB_47 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzILOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzILOpPure *op_SUB_50 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzILOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzILOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzILOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzILOpEffect *op_ASSIGN_55 = SETG(Rx_assoc, cond_54);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rx), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_ADD_9 = ADD(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_ADD_9, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *op_MUL_18 = MUL(cast_st64_15, cast_st64_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_18, VARLP("const_pos31")));
	RzILOpPure *op_ADD_20 = ADD(cast_st64_13, op_RSHIFT_19);
	RzILOpPure *op_EQ_21 = EQ(cond_11, op_ADD_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_MUL_28 = MUL(cast_st64_25, cast_st64_27);
	RzILOpPure *op_RSHIFT_29 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_28, VARLP("const_pos31")));
	RzILOpPure *op_ADD_30 = ADD(cast_st64_23, op_RSHIFT_29);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzILOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzILOpPure *op_MUL_43 = MUL(cast_st64_40, cast_st64_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_43, VARLP("const_pos31")));
	RzILOpPure *op_ADD_45 = ADD(cast_st64_38, op_RSHIFT_44);
	RzILOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_ADD_45, VARLP("const_pos0")));
	RzILOpPure *op_SUB_47 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzILOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzILOpPure *op_SUB_50 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzILOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzILOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzILOpPure *cond_54 = ITE(op_EQ_21, op_ADD_30, cond_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzILOpEffect *op_ASSIGN_55 = SETG(Rx_assoc, cond_54);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addi_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("U"));
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, "U"));

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("U"));
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr_u2_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, VARL("u"));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addi_part0(HexInsnPktBundle *bundle) {
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Rt);
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, "u"));
	const char *Rd_assoc = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Rt);
	RzILOpPure *op_ADD_1 = ADD(VARL("u"), op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addr_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Ry_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ry = VARG(Ry_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Ry);
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Ry_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Ry_assoc = ISA2REG(hi, 'y', false);
	RzILOpPure *Ry = VARG(Ry_assoc);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Ry);
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Ry_assoc, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_nac_up_s1_sat_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rx), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_SUB_9 = SUB(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *op_MUL_18 = MUL(cast_st64_15, cast_st64_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_18, VARLP("const_pos31")));
	RzILOpPure *op_SUB_20 = SUB(cast_st64_13, op_RSHIFT_19);
	RzILOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_MUL_28 = MUL(cast_st64_25, cast_st64_27);
	RzILOpPure *op_RSHIFT_29 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_28, VARLP("const_pos31")));
	RzILOpPure *op_SUB_30 = SUB(cast_st64_23, op_RSHIFT_29);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzILOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzILOpPure *op_MUL_43 = MUL(cast_st64_40, cast_st64_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_43, VARLP("const_pos31")));
	RzILOpPure *op_SUB_45 = SUB(cast_st64_38, op_RSHIFT_44);
	RzILOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzILOpPure *op_SUB_47 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzILOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzILOpPure *op_SUB_50 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzILOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzILOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzILOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzILOpEffect *op_ASSIGN_55 = SETG(Rx_assoc, cond_54);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc = ALIAS2REG(HEX_REG_ALIAS_USR);
	RzILOpPure *usr = VARG(usr_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos1LL = SN(64, 0x1);

	// EXEC
	RzILOpPure *op_NE_0 = LET("const_pos32", const_pos32, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos32"), VARLP("const_pos0")))));
	RzILOpPure *cast_st32_1 = CAST(32, MSB(Rx), DUP(Rx));
	RzILOpPure *cast_st64_2 = CAST(64, MSB(cast_st32_1), cast_st32_1);
	RzILOpPure *cast_st32_3 = CAST(32, MSB(Rs), DUP(Rs));
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(Rt), DUP(Rt));
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_MUL_7 = MUL(cast_st64_4, cast_st64_6);
	RzILOpPure *op_RSHIFT_8 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_7, VARLP("const_pos31")));
	RzILOpPure *op_SUB_9 = SUB(cast_st64_2, op_RSHIFT_8);
	RzILOpPure *c_call_10 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, HEX_SEXTRACT64(op_SUB_9, VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *cond_11 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, c_call_10, VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_12 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_13 = CAST(64, MSB(cast_st32_12), cast_st32_12);
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *op_MUL_18 = MUL(cast_st64_15, cast_st64_17);
	RzILOpPure *op_RSHIFT_19 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_18, VARLP("const_pos31")));
	RzILOpPure *op_SUB_20 = SUB(cast_st64_13, op_RSHIFT_19);
	RzILOpPure *op_EQ_21 = EQ(cond_11, op_SUB_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *op_MUL_28 = MUL(cast_st64_25, cast_st64_27);
	RzILOpPure *op_RSHIFT_29 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_28, VARLP("const_pos31")));
	RzILOpPure *op_SUB_30 = SUB(cast_st64_23, op_RSHIFT_29);
	RzILOpPure *c_call_31 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_32 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpPure *c_call_34 = LET("const_pos1", const_pos1, HEX_DEPOSIT64(usr, c_call_32, c_call_33, VARLP("const_pos1")));
	RzILOpPure *cond_35 = ITE(c_call_31, c_call_34, usr);
	RzILOpPure *cast_st32_37 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_38 = CAST(32, IL_FALSE, cast_st32_37);
	RzILOpPure *cast_st32_39 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_40 = CAST(64, MSB(cast_st32_39), cast_st32_39);
	RzILOpPure *cast_st32_41 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_42 = CAST(64, MSB(cast_st32_41), cast_st32_41);
	RzILOpPure *op_MUL_43 = MUL(cast_st64_40, cast_st64_42);
	RzILOpPure *op_RSHIFT_44 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_43, VARLP("const_pos31")));
	RzILOpPure *op_SUB_45 = SUB(cast_st64_38, op_RSHIFT_44);
	RzILOpPure *op_LT_46 = LET("const_pos0", const_pos0, ULT(op_SUB_45, VARLP("const_pos0")));
	RzILOpPure *op_SUB_47 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_48 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_47));
	RzILOpPure *op_NEG_49 = NEG(op_LSHIFT_48);
	RzILOpPure *op_SUB_50 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_51 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_50));
	RzILOpPure *op_SUB_52 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_51, VARLP("const_pos1")));
	RzILOpPure *cond_53 = ITE(op_LT_46, op_NEG_49, op_SUB_52);
	RzILOpPure *cond_54 = ITE(op_EQ_21, op_SUB_30, cond_53);

	// WRITE
	RzILOpEffect *op_ASSIGN_36 = SETG(usr_assoc, cond_35);
	RzILOpEffect *op_ASSIGN_55 = SETG(Rx_assoc, cond_54);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_55);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_and_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *orop_AND_0Rx = LOGOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *orop_AND_0Rx = LOGOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_andn_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *orop_AND_1Rx = LOGOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_2 = SETG(Rx_assoc, orop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *orop_AND_1Rx = LOGOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_2 = SETG(Rx_assoc, orop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_or_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *orop_OR_0Rx = LOGOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *orop_OR_0Rx = LOGOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_xor_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *orop_XOR_0Rx = LOGOR(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rs, Rt);
	RzILOpPure *orop_XOR_0Rx = LOGOR(op_XOR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc, orop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_pmpyw_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_pmpyw_acc_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh_acc_part0(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
	const HexInsn *hi = bundle->insn;
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s0_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s1_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s0_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s1_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos2 = UN(32, 0x2);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos2", const_pos2, LET("const_pos16", const_pos16, MUL(VARLP("const_pos2"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s0_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s1_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, IL_FALSE, op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);
	RzILOpPure *addop_ADD_34Rxx = ADD(op_ADD_34, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_ADD_35 = SETG(Rxx_assoc, addop_ADD_34Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_ADD_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s0_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_15, VARLP("const_pos0")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_32, VARLP("const_pos0")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s1_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc = ISA2REG(hi, 'd', false);
	RzILOpPure *Rdd = VARG(Rdd_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);
	RzILOpPure *const_pos3 = UN(32, 0x3);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	RzILOpPure *const_pos0LL = SN(64, 0x0);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_1 = SHIFTR0(Rss, op_MUL_0);
	RzILOpPure *op_AND_2 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_1, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_3 = CAST(32, MSB(op_AND_2), op_AND_2);
	RzILOpPure *cast_st64_4 = CAST(64, MSB(cast_st32_3), cast_st32_3);
	RzILOpPure *cast_st32_5 = CAST(32, MSB(cast_st64_4), cast_st64_4);
	RzILOpPure *cast_st64_6 = CAST(64, MSB(cast_st32_5), cast_st32_5);
	RzILOpPure *op_NE_7 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_8 = LET("const_pos3", const_pos3, LET("const_pos16", const_pos16, MUL(VARLP("const_pos3"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_9 = SHIFTR0(Rtt, op_MUL_8);
	RzILOpPure *op_AND_10 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_9, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_11 = CAST(16, MSB(op_AND_10), op_AND_10);
	RzILOpPure *c_call_12 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_11, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, c_call_12, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_14 = MUL(cast_st64_6, cond_13);
	RzILOpPure *cast_st64_15 = CAST(64, MSB(op_MUL_14), op_MUL_14);
	RzILOpPure *op_LSHIFT_16 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_15, VARLP("const_pos1")));
	RzILOpPure *op_MUL_17 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_18 = SHIFTR0(DUP(Rss), op_MUL_17);
	RzILOpPure *op_AND_19 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_18, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_20 = CAST(32, MSB(op_AND_19), op_AND_19);
	RzILOpPure *cast_st64_21 = CAST(64, MSB(cast_st32_20), cast_st32_20);
	RzILOpPure *cast_st32_22 = CAST(32, MSB(cast_st64_21), cast_st64_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *op_NE_24 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_25 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_26 = SHIFTR0(DUP(Rtt), op_MUL_25);
	RzILOpPure *op_AND_27 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_26, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_28 = CAST(16, MSB(op_AND_27), op_AND_27);
	RzILOpPure *c_call_29 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, HEX_SEXTRACT64(cast_st16_28, VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *cond_30 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_24, c_call_29, VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_31 = MUL(cast_st64_23, cond_30);
	RzILOpPure *cast_st64_32 = CAST(64, MSB(op_MUL_31), op_MUL_31);
	RzILOpPure *op_LSHIFT_33 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_32, VARLP("const_pos1")));
	RzILOpPure *op_ADD_34 = ADD(op_LSHIFT_16, op_LSHIFT_33);

	// WRITE
	RzILOpEffect *op_ASSIGN_35 = SETG(Rdd_assoc, op_ADD_34);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_35);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_and_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *xorop_AND_0Rx = LOGXOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc, xorop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_AND_0 = LOGAND(Rs, Rt);
	RzILOpPure *xorop_AND_0Rx = LOGXOR(op_AND_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc, xorop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_andn_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *xorop_AND_1Rx = LOGXOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_2 = SETG(Rx_assoc, xorop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_2);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_NOT_0 = LOGNOT(Rt);
	RzILOpPure *op_AND_1 = LOGAND(Rs, op_NOT_0);
	RzILOpPure *xorop_AND_1Rx = LOGXOR(op_AND_1, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_2 = SETG(Rx_assoc, xorop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_or_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *xorop_OR_0Rx = LOGXOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc, xorop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_OR_0 = LOGOR(Rs, Rt);
	RzILOpPure *xorop_OR_0Rx = LOGXOR(op_OR_0, Rx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc, xorop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_xacc_part0(HexInsnPktBundle *bundle) {
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);
	RzILOpPure *xorop_XOR_0Rxx = LOGXOR(op_XOR_0, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rxx_assoc, xorop_XOR_0Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rxx = VARG(Rxx_assoc);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	const char *Rtt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rtt = VARG(Rtt_assoc);

	// EXEC
	RzILOpPure *op_XOR_0 = LOGXOR(Rss, Rtt);
	RzILOpPure *xorop_XOR_0Rxx = LOGXOR(op_XOR_0, Rxx);

	// WRITE
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rxx_assoc, xorop_XOR_0Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>