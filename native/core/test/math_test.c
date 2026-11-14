// SOURCES: math_mtx.c math_vec.c ../gameplay/func_00115154.c ../gameplay/func_00491E80.c
/* Tests for the tier-5 math rewrites (native/core/math_mtx.c, math_vec.c). Synthetic tables
 * (no game data): sin/cos table with exact 0/+-1 at the quarter turns, ln table. Expected
 * values are derived by hand from the ARM semantics (exact cases), cross-checked against the
 * independent gameplay rewrite of 00491E80 (bitwise), or checked as identities with tolerance. */
#include <math.h>
#include "core_test.h"
#include "core.h"
#include "core_math.h"

float data_006C3AB8[256 * 4];
float data_006C4BD0[257 * 2];
uint32_t data_007270F4;
float data_007AF2A4[12];
static int guard_calls;
int func_00100174(uint32_t *g) {
    uint32_t e = 0;
    guard_calls++;
    return __atomic_compare_exchange_n(g, &e, 1, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
}
float func_0059163C(float x) { return sinf(x); }
float func_005909A0(float x) { return cosf(x); }
extern int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az);

static float sn(int i) {
    i &= 255;
    if (i == 0 || i == 128) return 0.0f;
    if (i == 64) return 1.0f;
    if (i == 192) return -1.0f;
    return (float)sin(2 * M_PI * i / 256);
}
static void tables(void) {
    for (int i = 0; i < 256; i++) {
        float s0 = sn(i), s1 = sn(i + 1), c0 = sn(i + 64), c1 = sn(i + 65);
        data_006C3AB8[i * 4 + 0] = s0; data_006C3AB8[i * 4 + 1] = s1 - s0;
        data_006C3AB8[i * 4 + 2] = c0; data_006C3AB8[i * 4 + 3] = c1 - c0;
    }
    for (int i = 0; i <= 256; i++) {
        float b0 = (float)log(1 + i / 256.0), b1 = (float)log(1 + (i + 1) / 256.0);
        data_006C4BD0[i * 2] = b0; data_006C4BD0[i * 2 + 1] = b1 - b0;
    }
}
static uint32_t U(float f) { return gp_f2u(f); }
static int near(float a, float b, float eps) { return fabsf(a - b) <= eps; }

