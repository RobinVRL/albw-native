/* Tests: 004C03B8 (degree -> angle conversions), 004D838C (chasePos), 004F5588 (enemy ground
 * resolution: the probe vectors Ghidra lost and the final snap), 004CEA18 (shape visibility
 * bits), 005826A4 (message lookup + fallback length), 00581D60, 0012C790.
 * Uses the native/gameplay Vec3 helpers (00115C54/C70/D70/DAC). */
#include "hot_test.h"
#include <math.h>

char data_007A9260[16];          /* zero vector */
char data_0070D7D0[16];          /* "missing text" strings at +8 / +0xC */
char data_006F599C[16];          /* SafeString vtable (slot 8 = assure termination) */

int func_004C03B8(uint32_t self, uint32_t p);
int func_004D838C(uint32_t cur, uint32_t target, float rate, float mn, float mx);
float func_004F5588(uint32_t self);
int func_004CEA18(uint32_t self, int on, uint32_t idx);
int func_005826A4(uint32_t self, uint32_t out, uint32_t file, uint32_t label);
int func_00581D60(uint32_t self);
int func_0012C790(uint32_t self);
int func_004F70A8(uint32_t self);

/* ---- 004F70A8 stubs ---- */
char data_00709DF8[8], data_0070C8E0[8], data_006938FC[8], data_00693900[8];
int func_004F6B28(int s) { (void)s; return 0; }
int func_0034CA24(uint32_t *d) { (void)d; return 0; }
static int n_fbd44;
int func_004FBD44(uint32_t *s, uint32_t *d, int a, int b) { (void)s; (void)d; (void)a; (void)b; n_fbd44++; return 0; }
int func_00542B24(int r) { (void)r; return 0; }
uint32_t func_0014E2A0(char *s, uint32_t c, uint32_t a3, uint32_t a4, uint32_t a5, int t)
{ (void)s; (void)c; (void)a3; (void)a4; (void)a5; (void)t; return 0; }
static int g_out_v, n_b58; static int b58_arg;
int func_005210AC(int s, int *out) { (void)s; *out = g_out_v; return 0; }
float func_00581B58(int m, int a, int b) { (void)m; (void)a; n_b58++; b58_arg = b; return 1.0f; }
int func_00520EE4(int s) { (void)s; return 0; }
int func_00588BE4(int s) { (void)s; return 0; }
int func_004F8660(int *s, int a, int b, int c) { (void)s; (void)a; (void)b; (void)c; return 0; }
static int n_f8998;
int func_004F8998(int *s, int a, char *b) { (void)s; (void)a; (void)b; n_f8998++; return 0; }
int func_002B2018(int *r) { (void)r; return 0; }
static float g_mul;
static float vt54(void *self) { (void)self; return g_mul; }


/* ---- 004F5588 stubs ---- */
static char *g_self;
static int n_probe; static char probe_fn[8][12]; static float probe_box[8][3], probe_f[8];
static uint32_t probe_flags[8]; static uint32_t probe_box_addr[8];
static float probe_push_y; static int probe_hit; static uint32_t probe_set_st;
static int probe(const char *fn, uint32_t push, uint32_t *box, uint32_t flags, float f)
{
    int i = n_probe++;
    if (i < 8) {
        snprintf(probe_fn[i], sizeof probe_fn[i], "%s", fn);
        memcpy(probe_box[i], box, 12);
        probe_box_addr[i] = gp_u32(box);
        probe_flags[i] = flags;
        probe_f[i] = f;
    }
    F(P(push), 4) = probe_push_y;
    W(g_self, 0x5A0) |= probe_set_st;
    return probe_hit;
}
int func_0014F0B0(int s) { (void)s; return 0; }
int func_004F7D3C(int s) { (void)s; return 0; }
int func_0014FA44(void *s, int push, uint32_t c, uint32_t d, uint32_t fl, uint32_t z0, int z1)
{ (void)s; (void)push; (void)c; (void)d; (void)fl; (void)z0; (void)z1; return 0; }
int func_0014F5A8(int s, uint32_t push, uint32_t *box, uint32_t fl, float f) { (void)s; return probe("F5A8", push, box, fl, f); }
int func_0014EEC8(int s, uint32_t push, uint32_t *box, uint32_t fl, float f) { (void)s; return probe("EEC8", push, box, fl, f); }
int func_001503F4(int s, uint32_t push, uint32_t *box, uint32_t fl, float f) { (void)s; return probe("03F4", push, box, fl, f); }
int func_0014FFEC(int s, uint32_t push, uint32_t *box, uint32_t fl, float f) { (void)s; return probe("FFEC", push, box, fl, f); }
int func_005211D8(int s) { (void)s; return 0; }
int func_004F499C(int s, int x) { (void)s; (void)x; return 0; }

