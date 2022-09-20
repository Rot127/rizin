// SPDX-FileCopyrightText: 2021 Rot127 <unisono@quyllur.org>
// SPDX-License-Identifier: LGPL-3.0-only

// LLVM commit: 96e220e6886868d6663d966ecc396befffc355e7
// LLVM commit date: 2022-01-05 11:01:52 +0000 (ISO 8601 format)
// Date of code generation: 2022-09-19 21:52:20-04:00
//========================================
// The following code is generated.
// Do not edit. Repository of code generator:
// https://github.com/rizinorg/rz-hexagon

#include "hexagon_il.h"
#include "hexagon_il_getter_table.h"
#include <hexagon.h>
#include <hexagon_arch.h>
#include <rz_list.h>
#include <rz_vector.h>
#include <rz_types.h>
#include <rz_util/rz_assert.h>
#include <rz_il/rz_il_opcodes.h>
#include <rz_il/rz_il_opbuilder_begin.h>

/**
 * \brief Copies all IL ops from the packets instructions to the \p p->il_ops list.
 *
 * \param p A valid instruction packet.
 */
static void hex_fill_pkt_il_ops(HexPkt *p) {
	rz_return_if_fail(p);
	if (!p->is_valid) {
		// Incomplete packets cannot be executed.
		return;
	}
	RzListIter *it;
	HexInsnContainer *hic;
	rz_list_foreach (p->bin, it, hic) {
		if (hic->is_duplex) {
			rz_return_if_fail(hic->bin.sub[0] && hic->bin.sub[1]);
			rz_vector_push(p->il_ops, &hic->bin.sub[0]->il_insn);
			rz_vector_push(p->il_ops, &hic->bin.sub[1]->il_insn);
		} else {
			rz_return_if_fail(hic->bin.insn);
			rz_vector_push(p->il_ops, &hic->bin.insn->il_insn);
		}
	}
}

/**
 * \brief Sends the IL op at \p start to the position \p newloc.
 *
 * Note: THis is a copy of the same function implemented by Qualcomm in QEMU.
 * See: https://github.com/quic/qemu/blob/d48125de38f48a61d6423ef6a01156d6dff9ee2c/target/hexagon/decode.c#L224-L244
 *
 * \param ops The IL ops list.
 * \param start Index of the op to move.
 * \param newloc Position the op shall be moved to.
 */
static void hex_send_insn_to_i(RzVector /* HexILOp* */ *ops, ut8 start, ut8 newloc) {
	rz_return_if_fail(ops);

	st32 direction;
	st32 i;
	if (start == newloc) {
		return;
	}
	if (start < newloc) {
		/* Move towards end */
		direction = 1;
	} else {
		/* move towards beginning */
		direction = -1;
	}
	HexILOp tmp_op;
	for (i = start; i != newloc; i += direction) {
		memcpy(&tmp_op, rz_vector_index_ptr(ops, i), sizeof(HexILOp));
		rz_vector_assign_at(ops, i, rz_vector_index_ptr(ops, i + direction));
		rz_vector_assign_at(ops, i + direction, &tmp_op);
	}
}

/**
 * \brief Shuffles the IL operations of the packet instructions into the correct execution order
 * and stores the result in \p p->il_ops
 *
 * The shuffle algorithm implemented here is a copy of Qualcomm's implementation in QEMU:
 * https://github.com/quic/qemu/blob/d48125de38f48a61d6423ef6a01156d6dff9ee2c/target/hexagon/decode.c#L423-L543
 *
 * Though some changes were made:
 * * Endloops are not handled here (they are pushed to the ops list afterwards).
 * * ".new cmp jump" instructions were already split by us at this stage. So we don't check for them.
 *
 * \param p A valid packet which holds all instructions and the IL ops.
 * \return true Shuffle was successful.
 * \return false Shuffle failed.
 */
