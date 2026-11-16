/* USA 0058ACC8 <- EU 0058ACA0: Actor::isAnimInFrameRange(f32 frame) -> bool   (39 caller files)
 * l = SkelAnim(self[0x410]).layer0 (+0x14): s1 = l[8] (start), s2 = l[0xC] (prev frame),
 * s3 = l[0x14] (current frame / end); r1 = SkelAnim[0xC] (leftover, not part of the result)
 *   if (!anim) return 1;
 *   if (!(s2 `hi` s1)) return (s2 `hs` f || s1 `lt` f) ? 0 : 1;          (`hi`/`hs`/`lt`: NaN true)
 *   if (s3 `hi` s2 && !(f `le` s2) && f `ls` s3) return 1;                (wrapped-range check)
 *   return (f `lt` 0 || f `hi` s1) ? 0 : 1
 * Ghidra vs ARM: every compare is written as an ordered C compare, so a NaN frame (or NaN anim
 * fields) gives the opposite result in several branches (ARM: NaN frame -> 0; Ghidra -> 1).
 * The longlong return (r1 = SkelAnim[0xC]) is Ghidra noise: callers read r0 only. Fixed.
 * Verified EU 0058ACA0-0058AD50. Confidence: high (flow), medium (name). */
#include "hot.h"

int func_0058ACC8(uint32_t self_w, float f)
{
    uint32_t a = W(P(self_w), 0x410);
    if (a == 0)
        return 1;
    char *l = P(W(P(a), 0x14));
    float s1 = F(l, 8), s2 = F(l, 0xC), s3 = F(l, 0x14);
    if (!VCMP_HI(s2, s1))
        return (VCMP_HS(s2, f) || VCMP_LT(s1, f)) ? 0 : 1;
    if (VCMP_HI(s3, s2) && !VCMP_LE(f, s2) && VCMP_LS(f, s3))
        return 1;
    return (VCMP_LT(f, 0.0f) || VCMP_HI(f, s1)) ? 0 : 1;
}
