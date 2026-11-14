/* USA 00611198 <- EU 00611170: owner->changeStateIfDifferent(newState, flag), class-B template T4
 * (tools/b_templates.json; documented in func_00625250.c, body in robust_pmf.h).
 *
 * What was wrong in Ghidra: both handler calls (blx r2, tail bx r1) were emitted as
 * `(*UNRECOVERED_JUMPTABLE)()` with no arguments (garbage `this` natively).
 *
 * Verified: EU 00611170-0061125C normalises (branch targets masked) to exactly the T4 instruction
 * sequence of EU 00625228; instance constants: state machine at owner+0x960, flag byte at
 * owner+0x988, enter table read from owner+0x978, callee func_003931EC. Confidence: high. */
#include "robust_pmf.h"

void func_00611198(char *owner, int32_t newState, uint8_t flag) {
    albw_owner_sm_change_state_if_different(owner, newState, flag);
}
