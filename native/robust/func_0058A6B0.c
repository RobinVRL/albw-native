/* USA 0058A6B0 <- EU 0058A688: rescale a model part's u16 count (+0x30) by an actor's scale factor.
 * Called as func_0058A6B0(actor, part) by 004F88A0 (71 callers) and ~20 other functions.
 *
 *   if (!actor->[0x84A] || !part) return;
 *   n = part->u16[0x30];
 *   f = actor->vtbl[0x50](actor, actor->[0x420] == part);   (virtual, returns float in s0)
 *   if (f == 0.0f) n = 0;
 *   else if (bits(f) != bits(1.0f) && n != 0) { n = (u16)(s32)((float)n * f); if (n == 0) n = 1; }
 *   part->u16[0x30] = n;
 *
 * What was wrong in the Ghidra version: the float the function works with is the RETURN value of
 * the virtual call at vtable +0x50, but Ghidra modelled it as a third parameter `fparam_0` (s0 on
 * entry) and called the virtual function as a statement. Natively the callers (004F88A0 etc.) pass
 * an uninitialised `in_s0` for it, so the count was scaled by garbage. Real signature: (r0, r1).
 * Callers that still pass a third float are harmless (ignored extra argument).
 * Native caveat: the virtual target's native definition must return float; any Ghidra-converted
 * override declared `int`/`void` (forced by the converter for non-float Ghidra returns) breaks this.
 *
 * Verified against EU 0058A688-0058A714: `cmpne r4, #0` after the byte test (both must be
 * non-zero); r1 = (actor->[0x420] == part) built with moveq/movne; vcmp (non-signalling) s0 vs 0.0
 * then `cmp r0, #0x3f800000` on the raw bits (exact-bit compare with 1.0, n unchanged); the scale is
 * vcvt.f32.u32, vmul, vcvt.s32.f32 (truncating, saturating), then lsl/lsrs 16 with moveq r5, #1.
 * Confidence: high. */
#include "robust.h"

typedef float (*part_scale_fn)(void *actor, int is_main);

static int32_t to_s32(float f) {
    /* vcvt.s32.f32: round toward zero, saturating, NaN -> 0 */
    if (f != f) return 0;
    if (f >= 2147483648.0f) return INT32_MAX;
    if (f <= -2147483648.0f) return INT32_MIN;
    return (int32_t)f;
}

void func_0058A6B0(char *actor, char *part) {
    if (FLD(actor, 0x84A, uint8_t) == 0 || part == 0)
        return;
    uint32_t n = FLD(part, 0x30, uint16_t);
    part_scale_fn fn = FLD(*(char **)actor, 0x50, part_scale_fn);
    float f = fn(actor, FLD(actor, 0x420, char *) == part);
    uint32_t bits;
    memcpy(&bits, &f, 4);
    if (f == 0.0f) {
        n = 0;
    } else if (bits != 0x3F800000u && n != 0) {
        n = (uint16_t)to_s32((float)n * f);
        if (n == 0)
            n = 1;
    }
    FLD(part, 0x30, uint16_t) = (uint16_t)n;
}