static void test_copies(void) {
    float *a = lowalloc(4096), *b = a + 64;
    for (int i = 0; i < 16; i++) a[i] = (float)(i + 1);
    CHECK_EQ(func_001151EC(b, a), gp_u32(b));
    CHECK(!memcmp(a, b, 48));
    CHECK_EQ(func_00115224(b, a), gp_u32(b) + 64);   /* vstmia r0! writeback */
    CHECK(!memcmp(a, b, 64));
    CHECK_EQ(func_001151D8(b, a), gp_u32(b) + 36);   /* writeback */
    CHECK(b[3] == 5.0f && b[6] == 9.0f && b[8] == 11.0f);
    CHECK_EQ(func_001150B8(a, a), gp_u32(a));
    CHECK_EQ(func_001150B0(gp_u32(b) - 4, a), gp_u32(b));
    /* 001151F8 with dst aliasing the translation input: everything loaded first */
    float r[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    float *m = a + 128;
    m[0] = 10; m[1] = 11; m[2] = 12;
    CHECK_EQ(func_001151F8(m, r, m), gp_u32(m));
    CHECK(m[0] == 1 && m[3] == 10 && m[4] == 4 && m[7] == 11 && m[8] == 7 && m[11] == 12);
    /* 001150CC GPU packet: header at +4, rows reversed */
    uint32_t pk[13];
    CHECK_EQ(func_001150CC(pk, a, 0xDEADBEEFu), gp_u32(pk));
    CHECK_EQ(pk[1], 0xDEADBEEFu);
    CHECK(gp_u2f(pk[4]) == 1 && gp_u2f(pk[3]) == 2 && gp_u2f(pk[2]) == 3 && gp_u2f(pk[0]) == 4);
    CHECK(gp_u2f(pk[8]) == 5 && gp_u2f(pk[5]) == 8 && gp_u2f(pk[12]) == 9 && gp_u2f(pk[9]) == 12);
    uint32_t pk2[17];
    func_00115108(pk2, a, 7);
    CHECK(pk2[1] == 7 && gp_u2f(pk2[16]) == 13 && gp_u2f(pk2[13]) == 16);
}

static void test_inverse(void) {
    float m[9] = {2, 0, 0, 0, 4, 0, 0, 0, 8}, o[12];
    func_0011529C(o, m);
    CHECK(o[0] == 0.5f && o[4] == 0.25f && o[8] == 0.125f && U(o[1]) == 0x80000000u /* -(0*inv) */);
    /* singular (det == -0.0 bits too) -> identity */
    float s[9] = {0, 0, 0, 0, 1, 0, 0, 0, 1};
    func_0011529C(o, s);
    CHECK(o[0] == 1 && o[4] == 1 && o[8] == 1 && o[1] == 0);
    float ns[9] = {-0.0f, 0, 0, 0, 1, 0, 0, 0, 1};
    func_001153A0(o, ns);
    CHECK(o[0] == 1 && o[4] == 1);
    /* inverse-transpose of a shear: (M^-1)^T */
    float sh[9] = {1, 2, 0, 0, 1, 0, 0, 0, 1};
    func_001153A0(o, sh);
    CHECK(o[0] == 1 && o[1] == 0 && o[3] == -2 && o[4] == 1);
    func_0011529C(o, sh);
    CHECK(o[0] == 1 && o[1] == -2 && o[3] == 0 && o[4] == 1);
    /* in place */
    float ip[9] = {2, 0, 0, 0, 4, 0, 0, 0, 8};
    func_0011529C(ip, ip);
    CHECK(ip[0] == 0.5f && ip[8] == 0.125f);
    /* Matrix34 */
    float m34[12] = {2, 0, 0, 2, 0, 4, 0, 4, 0, 0, 8, 8}, o34[12];
    CHECK_EQ(func_00114F58(o34, m34), 1);
    CHECK(o34[0] == 0.5f && o34[3] == -1 && o34[7] == -1 && o34[11] == -1 && o34[10] == 0.125f);
    func_0011558C(o34, m34);
    CHECK(o34[5] == 0.25f && o34[7] == -1);
    float z34[12] = {0}, keep[12];
    for (int i = 0; i < 12; i++) keep[i] = o34[i] = 42;
    CHECK_EQ(func_00114F58(o34, z34), 0);
    CHECK(!memcmp(o34, keep, 48));                      /* untouched when singular */
    func_0011558C(o34, z34);
    CHECK(o34[0] == 1 && o34[5] == 1 && o34[10] == 1 && o34[3] == 0 && o34[11] == 0);
    /* general: M * M^-1 ~ I */
    float g[12] = {0.8f, -0.3f, 0.2f, 5, 0.1f, 0.9f, -0.4f, -3, 0.3f, 0.2f, 1.1f, 7}, gi[12];
    func_00114F58(gi, g);
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++) {
            float v = g[r * 4] * gi[c] + g[r * 4 + 1] * gi[4 + c] + g[r * 4 + 2] * gi[8 + c] + (c == 3 ? g[r * 4 + 3] : 0);
            CHECK(near(v, r == c ? 1.0f : 0.0f, 1e-5f));
        }
}

