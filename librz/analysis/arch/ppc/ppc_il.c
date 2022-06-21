// SPDX-FileCopyrightText: 2022 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

#include "ppc_il.h"
#include "ppc_analysis.h"
#include "rz_il/rz_il_opcodes.h"
#include <rz_util/rz_assert.h>
#include <rz_endian.h>
#include <rz_analysis.h>
#include <rz_il.h>
#include <rz_types.h>

RZ_IPI RzAnalysisILConfig *rz_ppc_cs_64_il_config(bool big_endian) {
	RzAnalysisILConfig *r = rz_analysis_il_config_new(64, big_endian, 64);
	return r;
}

RZ_IPI RzAnalysisILConfig *rz_ppc_cs_32_il_config(bool big_endian) {
	RzAnalysisILConfig *r = rz_analysis_il_config_new(32, big_endian, 32);
	return r;
}

bool ppc_is_x_form(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_LBZCIX:
	case PPC_INS_LBZUX:
	case PPC_INS_LBZX:
	case PPC_INS_LDARX:
	case PPC_INS_LDBRX:
	case PPC_INS_LDCIX:
	case PPC_INS_LDUX:
	case PPC_INS_LDX:
	case PPC_INS_LHAUX:
	case PPC_INS_LHAX:
	case PPC_INS_LHBRX:
	case PPC_INS_LHZCIX:
	case PPC_INS_LHZUX:
	case PPC_INS_LHZX:
	case PPC_INS_LWARX:
	case PPC_INS_LWAUX:
	case PPC_INS_LWAX:
	case PPC_INS_LWBRX:
	case PPC_INS_LWZCIX:
	case PPC_INS_LWZUX:
	case PPC_INS_LWZX:
	case PPC_INS_STBUX:
	case PPC_INS_STHUX:
	case PPC_INS_STWUX:
	case PPC_INS_STDUX:
	case PPC_INS_STBX:
	case PPC_INS_STHX:
	case PPC_INS_STWX:
	case PPC_INS_STDX:
		return true;
	}
}

st32 ppc_get_mem_acc_size(ut32 insn_id) {
	switch (insn_id) {
	default:
		RZ_LOG_INFO("Memory access size for instruction %d requested. But it is not in the switch case.\n", insn_id);
		return -1;
	case PPC_INS_LI:
	case PPC_INS_LIS:
		return 0; // Don't read from mem.
	case PPC_INS_LBZ:
	case PPC_INS_LBZCIX:
	case PPC_INS_LBZU:
	case PPC_INS_LBZUX:
	case PPC_INS_LBZX:
	case PPC_INS_STB:
	case PPC_INS_STBCIX:
	case PPC_INS_STBU:
	case PPC_INS_STBUX:
	case PPC_INS_STBX:
		return PPC_BYTE;
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
	case PPC_INS_STH:
	case PPC_INS_STHBRX:
	case PPC_INS_STHCIX:
	case PPC_INS_STHU:
	case PPC_INS_STHUX:
	case PPC_INS_STHX:
		return PPC_HWORD;
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
	case PPC_INS_LMW:
	case PPC_INS_STW:
	case PPC_INS_STWBRX:
	case PPC_INS_STWCIX:
	case PPC_INS_STWCX:
	case PPC_INS_STWU:
	case PPC_INS_STWUX:
	case PPC_INS_STWX:
	case PPC_INS_STMW:
		return PPC_WORD;
	case PPC_INS_LD:
	case PPC_INS_LDARX:
	case PPC_INS_LDBRX:
	case PPC_INS_LDCIX:
	case PPC_INS_LDU:
	case PPC_INS_LDUX:
	case PPC_INS_LDX:
	case PPC_INS_STD:
	case PPC_INS_STDBRX:
	case PPC_INS_STDCIX:
	case PPC_INS_STDCX:
	case PPC_INS_STDU:
	case PPC_INS_STDUX:
	case PPC_INS_STDX:
		return PPC_DWORD;
	}
}

bool ppc_updates_ra_with_ea(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_LBZU:
	case PPC_INS_LBZUX:
	case PPC_INS_LDU:
	case PPC_INS_LDUX:
	case PPC_INS_LHAU:
	case PPC_INS_LHAUX:
	case PPC_INS_LHZU:
	case PPC_INS_LHZUX:
	case PPC_INS_LWAUX:
	case PPC_INS_LWZU:
	case PPC_INS_LWZUX:
	case PPC_INS_LFDU:
	case PPC_INS_LFDUX:
	case PPC_INS_LFSU:
	case PPC_INS_LFSUX:
	case PPC_INS_STBU:
	case PPC_INS_STDU:
	case PPC_INS_STHU:
	case PPC_INS_STWU:
	case PPC_INS_STBUX:
	case PPC_INS_STHUX:
	case PPC_INS_STWUX:
	case PPC_INS_STDUX:
	case PPC_INS_STFDU:
	case PPC_INS_STFDUX:
	case PPC_INS_STFSU:
	case PPC_INS_STFSUX:
		return true;
	}
}

