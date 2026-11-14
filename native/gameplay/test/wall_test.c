/* Unit tests for the player wall-merge action rewrites (no game data needed):
 *   0038E13C enter, 0038EA34 per-frame calc, 0038E8C8 exit.
 * Every callee is a recording stub; the Vec3 helpers (00115C54/C70/D70) and normalize (00115DC8)
 * are the real native/gameplay rewrites. Objects live below 4 GiB (MAP_32BIT on x86-64) so the
 * 32-bit game-pointer fields work on both targets. Expected values are derived by hand from the
 * ARM code (see the function headers); the "round 2" comments name the value the round-2
 * conversion produces instead.
 * Build + run (from albw-port), m = 32 or 64:
 *   clang -m$m -no-pie -std=gnu11 -Wall -Wextra -Wno-unused-parameter -msse2 -mfpmath=sse \
 *     -ffp-contract=off [-fms-extensions] -Inative/include -Inative/gameplay \
 *     -I../albw-decomp-ai/shared/include native/gameplay/test/wall_test.c \
 *     native/gameplay/func_0038E13C.c native/gameplay/func_0038EA34.c \
 *     native/gameplay/func_0038E8C8.c native/gameplay/func_00115C54.c \
 *     native/gameplay/func_00115C70.c native/gameplay/func_00115D70.c \
 *     native/gameplay/func_00115DC8.c -lm -o wt && ./wt
 */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <sys/mman.h>
#include "gameplay.h"

int func_0038E13C(uint32_t self_w, uint32_t req_w);
int func_0038EA34(uint32_t self_w, int32_t id);
int func_0038E8C8(uint32_t self_w);

static int fails, checks;
#define CHECK(c) do { checks++; if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)
#define FEQ(a, b) (gp_f2u(a) == gp_f2u(b))

/* ---- game data symbols the rewrites reference ---- */
char data_00711F50[4], data_006F5988[4], data_0070A518[4], data_007A9260[4], data_0070BB80[4],
    data_00708998[4], data_0070B960[4], data_00706E20[4], data_006930C4[4], data_00725B44[4],
    data_00725B48[4], data_006F64F4[4];
char s_SE_PL_WALL_IN_0038e4e0[] = "SE_PL_WALL_IN", s_ToImageG_0038e4f8[] = "ToImageG",
    s_ToImageB_0038e504[] = "ToImageB", s_ToImageR_0038e510[] = "ToImageR",
    s_SE_PL_WALL_OUT_0038e520[] = "SE_PL_WALL_OUT",
    s_SE_PV_WALL_OUT_FORCE_0038e530[] = "SE_PV_WALL_OUT_FORCE",
    s_SE_PL_WALL_OUT_FORCE_0038e548[] = "SE_PL_WALL_OUT_FORCE",
    s_SE_PL_DAMAGE_0038e848[] = "SE_PL_DAMAGE", s_SE_PV_DAMAGE_0038e858[] = "SE_PV_DAMAGE",
    s__WallOut_0038e86f[] = "@WallOut", s_WallOutGrass_0038e878[] = "WallOutGrass",
    s_SE_PL_WALL_OUT_GRASS_0038e888[] = "SE_PL_WALL_OUT_GRASS";

