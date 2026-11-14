/* sead / nn::math matrix library (tier 5): Matrix33 (9 floats, row-major), Matrix34 (3 rows of
 * 4, translation in column 3), Matrix44, quaternions {x, y, z, w}. Hand-written from the EU
 * disassembly, instruction by instruction:
 *  - single precision; VFPv2 vmla/vmls/vnmls round the product before the add (a separate C
 *    multiply and add; the build uses -ffp-contract=off); vnmls d,a,b = a*b - d; vnmul = -(a*b);
 *  - operation order and grouping as in the ARM code (float addition is not associative);
 *  - all loads before the first store where the ARM does so (callers pass aliasing in/out);
 *  - vldm/vstm and integer ldr/str moves are bit copies (memcpy / uint32 words);
 *  - return value = the ARM r0 at return (callers declare `int`) or s0 (callers declare float).
 * The Ghidra versions are arithmetically close; what they lose: the r0 results (writeback
 * vstmia, translation words), the aliasing order of vldm/vstm blocks, and for the 34 inverse the
 * success flag path. Confidence: high unless noted. */
#include "core.h"
#include "core_math.h"

extern float func_00115154(float *s, float *c, uint32_t idx);   /* sinCos(angle idx), gameplay */
extern float func_0059163C(float rad);                          /* sin (radians), native/robust */
extern float func_005909A0(float rad);                          /* cos (radians), native/robust */

/* ------------------------------------------------------------------ copies / packing */

/* USA 001151EC Matrix34 copy: vldmia r1, {s0-s11}; vstmia r0 (no writeback): returns dst.
 * 99 caller files (matched source today). */
uint32_t func_001151EC(void *dst, const void *src) { memmove(dst, src, 48); return gp_u32(dst); }

/* USA 001151CC Matrix33 copy (36 bytes), returns dst. 40 caller files (matched). */
uint32_t func_001151CC(void *dst, const void *src) { memmove(dst, src, 36); return gp_u32(dst); }

/* USA 00115224 Matrix44 copy: vldmia r1!, {s0-s11}; vldmia r1, {s12-s15}; vstmia r0!, {s0-s15}:
 * r0 = dst + 64 at return (writeback). 11 caller files (matched). */
uint32_t func_00115224(void *dst, const void *src) { memmove(dst, src, 64); return gp_u32(dst) + 64; }

/* USA 001150B8 Matrix44 operator=: `cmp r1, r0; bxeq lr`, else 16-float copy; returns dst. */
uint32_t func_001150B8(void *dst, const void *src) {
    if (src != dst) memmove(dst, src, 64);
    return gp_u32(dst);
}

/* USA 001150B0 member thunk: `add r0, r0, #4`, falls into 001150B8 (object with a Matrix44 at
 * +4). Callers `int f(int, undefined4 *)`: obj as a 32-bit word. Returns obj + 4. (matched) */
uint32_t func_001150B0(uint32_t obj, const void *src) { return func_001150B8(gp_ptr(obj + 4), src); }

/* USA 001151F8 Matrix34 from Matrix33 rotation + Vec3 translation: rows of r1 (9 floats) with
 * t[0..2] as column 3. All 12 floats loaded before the vstmia (dst may alias either input).
 * Returns dst (no writeback). 28 caller files. */
uint32_t func_001151F8(void *dst, const void *rot33, const void *t) {
    uint32_t r[9], v[3], o[12];
    memcpy(r, rot33, 36);
    memcpy(v, t, 12);
    for (int i = 0; i < 3; i++) {
        o[i * 4 + 0] = r[i * 3 + 0];
        o[i * 4 + 1] = r[i * 3 + 1];
        o[i * 4 + 2] = r[i * 3 + 2];
        o[i * 4 + 3] = v[i];
    }
    memcpy(dst, o, 48);
    return gp_u32(dst);
}

/* USA 001151D8 Matrix33 = rotation part of a Matrix34 (vldmia r1, {s0-s11}, then three
 * vstmia r0! of 3): returns dst + 36 (writeback; Ghidra: `undefined4 *`). 11 caller files. */