bool ppc_is_algebraic(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_LA:
	case PPC_INS_LDARX:
	case PPC_INS_LHA:
	case PPC_INS_LHAU:
	case PPC_INS_LHAUX:
	case PPC_INS_LHAX:
	case PPC_INS_LWA:
	case PPC_INS_LWAX:
	case PPC_INS_LWARX:
	case PPC_INS_LWAUX:
		return true;
	}
}

bool ppc_sets_lr(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_BCCTRL:
	case PPC_INS_BCL:
	case PPC_INS_BCLRL:
	case PPC_INS_BCTRL:
	case PPC_INS_BDNZL:
	case PPC_INS_BDNZLA:
	case PPC_INS_BDNZLRL:
	case PPC_INS_BDZL:
	case PPC_INS_BDZLA:
	case PPC_INS_BDZLRL:
	case PPC_INS_BL:
	case PPC_INS_BLA:
	case PPC_INS_BLRL:
		return true;
	}
}

bool ppc_is_conditional(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_BC:
	case PPC_INS_BCCTR:
	case PPC_INS_BCCTRL:
	case PPC_INS_BCL:
	case PPC_INS_BCLR:
	case PPC_INS_BCLRL:
	case PPC_INS_BCT:
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
		return true;
	}
}

bool ppc_moves_to_spr(ut32 insn_id) {
	switch (insn_id) {
	default:
		return false;
	case PPC_INS_MTCTR:
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
		return true;
	}
}

bool ppc_decrements_ctr(RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(insn, NULL);
	ut32 id = insn->id;

	switch (id) {
	default:
		return false;
	case PPC_INS_BC:
	case PPC_INS_BCL:
	case PPC_INS_BCLR:
	case PPC_INS_BCLRL:
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
	case PPC_INS_BCT:
		return !(0x4 & PPC_READ_BO_FIELD); // not BO_2
	}
}

//
// IL helper BEGINN
//

#include <rz_il/rz_il_opbuilder_begin.h>

/**
 * \brief Returns the value of the a bit at position \p pos in CR.
 *
 * NOTE: The Condition Register and its fields (cr0-cr7) start at bit 32.
 * The CR reg is not defined for bits at positions smaller than 32 or larger than 63.
 *
 * \param pos The bit position to look up.
 * \return RzILOpBool* The value of the bit at position \p pos in the CR register.
 * Or IL_FALSE for invalid access.
 */
static RZ_OWN RzILOpBool *get_cr_bit(const ut8 pos) {
	if (pos > 63 || pos < 32) {
		RZ_LOG_WARN("Undefined access into CR register.\n");
		return IL_FALSE;
	}
	RzILOpPure *field_bit;
	RzILOpPure *cr_field;
	if (pos < 36) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 32));
		cr_field = VARG("cr0");
	} else if (pos < 40) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 36));
		cr_field = VARG("cr1");
	} else if (pos < 44) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 40));
		cr_field = VARG("cr2");
	} else if (pos < 48) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 44));
		cr_field = VARG("cr3");
	} else if (pos < 52) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 48));
		cr_field = VARG("cr4");
	} else if (pos < 56) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 52));
		cr_field = VARG("cr5");
	} else if (pos < 60) {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 56));
		cr_field = VARG("cr6");
	} else {
		field_bit = SHIFTR0(UN(4, 0b1000), UN(4, pos - 60));
		cr_field = VARG("cr7");
	}
	return NON_ZERO(LOGAND(cr_field, field_bit));
}

/**
 * \brief Get the branch condition for a given instruction.
 * Checkout the "Simple Branch Mnemonics" in Appendix C in PowerISA v3.1B and
 * the chapter about branch instructions for an overview of possible conditions.
 *
 * NODE: This function *does not* decrement CTR, if required by the instruction.
 * This should have been done before.
 *
 * \param insn The capstone instructions.
 * \param mode The capstone mode.
 * \return RzILOpPure* The condition the branch occurs as a Pure.
 */