/* ---- 005826A4 stubs ---- */
static uint32_t g_msbt_scene, g_msbt_common; static int32_t g_label_idx;
int func_0069149C(uint32_t tbl, int first, int *file, uint32_t x)
{
    (void)first; (void)file; (void)x;
    uint32_t m = (tbl & 0xF) == 0xC ? g_msbt_scene : g_msbt_common;   /* +0x4C vs +0x38 */
    if (!m) return 0;
    char *e = obj(0x20); W(e, 0x18) = m; return (int)w(e);
}
int func_0011EB7C(int msbt, int *label) { (void)msbt; (void)label; return g_label_idx; }
int func_00582888(int msbt, uint32_t i) { (void)msbt; return (int)(0x100 + i); }
int func_00582858(uint32_t *msbt, uint32_t i) { (void)msbt; return (int)(0x200 + i); }
static int n_assure;
static void assure(void *ss) { (void)ss; n_assure++; }

static void test_param(void)
{
    char *self = obj(0x900), *model = obj(0x200), *p = obj(0x40), *c = obj(0x80);
    W(self, 0x7A0) = w(model); W(self, 0x40C) = w(c);
    F(p, 4) = 1.5f; F(p, 8) = 190.0f; F(p, 0xC) = gp_u2f(0x7FC00000u);
    FLD(p, 0x20, int8_t) = -128; FLD(p, 0x21, int8_t) = 90; FLD(p, 0x1C, int16_t) = 360;
    FLD(p, 0x1E, int16_t) = -1; F(p, 0x14) = 3.0f; FLD(c, 0x54, uint16_t) = 7;
    CHECK_U(func_004C03B8(w(self), w(p)), w(self));
    CHECK_U(W(self, 0x8C4), 0x7FFFFFFFu);    /* 190 deg saturates (x86 cast: 0x80000000) */
    CHECK_U(W(self, 0x8C8), 0);              /* NaN -> 0 */
    CHECK_U(W(self, 0x8CC), (uint32_t)(-128 * 0xB60B60));
    CHECK_U(W(self, 0x8D0), 90u * 0xB60B60u);
    CHECK_U(W(self, 0x8F0), 360u * 0xB60B60u);   /* wraps to 0x00000A80 */
    CHECK_U(W(self, 0x8F4), (uint32_t)-0xB60B60);
    CHECK_F(F(model, 0x7C), 1.5f); CHECK_U(W(model, 0x164), 0x40000000u);
    CHECK_F(F(c, 0x58), 6.0f); CHECK_F(F(c, 0x60), 6.0f);
    F(p, 8) = -190.0f; func_004C03B8(w(self), w(p)); CHECK_U(W(self, 0x8C4), 0x80000000u);
    F(p, 8) = 45.0f; func_004C03B8(w(self), w(p));
    CHECK_U(W(self, 0x8C4), (uint32_t)(int32_t)(45.0f * 11930464.0f));
    W(self, 0x7A0) = 0; W(self, 0x8C4) = 7; func_004C03B8(w(self), w(p)); CHECK_U(W(self, 0x8C4), 7);
}

static void test_chase(void)
{
    float cur[3] = { 0, 0, 0 }, tgt[3] = { 3, 4, 0 };
    CHECK(func_004D838C(w(cur), w(tgt), 0.5f, 1.0f, 2.0f) == 0, "moving");
    CHECK_F(cur[0], 3.0f * (1.0f / 5.0f) * 2.0f + 0.0f);
    CHECK_F(cur[1], 4.0f * (1.0f / 5.0f) * 2.0f + 0.0f);
    CHECK_F(cur[2], 0.0f);
    float c2[3] = { 0, 0, 0 }, t2[3] = { 0.5f, 0, 0 };
    CHECK(func_004D838C(w(c2), w(t2), 0.1f, 1.0f, 2.0f) == 1, "snap");
    CHECK_F(c2[0], 0.5f);
    /* NaN rate: ARM keeps the NaN step and moves by it (Ghidra clamps to minStep) */
    float c3[3] = { 0, 0, 0 }, t3[3] = { 3, 4, 0 };
    CHECK(func_004D838C(w(c3), w(t3), gp_u2f(0x7FC00000u), 1.0f, 2.0f) == 0, "nan step moves");
    CHECK(c3[0] != c3[0], "x is NaN");
    /* step below min -> min */
    float c4[3] = { 0, 0, 0 }, t4[3] = { 0, 10, 0 };
    func_004D838C(w(c4), w(t4), 0.01f, 1.0f, 2.0f);
    CHECK_F(c4[1], 1.0f);
}