static void test_quat(void) {
    float q[4] = {0, 0, 0, 1}, m[12], m3[9], q2[4];
    CHECK_EQ(func_00491B3C(m, q), gp_u32(m));
    CHECK(m[0] == 1 && m[5] == 1 && m[10] == 1 && m[1] == 0 && m[3] == 0 && m[11] == 0);
    /* 00491404: {x, y, z, w} too; x = 1 -> diag(1, -1, -1); identity quat -> identity */
    float qa[4] = {1, 0, 0, 0}, qi[4] = {0, 0, 0, 1};
    CHECK_EQ(func_00491404(m3, qa), gp_u32(m3));
    CHECK(m3[0] == 1 && m3[4] == -1 && m3[8] == -1 && m3[1] == 0);
    func_00491404(m3, qi);
    CHECK(m3[0] == 1 && m3[4] == 1 && m3[8] == 1 && m3[5] == 0);
    /* 00491404 == the 3x3 part of 00491B3C (same formulas) */
    for (int k = 0; k < 1; k++) {
        float qq[4] = {0.3f, -0.5f, 0.1f, 0.806226f};
        func_00491404(m3, qq);
        func_00491B3C(m, qq);
        for (int r = 0; r < 3; r++)
            for (int j = 0; j < 3; j++) CHECK_EQ(U(m3[r * 3 + j]), U(m[r * 4 + j]));
    }
    /* round trip through the 4 branches of quat_from_rot */
    float qs[5][4] = {{0.1f, 0.2f, 0.3f, 0.927362f}, {1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0},
                      {0.6f, 0.0f, 0.8f, 0.0f}};
    for (int k = 0; k < 5; k++) {
        func_00491B3C(m, qs[k]);
        func_00491C08(q2, m);
        float sgn = (q2[0] * qs[k][0] + q2[1] * qs[k][1] + q2[2] * qs[k][2] + q2[3] * qs[k][3]) < 0 ? -1.0f : 1.0f;
        for (int i = 0; i < 4; i++) CHECK(near(q2[i] * sgn, qs[k][i], 1e-5f));
    }
    /* exact 180-degree cases */
    float dx[9] = {1, 0, 0, 0, -1, 0, 0, 0, -1}, dy[9] = {-1, 0, 0, 0, 1, 0, 0, 0, -1};
    float dz[9] = {-1, 0, 0, 0, -1, 0, 0, 0, 1};
    func_004914B4(q2, dx); CHECK(q2[0] == 1 && q2[1] == 0 && q2[2] == 0 && q2[3] == 0);
    func_004914B4(q2, dy); CHECK(q2[1] == 1 && q2[0] == 0 && q2[3] == 0);
    func_004914B4(q2, dz); CHECK(q2[2] == 1 && q2[3] == 0);
    /* all-zero rotation: X branch, root sqrt(1) = 1 */
    float zz[9] = {0};
    func_004914B4(q2, zz); CHECK(q2[0] == 0.5f && q2[3] == 0);
    /* NaN trace takes the else path (ble taken on unordered) */
    float nn[9] = {NAN, 0, 0, 0, 0, 0, 0, 0, 0};
    func_004914B4(q2, nn); CHECK(isnan(q2[0]));
}

static void test_euler(void) {
    float a[12], b[12], c[9];
    uint32_t ang[3][3] = {{0x12345678u, 0x9ABCDEF0u, 0x0F0F0F0Fu}, {0, 0x40000000u, 0}, {0xC0000000u, 0x20000000u, 0x80000000u}};
    float t[3] = {1.5f, -2.5f, 3.25f};
    for (int k = 0; k < 3; k++) {
        /* 0049216C == gameplay 00491E80 rotation (independent rewrites of the same code) */
        float s0 = func_0049216C(a, ang[k], t);
        func_00491E80(b, ang[k][0], ang[k][1], ang[k][2]);
        for (int i = 0; i < 12; i++)
            if ((i & 3) != 3) CHECK_EQ(U(a[i]), U(b[i]));
        CHECK(a[3] == 1.5f && a[7] == -2.5f && a[11] == 3.25f);
        CHECK_EQ(U(s0), U(a[5]));
        /* 00491938 / 00491A18 / 00491338: same rotation */
        func_00491938(b, ang[k][0], ang[k][1], ang[k][2]);
        CHECK_EQ(func_00491A18(a, ang[k], t), U(t[2]));
        func_00491338(c, ang[k][0], ang[k][1], ang[k][2]);
        for (int r = 0; r < 3; r++)
            for (int j = 0; j < 3; j++) {
                CHECK_EQ(U(a[r * 4 + j]), U(b[r * 4 + j]));
                CHECK_EQ(U(c[r * 3 + j]), U(b[r * 4 + j]));
            }
        CHECK(b[3] == 0 && b[7] == 0 && b[11] == 0 && a[11] == 3.25f);
    }
    /* exact: ax = 90 deg -> row1 = (cx*sz, cx*cz, -sx) = (0, 0, -1) */
    func_00491938(b, 0x40000000u, 0, 0);
    CHECK(b[0] == 1 && b[4] == 0 && b[5] == 0 && b[6] == -1 && b[9] == 1 && b[10] == 0);
    /* SRT with zero angles: scale on the diagonal, translation words */
    float sc[3] = {2, 3, 4}, rad[3] = {0, 0, 0};
    CHECK_EQ(func_00491D78(a, sc, rad, t), U(t[2]));
    CHECK(a[0] == 2 && a[5] == 3 && a[10] == 4 && a[1] == 0 && U(a[8]) == 0x80000000u && a[3] == 1.5f);
    /* scale columns */
    float m[12] = {1, 1, 1, 9, 1, 1, 1, 9, 1, 1, 1, 9};
    func_004918CC(m, 2, 3, 4);
    CHECK(m[0] == 2 && m[1] == 3 && m[2] == 4 && m[3] == 9 && m[8] == 2 && m[9] == 3 && m[10] == 4);
    /* Mtx34 * Mtx33 */
    float A[12] = {1, 2, 3, 10, 4, 5, 6, 11, 7, 8, 9, 12}, B[9] = {1, 0, 0, 0, 0, 1, 0, 1, 0}, O[12];
    func_00492078(O, A, B);
    CHECK(O[0] == 1 && O[1] == 3 && O[2] == 2 && O[3] == 10 && O[5] == 6 && O[6] == 5 && O[11] == 12);
}

