/* Standalone checks for native/gameplay player/actor rewrites (hand-derived expectations).
 *   clang -m32 -std=gnu11 -Inative/include -Inative/gameplay native/gameplay/test/player_test.c \
 *     native/gameplay/func_004CEAF0.c native/gameplay/func_0053EDD8.c native/gameplay/func_004C1388.c \
 *     native/gameplay/func_002917AC.c -o /tmp/pt && /tmp/pt          (also -m64)
 * Callees are stubs that record their arguments. Game objects are 32-bit-addressed in the game;
 * here they are static buffers, so pointer fields are only used on the -m32 build (or on -m64
 * when the buffers happen to be below 4 GiB: the test checks and skips those parts). */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "gameplay.h"

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)

uint32_t data_0070B960;
uint8_t data_007111A8[178 * 16];
static float g_rot[9];
static float g_t0, g_t1, g_a[3];
static int g_copy, g_skel;
static int skel_used(void) { return g_skel; }
int func_0051E5F8(void *self, float *out, float *a, float f0, float f1) {
    memcpy(out, g_rot, sizeof g_rot); g_t0 = f0; g_t1 = f1; memcpy(g_a, a, 12); return 0;
}
int func_001151EC(uint32_t *d, uint32_t *s) { memcpy(d, s, 48); g_copy++; return 0; }
int func_00676F18(int a, float *m, uint32_t *b) { g_skel = 1; return 0; }
int func_00676BF4(int a, float *m, uint32_t b) { g_skel = 2; return 0; }
static uint32_t g_r1;
int func_00520FC0(void) { return 0x1234; }
static float g_f0, g_f1; static uint32_t g_flags; static int g_a3;
int func_004C10C4(int self, float *p, uint32_t flags, int a3, float f0, float f1) {
    g_r1 = (uint32_t)(uintptr_t)p; g_flags = flags; g_a3 = a3; g_f0 = f0; g_f1 = f1; return 77;
}
static int g_hit; static float g_pow;
int func_0031EDC4(int act, float *pos, uint8_t flag, float power) { g_hit = act; g_pow = power; return 5; }

void func_004CEAF0(void *obj);
int func_0053EDD8(void *ctrl);
int func_004C1388(void *self);
int func_002917AC(void *ac, float *pos, uint8_t flag, float power);

static char obj[0x900];

int main(void) {
    /* 004CEAF0: base = rows {1,2,3,10},{4,5,6,20},{7,8,9,30}; scale (2,3,4); rotation = a
     * permutation matrix -> W = R*S exactly; translation copied. */
    float base[12] = {1, 2, 3, 10, 4, 5, 6, 20, 7, 8, 9, 30};
    memcpy(obj + 0x80, base, 48);
    FLD(obj, 0x74, float) = 2; FLD(obj, 0x78, float) = 3; FLD(obj, 0x7C, float) = 4;
    FLD(obj, 0x164, uint32_t) = 0x40000000;
    FLD(obj, 0x134, float) = 0.5f; FLD(obj, 0x138, float) = 7.0f;
    float R[9] = {0, 1, 0, 0, 0, 1, 1, 0, 0};   /* rows: e1, e2, e0 */
    memcpy(g_rot, R, sizeof R);
    func_004CEAF0(obj);
    float *W = (float *)(obj + 0x104);
    /* S rows: {2,6,12},{8,15,24},{14,24,36}; W row0 = S row1, row1 = S row2, row2 = S row0 */
    CHECK(W[0] == 8 && W[1] == 15 && W[2] == 24 && W[3] == 10);
    CHECK(W[4] == 14 && W[5] == 24 && W[6] == 36 && W[7] == 20);
    CHECK(W[8] == 2 && W[9] == 6 && W[10] == 12 && W[11] == 30);
    CHECK(g_t0 == 0.5f && g_t1 == 7.0f && g_a[0] == 3 && g_a[1] == 6 && g_a[2] == 9);
    CHECK((FLD(obj, 0x164, uint32_t) & 0x40000000) == 0 && (FLD(obj, 0x164, uint32_t) & 0x8000000));
    /* NaN time: ARM `ble` takes the copy path */
    uint32_t qnan = 0x7FC00000; memcpy(obj + 0x134, &qnan, 4);
    g_copy = 0; func_004CEAF0(obj); CHECK(g_copy == 1);

    /* 0053EDD8 isEnd: only with addressable 32-bit pointers */
    static char c[0x40], b1[0x40], b2[0x40];
    if ((uint64_t)(uintptr_t)b2 < 0x100000000ull) {
        FLD(c, 0x10, uint32_t) = gp_u32(b1); FLD(b1, 0x14, uint32_t) = gp_u32(b2);
        FLD(b2, 0x1C, uint8_t) = 0; FLD(b2, 0x10, float) = 1.0f;
        FLD(b2, 0x08, float) = 5; FLD(b2, 0x14, float) = 5; CHECK(func_0053EDD8(c) == 1);
        FLD(b2, 0x08, float) = 4; CHECK(func_0053EDD8(c) == 0);
        FLD(b2, 0x10, float) = -1.0f; FLD(b2, 0x08, float) = 0; CHECK(func_0053EDD8(c) == 1);
        memcpy(b2 + 0x10, &qnan, 4); FLD(b2, 0x08, float) = -0.5f;      /* NaN rate -> backwards */
        CHECK(func_0053EDD8(c) == 1);
        FLD(b2, 0x1C, uint8_t) = 1; CHECK(func_0053EDD8(c) == 0);
    }
    /* 004C1388: clamp by bit compare */
    FLD(obj, 0x8AC, uint32_t) = 0; FLD(obj, 0x3E8, int32_t) = 9;
    FLD(obj, 0x834, float) = -1.0f; CHECK(func_004C1388(obj) == 77 && g_f0 == 1.5f && g_f1 == 5.5f);
    FLD(obj, 0x834, float) = 0.03f; func_004C1388(obj);
    CHECK(g_f0 == (0.03f * 50.0f) * 1.5f);
    FLD(obj, 0x834, float) = 1.0f; func_004C1388(obj); CHECK(g_f0 == 3.0f);
    memcpy(obj + 0x834, &qnan, 4); func_004C1388(obj); CHECK(g_f0 == 3.0f);   /* NaN bits > 2.0 */
    CHECK(g_flags == 0x20000000 && g_a3 == 9 && g_r1 == 0x1234);
    FLD(obj, 0x8AC, uint32_t) = 0x800; CHECK(func_004C1388(obj) == 0);

    /* 002917AC: class-2 action forwards (obj, pos, flag, power) */
    static char ac[0x60];
    FLD(ac, 0x42, int16_t) = 3; FLD(ac, 0x48, uint32_t) = 0xABCD;
    data_007111A8[3 * 16] = 2;
    CHECK(func_002917AC(ac, 0, 0, 2.5f) == 5 && g_hit == 0xABCD && g_pow == 2.5f);
    data_007111A8[3 * 16] = 6; CHECK(func_002917AC(ac, 0, 0, 2.5f) == 0);

    CHECK(skel_used() == 0);
    printf("%s (%d failures)\n", fails ? "FAILED" : "ok", fails);
    return fails != 0;
}
