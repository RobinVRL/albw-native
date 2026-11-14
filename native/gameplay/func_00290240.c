/* USA 00290240 <- EU 00290268: Player::requestAction97(a, b, f): r0 = player->[0x14], falls through
 * into 00290248 (r1, r2, s0 kept).
 * What was wrong: s0 lost (one caller file declares it with the float, one without).
 * Verified against EU 00290268-002902AC. Confidence: high. */
#include "gameplay.h"

int func_00290248(void *act, uint8_t a, uint8_t b, float f);

int func_00290240(void *player, uint8_t a, uint8_t b, float f) {
    return func_00290248(GPTR(player, 0x14, void), a, b, f);
}
