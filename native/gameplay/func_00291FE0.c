/* USA 00291FE0 <- EU 00292008: wrapper r0 = player->[0x14], fall-through into 00291FE8
 * (class-0x17 action hit: pos r1, strength s0). 21 static callers / 19 sites (enemy attacks:
 * `vmov.f32 s0, s18; mov r1, r5; ...; bl 00292008`; 6 sites tail-return its r0).
 * What was wrong: Ghidra typed it void(int): in_r1 / in_s0 passed uninitialised, and the
 * result (r0, returned through 6 tail sites) was dropped. Callers declare `int (int)`.
 * Verified against EU 00292008-00292030. Confidence: high. */
#include "gameplay.h"

int func_00291FE8(void *ac, float *pos, float power);

int func_00291FE0(void *player, float *pos, float power) {
    return func_00291FE8(GPTR(player, 0x14, void), pos, power);
}
