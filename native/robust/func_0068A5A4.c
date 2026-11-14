/* USA 0068A5A4 <- EU 0068A57C: class-B template T3_args0 (38 instances, tools/b_templates.json).
 * void Delegate::invoke() const: if the object and the pointer-to-member are set, tail-calls
 * fn(object + (adj >> 1)). Delegate: +4 object, +8 {ptr, adj}.
 *
 * What was wrong in Ghidra: the tail call `bx r1` was emitted as `(*UNRECOVERED_JUMPTABLE)()` with no arguments, so the
 * target got a garbage `this`.
 *
 * Verified against EU 0068A57C-0068A5C8: r0 = object + (adj >> 1), virtual when adj & 1; r1 = target, r2 = object/vtable and r3 = adj
 * at the bx, so `this` is the only argument; null object or invalid PMF -> bx lr.
 * Same instruction sequence as every other T3_args0 instance (normalisation rule in robust_pmf.h).
 * Confidence: high. */
#include "robust_pmf.h"

void func_0068A5A4(char *dlg) {
    albw_delegate_invoke_v0(dlg);
}
