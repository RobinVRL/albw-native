/* Checks for native/gameplay/func_002908B8.c (player action change), expected values derived by
 * hand from the EU 002908E0 disassembly. Virtual functions are stubs whose addresses are stored
 * in 32-bit game words, so the test is linked non-PIE (code/data below 4 GiB on -m64 too):
 *   clang -m32|-m64 [-fms-extensions] -no-pie -fno-pic -std=gnu11 -msse2 -mfpmath=sse \
 *     -ffp-contract=off -Inative/include -Inative/gameplay -Inative/gameplay/test \
 *     native/gameplay/test/action_test.c native/gameplay/func_002908B8.c -o at && ./at */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "gameplay.h"
#include "lowmem.h"

int func_002908B8(uint32_t self_w);
static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)

uint8_t data_007111A8[178 * 16];
uint32_t data_006A33C8[64 * 2];
uint32_t data_00706E20;
uint32_t data_007260CC;
uint32_t data_007260D0;
uint8_t data_006F6314[4];
uint8_t data_006F5988[4];

/* recorded calls */
static int n580; static uint32_t c580_a[4]; static int c580_anim[4]; static uint8_t c580_on[4]; static uint32_t c580_b[4];
static int n8ec, ndbbc, nvt8, nmember, nvt10, nobjvt; static uint32_t member_this;
static int dbbc_pair[2], dbbc_n; static float dbbc_f;
static char vt10_local[0x28];
static float ride_f; static uint32_t ride_h_seen;

float func_0028D580(uint32_t *a, int anim, uint8_t one, uint8_t on, uint32_t b) {
    c580_a[n580] = gp_u32(a); c580_anim[n580] = anim; c580_on[n580] = on; c580_b[n580] = b; n580++;
    return 0;
}
int func_0028C8EC(int a, uint32_t b, uint32_t c, int *d) { n8ec++; return 0; }
int func_0010DBBC(int a, int *pair, int n, float f) {
    ndbbc++; dbbc_pair[0] = pair[0]; dbbc_pair[1] = pair[1]; dbbc_n = n; dbbc_f = f; return 0;
}
int func_0053F7CC(int self) { return 0x33; }
int func_0052E920(int a, int id) { return 0; }
static char *ride;
int func_0052FBA0(int mgr, uint32_t h) { ride_h_seen = h; return (int)gp_u32(ride); }
int func_00100174(int *g) { return 1; }

static int vt_exit(uint32_t m) { nvt8++; return 0; }
static int vt_apply(uint32_t m, void *local) { nvt10++; memcpy(vt10_local, local, 0x28); return 0; }
static int member(uint32_t th) { nmember++; member_this = th; return 0; }
static int obj_vt(uint32_t o) { nobjvt++; return 0; }
static int is_kind(uint32_t a, void *id) { return 1; }
static float speed(uint32_t a) { return ride_f; }

static char *self, *mach, *act, *player, *anim, *carry, *mvt, *rvt;
static uint32_t ovt[4];

static void reset(int id, int16_t old) {
    n580 = n8ec = ndbbc = nvt8 = nmember = nvt10 = nobjvt = 0;
    FLD(mach, 4, int16_t) = (int16_t)id;
    FLD(self, 0x42, int16_t) = old;
    FLD(self, 0x84, uint8_t) = 0x55;
    FLD(self, 0xC5, uint8_t) = 0;
}