static char *mk_enemy(void)
{
    char *s = obj(0x900);
    g_self = s;
    W(s, 0x510) = w(obj(0x40));
    return s;
}

static void t_enemy_airborne(void)
{
    char *s = mk_enemy();
    W(s, 0x59C) = 0x10;
    F(s, 0x3D4) = 5.0f;                           /* above the anchor (y0 = 0) */
    F(s, 0x4C4) = 0.3f; F(s, 0x4C8) = 0.3f;       /* 5 > 0.3 * 0.7 -> steep */
    W(s, 0x58C) = 0x1;
    n_probe = 0; probe_hit = 0; probe_set_st = 0; probe_push_y = 0;
    func_004F5588(w(s));
    CHECK(n_probe == 2, "2 probes (%d)", n_probe);
    CHECK(!strcmp(probe_fn[0], "F5A8"), "steep airborne probe %s", probe_fn[0]);
    /* the probe box is {0, 0.55, 0} (Ghidra passes pos - anchor = {0, 5, 0}) */
    CHECK_F(probe_box[0][0], 0.0f); CHECK_F(probe_box[0][1], gp_u2f(0x3F0CCCCDu)); CHECK_F(probe_box[0][2], 0.0f);
    CHECK_F(probe_f[0], gp_u2f(0x3F0CCCCDu)); CHECK_U(probe_flags[0], 0x61);
    CHECK(!strcmp(probe_fn[1], "F5A8"), "ground probe %s", probe_fn[1]);
    CHECK_U(probe_box_addr[1], w(s) + 0x4B8); CHECK_F(probe_f[1], 0.3f);
    CHECK_U(FLD(s, 0x8B4, uint8_t), 1);
    CHECK_F(F(s, 0x8AC), 5.0f);                   /* self[0x8A8] = pos - anchor */
}

static void t_enemy_boxes(void)
{
    char *s = mk_enemy();
    W(s, 0x59C) = 0x10;
    F(s, 0x3D4) = 5.0f; F(s, 0x4C4) = 1.0f; F(s, 0x4C8) = 1.0f;   /* 5 > 0.7 -> steep */
    FLD(s, 0x768, uint8_t) = 1; F(s, 0x750) = 0.25f;
    F(s, 0x748) = 0.5f; F(s, 0x74C) = 1.0f; F(s, 0x750) = 0.25f; F(s, 0x754) = 3.0f;
    n_probe = 0; probe_hit = 0; probe_set_st = 0;
    func_004F5588(w(s));
    CHECK(n_probe == 3, "3 probes (%d)", n_probe);
    /* airborne: h = 1.0 (>= 0.55), +self[0x750] because bit 0 of 0x768 */
    CHECK_F(probe_box[0][1], 1.25f);
    /* box 0: D = {b[4], b[8] + b[0], b[0xC]} = {1, 0.75, 3}; f = b[0]; flags & ~0x60 */
    CHECK(!strcmp(probe_fn[1], "EEC8"), "box probe %s", probe_fn[1]);
    CHECK_F(probe_box[1][0], 1.0f); CHECK_F(probe_box[1][1], 0.75f); CHECK_F(probe_box[1][2], 3.0f);
    CHECK_F(probe_f[1], 0.5f);
    CHECK(!strcmp(probe_fn[2], "03F4"), "final steep probe %s", probe_fn[2]);
    /* below the anchor: the 2.0 clamp: b0 = 0.9, b8 = 1.5: t = 1.8 < 2, u = 3.3 > 2 ->
     * v = 1.1 > 0.9 -> D.y = 1.1 */
    F(s, 0x3D4) = -1.0f; F(s, 0x748) = 0.9f; F(s, 0x750) = 1.5f;
    n_probe = 0;
    func_004F5588(w(s));
    CHECK(n_probe == 2, "2 probes (%d)", n_probe);
    CHECK_F(probe_box[0][1], 2.0f - 0.9f);
}