uint32_t func_001151D8(void *dst33, const void *src34) {
    uint32_t m[12];
    memcpy(m, src34, 48);
    memcpy((char *)dst33 + 0, &m[0], 12);
    memcpy((char *)dst33 + 12, &m[4], 12);
    memcpy((char *)dst33 + 24, &m[8], 12);
    return gp_u32(dst33) + 36;
}

/* USA 001150CC Matrix34 -> GPU float-uniform packet: header word r2 at +4, then each row
 * reversed (w, z, y, x) at +0x10..+0x00 (row 0: [0x10]=m0, [0xC]=m1, [8]=m2, [0]=m3; row 1 at
 * [0x20]..[0x14]; row 2 at [0x30]..[0x24]). The header store comes first, the 12 floats are
 * loaded before it. Returns dst. 14 caller files (gfx middleware, bit moves only). */
uint32_t func_001150CC(void *dst, const void *src34, uint32_t header) {
    uint32_t m[12];
    memcpy(m, src34, 48);
    char *d = dst;
    FLD(d, 4, uint32_t) = header;
    FLD(d, 0x10, uint32_t) = m[0]; FLD(d, 0x0C, uint32_t) = m[1];
    FLD(d, 0x08, uint32_t) = m[2]; FLD(d, 0x00, uint32_t) = m[3];
    FLD(d, 0x20, uint32_t) = m[4]; FLD(d, 0x1C, uint32_t) = m[5];
    FLD(d, 0x18, uint32_t) = m[6]; FLD(d, 0x14, uint32_t) = m[7];
    FLD(d, 0x30, uint32_t) = m[8]; FLD(d, 0x2C, uint32_t) = m[9];
    FLD(d, 0x28, uint32_t) = m[10]; FLD(d, 0x24, uint32_t) = m[11];
    return gp_u32(dst);
}

/* USA 00115108 Matrix44 -> GPU uniform packet: as 001150CC with a 4th row at [0x40]..[0x34]
 * (row r: x at 0x10+0x10r, y at 0xC+0x10r, z at 8+0x10r, w at 0 for row 0 else 4+0x10r).
 * Returns dst. 3 caller files. */
uint32_t func_00115108(void *dst, const void *src44, uint32_t header) {
    uint32_t m[16];
    memcpy(m, src44, 64);
    char *d = dst;
    FLD(d, 4, uint32_t) = header;
    for (int r = 0; r < 4; r++) {
        uint32_t base = 0x10 * (uint32_t)r;
        FLD(d, base + 0x10, uint32_t) = m[r * 4 + 0];
        FLD(d, base + 0x0C, uint32_t) = m[r * 4 + 1];
        FLD(d, base + 0x08, uint32_t) = m[r * 4 + 2];
        FLD(d, r == 0 ? 0 : base + 0x04, uint32_t) = m[r * 4 + 3];   /* [0], [0x14], [0x24], [0x34] */
    }
    return gp_u32(dst);
}

/* ------------------------------------------------------------------ inverses */

/* The determinant and the nine 2x2 cofactors shared by 0011529C / 001153A0 / 0011558C /
 * 00114F58, a0..a8 = the 3x3 rotation (row-major):
 *   det = ((a0*a4)*a8 - (a6*a4)*a2) + ((a1*a5)*a6 - (a3*a1)*a8) + ((a2*a3)*a7 - (a0*a7)*a5)
 *   s10 = a0*a4; s11 = a1*a5; s12 = a2*a3; s13 = a6*a4; s14 = a3*a1; s15 = a0*a7;
 *   s10 *= a8; s11 *= a6; s12 *= a7; s10 -= s13*a2; s11 -= s14*a8; s12 -= s15*a5;
 *   det = (s10 + s11) + s12
 * Singular test on the BIT pattern: det == +0.0 or -0.0 (`cmp r2, #0x80000000; cmpne r2, #0`);
 * a NaN or denormal det is inverted (on the 3DS, FZ mode flushes a denormal det to 0 first:
 * the native build gets that only with MXCSR FTZ/DAZ, gameplay fpmath.patch). */
