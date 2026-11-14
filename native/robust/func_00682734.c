/* USA 00682734 <- EU 0068270C: class-B template T2_args1 (209 instances, tools/b_templates.json).
 * R Delegate::invoke(a1) const: if the object and the pointer-to-member are set, tail-calls
 * fn(object + (adj >> 1), a1) and returns its r0, else returns 0. Delegate: +4 object, +8 {ptr, adj}.
 *
 * What was wrong in Ghidra: the tail call `bx r2` was emitted as `uVar1 = (*UNRECOVERED_JUMPTABLE)();` with no arguments,
 * so the target got a garbage `this` (and r1).
 *
 * Verified against EU 0068270C-00682764: r0 = object + (adj >> 1) (asr #1), virtual when adj & 1 (fn = *(vtable + ptr)); r1 is never
 * written (forwarded); r2/r3 are scratch; null object or invalid PMF -> `mov r0, #0; bx lr`.
 * Same instruction sequence as every other T2_args1 instance (normalisation rule in robust_pmf.h).
 * Return value: the target's r0, forwarded; if a target returns a C `bool` natively only the low
 * byte is defined (callers in Ghidra C mostly test it as a word).
 * Confidence: high. */
#include "robust_pmf.h"

uint32_t func_00682734(char *dlg, uintptr_t a1) {
    return albw_delegate_invoke_r1(dlg, a1);
}
