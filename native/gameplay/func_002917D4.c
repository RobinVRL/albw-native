/* USA 002917D4 <- EU 002917FC: Player::onHitNoPos(flag, power): r0 = player->[0x14], falls through
 * into 002917DC (r1, s0 unchanged). 4 static callers.
 * What was wrong: Ghidra signature (int, undefined4) lost s0 (in_s0 passed as the strength).
 * Callers declare (int, undefined4): the float argument arrives once the signature table has
 * (int, u8, float). Verified against EU 002917FC-0029182C. Confidence: high. */
#include "gameplay.h"

int func_002917DC(void *ac, uint8_t flag, float power);

int func_002917D4(void *player, uint8_t flag, float power) {
    return func_002917DC(GPTR(player, 0x14, void), flag, power);
}