static float det33(const float *a) {
    float s10 = a[0] * a[4], s11 = a[1] * a[5], s12 = a[2] * a[3];
    float s13 = a[6] * a[4], s14 = a[3] * a[1], s15 = a[0] * a[7];
    s10 = s10 * a[8];
    s11 = s11 * a[6];
    s12 = s12 * a[7];
    s10 = s10 - s13 * a[2];
    s11 = s11 - s14 * a[8];
    s12 = s12 - s15 * a[5];
    s10 = s10 + s11;
    return s10 + s12;
}
static int det_is_zero(float d) { uint32_t u = gp_f2u(d); return u == 0 || u == 0x80000000u; }

/* inverse cofactors (0011529C, 0011558C, 00114F58): out = adj * (1/det), alternate signs */
static void inv33(float *o, const float *a, float inv) {
    float c0 = a[4] * a[8] - a[7] * a[5];
    float c1 = a[1] * a[8] - a[7] * a[2];
    float c2 = a[1] * a[5] - a[4] * a[2];
    float c3 = a[3] * a[8] - a[6] * a[5];
    float c4 = a[0] * a[8] - a[6] * a[2];
    float c5 = a[0] * a[5] - a[3] * a[2];
    float c6 = a[3] * a[7] - a[6] * a[4];
    float c7 = a[0] * a[7] - a[6] * a[1];
    float c8 = a[0] * a[4] - a[3] * a[1];
    o[0] = c0 * inv; o[1] = -(c1 * inv); o[2] = c2 * inv;
    o[3] = -(c3 * inv); o[4] = c4 * inv; o[5] = -(c5 * inv);
    o[6] = c6 * inv; o[7] = -(c7 * inv); o[8] = c8 * inv;
}

static void identity33(float *o) {
    static const float id[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    memcpy(o, id, 36);
}

/* USA 0011529C Matrix33 inverse (dst, src may alias: everything loaded first). Singular ->
 * identity. Returns dst. 9 caller files. */
uint32_t func_0011529C(float *dst, const float *m) {
    float a[9], o[9];
    memcpy(a, m, 36);
    float d = det33(a);
    if (det_is_zero(d)) identity33(o);
    else inv33(o, a, 1.0f / d);
    memcpy(dst, o, 36);
    return gp_u32(dst);
}

/* USA 001153A0 Matrix33 inverse-transpose: same det; cofactors in transposed order:
 *   c0 = a4*a8 - a7*a5   c1 = a3*a8 - a6*a5   c2 = a3*a7 - a6*a4
 *   c3 = a1*a8 - a7*a2   c4 = a0*a8 - a6*a2   c5 = a0*a7 - a6*a1
 *   c6 = a1*a5 - a4*a2   c7 = a0*a5 - a3*a2   c8 = a0*a4 - a3*a1
 * signs + - + / - + - / + - +. Singular -> identity. Returns dst. 6 caller files. */
uint32_t func_001153A0(float *dst, const float *m) {
    float a[9], o[9];
    memcpy(a, m, 36);
    float d = det33(a);
    if (det_is_zero(d)) {
        identity33(o);
    } else {
        float inv = 1.0f / d;
        float c0 = a[4] * a[8] - a[7] * a[5];
        float c1 = a[3] * a[8] - a[6] * a[5];
        float c2 = a[3] * a[7] - a[6] * a[4];
        float c3 = a[1] * a[8] - a[7] * a[2];
        float c4 = a[0] * a[8] - a[6] * a[2];
        float c5 = a[0] * a[7] - a[6] * a[1];
        float c6 = a[1] * a[5] - a[4] * a[2];
        float c7 = a[0] * a[5] - a[3] * a[2];
        float c8 = a[0] * a[4] - a[3] * a[1];
        o[0] = c0 * inv; o[1] = -(c1 * inv); o[2] = c2 * inv;
        o[3] = -(c3 * inv); o[4] = c4 * inv; o[5] = -(c5 * inv);
        o[6] = c6 * inv; o[7] = -(c7 * inv); o[8] = c8 * inv;
    }
    memcpy(dst, o, 36);
    return gp_u32(dst);
}

/* Matrix34 inverse body: rotation inverted as above (a = m[0..2], m[4..6], m[8..10]), then
 * t' = -(R' * t):  o3 = (-(o0*t0) - o1*t1) - o2*t2  (vnmul, vmls, vmls), same for o7, o11. */
static void inv34(float *o, const float *m, float d) {
    float a[9] = {m[0], m[1], m[2], m[4], m[5], m[6], m[8], m[9], m[10]};
    float r[9];
    inv33(r, a, 1.0f / d);
    float t0 = m[3], t1 = m[7], t2 = m[11];
    for (int i = 0; i < 3; i++) {
        float x = r[i * 3], y = r[i * 3 + 1], z = r[i * 3 + 2];
        float t = -(x * t0);
        t = t - y * t1;
        t = t - z * t2;
        o[i * 4 + 0] = x; o[i * 4 + 1] = y; o[i * 4 + 2] = z; o[i * 4 + 3] = t;
    }
}

/* USA 0011558C nn::math MTX34Inverse-style: singular -> identity Matrix34. Returns dst
 * (Ghidra had it right except the r0 result). 9 caller files. */
uint32_t func_0011558C(float *dst, const float *m) {
    float a[12], o[12];
    memcpy(a, m, 48);
    float r[9] = {a[0], a[1], a[2], a[4], a[5], a[6], a[8], a[9], a[10]};
    float d = det33(r);
    if (det_is_zero(d)) {
        static const float id[12] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};
        memcpy(o, id, 48);
    } else {
        inv34(o, a, d);
    }
    memcpy(dst, o, 48);
    return gp_u32(dst);
}

