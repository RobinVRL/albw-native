/* USA 004C1388 <- EU 004C1360: per-object effect/attention request scaled by a speed field:
 *   if (self[0x8AC] & 0x800) return 0;
 *   v = self[0x834] * 50.0f;
 *   v = bits(v) < bits(1.0f) ? 1.0f : (bits(v) > bits(2.0f) ? 2.0f : v);   (SIGNED int compares
 *       of the float bit patterns: negatives and -0 -> 1.0, NaN/+Inf -> 2.0)
 *   return 004C10C4(self, 00520FC0(), 0x20000000, self[0x3E8], v * 1.5f, 5.5f);   (tail call)
 * 00520FC0 = *(*data_0070FB60 + 0x1C) (no arguments). 102 static callers, all read r0.
 *
 * What was wrong: Ghidra typed it void, so the tail-called 004C10C4 result is lost for 102 of
 * 102 call sites (build_decomp's void-tail-return pass covers `return f();` at the end, but the
 * converted callers' prototypes are what matter: they declare `int func_004C1388(int)` -> OK
 * with this int definition). Also: 004C10C4 is declared `extern int func_004C10C4();`
 * (UNPROTOTYPED) in 57 converted files, so their float arguments are promoted to double and
 * land in the wrong stack slots; here it is called with its full prototype.
 * Verified against EU 004C1360-004C13D8 (vmul s16 = s0 * 1.5 after the clamp; s1 = 5.5,
 * r2 = 0x20000000, r3 = [r4,#0x3e8], r1 = 00520FC0's r0). Confidence: high. */
#include "gameplay.h"

int func_00520FC0(void);
int func_004C10C4(int self, float *p, uint32_t flags, int a3, float f0, float f1);

int func_004C1388(void *self) {
    if (FLD(self, 0x8AC, uint32_t) & 0x800)
        return 0;
    float v = FLD(self, 0x834, float) * 50.0f;
    if (gp_f2i_bits(v) < 0x3F800000)
        v = 1.0f;
    else if (gp_f2i_bits(v) > 0x40000000)
        v = 2.0f;
    float s = v * 1.5f;
    int r1 = func_00520FC0();
    return func_004C10C4((int)gp_u32(self), (float *)gp_ptr((uint32_t)r1), 0x20000000u,
                         FLD(self, 0x3E8, int32_t), s, 5.5f);
}