RZ_IPI bool hex_shuffle_insns(RZ_INOUT HexPkt *p) {
	rz_return_val_if_fail(p, false);
	if (!p->is_valid) {
		// Incomplete packets cannot be executed.
		return false;
	}
	if (rz_vector_empty(p->il_ops)) {
		RZ_LOG_WARN("Valid packet without RZIL instructions encountered! pkt addr = 0x%" PFMT32x "\n", p->pkt_addr);
		return false;
	}
	RzVector *ops = p->il_ops;

	//
	// Do the shuffle
	//
	bool changed = false;
	int i;
	bool flag; /* flag means we've seen a non-memory instruction */
	int n_mems; /* Number of memory instructions passed */
	int last_insn = rz_vector_len(p->il_ops) - 1;
	HexILOp *op;

	do {
		changed = false;
		/*
		 * Stores go last, must not reorder.
		 * Cannot shuffle stores past loads, either.
		 * Iterate backwards.  If we see a non-memory instruction,
		 * then a store, shuffle the store to the front. Don't shuffle
		 * stores with regard to each other or a load.
		 */
		n_mems = 0;
		flag = false;
		for (flag = false, n_mems = 0, i = last_insn; i >= 0; i--) {
			op = rz_vector_index_ptr(ops, i);
			if (!op) {
				RZ_LOG_FATAL("NULL il op at index %" PFMT32d "\n", i);
			}
			if (flag && (op->attr & HEX_IL_INSN_ATTR_MEM_WRITE)) {
				hex_send_insn_to_i(ops, i, last_insn - n_mems);
				n_mems++;
				changed = true;
			} else if (op->attr & HEX_IL_INSN_ATTR_MEM_WRITE) {
				n_mems++;
			} else if (op->attr & HEX_IL_INSN_ATTR_MEM_READ) {
				/*
				 * Don't set flag, since we don't want to shuffle a
				 * store past a load
				 */
				n_mems++;
			} else if (op->attr & HEX_IL_INSN_ATTR_NEW) {
				/*
				 * Don't set flag, since we don't want to shuffle past
				 * a .new value
				 */
			} else {
				flag = true;
			}
		}

		if (changed) {
			continue;
		}
		/* Compares go first, may be reordered with regard to each other */
		for (flag = false, i = 0; i < last_insn + 1; i++) {
			op = rz_vector_index_ptr(ops, i);
			if ((op->attr & HEX_IL_INSN_ATTR_WPRED) &&
				(op->attr & HEX_IL_INSN_ATTR_MEM_WRITE)) {
				/* This should be a compare (not a store conditional) */
				if (flag) {
					hex_send_insn_to_i(ops, i, 0);
					changed = true;
					continue;
				}
			} else if (op->attr & HEX_IL_INSN_ATTR_WRITE_P3) /* && !is_endloop */ {
				// Endloops get pushed afterwards.
				if (flag) {
					hex_send_insn_to_i(ops, i, 0);
					changed = true;
					continue;
				}
			} else if (op->attr & HEX_IL_INSN_ATTR_WRITE_P0) /* && !is_new_cmp_jmp */ {
				// We have already split .new cmp jumps at this point. So no need to check for it.
				if (flag) {
					hex_send_insn_to_i(ops, i, 0);
					changed = true;
					continue;
				}
			} else {
				flag = true;
			}
		}
		if (changed) {
			continue;
		}
	} while (changed);

	/*
	 * If we have a .new register compare/branch, move that to the very
	 * very end, past stores
	 */
	for (i = 0; i < last_insn; i++) {
		op = rz_vector_index_ptr(ops, i);
		if (op->attr & HEX_IL_INSN_ATTR_NEW) {
			hex_send_insn_to_i(ops, i, last_insn);
			break;
		}
	}
	return true;
}

static RzILOpEffect *hex_il_op_to_effect(const HexILOp *il_op, const HexPkt *pkt) {
	rz_return_val_if_fail(il_op && il_op->get_il_op, NULL);
	HexInsnPktBundle bundle = { 0 };
	bundle.insn = (HexInsn *)il_op->hi;
	bundle.pkt = pkt;
	return il_op->get_il_op(&bundle);
}

/**
 * \brief Transforms a list of HexILOps into a single sequence.
 *
 * \param pkt The hexagon packet of the
 * \return RzILOpEffect* Sequence of operations to emulate the packet.
 */
