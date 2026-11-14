/* USA 0028F268 <- EU 0028F290: wrapper r0 = player->[0x14], fall-through into 0028F270 (class-0xB
 * action call with r1-r3 passed through).
 * What was wrong: Ghidra typed it (int) and passed in_r1 / in_r2 / in_r3 to 003776F8
 * (uninitialised: r1 is a float * the callee dereferences). Callers declare `int (int)`.
 * Verified against EU 0028F290-0028F2C8. Confidence: high. */
#include "gameplay.h"

void func_0028F270(void *ac, float *a1, int a2, int a3);

void func_0028F268(void *player, float *a1, int a2, int a3) {
    func_0028F270(GPTR(player, 0x14, void), a1, a2, a3);
}
