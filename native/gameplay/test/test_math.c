/* Unit tests for the exact native math rewrites in native/gameplay/ (run: ./run_math_tests.sh).
 * Expected values are derived by hand from the ARM instruction semantics (operation order,
 * reciprocal-multiply, vmla rounding, VFP condition codes on NaN, vcvt saturation). The lookup
 * tables are SYNTHETIC (computed here with libm), never the game's data: the tests check the
 * formulas, indexing and branch structure, not the table contents. */
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../gameplay.h"
#include "../gp_math.h"

/* synthetic stand-ins for the game tables the functions index */
float data_006C3AB8[256 * 4];      /* sinCos idx: {sin, dsin, cos, dcos} */
float data_006A6D54[256 * 4];      /* sinCos fidx: {sin, cos, dsin, dcos} */
uint32_t data_006C53D8[130 * 2];   /* atan: {base idx, slope (float bits)} */
float data_006C4AC8[0x10000 * 2];  /* exp table (only referenced) */

int func_00115C54(float *, float *, float *);
int func_00115C70(float *, float *, float *);
int func_00115C8C(float *, float *, float *);
int func_00115D70(float *, float *, float);
int func_00115D88(float *, float *, float);
int func_00115DAC(float *, float *, float *, float);
int func_00115E10(float *, float *, float *);
int func_00115DC8(float *);
int func_00115C14(float *);
int func_00115B68(float *, float *, float *);
int func_00115CA8(float *, float *, float *);
int func_00115074(float *, float *, float *);
int func_00115CE4(float *, float *, float *);
int func_00115D18(float *, float *, float *);
int func_001157FC(float *, float *, float *);
int func_00114E74(float *, float *, float *);
int func_0011549C(float *, float *, float *);
int func_0011593C(uint32_t *);
int func_001119F4(uint32_t *, uint32_t *);
int func_00115154(float *, float *, uint32_t);
int func_004904CC(float, float);
int func_004905E0(float);
int func_0068C690(float *);
int func_004D80A4(float *, uint32_t, float);
int func_003E183C(float *, float *, float);
int func_00491E80(float *, uint32_t, uint32_t, uint32_t);
int func_00491624(float *, uint32_t, uint32_t, uint32_t);

static int fails, checks;
#define CHECK(c) do { checks++; if (!(c)) { fails++; printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #c); } } while (0)
static int feq(float a, float b) { return gp_f2u(a) == gp_f2u(b); }   /* bit-exact */

static void tables(void) {
    const double tau = 6.283185307179586;
    for (int i = 0; i < 256; i++) {
        float s0 = (float)sin(tau * i / 256), s1 = (float)sin(tau * (i + 1) / 256);
        float c0 = (float)cos(tau * i / 256), c1 = (float)cos(tau * (i + 1) / 256);
        float *e = &data_006C3AB8[i * 4];
        e[0] = s0; e[1] = s1 - s0; e[2] = c0; e[3] = c1 - c0;
        float *g = &data_006A6D54[i * 4];
        g[0] = s0; g[1] = c0; g[2] = s1 - s0; g[3] = c1 - c0;
    }
    for (int i = 0; i <= 129; i++) {
        double a0 = atan(i / 128.0) / tau * 4294967296.0, a1 = atan((i + 1) / 128.0) / tau * 4294967296.0;
        data_006C53D8[i * 2] = (uint32_t)(a0 + 0.5);
        data_006C53D8[i * 2 + 1] = gp_f2u((float)(a1 - a0));
    }
    data_006C53D8[128 * 2] = 0x20000000u;   /* atan(1) = 45 deg exactly */
}