/* USA 00114F58 Matrix34 inverse -> bool: singular -> return 0, dst untouched; else write the
 * inverse, return 1. 7 caller files. */
uint32_t func_00114F58(float *dst, const float *m) {
    float a[12], o[12];
    memcpy(a, m, 48);
    float r[9] = {a[0], a[1], a[2], a[4], a[5], a[6], a[8], a[9], a[10]};
    float d = det33(r);
    if (det_is_zero(d)) return 0;
    inv34(o, a, d);
    memcpy(dst, o, 48);
    return 1;
}

/* ------------------------------------------------------------------ quaternion <-> matrix */

/* USA 00491404 (EU 004913DC) Matrix33 from quaternion; q read as q0 (s2), q1, q2, q3 (s4-s6),
 * all loaded before the stores:
 *   m0 = (1 - 2*(q1q1)) - 2*(q2q2)       m1 = 2*(q0q1) - 2*(q3q2)    m2 = 2*(q0q2) + 2*(q3q1)
 *   m3 = 2*(q0q1) + 2*(q3q2)             m4 = (1 - 2*(q0q0)) - 2*(q2q2)  m5 = 2*(q1q2) - 2*(q3q0)
 *   m6 = 2*(q0q2) - 2*(q3q1)             m7 = 2*(q1q2) + 2*(q3q0)    m8 = (1 - 2*(q0q0)) - 2*(q1q1)
 * (each "2*x" is a vmls/vmla product rounded on its own; 2*(a*b) uses the rounded a*b).
 * Returns dst. 15 caller files. */
uint32_t func_00491404(float *dst, const float *q) {
    const float two = 2.0f, one = 1.0f;
    float a = q[0], b = q[1], c = q[2], d = q[3];
    float aa = a * a, ab = a * b, ac = a * c, bc = b * c, bb = b * b, cc = c * c;
    float dc = d * c, db = d * b, da = d * a;
    float s0 = one - two * aa;
    float ab2 = ab * two, ac2 = ac * two, bc2 = bc * two;
    float s3 = one - two * bb;
    float s12 = s0;
    s0 = s0 - two * bb;
    float s6 = ab2, s11 = ac2;
    float s13 = ab2 + two * dc;
    s3 = s3 - two * cc;
    s12 = s12 - two * cc;
    float s9 = ac2 - two * db;
    s6 = s6 - two * dc;
    float s5 = bc2;
    s11 = s11 + two * db;
    float s10 = bc2 + two * da;
    s5 = s5 - two * da;
    dst[0] = s3; dst[1] = s6; dst[2] = s11; dst[3] = s13; dst[4] = s12;
    dst[5] = s5; dst[8] = s0; dst[6] = s9; dst[7] = s10;
    return gp_u32(dst);
}

