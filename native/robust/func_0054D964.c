/* USA 0054D964 <- EU 0054D93C: actor helper "create the attached shape object for entry idx":
 *     return 0054D978(actor->[0x2D0] + 0x18, actor + 4, idx);
 * The ARM code is a 5-instruction prologue (r2 = idx, r1 = actor + 4, r0 = [actor+0x2D0] + 0x18,
 * then `mov r0, r0`) that falls through into 0054D978 (EU 0054D950).
 *
 * What was wrong: Ghidra decompiled the fall-through as one function with a phantom float
 * parameter `fparam_0`, which is really the s0 result of 0054DE54 (decompiled as void(void)).
 * Because of that phantom, 101 Ghidra-converted callers (mostly actor constructors, e.g.
 * 001E4018, 003310B8, 00261468, 00316CD0, 001E70EC, 00315E64, 002E0DAC, and 003249E0) pass an
 * uninitialised `in_s0`; with this signature (no float) that extra argument is simply ignored,
 * so those callers become correct without being rewritten.
 *
 * Verified against EU 0054D93C-0054D94C. The callers' extra float argument is harmless on both
 * i386 (cdecl: caller pops) and x86-64 (passed in xmm0). Confidence: high. */
#include "robust.h"

void *func_0054D978(char *base, char *obj, uint32_t idx);

void *func_0054D964(char *actor, uint32_t idx) {
    return func_0054D978(FLD(actor, 0x2D0, char *) + 0x18, actor + 4, idx);
}
