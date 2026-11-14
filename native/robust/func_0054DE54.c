/* USA 0054DE54 <- EU 0054DE2C: half-extent of an actor collision/shape entry along one axis.
 *
 *   e = idx < 4 ? base + 0x20 + idx * 0x10 : &data_0072AA58;   (16-byte entries: s16 type,
 *                                                                f32 +4, f32 +8, f32 +0xC)
 *   if e->type is 6, 7 or 8:
 *       axis 0: obj->f[0x10] * e->f[4]   axis 1: obj->f[0x14] * e->f[8]   else: obj->f[0x18] * e->f[0xC]
 *       return that * 0.5f;
 *   return 0.0f;
 * Called by 0054D978 as (base, obj, idx, 1); obj is the actor+4 (its scale at +0x10..+0x18).
 *
 * What was wrong: Ghidra decompiled it as `void func_0054DE54(void)` (empty body): all four
 * register arguments and the s0 float result were unmodelled. Its callers (0054D978, and the
 * inlined copy in 0054D964) then used a phantom float parameter `fparam_0` for the result, so
 * every actor constructor that calls 0054D964 forwarded an uninitialised `in_s0`.
 *
 * Verified against EU 0054DE2C-0054DEDC: the three type branches (6, 7, 8) are identical code
 * (axis selection by `cmp r3,#0/#1`, s1 from e+4/+8/+0xC), multiply order (obj * e) * 0.5;
 * any other type returns the 0.0 pool constant. Confidence: high. */
#include "robust.h"

extern char data_0072AA58[];

float func_0054DE54(char *base, char *obj, uint32_t idx, int32_t axis) {
    char *e = idx < 4 ? base + idx * 0x10 + 0x20 : data_0072AA58;
    int16_t type = FLD(e, 0, int16_t);
    if (type != 6 && type != 7 && type != 8)
        return 0.0f;
    float s, f;
    if (axis == 0) {
        s = FLD(obj, 0x10, float);
        f = FLD(e, 0x04, float);
    } else if (axis == 1) {
        s = FLD(obj, 0x14, float);
        f = FLD(e, 0x08, float);
    } else {
        s = FLD(obj, 0x18, float);
        f = FLD(e, 0x0C, float);
    }
    float r = s * f;
    return r * 0.5f;
}