static void test_vec(void) {
    float a[3] = {1.5f, -2.0f, 4.0f}, b[3] = {0.25f, 3.0f, -1.0f}, o[3];
    func_00115C54(o, a, b); CHECK(feq(o[0], 1.75f) && feq(o[1], 1.0f) && feq(o[2], 3.0f));
    func_00115C70(o, a, b); CHECK(feq(o[0], 1.25f) && feq(o[1], -5.0f) && feq(o[2], 5.0f));
    func_00115C8C(o, a, b); CHECK(feq(o[0], 0.375f) && feq(o[1], -6.0f) && feq(o[2], -4.0f));
    func_00115D70(o, a, 2.0f); CHECK(feq(o[0], 3.0f) && feq(o[1], -4.0f) && feq(o[2], 8.0f));
    /* aliasing: out == a */
    float c[3] = {1, 2, 3};
    func_00115C54(c, c, c); CHECK(feq(c[0], 2) && feq(c[1], 4) && feq(c[2], 6));
    /* divide = multiply by the reciprocal: 5 * (1/3) rounds to 0x3FD55556, 5/3 to 0x3FD55555 */
    float v5[3] = {5, 5, 5};
    func_00115D88(o, v5, 3.0f);
    CHECK(gp_f2u(o[0]) == 0x3FD55556u);
    /* madd: b + a*s */
    func_00115DAC(o, a, b, 2.0f); CHECK(feq(o[0], 3.25f) && feq(o[1], -1.0f) && feq(o[2], 7.0f));
    /* vmla is not fused: (1+2^-12)^2 rounds to 1+2^-11 (tie to even) before the add, so the sum
     * is exactly 0; a contracted FMA would give 2^-24 (the build needs -ffp-contract=off) */
    float fa[3] = {1.0f + 0x1p-12f, 0, 0}, fb[3] = {-(1.0f + 0x1p-11f), 0, 0};
    func_00115DAC(o, fa, fb, 1.0f + 0x1p-12f);
    CHECK(feq(o[0], 0.0f));
    /* cross: x = a1*b2 - a2*b1 ... */
    float x[3] = {1, 0, 0}, y[3] = {0, 1, 0};
    func_00115E10(o, x, y); CHECK(feq(o[0], 0) && feq(o[1], 0) && feq(o[2], 1));
    func_00115E10(o, a, b); CHECK(feq(o[0], 2.0f - 12.0f) && feq(o[1], 1.0f + 1.5f) && feq(o[2], 4.5f + 0.5f));
}

static void test_normalize(void) {
    float v[3] = {3, 4, 0};
    float len = albw_vec3_normalize(v);
    CHECK(feq(len, 5.0f));
    CHECK(feq(v[0], 3.0f * (1.0f / 5.0f)) && feq(v[1], 4.0f * (1.0f / 5.0f)) && feq(v[2], 0.0f));
    /* func_ keeps the int prototype and returns the length's bits */
    float w[3] = {0, 0, 2};
    CHECK((uint32_t)func_00115DC8(w) == 0x40000000u && feq(w[2], 1.0f));
    /* zero: unchanged, returns 0 */
    float z[3] = {0, 0, 0};
    CHECK(feq(albw_vec3_normalize(z), 0.0f) && feq(z[0], 0) && feq(z[1], 0) && feq(z[2], 0));
    /* NaN length: bxle taken (unordered) -> vector NOT written */
    float n[3] = {NAN, 1.0f, 2.0f};
    float ln = albw_vec3_normalize(n);
    CHECK(ln != ln && n[1] == 1.0f && n[2] == 2.0f);
    float v2[2] = {0, -3};
    CHECK(feq(albw_vec2_normalize(v2), 3.0f) && feq(v2[1], -3.0f * (1.0f / 3.0f)));
}

static void test_quat(void) {
    float a[3] = {1, 0, 0}, b[3] = {0, 1, 0}, nb[3] = {-1, 0, 0}, q[4];
    CHECK(func_00115B68(q, a, a) == 1 && feq(q[0], 0) && feq(q[1], 0) && feq(q[2], 0) && feq(q[3], 1.0f));
    /* opposite vectors: identity from the code-embedded constant (crashed natively before) */
    memset(q, 0xAA, sizeof q);
    CHECK(func_00115B68(q, a, nb) == 0 && feq(q[0], 0) && feq(q[1], 0) && feq(q[2], 0) && feq(q[3], 1.0f));
    CHECK(func_00115B68(q, a, b) == 1);
    float s = sqrtf(2.0f);
    CHECK(feq(q[0], 0) && feq(q[1], 0) && feq(q[2], 1.0f * (1.0f / s)) && feq(q[3], s * 0.5f));
}

