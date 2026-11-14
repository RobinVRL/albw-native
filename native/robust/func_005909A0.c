/* USA 005909A0 <- EU 00590978: armcc libm cosf(float x) (float in s0, result in s0).
 * Same argument reduction as sinf (0059163C): Cody-Waite for |x| < 12867.6, else 005919C4.
 *   q < 0: NaN -> x + x; inf -> errno = EDOM (00100986(1)), 0/0; tiny (|x| < 2^-12) -> 1.0.
 *   q odd: sin polynomial, returned as  (q & 2) ? +sin : -sin;
 *   q even: cos polynomial, returned as (q & 2) ? -cos : +cos.
 *
 * What was wrong: Ghidra produced `void func_005909A0(float)`; the result in s0 and the s0
 * result of 005919C4 were not modelled, and `in_r3` came from the `push {r3, lr}` frame slot
 * used as the quadrant variable. Natively all 15 callers got garbage instead of cos(x).
 *
 * Verified against EU 00590978-00590AB0 instruction by instruction (poplo/popne/popeq
 * conditional returns mapped to the branches above; vmla/vmls written unfused).
 * Sanity-checked natively against libm cosf for |x| up to 1e30 (agrees to 1-2 ulp, as the
 * original's polynomial does). Confidence: high. */
#include "robust.h"

float func_005919C4(uint32_t *q, uint32_t xbits);   /* native/robust: returns reduced arg */
void func_00100986(int32_t err);                     /* *__errno() = err */

static inline float f_of(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t u_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

float func_005909A0(float x) {
    uint32_t bits = u_of(x);
    int32_t q;
    float r = x;
    if ((bits << 1) < 0x7E921FB6u) {
        q = (0x73000000u > (bits << 1)) ? -1 : 0;
    } else if ((bits & 0x7FFFFFFFu) < 0x46490E49u) {
        volatile float t = x * f_of(0x3F22F983);
        volatile float n;
        if (bits & 0x80000000u) {
            t = t - 8388608.0f;
            n = t + 8388608.0f;
        } else {
            t = t + 8388608.0f;
            n = t - 8388608.0f;
        }
        float nf = n;
        q = (int32_t)nf & 3;
        float p;
        p = nf * f_of(0x3FC90000); r = r - p;
        p = nf * f_of(0x39FDA000); r = r - p;
        p = nf * f_of(0x33A22000); r = r - p;
        p = nf * f_of(0x2C34611A); r = r - p;
    } else {
        uint32_t uq;
        r = func_005919C4(&uq, bits);
        q = (int32_t)uq;
    }
    if (q < 0) {
        uint32_t rb = u_of(r) << 1;
        if (rb > 0xFF000000u)
            return r + r;                       /* NaN */
        if (rb < 0xFF000000u)
            return 1.0f;                        /* tiny */
        func_00100986(1);                       /* +-inf: EDOM */
        volatile float z = 0.0f;
        return z / z;
    }
    float a, b, c, res;
    if (q & 1) {
        float z = r * r;
        a = f_of(0x3C0882DA); b = z * f_of(0x394C6D33); a = a - b;
        c = f_of(0xBE2AAAA0); b = z * a; c = c + b;
        float s2 = c * z;
        res = r; b = r * s2; res = res + b;
        return (q & 2) ? res : -res;
    } else {
        float z = r * r;
        a = f_of(0x3D2A9FCA); b = z * f_of(0xBAB23AB9); a = a + b;
        c = f_of(0xBEFFFFDD); b = z * a; c = c + b;
        res = 1.0f; b = z * c; res = res + b;
        return (q & 2) ? -res : res;
    }
}
