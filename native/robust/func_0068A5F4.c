/* USA 0068A5F4 <- EU 0068A5CC: class-B template T3_args0 (38 instances, tools/b_templates.json).
 * void Delegate::invoke() const: if the object and the pointer-to-member are set, tail-calls
 * fn(object + (adj >> 1)). Delegate: +4 object, +8 {ptr, adj}.
 *
 * What was wrong in Ghidra: the tail call `bx r1` was emitted as `(*UNRECOVERED_JUMPTABLE)()` with no arguments, so the
 * target got a garbage `this`.
 *
 * Verified against EU 0068A5CC-0068A618: r0 = object + (adj >> 1), virtual when adj & 1; r1 = target, r2 = object/vtable and r3 = adj
 * at the bx, so `this` is the only argument; null object or invalid PMF -> bx lr.
 * Same instruction sequence as every other T3_args0 instance (normalisation rule in robust_pmf.h).
 * Confidence: high. */
#include "robust_pmf.h"

/* s0 pass-through (BOOT_LOG 160i): the tail jump leaves s0 untouched, so a float argument reaches
 * the target on ARM (fader listeners: Interp 0010C7F8 / 00489AD8 / 0048F288 call with the value).
 * The "arity 0" check looked at r1..r3 only. Natively the word after dlg is forwarded unchanged
 * (a prototyped float is one stack word); targets without an argument ignore it. */
void func_0068A5F4(char *dlg, uintptr_t s0_word) {
    albw_delegate_invoke_v1(dlg, s0_word);
}
