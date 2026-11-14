/* USA 001119F4 <- EU 001119F4: Matrix34 copy (operator=, skips self-assignment), 97 callers.
 *   cmp r1, r0; bxeq lr; vldmia r1!,{s0-s5}; vldmia r1,{s6-s11}; vstmia r0..
 * vldm/vstm move bits (no FZ, no NaN quieting): copied with memcpy so the native code does not
 * go through float registers (an x87 load would quiet a signalling NaN).
 * Returns r0 (= dst) as left by the ARM code.
 * Verified against EU 001119F4-00111A10. Confidence: high. */
#include "gameplay.h"

int func_001119F4(uint32_t *dst, uint32_t *src) {
    if (src != dst) {
        uint32_t t[12];
        memcpy(t, src, sizeof t);
        memcpy(dst, t, sizeof t);
    }
    return (int)gp_u32(dst);
}
