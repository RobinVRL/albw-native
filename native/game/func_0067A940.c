/* USA 0067A940 (EU 0067A918)  animation curve handler (kind 1, mode 7: 32-bit packed keys,
 * frame = key & 0xFFF, value = key >> 12, linear interpolation) (curve, float t) -> float.
 * Curve: +0x0E u16 key count, +0x10 value scale, +0x14 value offset, +0x18 frame scale,
 * +0x1C 1 / duration (key index guess), +0x20 keys. Called through the handler table
 * data_00714BB0 by 005670A0.
 * Bug fixed: the Ghidra source returned `undefined8` and dropped every float it computed
 * (VectorUnsignedToFloat results discarded); called through a float-returning pointer on i386 the
 * caller then read an empty x87 register: the NaN 0xFFC00000 that made the title's field camera
 * position (TitleCamera curves) NaN, so the overworld was culled away (BOOT_LOG 89g [3d]).
 * CLASS float results of indirect-call targets (curve handler table: 17 Ghidra handlers typed
 * int / uint / void / undefined8). From the EU machine code. High. */
#include "../route/route.h"

float func_0067A940(int param_1, float t)
{
    char *c = GPTR_TO(char, (uint32_t)param_1);
    const float fscale = RF(c, 0x18, float);
    const uint32_t *keys = GPTR_TO(uint32_t, RF(c, 0x20, uint32_t));
    const uint32_t n = RF(c, 0x0E, uint16_t);
    const uint32_t *last = keys + (n - 1);
    uint32_t f = (uint32_t)(t / fscale);
    const uint32_t *k = keys;
    if ((keys[0] & 0xFFF) <= f) {
        if (f >= (*last & 0xFFF)) {
            k = last;
        } else {
            volatile float g = (float)(int32_t)(n - 1) * t;
            k = keys + (uint32_t)(RF(c, 0x1C, float) * g);
            if (f < (*k & 0xFFF)) {
                do --k; while (f < (*k & 0xFFF));
            } else {
                do ++k; while ((*k & 0xFFF) <= f);
                --k;
            }
        }
    }
    const float vscale = RF(c, 0x10, float), voff = RF(c, 0x14, float);
    volatile float f0 = (float)(*k & 0xFFF) * fscale;
    if (f0 == t || k == last) {
        volatile float p = (float)(*k >> 12) * vscale;
        return voff + p;
    }
    const uint32_t nk = k[1];
    volatile float f1 = (float)(nk & 0xFFF) * fscale;
    float r = (t - f0) / (f1 - f0);
    volatile float p0 = (float)(*k >> 12) * vscale;
    float v0 = voff + p0;
    volatile float a = v0 * (1.0f - r);
    volatile float p1 = (float)(nk >> 12) * vscale;
    float v1 = voff + p1;
    volatile float b = v1 * r;
    return a + b;
}
