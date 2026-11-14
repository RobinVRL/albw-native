/* USA 002923B0 <- EU 002923D8: wrapper r0 = player->[0x14], fall-through into 002923B8.
 * What was wrong: s0 lost in one caller file's declaration and in the Ghidra signature.
 * Verified against EU 002923D8-00292414. Confidence: high. */
#include "gameplay.h"

int func_002923B8(void *act, void *obj, float *dst, float f);

int func_002923B0(uint32_t player_w, uint32_t obj_w, float *dst, float f) {
    void *player = (void *)gp_ptr(player_w);
    void *obj = (void *)gp_ptr(obj_w);
    return func_002923B8(GPTR(player, 0x14, void), obj, dst, f);
}
