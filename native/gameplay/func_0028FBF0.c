/* USA 0028FBF0 <- EU 0028FC18: wrapper r0 = player->[0x14], fall-through into 0028FBF8 (r1 kept).
 * What was wrong: Ghidra (int) signature, in_r1 (a float * the callee dereferences) passed
 * uninitialised. Callers declare `int (int)`. Verified against EU 0028FC18-0028FC44.
 * Confidence: high. */
#include "gameplay.h"

void func_0028FBF8(void *ac, float *p);

void func_0028FBF0(void *player, float *p) {
    func_0028FBF8(GPTR(player, 0x14, void), p);
}
