/* Unit tests for the enemy knock-back rewrites (no game data):
 *   002B0D7C knock-back start, enters 002AD8A0 (KnockBack), 002AEA54 (IceKnockBack),
 *   002AF4DC (ZeroKnockBack), 002AF59C (SmallKnockBack), 002AE9F8 (BigKnockBack), and the other
 *   enters 002ADF60, 002ACBAC, 002B1710, 002AEA9C, 002AF624, 002AE1BC, 002AE214.
 * Every callee is a stub; objects live in a MAP_32BIT arena so game pointer words work on -m64.
 * Expected values derived by hand from the EU ARM code (see the function headers).
 * Build + run (from albw-port; -no-pie so stub addresses fit the 32-bit vtable words):
 *   for m in 32 64; do clang -m$m -no-pie -std=gnu11 -Wall -Wextra -Wno-unused-parameter \
 *     -msse2 -mfpmath=sse -ffp-contract=off -Inative/include -Inative/gameplay \
 *     native/gameplay/test/knockback_test.c native/gameplay/func_002B0D7C.c \
 *     native/gameplay/func_002AD8A0.c native/gameplay/func_002AEA54.c \
 *     native/gameplay/func_002AF4DC.c native/gameplay/func_002AF59C.c \
 *     native/gameplay/func_002AE9F8.c native/gameplay/func_002ADF60.c \
 *     native/gameplay/func_002ACBAC.c native/gameplay/func_002B1710.c \
 *     native/gameplay/func_002AEA9C.c native/gameplay/func_002AF624.c \
 *     native/gameplay/func_002AE1BC.c native/gameplay/func_002AE214.c -lm -o $TMPDIR/kb$m && $TMPDIR/kb$m; done
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include "gameplay.h"

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)
#define BITS(f) gp_f2u(f)

float func_002B0D7C(int self, int id, uint32_t frames, int flag, float strength);
void func_002AD8A0(int self);
void func_002AEA54(int self);
void func_002AF4DC(int self);
void func_002AF59C(int self);
void func_002AE9F8(int self);
void func_002ADF60(int self);
void func_002ACBAC(int self);
void func_002B1710(int self);
void func_002AEA9C(int self);
void func_002AF624(int self);
void func_002AE1BC(int self);
void func_002AE214(int self);

/* ---- data the rewrite references ---- */
uint32_t data_007A9260[3] = {0x11111111u, 0x22222222u, 0x33333333u};
char data_006F5988[8];

/* ---- stub state ---- */
static float vt_ret; static uint32_t vt_frames_out; static int vt_calls; static int vt_id;
static int ab74_ret[4]; static int ab74_n; static float aa40_ret[4]; static int aa40_n;
static float ac38_ret; static int ac38_calls;
static int b2d8_ret; static int fabdc_calls; static uint32_t fabdc_p2;
static int fc07c_calls; static int fd268_calls; static int abec8_calls;
static int se_calls; static uint32_t se_name[2];
static int dfe4_calls; static int dfe4_id; static uint32_t dfe4_p4;
static int atan_calls; static float atan_y, atan_x;
static int ed24_calls; static int b193c_calls; static int b193c_id; static float b193c_s;
static int ae780_calls;

static uint32_t vt_frames_in;
static float vt68(uint32_t actor, int id, uint32_t dst, uint32_t *frames) {
    vt_calls++; vt_id = id; vt_frames_in = *frames;
    if (vt_frames_out != 0xFFFFFFFFu) *frames = vt_frames_out;
    return vt_ret;
}
void func_002AE780(int self) { ae780_calls++; }
int func_00115D70(float *out, float *v, float s) {
    float a = v[0], b = v[1], c = v[2];
    out[0] = a * s; out[1] = b * s; out[2] = c * s; return 0;
}
uint32_t func_002ABEC8(int *actor, int p) { abec8_calls++; return 0; }
uint32_t func_00150A84(int *actor, int *name, int p3) {
    se_calls++; memcpy(se_name, name, 8); return 0;
}
void func_004FD268(int actor) { fd268_calls++; }
float func_004F944C(void) { return 9.5f; }
uint32_t func_004FC07C(int actor, int p2, uint32_t p3, int p4) { fc07c_calls++; return 0; }
int func_0058AB74(int actor) { return ab74_ret[ab74_n++ & 3]; }
float func_0058AA40(int actor) { return aa40_ret[aa40_n++ & 3]; }
float func_0058AC38(int actor) { ac38_calls++; return ac38_ret; }
void func_002ADFE4(int self, int id, uint8_t p3, uint32_t p4, int p5) {
    dfe4_calls++; dfe4_id = id; dfe4_p4 = p4;
}
float func_004FB2F0(int actor, float f) { return 0.0f; }
int func_002AB2D8(uint16_t *p, int k) { return b2d8_ret; }
int func_004904CC(float y, float x) { atan_calls++; atan_y = y; atan_x = x; return 0x1234; }
uint32_t func_004FABDC(int actor, uint32_t p2, uint32_t p3, int p4) { fabdc_calls++; fabdc_p2 = p2; return 0; }
void func_002AED24(int self) { ed24_calls++; }
void func_002B193C(int self, int id, float s) { b193c_calls++; b193c_id = id; b193c_s = s; }

