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

RzILOpEffect *hex_il_op_m4_and_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_2 = SETG(Rx_assoc_tmp, andop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_and_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_AND_1 = SETG(Rx_assoc_tmp, andop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_AND_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: ut32 h_tmp2;
	// Declare: st64 h_tmp3;
	// Declare: st64 h_tmp4;
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut64 h_tmp10;
	// Declare: st64 h_tmp11;
	// Declare: st64 h_tmp12;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = MUL(cast_st64_7, cond_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(cast_st64_22), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_NE_25 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_26 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rt), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cond_34 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_25, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_35 = MUL(cast_st64_24, cond_34);
	RzILOpPure *op_ADD_36 = ADD(op_MUL_17, op_MUL_35);
	RzILOpPure *op_ADD_37 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_36, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_38 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_37, VARLP("const_pos15")));
	RzILOpPure *cond_43 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(cast_st64_48), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(32, IL_FALSE, cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_52 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cond_60 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_51, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_61 = MUL(cast_st64_50, cond_60);
	RzILOpPure *op_MUL_62 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(cast_st32_65), cast_st32_65);
	RzILOpPure *cast_st32_67 = CAST(32, MSB(cast_st64_66), cast_st64_66);
	RzILOpPure *cast_st64_68 = CAST(64, MSB(cast_st32_67), cast_st32_67);
	RzILOpPure *op_NE_69 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_70 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rt), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_73 = CAST(16, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cond_78 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_69, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_79 = MUL(cast_st64_68, cond_78);
	RzILOpPure *op_ADD_80 = ADD(op_MUL_61, op_MUL_79);
	RzILOpPure *op_ADD_81 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_80, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_82 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_81, VARLP("const_pos15")));
	RzILOpPure *op_EQ_83 = EQ(cond_43, op_RSHIFT_82);
	RzILOpPure *op_MUL_84 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzILOpPure *cast_st32_89 = CAST(32, MSB(cast_st64_88), cast_st64_88);
	RzILOpPure *cast_st64_90 = CAST(32, IL_FALSE, cast_st32_89);
	RzILOpPure *op_NE_91 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_92 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rt), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(16, MSB(op_AND_94), op_AND_94);
	RzILOpPure *cond_100 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_91, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_101 = MUL(cast_st64_90, cond_100);
	RzILOpPure *op_MUL_102 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(cast_st64_106), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(cast_st32_107), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_111, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_113 = CAST(16, MSB(op_AND_112), op_AND_112);
	RzILOpPure *cond_118 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_109, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_119 = MUL(cast_st64_108, cond_118);
	RzILOpPure *op_ADD_120 = ADD(op_MUL_101, op_MUL_119);
	RzILOpPure *op_ADD_121 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_120, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_122 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_121, VARLP("const_pos15")));
	RzILOpPure *cond_139 = ITE(VARL("h_tmp7"), VARL("h_tmp10"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_142 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_143 = SHIFTR0(DUP(Rss), op_MUL_142);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_143, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_145 = CAST(32, MSB(op_AND_144), op_AND_144);
	RzILOpPure *cast_st64_146 = CAST(64, MSB(cast_st32_145), cast_st32_145);
	RzILOpPure *cast_st32_147 = CAST(32, MSB(cast_st64_146), cast_st64_146);
	RzILOpPure *cast_st64_148 = CAST(32, IL_FALSE, cast_st32_147);
	RzILOpPure *op_NE_149 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_150 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rt), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_151, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_153 = CAST(16, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cond_157 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_149, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_158 = MUL(cast_st64_148, cond_157);
	RzILOpPure *op_MUL_159 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_160 = SHIFTR0(DUP(Rss), op_MUL_159);
	RzILOpPure *op_AND_161 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_160, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_162 = CAST(32, MSB(op_AND_161), op_AND_161);
	RzILOpPure *cast_st64_163 = CAST(64, MSB(cast_st32_162), cast_st32_162);
	RzILOpPure *cast_st32_164 = CAST(32, MSB(cast_st64_163), cast_st64_163);
	RzILOpPure *cast_st64_165 = CAST(64, MSB(cast_st32_164), cast_st32_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rt), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *cond_175 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_176 = MUL(cast_st64_165, cond_175);
	RzILOpPure *op_ADD_177 = ADD(op_MUL_158, op_MUL_176);
	RzILOpPure *op_ADD_178 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_177, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_179 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_178, VARLP("const_pos15")));
	RzILOpPure *op_LT_180 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_179, VARLP("const_pos0")));
	RzILOpPure *op_SUB_181 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *op_NEG_183 = NEG(op_LSHIFT_182);
	RzILOpPure *op_SUB_184 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_185 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_184));
	RzILOpPure *op_SUB_186 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_185, VARLP("const_pos1")));
	RzILOpPure *cond_187 = ITE(op_LT_180, op_NEG_183, op_SUB_186);
	RzILOpPure *cond_189 = ITE(op_EQ_83, op_RSHIFT_122, cond_187);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(cast_st16_12, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(cast_st16_29, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_15, seq_32);
	RzILOpEffect *c_call_39 = HEX_SEXTRACT64(op_RSHIFT_38, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_33, seq_41);
	RzILOpEffect *c_call_56 = HEX_SEXTRACT64(cast_st16_55, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_42, seq_58);
	RzILOpEffect *c_call_74 = HEX_SEXTRACT64(cast_st16_73, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(2, seq_59, seq_76);
	RzILOpEffect *c_call_96 = HEX_SEXTRACT64(cast_st16_95, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_77, seq_98);
	RzILOpEffect *c_call_114 = HEX_SEXTRACT64(cast_st16_113, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_99, seq_116);
	RzILOpEffect *c_call_123 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_123, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *seq_126 = SEQN(2, seq_117, seq_125);
	RzILOpEffect *c_call_127 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_128 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_129 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_128);
	RzILOpEffect *seq_130 = SEQN(2, seq_126, seq_129);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_130, seq_133);
	RzILOpEffect *c_call_135 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp8"), VARL("h_tmp9"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp10", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *op_ASSIGN_140 = SETG(usr_assoc_tmp, cond_139);
	RzILOpEffect *seq_141 = SEQN(2, seq_138, op_ASSIGN_140);
	RzILOpEffect *c_call_154 = HEX_SEXTRACT64(cast_st16_153, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp11", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_171 = HEX_SEXTRACT64(cast_st16_170, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_172 = SETL("h_tmp12", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_173 = SEQN(2, c_call_171, op_ASSIGN_hybrid_tmp_172);
	RzILOpEffect *seq_174 = SEQN(2, seq_156, seq_173);
	RzILOpEffect *seq_188 = SEQN(2, seq_174, seq_141);
	RzILOpEffect *op_ASSIGN_190 = SETG(Rd_assoc_tmp, cond_189);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_190, seq_188);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyi_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: ut32 h_tmp2;
	// Declare: st64 h_tmp3;
	// Declare: st64 h_tmp4;
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut64 h_tmp10;
	// Declare: st64 h_tmp11;
	// Declare: st64 h_tmp12;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = MUL(cast_st64_7, cond_16);
	RzILOpPure *op_MUL_18 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(cast_st64_22), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_NE_25 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rt), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cond_34 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_25, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_35 = MUL(cast_st64_24, cond_34);
	RzILOpPure *op_SUB_36 = SUB(op_MUL_17, op_MUL_35);
	RzILOpPure *op_ADD_37 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_36, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_38 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_37, VARLP("const_pos15")));
	RzILOpPure *cond_43 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_44 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(cast_st64_48), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(32, IL_FALSE, cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cond_60 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_51, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_61 = MUL(cast_st64_50, cond_60);
	RzILOpPure *op_MUL_62 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(cast_st32_65), cast_st32_65);
	RzILOpPure *cast_st32_67 = CAST(32, MSB(cast_st64_66), cast_st64_66);
	RzILOpPure *cast_st64_68 = CAST(64, MSB(cast_st32_67), cast_st32_67);
	RzILOpPure *op_NE_69 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_70 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rt), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_73 = CAST(16, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cond_78 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_69, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_79 = MUL(cast_st64_68, cond_78);
	RzILOpPure *op_SUB_80 = SUB(op_MUL_61, op_MUL_79);
	RzILOpPure *op_ADD_81 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_80, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_82 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_81, VARLP("const_pos15")));
	RzILOpPure *op_EQ_83 = EQ(cond_43, op_RSHIFT_82);
	RzILOpPure *op_MUL_84 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzILOpPure *cast_st32_89 = CAST(32, MSB(cast_st64_88), cast_st64_88);
	RzILOpPure *cast_st64_90 = CAST(32, IL_FALSE, cast_st32_89);
	RzILOpPure *op_NE_91 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_92 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rt), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(16, MSB(op_AND_94), op_AND_94);
	RzILOpPure *cond_100 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_91, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_101 = MUL(cast_st64_90, cond_100);
	RzILOpPure *op_MUL_102 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(cast_st64_106), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(cast_st32_107), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_111, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_113 = CAST(16, MSB(op_AND_112), op_AND_112);
	RzILOpPure *cond_118 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_109, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_119 = MUL(cast_st64_108, cond_118);
	RzILOpPure *op_SUB_120 = SUB(op_MUL_101, op_MUL_119);
	RzILOpPure *op_ADD_121 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_120, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_122 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_121, VARLP("const_pos15")));
	RzILOpPure *cond_139 = ITE(VARL("h_tmp7"), VARL("h_tmp10"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_142 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_143 = SHIFTR0(DUP(Rss), op_MUL_142);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_143, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_145 = CAST(32, MSB(op_AND_144), op_AND_144);
	RzILOpPure *cast_st64_146 = CAST(64, MSB(cast_st32_145), cast_st32_145);
	RzILOpPure *cast_st32_147 = CAST(32, MSB(cast_st64_146), cast_st64_146);
	RzILOpPure *cast_st64_148 = CAST(32, IL_FALSE, cast_st32_147);
	RzILOpPure *op_NE_149 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_150 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rt), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_151, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_153 = CAST(16, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cond_157 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_149, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_158 = MUL(cast_st64_148, cond_157);
	RzILOpPure *op_MUL_159 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_160 = SHIFTR0(DUP(Rss), op_MUL_159);
	RzILOpPure *op_AND_161 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_160, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_162 = CAST(32, MSB(op_AND_161), op_AND_161);
	RzILOpPure *cast_st64_163 = CAST(64, MSB(cast_st32_162), cast_st32_162);
	RzILOpPure *cast_st32_164 = CAST(32, MSB(cast_st64_163), cast_st64_163);
	RzILOpPure *cast_st64_165 = CAST(64, MSB(cast_st32_164), cast_st32_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rt), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *cond_175 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_176 = MUL(cast_st64_165, cond_175);
	RzILOpPure *op_SUB_177 = SUB(op_MUL_158, op_MUL_176);
	RzILOpPure *op_ADD_178 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_177, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_179 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_178, VARLP("const_pos15")));
	RzILOpPure *op_LT_180 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_179, VARLP("const_pos0")));
	RzILOpPure *op_SUB_181 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *op_NEG_183 = NEG(op_LSHIFT_182);
	RzILOpPure *op_SUB_184 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_185 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_184));
	RzILOpPure *op_SUB_186 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_185, VARLP("const_pos1")));
	RzILOpPure *cond_187 = ITE(op_LT_180, op_NEG_183, op_SUB_186);
	RzILOpPure *cond_189 = ITE(op_EQ_83, op_RSHIFT_122, cond_187);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(cast_st16_12, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(cast_st16_29, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_15, seq_32);
	RzILOpEffect *c_call_39 = HEX_SEXTRACT64(op_RSHIFT_38, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_33, seq_41);
	RzILOpEffect *c_call_56 = HEX_SEXTRACT64(cast_st16_55, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_42, seq_58);
	RzILOpEffect *c_call_74 = HEX_SEXTRACT64(cast_st16_73, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(2, seq_59, seq_76);
	RzILOpEffect *c_call_96 = HEX_SEXTRACT64(cast_st16_95, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_77, seq_98);
	RzILOpEffect *c_call_114 = HEX_SEXTRACT64(cast_st16_113, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_99, seq_116);
	RzILOpEffect *c_call_123 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_123, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *seq_126 = SEQN(2, seq_117, seq_125);
	RzILOpEffect *c_call_127 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_128 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_129 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_128);
	RzILOpEffect *seq_130 = SEQN(2, seq_126, seq_129);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_130, seq_133);
	RzILOpEffect *c_call_135 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp8"), VARL("h_tmp9"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp10", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *op_ASSIGN_140 = SETG(usr_assoc_tmp, cond_139);
	RzILOpEffect *seq_141 = SEQN(2, seq_138, op_ASSIGN_140);
	RzILOpEffect *c_call_154 = HEX_SEXTRACT64(cast_st16_153, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp11", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_171 = HEX_SEXTRACT64(cast_st16_170, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_172 = SETL("h_tmp12", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_173 = SEQN(2, c_call_171, op_ASSIGN_hybrid_tmp_172);
	RzILOpEffect *seq_174 = SEQN(2, seq_156, seq_173);
	RzILOpEffect *seq_188 = SEQN(2, seq_174, seq_141);
	RzILOpEffect *op_ASSIGN_190 = SETG(Rd_assoc_tmp, cond_189);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_190, seq_188);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_wh(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: ut32 h_tmp2;
	// Declare: st64 h_tmp3;
	// Declare: st64 h_tmp4;
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut64 h_tmp10;
	// Declare: st64 h_tmp11;
	// Declare: st64 h_tmp12;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = MUL(cast_st64_7, cond_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(cast_st64_22), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_NE_25 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rt), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cond_34 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_25, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_35 = MUL(cast_st64_24, cond_34);
	RzILOpPure *op_SUB_36 = SUB(op_MUL_17, op_MUL_35);
	RzILOpPure *op_ADD_37 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_36, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_38 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_37, VARLP("const_pos15")));
	RzILOpPure *cond_43 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(cast_st64_48), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(32, IL_FALSE, cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cond_60 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_51, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_61 = MUL(cast_st64_50, cond_60);
	RzILOpPure *op_MUL_62 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(cast_st32_65), cast_st32_65);
	RzILOpPure *cast_st32_67 = CAST(32, MSB(cast_st64_66), cast_st64_66);
	RzILOpPure *cast_st64_68 = CAST(64, MSB(cast_st32_67), cast_st32_67);
	RzILOpPure *op_NE_69 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_70 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rt), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_73 = CAST(16, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cond_78 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_69, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_79 = MUL(cast_st64_68, cond_78);
	RzILOpPure *op_SUB_80 = SUB(op_MUL_61, op_MUL_79);
	RzILOpPure *op_ADD_81 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_80, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_82 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_81, VARLP("const_pos15")));
	RzILOpPure *op_EQ_83 = EQ(cond_43, op_RSHIFT_82);
	RzILOpPure *op_MUL_84 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzILOpPure *cast_st32_89 = CAST(32, MSB(cast_st64_88), cast_st64_88);
	RzILOpPure *cast_st64_90 = CAST(32, IL_FALSE, cast_st32_89);
	RzILOpPure *op_NE_91 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_92 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rt), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(16, MSB(op_AND_94), op_AND_94);
	RzILOpPure *cond_100 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_91, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_101 = MUL(cast_st64_90, cond_100);
	RzILOpPure *op_MUL_102 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(cast_st64_106), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(cast_st32_107), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_111, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_113 = CAST(16, MSB(op_AND_112), op_AND_112);
	RzILOpPure *cond_118 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_109, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_119 = MUL(cast_st64_108, cond_118);
	RzILOpPure *op_SUB_120 = SUB(op_MUL_101, op_MUL_119);
	RzILOpPure *op_ADD_121 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_120, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_122 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_121, VARLP("const_pos15")));
	RzILOpPure *cond_139 = ITE(VARL("h_tmp7"), VARL("h_tmp10"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_142 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_143 = SHIFTR0(DUP(Rss), op_MUL_142);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_143, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_145 = CAST(32, MSB(op_AND_144), op_AND_144);
	RzILOpPure *cast_st64_146 = CAST(64, MSB(cast_st32_145), cast_st32_145);
	RzILOpPure *cast_st32_147 = CAST(32, MSB(cast_st64_146), cast_st64_146);
	RzILOpPure *cast_st64_148 = CAST(32, IL_FALSE, cast_st32_147);
	RzILOpPure *op_NE_149 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_150 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rt), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_151, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_153 = CAST(16, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cond_157 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_149, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_158 = MUL(cast_st64_148, cond_157);
	RzILOpPure *op_MUL_159 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_160 = SHIFTR0(DUP(Rss), op_MUL_159);
	RzILOpPure *op_AND_161 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_160, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_162 = CAST(32, MSB(op_AND_161), op_AND_161);
	RzILOpPure *cast_st64_163 = CAST(64, MSB(cast_st32_162), cast_st32_162);
	RzILOpPure *cast_st32_164 = CAST(32, MSB(cast_st64_163), cast_st64_163);
	RzILOpPure *cast_st64_165 = CAST(64, MSB(cast_st32_164), cast_st32_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rt), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *cond_175 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_176 = MUL(cast_st64_165, cond_175);
	RzILOpPure *op_SUB_177 = SUB(op_MUL_158, op_MUL_176);
	RzILOpPure *op_ADD_178 = LET("const_pos0x4000", const_pos0x4000, ADD(op_SUB_177, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_179 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_178, VARLP("const_pos15")));
	RzILOpPure *op_LT_180 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_179, VARLP("const_pos0")));
	RzILOpPure *op_SUB_181 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *op_NEG_183 = NEG(op_LSHIFT_182);
	RzILOpPure *op_SUB_184 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_185 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_184));
	RzILOpPure *op_SUB_186 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_185, VARLP("const_pos1")));
	RzILOpPure *cond_187 = ITE(op_LT_180, op_NEG_183, op_SUB_186);
	RzILOpPure *cond_189 = ITE(op_EQ_83, op_RSHIFT_122, cond_187);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(cast_st16_12, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(cast_st16_29, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_15, seq_32);
	RzILOpEffect *c_call_39 = HEX_SEXTRACT64(op_RSHIFT_38, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_33, seq_41);
	RzILOpEffect *c_call_56 = HEX_SEXTRACT64(cast_st16_55, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_42, seq_58);
	RzILOpEffect *c_call_74 = HEX_SEXTRACT64(cast_st16_73, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(2, seq_59, seq_76);
	RzILOpEffect *c_call_96 = HEX_SEXTRACT64(cast_st16_95, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_77, seq_98);
	RzILOpEffect *c_call_114 = HEX_SEXTRACT64(cast_st16_113, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_99, seq_116);
	RzILOpEffect *c_call_123 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_123, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *seq_126 = SEQN(2, seq_117, seq_125);
	RzILOpEffect *c_call_127 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_128 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_129 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_128);
	RzILOpEffect *seq_130 = SEQN(2, seq_126, seq_129);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_130, seq_133);
	RzILOpEffect *c_call_135 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp8"), VARL("h_tmp9"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp10", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *op_ASSIGN_140 = SETG(usr_assoc_tmp, cond_139);
	RzILOpEffect *seq_141 = SEQN(2, seq_138, op_ASSIGN_140);
	RzILOpEffect *c_call_154 = HEX_SEXTRACT64(cast_st16_153, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp11", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_171 = HEX_SEXTRACT64(cast_st16_170, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_172 = SETL("h_tmp12", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_173 = SEQN(2, c_call_171, op_ASSIGN_hybrid_tmp_172);
	RzILOpEffect *seq_174 = SEQN(2, seq_156, seq_173);
	RzILOpEffect *seq_188 = SEQN(2, seq_174, seq_141);
	RzILOpEffect *op_ASSIGN_190 = SETG(Rd_assoc_tmp, cond_189);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_190, seq_188);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_cmpyr_whc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rss_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rss = VARG(Rss_assoc);
	RzILOpPure *const_pos0x0ffffffffLL = UN(64, 0xffffffff);
	RzILOpPure *const_pos16 = UN(32, 0x10);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos0xffff = UN(32, 0xffff);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: st64 h_tmp1;
	RzILOpPure *const_pos0x4000 = UN(32, 0x4000);
	RzILOpPure *const_pos15 = UN(32, 0xf);
	// Declare: ut32 h_tmp2;
	// Declare: st64 h_tmp3;
	// Declare: st64 h_tmp4;
	// Declare: st64 h_tmp5;
	// Declare: st64 h_tmp6;
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp7;
	// Declare: ut32 h_tmp8;
	// Declare: ut32 h_tmp9;
	// Declare: ut64 h_tmp10;
	// Declare: st64 h_tmp11;
	// Declare: st64 h_tmp12;
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
	RzILOpPure *cond_16 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_8, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_17 = MUL(cast_st64_7, cond_16);
	RzILOpPure *op_MUL_18 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_19 = SHIFTR0(DUP(Rss), op_MUL_18);
	RzILOpPure *op_AND_20 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_19, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_21 = CAST(32, MSB(op_AND_20), op_AND_20);
	RzILOpPure *cast_st64_22 = CAST(64, MSB(cast_st32_21), cast_st32_21);
	RzILOpPure *cast_st32_23 = CAST(32, MSB(cast_st64_22), cast_st64_22);
	RzILOpPure *cast_st64_24 = CAST(64, MSB(cast_st32_23), cast_st32_23);
	RzILOpPure *op_NE_25 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_26 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_27 = SHIFTR0(DUP(Rt), op_MUL_26);
	RzILOpPure *op_AND_28 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_27, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_29 = CAST(16, MSB(op_AND_28), op_AND_28);
	RzILOpPure *cond_34 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_25, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_35 = MUL(cast_st64_24, cond_34);
	RzILOpPure *op_ADD_36 = ADD(op_MUL_17, op_MUL_35);
	RzILOpPure *op_ADD_37 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_36, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_38 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_37, VARLP("const_pos15")));
	RzILOpPure *cond_43 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp2"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_44 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_45 = SHIFTR0(DUP(Rss), op_MUL_44);
	RzILOpPure *op_AND_46 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_45, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_47 = CAST(32, MSB(op_AND_46), op_AND_46);
	RzILOpPure *cast_st64_48 = CAST(64, MSB(cast_st32_47), cast_st32_47);
	RzILOpPure *cast_st32_49 = CAST(32, MSB(cast_st64_48), cast_st64_48);
	RzILOpPure *cast_st64_50 = CAST(32, IL_FALSE, cast_st32_49);
	RzILOpPure *op_NE_51 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_52 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_53 = SHIFTR0(DUP(Rt), op_MUL_52);
	RzILOpPure *op_AND_54 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_53, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_55 = CAST(16, MSB(op_AND_54), op_AND_54);
	RzILOpPure *cond_60 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_51, VARL("h_tmp3"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_61 = MUL(cast_st64_50, cond_60);
	RzILOpPure *op_MUL_62 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_63 = SHIFTR0(DUP(Rss), op_MUL_62);
	RzILOpPure *op_AND_64 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_63, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_65 = CAST(32, MSB(op_AND_64), op_AND_64);
	RzILOpPure *cast_st64_66 = CAST(64, MSB(cast_st32_65), cast_st32_65);
	RzILOpPure *cast_st32_67 = CAST(32, MSB(cast_st64_66), cast_st64_66);
	RzILOpPure *cast_st64_68 = CAST(64, MSB(cast_st32_67), cast_st32_67);
	RzILOpPure *op_NE_69 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_70 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_71 = SHIFTR0(DUP(Rt), op_MUL_70);
	RzILOpPure *op_AND_72 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_71, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_73 = CAST(16, MSB(op_AND_72), op_AND_72);
	RzILOpPure *cond_78 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_69, VARL("h_tmp4"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_79 = MUL(cast_st64_68, cond_78);
	RzILOpPure *op_ADD_80 = ADD(op_MUL_61, op_MUL_79);
	RzILOpPure *op_ADD_81 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_80, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_82 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_81, VARLP("const_pos15")));
	RzILOpPure *op_EQ_83 = EQ(cond_43, op_RSHIFT_82);
	RzILOpPure *op_MUL_84 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_85 = SHIFTR0(DUP(Rss), op_MUL_84);
	RzILOpPure *op_AND_86 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_85, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_87 = CAST(32, MSB(op_AND_86), op_AND_86);
	RzILOpPure *cast_st64_88 = CAST(64, MSB(cast_st32_87), cast_st32_87);
	RzILOpPure *cast_st32_89 = CAST(32, MSB(cast_st64_88), cast_st64_88);
	RzILOpPure *cast_st64_90 = CAST(32, IL_FALSE, cast_st32_89);
	RzILOpPure *op_NE_91 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_92 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_93 = SHIFTR0(DUP(Rt), op_MUL_92);
	RzILOpPure *op_AND_94 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_93, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_95 = CAST(16, MSB(op_AND_94), op_AND_94);
	RzILOpPure *cond_100 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_91, VARL("h_tmp5"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_101 = MUL(cast_st64_90, cond_100);
	RzILOpPure *op_MUL_102 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_103 = SHIFTR0(DUP(Rss), op_MUL_102);
	RzILOpPure *op_AND_104 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_103, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_105 = CAST(32, MSB(op_AND_104), op_AND_104);
	RzILOpPure *cast_st64_106 = CAST(64, MSB(cast_st32_105), cast_st32_105);
	RzILOpPure *cast_st32_107 = CAST(32, MSB(cast_st64_106), cast_st64_106);
	RzILOpPure *cast_st64_108 = CAST(64, MSB(cast_st32_107), cast_st32_107);
	RzILOpPure *op_NE_109 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_110 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_111 = SHIFTR0(DUP(Rt), op_MUL_110);
	RzILOpPure *op_AND_112 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_111, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_113 = CAST(16, MSB(op_AND_112), op_AND_112);
	RzILOpPure *cond_118 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_109, VARL("h_tmp6"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_119 = MUL(cast_st64_108, cond_118);
	RzILOpPure *op_ADD_120 = ADD(op_MUL_101, op_MUL_119);
	RzILOpPure *op_ADD_121 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_120, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_122 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_121, VARLP("const_pos15")));
	RzILOpPure *cond_139 = ITE(VARL("h_tmp7"), VARL("h_tmp10"), VARG(usr_assoc_tmp));
	RzILOpPure *op_MUL_142 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_143 = SHIFTR0(DUP(Rss), op_MUL_142);
	RzILOpPure *op_AND_144 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_143, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_145 = CAST(32, MSB(op_AND_144), op_AND_144);
	RzILOpPure *cast_st64_146 = CAST(64, MSB(cast_st32_145), cast_st32_145);
	RzILOpPure *cast_st32_147 = CAST(32, MSB(cast_st64_146), cast_st64_146);
	RzILOpPure *cast_st64_148 = CAST(32, IL_FALSE, cast_st32_147);
	RzILOpPure *op_NE_149 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_150 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_151 = SHIFTR0(DUP(Rt), op_MUL_150);
	RzILOpPure *op_AND_152 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_151, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_153 = CAST(16, MSB(op_AND_152), op_AND_152);
	RzILOpPure *cond_157 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_149, VARL("h_tmp11"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_158 = MUL(cast_st64_148, cond_157);
	RzILOpPure *op_MUL_159 = LET("const_pos1", const_pos1, LET("const_pos32", const_pos32, MUL(VARLP("const_pos1"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_160 = SHIFTR0(DUP(Rss), op_MUL_159);
	RzILOpPure *op_AND_161 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_160, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_162 = CAST(32, MSB(op_AND_161), op_AND_161);
	RzILOpPure *cast_st64_163 = CAST(64, MSB(cast_st32_162), cast_st32_162);
	RzILOpPure *cast_st32_164 = CAST(32, MSB(cast_st64_163), cast_st64_163);
	RzILOpPure *cast_st64_165 = CAST(64, MSB(cast_st32_164), cast_st32_164);
	RzILOpPure *op_NE_166 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_167 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_168 = SHIFTR0(DUP(Rt), op_MUL_167);
	RzILOpPure *op_AND_169 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_168, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_170 = CAST(16, MSB(op_AND_169), op_AND_169);
	RzILOpPure *cond_175 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_166, VARL("h_tmp12"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_176 = MUL(cast_st64_165, cond_175);
	RzILOpPure *op_ADD_177 = ADD(op_MUL_158, op_MUL_176);
	RzILOpPure *op_ADD_178 = LET("const_pos0x4000", const_pos0x4000, ADD(op_ADD_177, VARLP("const_pos0x4000")));
	RzILOpPure *op_RSHIFT_179 = LET("const_pos15", const_pos15, SHIFTR0(op_ADD_178, VARLP("const_pos15")));
	RzILOpPure *op_LT_180 = LET("const_pos0", const_pos0, ULT(op_RSHIFT_179, VARLP("const_pos0")));
	RzILOpPure *op_SUB_181 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_182 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_181));
	RzILOpPure *op_NEG_183 = NEG(op_LSHIFT_182);
	RzILOpPure *op_SUB_184 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_185 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_184));
	RzILOpPure *op_SUB_186 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_185, VARLP("const_pos1")));
	RzILOpPure *cond_187 = ITE(op_LT_180, op_NEG_183, op_SUB_186);
	RzILOpPure *cond_189 = ITE(op_EQ_83, op_RSHIFT_122, cond_187);

	// WRITE
	RzILOpEffect *c_call_13 = HEX_SEXTRACT64(cast_st16_12, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_14 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_15 = SEQN(2, c_call_13, op_ASSIGN_hybrid_tmp_14);
	RzILOpEffect *c_call_30 = HEX_SEXTRACT64(cast_st16_29, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_31 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_32 = SEQN(2, c_call_30, op_ASSIGN_hybrid_tmp_31);
	RzILOpEffect *seq_33 = SEQN(2, seq_15, seq_32);
	RzILOpEffect *c_call_39 = HEX_SEXTRACT64(op_RSHIFT_38, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_40 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_41 = SEQN(2, c_call_39, op_ASSIGN_hybrid_tmp_40);
	RzILOpEffect *seq_42 = SEQN(2, seq_33, seq_41);
	RzILOpEffect *c_call_56 = HEX_SEXTRACT64(cast_st16_55, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_57 = SETL("h_tmp3", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_58 = SEQN(2, c_call_56, op_ASSIGN_hybrid_tmp_57);
	RzILOpEffect *seq_59 = SEQN(2, seq_42, seq_58);
	RzILOpEffect *c_call_74 = HEX_SEXTRACT64(cast_st16_73, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_75 = SETL("h_tmp4", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_76 = SEQN(2, c_call_74, op_ASSIGN_hybrid_tmp_75);
	RzILOpEffect *seq_77 = SEQN(2, seq_59, seq_76);
	RzILOpEffect *c_call_96 = HEX_SEXTRACT64(cast_st16_95, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_97 = SETL("h_tmp5", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_98 = SEQN(2, c_call_96, op_ASSIGN_hybrid_tmp_97);
	RzILOpEffect *seq_99 = SEQN(2, seq_77, seq_98);
	RzILOpEffect *c_call_114 = HEX_SEXTRACT64(cast_st16_113, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_115 = SETL("h_tmp6", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_116 = SEQN(2, c_call_114, op_ASSIGN_hybrid_tmp_115);
	RzILOpEffect *seq_117 = SEQN(2, seq_99, seq_116);
	RzILOpEffect *c_call_123 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_124 = SETL("h_tmp7", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_125 = SEQN(2, c_call_123, op_ASSIGN_hybrid_tmp_124);
	RzILOpEffect *seq_126 = SEQN(2, seq_117, seq_125);
	RzILOpEffect *c_call_127 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_128 = SETL("h_tmp8", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_129 = SEQN(2, c_call_127, op_ASSIGN_hybrid_tmp_128);
	RzILOpEffect *seq_130 = SEQN(2, seq_126, seq_129);
	RzILOpEffect *c_call_131 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_132 = SETL("h_tmp9", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_133 = SEQN(2, c_call_131, op_ASSIGN_hybrid_tmp_132);
	RzILOpEffect *seq_134 = SEQN(2, seq_130, seq_133);
	RzILOpEffect *c_call_135 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp8"), VARL("h_tmp9"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_136 = SETL("h_tmp10", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_137 = SEQN(2, c_call_135, op_ASSIGN_hybrid_tmp_136);
	RzILOpEffect *seq_138 = SEQN(2, seq_134, seq_137);
	RzILOpEffect *op_ASSIGN_140 = SETG(usr_assoc_tmp, cond_139);
	RzILOpEffect *seq_141 = SEQN(2, seq_138, op_ASSIGN_140);
	RzILOpEffect *c_call_154 = HEX_SEXTRACT64(cast_st16_153, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_155 = SETL("h_tmp11", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_156 = SEQN(2, c_call_154, op_ASSIGN_hybrid_tmp_155);
	RzILOpEffect *c_call_171 = HEX_SEXTRACT64(cast_st16_170, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_172 = SETL("h_tmp12", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_173 = SEQN(2, c_call_171, op_ASSIGN_hybrid_tmp_172);
	RzILOpEffect *seq_174 = SEQN(2, seq_156, seq_173);
	RzILOpEffect *seq_188 = SEQN(2, seq_174, seq_141);
	RzILOpEffect *op_ASSIGN_190 = SETG(Rd_assoc_tmp, cond_189);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_190, seq_188);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
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
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_MUL_20 = MUL(cast_st64_17, cast_st64_19);
	RzILOpPure *op_RSHIFT_21 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_20, VARLP("const_pos31")));
	RzILOpPure *op_ADD_22 = ADD(cast_st64_15, op_RSHIFT_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_ADD_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzILOpPure *op_MUL_30 = MUL(cast_st64_27, cast_st64_29);
	RzILOpPure *op_RSHIFT_31 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_30, VARLP("const_pos31")));
	RzILOpPure *op_ADD_32 = ADD(cast_st64_25, op_RSHIFT_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_53 = CAST(32, IL_FALSE, cast_st32_52);
	RzILOpPure *cast_st32_54 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_MUL_58 = MUL(cast_st64_55, cast_st64_57);
	RzILOpPure *op_RSHIFT_59 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_58, VARLP("const_pos31")));
	RzILOpPure *op_ADD_60 = ADD(cast_st64_53, op_RSHIFT_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_ADD_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_ADD_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_ADD_9, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rx_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *U = UN(32, (ut32)ISA2IMM(hi, 'U'));

	// EXEC
	RzILOpPure *op_MUL_0 = LET("U", U, MUL(Rs, VARLP("U")));
	RzILOpPure *op_ADD_1 = LET("u", u, ADD(VARLP("u"), op_MUL_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = LET("u", u, MUL(Rs, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyri_addr_u2(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Ru_assoc = ISA2REG(hi, 'u', false);
	RzILOpPure *Ru = VARG(Ru_assoc);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));

	// EXEC
	RzILOpPure *op_MUL_0 = LET("u", u, MUL(Rs, VARLP("u")));
	RzILOpPure *op_ADD_1 = ADD(Ru, op_MUL_0);

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addi(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	RzILOpPure *u = UN(32, (ut32)ISA2IMM(hi, 'u'));
	const char *Rd_assoc_tmp = ISA2REG(hi, 'd', false);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);

	// EXEC
	RzILOpPure *op_MUL_0 = MUL(Rs, Rt);
	RzILOpPure *op_ADD_1 = LET("u", u, ADD(VARLP("u"), op_MUL_0));

	// WRITE
	RzILOpEffect *op_ASSIGN_2 = SETG(Rd_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_mpyrr_addr(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Ry_assoc_tmp = ISA2REG(hi, 'y', false);
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
	RzILOpEffect *op_ASSIGN_2 = SETG(Ry_assoc_tmp, op_ADD_1);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_nac_up_s1_sat(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
	const char *Rx_assoc = ISA2REG(hi, 'x', false);
	RzILOpPure *Rx = VARG(Rx_assoc);
	RzILOpPure *const_pos32 = UN(32, 0x20);
	RzILOpPure *const_pos0 = UN(32, 0x0);
	const char *Rs_assoc = ISA2REG(hi, 's', false);
	RzILOpPure *Rs = VARG(Rs_assoc);
	const char *Rt_assoc = ISA2REG(hi, 't', false);
	RzILOpPure *Rt = VARG(Rt_assoc);
	RzILOpPure *const_pos31 = UN(64, 0x1f);
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	const char *usr_assoc_tmp = ALIAS2REG(HEX_REG_ALIAS_USR, true);
	// Declare: ut32 h_tmp1;
	// Declare: ut32 h_tmp2;
	// Declare: ut32 h_tmp3;
	RzILOpPure *const_pos1 = UN(32, 0x1);
	// Declare: ut64 h_tmp4;
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
	RzILOpPure *cond_13 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_0, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *cast_st32_14 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_15 = CAST(64, MSB(cast_st32_14), cast_st32_14);
	RzILOpPure *cast_st32_16 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_17 = CAST(64, MSB(cast_st32_16), cast_st32_16);
	RzILOpPure *cast_st32_18 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_19 = CAST(64, MSB(cast_st32_18), cast_st32_18);
	RzILOpPure *op_MUL_20 = MUL(cast_st64_17, cast_st64_19);
	RzILOpPure *op_RSHIFT_21 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_20, VARLP("const_pos31")));
	RzILOpPure *op_SUB_22 = SUB(cast_st64_15, op_RSHIFT_21);
	RzILOpPure *op_EQ_23 = EQ(cond_13, op_SUB_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *cast_st32_26 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_27 = CAST(64, MSB(cast_st32_26), cast_st32_26);
	RzILOpPure *cast_st32_28 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_29 = CAST(64, MSB(cast_st32_28), cast_st32_28);
	RzILOpPure *op_MUL_30 = MUL(cast_st64_27, cast_st64_29);
	RzILOpPure *op_RSHIFT_31 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_30, VARLP("const_pos31")));
	RzILOpPure *op_SUB_32 = SUB(cast_st64_25, op_RSHIFT_31);
	RzILOpPure *cond_49 = ITE(VARL("h_tmp1"), VARL("h_tmp4"), VARG(usr_assoc_tmp));
	RzILOpPure *cast_st32_52 = CAST(32, MSB(DUP(Rx)), DUP(Rx));
	RzILOpPure *cast_st64_53 = CAST(32, IL_FALSE, cast_st32_52);
	RzILOpPure *cast_st32_54 = CAST(32, MSB(DUP(Rs)), DUP(Rs));
	RzILOpPure *cast_st64_55 = CAST(64, MSB(cast_st32_54), cast_st32_54);
	RzILOpPure *cast_st32_56 = CAST(32, MSB(DUP(Rt)), DUP(Rt));
	RzILOpPure *cast_st64_57 = CAST(64, MSB(cast_st32_56), cast_st32_56);
	RzILOpPure *op_MUL_58 = MUL(cast_st64_55, cast_st64_57);
	RzILOpPure *op_RSHIFT_59 = LET("const_pos31", const_pos31, SHIFTR0(op_MUL_58, VARLP("const_pos31")));
	RzILOpPure *op_SUB_60 = SUB(cast_st64_53, op_RSHIFT_59);
	RzILOpPure *op_LT_61 = LET("const_pos0", const_pos0, ULT(op_SUB_60, VARLP("const_pos0")));
	RzILOpPure *op_SUB_62 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_63 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_62));
	RzILOpPure *op_NEG_64 = NEG(op_LSHIFT_63);
	RzILOpPure *op_SUB_65 = LET("const_pos32", const_pos32, LET("const_pos1", const_pos1, SUB(VARLP("const_pos32"), VARLP("const_pos1"))));
	RzILOpPure *op_LSHIFT_66 = LET("const_pos1LL", const_pos1LL, SHIFTL0(VARLP("const_pos1LL"), op_SUB_65));
	RzILOpPure *op_SUB_67 = LET("const_pos1", const_pos1, SUB(op_LSHIFT_66, VARLP("const_pos1")));
	RzILOpPure *cond_68 = ITE(op_LT_61, op_NEG_64, op_SUB_67);
	RzILOpPure *cond_69 = ITE(op_EQ_23, op_SUB_32, cond_68);

	// WRITE
	RzILOpEffect *c_call_10 = HEX_SEXTRACT64(op_SUB_9, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos32", const_pos32, VARLP("const_pos32")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_11 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_12 = SEQN(2, c_call_10, op_ASSIGN_hybrid_tmp_11);
	RzILOpEffect *c_call_33 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_34 = SETL("h_tmp1", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_35 = SEQN(2, c_call_33, op_ASSIGN_hybrid_tmp_34);
	RzILOpEffect *seq_36 = SEQN(2, seq_12, seq_35);
	RzILOpEffect *c_call_37 = HEX_REGFIELD(HEX_RF_OFFSET, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_38 = SETL("h_tmp2", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_39 = SEQN(2, c_call_37, op_ASSIGN_hybrid_tmp_38);
	RzILOpEffect *seq_40 = SEQN(2, seq_36, seq_39);
	RzILOpEffect *c_call_41 = HEX_REGFIELD(HEX_RF_WIDTH, HEX_REG_FIELD_USR_OVF);
	RzILOpEffect *op_ASSIGN_hybrid_tmp_42 = SETL("h_tmp3", UNSIGNED(32, VARL("ret_val")));
	RzILOpEffect *seq_43 = SEQN(2, c_call_41, op_ASSIGN_hybrid_tmp_42);
	RzILOpEffect *seq_44 = SEQN(2, seq_40, seq_43);
	RzILOpEffect *c_call_45 = HEX_DEPOSIT64(VARG(usr_assoc_tmp), VARL("h_tmp2"), VARL("h_tmp3"), LET("const_pos1", const_pos1, VARLP("const_pos1")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_46 = SETL("h_tmp4", UNSIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_47 = SEQN(2, c_call_45, op_ASSIGN_hybrid_tmp_46);
	RzILOpEffect *seq_48 = SEQN(2, seq_44, seq_47);
	RzILOpEffect *op_ASSIGN_50 = SETG(usr_assoc_tmp, cond_49);
	RzILOpEffect *seq_51 = SEQN(2, seq_48, op_ASSIGN_50);
	RzILOpEffect *op_ASSIGN_70 = SETG(Rx_assoc_tmp, cond_69);
	RzILOpEffect *instruction_sequence = SEQN(2, op_ASSIGN_70, seq_51);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_2 = SETG(Rx_assoc_tmp, orop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_or_xor(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_OR_1 = SETG(Rx_assoc_tmp, orop_XOR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_OR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_pmpyw(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_pmpyw_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vpmpyh_acc(HexInsnPktBundle *bundle) {
	NOT_IMPLEMENTED;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, IL_FALSE, op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_17, VARLP("const_pos0")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);
	RzILOpPure *addop_ADD_39Rxx = ADD(op_ADD_39, Rxx);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_ADD_40 = SETG(Rxx_assoc_tmp, addop_ADD_39Rxx);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_ADD_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_acc_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, IL_FALSE, op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_17, VARLP("const_pos1")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_37, VARLP("const_pos1")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);
	RzILOpPure *addop_ADD_39Rxx = ADD(op_ADD_39, Rxx);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_ADD_40 = SETG(Rxx_assoc_tmp, addop_ADD_39Rxx);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_ADD_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(op_MUL_16), op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_17, VARLP("const_pos0")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc_tmp, op_ADD_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyeh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(op_MUL_16), op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_17, VARLP("const_pos1")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos0", const_pos0, LET("const_pos16", const_pos16, MUL(VARLP("const_pos0"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_37, VARLP("const_pos1")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc_tmp, op_ADD_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, IL_FALSE, op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_17, VARLP("const_pos0")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);
	RzILOpPure *addop_ADD_39Rxx = ADD(op_ADD_39, Rxx);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_ADD_40 = SETG(Rxx_assoc_tmp, addop_ADD_39Rxx);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_ADD_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_acc_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, IL_FALSE, op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_17, VARLP("const_pos1")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_37, VARLP("const_pos1")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);
	RzILOpPure *addop_ADD_39Rxx = ADD(op_ADD_39, Rxx);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_ADD_40 = SETG(Rxx_assoc_tmp, addop_ADD_39Rxx);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_ADD_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s0(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(op_MUL_16), op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_17, VARLP("const_pos0")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos0", const_pos0, SHIFTL0(cast_st64_37, VARLP("const_pos0")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc_tmp, op_ADD_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_vrmpyoh_s1(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rdd_assoc_tmp = ISA2REG(hi, 'd', false);
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
	// Declare: st64 h_tmp0;
	RzILOpPure *const_pos0LL = SN(64, 0x0);
	// Declare: st64 h_tmp1;

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
	RzILOpPure *cond_15 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_7, VARL("h_tmp0"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_16 = MUL(cast_st64_6, cond_15);
	RzILOpPure *cast_st64_17 = CAST(64, MSB(op_MUL_16), op_MUL_16);
	RzILOpPure *op_LSHIFT_18 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_17, VARLP("const_pos1")));
	RzILOpPure *op_MUL_19 = LET("const_pos0", const_pos0, LET("const_pos32", const_pos32, MUL(VARLP("const_pos0"), VARLP("const_pos32"))));
	RzILOpPure *op_RSHIFT_20 = SHIFTR0(DUP(Rss), op_MUL_19);
	RzILOpPure *op_AND_21 = LET("const_pos0x0ffffffffLL", const_pos0x0ffffffffLL, LOGAND(op_RSHIFT_20, VARLP("const_pos0x0ffffffffLL")));
	RzILOpPure *cast_st32_22 = CAST(32, MSB(op_AND_21), op_AND_21);
	RzILOpPure *cast_st64_23 = CAST(64, MSB(cast_st32_22), cast_st32_22);
	RzILOpPure *cast_st32_24 = CAST(32, MSB(cast_st64_23), cast_st64_23);
	RzILOpPure *cast_st64_25 = CAST(64, MSB(cast_st32_24), cast_st32_24);
	RzILOpPure *op_NE_26 = LET("const_pos16", const_pos16, LET("const_pos0", const_pos0, INV(EQ(VARLP("const_pos16"), VARLP("const_pos0")))));
	RzILOpPure *op_MUL_27 = LET("const_pos1", const_pos1, LET("const_pos16", const_pos16, MUL(VARLP("const_pos1"), VARLP("const_pos16"))));
	RzILOpPure *op_RSHIFT_28 = SHIFTR0(DUP(Rtt), op_MUL_27);
	RzILOpPure *op_AND_29 = LET("const_pos0xffff", const_pos0xffff, LOGAND(op_RSHIFT_28, VARLP("const_pos0xffff")));
	RzILOpPure *cast_st16_30 = CAST(16, MSB(op_AND_29), op_AND_29);
	RzILOpPure *cond_35 = LET("const_pos0LL", const_pos0LL, ITE(op_NE_26, VARL("h_tmp1"), VARLP("const_pos0LL")));
	RzILOpPure *op_MUL_36 = MUL(cast_st64_25, cond_35);
	RzILOpPure *cast_st64_37 = CAST(64, MSB(op_MUL_36), op_MUL_36);
	RzILOpPure *op_LSHIFT_38 = LET("const_pos1", const_pos1, SHIFTL0(cast_st64_37, VARLP("const_pos1")));
	RzILOpPure *op_ADD_39 = ADD(op_LSHIFT_18, op_LSHIFT_38);

	// WRITE
	RzILOpEffect *c_call_12 = HEX_SEXTRACT64(cast_st16_11, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_13 = SETL("h_tmp0", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_14 = SEQN(2, c_call_12, op_ASSIGN_hybrid_tmp_13);
	RzILOpEffect *c_call_31 = HEX_SEXTRACT64(cast_st16_30, LET("const_pos0", const_pos0, VARLP("const_pos0")), LET("const_pos16", const_pos16, VARLP("const_pos16")));
	RzILOpEffect *op_ASSIGN_hybrid_tmp_32 = SETL("h_tmp1", SIGNED(64, VARL("ret_val")));
	RzILOpEffect *seq_33 = SEQN(2, c_call_31, op_ASSIGN_hybrid_tmp_32);
	RzILOpEffect *seq_34 = SEQN(2, seq_14, seq_33);
	RzILOpEffect *op_ASSIGN_40 = SETG(Rdd_assoc_tmp, op_ADD_39);
	RzILOpEffect *seq_41 = SEQN(2, seq_34, op_ASSIGN_40);
	RzILOpEffect *instruction_sequence = SEQN(1, seq_41);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_and(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc_tmp, xorop_AND_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_andn(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_2 = SETG(Rx_assoc_tmp, xorop_AND_1Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_2);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_or(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rx_assoc_tmp, xorop_OR_0Rx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

RzILOpEffect *hex_il_op_m4_xor_xacc(HexInsnPktBundle *bundle) {
	const HexInsn *hi = bundle->insn;
	// READ
	const char *Rxx_assoc_tmp = ISA2REG(hi, 'x', false);
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
	RzILOpEffect *op_ASSIGN_XOR_1 = SETG(Rxx_assoc_tmp, xorop_XOR_0Rxx);
	RzILOpEffect *instruction_sequence = SEQN(1, op_ASSIGN_XOR_1);

	return instruction_sequence;
}

#include <rz_il/rz_il_opbuilder_end.h>