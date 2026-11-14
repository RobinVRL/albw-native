/* USA 00291518 <- EU 00291540: wrapper r0 = player->[0x14], fall-through into 00291520 (r1, s0 kept).
 * What was wrong: Ghidra (int, undefined4): s0 lost. Verified against EU 00291540-002915B8.
 * Confidence: high. */
#include "gameplay.h"

int func_00291520(void *act, uint32_t v, float f);

int func_00291518(uint32_t player_w, uint32_t v, float f) {
    void *player = (void *)gp_ptr(player_w);
    return func_00291520(GPTR(player, 0x14, void), v, f);
}