/* USA 00491B3C (EU 00491B14) Matrix34 from quaternion {x, y, z, w}, translation 0:
 *   m0 = (1 - 2yy) - 2zz   m1 = 2xy - 2wz   m2 = 2xz + 2wy
 *   m4 = 2xy + 2wz         m5 = (1 - 2xx) - 2zz   m6 = 2yz - 2wx
 *   m8 = 2xz - 2wy         m9 = 2yz + 2wx   m10 = (1 - 2xx) - 2yy
 * Returns dst. 18 caller files. */
uint32_t func_00491B3C(float *dst, const float *q) {
    const float two = 2.0f, one = 1.0f;
    float y = q[1], x = q[0], z = q[2], w = q[3];
    float xy = x * y, xz = x * z, xx = x * x, yz = y * z, yy = y * y;
    float wy = w * y, wz = w * z;
    float xy2 = xy * two, zz = z * z, xz2 = xz * two, wx = w * x;
    float s0 = one - two * xx;
    float yz2 = yz * two;
    float s5 = one - two * yy;
    float s11 = xy2;
    float s3 = xy2 + two * wz;
    float s13 = xz2;
    float s2 = xz2 - two * wy;
    float s14 = yz2;
    s11 = s11 - two * wz;
    float s9 = s0;
    s5 = s5 - two * zz;
    s13 = s13 + two * wy;
    float s4 = yz2 + two * wx;
    s14 = s14 - two * wx;
    s0 = s0 - two * yy;
    s9 = s9 - two * zz;
    dst[0] = s5; dst[1] = s11; dst[2] = s13; dst[3] = 0.0f;
    dst[4] = s3; dst[5] = s9; dst[6] = s14; dst[7] = 0.0f;
    dst[8] = s2; dst[9] = s4; dst[10] = s0; dst[11] = 0.0f;
    return gp_u32(dst);
}

/* quaternion from the 9 rotation elements (shared body of 00491C08 / 004914B4, identical code
 * with different load offsets). Branches as on ARM: `ble` (trace <= 0 or NaN -> else), `ble`
 * m11 vs m00, `bgt` m22 vs ...; vcmp s1, #0 + beq: the 0.5/s division is skipped when the
 * root is exactly +-0 (then the products use 0). q stored w first, then x, y, z. */
static void quat_from_rot(float *q, float m00, float m01, float m02, float m10, float m11,
                          float m12, float m20, float m21, float m22) {
    const float half = 0.5f, one = 1.0f;
    float x, y, z, w;
    float s13 = m00 + m11;
    float tr = s13 + m22;
    if (VCMP_GT(tr, 0.0f)) {
        float r = __builtin_sqrtf(tr + one);
        float k = half / r;
        w = r * half;
        x = (m21 - m12) * k;
        y = (m02 - m20) * k;
        z = (m10 - m01) * k;
    } else {
        int zcase;
        if (VCMP_GT(m11, m00)) zcase = VCMP_GT(m22, m11);
        else zcase = VCMP_GT(m22, m00);
        if (zcase) {
            float r = __builtin_sqrtf((m22 - s13) + one);
            z = r * half;
            float k = r;
            if (!(r == 0.0f)) k = half / r;
            w = (m10 - m01) * k;
            x = (m20 + m02) * k;
            y = (m21 + m12) * k;
        } else if (VCMP_GT(m11, m00)) {
            float r = __builtin_sqrtf((m11 - (m22 + m00)) + one);
            y = r * half;
            float k = r;
            if (!(r == 0.0f)) k = half / r;
            z = (m12 + m21) * k;
            w = (m02 - m20) * k;
            x = (m10 + m01) * k;
        } else {
            float r = __builtin_sqrtf((m00 - (m11 + m22)) + one);
            x = r * half;
            float k = r;
            if (!(r == 0.0f)) k = half / r;
            w = (m21 - m12) * k;
            y = (m01 + m10) * k;
            z = (m02 + m20) * k;
        }
    }
    q[3] = w;
    q[0] = x;
    q[1] = y;
    q[2] = z;
}

