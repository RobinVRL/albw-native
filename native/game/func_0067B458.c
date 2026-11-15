/* USA 0067B458 (EU 0067B430)  animation curve handler (kind 2, mode 3: float keys {frame, value,
 * slope}, 12 bytes, Hermite interpolation) (curve, float t) -> float. Curve: +0x0E u16 key count,
 * +0x1C 1 / duration (key index guess), +0x20 keys. Called through the handler table
 * data_00714BB0 by 005670A0; the interpolation is 003E1A24 (EU 003E1A04, inlined here with its
 * operation order: t' = dt / df, v0 + (v0 - v1)(2t' - 3)t'^2 + dt(t' - 1)((t' - 1)s0 + t' s1)).
 * Bug fixed: the Ghidra source was typed void (BOOT_LOG 89g [3d], same class as 0067A940).
 * From the EU machine code. High. */
#include "../route/route.h"

float func_0067B458(int param_1, float t)
{
    char *c = GPTR_TO(char, (uint32_t)param_1);
    const float *keys = GPTR_TO(float, RF(c, 0x20, uint32_t));
    const uint32_t n = RF(c, 0x0E, uint16_t);
    const float *last = keys + 3 * (n - 1);
    const float *k;
    if (keys[0] > t) {
        k = keys;
    } else if (last[0] <= t) {
        k = last;
    } else {
        volatile float g = (float)(int32_t)(n - 1) * t;
        k = keys + 3 * (uint32_t)(RF(c, 0x1C, float) * g);
        if (k[0] > t) {
            do k -= 3; while (k[0] > t);
        } else {
            do k += 3; while (k[0] <= t);
            k -= 3;
        }
    }
    if (k[0] == t || k == last) return k[1];
    /* 003E1A24(v0 = k[1], s0 = k[2], v1 = k[4], s1 = k[5], dt = t - k[0], df = k[3] - k[0]) */
    float dt = t - k[0], df = k[3] - k[0];
    float v0 = k[1], s0 = k[2], v1 = k[4], s1 = k[5];
    float u = dt / df;
    volatile float m3 = u * 2.0f;
    float a = m3 - 3.0f;          /* vnmls: -3 + u*2 */
    float um1 = u - 1.0f;
    volatile float s1u = u * s1;
    volatile float u2 = u * u;
    volatile float d = (v0 - v1) * a;
    volatile float s0m = um1 * s0;
    volatile float dtm = dt * um1;
    volatile float r0p = d * u2;
    float r0 = v0 + r0p;
    float sl = s0m + s1u;
    volatile float r1p = dtm * sl;
    return r0 + r1p;
}
