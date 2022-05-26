// SPDX-FileCopyrightText: 2022 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

#include "ppc_il.h"
#include "ppc_analysis.h"
#include <rz_il/rz_il_opcodes.h>
#include <rz_util/rz_assert.h>
#include <capstone.h>
#include <rz_il/rz_il_opbuilder_begin.h>

static RzILOpEffect *load_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;
	// READ
	const char *rT = cs_reg_name(handle, INSOP(0).reg);
	const char *rA = cs_reg_name(handle, INSOP(1).mem.base);
	const char *rB = cs_reg_name(handle, INSOP(2).reg);
	st64 d = INSOP(1).mem.disp; // RA = base ; D = Disposition
	st64 sI = INSOP(1).imm; // liX instructions (alias for addX).
	bool update_ra = ppc_updates_ra_with_ea(id); // Save ea in RA?
	ut32 mem_acc_size = ppc_get_mem_acc_size(id);
	RzILOpPure *base;
	RzILOpPure *disp;
	RzILOpPure *ea;
	RzILOpPure *into_rt;

	// How to read instruction ids:
	// Letter			Meaning
	// L 				Load
	// B/H/W/D/F 		Byte, Half Word, Word, Double Word, Float
	// Z/A/B			Zero extend, Algebraic, Byte reversal
	// U/R				Update (store EA in RA), Reserve indexed
	// X				X Form instruction (uses RB instead of immediate)
	// CIX				Caching Inhibited Indexed
	// V				Vector indexed

	// EXEC
	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_LI: // RT = sI
		into_rt = EXTEND(PPC_ARCH_BITS, IMM_SN(16, sI));
		update_ra = false;
		break;
	case PPC_INS_LIS: // RT = SI << 16
		into_rt = EXTEND(PPC_ARCH_BITS, APPEND(IMM_SN(16, sI), U16(0)));
		update_ra = false;
		break;
	case PPC_INS_LA: // RT = EA
		base = IFREG0(rA);
		disp = EXTEND(PPC_ARCH_BITS, IMM_SN(16, d));
		ea = ADD(base, disp);
		into_rt = ea;
		update_ra = false;
		break;
	case PPC_INS_LBZ:
	case PPC_INS_LBZX:
	case PPC_INS_LBZU:
	case PPC_INS_LBZUX:
	case PPC_INS_LHZ:
	case PPC_INS_LHZX:
	case PPC_INS_LHZU:
	case PPC_INS_LHZUX:
	case PPC_INS_LWZ:
	case PPC_INS_LWZU:
	case PPC_INS_LWZUX:
	case PPC_INS_LWZX:
	case PPC_INS_LD:
	case PPC_INS_LDX:
	case PPC_INS_LDU:
	case PPC_INS_LDUX:
	case PPC_INS_LHA:
	case PPC_INS_LHAX:
	case PPC_INS_LHAU:
	case PPC_INS_LHAUX:
	case PPC_INS_LWA:
	case PPC_INS_LWAX:
	case PPC_INS_LWAUX:
		base = IFREG0(rA); // Not all instructions use the plain value 0 if rA = 0. But we ignore this here.
		if (ppc_is_x_form(id)) {
			disp = VARG(rB);
		} else {
			RzILOpPure *imm = (mem_acc_size == 64 || id == PPC_INS_LWA) ? APPEND(IMM_SN(16, d), UN(2, 0)) : IMM_SN(16, d);
			disp = EXTEND(PPC_ARCH_BITS, imm);
		}
		ea = ADD(base, disp);
		RzILOpPure *loadw = LOADW(mem_acc_size, VARLP("ea"));
		if (ppc_is_algebraic(id)) {
			into_rt = (mem_acc_size == 64) ? VARLP("loadw") : EXTEND(PPC_ARCH_BITS, VARLP("loadw"));
		} else {
			into_rt = (mem_acc_size == 64) ? VARLP("loadw") : EXTZ(VARLP("loadw"));
		}
		into_rt = LET("ea", ea, LET("loadw", loadw, into_rt));
		break;
	// Byte reverse and reserved indexed
	case PPC_INS_LHBRX:
	case PPC_INS_LDBRX:
	case PPC_INS_LWARX:
	case PPC_INS_LDARX:
		NOT_IMPLEMENTED;
	// Floats
	case PPC_INS_LFD:
	case PPC_INS_LFDX:
	case PPC_INS_LFDU:
	case PPC_INS_LFDUX:
	case PPC_INS_LFIWAX:
	case PPC_INS_LFIWZX:
	case PPC_INS_LFS:
	case PPC_INS_LFSX:
	case PPC_INS_LFSU:
	case PPC_INS_LFSUX:
		NOT_IMPLEMENTED;
	// Caching Inhibited Indexed
	case PPC_INS_LBZCIX:
	case PPC_INS_LHZCIX:
	case PPC_INS_LWZCIX:
	case PPC_INS_LDCIX:
		NOT_IMPLEMENTED;
	// Vector
	case PPC_INS_LVEBX:
	case PPC_INS_LVEHX:
	case PPC_INS_LVEWX:
	case PPC_INS_LVSL:
	case PPC_INS_LVSR:
	case PPC_INS_LVX:
	case PPC_INS_LVXL:
		NOT_IMPLEMENTED;
	// String word
	case PPC_INS_LSWI:
		NOT_IMPLEMENTED;
	// VSX Scalar
	case PPC_INS_LXSDX:
	// VSX Vector
	case PPC_INS_LXVD2X:
	case PPC_INS_LXVDSX:
	case PPC_INS_LXVW4X:
		NOT_IMPLEMENTED;
	}

	rz_return_val_if_fail(into_rt, NULL);
	RzILOpEffect *res = SETG(rT, into_rt);
	RzILOpEffect *update = update_ra ? SETG(rA, DUP(ea)) : NOP;
	return SEQ2(res, update);
}