static void test_vec(void) {
    float seg[6] = {0, 0, 0, 10, 0, 0}, t;
    float p1[3] = {5, 3, 0}, p2[3] = {-4, 3, 0}, p3[3] = {14, 3, 0};
    CHECK(func_0049EF80(p1, seg, &t) == 9.0f && t == 0.5f);
    CHECK(func_0049EF80(p2, seg, &t) == 25.0f && t == 0.0f);
    CHECK(func_0049EF80(p3, seg, &t) == 25.0f && t == 1.0f);
    CHECK(func_0049EF80(p3, seg, NULL) == 25.0f);
    float pn[3] = {NAN, 0, 0};
    float r = func_0049EF80(pn, seg, &t);                 /* NaN dot: bhi and blt both taken */
    CHECK(isnan(t) && isnan(r));
    float zs[6] = {1, 1, 1, 1, 1, 1};                    /* zero-length: dot = 0 -> point a */
    CHECK(func_0049EF80(p1, zs, &t) == 16 + 4 + 1 && t == 0);

    float a4[4] = {0, 0, 0, 0}, b4[4] = {4, 8, 12, 16}, o4[4];
    CHECK(func_0049C154(o4, a4, b4, 0.25f) == 0.25f && o4[0] == 1 && o4[3] == 4);
    CHECK(func_0049C154(o4, a4, b4, -3.0f) == 0.0f && o4[1] == 0);
    CHECK(func_0049C154(o4, a4, b4, 7.0f) == 1.0f && o4[2] == 12);
    CHECK(isnan(func_0049C154(o4, a4, b4, NAN)) && isnan(o4[0]));
    /* in place: w first, then x, y, z */
    float w4[4] = {0, 0, 0, 0};
    func_0049C154(w4, w4, b4, 0.5f);
    CHECK(w4[0] == 2 && w4[3] == 8);

    float x[3] = {1, 0, 0}, y[3] = {0, 1, 0}, z[3];
    CHECK_EQ(func_003E2298(z, x, y), gp_u32(z));
    CHECK(z[0] == 0 && z[1] == 0 && z[2] == 1);
    func_003E2298(x, x, y);                               /* aliasing: all loads first */
    CHECK(x[0] == 0 && x[1] == 0 && x[2] == 1);

    CHECK(func_00115194(0) == 0.0f);
    CHECK(func_00115194(0x20000000u) == data_006C3AB8[32 * 4] / data_006C3AB8[32 * 4 + 2]);

    CHECK(func_004906A8(1.0f) == 0.0f);
    CHECK_EQ(U(func_004906A8(8.0f)), U(3.0f * gp_u2f(0x3F317218u)));
    CHECK(func_004906A8(-8.0f) == func_004906A8(8.0f));   /* sign ignored */
    CHECK(near(func_004906A8(10.0f), 2.302585f, 1e-4f));
    CHECK(near(func_004906A8(0.3f), -1.2039728f, 1e-4f));

    float *m = (float *)gp_ptr(func_003E2134());
    CHECK(m == data_007AF2A4 && m[0] == 1 && m[5] == 1 && m[10] == 1 && m[3] == 0 && guard_calls == 1);
    m[0] = 5;
    func_003E2134();
    CHECK(m[0] == 5 && guard_calls == 1);                 /* guarded: initialised once */
}

int main(void) {
    tables();
    test_copies();
    test_inverse();
    test_quat();
    test_euler();
    test_vec();
    return CORE_DONE();
}
