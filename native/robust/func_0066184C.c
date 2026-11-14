/* USA 0066184C <- EU 00661824: state machine changeState(sm, newState), another instance of the
 * template documented in func_0065B158.c (EU 0065B130).
 *
 * What was wrong in Ghidra: the exit-handler call (blx r2) and the enter-handler tail call (bx r1)
 * through the state tables' pointers-to-member were emitted as `(*UNRECOVERED_JUMPTABLE)()` with
 * no arguments, so the handlers received a garbage `this`.
 *
 * Verified: the EU disassembly 00661824-00661960 is instruction-for-instruction identical to EU
 * 0065B130 apart from the pc-relative pool address (same offsets +0x04/+0x05/+0x08/+0x0C/+0x10/
 * +0x14/+0x18/+0x20, same 0x24-byte entry stride, same call to 0010BEB4 with a SafeString built on
 * data_006F5988; exit handler gets (owner adj, newState), enter handler gets (owner adj)).
 * Confidence: high. */
#include "robust_sm.h"

void func_0066184C(char *sm, uint32_t newState) {
    albw_sm_change_state(sm, newState);
}
