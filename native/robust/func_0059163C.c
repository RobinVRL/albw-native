/* USA 0059163C <- EU 00591614: armcc libm sinf(float x) (float in s0, result in s0).
 *   |x| < pi/4: tiny (|x| < 2^-12) -> special path, else r = x, q = 0;
 *   |x| < 12867.6: Cody-Waite reduction with 2/pi = 0x3F22F983, round via +-2^23,
 *                  pi/2 split 0x3FC90000/0x39FDA000/0x33A22000/0x2C34611A;
 *   else: 005919C4 (Payne-Hanek, returns r, sets q).
 *   q < 0: NaN -> x + x; inf -> errno = EDOM (00100986(1)), return 0/0;
 *          tiny -> raise underflow if subnormal (0058FBFC class 4 -> 005919B4), return x.
 *   q odd: cos polynomial, else sin polynomial; negated when q & 2.
 *
 * What was wrong: Ghidra produced `void func_0059163C(float)`: the polynomial results were
 * dropped (all paths `return;`), the result of 005919C4 (s0) was not modelled and the
 * `pop {pc}` / `str lr,[sp,#-4]!` frame turned into an `in_lr` "jump table" call. Natively
 * every caller (34 of them) got garbage instead of sin(x).
 *
 * Verified against EU 00591614-00591798 instruction by instruction: comparisons are on
 * bits(x) << 1 (sign stripped) or bits & 0x7FFFFFFF exactly as in the code; vmla/vmls are
 * written as separate multiply then add/sub (VFP does not fuse them); the 2^23 rounding is
 * done through float temporaries. The 0058FBFC/005919B4 pair (classify, then 2^-28*2^-28)
 * only raises the underflow flag; the result is discarded, reproduced with a volatile product.
 * Confidence: high. */
#include "robust.h"

float func_005919C4(uint32_t *q, uint32_t xbits);   /* native/robust: returns reduced arg */
void func_00100986(int32_t err);                     /* *__errno() = err */

static inline float f_of(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t u_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

float func_0059163C(float x) {
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
        if (rb == 0xFF000000u) {                /* +-inf */
            func_00100986(1);
            volatile float z = 0.0f;
            return z / z;
        }
        /* tiny: 0058FBFC == 4 means subnormal (exponent 0, mantissa != 0) */
        uint32_t b2 = u_of(r) << 1;
        if ((b2 << 8) != 0 && (b2 >> 24) == 0) {
            volatile float u = f_of(0x10000000);
            u = u * u;                          /* 005919B4: raise underflow */
        }
        return r;
    }
    float z = r * r;
    float a, b;
    if (q & 1) {
        a = f_of(0x3D2A9FCA); b = z * f_of(0xBAB23AB9); a = a + b;
        float c = f_of(0xBEFFFFDD); b = z * a; c = c + b;
        float res = 1.0f; b = z * c; res = res + b;
        return (q & 2) ? -res : res;
    } else {
        a = f_of(0x3C0882DA); b = z * f_of(0x394C6D33); a = a - b;
        float c = f_of(0xBE2AAAA0); b = z * a; c = c + b;
        float s1 = c * z;
        float res = r; b = r * s1; res = res + b;
        return (q & 2) ? -res : res;
    }
}