static void t_enemy_snap(void)
{
    char *s = mk_enemy();
    W(s, 0x59C) = 0x10;
    F(s, 0x3D4) = -1.0f; F(s, 0x4C4) = 1.0f; F(s, 0x4C8) = 1.0f;   /* dy = -1, not steep */
    n_probe = 0; probe_hit = 1; probe_set_st = 0x40000; probe_push_y = 2.0f;
    func_004F5588(w(s));
    CHECK(n_probe == 1 && !strcmp(probe_fn[0], "EEC8"), "one ground probe");
    CHECK_F(F(s, 0x3D4), 0.0f);    /* pushed to +1, snapped back to y0 because dy < 0 */
    /* byte 0x7FC == 2: no snap */
    F(s, 0x3D4) = -1.0f; FLD(s, 0x7FC, uint8_t) = 2;
    func_004F5588(w(s));
    CHECK_F(F(s, 0x3D4), 1.0f);
    probe_hit = 0; probe_set_st = 0; probe_push_y = 0;
}

static void test_enemy(void) { run_low(t_enemy_airborne); run_low(t_enemy_boxes); run_low(t_enemy_snap); }

static void test_misc(void)
{
    /* 004CEA18 */
    char *m = obj(0x80), *bits = obj(8), *mesh = obj(0x100), *shape = obj(8), *mt = obj(0x154 * 4);
    char *tblp = obj(4), *arr = obj(8);
    W(tblp, 0) = w(mt); W(m, 0x20) = w(tblp); W(m, 0x28) = w(bits); W(m, 0x5C) = 1; W(m, 0x64) = w(arr);
    W(arr, 0) = w(mesh); W(mesh, 0x90) = w(shape);
    FLD(shape, 0, uint16_t) = 2; FLD(shape, 4, uint16_t) = 11;
    FLD(mt + 2 * 0x154, 0, uint16_t) = 1;
    CHECK_U(func_004CEA18(w(m), 1, 0), w(bits));
    CHECK_U(FLD(bits, 1, uint8_t), 0x08);
    CHECK_U(FLD(mt + 2 * 0x154, 0, uint16_t), 0x101);
    func_004CEA18(w(m), 0, 0);
    CHECK_U(FLD(bits, 1, uint8_t), 0);

    /* 005826A4 */
    W(data_006F599C, 8) = gp_u32((void *)assure);
    char *s8 = obj(16), *s12 = obj(16);
    FLD(s8, 0, uint16_t) = 'a'; FLD(s8, 2, uint16_t) = 'b'; FLD(s8, 4, uint16_t) = 0;
    W(data_0070D7D0, 8) = w(s8); W(data_0070D7D0, 0xC) = w(s12);
    char *mgr = obj(0x60), *out = obj(16), *file = obj(8), *label = obj(8), *str = obj(4);
    FLD(str, 0, uint8_t) = 'x';
    W(file, 4) = w(str); W(label, 4) = w(str);
    g_msbt_scene = 0; g_msbt_common = 0x4000; g_label_idx = 3;
    CHECK(func_005826A4(w(mgr), w(out), w(file), w(label)) == 1, "found");
    CHECK_U(W(out, 0), 0x203); CHECK_U(W(out, 4), 0x4000); CHECK_U(W(out, 8), 0x103); CHECK_U(W(out, 0xC), 3);
    g_label_idx = -1; n_assure = 0;
    CHECK(func_005826A4(w(mgr), w(out), w(file), w(label)) == 0, "label missing");
    CHECK_U(W(out, 0), w(s8)); CHECK_U(W(out, 8), 4); CHECK(n_assure == 1, "assure called");
    g_msbt_common = 0;
    func_005826A4(w(mgr), w(out), w(file), w(label));
    CHECK_U(W(out, 0), w(s12)); CHECK_U(W(out, 8), 0);

    /* 00581D60 */
    char *ref = obj(0x40), *d = obj(0x16000);
    W(ref, 0x38) = w(d); FLD(d, 0x15B40, int16_t) = 1; W(d, 0x50C + 0x183C + 0x3C0) = 42;
    CHECK(func_00581D60(w(ref)) == 42, "record value");
    FLD(d, 0x15B40, int16_t) = -1; CHECK(func_00581D60(w(ref)) == -1, "no record");

    /* 0012C790 */
    char *f = obj(16);
    FLD(f, 0xD, int8_t) = 1; FLD(f, 0xE, uint8_t) = 9; func_0012C790(w(f)); CHECK_U(FLD(f, 0xE, uint8_t), 2);
    FLD(f, 0xD, int8_t) = 3; FLD(f, 0xE, uint8_t) = 3; func_0012C790(w(f)); CHECK_U(FLD(f, 0xE, uint8_t), 4);
    FLD(f, 0xD, int8_t) = 0; FLD(f, 0xE, uint8_t) = 1; func_0012C790(w(f)); CHECK_U(FLD(f, 0xE, uint8_t), 0);
    FLD(f, 0xD, int8_t) = 3; FLD(f, 0xE, uint8_t) = 1; func_0012C790(w(f)); CHECK_U(FLD(f, 0xE, uint8_t), 1);
}