static void test_matrix(void) {
    /* Matrix34 * Vec3 adds the translation FIRST: ((1e8 + 3) + 3) + 3 = 1e8 in float (each +3
     * is below half an ulp), while (3 + 3 + 3) + 1e8 would give 1e8 + 8. */
    float m[12] = {3, 3, 3, 1e8f, 0, 1, 0, 0, 0, 0, 1, 0}, v[3] = {1, 1, 1}, o[3];
    func_00115CA8(o, m, v); CHECK(feq(o[0], 1e8f) && feq(o[1], 1.0f) && feq(o[2], 1.0f));
    func_00115074(o, m, v); CHECK(feq(o[0], 1e8f));
    func_00115D18(o, m, v); CHECK(feq(o[0], 9.0f) && feq(o[1], 1.0f));
    float m3[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    func_00115CE4(o, m3, v); CHECK(feq(o[0], 6) && feq(o[1], 15) && feq(o[2], 24));
    /* Matrix34 multiply: identity, aliasing, translation composition */
    uint32_t id[12];
    func_0011593C(id);
    float I[12]; memcpy(I, id, sizeof I);
    CHECK(feq(I[0], 1) && feq(I[5], 1) && feq(I[10], 1) && feq(I[3], 0) && feq(I[11], 0));
    float A[12] = {0, -1, 0, 5, 1, 0, 0, 6, 0, 0, 1, 7}, R[12], R2[12];
    func_001157FC(R, A, I); CHECK(memcmp(R, A, sizeof A) == 0);
    func_001157FC(R, A, A);                      /* A*A: rotate 180 about z, translation A*t + t */
    CHECK(feq(R[0], -1) && feq(R[1], 0) && feq(R[5], -1) && feq(R[3], 5 - 6) && feq(R[7], 6 + 5) && feq(R[11], 14));
    memcpy(R2, A, sizeof A);
    func_00114E74(R2, R2, R2);                   /* in place == out of place */
    CHECK(memcmp(R2, R, sizeof R) == 0);
    float B[9] = {0, -1, 0, 1, 0, 0, 0, 0, 1}, C[9];
    func_0011549C(C, B, B); CHECK(feq(C[0], -1) && feq(C[4], -1) && feq(C[8], 1) && feq(C[1], 0));
    uint32_t cp[12] = {0};
    func_001119F4(cp, id); CHECK(memcmp(cp, id, sizeof id) == 0);
    CHECK((uint32_t)func_001119F4(cp, cp) == gp_u32(cp));
}

static void test_trig(void) {
    float s, c;
    func_00115154(&s, &c, 0x40000000u);          /* entry 64, f = 0 */
    CHECK(feq(s, data_006C3AB8[256]) && feq(c, data_006C3AB8[258]));
    func_00115154(&s, &c, 0x00800000u);          /* entry 0, f = 0.5 */
    CHECK(feq(s, data_006C3AB8[0] + data_006C3AB8[1] * 0.5f) && feq(c, data_006C3AB8[2] + data_006C3AB8[3] * 0.5f));
    /* atan2: quadrant constants */
    CHECK((uint32_t)func_004904CC(0.0f, 0.0f) == 0);
    CHECK((uint32_t)func_004904CC(1.0f, 1.0f) == 0x20000000u);
    CHECK((uint32_t)func_004904CC(1.0f, 0.0f) == 0x40000000u);
    CHECK((uint32_t)func_004904CC(0.0f, -1.0f) == 0x80000000u);
    CHECK((uint32_t)func_004904CC(-1.0f, 0.0f) == 0xC0000000u);
    CHECK((uint32_t)func_004904CC(-1.0f, -1.0f) == 0xA0000000u);   /* x<0,y<0, x>y false -> atan(1)+0x80000000 */
    /* NaN y: blt taken twice -> atan(1/NaN) = base[0] -> 0xC0000000 (Ghidra's C indexed with
     * (int)NaN = 0x80000000 and read far outside the table) */
    CHECK((uint32_t)func_004904CC(NAN, 1.0f) == 0xC0000000u);
    CHECK(func_004905E0(NAN) == (int)data_006C53D8[0]);
    /* yaw of a vector = atan2(v.x, v.z) */
    float fwd[3] = {0, 5, 1}, right[3] = {1, 0, 0};
    CHECK(func_0068C690(fwd) == 0 && (uint32_t)func_0068C690(right) == 0x40000000u);
    /* polar -> XZ, y untouched */
    float p[3] = {9, 9, 9};
    func_004D80A4(p, 0x40000000u, 2.0f);
    CHECK(feq(p[0], data_006C3AB8[256] * 2.0f) && feq(p[1], 9) && feq(p[2], data_006C3AB8[258] * 2.0f));
    /* float-index sincos: |a| reduced mod 65536 by a bit-pattern compare, sign applied to sin */
    func_003E183C(&s, &c, -1.5f);
    CHECK(feq(s, -(data_006A6D54[4] + 0.5f * data_006A6D54[6])) && feq(c, data_006A6D54[5] + 0.5f * data_006A6D54[7]));
    func_003E183C(&s, &c, 65538.0f);
    CHECK(feq(s, data_006A6D54[8]) && feq(c, data_006A6D54[9]));
    /* Euler matrices: X rotation only -> rows (1,0,0), (0,cx,-sx), (0,sx,cx) */
    float M[12], M3[9];
    func_00491E80(M, 0x40000000u, 0, 0);
    float sx = data_006C3AB8[256], cx = data_006C3AB8[258], s0 = data_006C3AB8[0], c0 = data_006C3AB8[2];
    CHECK(feq(M[8], -s0) && feq(M[9], sx * c0) && feq(M[10], cx * c0) && feq(M[3], 0) && feq(M[11], 0));
    func_00491624(M3, 0x40000000u, 0, 0);
    CHECK(feq(M3[0], M[0]) && feq(M3[1], M[1]) && feq(M3[2], M[2]) && feq(M3[4], M[5]) && feq(M3[8], M[10]));
}

static void test_vcvt(void) {
    CHECK(gp_vcvt_s32(NAN) == 0 && gp_vcvt_s32(3e9f) == 0x7FFFFFFF && gp_vcvt_s32(-3e9f) == (int32_t)0x80000000u);
    CHECK(gp_vcvt_s32(-1.5f) == -1 && gp_vcvt_s32(2.9f) == 2);
    CHECK(gp_vcvt_u32(-1.0f) == 0 && gp_vcvt_u32(5e9f) == 0xFFFFFFFFu && gp_vcvt_u32(3e9f) == 3000000000u && gp_vcvt_u32(NAN) == 0);
    CHECK(VCMP_LT(NAN, 0.0f) && VCMP_LE(NAN, 0.0f) && !VCMP_GT(NAN, 0.0f) && !VCMP_GE(NAN, 0.0f) && VCMP_HI(NAN, 0.0f));
    CHECK(gp_f2u(gp_ftz(1e-40f)) == 0 && gp_f2u(gp_ftz(-1e-40f)) == 0x80000000u && feq(gp_ftz(1.0f), 1.0f));
}

int main(void) {
    tables();
    test_vec();
    test_normalize();
    test_quat();
    test_matrix();
    test_trig();
    test_vcvt();
    printf("%d/%d checks passed (%s)\n", checks - fails, checks, sizeof(void *) == 8 ? "64-bit" : "32-bit");
    return fails != 0;
}