static RZ_OWN RzILOpEffect *hex_pkt_to_il_seq(const HexPkt *pkt) {
	rz_return_val_if_fail(pkt && pkt->il_ops, NULL);

#define GET_N(n) hex_il_op_to_effect(rz_vector_index_ptr(pkt->il_ops, n), pkt)

	switch (rz_vector_len(pkt->il_ops)) {
	default:
		RZ_LOG_WARN("Lists with more than 9 IL ops are not supported yet.\n");
		return NOP();
	case 1:
		// We need at least the instruction op and the register sync op.
		// So if there aren't at least two ops something went wrong.
		RZ_LOG_WARN("Invalid il ops sequence! There should be at least two il ops per packet.\n");
		return NULL;
	case 2:
		return SEQ2(GET_N(0), GET_N(1));
	case 3:
		return SEQ3(GET_N(0), GET_N(1), GET_N(2));
	case 4:
		return SEQ4(GET_N(0), GET_N(1), GET_N(2), GET_N(3));
	case 5:
		return SEQ5(GET_N(0), GET_N(1), GET_N(2), GET_N(3), GET_N(4));
	case 6:
		return SEQ6(GET_N(0), GET_N(1), GET_N(2), GET_N(3), GET_N(4), GET_N(5));
	case 7:
		return SEQ7(GET_N(0), GET_N(1), GET_N(2), GET_N(3), GET_N(4), GET_N(5), GET_N(6));
	case 8:
		return SEQ8(GET_N(0), GET_N(1), GET_N(2), GET_N(3), GET_N(4), GET_N(5), GET_N(6), GET_N(7));
	case 9:
		return SEQ9(GET_N(0), GET_N(1), GET_N(2), GET_N(3), GET_N(4), GET_N(5), GET_N(6), GET_N(7), GET_N(8));
	}
}

static bool set_pkt_il_ops(RZ_INOUT HexPkt *p) {
	rz_return_val_if_fail(p, false);
	// This function is a lot of unnecessary overhead so:
	// TODO The assignment of IL instructions to their actual instructions should be done in the instruction template.
	// But with the current separation between Asm and Analysis plugins this is not possible.
	// Because Asm is not allowed to depend on Analysis and the RZIL code.
	// This should be fixed ASAP after RzArch has been introduced.
	HexInsnContainer *pos;
	RzListIter *it;
	rz_list_foreach (p->bin, it, pos) {
		HexILInsn *cur_il_insn;
		if (pos->is_duplex) {
			// High sub-instructions
			pos->bin.sub[0]->il_insn = hex_il_getter_lt[pos->bin.sub[0]->identifier];
			cur_il_insn = &pos->bin.sub[0]->il_insn;
			// high sub operation 0
			cur_il_insn->op0.hi = pos->bin.sub[0];
			if (cur_il_insn->op0.attr == HEX_IL_INSN_ATTR_INVALID) {
				goto not_impl;
			}
			rz_vector_push(p->il_ops, &cur_il_insn->op0);

			// high sub operation 1
			if (cur_il_insn->op1.attr != HEX_IL_INSN_ATTR_INVALID) {
				cur_il_insn->op1.hi = pos->bin.sub[0];
				rz_vector_push(p->il_ops, &cur_il_insn->op1);
			}

			// Low sub-instructions
			pos->bin.sub[1]->il_insn = hex_il_getter_lt[pos->bin.sub[1]->identifier];
			cur_il_insn = &pos->bin.sub[1]->il_insn;
			// low sub operation 0
			cur_il_insn->op0.hi = pos->bin.sub[1];
			if (cur_il_insn->op0.attr == HEX_IL_INSN_ATTR_INVALID) {
				goto not_impl;
			}
			rz_vector_push(p->il_ops, &cur_il_insn->op0);

			// low sub operation 1
			if (cur_il_insn->op1.attr != HEX_IL_INSN_ATTR_INVALID) {
				pos->bin.sub[1]->il_insn.op1.hi = pos->bin.sub[1];
				rz_vector_push(p->il_ops, &cur_il_insn->op1);
			}
		} else {
			pos->bin.insn->il_insn = hex_il_getter_lt[pos->bin.insn->identifier];
			cur_il_insn = &pos->bin.insn->il_insn;
			// Insn operation 0
			cur_il_insn->op0.hi = pos->bin.insn;
			if (cur_il_insn->op0.attr == HEX_IL_INSN_ATTR_INVALID) {
				goto not_impl;
			}
			rz_vector_push(p->il_ops, &cur_il_insn->op0);
			// Insn operation 1
			if (cur_il_insn->op1.attr != HEX_IL_INSN_ATTR_INVALID) {
				cur_il_insn->op1.hi = pos->bin.insn;
				rz_vector_push(p->il_ops, &cur_il_insn->op1);
			}
		}
	}
	return true;
not_impl:
	RZ_LOG_INFO("Hexagon instruction %" PFMT32d " not implemented.\n", pos->bin.insn->identifier);
	return false;
}

