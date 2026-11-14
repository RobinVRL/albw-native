/* USA 00625250 <- EU 00625228: class-B template T4 (51 instances, tools/b_templates.json).
 * owner->changeStateIfDifferent(newState, flag) for the state machine embedded at owner+0x960:
 * exit handler (self, newState), 003931EC(sm, newState) (set state + animation), enter handler (self).
 *
 * What was wrong in Ghidra: both handler calls (blx r2, tail bx r1) were emitted as `(*UNRECOVERED_JUMPTABLE)()` with no
 * arguments, so the handlers got a garbage `this`.
 *
 * Verified against EU 00625228-00625314: early return when (s8)[owner+0x964] == r1 (full register); strb r2 -> [owner+0x988]; exit call
 * r0 = [sm+0x14] + (adj >> 1), r1 = newState untouched; 003931EC(sm, sxtb newState); enter table
 * re-read from [owner+0x978], tail `bx r1` with only r0 live.
 * Same instruction sequence as every other T4 instance (normalisation rule in robust_pmf.h).
 * Confidence: high. */
#include "robust_pmf.h"

void func_00625250(char *owner, int32_t newState, uint8_t flag) {
    albw_owner_sm_change_state_if_different(owner, newState, flag);
}
