/* USA 0029081C <- EU 00290844: wrapper r0 = player->[0x14], fall-through into 00290824 (s0 kept).
 * What was wrong: Ghidra (int): the height argument (s0) lost. Callers declare `int (int)`.
 * Verified against EU 00290844-002908D8. Confidence: high. */
#include "gameplay.h"

int func_00290824(void *act, float h);

int func_0029081C(uint32_t player_w, float h) {
    void *player = (void *)gp_ptr(player_w);
    return func_00290824(GPTR(player, 0x14, void), h);
}