static char *arena, *self, *actor;
static uint32_t *vtab;

static void reset(void) {
    memset(arena, 0, 0x10000);
    self = arena + 0x1000;
    actor = arena + 0x4000;
    vtab = (uint32_t *)(arena + 0x8000);
    vtab[0x68 / 4] = (uint32_t)(uintptr_t)&vt68;
    FLD(actor, 0, uint32_t) = gp_u32(vtab);
    FLD(self, 0x34, uint32_t) = gp_u32(actor);
    vt_ret = 1.0f; vt_frames_out = 0xFFFFFFFFu; vt_calls = 0; vt_id = -1;
    ab74_n = aa40_n = 0; memset(ab74_ret, 0, sizeof ab74_ret); memset(aa40_ret, 0, sizeof aa40_ret);
    ac38_ret = 0.0f; ac38_calls = 0; b2d8_ret = 0; fabdc_calls = 0; fabdc_p2 = 0;
    fc07c_calls = fd268_calls = abec8_calls = se_calls = dfe4_calls = atan_calls = 0;
    ed24_calls = b193c_calls = ae780_calls = 0; memset(se_name, 0, 8);
}

int main(void) {
    arena = mmap(NULL, 0x10000, PROT_READ | PROT_WRITE,
                 MAP_PRIVATE | MAP_ANONYMOUS
#ifdef MAP_32BIT
                     | MAP_32BIT
#endif
                 , -1, 0);
    if (arena == MAP_FAILED) { perror("mmap"); return 2; }
    int sw;

    /* 1. cRT_KnockBack enter, hp > 0: strength 0.3, virtual returns 2.0 and frames 10.
     *    speed = 2 * 0.3f = 0x3F19999A (0.6f); velocity = dir (1,0,-0.5) * speed.
     *    id 0x10: r8 = 11 > 4 -> play_anim = 1, restart = 1. Same animation (ids 5/5, frame 3/3,
     *    +0x82A cleared) -> no restart timer; +0x15C = 7 -> 004FABDC + end frame 1e10:
     *    vcvt.u32 saturates to 0xFFFFFFFF, 1/4294967296 = 0x2F800000.
     *    +0x38: 0 | 1, 002AB2D8 != 0, +0x158 = 4 -> timer min(4,10) = 4 -> |0x20 => 0x21. */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x508, int16_t) = 3;
    FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0xF8, float) = 1.0f; FLD(self, 0xFC, float) = 0.0f; FLD(self, 0x100, float) = -0.5f;
    FLD(self, 0x158, uint8_t) = 4; FLD(self, 0x15C, int32_t) = 7;
    vt_ret = 2.0f; vt_frames_out = 10; b2d8_ret = 1;
    ab74_ret[0] = ab74_ret[1] = 5; aa40_ret[0] = aa40_ret[1] = 3.0f; ac38_ret = 1e10f;
    func_002AD8A0(sw);
    CHECK(ed24_calls == 1 && b193c_calls == 0 && vt_calls == 1 && vt_id == 0x10);
    CHECK(BITS(FLD(self, 0x3C, float)) == BITS(0.6f));
    CHECK(BITS(FLD(self, 0x40, float)) == 0);
    CHECK(BITS(FLD(self, 0x44, float)) == BITS(-0.3f));
    CHECK(FLD(self, 0x2C, uint32_t) == 10 && FLD(self, 0x14C, uint32_t) == 10);
    CHECK(BITS(FLD(self, 0x30, float)) == BITS(1.0f / 10.0f));
    CHECK(FLD(self, 0x134, uint32_t) == 4 && BITS(FLD(self, 0x138, float)) == 0x3E800000u);
    CHECK(FLD(self, 0x38, uint16_t) == 0x21);
    CHECK(fabdc_calls == 1 && fabdc_p2 == 7 && ac38_calls == 1);
    CHECK(FLD(self, 0x140, uint32_t) == 0xFFFFFFFFu);
    CHECK(BITS(FLD(self, 0x144, float)) == 0x2F800000u);
    CHECK(atan_calls == 1 && BITS(atan_y) == BITS(-0.6f) && BITS(atan_x) == BITS(0.3f));
    CHECK(FLD(self, 0x154, int32_t) == 0x1234);
    CHECK(FLD(self, 0x70, uint32_t) == 0x11111111u && FLD(self, 0x78, uint32_t) == 0x33333333u);
    CHECK(dfe4_calls == 1 && dfe4_id == 0x10 && se_calls == 0 && fd268_calls == 0);
    CHECK((FLD(actor, 0x5A0, uint32_t) & 0x801) == 0);

    /* 1b. same enter, hp <= 0: 002B193C(self, 0x10, 1.0) only */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x508, int16_t) = 0;
    func_002AD8A0(sw);
    CHECK(b193c_calls == 1 && b193c_id == 0x10 && BITS(b193c_s) == 0x3F800000u && vt_calls == 0);

    /* 2. cRT_IceKnockBack, actor+0x895 = 4 -> strength 0.15; the virtual returns NaN and frames 0.
     *    frames -> 1 (timer 1/1); speed NaN: ARM `beq` not taken -> facing computed from NaN;
     *    id 0x12: 004FD268, restart = play_anim = 0 -> no end-frame timers. */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x895, uint8_t) = 4;
    FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0xF8, float) = 1.0f;
    vt_ret = gp_u2f(0x7FC00000u); vt_frames_out = 0;
    func_002AEA54(sw);
    CHECK(vt_calls == 1 && vt_id == 0x12 && fd268_calls == 1);
    CHECK(FLD(self, 0x2C, uint32_t) == 1 && BITS(FLD(self, 0x30, float)) == 0x3F800000u);
    CHECK(FLD(self, 0x3C, float) != FLD(self, 0x3C, float));   /* NaN */
    CHECK(atan_calls == 1 && atan_y != atan_y);
    CHECK(fabdc_calls == 0 && ac38_calls == 0);
    CHECK((FLD(actor, 0x5A0, uint32_t) & 0x800) == 0);

    /* 2b. ice with actor+0x895 = 5 -> strength 0: speed = 1 * 0 = 0 -> no facing */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x895, uint8_t) = 5;
    FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0x38, uint16_t) = 0x20;          /* cleared by the speed == 0 path */
    func_002AEA54(sw);
    CHECK(atan_calls == 0 && FLD(self, 0x38, uint16_t) == 0x01);

    /* 3. cRT_ZeroKnockBack, hp > 0: strength 0.0, +0x38 bit 0x20 set and +0x158 = 0:
     *    min(0, frames) = 0 -> bit cleared; speed 0 -> no facing. */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x508, int16_t) = 1;
    FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0x38, uint16_t) = 0x20;
    vt_ret = 5.0f;
    func_002AF4DC(sw);
    CHECK(ed24_calls == 1 && vt_id == 0xE && atan_calls == 0);
    CHECK(FLD(self, 0x38, uint16_t) == 0x01);
    CHECK(BITS(FLD(self, 0x3C, float)) == 0);
    /* the ARM passes 8 frames (r2) */
    CHECK(FLD(self, 0x2C, uint32_t) == 8 && BITS(FLD(self, 0x30, float)) == BITS(0.125f));

    /* 4. Small (0.25) and Big (0.35, 15 frames) strengths; die paths 0.65 / 1.05 */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x508, int16_t) = 1; FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0xF8, float) = 4.0f;
    func_002AF59C(sw);
    CHECK(BITS(FLD(self, 0x3C, float)) == BITS(1.0f) && vt_id == 0xF);
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x508, int16_t) = 1; FLD(actor, 0x7FC, uint8_t) = 1;
    FLD(self, 0xF8, float) = 1.0f;
    func_002AE9F8(sw);
    CHECK(BITS(FLD(self, 0x3C, float)) == 0x3EB33333u && vt_id == 0x11);
    CHECK(FLD(self, 0x2C, uint32_t) == 15);
    reset();
    sw = gp_u32(self);
    func_002AF59C(sw);
    CHECK(b193c_calls == 1 && b193c_id == 0xF && BITS(b193c_s) == 0x3F266666u);
    reset();
    sw = gp_u32(self);
    func_002AE9F8(sw);
    CHECK(b193c_calls == 1 && b193c_id == 0x11 && BITS(b193c_s) == 0x3F866666u);

    /* 5. id 7 (BoomerangHookshotFreeze start), direct call: r8 = 2 <= 4 -> SE name object
     *    {data_006F5988, "SE_EN_DAMAGE_FAINT"}, velocity x/z * +0x164 (0.5); actor+0x7FC = 0 ->
     *    vel y = 004F944C() = 9.5; damage type 0xB -> actor timer {0, 0x46, 1/70 bits 0x3C6A0EA1}
     *    at 0x6D0; flag 0, actor+0x77D = -1 -> no 004FC07C; +0x38 bit 0x20 cleared (r8 <= 4). */
    reset();
    sw = gp_u32(self);
    FLD(actor, 0x7FC, uint8_t) = 0;
    FLD(actor, 0x77D, int8_t) = -1;
    FLD(self, 0x110, uint8_t) = 0xB;
    FLD(self, 0x111, int8_t) = -1;
    FLD(self, 0x164, float) = 0.5f;
    FLD(self, 0xF8, float) = 3.0f; FLD(self, 0x100, float) = 2.0f;
    FLD(self, 0x38, uint16_t) = 0x20;
    func_002B0D7C(sw, 7, 8, 0, 1.0f);
    CHECK(se_calls == 1 && se_name[0] == gp_u32(data_006F5988));
    CHECK(strcmp((const char *)gp_ptr(se_name[1]), "SE_EN_DAMAGE_FAINT") == 0);
    CHECK(BITS(FLD(self, 0x3C, float)) == BITS(1.5f) && BITS(FLD(self, 0x44, float)) == BITS(1.0f));
    CHECK(BITS(FLD(self, 0x40, float)) == BITS(9.5f));
    CHECK(FLD(actor, 0x6D0, uint32_t) == 0 && FLD(actor, 0x6D4, int32_t) == 0x46 &&
          FLD(actor, 0x6D8, uint32_t) == 0x3C6A0EA1u);
    CHECK(fc07c_calls == 0 && dfe4_p4 == 0xFFFFFFFFu);
    CHECK((FLD(self, 0x38, uint16_t) & 0x20) == 0);

    /* 6. the other enters of 002B0D7C: (id, frames, strength) from the EU code; the strength is
     *    observed as velocity x = dir 1.0 * (vt 1.0 * strength). +0x38 bit 8 where the ARM sets it. */
    {
        struct { void (*f)(int); int id; uint32_t frames; uint32_t sbits; int bit8; } t[] = {
            {func_002ADF60, 3, 8, 0x3E800000u, 0},      /* AttackBack 0.25 */
            {func_002ACBAC, 4, 0x10, 0x3E8F5C29u, 0},   /* Boyoyon 0.28 */
            {func_002B1710, 7, 8, 0x3E6147AEu, 1},      /* BoomerangHookshotFreeze 0.22 */
            {func_002AEA9C, 8, 10, 0x3E19999Au, 1},     /* SandRodFaint 0.15 */
            {func_002AF624, 9, 0, 0x00000000u, 0},      /* ShadowLinkFaint 0.0 (frames 0 -> 1) */
            {func_002AE1BC, 10, 1, 0x3E6147AEu, 1},     /* DalianFaint 0.22, actor+0x7FC != 2 */
            {func_002AE214, 0xF, 8, 0x3E800000u, 0},    /* DrinkPurple 0.25 (hp > 0) */
        };
        for (unsigned i = 0; i < sizeof t / sizeof t[0]; i++) {
            reset();
            sw = gp_u32(self);
            FLD(actor, 0x508, int16_t) = 1;
            FLD(actor, 0x7FC, uint8_t) = 1;
            FLD(actor, 0x77D, int8_t) = -1;
            FLD(self, 0xF8, float) = 1.0f;
            FLD(self, 0x164, float) = 1.0f;   /* ids 5..10: velocity x/z * +0x164 */
            t[i].f(sw);
            CHECK(vt_calls == 1 && vt_id == t[i].id && vt_frames_in == t[i].frames);
            CHECK(BITS(FLD(self, 0x3C, float)) == t[i].sbits);
            CHECK(((FLD(self, 0x38, uint16_t) & 8) != 0) == t[i].bit8);
            CHECK(FLD(self, 0x2C, uint32_t) == (t[i].frames ? t[i].frames : 1));
        }
        /* SandRodFaint actor timer {0, 40, 1/40} at 0x724 */
        reset();
        sw = gp_u32(self);
        FLD(actor, 0x7FC, uint8_t) = 1; FLD(actor, 0x77D, int8_t) = -1;
        func_002AEA9C(sw);
        CHECK(FLD(actor, 0x724, uint32_t) == 0 && FLD(actor, 0x728, uint32_t) == 40 &&
              BITS(FLD(actor, 0x72C, float)) == 0x3CCCCCCDu);
        /* DalianFaint with actor+0x7FC == 2: 7 frames */
        reset();
        sw = gp_u32(self);
        FLD(actor, 0x7FC, uint8_t) = 2; FLD(actor, 0x77D, int8_t) = -1;
        func_002AE1BC(sw);
        CHECK(vt_frames_in == 7 && vt_id == 10);
        /* DrinkPurple, hp <= 0: 002B193C(self, 0xF, 0.65) */
        reset();
        sw = gp_u32(self);
        func_002AE214(sw);
        CHECK(vt_calls == 0 && b193c_calls == 1 && b193c_id == 0xF && BITS(b193c_s) == 0x3F266666u);
    }

    printf("knockback_test: %s (%d failures)\n", fails ? "FAIL" : "ok", fails);
    return fails != 0;
}
