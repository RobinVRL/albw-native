/* USA 0011593C <- EU 0011593C: Matrix34 set identity (12 callers).
 *   r1 = 0x3F800000, r2 = r3 = 0; stm r0!, {1,0,0}, {0,0}, {1,0,0}, {0,0}, {1,0}
 * Integer stores of the bit patterns (1.0f / +0.0f). Returns r0 as the ARM leaves it:
 * written back to out + 48 by the stm!.
 * Verified against EU 0011593C-0011595C. Confidence: high. */
#include "gameplay.h"

int func_0011593C(uint32_t *m) {
    static const uint32_t id[12] = {0x3F800000u, 0, 0, 0, 0, 0x3F800000u, 0, 0, 0, 0, 0x3F800000u, 0};
    memcpy(m, id, sizeof id);
    return (int)gp_u32(m + 12);
}