static RzILOpEffect *store_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;

	// How to read instruction ids:
	// Letter			Meaning
	// ST 				Store
	// B/H/W/D/F 		Byte, Half Word, Word, Double Word, Float
	// BR				Byte reversal
	// U/X				Update (store EA in RA), X Form instruction (uses RB instead of immediate)
	// MW/CIX			Multiple word, Caching Inhibited Indexed
	// V				Vector

	// READ
	const char *rS = cs_reg_name(handle, INSOP(0).reg);
	const char *rA = cs_reg_name(handle, INSOP(1).mem.base);
	const char *rB = cs_reg_name(handle, INSOP(2).reg);
	st64 d = INSOP(1).mem.disp; // RA = base ; D = Disposition
	bool update_ra = ppc_updates_ra_with_ea(id); // Save ea in RA?
	ut32 mem_acc_size = ppc_get_mem_acc_size(id);
	RzILOpPure *base;
	RzILOpPure *disp;
	RzILOpPure *ea;
	RzILOpEffect *store;

	// EXEC
	switch (id) {
	case PPC_INS_STB:
	case PPC_INS_STH:
	case PPC_INS_STW:
	case PPC_INS_STD:
	case PPC_INS_STBX:
	case PPC_INS_STHX:
	case PPC_INS_STWX:
	case PPC_INS_STDX:
	case PPC_INS_STBU:
	case PPC_INS_STDU:
	case PPC_INS_STHU:
	case PPC_INS_STWU:
	case PPC_INS_STBUX:
	case PPC_INS_STHUX:
	case PPC_INS_STWUX:
	case PPC_INS_STDUX:
		base = IFREG0(rA); // Not all instructions use the plain value 0 if (rA) == 0. But we ignore this here.
		if (ppc_is_x_form(id)) {
			disp = VARG(rB);
		} else {
			RzILOpPure *imm = (mem_acc_size == 64) ? APPEND(S16(d), UN(2, 0)) : S16(d);
			disp = EXTEND(PPC_ARCH_BITS, imm);
		}
		ea = ADD(base, disp);
		store = STOREW(ea, CAST(mem_acc_size, IL_FALSE, VARG(rS)));
		break;
	// Float
	case PPC_INS_STFD:
	case PPC_INS_STFDU:
	case PPC_INS_STFDUX:
	case PPC_INS_STFDX:
	case PPC_INS_STFIWX:
	case PPC_INS_STFS:
	case PPC_INS_STFSU:
	case PPC_INS_STFSUX:
	case PPC_INS_STFSX:
		NOT_IMPLEMENTED;
	// Caching Inhibited Indexed
	case PPC_INS_STBCIX:
	case PPC_INS_STHCIX:
	case PPC_INS_STWCIX:
	case PPC_INS_STDCIX:
		NOT_IMPLEMENTED;
	case PPC_INS_STDCX:
	case PPC_INS_STWCX:
		NOT_IMPLEMENTED;
	// Byte reverse and reserved indexed
	case PPC_INS_STHBRX:
	case PPC_INS_STWBRX:
	case PPC_INS_STDBRX:
		NOT_IMPLEMENTED;
	// Multiple word
	case PPC_INS_STMW:
		NOT_IMPLEMENTED;
	// String word
	case PPC_INS_STSWI:
		NOT_IMPLEMENTED;
	// Vector
	case PPC_INS_STVEBX:
	case PPC_INS_STVEHX:
	case PPC_INS_STVEWX:
	case PPC_INS_STVX:
	case PPC_INS_STVXL:
		NOT_IMPLEMENTED;
	// VSX Vector
	case PPC_INS_STXSDX:
	case PPC_INS_STXVD2X:
	case PPC_INS_STXVW4X:
		NOT_IMPLEMENTED;
	}

	// WRITE
	rz_return_val_if_fail(ea, NULL);
	RzILOpEffect *update = update_ra ? SETG(rA, DUP(ea)) : NOP;
	return SEQ2(store, update);
}

