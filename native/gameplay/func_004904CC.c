/* USA 004904CC <- EU 004904A4: atan2(y = s0, x = s1) -> 32-bit angle index
 * (0x40000000 = 90 deg), 183 static callers / 223 call sites (facing, steering, camera).
 *   if (x == 0 && y == 0) return 0;
 *   if (x <  0) {                                   (vcmpe; blt: also taken for NaN)
 *     if (y < 0) { if (-x < -y ...)  see below }
 *   ...
 * Branch structure (ARM condition codes, unordered = NaN operand):
 *   x lt 0 ? (y lt 0 ? (-x lt y? ...)) : (y lt 0 ? ... : (x lt y ? 0x40000000-atan(x/y) : atan(y/x)))
 * transcribed exactly below with VCMP_* (blt/bhi are TRUE for NaN, Ghidra's C `<` is false).
 * Each quotient is one vdiv; atan via 004905E0 (albw_atan_idx); the integer adds wrap mod 2^32.
 * Ghidra's version had the right arithmetic but C comparisons (NaN takes other branches).
 * Verified against EU 004904A4-004905B4 instruction by instruction. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

int32_t albw_atan2_idx(float y, float x) {
    uint32_t r;
    if (x == 0.0f && y == 0.0f)                         /* vcmp s1,0; vcmpeq s0,0; beq */
        return 0;
    if (VCMP_LT(x, 0.0f)) {                             /* 004904CC blt 49053C */
        if (VCMP_LT(y, 0.0f)) {                         /* 490544 blt 490580 */
            if (VCMP_HI(x, y))                          /* 490588 bhi 4905A0: x > y or NaN */
                return (int32_t)(0xC0000000u - (uint32_t)albw_atan_idx(x / y));
            r = (uint32_t)albw_atan_idx(y / x);
            return (int32_t)(r + 0x80000000u);
        }
        float nx = -x;                                  /* vneg s1 */
        if (VCMP_LT(nx, y)) {                           /* 490554 blt 49056C */
            r = (uint32_t)albw_atan_idx(nx / y);
            return (int32_t)(r + 0x40000000u);
        }
        r = (uint32_t)albw_atan_idx(y / nx);
        return (int32_t)(0x80000000u - r);
    }
    if (VCMP_LT(y, 0.0f)) {                             /* 4904D8 blt 49050C */
        float ny = -y;                                  /* vneg s2 */
        if (VCMP_LT(x, ny)) {                           /* 490518 blt 49052C */
            r = (uint32_t)albw_atan_idx(x / ny);
            return (int32_t)(r + 0xC0000000u);
        }
        r = (uint32_t)albw_atan_idx(ny / x);
        return (int32_t)(0u - r);
    }
    if (VCMP_LT(x, y)) {                                /* 4904E4 blt 4904F8 */
        r = (uint32_t)albw_atan_idx(x / y);
        return (int32_t)(0x40000000u - r);
    }
    return albw_atan_idx(y / x);                        /* tail call */
}

int func_004904CC(float y, float x) {
    return albw_atan2_idx(y, x);
}
