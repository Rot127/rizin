// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-08-15 11:57:41-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include <stdio.h>
#include <stdbool.h>
#include <rz_types.h>
#include <rz_lib.h>
#include <rz_util.h>
#include <rz_asm.h>
#include <rz_analysis.h>
#include <rz_util/rz_assert.h>
#include "hexagon.h"
#include "hexagon_insn.h"
#include "hexagon_arch.h"
#include "hexagon_reg_tables.h"

const char *hex_get_ctr_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_ctrregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_ctr_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_ctrregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_ctr_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_ctr_regs64(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_ctrregs64_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_ctr_regs64", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_ctrregs64_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_ctr_regs64", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_double_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_doubleregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_double_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_doubleregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_double_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_general_double_low8_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (!reg_num_is_enum) {
		reg_num = reg_num << 1;
		if (reg_num > 6) { // HEX_REG_D3 == 6
			reg_num = (reg_num & 0x7) | 0x10;
		}
	}
	if (reg_num >= ARRAY_LEN(hexagon_generaldoublelow8regs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_general_double_low8_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_generaldoublelow8regs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_general_double_low8_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_general_sub_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (!reg_num_is_enum) {
		if (reg_num > 7) { // HEX_REG_R7 == 7
			reg_num = (reg_num & 0x7) | 0x10;
		}
	}
	if (reg_num >= ARRAY_LEN(hexagon_generalsubregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_general_sub_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_generalsubregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_general_sub_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_guest_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_guestregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_guest_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_guestregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_guest_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_guest_regs64(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_guestregs64_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_guest_regs64", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_guestregs64_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_guest_regs64", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_hvx_qr(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_hvxqr_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_hvx_qr", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_hvxqr_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_hvx_qr", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_hvx_vqr(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_hvxvqr_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_hvx_vqr", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_hvxvqr_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_hvx_vqr", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_hvx_vr(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_hvxvr_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_hvx_vr", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_hvxvr_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_hvx_vr", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_hvx_wr(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_hvxwr_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_hvx_wr", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_hvxwr_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_hvx_wr", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_int_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_intregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_int_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_intregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_int_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_int_regs_low8(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_intregslow8_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_int_regs_low8", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_intregslow8_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_int_regs_low8", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_mod_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (!reg_num_is_enum) {
		reg_num |= 6;
	}
	if (reg_num >= ARRAY_LEN(hexagon_modregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_mod_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_modregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_mod_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_pred_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_predregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_pred_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_predregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_pred_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_sys_regs(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_sysregs_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_sys_regs", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_sysregs_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_sys_regs", reg_num);
		return "<err>";
	}
	return name;
}

const char *hex_get_sys_regs64(int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	if (reg_num >= ARRAY_LEN(hexagon_sysregs64_lt_v69)) {
		RZ_LOG_WARN("%s: Index out of range during register name lookup:  i = %d\n", "hex_get_sys_regs64", reg_num);
		return "<err>";
	}
	const char *name;
	const HexRegNames rn = hexagon_sysregs64_lt_v69[reg_num];
	if (get_alias) {
		name = get_new ? rn.alias_tmp : rn.alias;
	} else {
		name = get_new ? rn.name_tmp : rn.name;
	}
	if (!name) {
		RZ_LOG_WARN("%s: No register name present at index: %d\n", "hex_get_sys_regs64", reg_num);
		return "<err>";
	}
	return name;
}
const char *hex_get_reg_in_class(HexRegClass cls, int reg_num, bool get_alias, bool get_new, bool reg_num_is_enum) {
	switch (cls) {
	case HEX_REG_CLASS_CTR_REGS:
		return hex_get_ctr_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_CTR_REGS64:
		return hex_get_ctr_regs64(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_DOUBLE_REGS:
		return hex_get_double_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_GENERAL_DOUBLE_LOW8_REGS:
		return hex_get_general_double_low8_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_GENERAL_SUB_REGS:
		return hex_get_general_sub_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_GUEST_REGS:
		return hex_get_guest_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_GUEST_REGS64:
		return hex_get_guest_regs64(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_HVX_QR:
		return hex_get_hvx_qr(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_HVX_VQR:
		return hex_get_hvx_vqr(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_HVX_VR:
		return hex_get_hvx_vr(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_HVX_WR:
		return hex_get_hvx_wr(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_INT_REGS:
		return hex_get_int_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_INT_REGS_LOW8:
		return hex_get_int_regs_low8(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_MOD_REGS:
		return hex_get_mod_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_PRED_REGS:
		return hex_get_pred_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_SYS_REGS:
		return hex_get_sys_regs(reg_num, get_alias, get_new, reg_num_is_enum);
	case HEX_REG_CLASS_SYS_REGS64:
		return hex_get_sys_regs64(reg_num, get_alias, get_new, reg_num_is_enum);
	default:
		return NULL;
	}
}

/**
 * \brief Resolves the 3 bit value of an Nt.new reg to the general register of the producer.
 *
 * \param addr The address of the current instruction.
 * \param reg_num Bits of Nt.new reg.
 * \param p The current packet.
 * \return int The number of the general register. Or UT32_MAX if any error occurred.
 */
int resolve_n_register(const int reg_num, const ut32 addr, const HexPkt *p) {
	// .new values are documented in Programmers Reference Manual
	if (reg_num <= 1 || reg_num >= 8) {
		return UT32_MAX;
	}

	ut8 ahead = (reg_num >> 1);
	ut8 i = hexagon_get_pkt_index_of_addr(addr, p);
	if (i == UT8_MAX) {
		return UT32_MAX;
	}

	ut8 prod_i = i; // Producer index
	HexInsnContainer *hic;
	RzListIter *it;
	rz_list_foreach_prev(p->bin, it, hic) {
		if (ahead == 0) {
			break;
		}
		if (hic->addr < addr) {
			if (hic->identifier == HEX_INS_A4_EXT) {
				--prod_i;
				continue;
			}
			--ahead;
			--prod_i;
		}
	}

	hic = rz_list_get_n(p->bin, prod_i);

	if (!hic || !hic->bin.insn || (hic->is_duplex && (!hic->bin.sub[0] || !hic->bin.sub[1]))) {
		// This case happens if the current instruction (with the .new register)
		// is yet the only one in the packet.
		return UT32_MAX;
	}
	if (hic->identifier == HEX_INS_A4_EXT) {
		return UT32_MAX;
	}
	HexInsn *hi = !hic->is_duplex ? hic->bin.insn : (hic->bin.sub[0]->addr == addr ? hic->bin.sub[0] : hic->bin.sub[1]);
	for (ut8 k = 0; k < hi->op_count; ++k) {
		if (hi->ops[k].attr & HEX_OP_REG_OUT) {
			return hi->ops[k].op.reg;
		}
	}
	return UT32_MAX;
}

/**
 * \brief Returns the real register name for a register alias.
 *
 * \param alias The register alias.
 * \return const char * The corresponding register name. Or NULL on error.
 */
RZ_IPI const char *hex_alias_to_reg(HexRegAlias alias) {
	if (alias >= ARRAY_LEN(hex_alias_reg_lt_v69)) {
		return NULL;
	}
	HexRegClass reg_class = hex_alias_reg_lt_v69[alias].cls;
	int reg_enum = hex_alias_reg_lt_v69[alias].reg_enum;
	return hex_get_reg_in_class(reg_class, reg_enum, false, false, true);
}

/**
 * \brief Returns the value of an register field property.
 *
 * \param property The property to get the value for.
 * \param field The register field.
 * \return ut32 The value as integer or UT32_MAX on failure.
 */
RZ_IPI ut32 hex_get_rf_property_val(const HexRegFieldProperty property, const HexRegField field) {
	switch (field) {
	default:
		RZ_LOG_WARN("Register field not implemented.\n");
		return UT32_MAX;
	case HEX_REG_FIELD_USR_LPCFG:
		if (property == HEX_RF_WIDTH) {
			return 2;
		} else if (property == HEX_RF_OFFSET) {
			return 8;
		}
	case HEX_REG_FIELD_USR_OVF:
		if (property == HEX_RF_WIDTH) {
			return 1;
		} else if (property == HEX_RF_OFFSET) {
			return 0;
		}
	}
}