/**
 * NOTE: Instructions which set the 'OV' bit are not yet supported by capstone.
 */
static RzILOpEffect *add_sub_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, bool add, const cs_mode mode) {
	ut32 id = insn->id;
	rz_return_val_if_fail(handle && insn, NOP);

	// READ
	const char *rT = cs_reg_name(handle, INSOP(0).reg);
	const char *rA = cs_reg_name(handle, INSOP(1).reg);
	const char *rB = cs_reg_name(handle, INSOP(2).reg);
	st64 sI = INSOP(2).imm;

	bool set_ca = (id != PPC_INS_ADD && id != PPC_INS_ADDI && id != PPC_INS_ADDIS && id != PPC_INS_SUBF);
	bool cr0 = insn->detail->ppc.update_cr0;

	RzILOpPure *op0;
	RzILOpPure *op1;
	RzILOpPure *op2;
	RzILOpPure *res;

	// How to read instruction ids:
	// Letter		Meaning
	// ADD/SUBF		Add, Subtract from
	// I/M/Z 		Immediate, Minus one, Zero extend,
	// C/E/S		Carry (sets it), Extends (adds carry it), Shift immediate

	// EXEC
	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_ADD:
	case PPC_INS_ADDC:
	case PPC_INS_SUBF:
	case PPC_INS_SUBFC:
		op0 = add ? VARG(rA) : ADD(LOGNOT(VARG(rA)), UA(1));
		op1 = VARG(rB);
		res = ADD(op0, op1);
		break;
	case PPC_INS_ADDE:
	case PPC_INS_SUBFE:
		op0 = add ? VARG(rA) : LOGNOT(VARG(rA));
		op2 = VARG(rB);
		op1 = ADD(op2, BOOL_TO_BV(VARG("ca"), PPC_ARCH_BITS));
		res = ADD(op0, op1);
		break;
	case PPC_INS_ADDI:
	case PPC_INS_ADDIC:
	case PPC_INS_ADDIS:
	case PPC_INS_SUBFIC:
		op0 = add ? ((id == PPC_INS_ADDIS) ? IFREG0(rA) : VARG(rA)) : ADD(LOGNOT(VARG(rA)), UA(1));
		if (id == PPC_INS_ADDIS) {
			op1 = EXTEND(PPC_ARCH_BITS, APPEND(IMM_SN(16, sI), U16(0))); // Shift immediate << 16
		} else {
			op1 = EXTEND(PPC_ARCH_BITS, IMM_SN(16, sI));
		}
		res = ADD(op0, op1);
		break;
	case PPC_INS_ADDME:
	case PPC_INS_ADDZE:
	case PPC_INS_SUBFME:
	case PPC_INS_SUBFZE:
		op0 = add ? VARG(rA) : LOGNOT(VARG(rA));
		if (id == PPC_INS_ADDME || id == PPC_INS_SUBFME) {
			op1 = ADD(BOOL_TO_BV(VARG("ca"), PPC_ARCH_BITS), SA(-1)); // Minus 1
		} else {
			op1 = BOOL_TO_BV(VARG("ca"), PPC_ARCH_BITS);
		}
		res = ADD(op0, op1);
		break;
	case PPC_INS_NEG:
		op0 = LOGNOT(VARG(rA));
		op1 = UA(1);
		res = ADD(op0, op1);
	}
	rz_return_val_if_fail(op0 && op1, NULL);

	// WRITE
	RzILOpEffect *set;
	RzILOpEffect *set_carry = set_ca ? set_carry_add_sub(DUP(op0), DUP(op1), mode, true) : NOP;

	// Instructions which set the OV bit are not supported in capstone.
	// See: https://github.com/capstone-engine/capstone/issues/944
	RzILOpEffect *overflow = NOP;
	RzILOpEffect *update_cr0 = cr0 ? cmp_set_cr(res, UA(0), true, "cr0", mode) : NOP;
	set = SETG(rT, res);
	return SEQ4(set, set_carry, overflow, update_cr0);
}

