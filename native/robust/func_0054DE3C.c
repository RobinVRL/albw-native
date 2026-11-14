/* USA 0054DE3C <- EU 0054DE14: actor helper "half-extent of shape entry idx along axis":
 *     return 0054DE54(actor->[0x2D0] + 0x18, actor + 4, idx, axis);
 * A 6-instruction prologue (r3 = axis, r2 = idx, r1 = actor + 4, r0 = [actor+0x2D0] + 0x18,
 * `mov r0, r0`) falling through into 0054DE54 (EU 0054DE2C); float result in s0.
 *
 * What was wrong: Ghidra decompiled it as `void func_0054DE3C(void) { return; }`. 64 Ghidra
 * functions call it and then read the result as an uninitialised `in_s0` (or a phantom float
 * parameter `fparam_N` of their own); those callers still need to use the return value (e.g.
 * native/robust/func_002E0274.c). This file makes the function itself return the right value.
 *
 * Verified against EU 0054DE14-0054DE28. Confidence: high. */
#include "robust.h"

float func_0054DE54(char *base, char *obj, uint32_t idx, int32_t axis);

float func_0054DE3C(char *actor, uint32_t idx, int32_t axis) {
    return func_0054DE54(FLD(actor, 0x2D0, char *) + 0x18, actor + 4, idx, axis);
}
