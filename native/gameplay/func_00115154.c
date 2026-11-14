/* USA 00115154 <- EU 00115154: sinCos by 32-bit angle index (0x100000000 = 360 deg), 104 callers.
 *   r3 = idx & 0x00FFFFFF -> s4 (vcvt.f32.u32: exact, < 2^24); f = s4 * 2^-24 (0x33800000)
 *   e = &data_006C3AB8[(idx >> 24) * 4]   (256 entries {sin, dsin, cos, dcos})
 *   *s = e[0] + e[1]*f;  *c = e[2] + e[3]*f   (vmla: product rounded, then added)
 * The Ghidra C was arithmetically right; rewritten as the exact hot-path version. Returns r0 as
 * the ARM leaves it (= the sin pointer). The leftover s0 (= *s) is not a return value (3 of 148
 * sites read s0 and all of them reload it first; checked).
 * Verified against EU 00115154-00115190. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

extern const float data_006C3AB8[256 * 4];

void albw_sincos_idx(float *s, float *c, uint32_t idx) {
    float f = (float)(idx & 0x00FFFFFFu) * 5.9604644775390625e-08f;  /* 2^-24 */
    const float *e = &data_006C3AB8[(idx >> 24) * 4];
    float a = e[0], da = e[1], b = e[2], db = e[3];
    *s = a + da * f;
    *c = b + db * f;
}

int func_00115154(float *s, float *c, uint32_t idx) {
    albw_sincos_idx(s, c, idx);
    return (int)gp_u32(s);
}
