/* sead / nn::math vector and scalar helpers (tier 5), hand-written from the EU disassembly.
 * Same rules as math_mtx.c (single precision, ARM order, unfused vmla/vmls, ARM NaN branches
 * via gameplay.h VCMP_*, vcvt saturation via gp_vcvt_*). */
#include "core.h"
#include "core_math.h"

extern const float data_006C3AB8[256 * 4];  /* sin/cos table {s, ds, c, dc} per 1/256 turn */
extern const float data_006C4BD0[];         /* ln table {base, slope} per 1/256 of [1,2) */
extern uint32_t data_007270F4;              /* guard of the static identity matrix */
extern float data_007AF2A4[12];             /* the static identity Matrix34 */
extern int func_00100174(uint32_t *guard);  /* __cxa_guard_acquire (game ABI, native/runtime) */

/* USA 0049EF80 (EU 0049EF58) closest point on segment seg = {a[3], b[3]} to p; *t_out = the
 * segment parameter (if t_out); returns |closest - p|^2 in s0 (callers declare float, 11 files).
 *   d = b - a; v = p - a (Vec3 sub 00115C70, inlined: plain per-component subtraction)
 *   dot = (v.x*d.x + v.y*d.y) + v.z*d.z
 *   dot <= 0 (bhi not taken; a NaN dot TAKES bhi: C=1 Z=0) -> point = a, t = 0
 *   dot < len2 (blt; true on NaN)     -> t = dot / len2; point = a + (b - a)*t (b - a recomputed)
 *   else                              -> point = b, t = 1
 *   dist2 = ((pt.x-p.x)^2 + (pt.y-p.y)^2) + (pt.z-p.z)^2   (p re-read after the *t_out store)
 * Confidence: high. */
float func_0049EF80(const float *p, const float *seg, float *t_out) {
    float dx = seg[3] - seg[0], dy = seg[4] - seg[1], dz = seg[5] - seg[2];
    float vx = p[0] - seg[0], vy = p[1] - seg[1], vz = p[2] - seg[2];
    float dot = vx * dx;
    dot = dot + vy * dy;
    dot = dot + vz * dz;
    float t, x, y, z;
    if (!VCMP_HI(dot, 0.0f)) {
        t = 0.0f;
        x = seg[0]; y = seg[1]; z = seg[2];
    } else {
        float len2 = dx * dx;
        len2 = len2 + dy * dy;
        len2 = len2 + dz * dz;
        if (!VCMP_LT(dot, len2)) {
            t = 1.0f;
            x = seg[3]; y = seg[4]; z = seg[5];
        } else {
            t = dot / len2;
            float ex = seg[3], ey = seg[4], ez = seg[5];
            x = seg[0]; y = seg[1]; z = seg[2];
            ex = ex - x; ey = ey - y; ez = ez - z;
            x = x + ex * t;
            y = y + ey * t;
            z = z + ez * t;
        }
    }
    if (t_out) *t_out = t;
    float ax = x - p[0], ay = y - p[1], az = z - p[2];
    float r = ax * ax;
    r = r + ay * ay;
    r = r + az * az;
    return r;
}

/* USA 0049C154 (EU 0049C12C) Vec4 lerp out = a + (b - a)*t with t clamped to [0, 1]:
 * t < 0 (blo: ordered) -> 0; else t > 1 (gt) -> 1; NaN stays NaN. Component order w, x, y, z,
 * each loaded right before its store (in-place/aliasing behaviour as on ARM). Returns the
 * clamped t in s0 (callers declare float, 9 files). Confidence: high. */
float func_0049C154(float *dst, const float *a, const float *b, float t) {
    if (VCMP_LO(t, 0.0f)) t = 0.0f;
    else if (VCMP_GT(t, 1.0f)) t = 1.0f;
    static const int order[4] = {3, 0, 1, 2};
    for (int k = 0; k < 4; k++) {
        int i = order[k];
        float s1 = a[i];
        float s2 = b[i];
        s2 = s2 - s1;
        s1 = s1 + s2 * t;
        dst[i] = s1;
    }
    return t;
}

/* USA 003E2298 (EU 003E2278) Vec3 cross product into dst (all loads first):
 *   dst = (a1*b2 - a2*b1, a2*b0 - a0*b2, a0*b1 - a1*b0). Returns dst. 4 caller files. */
uint32_t func_003E2298(float *dst, const float *a, const float *b) {
    float b0 = b[0], b1 = b[1], a0 = a[0], b2 = b[2], a1 = a[1], a2 = a[2];
    float z = a0 * b1, x = a1 * b2, y = a2 * b0;
    z = z - a1 * b0;
    x = x - a2 * b1;
    y = y - a0 * b2;
    dst[0] = x; dst[1] = y; dst[2] = z;
    return gp_u32(dst);
}

/* USA 00115194 tan(angle idx) from the sin/cos table: f = (idx & 0xFFFFFF) * 2^-24,
 * e = table[idx >> 24]; (e.s + e.ds*f) / (e.c + e.dc*f). Callers float(uint), 3 files.
 * Confidence: high. */
float func_00115194(uint32_t idx) {
    float f = (float)(idx & 0x00FFFFFFu) * 5.9604644775390625e-08f;
    const float *e = &data_006C3AB8[(idx >> 24) * 4];
    float s = e[0] + e[1] * f;
    float c = e[2] + e[3] * f;
    return s / c;
}

/* USA 004906A8 (EU 00490680) ln(x) by table (index name "log2/exp approximation"):
 *   e = ((bits << 1) >> 24) - 127 (sign ignored), m = (bits & 0x3FFFFFFF) | 0x3F800000 in [1,2)
 *   u = (m - 1) * 256; i = vcvt.u32(u) & 0xFFFF; entry = data_006C4BD0[i] {base, slope}
 *   result = (base + (u - (float)i) * slope) + (float)e * ln2 (0x3F317218)
 * Callers float(float), 7 files. Confidence: high. */
float func_004906A8(float x) {
    uint32_t bits = gp_f2u(x);
    int32_t e = (int32_t)((bits << 1) >> 24) - 0x7F;
    float m = gp_u2f((bits & ~0xC0000000u) | 0x3F800000u);
    float fe = (float)e;
    m = m - 1.0f;
    float u = m * 256.0f;
    uint32_t i = gp_vcvt_u32(u) & 0xFFFFu;
    const float *ent = &data_006C4BD0[i * 2];
    float r = ent[0] + (u - (float)i) * ent[1];
    return r + fe * gp_u2f(0x3F317218u);
}

/* USA 003E2134 (EU 003E2114) function-local static identity Matrix34: guard data_007270F4
 * (bit 0 = done; acquire through 00100174, which in the game claims the guard: no release),
 * matrix at data_007AF2A4. Returns its address (callers `int f(void)`, 8 files, all read r0).
 * Confidence: high. */
uint32_t func_003E2134(void) {
    if (!(__atomic_load_n(&data_007270F4, __ATOMIC_ACQUIRE) & 1) && func_00100174(&data_007270F4)) {
        float *m = data_007AF2A4;
        m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f; m[3] = 0.0f;
        m[4] = 0.0f; m[5] = 1.0f; m[6] = 0.0f; m[7] = 0.0f;
        m[8] = 0.0f; m[9] = 0.0f; m[10] = 1.0f; m[11] = 0.0f;
    }
    return gp_u32(data_007AF2A4);
}
