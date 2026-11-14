/* Tests for the round-2 follow-up rewrites (hand-derived expected values from the ARM code):
 *   0051D2F4 integer angle chase (vcvt saturation / NaN), 00581A18 grid cell (saturation),
 *   00115960 Matrix44 multiply (vldm-pair bit-cast, aliasing), 0051E5F8 animation rotation
 *   (round-2 prototype, floor with vcvt.s32, NaN), 00431F44 is covered by kcl tests.
 * Build: see run_tests.sh. */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "gameplay.h"
#include "lowmem.h"

static int fails, checks;
#define CHECK(c) do { checks++; if (!(c)) { fails++; printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #c); } } while (0)

int func_0051D2F4(int *cur, int target, int minStep, int maxStep, float rate);
int func_00581A18(uint32_t unused, float *p, int layer);
int func_00115960(float *out, float *a, float *b);
int func_0051E5F8(int self_w, float *out, uint32_t a, float f0, float f1);

/* ---- stubs for 0051E5F8 ---- */
uint32_t data_0070C8E0;
static float g_t;  static uint32_t g_frame; static int g_copied, g_quat;
static float g_f0, g_f1; static uint32_t g_a;
float func_0051E8AC(int self, float *a, float f0, float f1) {
    g_a = gp_u32(a); g_f0 = f0; g_f1 = f1; return g_t;
}
int func_0048B5D4(float *q, float *keys, uint32_t frame) { g_frame = frame; return 0; }
int func_00491404(float *m, float *q) { g_quat++; return 0x55 + 0 * g_quat; }
int func_001151CC(uint32_t *d, uint32_t *s) { g_copied++; return 0x66; }

static void test_chase(void) {
    int c;
    c = 0;    CHECK(func_0051D2F4(&c, 1000, 10, 100, 0.5f) == 0 && c == 100);    /* 500 -> max 100 */
    c = 0;    CHECK(func_0051D2F4(&c, 1000, 10, 600, 0.5f) == 0 && c == 500);
    c = 0;    CHECK(func_0051D2F4(&c, -1000, 10, 600, 0.5f) == 0 && c == -500);  /* |-500| */
    c = 0;    CHECK(func_0051D2F4(&c, 5, 10, 600, 0.5f) == 1 && c == 5);         /* step 10 >= 5 */
    c = 0;    CHECK(func_0051D2F4(&c, -10, 10, 600, 0.5f) == 1 && c == -10);     /* -step == diff */
    /* NaN rate: vcvt -> 0 -> clamped to minStep 10 (x86 cast: 0x80000000 -> maxStep) */
    c = 0;    CHECK(func_0051D2F4(&c, 1000, 10, 600, NAN) == 0 && c == 10);
    /* overflow: diff 0x7FFFFFFF * 2 saturates to 0x7FFFFFFF -> clamp to max 600 */
    c = 0;    CHECK(func_0051D2F4(&c, 0x7FFFFFFF, 10, 600, 2.0f) == 0 && c == 600);
    /* maxStep 0x80000000 sentinel: step -> 0x80000000 -> snap to target */
    c = 0;    CHECK(func_0051D2F4(&c, 1000, INT32_MIN, INT32_MIN, -1e30f) == 1 && c == 1000);
    /* wrap: cur near INT_MAX, target near INT_MIN: diff wraps to +2 */
    c = 0x7FFFFFFF; CHECK(func_0051D2F4(&c, INT32_MIN + 1, 1, 1, 1.0f) == 0 && c == INT32_MIN);
}

