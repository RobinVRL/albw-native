/* USA 0026F910 (EU 0026F938): per-frame update of a camera-target helper owned by 0016AAAC:
 * StateMgr::exec (StateMgr at this+0xC), then in modes 7/8 (s8 +8) with state >= 1 averages
 * the +0x50 Vec3 pointers (+0x58 array), eases the centre (+0x44..+0x4C) and the spread (+0x6C)
 * by 0.07 and writes them (+ data_0070BA40 offsets) into the owner's object at +0x54/+0x58.
 * Route: camera (reached from the TaskRender / camera call graph).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`).
 * Verified instruction by instruction against EU 0026F938..0026FB40: signed loop bounds
 * (`ble`/`blt`), unsigned `cmp count, i` / `ldrhi` element reads (NULL past the end), one
 * reciprocal 1.0f/(float)n then 00115D70, unfused vmul/vmla order of the distance, vmla easing,
 * `ldrhi` owner model lookup.  Return value: r0 as left by the ARM code (the only caller ignores
 * it).  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_007A9260[], data_0070BA40[];
int func_00115C54(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);

int func_0026F910(char *self)
{
    if (RF(self, 0x70, uint8_t) == 0)
        return 0;
    if (RF(self, 0x73, uint8_t) != 0)
        RF(self, 0x71, uint8_t) = 0;
    route_statemgr_exec(RAT(self, 0xC));

    int r0 = RF(self, 8, int8_t);
    if ((r0 == 7 || r0 == 8) && (r0 = RF(self, 0x10, int8_t)) >= 1) {
        int32_t n = RF(self, 0x50, int32_t);
        if (n != 0) {
            float s16 = 0.0f;
            float v[3];
            memcpy(v, data_007A9260, sizeof v);
            for (int32_t i = 0; i < n; i++) {
                float *p = (uint32_t)RF(self, 0x50, uint32_t) > (uint32_t)i
                               ? GPTR_TO(float, GPTR_TO(uint32_t, RF(self, 0x58, uint32_t))[i])
                               : 0;
                func_00115C54(v, v, p);
            }
            if (n > 1) {
                func_00115D70(v, v, 1.0f / (float)n);
                float *p0 = RF(self, 0x50, uint32_t) != 0
                                ? GPTR_TO(float, GPTR_TO(uint32_t, RF(self, 0x58, uint32_t))[0])
                                : 0;
                float dx = v[0] - p0[0], dy = v[1] - p0[1], dz = v[2] - p0[2];
                float d = dx * dx;
                d = d + dy * dy;
                d = d + dz * dz;
                s16 = __builtin_sqrtf(d);
            }
            const float k = 0.07f; /* 0x3D8F5C29 */
            float a;
            a = RF(self, 0x44, float); RF(self, 0x44, float) = a + (v[0] - a) * k;
            a = RF(self, 0x48, float); RF(self, 0x48, float) = a + (v[1] - a) * k;
            a = RF(self, 0x4C, float); RF(self, 0x4C, float) = a + (v[2] - a) * k;
            a = RF(self, 0x6C, float);
            float m = a + (s16 - a) * k;
            RF(self, 0x6C, float) = m;
            char *own = RP(self, 4);
            char *obj = RF(own, 0, uint32_t) != 0 ? RP(RP(own, 8), 0) : 0;
            const float *off = (const float *)data_0070BA40;
            RF(obj, 0x54, float) = m + off[0];
            RF(obj, 0x58, float) = RF(self, 0x6C, float) + off[1];
            r0 = (int)GPTR_OF(obj);
        }
    }
    RF(self, 0x72, uint8_t) = 0;
    RF(self, 0x50, uint32_t) = 0;
    return r0;
}