static RzILOpEffect *compare_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;
	const char *crX;
	const char *rA;
	const char *rB;
	st64 imm;

	RzILOpPure *left;
	RzILOpPure *right;

	bool signed_cmp = false;

	// READ
	// cr0 reg is not explicitly stored in the operands list.
	if (OP_CNT == 2) {
		crX = "cr0";
		rA = cs_reg_name(handle, INSOP(0).reg);
		rB = cs_reg_name(handle, INSOP(1).reg);
		imm = INSOP(1).imm;
	} else {
		crX = cs_reg_name(handle, INSOP(0).imm);
		rA = cs_reg_name(handle, INSOP(1).reg);
		rB = cs_reg_name(handle, INSOP(2).reg);
		imm = INSOP(2).imm;
	}

	// How to read instruction ids:
	// Letter			Meaning
	// CMP				Compare
	// B/H/W/D	 		Byte, Half Word, Word, Double Word
	// I/L				Immediate, Logical (unsigned compare)

	// EXEC
	// Logical <=> unsigned comparisons ; Not logical <=> signed comparison.
	signed_cmp = (id == PPC_INS_CMPW || id == PPC_INS_CMPD || id == PPC_INS_CMPWI || id == PPC_INS_CMPDI);

	// Left operand is always RA
	if (id == PPC_INS_CMPW || id == PPC_INS_CMPWI || id == PPC_INS_CMPLW || id == PPC_INS_CMPLWI) {
		left = EXTS(CAST(32, IL_FALSE, VARG(rA)));
	} else {
		left = VARG(rA);
	}

	// Right operand differs between instructions.
	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_CMPW:
	case PPC_INS_CMPLW:
		right = EXTS(CAST(32, IL_FALSE, VARG(rB)));
		break;
	case PPC_INS_CMPD:
	case PPC_INS_CMPLD:
		right = VARG(rB);
		break;
	case PPC_INS_CMPWI:
	case PPC_INS_CMPLWI:
		right = (id == PPC_INS_CMPWI) ? EXTS(S16(imm)) : EXTZ(U16(imm));
		break;
	case PPC_INS_CMPDI:
	case PPC_INS_CMPLDI:
		right = (id == PPC_INS_CMPDI) ? EXTEND(64, S16(imm)) : APPEND(U48(0), U16(imm));
		break;
	}
	return cmp_set_cr(left, right, signed_cmp, crX, mode);
}

static RzILOpEffect *bitwise_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;
	// READ
	const char *rA = cs_reg_name(handle, INSOP(0).reg);
	const char *rS = cs_reg_name(handle, INSOP(1).reg);
	const char *rB = cs_reg_name(handle, INSOP(2).reg);
	st64 uI = INSOP(2).imm;
	bool cr0 = insn->detail->ppc.update_cr0;
	RzILOpPure *op0;
	RzILOpPure *op1;
	RzILOpPure *res;

	// How to read instruction ids:
	// Letter			Meaning
	// AND/OR/... 		AND, OR etc.
	// B/H/W/D	 		Byte, Half Word, Word, Double Word
	// I/C/S			Immediate, Complement, Shifted

	// EXEC
	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_AND:
	case PPC_INS_ANDC:
	case PPC_INS_ANDIS:
	case PPC_INS_ANDI:
		op0 = VARG(rS);
		if (id == PPC_INS_AND || id == PPC_INS_ANDC) {
			op1 = (id == PPC_INS_AND) ? VARG(rB) : LOGNOT(VARG(rB));
		} else {
			op1 = (id == PPC_INS_ANDI) ? EXTZ(U16(uI)) : EXTZ(APPEND(U16(uI), U16(0)));
		}
		res = LOGAND(op0, op1);
		break;
	case PPC_INS_OR:
	case PPC_INS_ORC:
	case PPC_INS_ORI:
	case PPC_INS_ORIS:
		op0 = VARG(rS);
		if (id == PPC_INS_OR || id == PPC_INS_ORC) {
			op1 = (id == PPC_INS_OR) ? VARG(rB) : LOGNOT(VARG(rB));
		} else {
			op1 = (id == PPC_INS_ORI) ? EXTZ(U16(uI)) : EXTZ(APPEND(U16(uI), U16(0)));
		}
		res = LOGOR(op0, op1);
		break;
	case PPC_INS_XOR:
	case PPC_INS_XORI:
	case PPC_INS_XORIS:
		op0 = VARG(rS);
		if (id == PPC_INS_XOR) {
			op1 = VARG(rB);
		} else {
			op1 = (id == PPC_INS_XORI) ? EXTZ(U16(uI)) : EXTZ(APPEND(U16(uI), U16(0)));
		}
		res = LOGXOR(op0, op1);
		break;
	case PPC_INS_NAND:
	case PPC_INS_NOR:
		op0 = VARG(rS);
		op1 = VARG(rB);
		res = LOGNOT(
			(id == PPC_INS_NAND) ? LOGAND(op0, op1) : LOGOR(op0, op1));
		break;
	// Compare bytes & Equivalent
	case PPC_INS_CMPB:
	case PPC_INS_EQV:
		NOT_IMPLEMENTED;
	// Extend
	case PPC_INS_EXTSB:
	case PPC_INS_EXTSH:
	case PPC_INS_EXTSW:
		NOT_IMPLEMENTED;
	// Count leading zeros
	case PPC_INS_CNTLZD:
	case PPC_INS_CNTLZW:
		NOT_IMPLEMENTED;
	// Population count
	case PPC_INS_POPCNTD:
	case PPC_INS_POPCNTW:
		NOT_IMPLEMENTED;
	}

	// WRITE
	RzILOpEffect *update_cr0 = cr0 ? cmp_set_cr(res, UA(0), true, "cr0", mode) : NOP;
	RzILOpEffect *set = SETG(rA, res);
	return SEQ2(set, update_cr0);
}