static void test_cell(void) {
    char *mgr = lowalloc(0x40);
    char *g = lowalloc(0x183C + 2 * 0x143 * 4 + 0x40);
    data_0070C8E0 = gp_u32(mgr);
    FLD(mgr, 0x38, uint32_t) = gp_u32(g);
    char *r = g + 0x183C + 1 * 0x143 * 4;            /* layer 1 */
    FLD(r, 0x4, float) = -10; FLD(r, 0x10, float) = 10;   /* centre x 0 */
    FLD(r, 0xC, float) = 0;   FLD(r, 0x18, float) = 20;   /* centre z 10 */
    float p[3] = {3, 0, 14};                         /* cx = (3+26)*.5 = 14.5 -> 14; cz = (4+26)*.5 = 15 */
    CHECK(func_00581A18(0, p, 1) == 14 + 15 * 26);
    float q[3] = {-100, 0, 1e30f};                   /* cx <= 0 -> 0; cz saturates -> 25 */
    CHECK(func_00581A18(0, q, 1) == 0 + 25 * 26);
    float n[3] = {NAN, 0, 3e9f};                     /* NaN -> 0; 1.5e9 -> 25 */
    CHECK(func_00581A18(0, n, 1) == 25 * 26);
}

static void test_m44(void) {
    float a[16], b[16], o[16], ref[16];
    for (int i = 0; i < 16; i++) { a[i] = (float)(i + 1); b[i] = (float)(16 - i) * 0.5f; }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float v = b[j] * a[4 * i];
            v = v + b[4 + j] * a[4 * i + 1];
            v = v + b[8 + j] * a[4 * i + 2];
            v = v + b[12 + j] * a[4 * i + 3];
            ref[4 * i + j] = v;
        }
    func_00115960(o, a, b);
    CHECK(memcmp(o, ref, sizeof o) == 0);
    /* identity b: out = a exactly; in place out == a and out == b */
    float id[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1}, c[16];
    memcpy(c, a, sizeof c); func_00115960(c, c, id); CHECK(memcmp(c, a, sizeof c) == 0);
    memcpy(c, b, sizeof c); func_00115960(c, a, c); CHECK(memcmp(c, ref, sizeof c) == 0);
    /* unfused order: (1+2^-12)^2 - (1+2^-11) = 2^-24 with FMA, 0 with vmul+vmla */
    float e = 1.0f + 1.0f / 4096, a2[16] = {0}, b2[16] = {0};
    a2[0] = e; a2[1] = -(1.0f + 1.0f / 2048); b2[0] = e; b2[4] = 1.0f;
    func_00115960(o, a2, b2); CHECK(o[0] == 0.0f);
}

static void test_rot(void) {
    char *self = lowalloc(0x2C00);
    float out[9]; uint32_t vec = gp_u32(lowalloc(16));
    FLD(self, 0x2B80, int32_t) = 10;
    g_t = 0.25f; CHECK(func_0051E5F8((int)gp_u32(self), out, vec, 3.0f, 4.0f) == 0x55);
    CHECK(g_frame == 2 && g_a == vec && g_f0 == 3.0f && g_f1 == 4.0f);
    g_t = -0.25f; func_0051E5F8((int)gp_u32(self), out, vec, 0, 0); CHECK(g_frame == (uint32_t)-3);   /* floor(-2.5) */
    g_t = -0.2f;  func_0051E5F8((int)gp_u32(self), out, vec, 0, 0); CHECK(g_frame == (uint32_t)-2);   /* -2 exact */
    g_t = NAN;    func_0051E5F8((int)gp_u32(self), out, vec, 0, 0); CHECK(g_frame == (uint32_t)-1);   /* vcvt 0, `hi` on NaN */
    g_t = 1e30f;  func_0051E5F8((int)gp_u32(self), out, vec, 0, 0); CHECK(g_frame == 0x7FFFFFFFu);    /* saturate */
    g_copied = 0; g_t = 1.0f; CHECK(func_0051E5F8((int)gp_u32(self), out, vec, 0, 0) == 0x66 && g_copied == 1);
    FLD(self, 0x2B80, int32_t) = 0; g_t = 0.5f; g_copied = 0;
    func_0051E5F8((int)gp_u32(self), out, vec, 0, 0); CHECK(g_copied == 1);
}

int main(void) {
    test_chase();
    test_cell();
    test_m44();
    test_rot();
    printf("residual_test: %d/%d checks passed (%d-bit)\n", checks - fails, checks, (int)(8 * sizeof(void *)));
    return fails != 0;
}
