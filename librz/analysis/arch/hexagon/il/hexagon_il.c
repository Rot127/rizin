
// RzAnalysisOp->op pointer to il operation.
// This is noped for every instruction of a packet whci is *not* the last one.
//
// So:
// - Disassemble instruction:
//   - Not last -> Set il_op_nop -> Add ops to packet opt.
//   - Last     -> Add ops to packet op -> Set il_packet_op
//
// il_op_pkt = RzIlEffect
//
// Read -> PURE
// Exec -> PURE
// Write -> EFFECT(PURE what, PURE where)
// Jump -> EFFECT(PURE where)
//
//
// Write examples
// Rd = Rs                  - HEX_INS_A2_TFR
// Rd = Rs + Rt             - HEX_INS_A2_ADD
// Rd = memw(Rs+Ii)         - HEX_INS_L2_LOADRI_IO
// jump Rs                  - HEX_INS_J2_JUMPR
// if (Pv) memd(Rs+Ii)=Rtt  - HEX_INS_S2_PSTORERDT_IO