static RzILOpEffect *branch_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;
	bool is_conditional = ppc_is_conditional(id);
	RzILOpEffect *set_cia; // Current instruction address
	RzILOpEffect *set_nia; // Next instruction address
	RzILOpEffect *set_lr; // Set Link Register
	RzILOpEffect *decr_ctr; // Effect to decrement CTR

	// How to read instruction ids:
	// Letter			Meaning
	// B 				Branch
	// C/D				Conditional, Decrement CTR
	// Z/NZ/T/F			Branch if CTR is: zero/not zero, branch if CR=1 (true)/CR=0 (false)
	// L/A/LR/CTR/TAR	Set LR, branch to absolute address, branch to LR, branch to CTR, branch to target address register

	// Determine next instruction address.
	if (!is_conditional) {
		set_nia = SETL("NIA", ppc_get_branch_ta(insn, mode));
	} else {
		set_nia = SETL("NIA", ITE(ppc_get_branch_cond(insn, mode), ppc_get_branch_ta(insn, mode), ADD(VARL("CIA"), UA(4))));
	}

	set_cia = SETL("CIA", UA(insn->address));
	set_lr = ppc_sets_lr(id) ? SETG("lr", ADD(VARL("CIA"), UA(4))) : NOP;
	decr_ctr = ppc_decrements_ctr(insn, mode) ? SETG("ctr", SUB(VARG("ctr"), UA(1))) : NOP;

	return SEQ5(set_cia, decr_ctr, set_lr, set_nia, JMP(VARL("NIA")));
}

static RzILOpEffect *move_from_to_spr_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;

	const char *rS = cs_reg_name(handle, INSOP(0).reg);
	const char *rT = cs_reg_name(handle, INSOP(0).reg);
	const char *spr_name;

	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_MFCR:
	case PPC_INS_MFDCR:
	case PPC_INS_MFFS:
	case PPC_INS_MFLR:
	case PPC_INS_MFMSR:
	case PPC_INS_MFOCRF:
	case PPC_INS_MFSPR:
	case PPC_INS_MFSR:
	case PPC_INS_MFSRIN:
	case PPC_INS_MFTB:
	case PPC_INS_MFVSCR:
		NOT_IMPLEMENTED;
	case PPC_INS_MFCTR:
	case PPC_INS_MTCTR:
		spr_name = "ctr";
		break;
	// Move to <spr>
	case PPC_INS_MTCRF:
	case PPC_INS_MTDCR:
	case PPC_INS_MTFSB0:
	case PPC_INS_MTFSB1:
	case PPC_INS_MTFSF:
	case PPC_INS_MTFSFI:
	case PPC_INS_MTLR:
	case PPC_INS_MTMSR:
	case PPC_INS_MTMSRD:
	case PPC_INS_MTOCRF:
	case PPC_INS_MTSPR:
	case PPC_INS_MTSR:
	case PPC_INS_MTSRIN:
	case PPC_INS_MTVSCR:
		NOT_IMPLEMENTED;
	}
	return ppc_moves_to_spr(id) ? SETG(spr_name, VARG(rS)) : SETG(rT, VARG(spr_name));
}

/**
 *
 * NOTE: Shift instructions are not implemented as in the programmer reference manual.
 * The manual uses rotate, here we simply use SHIFT ops.
 */