/* USA 00491C08 (EU 00491BE0) quaternion from Matrix34 rotation (index name "Matrix34 inverse"
 * was wrong). Returns q (r0 untouched). 6 caller files. */
uint32_t func_00491C08(float *q, const float *m) {
    quat_from_rot(q, m[0], m[1], m[2], m[4], m[5], m[6], m[8], m[9], m[10]);
    return gp_u32(q);
}

/* USA 004914B4 (EU 0049148C) quaternion from Matrix33. Returns q. 3 caller files. */
uint32_t func_004914B4(float *q, const float *m) {
    quat_from_rot(q, m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8]);
    return gp_u32(q);
}

/* ------------------------------------------------------------------ Euler angle matrices */

/* three sinCos calls into the ARM stack layout: s at sp+0x18.., c at sp+0x00.. */
static void sincos3(float s[3], float c[3], uint32_t ax, uint32_t ay, uint32_t az) {
    func_00115154(&s[0], &c[0], ax);
    func_00115154(&s[1], &c[1], ay);
    func_00115154(&s[2], &c[2], az);
}

/* USA 00491338 (EU 00491310) Matrix33 from Euler angle indices (Y-X-Z composition):
 *   | cy*cz + sx*(sy*sz)    sx*(sy*cz) - cy*sz    cx*sy |
 *   | cx*sz                 cx*cz                 -sx   |
 *   | sx*(cy*sz) - sy*cz    sy*sz + sx*(cy*cz)    cx*cy |
 * Return: r0 at exit is the stack address of the last sin slot (dead); Ghidra `float *`,
 * callers `int` (one site in retreads reads r0; it gets a dead stack address on ARM too):
 * returns 0. 11 caller files. */
uint32_t func_00491338(float *m, uint32_t ax, uint32_t ay, uint32_t az) {
    float s[3], c[3];
    sincos3(s, c, ax, ay, az);
    float sx = s[0], cx = c[0], sy = s[1], cy = c[1], sz = s[2], cz = c[2];
    float cycz = cy * cz, sycz = sy * cz, sysz = sy * sz, cysz = cy * sz;
    m[3] = cx * sz;
    m[4] = cx * cz;
    m[2] = cx * sy;
    m[5] = -sx;
    m[8] = cx * cy;
    m[0] = cycz + sx * sysz;
    m[6] = sx * cysz - sycz;
    m[1] = sx * sycz - cysz;
    m[7] = sysz + sx * cycz;
    return 0;
}

/* USA 00491938 (EU 00491910) Matrix34 from Euler angle indices, same rotation as 00491338,
 * translation 0. Returns 0 (r0 dead, as above). 15 caller files. */
uint32_t func_00491938(float *m, uint32_t ax, uint32_t ay, uint32_t az) {
    float s[3], c[3];
    sincos3(s, c, ax, ay, az);
    float sx = s[0], cx = c[0], sy = s[1], cy = c[1], sz = s[2], cz = c[2];
    float sysz = sy * sz, cxsy = cx * sy, cysz = cy * sz, cycz = cy * cz, sycz = sy * cz;
    float cxsz = cx * sz, cxcz = cx * cz, cxcy = cx * cy;
    m[3] = 0.0f; m[7] = 0.0f; m[11] = 0.0f;
    m[4] = cxsz; m[5] = cxcz; m[2] = cxsy; m[6] = -sx; m[10] = cxcy;
    float m0 = cycz + sx * sysz;
    float m9 = sysz + sx * cycz;
    float m8 = sx * cysz - sycz;
    float m1 = sx * sycz - cysz;
    m[0] = m0; m[8] = m8; m[1] = m1; m[9] = m9;
    return 0;
}

