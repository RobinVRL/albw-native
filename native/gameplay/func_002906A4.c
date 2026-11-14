/* USA 002906A4 <- EU 002906CC: Player wrapper: r0 = player->[0x14] and r2 <-> r3 swapped, then
 * falls through into 002906B8:  return 002906B8(act, flag, d, c, f)  for args (flag, c, d, f).
 * 4 static callers. What was wrong: Ghidra dropped s0 (3 caller declarations lack it, 4 have
 * it) and the swap is easy to lose.
 * Verified against EU 002906CC-002906DC (mov ip,r2; mov r2,r3; mov r3,ip). Confidence: high. */
#include "gameplay.h"

int func_002906B8(void *act, int flag, int b, uint32_t c, float f);

int func_002906A4(void *player, int flag, uint32_t c, int d, float f) {
    return func_002906B8(GPTR(player, 0x14, void), flag, d, c, f);
}