static RzILOpEffect *shift_and_rotate(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	ut32 id = insn->id;
	bool sets_cr0 = insn->detail->ppc.update_cr0;

	// READ
	const char *rA = cs_reg_name(handle, INSOP(0).reg);
	const char *rS = cs_reg_name(handle, INSOP(1).reg);
	const char *rB = cs_reg_name(handle, INSOP(2).reg);
	ut64 sH = INSOP(2).imm;
	ut64 mB = INSOP(3).imm;
	ut64 mE = INSOP(4).imm;

	RzILOpPure *n; // Shift/rotate steps
	RzILOpPure *r; // Rotate result
	RzILOpPure *b, *e; // Mask begin/end
	RzILOpPure *into_rA;
	RzILOpPure *ca_val; // Arithmetic shift instructions set the ca and ca32 field.
	RzILOpEffect *set_mask = NULL, *set_ca = NULL, *update_cr0 = NULL;

	// How to read instruction ids:
	// Letter			Meaning
	// R/S				Rotate, Shift
	// L/R				Left, Right
	// W/D		 		Word, Double Word
	// A/I				Algebraic, Immediate
	// C/CL/CR			Clear, clear left/right
	// M/NM/MI			Mask, AND with mask, mask insert

	switch (id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_ROTLW:
	case PPC_INS_ROTLWI:
	case PPC_INS_RLWIMI:
	case PPC_INS_RLWINM:
	case PPC_INS_RLWNM:;
		if (id == PPC_INS_RLWNM || id == PPC_INS_ROTLW) {
			n = CAST(8, IL_FALSE, LOGAND(VARG(rB), UA(0x1f)));
		} else {
			n = U8(sH);
		}
		r = ROTL32(UNSIGNED(32, VARG(rS)), n);
		if (id == PPC_INS_ROTLW || id == PPC_INS_ROTLWI) {
			b = U8(32);
			e = U8(63);
			set_mask = SET_MASK(b, e);
		} else {
			b = ADD(U8(mB), U8(32));
			e = ADD(U8(mE), U8(32));
			set_mask = SET_MASK(b, e);
		}
		into_rA = LOGAND(r, VARL("m"));
		if (id == PPC_INS_RLWIMI) {
			into_rA = LOGOR(into_rA, LOGAND(VARG(rA), LOGNOT(VARL("m"))));
		}
		break;
	case PPC_INS_ROTLD:
	case PPC_INS_ROTLDI:
	case PPC_INS_RLDCL:
	case PPC_INS_RLDCR:
	case PPC_INS_RLDIC:
	case PPC_INS_RLDICL:
	case PPC_INS_RLDICR:
	case PPC_INS_RLDIMI:;
		if (id == PPC_INS_RLDCR || id == PPC_INS_RLDCL || id == PPC_INS_ROTLD) {
			// For these instruction ME is the third operand, not MB.
			mE = INSOP(3).imm;
			n = CAST(8, IL_FALSE, LOGAND(VARG(rB), UA(0x3f)));
		} else {
			n = U8(sH);
		}
		r = ROTL64(VARG(rS), n);
		if (id == PPC_INS_RLDICR || id == PPC_INS_RLDCR) {
			e = U8(mE);
			set_mask = SET_MASK(U8(0), e);
		} else {
			b = U8(mB);
			if (id == PPC_INS_RLDCL || id == PPC_INS_RLDICL) {
				set_mask = SET_MASK(b, U8(63));
			} else if (id == PPC_INS_ROTLDI || id == PPC_INS_ROTLD) {
				set_mask = SET_MASK(U8(0), U8(63));
			} else {
				set_mask = SET_MASK(b, LOGNOT(DUP(n)));
			}
		}
		into_rA = LOGAND(r, VARL("m"));
		if (id == PPC_INS_RLWIMI) {
			into_rA = LOGOR(into_rA, LOGAND(VARG(rA), LOGNOT(VARL("m"))));
		}
		break;
	case PPC_INS_SLD:
	case PPC_INS_SRD:
		into_rA = (id == PPC_INS_SLD) ? SHIFTL0(VARG(rS), VARG(rB)) : SHIFTR0(VARG(rS), VARG(rB));
		break;
	case PPC_INS_SRAD:
	case PPC_INS_SRADI:
		if (id == PPC_INS_SRAD) {
			n = CAST(8, IL_FALSE, LOGAND(VARG(rB), UA(0x3f)));
		} else {
			n = U8(sH);
		}
		into_rA = SHIFTRA(VARG(rS), n);
		// Set ca, ca32 to 1 if RS is negative and 1s were shifted out.
		ca_val = ITE(AND(SLT(VARG(rS), UA(0)),
				     NON_ZERO(MOD(VARG(rS), EXTZ(SHIFTL0(UA(1), DUP(n)))))), // (RS % (1 << n)) != 0
			IL_TRUE,
			IL_FALSE);
		set_ca = SEQ2(SETG("ca", ca_val), SETG("ca32", DUP(ca_val)));
		break;
	case PPC_INS_SLW:
	case PPC_INS_SRW:
		into_rA = (id == PPC_INS_SLW) ? SHIFTL0(UNSIGNED(32, VARG(rS)), VARG(rB)) : SHIFTR0(UNSIGNED(32, VARG(rS)), VARG(rB));
		if (IN_64BIT_MODE) {
			into_rA = APPEND(U32(0), into_rA);
		}
		break;
	case PPC_INS_SRAW:
	case PPC_INS_SRAWI:
		n = (id == PPC_INS_SRAW) ? CAST(8, IL_FALSE, LOGAND(VARG(rB), UA(0x3f))) : U8(sH);
		into_rA = EXTS(SHIFTRA(UNSIGNED(32, VARG(rS)), n));
		ca_val = ITE(AND(SLT(UNSIGNED(32, VARG(rS)), U32(0)),
				     NON_ZERO(MOD(UNSIGNED(32, VARG(rS)), UNSIGNED(32, SHIFTL0(UA(1), DUP(n)))))), // (RS % (1 << n)) != 0
			IL_TRUE,
			IL_FALSE);
		set_ca = SEQ2(SETG("ca", ca_val), SETG("ca32", DUP(ca_val)));
		break;
	case PPC_INS_CLRLDI:
	case PPC_INS_CLRLWI:
		n = U8(0);
		r = ROTL64(VARG(rS), n);
		b = U8(INSOP(2).imm);
		e = (id == PPC_INS_CLRLWI) ? U8(31) : U8(63);
		set_mask = SET_MASK(b, e);
		into_rA = LOGAND(r, VARL("m"));
		NOT_IMPLEMENTED;
	}

	update_cr0 = sets_cr0 ? cmp_set_cr(DUP(into_rA), UA(0), true, "cr0", mode) : NOP;
	set_mask = set_mask ? set_mask : NOP;
	set_ca = set_ca ? set_ca : NOP;

	return SEQ4(set_mask, SETG(rA, into_rA), update_cr0, set_ca);
}