/* USA 00491A18 (EU 004919F0) Matrix34 from Euler indices ang[0..2] (read one by one between
 * the sinCos calls) + translation words t[0..2] (ldr/str bit copies, read after the rotation
 * stores). Rotation as 00491938. Returns r0 = the t[2] word. 7 caller files. */
uint32_t func_00491A18(float *m, const uint32_t *ang, const float *t) {
    float s[3], c[3];
    func_00115154(&s[0], &c[0], ang[0]);
    func_00115154(&s[1], &c[1], ang[1]);
    func_00115154(&s[2], &c[2], ang[2]);
    float sx = s[0], cx = c[0], sy = s[1], cy = c[1], sz = s[2], cz = c[2];
    float cycz = cy * cz, sycz = sy * cz, sysz = sy * sz, cysz = cy * sz;
    float m0 = cycz + sx * sysz;
    float m8 = sx * cysz - sycz;
    float m1 = sx * sycz - cysz;
    float m9 = sysz + sx * cycz;
    m[0] = m0; m[4] = cx * sz; m[8] = m8; m[1] = m1; m[5] = cx * cz; m[9] = m9;
    m[2] = cx * sy; m[6] = -sx; m[10] = cx * cy;
    FLD(m, 0x0C, uint32_t) = FLD(t, 0, uint32_t);
    FLD(m, 0x1C, uint32_t) = FLD(t, 4, uint32_t);
    uint32_t w = FLD(t, 8, uint32_t);
    FLD(m, 0x2C, uint32_t) = w;
    return w;
}

/* USA 0049216C (EU 00492144) Matrix34 from Euler X-Y-Z indices + translation (the rotation of
 * gameplay's 00491E80):
 *   | cy*cz   (sx*sy)*cz - cx*sz   sx*sz + (cx*cz)*sy |
 *   | cy*sz   cx*cz + (sx*sy)*sz   sy*(cx*sz) - sx*cz |
 *   | -sy     sx*cy                cx*cy              |
 * Callers declare `float` (25 files); s0 at exit = m[5] (`vmla.f32 s0, s7, s3`), returned.
 * (r0 = the t[2] word; one site reads r0 but every converted caller takes the float class.) */
float func_0049216C(float *m, const uint32_t *ang, const float *t) {
    float s[3], c[3];
    func_00115154(&s[0], &c[0], ang[0]);
    func_00115154(&s[1], &c[1], ang[1]);
    func_00115154(&s[2], &c[2], ang[2]);
    float sx = s[0], cx = c[0], sy = s[1], cy = c[1], sz = s[2], cz = c[2];
    float cxsz = cx * sz, sxsz = sx * sz, cxcz = cx * cz, sxsy = sx * sy;
    float cycz = cy * cz, cxcy = cx * cy, cysz = cy * sz, sxcy = sx * cy;
    float m6 = sy * cxsz;
    float m2 = sxsz + cxcz * sy;
    float m1 = sxsy * cz - cxsz;
    float m5 = cxcz + sxsy * sz;
    m[0] = cycz; m[4] = cysz; m[8] = -sy;
    m6 = m6 - sx * cz;
    m[1] = m1; m[5] = m5; m[9] = sxcy; m[2] = m2; m[6] = m6; m[10] = cxcy;
    FLD(m, 0x0C, uint32_t) = FLD(t, 0, uint32_t);
    FLD(m, 0x1C, uint32_t) = FLD(t, 4, uint32_t);
    FLD(m, 0x2C, uint32_t) = FLD(t, 8, uint32_t);
    return m5;
}

/* USA 00491D78 (EU 00491D50) Matrix34 = scale * Euler XYZ (radians, via the game's sin
 * 0059163C / cos 005909A0, native/robust) + translation:
 *   row0 = (Sx*(cy*cz), Sy*((sx*sy)*cz - cx*sz), Sz*(sx*sz + (cx*cz)*sy), t0)
 *   row1 = (Sx*(cy*sz), Sy*(cx*cz + (sx*sy)*sz), Sz*(sy*(cx*sz) - sx*cz), t1)
 *   row2 = (-(Sx*sy),   Sy*(sx*cy),              Sz*(cx*cy),              t2)
 * sin x, y, z then cos x, y, z are called in that order; scale loaded after; translation words
 * copied after the stores. Returns r0 = the t[2] word. 10 caller files. */
