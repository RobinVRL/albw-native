/* USA 00291A38 <- EU 00291A60: Player wrapper: r0 = player->[0x14], fall-through into 00291A40
 * (class-6 action hit, pos in r1, strength in s0). 24 static callers / 23 sites, enemies:
 * `add r1, rEnemy, #0x3d0; bl 00291A60`, usually right after the class-2 call 002917A4.
 * What was wrong: Ghidra kept only param_1; in_r1 (attacker position) and in_s0 were passed
 * to 00346C4C uninitialised. Callers declare `int (int)` (45 declarations): they pass the real
 * arguments once the signature table has (int, float *, float).
 * Verified against EU 00291A60-00291A88. Confidence: high. */
#include "gameplay.h"

int func_00291A40(void *ac, float *pos, float power);

int func_00291A38(uint32_t player_w, float *pos, float power) {
    void *player = (void *)gp_ptr(player_w);
    return func_00291A40(GPTR(player, 0x14, void), pos, power);
}
