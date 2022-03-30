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

  // SLOT ORDER
  //
  // 0x0    slot3
  // 0x4    slot2
  // 0x8    slot1
  // 0xa    slot0
  // 
  // ORDERING CONSTRAINTS
  //
  // General ordering constraints:                                                  [MANUAL v67 3.3.6]
  //
  // IL EXEC ORDERING CONSTRAINTS
  // - [ ] Dual stores                                                              [MANUAL v67 5.4]
  // - [ ] mem_noshuf from v65 onwards. Frist store then load.                      [MANUAL v67 5.5]
  // - [ ] .new value store  insn class NV                                          [MANUAL v67 5.6]
  // - [ ] .new predicates                                                          [MANUAL v67 6.1.4]
  // - [ ] Double predicate write
  // - [ ] Dual jumps                                                               [MANUAL v67 8.7]
  // - [ ] .new value compare jumps                                                 [MANUAL v67 8.5]
  //   - We need to separate the `p0 = bla` part from the `if` part.
  //     Other insn could use p0.new.
  // - [ ] Duplex instructions -> 28:16 slot 1 ; 13:0 slot 0                        [MANUAL v67 10.3]
  // - [ ] Harware loops.
  //
  // DUAL STORES
  //
  // Go last. Order preserved.
  // slot 1 then slot 0
  //
  // COMPARE JUMPS
  //
  // Compiler separates compare and jump into separated ops?
  // Jump op to the end.
  //
  // Priority of op execution.
  // 0. -> Highest priority -> Last in sequence.
  // Order of instrucions.
  // 
  // 10. direct jumps
  // 9.  cond. jumps (Pv.new and Pv)
  // 8.  small writes same reg - memb(R3)
  // 7.  large writes same reg - memw(R3)
  // 6.  .new reads
 
  return NULL;
}

#include <rz_il/rz_il_opbuilder_end.h>
