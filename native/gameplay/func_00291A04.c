/* USA 00291A04 <- EU 00291A2C: wrapper r0 = player->[0x14], fall-through into 00291A0C (s0 kept).
 * What was wrong: Ghidra (int) signature dropped s0 (in_s0). Callers declare `int (int)`;
 * correct once the signature table has (int, float). Verified against EU 00291A2C-00291A58.
 * Confidence: high. */
#include "gameplay.h"

int func_00291A0C(void *ac, float power);

int func_00291A04(uint32_t player_w, float power) {
    void *player = (void *)gp_ptr(player_w);
    return func_00291A0C(GPTR(player, 0x14, void), power);
}