static void test_damage(void)
{
    char *s = obj(0x900), *vt = obj(0x60), *ride = obj(0x10), *model = obj(0x40), *dmg = obj(0x40);
    W(s, 0) = w(vt); W(vt, 0x54) = gp_u32((void *)vt54);
    W(s, 0x510) = w(ride); W(s, 0x3A0) = w(model); W(s, 0x43C) = w(dmg);
    FLD(model, 0x2E, uint16_t) = 1;
    static const struct { float mul; uint16_t amount; int16_t hp, want_hp; uint16_t want_d; } cases[] = {
        { 0.5f, 3, 10, 9, 1 },              /* 1.5 -> 1 */
        { 0.25f, 1, 10, 9, 1 },             /* 0.25 -> 0, nonzero -> 1 */
        { 0.0f, 5, 10, 10, 0 },             /* zero multiplier: no damage */
        { 2.0f, 40, 10, -0x40, 80 },        /* clamp at -64 */
        { 1e30f, 1, 10, 11, 0xFFFF },       /* saturates to 0xFFFF; 16-bit wrap: 10 - 65535 -> 11 */
    };
    for (unsigned i = 0; i < sizeof cases / sizeof cases[0]; i++) {
        W(s, 0x59C) = 0x80; W(s, 0x5A0) = 0x180000; W(dmg, 0) = 1;
        FLD(dmg, 0x30, uint16_t) = cases[i].amount; FLD(s, 0x508, int16_t) = cases[i].hp;
        g_mul = cases[i].mul; n_fbd44 = 0;
        CHECK(func_004F70A8(w(s)) == 1, "case %u returns 1", i);
        CHECK(n_fbd44 == 1, "case %u: 004FBD44", i);
        CHECK_U(FLD(dmg, 0x30, uint16_t), cases[i].want_d);
        CHECK(FLD(s, 0x508, int16_t) == cases[i].want_hp, "case %u: hp %d want %d", i,
              FLD(s, 0x508, int16_t), cases[i].want_hp);
    }
    /* NaN multiplier: vcvt gives 0, NaN != 0 -> 1 damage */
    W(s, 0x5A0) = 0x180000; FLD(dmg, 0x30, uint16_t) = 7; FLD(s, 0x508, int16_t) = 5;
    g_mul = gp_u2f(0x7FC00000u);
    func_004F70A8(w(s));
    CHECK_U(FLD(dmg, 0x30, uint16_t), 1); CHECK(FLD(s, 0x508, int16_t) == 4, "nan hp");
    /* the 00521100 out word reaches 00581B58 (Ghidra passes an unwritten local) */
    g_out_v = 0x1234; n_b58 = 0; W(s, 0x5A0) = 0;
    func_004F70A8(w(s));
    CHECK(n_b58 == 1 && b58_arg == 0x1234, "00581B58 gets the out word (%d, 0x%x)", n_b58, b58_arg);
    /* type 9 with no model data: no dereference (Ghidra: null read) */
    W(s, 0x59C) = 0x20000080; W(s, 0x5A0) = 0x180000; W(s, 0x3A0) = 0;
    FLD(dmg, 0x21, int8_t) = 9;
    func_004F70A8(w(s));   /* 0x3A0 == 0: the 0x180000 path is not taken either */
    CHECK(n_f8998 > 0, "004F8998 called while hp > 0 at entry");
}

int main(void)
{
    run_low(test_damage);
    test_param();
    run_low(test_chase);
    test_enemy();
    test_misc();
    return report("actor");
}
