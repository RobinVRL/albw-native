/* USA 004905E0 <- EU 004905B8: atan by table: t (s0, expected in [0,1]) -> angle index
 * (0x20000000 = 45 deg), 77 callers (all the atan2 helpers).
 *   s1 = t * 128.0;  i = vcvt.s32(s1) (truncate, SATURATE, NaN -> 0)
 *   e = &data_006C53D8[i]  ({uint32 base, float slope}, 8 bytes)
 *   r = vcvt.u32(e.slope * (s1 - (float)i)) + e.base       (vcvt.u32: negatives/NaN -> 0)
 * Bugs fixed: Ghidra's C converts with plain C casts: (int)(t*128) is cvttss2si natively
 * (0x80000000 on NaN/overflow -> table index -2^31 -> wild read), and the unsigned
 * conversion of a negative product is undefined in C; the base word is read as a float bit
 * pattern by the Ghidra C (2 bit-cast sites). Exact vcvt semantics via gp_vcvt_*.
 * Verified against EU 004905B8-004905FC. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

extern const uint32_t data_006C53D8[];

#include <stdio.h>

int32_t albw_atan_idx(float t) {
    float x = t * 128.0f;
    int32_t i = gp_vcvt_s32(x);
    /* port guard (BOOT_LOG 160c): an index past the table reads on into the following data on the
     * 3DS (mapped, garbage angle); in the port the read-only data ends 0x39000 bytes further and
     * t = 231 (index 29584) faulted (user crash, throwing bushes; random). Out-of-range t is
     * clamped to the table (128 = 45 deg) and the first occurrence is logged with its caller. */
    if ((uint32_t)i > 128u) {
        static int warned;
        if (!warned) {
            warned = 1;
            fprintf(stderr, "atan: t=%g out of the table (caller %p)\n", (double)t, __builtin_return_address(0));
        }
        i = i < 0 ? 0 : 128;
        x = (float)i;
    }
    const uint32_t *e = &data_006C53D8[(uint32_t)i * 2u];   /* r1 + (r0 << 3), 32-bit wrap */
    float slope = gp_u2f(e[1]);
    float frac = x - (float)i;
    return (int32_t)(gp_vcvt_u32(slope * frac) + e[0]);
}

int func_004905E0(float t) {
    return albw_atan_idx(t);
}

/* The atan2 the game inlines (25 copies in 00235ED4: EU 23652C..23663C) is 004904CC with the roles of
 * its two operands exchanged: the inline code compares s2 ("a") first, 004904CC compares its second
 * operand first. Checked branch by branch against EU 23652C..23663C (both >= 0: a < b ? 0x40000000 -
 * A(a/b) : A(b/a); a >= 0 > b; a < 0 <= b; both < 0 with bhi). Used by tools/atan2_inline_fix.py to
 * replace the inlined copies Ghidra decoded wrongly (BOOT_LOG 160d). */
int32_t albw_atan2_inline(float a, float b)
{
    return albw_atan2_idx(b, a);
}