/* ---- call log ---- */
static char log_[4096];
static void L(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
#include <stdarg.h>
static void L(const char *fmt, ...) {
    va_list ap; va_start(ap, fmt);
    size_t n = strlen(log_);
    vsnprintf(log_ + n, sizeof log_ - n, fmt, ap);
    va_end(ap);
}
static int bad_ss;   /* a SafeString whose vtable word is not data_006F5988 */
static void se(const char *who, int *ss) {
    uint32_t *w = (uint32_t *)ss;
    if (w[0] != gp_u32(data_006F5988)) bad_ss++;
    L("%s:%s;", who, (const char *)gp_ptr(w[1]));
}

/* ---- stubs ---- */
int func_004EA104(int a, int *ss, int c) { se("PL", ss); return 0; }
int func_004EAF8C(int a, int *ss, int c) { se("PV", ss); return 0; }
int func_002E3608(int a, uint8_t b, unsigned c) { L("eft(%u,%u);", b, c); return 0; }
int func_001DC3C4(int a, uint32_t b, int c) { L("dc3c4(%d);", b == gp_u32(data_007A9260)); return 0; }
int func_00110848(int a) { L("rel(%x);", (unsigned)a); return 0; }
static int effect_id[2] = {0x1234, 0x5678};
int func_004A1B9C(int *out, int b, unsigned *name) {
    out[0] = effect_id[0]; out[1] = effect_id[1];
    L("mk(%s);", (const char *)name); return 0;
}
static float last_37ec_s; static uint32_t last_37ec_pos;
int func_004A37EC(int *h, float *dir, uint32_t *pos, float s) {
    last_37ec_s = s; last_37ec_pos = gp_u32(pos); L("37ec;"); return 0;
}
static int yaw_ret;
int func_0068C690(float *v) { return yaw_ret; }
static int d188_args[3];
int func_0051D188(int *p, int yaw, int cur) {
    d188_args[0] = gp_u32(p); d188_args[1] = yaw; d188_args[2] = cur; return 0x1AB;
}
int func_00270300(int a, int b, int c) { L("0300(%d,%d);", b, c); return 77; }
int func_002706E0(int a, int b) { L("06e0(%d);", b); return 78; }
static int d580_n, d580_anim;
float func_0028D580(unsigned *p, int anim, uint8_t a, uint8_t b, unsigned c) {
    d580_n++; d580_anim = anim; return 0.0f;
}
int func_0028C8EC(int a, uint32_t b, uint32_t c, int *d) { L("c8ec(%u);", b); return 0; }
static int dd48c_src;
int func_001DD48C(int a, int src, uint32_t c) { dd48c_src = src; L("dmg;"); return 0; }
int func_0028C328(int a) { L("c328;"); return 0; }
int func_0028C388(int a) { L("c388;"); return 0; }
int func_002916E8(void) { L("16e8;"); return 0; }
static float db854_a[3], db854_b[3];
int func_001DB854(int pl, uint32_t *a, uint32_t *b) {
    memcpy(db854_a, a, 12); memcpy(db854_b, b, 12); return 0;
}
int func_0038E900(int self, unsigned a, unsigned b) { L("e900(%d,%d);", (int)a, (int)b); return 0; }
/* calc */
int func_001E8A70(int a) { L("8a70;"); return 0; }
static int d5d0_n, d5d0_arg;
int func_002D55D0(int self, unsigned id) { d5d0_n++; d5d0_arg = (int)id; return 55; }
static int d5e8_ret;
int func_002D55E8(int self) { return d5e8_ret; }
static float d8548_f[5], d8548_out[3];
int func_004D8548(float *out, float *z, float *v, float a, float b, float c, float d, float e) {
    d8548_f[0] = a; d8548_f[1] = b; d8548_f[2] = c; d8548_f[3] = d; d8548_f[4] = e;
    memcpy(out, d8548_out, 12); return 0;
}
int func_004EB5E8(int a) { L("b5e8;"); return 0; }
static int d2cc_yaw; static float d2cc_s;
int func_0051D2CC(int *p, int yaw, float s) { d2cc_yaw = yaw; d2cc_s = s; return 0; }
static float f54_delta[3];
int func_00520F54(int a, float *v, uint32_t pos) { memcpy(v, f54_delta, 12); return 0; }
static uint32_t actor_ret;
int func_0052FBA0(int mgr, unsigned h) { return (int)actor_ret; }
static int dd8_ret;
int func_0053EDD8(int c) { return dd8_ret; }
int func_00588BE4(int a) { return 0; }
int func_00100174(int *g) { if (*g) return 0; *g = 1; return 1; }
static float frame_3c, end_3c, frame_5c;
static char *arena;
float albw_anim_frame(void *c) {
    return (char *)c == arena + 0x2000 + 0x3C ? frame_3c : frame_5c;
}
float albw_anim_end_frame(void *c) { return end_3c; }
static void *kind_type;
static int is_kind(void *o, void *type) { kind_type = type; return 1; }

/* ---- object layout in the arena ---- */
enum { SELF = 0x0, REQ = 0x400, PL = 0x800, ST = 0x1000, WRK = 0x1400, YAW = 0x1800,
       B40 = 0x1804, VEL = 0x1810, POS = 0x1820, A48 = 0x1830, MDL = 0x2000, FLR = 0x3000,
       CAM = 0x8000, CAMP = 0x8400, LVL = 0x8800, ACT = 0x8C00, ACTVT = 0x8D00, SZ = 0x10000 };
#define A(off) (arena + (off))
#define U32(off) FLD(arena, off, uint32_t)
#define F32(off) FLD(arena, off, float)
#define U8(off) FLD(arena, off, uint8_t)

static void reset(void) {
    memset(arena, 0, SZ);
    log_[0] = 0; bad_ss = 0; d580_n = 0; d5d0_n = 0; d5d0_arg = -1;
    U32(SELF + 0x28) = gp_u32(A(PL)); U32(SELF + 0x2C) = gp_u32(A(ST));
    U32(SELF + 0x30) = gp_u32(A(POS)); U32(SELF + 0x34) = gp_u32(A(VEL));
    U32(SELF + 0x3C) = gp_u32(A(YAW)); U32(SELF + 0x40) = gp_u32(A(B40));
    U32(SELF + 0x48) = gp_u32(A(A48)); U32(SELF + 0x4C) = gp_u32(A(MDL));
    U32(SELF + 0x50) = gp_u32(A(WRK));
    U32(WRK + 0x28) = gp_u32(A(LVL));
    U32(PL + 0x5F4) = gp_u32(A(FLR) - 0x3000 + 0x100);   /* floor record base: +0x3BAC etc. */
    FLD(data_00708998, 0, uint32_t) = gp_u32(A(CAMP));
    U32(CAMP + 0x18) = gp_u32(A(CAM));
    FLD(data_0070B960, 0, uint32_t) = gp_u32(A(CAM));
    memset(data_00725B44, 0, 4); memset(data_00725B48, 0, 4);
    actor_ret = 0; d5e8_ret = 0; dd8_ret = 0; yaw_ret = 0;
}
static char *floor_rec(void) { return (char *)gp_ptr(U32(PL + 0x5F4)); }

int main(void) {
#if defined(__x86_64__)
    arena = mmap(0, SZ, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
#else
    arena = mmap(0, SZ, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif
    if (arena == MAP_FAILED || (uintptr_t)arena > 0xFFFF0000u) { puts("mmap"); return 1; }
    /* floor record is addressed (player+0x5F4)+0x3B4C..: keep it inside the arena */
    uint32_t self = gp_u32(A(SELF)), req = gp_u32(A(REQ));

    /* ---- enter 0x67, ToImageG with no effect owner (player+0x344 == 0) ---- */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x67;
    F32(REQ + 8) = 0; F32(REQ + 0xC) = 0; F32(REQ + 0x10) = -1;
    F32(REQ + 0x14) = 5; F32(REQ + 0x18) = 6; F32(REQ + 0x1C) = 7;
    U32(REQ + 0x20) = 0xABCD;
    F32(VEL) = 3; F32(VEL + 4) = 4; F32(VEL + 8) = 5;
    F32(WRK + 0x15C) = 9;
    U32(PL + 0x4B0) = 2;
    U32(SELF + 0xA8) = 0x111; U32(SELF + 0xAC) = 0x222;
    yaw_ret = 0x4000; U32(YAW) = 0x123;
    int r = func_0038E13C(self, req);
    CHECK(r == 77);
    CHECK(F32(WRK + 0x15C) == 0.0f);
    CHECK(F32(VEL) == 0.0f && F32(VEL + 4) == 4.0f && F32(VEL + 8) == 0.0f);
    CHECK(F32(SELF + 0x84) == -1.0f && F32(SELF + 0x88) == 5.0f && F32(SELF + 0x90) == 7.0f);
    CHECK(U32(SELF + 0x94) == 0xABCD && U32(PL + 0x5C0) == 0xABCD);
    CHECK(U32(SELF + 0xA8) == 0 && U32(SELF + 0xAC) == 0);         /* no owner: cleared */
    CHECK(FLD(arena, SELF + 0x74, uint16_t) == 2);
    CHECK(U8(SELF + 0xA4) == 1 && U8(SELF + 0xA5) == 0 && U8(SELF + 0xA6) == 1);
    CHECK(F32(PL + 0x5BC) == -1.0f);
    CHECK(d188_args[0] == (int)gp_u32(A(YAW)) && d188_args[1] == 0x4000 && d188_args[2] == 0x123);
    CHECK(U8(B40) == 0xAB);                                          /* (u8)0x1AB */
    CHECK(last_37ec_s == 1.0f && last_37ec_pos == gp_u32(A(SELF + 0x88)));
    CHECK(strcmp(log_, "PL:SE_PL_WALL_IN;eft(0,11);dc3c4(1);37ec;0300(1,-1);") == 0);
    CHECK(bad_ss == 0);

    /* ---- enter 0x67, ToImageR with an owned effect: handle = 004A1B9C's two words
     *      (round 2: +0xA8 = a stale stack word) ; state+0x161 == 1 -> *(+0x40) = 1 ---- */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x67;
    U32(PL + 0x4B0) = 4; U32(PL + 0x344) = 0x99;
    U32(SELF + 0xA8) = gp_u32(A(ACT)); U32(SELF + 0xAC) = 0x42; U32(ACT + 0x1C) = 0x42;
    U8(ST + 0x161) = 1;
    func_0038E13C(self, req);
    CHECK(U32(SELF + 0xA8) == 0x1234 && U32(SELF + 0xAC) == 0x5678);
    CHECK(U8(B40) == 1);
    {
        char exp[128];
        snprintf(exp, sizeof exp, "PL:SE_PL_WALL_IN;eft(0,11);dc3c4(1);rel(%x);mk(ToImageR);37ec;0300(1,-1);",
                 gp_u32(A(ACT)));
        CHECK(strcmp(log_, exp) == 0);
    }

    /* ---- enter 0x69 (forced out): sounds with valid SafeStrings, exit position ---- */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x69;
    F32(PL + 0x5B4) = 0; F32(PL + 0x5B8) = 0; F32(PL + 0x5BC) = 2;  /* -> dir (0,0,1) */
    F32(POS) = 10; F32(POS + 4) = 1; F32(POS + 8) = -3;
    F32(SELF + 0xB4) = 7;
    U32(PL + 0x344) = 1;
    U8(PL + 0x6BA) = 0;
    yaw_ret = 0x777;
    r = func_0038E13C(self, req);
    CHECK(r == 78);
    CHECK(bad_ss == 0);                                   /* round 2: garbage vtable word */
    CHECK(F32(SELF + 0x7C) == 0.0f && F32(SELF + 0x84) == 1.0f);
    CHECK(U32(YAW) == 0x777 && F32(SELF + 0xB4) == 0.0f);
    CHECK(F32(SELF + 0xC0) == 0.0f && F32(SELF + 0xC8) == 0.5f);  /* dir * 0.5 */
    /* 001DB854(player, pos + dir*0.5, pos); round 2: x = 10 + garbage */
    CHECK(db854_a[0] == 10.0f && db854_a[1] == 1.0f && db854_a[2] == -2.5f);
    CHECK(db854_b[0] == 10.0f && db854_b[2] == -3.0f);
    CHECK(last_37ec_pos == gp_u32(A(POS)));
    CHECK(F32(PL + 0x5A8) == 1.0f && U32(SELF + 0xB0) == 0);
    CHECK(U8(PL + 0x6BA) == 1 && U8(SELF + 0xA4) == 1 && U8(SELF + 0xA5) == 1 && U8(SELF + 0xA6) == 0);
    CHECK(strcmp(log_, "PL:SE_PL_WALL_OUT;c8ec(1);PV:SE_PV_WALL_OUT_FORCE;PL:SE_PL_WALL_OUT_FORCE;"
                       "mk(WallOut);37ec;16e8;06e0(-1);") == 0);

    /* ---- enter 0x6A (damage) on grass, camera flag set, 0x6BA already set ---- */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x6A;
    U32(REQ + 0x24) = 0x5150;
    F32(PL + 0x5B8) = -4;                                  /* dir (0,-1,0) */
    FLD(floor_rec(), 0x3BAC, uint16_t) = 0x2E0 | 0x1F;
    U8(ST + 0x96) = 1; U32(CAM + 0x188) = 0xF;
    U8(PL + 0x6BA) = 1; U8(SELF + 0xA4) = 5;
    func_0038E13C(self, req);
    CHECK(dd48c_src == 0x5150);
    CHECK(F32(SELF + 0xC4) == -2.0f);                      /* dir * 2.0 */
    CHECK(db854_a[1] == -0.5f);
    CHECK(U32(CAM + 0x188) == 0xE && U32(ST + 0x90) == 1);
    CHECK(U8(SELF + 0xA4) == 5);
    CHECK(U32(SELF + 0xA8) == 0 && bad_ss == 0);
    CHECK(strcmp(log_, "PL:SE_PL_WALL_OUT;c8ec(1);dmg;c328;c388;PL:SE_PL_DAMAGE;PV:SE_PV_DAMAGE;"
                       "PL:SE_PL_WALL_OUT_FORCE;PL:SE_PL_WALL_OUT_GRASS;37ec;06e0(-1);") == 0);

    /* ---- enter 0x68: anim 0x84 (level byte != 1, player+0x5AC == 0) ---- */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x68;
    U8(LVL + 0x24) = 0; U32(PL + 0x5C0) = 0x3C3;
    func_0038E13C(self, req);
    CHECK(d580_n == 2 && d580_anim == 0x84 && U8(SELF + 0x72) == 1 && U32(SELF + 0x94) == 0x3C3);
    /* other id: only work+0x15C, returns the id */
    reset();
    FLD(arena, REQ + 2, int16_t) = 0x20; F32(WRK + 0x15C) = 3;
    CHECK(func_0038E13C(self, req) == 0x20 && F32(WRK + 0x15C) == 0.0f && log_[0] == 0);

    /* ---- calc 0x67: merge into the wall ---- */
    reset();
    U32(ST + 0x44) = 3;
    F32(SELF + 0x7C) = 0; F32(SELF + 0x80) = 0; F32(SELF + 0x84) = 1;
    F32(SELF + 0x88) = 1; F32(SELF + 0x8C) = 2; F32(SELF + 0x90) = 3;
    U8(CAM + 0x2C1B) = 9;
    yaw_ret = 0x1000;
    frame_3c = 9.5f; end_3c = 10.7f;          /* vcvt.u32: 9 == vcvt(9.7) = 9 */
    dd8_ret = 1;
    F32(A48 + 0x24) = NAN;
    char *q = floor_rec() + 0x3B4C;
    FLD(q, 0, float) = 1; FLD(q, 0x20, float) = -2; FLD(q, 0xC, float) = 5;
    r = func_0038EA34(self, 0x67);
    CHECK(U8(CAM + 0x2C1B) == 0);
    CHECK(strcmp(log_, "8a70;37ec;") == 0);
    CHECK(d2cc_yaw == (int)0x80001000u && FEQ(d2cc_s, gp_u2f(0x3E4CCCCDu)));
    {   /* target = (1, 2, 3 + 0.4f); pos(0) += target * 0.2f */
        float k = gp_u2f(0x3E4CCCCDu), tz = 3.0f + gp_u2f(0x3ECCCCCDu);
        CHECK(FEQ(F32(POS), 1.0f * k) && FEQ(F32(POS + 4), 2.0f * k) && FEQ(F32(POS + 8), tz * k));
    }
    CHECK(FLD(arena, SELF + 0x76, uint16_t) == 1 && U8(SELF + 0x71) == 1);
    CHECK(FLD(q, 0, float) == -1.0f && FLD(q, 0x20, float) == 2.0f && FLD(q, 0xC, float) == 5.0f);
    CHECK(d5d0_n == 1 && d5d0_arg == 0);       /* NaN: `ble` taken -> 0 (round 2: 1) */
    CHECK(r == 55);

    /* vcvt.u32 saturation: frame -3.5 -> 0, end 0.5 - 1 = -0.5 -> 0: equal */
    reset();
    U32(ST + 0x44) = 9;
    frame_3c = -3.5f; end_3c = 0.5f; dd8_ret = 0;
    r = func_0038EA34(self, 0x67);
    CHECK(FLD(arena, SELF + 0x76, uint16_t) == 1 && r == 0 && d5d0_n == 0);
    reset();
    U32(ST + 0x44) = 9; frame_3c = 2.0f; end_3c = 2.0f;   /* 2 vs vcvt(1.0) = 1 */
    func_0038EA34(self, 0x67);
    CHECK(FLD(arena, SELF + 0x76, uint16_t) == 0);

    /* ---- calc 0x68: push-off at frame 20 on a hazard ---- */
    reset();
    U32(ST + 0x44) = 20;
    U8(WRK + 0x324) = 1;
    FLD(arena, SELF + 0xB0, int32_t) = 31;
    F32(VEL + 4) = 6;
    frame_5c = 61.0f;
    yaw_ret = 0x10000000;
    F32(SELF + 0xB4) = 0.5f; F32(SELF + 0xB8) = 0.5f; F32(SELF + 0xBC) = 0.5f;
    d8548_out[0] = 1; d8548_out[1] = 2; d8548_out[2] = 3;
    F32(POS) = 0; F32(POS + 4) = 0; F32(POS + 8) = 0;
    F32(A48 + 0x24) = 1.0f;
    dd8_ret = 1;
    r = func_0038EA34(self, 0x68);
    CHECK(F32(VEL + 4) == 6.0f);
    CHECK(F32(MDL + 0x100) == 1.0f);
    CHECK(U8(WRK + 0x166) == 1);                           /* (0x10000000+0x10000000)>>29 = 1 */
    CHECK(d8548_f[0] == 1.0f && d8548_f[1] == 0.0f && d8548_f[3] == 1.0f && d8548_f[4] == 0.0f);
    CHECK(F32(POS) == 0.5f && F32(POS + 4) == 1.5f && F32(POS + 8) == 2.5f);
    CHECK(F32(SELF + 0xB4) == 1.0f && F32(SELF + 0xBC) == 3.0f);
    CHECK(strcmp(log_, "b5e8;") == 0 && FLD(arena, SELF + 0xB0, int32_t) == -1);
    CHECK(d5d0_n == 1 && d5d0_arg == 1 && r == 55);        /* frame 20 <= 25: only the end call */

    /* ---- calc 0x69 at frame 3, no hazard: counter, carried actor push, t = 3/15 ---- */
    reset();
    U32(ST + 0x44) = 3;
    F32(VEL + 4) = 6;
    FLD(arena, SELF + 0xB0, int32_t) = 4;
    frame_5c = 60.0f;                                       /* not > 60 */
    yaw_ret = 0x0FFFFFFF;
    actor_ret = gp_u32(A(ACT));
    U32(ACT) = gp_u32(A(ACTVT));
    U32(ACTVT) = (uint32_t)(uintptr_t)is_kind;
    f54_delta[0] = 1; f54_delta[1] = 0; f54_delta[2] = -1;
    F32(SELF + 0xC0) = 2;
    memset(d8548_out, 0, 12);
    F32(A48 + 0x24) = 1.0f;
    r = func_0038EA34(self, 0x69);
    CHECK(F32(VEL + 4) == 0.0f);
    CHECK(FLD(arena, SELF + 0xB0, int32_t) == 5);
    CHECK(F32(MDL + 0x100) == 0.0f && U8(WRK + 0x166) == 0);
    CHECK(FLD(data_00725B48, 0, uint32_t) == gp_u32(data_006F64F4) && kind_type == data_00725B48);
    CHECK(F32(SELF + 0xC0) == 3.0f && F32(SELF + 0xC8) == -1.0f);
    CHECK(FEQ(d8548_f[0], 3.0f * gp_u2f(0x3D888889u)));
    CHECK(F32(POS) == 1.0f && F32(POS + 8) == -1.0f);       /* +delta, + (0 - 0) */
    CHECK(r == 0 && d5d0_n == 0);                            /* anim not ended */

    /* id 0x68 with a forced action pending: returns 002D55E8's value, nothing else */
    reset();
    U32(ST + 0x44) = 9; d5e8_ret = 3; F32(VEL + 4) = 6;
    CHECK(func_0038EA34(self, 0x68) == 3 && F32(VEL + 4) == 6.0f);
    /* unrelated id: returns self */
    reset();
    U32(ST + 0x44) = 9;
    CHECK(func_0038EA34(self, 0x10) == (int)self);

    /* ---- exit ---- */
    reset();
    U8(SELF + 0xA4) = 1; FLD(arena, SELF + 0xA5, int8_t) = -1; U8(SELF + 0xA6) = 1;
    CHECK(func_0038E8C8(self) == 0);
    CHECK(strcmp(log_, "e900(-1,1);") == 0 && U8(SELF + 0xA4) == 0 && U8(SELF + 0xA5) == 0);
    reset();
    CHECK(func_0038E8C8(self) == 0 && log_[0] == 0);

    printf("wall_test: %d checks, %d failures (%s)\n", checks, fails,
           sizeof(void *) == 8 ? "x86-64" : "i386");
    return fails != 0;
}
