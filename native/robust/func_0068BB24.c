/* USA 0068BB24 <- EU 0068BAFC: Delegate::invoke() const (tail call through the pointer-to-member at
 * +8, object at +4), class-B template T3_args0 (tools/b_templates.json; body in robust_pmf.h).
 *
 * What was wrong in Ghidra: the tail call was emitted as `(*UNRECOVERED_JUMPTABLE)()` with no
 * arguments (garbage `this` natively).
 *
 * Float argument (BOOT_LOG 160i): the tail jump leaves s0 untouched, and this delegate is the
 * listener of the sound faders (Interp: 0010C7F8 set, 00489AD8 / 0048F288 per-frame update), which
 * call it with the new value in s0; its targets (00320EBC -> 00407F88 handle volume) read it. The
 * "arity 0" check looked at r1..r3 only. Natively the value is the second argument and is passed
 * on; callers without a value pass a stale word, which targets without a float ignore.
 *
 * Verified: EU 0068BAFC-0068BB48 normalises to the T3_args0 sequence of EU 0068A57C. Confidence: high. */
#include "robust_pmf.h"

typedef void (*albw_dlg_f1)(char *self, float v);

void func_0068BB24(char *dlg, float v) {
    char *self; void *fn = albw_delegate_target(dlg, &self);
    if (fn) ((albw_dlg_f1)fn)(self, v);
    albw_x87_settle();
}