int main(void) {
    self = lowalloc(0x200); mach = lowalloc(0x60); act = lowalloc(0x40); player = lowalloc(0x700);
    anim = lowalloc(0x80); carry = lowalloc(0x10); mvt = lowalloc(0x20); rvt = lowalloc(0x80);
    ride = lowalloc(0x10);
    FLD(self, 0x48, uint32_t) = gp_u32(mach);
    FLD(self, 0x14, uint32_t) = gp_u32(act);
    FLD(self, 0x10, uint32_t) = gp_u32(player);
    FLD(self, 0x18, uint32_t) = gp_u32(anim);
    FLD(mach, 0, uint32_t) = gp_u32(mvt);
    FLD(mvt, 0x08, uint32_t) = gp_u32((void *)vt_exit);
    FLD(mvt, 0x10, uint32_t) = gp_u32((void *)vt_apply);
    FLD(mach, 0x44, uint32_t) = gp_u32(carry);
    FLD(ride, 0, uint32_t) = gp_u32(rvt);
    FLD(rvt, 0x00, uint32_t) = gp_u32((void *)is_kind);
    FLD(rvt, 0x60, uint32_t) = gp_u32((void *)speed);
    ovt[2] = gp_u32((void *)obj_vt);
    for (int i = 0; i < 178; i++) FLD(&data_007111A8[i * 16], 8, uint32_t) = gp_u32(ovt);
    /* class 3 member: non-virtual, adj = 2*0x10 -> this = self + 0x10 */
    data_006A33C8[3 * 2] = gp_u32((void *)member); data_006A33C8[3 * 2 + 1] = 0x20;
    for (int i = 0; i < 0x20; i++) FLD(mach, 8 + i, uint8_t) = (uint8_t)(0xA0 + i);

    /* nothing pending */
    reset(-2, 0); CHECK(func_002908B8(gp_u32(self)) == 0 && n580 == 0);

    /* id 1 (run), no ridden actor: k = 0.0855 (bits(+0x5B0) != 1.0), s = 0.0855*0.5 < 0.065 -> 7;
     * blend 6; class 0 -> 0 (same class as old id 0: no class change) */
    FLD(act, 0x24, float) = 0.5f;
    FLD(data_007111A8 + 16, 2, int16_t) = 4;
    reset(1, 0); CHECK(func_002908B8(gp_u32(self)) == 1);
    CHECK(n580 == 2 && c580_anim[0] == 7 && c580_anim[1] == 7 && c580_a[0] == gp_u32(anim + 0x3C) &&
          c580_a[1] == gp_u32(anim + 0x5C) && c580_on[0] == 1 && c580_b[0] == 6 && c580_b[1] == 6);
    CHECK(nvt8 == 0 && nmember == 0 && n8ec == 1 && nvt10 == 1 && ndbbc == 0);
    CHECK(FLD(self, 0x42, int16_t) == 1 && FLD(self, 0x40, int16_t) == 0 && FLD(self, 0x44, uint32_t) == 0);
    /* ridden actor speed factor 2: 0.0855*0.5*2 = 0.0855 > 0.065 -> 10 (the round-2 C used the
     * stale act value instead of the virtual's s0 and got 7) */
    FLD(carry, 0, uint32_t) = 0x1234; ride_f = 2.0f;
    reset(1, 0); func_002908B8(gp_u32(self));
    CHECK(ride_h_seen == 0x1234 && c580_anim[0] == 10 && data_007260D0 == gp_u32(data_006F6314));
    /* 1.0 in +0x5B0 -> 0.095: 0.095*0.5*0.5 = 0.02375 -> 7 */
    FLD(player, 0x5B0, float) = 1.0f; ride_f = 0.5f;
    reset(1, 0); func_002908B8(gp_u32(self)); CHECK(c580_anim[0] == 7);
    /* NaN factor: default NaN 0x7FC00000 > 0x3D851EB8 (signed) -> 10; -inf -> negative bits -> 7 */
    ride_f = NAN; reset(1, 0); func_002908B8(gp_u32(self)); CHECK(c580_anim[0] == 10);
    ride_f = -NAN; reset(1, 0); func_002908B8(gp_u32(self)); CHECK(c580_anim[0] == 10);
    ride_f = -INFINITY; reset(1, 0); func_002908B8(gp_u32(self)); CHECK(c580_anim[0] == 7);
    /* id 1 keeps +0xC5: only the +0x5C request */
    reset(1, 0); FLD(self, 0xC5, uint8_t) = 1; func_002908B8(gp_u32(self));
    CHECK(n580 == 1 && c580_a[0] == gp_u32(anim + 0x5C) && FLD(self, 0xC5, uint8_t) == 1);
    FLD(carry, 0, uint32_t) = 0;

    /* id 5, class 3 (flags 0x400): class change -> vt[2] + member(self+0x10), mode byte 1,
     * +0xC5 cleared then both requests, anim 0 -> 0053F7CC = 0x33, blend 3 */
    uint8_t *e5 = data_007111A8 + 5 * 16;
    e5[0] = 3; FLD(e5, 4, uint32_t) = 0x400; FLD(e5, 2, int16_t) = 0; FLD(e5, 0xC, uint32_t) = 0x7777;
    reset(5, 0); FLD(self, 0xC5, uint8_t) = 1;
    CHECK(func_002908B8(gp_u32(self)) == 1);
    CHECK(nvt8 == 1 && nmember == 1 && member_this == gp_u32(self + 0x10));
    CHECK(FLD(self, 0x84, uint8_t) == 1 && FLD(self, 0xC5, uint8_t) == 0);
    CHECK(n580 == 2 && c580_anim[0] == 0x33 && c580_b[0] == 3 && c580_on[0] == 1);
    CHECK(FLD(vt10_local, 0, int16_t) == 0 && FLD(vt10_local, 2, int16_t) == 5 &&
          FLD(vt10_local, 4, uint8_t) == 0 && FLD(vt10_local, 5, uint8_t) == 3 &&
          FLD(vt10_local, 8, uint8_t) == 0xA0 && FLD(vt10_local, 0x27, uint8_t) == 0xBF);
    /* old id 0x11 -> blend 0 (on = 0), 0010DBBC pair when player+0x344 */
    FLD(player, 0x344, uint32_t) = 1;
    data_007111A8[0x11 * 16] = 3;   /* same class as e5: no class change */
    reset(5, 0x11); func_002908B8(gp_u32(self));
    CHECK(c580_b[0] == 0 && c580_on[0] == 0 && nvt8 == 0);
    CHECK(ndbbc == 1 && nobjvt == 1 && dbbc_pair[0] == (int)gp_u32(data_006F5988) &&
          dbbc_pair[1] == 0x7777 && dbbc_n == 2 && dbbc_f == 0.0f);
    FLD(player, 0x344, uint32_t) = 0;

    /* class 0x17 id 0x9E: sub-switch on the first copied word (m+8); 0xA3A2A1A0 >= 5 -> no store;
     * word 3 -> 0x15; old id 0x84 -> blend 20 */
    uint8_t *e9e = data_007111A8 + 0x9E * 16;
    e9e[0] = 0x17; FLD(e9e, 4, uint32_t) = 0x400; FLD(e9e, 2, int16_t) = 9;
    data_007111A8[0x84 * 16] = 0x17;
    reset(0x9E, 0x84); func_002908B8(gp_u32(self));
    CHECK(FLD(self, 0x84, uint8_t) == 0x55 && c580_b[0] == 20 && c580_anim[0] == 9);
    FLD(mach, 8, uint32_t) = 3;
    reset(0x9E, 0x84); func_002908B8(gp_u32(self)); CHECK(FLD(self, 0x84, uint8_t) == 0x15);
    /* +0x7C set -> 0xFF regardless */
    FLD(self, 0x7C, uint8_t) = 1; reset(0x9E, 0x84); func_002908B8(gp_u32(self));
    CHECK(FLD(self, 0x84, uint8_t) == 0xFF);
    FLD(self, 0x7C, uint8_t) = 0;
    /* class 0x18: +0x160; anim 0x12 with anim+0x52 == 0x12 -> -2; id 0x51 -> blend 1 */
    uint8_t *e51 = data_007111A8 + 0x51 * 16;
    e51[0] = 0x18; FLD(e51, 4, uint32_t) = 0x400; FLD(e51, 2, int16_t) = 0x12;
    FLD(self, 0x160, uint8_t) = 0x42; FLD(anim, 0x52, uint16_t) = 0x12;
    data_007111A8[0] = 0x18;
    reset(0x51, 0); func_002908B8(gp_u32(self));
    CHECK(FLD(self, 0x84, uint8_t) == 0x42 && c580_anim[0] == -2 && c580_b[0] == 1);

    printf("%s (%d failures)\n", fails ? "FAILED" : "ok", fails);
    return fails != 0;
}
