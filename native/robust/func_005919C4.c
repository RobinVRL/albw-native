/* USA 005919C4 <- EU 0059199C: armcc libm __rem_pio2f for large arguments (|x| >= 12867.6,
 * Payne-Hanek with the 2/pi bit table data_006C3A04). Called by sinf (0059163C), cosf
 * (00591804) and sincosf (005909A0) as  r = 005919C4(&quadrant, bits(x))  with x also in s0.
 *   - inf/NaN: *q = -1, returns x unchanged (its s0 input; here rebuilt from the bits r1, which
 *     every caller sets with `vmov r1, s0`).
 *   - else: *q = quadrant (low bits significant), returns the reduced argument in s0
 *     (negative x: quadrant 0x10000000 - q and the result negated).
 *
 * What was wrong: Ghidra made it `void func_005919C4(uint *, uint)`: the float result in s0
 * was lost (the three VFP conversions came out as discarded VectorXToFloat calls) and
 * `unaff_r4` appeared from the shared `popeq` epilogue. Natively the callers read an
 * uninitialised float. Rewritten to return the float.
 *
 * Verified instruction by instruction against EU 0059199C-00591AC4: the 96-bit window of the
 * table (ARM register shifts by 32 give 0, handled explicitly), three umull, the adds/adcs/adc
 * carry chain, the int/uint->float conversions, rounding of the high part to 12 low zero bits
 * (+0x800, clear 0xFFF), and the three-term reconstruction with pi/2 split constants
 * 0x29FDAA22, 0x2FC90FDB, 0x2FC90000 (vmla kept as separate multiply + add, as VFP does).
 * Confidence: high. */
#include "robust.h"

extern const uint32_t data_006C3A04[];  /* 2/pi bits, rodata (EU = USA address) */

static inline float f_of(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }
static inline uint32_t u_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

float func_005919C4(uint32_t *q, uint32_t x) {
    if (0xFF000000u <= (x << 1)) {
        *q = 0xFFFFFFFFu;
        return f_of(x);
    }
    uint32_t m = (x << 8) | 0x80000000u;
    int32_t e = (int32_t)((x << 1) >> 24) - 0x78;
    uint32_t sh = (uint32_t)e & 31;
    uint32_t rs = 32 - sh;
    const uint32_t *t = data_006C3A04 + (e >> 5);
#define SHL(v) ((v) << sh)
#define SHR(v) (rs >= 32 ? 0u : (v) >> rs)
    uint32_t a = SHL(t[0]) | SHR(t[1]);
    uint32_t b = SHL(t[1]) | SHR(t[2]);
    uint32_t c = SHL(t[2]) | SHR(t[3]);
#undef SHL
#undef SHR
    uint64_t pa = (uint64_t)a * m, pb = (uint64_t)b * m, pc = (uint64_t)c * m;
    uint32_t r5 = (uint32_t)pa, r2 = (uint32_t)(pa >> 32);
    uint32_t ip = (uint32_t)pb, r4 = (uint32_t)(pb >> 32);
    uint32_t r3 = (uint32_t)(pc >> 32);
    uint32_t lo = r3 + ip;                 /* adds */
    uint32_t c1 = lo < r3;
    uint64_t mid64 = (uint64_t)r4 + r5 + c1; /* adcs */
    uint32_t mid = (uint32_t)mid64;
    uint32_t c2 = (uint32_t)(mid64 >> 32);
    uint32_t hi = r2 + c2;                 /* adc */
    float s0 = (float)lo;
    uint32_t quad = (hi + 0x20) >> 6;
    float s2 = (float)(int32_t)((hi << 26) | ((mid >> 19) << 13));
    float s1 = (float)(uint32_t)(mid << 13);
    *q = quad;
    float s3 = s1 * f_of(0x36000000);       /* 2^-19 */
    s0 = s0 * f_of(0x2C800000);             /* 2^-38 */
    s1 = s2 + s3;
    s1 = s1 + s0;
    s1 = f_of(((u_of(s1) + 0x800) >> 12) << 12);
    float d = s1 - s2;
    d = d - s3;
    d = s0 - d;
    float r = s1 * f_of(0x29FDAA22);
    float tmp = d * f_of(0x2FC90FDB);
    r = r + tmp;
    tmp = s1 * f_of(0x2FC90000);
    r = r + tmp;
    if ((x & 0x80000000u) == 0)
        return r;
    *q = 0x10000000u - quad;
    return -r;
}