static void check_for_jumps(const HexPkt *p, RZ_OUT bool *jump_flag) {
	rz_return_if_fail(p && jump_flag);
	HexILOp *op;
	rz_vector_foreach(p->il_ops, op) {
		if (op->attr & HEX_IL_INSN_ATTR_BRANCH) {
			*jump_flag = true;
		}
	}
}

RZ_IPI RzILOpEffect *hex_get_il_op(const ut32 addr) {
	static bool might_has_jumped = false;
	HexState *state = hexagon_get_state();
	if (!state) {
		RZ_LOG_WARN("Could not get hexagon state!\n");
		return NULL;
	}
	HexPkt *p = hex_get_pkt(state, addr);
	if (!p) {
		RZ_LOG_WARN("Packet was NULL although it should have been disassembled at this point.\n");
		return NULL;
	}
	HexInsnContainer *hic = hex_get_hic_at_addr(state, addr);
	if (state->just_init || might_has_jumped) {
		// Assume that the instruction at the address the VM was initialized is the first instruction.
		// Also make it valid if a jump let to this packet.
		p->is_valid = true;
		hic->pkt_info.first_insn = true;
		state->just_init = false;
		might_has_jumped = false;
	}

	if (!p->is_valid && !might_has_jumped) {
		RZ_LOG_WARN("Attempt to execute invalid packet at 0x%" PFMT32x "\n", addr);
		return NULL;
	}

	if (!hic->pkt_info.last_insn) {
		// Only at the last instruction we execute all il ops of the packet.
		return NOP();
	}
	printf("addr: 0x%x\n", addr);

	if (!rz_vector_empty(p->il_ops)) {
		check_for_jumps(p, &might_has_jumped);
		return hex_pkt_to_il_seq(p);
	}

	if (!set_pkt_il_ops(p)) {
		RZ_LOG_WARN("Setting IL ops of packet failed at at 0x%" PFMT32x "\n", addr);
		return NULL;
	}

	if (!hex_shuffle_insns(p)) {
		RZ_LOG_WARN("Instruction shuffle failed at 0x%" PFMT32x "\n", addr);
		return NULL;
	}

	HexILOp *op = RZ_NEW0(HexILOp);
	if (hex_get_loop_flag(p) == HEX_LOOP_0) {
		op->attr = HEX_IL_INSN_ATTR_BRANCH | HEX_IL_INSN_ATTR_COND;
		op->get_il_op = (HexILOpGetter)hex_il_op_j2_endloop0;
		rz_vector_push(p->il_ops, op);
	} else if (hex_get_loop_flag(p) == HEX_LOOP_1) {
		op->attr = HEX_IL_INSN_ATTR_BRANCH | HEX_IL_INSN_ATTR_COND;
		op->get_il_op = (HexILOpGetter)hex_il_op_j2_endloop1;
		rz_vector_push(p->il_ops, op);
	} else if (hex_get_loop_flag(p) == HEX_LOOP_01) {
		op->attr = HEX_IL_INSN_ATTR_BRANCH | HEX_IL_INSN_ATTR_COND;
		op->get_il_op = (HexILOpGetter)hex_il_op_j2_endloop01;
		rz_vector_push(p->il_ops, op);
	}

	op = RZ_NEW0(HexILOp);
	op->attr = HEX_IL_INSN_ATTR_NONE;
	op->get_il_op = (HexILOpGetter)hex_sync_regs;
	rz_vector_push(p->il_ops, op);

	check_for_jumps(p, &might_has_jumped);

	return hex_pkt_to_il_seq(p);
}

#include <rz_il/rz_il_opbuilder_end.h>