uint32_t func_00491D78(float *m, const float *scale, const float *rad, const float *t) {
    float sx = func_0059163C(rad[0]);
    float sy = func_0059163C(rad[1]);
    float sz = func_0059163C(rad[2]);
    float cx = func_005909A0(rad[0]);
    float cy = func_005909A0(rad[1]);
    float cz = func_005909A0(rad[2]);
    float cxsz = cx * sz, sxsz = sx * sz, sxsy = sx * sy, cysz = cy * sz;
    float Sx = scale[0];
    float cxcz = cx * cz, cycz = cy * cz, sxcy = sx * cy;
    float m8 = -(Sx * sy);
    float cxcy = cx * cy;
    float s11 = sy * cxsz;
    float Sy = scale[1];
    float s6 = sxsy * cz - cxsz;
    float m4 = cysz * Sx;
    float Sz = scale[2];
    float s8 = sxsz + cxcz * sy;
    float s3 = cxcz + sxsy * sz;
    float m0 = cycz * Sx;
    float m9 = sxcy * Sy;
    float m10 = cxcy * Sz;
    s11 = s11 - sx * cz;
    float m1 = Sy * s6;
    m[0] = m0;
    float m5 = Sy * s3;
    m[4] = m4;
    m[8] = m8;
    float m6 = s11 * Sz;
    float m2 = s8 * Sz;
    m[5] = m5; m[9] = m9; m[6] = m6; m[10] = m10; m[1] = m1; m[2] = m2;
    FLD(m, 0x0C, uint32_t) = FLD(t, 0, uint32_t);
    FLD(m, 0x1C, uint32_t) = FLD(t, 4, uint32_t);
    uint32_t w = FLD(t, 8, uint32_t);
    FLD(m, 0x2C, uint32_t) = w;
    return w;
}

/* ------------------------------------------------------------------ other */

/* USA 004918CC (EU 004918A4) Matrix34 scale columns in place: column 0 *= sx, 1 *= sy, 2 *= sz
 * (translation untouched). Callers `int f(float *, float, float, float)`. Returns m. */
uint32_t func_004918CC(float *m, float sx, float sy, float sz) {
    float a0 = m[0] * sx, a4 = m[4] * sx, a1 = m[1] * sy, a5 = m[5] * sy;
    float a2 = m[2] * sz, a6 = m[6] * sz, a10 = m[10] * sz, a8 = m[8] * sx, a9 = m[9] * sy;
    m[0] = a0; m[4] = a4; m[1] = a1; m[5] = a5; m[2] = a2; m[6] = a6;
    m[8] = a8; m[9] = a9; m[10] = a10;
    return gp_u32(m);
}

/* USA 00492078 (EU 00492050) Matrix34 = Matrix34 a * Matrix33 b (rotation part), translation
 * of a copied (bit move):  o[r][j] = (a[r][0]*b[0][j] + a[r][1]*b[1][j]) + a[r][2]*b[2][j].
 * All loads before the stores. Returns dst. 5 caller files. */
uint32_t func_00492078(float *dst, const float *a, const float *b) {
    float A[12], B[9], o[12];
    memcpy(A, a, 48);
    memcpy(B, b, 36);
    for (int r = 0; r < 3; r++) {
        for (int j = 0; j < 3; j++) {
            float v = A[r * 4] * B[j];
            v = v + A[r * 4 + 1] * B[3 + j];
            v = v + A[r * 4 + 2] * B[6 + j];
            o[r * 4 + j] = v;
        }
        memcpy(&o[r * 4 + 3], &A[r * 4 + 3], 4);
    }
    memcpy(dst, o, 48);
    return gp_u32(dst);
}