RZ_OWN RzILOpPure *ppc_get_branch_cond(RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(insn, NULL);
	ut32 id = insn->id;

	ut8 bo = PPC_READ_BO_FIELD;
	ut8 bi = PPC_READ_BI_FIELD;
	RzILOpPure *ctr_ok;
	RzILOpPure *cond_ok;
	RzILOpPure *bo_0;
	RzILOpPure *bo_1;
	RzILOpPure *bo_2;
	RzILOpPure *bo_3;

	switch (id) {
	default:
		RZ_LOG_WARN("Instruction %d has no condition implemented.\n", id);
		return IL_FALSE;
	case PPC_INS_BC:
	case PPC_INS_BCL:
	case PPC_INS_BCLR:
	case PPC_INS_BCLRL:
		bo_2 = NON_ZERO(LOGAND(UN(5, 0b00100), VARLP("bo")));
		bo_3 = NON_ZERO(LOGAND(UN(5, 0b00010), VARLP("bo")));
		ctr_ok = OR(bo_2, XOR(NON_ZERO(VARG("ctr")), bo_3)); // BO_2 | (CTR_M:63 ≠ 0) ⊕ BO_3

		bo_0 = NON_ZERO(LOGAND(UN(5, 0b10000), VARLP("bo")));
		bo_1 = NON_ZERO(LOGAND(UN(5, 0b01000), VARLP("bo")));
		cond_ok = OR(bo_0, XOR(get_cr_bit(bi + 32), INV(bo_1))); //  BO_0 | (CR_BI+32 ≡ BO_1)

		return LET("bo", UN(5, bo), AND(cond_ok, ctr_ok));
	case PPC_INS_BCCTR:
	case PPC_INS_BCCTRL:;
		bo_0 = NON_ZERO(LOGAND(UN(5, 0b10000), VARLP("bo")));
		bo_1 = NON_ZERO(LOGAND(UN(5, 0b01000), VARLP("bo")));
		cond_ok = OR(bo_0, XOR(get_cr_bit(bi + 32), INV(bo_1))); //  BO_0 | (CR_BI+32 ≡ BO_1)

		return LET("bo", UN(5, bo), cond_ok);
	// CTR != 0
	case PPC_INS_BDNZ:
	case PPC_INS_BDNZA:
	case PPC_INS_BDNZL:
	case PPC_INS_BDNZLA:
	case PPC_INS_BDNZLR:
	case PPC_INS_BDNZLRL:
		return NON_ZERO(VARG("ctr"));
	// CTR == 0
	case PPC_INS_BDZ:
	case PPC_INS_BDZA:
	case PPC_INS_BDZL:
	case PPC_INS_BDZLA:
	case PPC_INS_BDZLR:
	case PPC_INS_BDZLRL:
		return IS_ZERO(VARG("ctr"));
	// ???
	case PPC_INS_BCT:
		return IL_FALSE;
	}
}

/**
 * \brief Get the branch instruction's target address.
 * In case of conditional branches it returns the address if the condition would be fullfilled.
 *
 * There are five types of target addresses:
 * * Absolute address
 * * Relative address (relative to current instruction address)
 * * Address stored in LR
 * * Address stored in CTR
 * * Address stored in TAR
 *
 * NOTE: Capstone calculates the NIA and fills the operand member with it.
 * We don't need to do the shift, add and extend here.
 *
 * \param insn The capstone instructions.
 * \param mode The capstone mode.
 * \return RzILOpPure* The target address of the jump.
 */
RZ_OWN RzILOpPure *ppc_get_branch_ta(RZ_BORROW cs_insn *insn, const cs_mode mode) {
	rz_return_val_if_fail(insn, NULL);
	ut32 id = insn->id;

	switch (id) {
	default:
		RZ_LOG_WARN("Target address of branch instruction %d can not be resolved.\n", id);
		return UA(0);
	// Banch to absolute address
	case PPC_INS_BA:
	case PPC_INS_BLA:
		// EXTS(LI || 0b00)
	// Branch to relative address
	case PPC_INS_B:
	case PPC_INS_BL:
		// CIA + EXTS(LI || 0b00)
		return UA(INSOP(0).imm);
	case PPC_INS_BDZA:
	case PPC_INS_BDZLA:
	case PPC_INS_BDNZA:
	case PPC_INS_BDNZLA:
		// EXTS(BD || 0b00)
	case PPC_INS_BC:
	case PPC_INS_BCL:
	case PPC_INS_BDZ:
	case PPC_INS_BDZL:
	case PPC_INS_BDNZ:
	case PPC_INS_BDNZL:
		// If bits in cr0 are checked, the opcount is 1.
		// CIA + EXTS(BD || 0b00)
		if (insn->detail->ppc.op_count == 2) {
			return UA(INSOP(1).imm);
		} else {
			return UA(INSOP(0).imm);
		}
	// Branch to LR
	case PPC_INS_BLR:
	case PPC_INS_BLRL:
	case PPC_INS_BCLR:
	case PPC_INS_BDZLR:
	case PPC_INS_BCLRL:
	case PPC_INS_BDZLRL:
	case PPC_INS_BDNZLR:
	case PPC_INS_BDNZLRL:
		//  LR_0:61 || 0b00
		return LOGAND(UA(-4), VARG("lr"));
	// Branch to CTR
	case PPC_INS_BCTR:
	case PPC_INS_BCTRL:
	case PPC_INS_BCCTR:
	case PPC_INS_BCCTRL:
		//  CTR_0:61 || 0b00
		return LOGAND(UA(-4), VARG("ctr"));
	}
}

#include <rz_il/rz_il_opbuilder_end.h>

//
// IL helper END
//