/**
 * \brief Returns the RZIL implementation of a given capstone instruction.
 * Or NOP if the instruction is not yet implemented.
 *
 * \param handle The capstone handle.
 * \param insn The capstone instruction.
 * \param mode The capstone mode.
 * \return RzILOpEffect* Sequence of effects which emulate the instruction.
 */
RZ_IPI RzILOpEffect *rz_ppc_cs_get_il_op(RZ_BORROW csh handle, RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(handle && insn, NOP);
	rz_return_val_if_fail(insn->detail, NOP);
	RzILOpEffect *lop;
	switch (insn->id) {
	default:
		NOT_IMPLEMENTED;
	case PPC_INS_INVALID:
		// TODO Exception
		return NOP;
	case PPC_INS_ADD:
	case PPC_INS_ADDC:
	case PPC_INS_ADDE:
	case PPC_INS_ADDI:
	case PPC_INS_ADDIC:
	case PPC_INS_ADDIS:
	case PPC_INS_ADDME:
	case PPC_INS_ADDZE:
		lop = add_sub_op(handle, insn, true, mode);
		break;
	case PPC_INS_SUBF:
	case PPC_INS_SUBFC:
	case PPC_INS_SUBFE:
	case PPC_INS_SUBFIC:
	case PPC_INS_SUBFME:
	case PPC_INS_SUBFZE:
		lop = add_sub_op(handle, insn, false, mode);
		break;
	case PPC_INS_LI:
	case PPC_INS_LIS:
	case PPC_INS_LA:
	case PPC_INS_LBZ:
	case PPC_INS_LBZCIX:
	case PPC_INS_LBZU:
	case PPC_INS_LBZUX:
	case PPC_INS_LBZX:
	case PPC_INS_LD:
	case PPC_INS_LDARX:
	case PPC_INS_LDBRX:
	case PPC_INS_LDCIX:
	case PPC_INS_LDU:
	case PPC_INS_LDUX:
	case PPC_INS_LDX:
	case PPC_INS_LHA:
	case PPC_INS_LHAU:
	case PPC_INS_LHAUX:
	case PPC_INS_LHAX:
	case PPC_INS_LHBRX:
	case PPC_INS_LHZ:
	case PPC_INS_LHZCIX:
	case PPC_INS_LHZU:
	case PPC_INS_LHZUX:
	case PPC_INS_LHZX:
	case PPC_INS_LWA:
	case PPC_INS_LWARX:
	case PPC_INS_LWAUX:
	case PPC_INS_LWAX:
	case PPC_INS_LWBRX:
	case PPC_INS_LWZ:
	case PPC_INS_LWZCIX:
	case PPC_INS_LWZU:
	case PPC_INS_LWZUX:
	case PPC_INS_LWZX:
		lop = load_op(handle, insn, mode);
		break;
	case PPC_INS_STB:
	case PPC_INS_STBCIX:
	case PPC_INS_STBU:
	case PPC_INS_STBUX:
	case PPC_INS_STBX:
	case PPC_INS_STD:
	case PPC_INS_STDBRX:
	case PPC_INS_STDCIX:
	case PPC_INS_STDCX:
	case PPC_INS_STDU:
	case PPC_INS_STDUX:
	case PPC_INS_STDX:
	case PPC_INS_STFD:
	case PPC_INS_STFDU:
	case PPC_INS_STFDUX:
	case PPC_INS_STFDX:
	case PPC_INS_STFIWX:
	case PPC_INS_STFS:
	case PPC_INS_STFSU:
	case PPC_INS_STFSUX:
	case PPC_INS_STFSX:
	case PPC_INS_STH:
	case PPC_INS_STHBRX:
	case PPC_INS_STHCIX:
	case PPC_INS_STHU:
	case PPC_INS_STHUX:
	case PPC_INS_STHX:
	case PPC_INS_STMW:
	case PPC_INS_STSWI:
	case PPC_INS_STVEBX:
	case PPC_INS_STVEHX:
	case PPC_INS_STVEWX:
	case PPC_INS_STVX:
	case PPC_INS_STVXL:
	case PPC_INS_STW:
	case PPC_INS_STWBRX:
	case PPC_INS_STWCIX:
	case PPC_INS_STWCX:
	case PPC_INS_STWU:
	case PPC_INS_STWUX:
	case PPC_INS_STWX:
	case PPC_INS_STXSDX:
	case PPC_INS_STXVD2X:
	case PPC_INS_STXVW4X:
		lop = store_op(handle, insn, mode);
		break;
	case PPC_INS_AND:
	case PPC_INS_ANDC:
	case PPC_INS_ANDIS:
	case PPC_INS_ANDI:
	case PPC_INS_OR:
	case PPC_INS_ORC:
	case PPC_INS_ORI:
	case PPC_INS_ORIS:
	case PPC_INS_NAND:
	case PPC_INS_NEG:
	case PPC_INS_NOR:
	case PPC_INS_XOR:
	case PPC_INS_XORI:
	case PPC_INS_XORIS:
	case PPC_INS_EQV:
	case PPC_INS_EXTSB:
	case PPC_INS_EXTSH:
	case PPC_INS_EXTSW:
	case PPC_INS_CNTLZD:
	case PPC_INS_CNTLZW:
	case PPC_INS_POPCNTD:
	case PPC_INS_POPCNTW:
		lop = bitwise_op(handle, insn, mode);
		break;
	case PPC_INS_CMPB:
	case PPC_INS_CMPD:
	case PPC_INS_CMPDI:
	case PPC_INS_CMPLD:
	case PPC_INS_CMPLDI:
	case PPC_INS_CMPLW:
	case PPC_INS_CMPLWI:
	case PPC_INS_CMPW:
	case PPC_INS_CMPWI:
		lop = compare_op(handle, insn, mode);
		break;
	case PPC_INS_B:
	case PPC_INS_BA:
	case PPC_INS_BC:
	case PPC_INS_BCCTR:
	case PPC_INS_BCCTRL:
	case PPC_INS_BCL:
	case PPC_INS_BCLR:
	case PPC_INS_BCLRL:
	case PPC_INS_BCTR:
	case PPC_INS_BCTRL:
	case PPC_INS_BDNZ:
	case PPC_INS_BDNZA:
	case PPC_INS_BDNZL:
	case PPC_INS_BDNZLA:
	case PPC_INS_BDNZLR:
	case PPC_INS_BDNZLRL:
	case PPC_INS_BDZ:
	case PPC_INS_BDZA:
	case PPC_INS_BDZL:
	case PPC_INS_BDZLA:
	case PPC_INS_BDZLR:
	case PPC_INS_BDZLRL:
	case PPC_INS_BL:
	case PPC_INS_BLA:
	case PPC_INS_BLR:
	case PPC_INS_BLRL:
		lop = branch_op(handle, insn, mode);
		break;
	case PPC_INS_BRINC: // These instruction are not in the ISA manual v3.1B.
	case PPC_INS_BCT:
		NOT_IMPLEMENTED;
	case PPC_INS_MFCR:
	case PPC_INS_MFCTR:
	case PPC_INS_MFDCR:
	case PPC_INS_MFFS:
	case PPC_INS_MFLR:
	case PPC_INS_MFMSR:
	case PPC_INS_MFOCRF:
	case PPC_INS_MFSPR:
	case PPC_INS_MFSR:
	case PPC_INS_MFSRIN:
	case PPC_INS_MFTB:
	case PPC_INS_MFVSCR:
	case PPC_INS_MSYNC:
	case PPC_INS_MTCRF:
	case PPC_INS_MTCTR:
	case PPC_INS_MTDCR:
	case PPC_INS_MTFSB0:
	case PPC_INS_MTFSB1:
	case PPC_INS_MTFSF:
	case PPC_INS_MTFSFI:
	case PPC_INS_MTLR:
	case PPC_INS_MTMSR:
	case PPC_INS_MTMSRD:
	case PPC_INS_MTOCRF:
	case PPC_INS_MTSPR:
	case PPC_INS_MTSR:
	case PPC_INS_MTSRIN:
	case PPC_INS_MTVSCR:
		lop = move_from_to_spr_op(handle, insn, mode);
		break;
	// Rotate and rotate
	case PPC_INS_RLDCL:
	case PPC_INS_RLDCR:
	case PPC_INS_RLDIC:
	case PPC_INS_RLDICL:
	case PPC_INS_RLDICR:
	case PPC_INS_RLDIMI:
	case PPC_INS_RLWIMI:
	case PPC_INS_RLWINM:
	case PPC_INS_RLWNM:
	case PPC_INS_ROTLD:
	case PPC_INS_ROTLDI:
	case PPC_INS_CLRLDI:
	case PPC_INS_ROTLWI:
	case PPC_INS_CLRLWI:
	case PPC_INS_ROTLW:
	case PPC_INS_SLD:
	case PPC_INS_SLW:
	case PPC_INS_SRAD:
	case PPC_INS_SRADI:
	case PPC_INS_SRAW:
	case PPC_INS_SRAWI:
	case PPC_INS_SRD:
	case PPC_INS_SRW:
		lop = shift_and_rotate(handle, insn, mode);
		break;
	}

	return lop;
}

#include <rz_il/rz_il_opbuilder_end.h>
