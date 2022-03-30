#include "hexagon.h"
#include "hexagon_il.h"
#include <rz_il.h>
#include <rz_il/rz_il_opbuilder_begin.h>

RzILOpEffect *hex_il_nop() {
  return NOP;
}

/**
 * \brief Returns the packet's instructions IL operations as sequence.
 * The IL ops order does not necessarily match the asm instructions order!
 *
 * \param pkt The instruction packet.
 * \return NOP if the packet is not valid (not fully disassembled).
 * A sequence of all instructions IL operations.
 */
RZ_API RzILOpEffect *hex_get_pkt_il_ops(RZ_INOUT HexPkt *pkt) {
  rz_return_val_if_fail(pkt, NOP);
  if (!pkt->is_valid || !pkt->last_instr_present) {
    return NOP;
  }

  // Four instructions + 2 jump/loop effects + 1 commit regs


  // DON'T FORGET: Implicit Pv writes detectetion during disassembly.


  // SLOT ORDER
  //
  // Low address
  //     slot3  XTYPE/ALU/J/CR
  //     slot2  XTYPE/ALU/J/JR
  //     slot1  LOAD/STORE/ALU                  \  Duplex
  //     slot0  LOAD/STORE/ALU/MEMOP/NV/SYSTEM  /  instr.
  // High address
  // 
  // ORDERING CONSTRAINTS
  //
  // General ordering constraints:                                                  [MANUAL v67 3.3.6]
  //
  // IL EXEC ORDERING CONSTRAINTS
  // - [ ] Dual stores                                                              [MANUAL v67 5.4]    -> Preserve order
  // - [ ] mem_noshuf from v65 onwards. Frist store then load.                      [MANUAL v67 5.5]
  // - [ ] .new value store  insn class NV                                          [MANUAL v67 5.6]
  // - [ ] .new predicates                                                          [MANUAL v67 6.1.4]
  // - [ ] Dual jumps                                                               [MANUAL v67 8.7]
  // - [ ] .new value compare jumps                                                 [MANUAL v67 8.5]
  //   - We need to separate the `p0 = bla` part from the `if` part.
  //     Other insn could use p0.new.
  // - [ ] Duplex instructions -> 28:16 slot 1 ; 13:0 slot 0                        [MANUAL v67 10.3]
  // - [ ] Harware loops.
  //
  // COMPARE JUMPS
  //
  // Example: P0 = R1; if (P0.new) jump #0x55120
  //
  // Compiler separates compare and jump into separated ops.
  // Jump op to the end of execution.
  // 
  // EXECUTION ORDER
  //
  // Posible algo described in: qemu/quic::decode.c::decode_shuffle_for_execution()
  //
  // First
  // 1.  Non memory insn
  // 2.  Im/Explicit Pv writes (implicit via C4, spNloop, other) -> Needs detection execution execution.
  // 3.  .new reads
  // 4.  LOADs which are before STOREs
  // 4.  STOREs (double STOREs: preserve order)
  // 5.  LOADs after STOREs (if they were there before).
  // 6.  direct jumps
  // 7.  cond. jumps (Pv.new and Pv) - if executed after direct jump; they update PC to their value.
  // 8.  commit regs (regs_tmp -> regs. PC is actually written)
  // Last
 
  return NULL;
}

#include <rz_il/rz_il_opbuilder_end.h>
