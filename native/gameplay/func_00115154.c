/* USA 00115154 <- EU 00115154: sinCos by 32-bit angle index (0x100000000 = 360 deg), 104 callers.
 *   r3 = idx & 0x00FFFFFF -> s4 (vcvt.f32.u32: exact, < 2^24); f = s4 * 2^-24 (0x33800000)
 *   e = &data_006C3AB8[(idx >> 24) * 4]   (256 entries {sin, dsin, cos, dcos})
 *   *s = e[0] + e[1]*f;  *c = e[2] + e[3]*f   (vmla: product rounded, then added)
 * The Ghidra C was arithmetically right; rewritten as the exact hot-path version.
 * RETURN CLASS (round 2): systemic2/returns.json made it `float` (callers read s0 at 3 sites;
 * s0 = the sin value on the only return path), and all 105 converted caller files now declare
 * `extern float func_00115154(float *, float *, uint)`. func_ therefore returns s0 = the computed
 * sin (not re-read from *s: s and c may alias, the ARM keeps the register). The earlier int
 * definition would pop an empty x87 st(0) in every i386 caller (sigcheck.py: RET).
 * Verified against EU 00115154-00115190. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

extern const float data_006C3AB8[256 * 4];

static inline float sincos_body(float *s, float *c, uint32_t idx) {
    float f = (float)(idx & 0x00FFFFFFu) * 5.9604644775390625e-08f;  /* 2^-24 */
    const float *e = &data_006C3AB8[(idx >> 24) * 4];
    float a = e[0], da = e[1], b = e[2], db = e[3];
    float sv = a + da * f;
    float cv = b + db * f;
    *s = sv;
    *c = cv;
    return sv;
}

void albw_sincos_idx(float *s, float *c, uint32_t idx) {
    (void)sincos_body(s, c, idx);
}

float func_00115154(float *s, float *c, uint32_t idx) {
    return sincos_body(s, c, idx);
}
