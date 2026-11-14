/* Tests: 00352210 (saturating float->int argument), 004FABDC / 004FC07C (override virtual gets
 * this + arguments; AnimReq buffer passed directly), 004C01E4 (look-at height stored as float),
 * 004356B4, 0054DDF4, 00521078, 004C07D8. */
#include "hot_test.h"

char data_0070FB60[8];

int func_00352210(uint32_t self, uint32_t arg, float v);
int func_004FABDC(uint32_t self, uint32_t id, int32_t frames, uint32_t force);
int func_004FC07C(uint32_t self, uint32_t id, int32_t frames, uint32_t force);
int func_004C01E4(uint32_t self);
int func_004356B4(uint32_t self);
int func_0054DDF4(uint32_t self, uint32_t i);
int func_00521078(uint32_t self);
int func_004C07D8(uint32_t self);

static int n_cc8; static uint32_t cc8_v, cc8_arg;
int func_004A1CC8(int h, uint32_t v, int arg) { (void)h; n_cc8++; cc8_v = v; cc8_arg = (uint32_t)arg; return 0; }
int func_004A66FC(int h, uint32_t v, int arg) { (void)h; (void)arg; return (int)v + 1; }

static int n_req; static uint32_t req_ptr, req_self, req_first, req_frames;
void func_002C11E8(char *self, uint32_t first, uint32_t v54, uint8_t v58)
{ (void)v58; req_ptr = gp_u32(self); req_first = first; req_frames = v54; }
int func_0016898C(uint32_t self, uint32_t req) { n_req++; req_self = self; CHECK_U(req, req_ptr); return 0; }
static int n_ov; static uint32_t ov_this, ov_id, ov_force; static int32_t ov_frames;
static void ov_play(void *self, uint32_t id, int32_t frames, uint32_t force)
{ n_ov++; ov_this = gp_u32(self); ov_id = id; ov_frames = frames; ov_force = force; }

static char *g_player;
int func_00556068(int o) { return o; }
int func_005568E8(int p) { (void)p; return 0x77; }
static int n_15ec;
int func_004C15EC(int self, uint32_t *id) { (void)self; (void)id; n_15ec++; return 5; }
int func_00520FC0(void) { return (int)w(g_player); }

static int n_vt10;
static void vt10(void *self) { n_vt10++; CHECK_F(F((char *)self, 0x10), 1.0f); }

static void t_effect(void)
{
    char *s = obj(0x40);
    W(s, 0x20) = 1; FLD(s, 0x3B, uint8_t) = 1;
    n_cc8 = 0;
    func_00352210(w(s), 9, 1e10f);
    CHECK(n_cc8 == 1, "first handle");
    CHECK_U(cc8_v, 0x7FFFFFFF); CHECK_U(cc8_arg, 9);
    func_00352210(w(s), 9, gp_u2f(0x7FC00000u)); CHECK_U(cc8_v, 0);
    func_00352210(w(s), 9, -3.7f); CHECK_U(cc8_v, (uint32_t)-3);
    W(s, 0x24) = 0x1234; CHECK(func_00352210(w(s), 9, 2.0f) == 0x1234, "byte off: r0 = handle");
    FLD(s, 0x3C, uint8_t) = 1; CHECK(func_00352210(w(s), 9, 2.0f) == 3, "tail call");
}

static void t_anim(void)
{
    char *s = obj(0x900), *ride = obj(0x40), *sk = obj(0x20), *l0 = obj(8);
    W(s, 0x510) = w(ride); W(s, 0x410) = w(sk); W(sk, 0x14) = w(l0); W(l0, 0) = 7;
    FLD(s, 0x655, uint8_t) = 6; FLD(ride, 0x38, uint16_t) = 3; W(s, 0x414) = 9;
    /* no override: AnimReq on the stack, default frames */
    n_req = 0;
    CHECK(func_004FABDC(w(s), 0x21, -1, 0) == 1, "plays");
    CHECK(n_req == 1, "request"); CHECK_U(req_first, 0x21); CHECK_U(req_frames, 6); CHECK_U(req_self, w(sk));
    CHECK_U(FLD(ride, 0x38, uint16_t), 2); CHECK_U(FLD(s, 0x82A, uint8_t), 1); CHECK_U(W(s, 0x414), 0);
    /* blocked by state bit 11 unless forced */
    W(s, 0x5A0) = 0x800; CHECK(func_004FABDC(w(s), 0x21, 3, 0) == 0, "blocked");
    /* override object: vt[0](obj, id, frames, force) (Ghidra: no arguments) */
    char *ov = obj(16), *vt = obj(16);
    W(vt, 0) = gp_u32((void *)ov_play); W(ov, 0) = w(vt); W(s, 0x81C) = w(ov);
    n_ov = 0;
    CHECK(func_004FABDC(w(s), 0x22, 4, 1) == 1, "forced");
    CHECK(n_ov == 1, "override called"); CHECK_U(ov_this, w(ov)); CHECK_U(ov_id, 0x22);
    CHECK(ov_frames == 4, "frames"); CHECK_U(ov_force, 1);
    /* 004FC07C: same id -> 0, only the ride flag */
    W(s, 0x5A0) = 0; FLD(ride, 0x38, uint16_t) = 1; n_ov = 0;
    CHECK(func_004FC07C(w(s), 7, 4, 0) == 0, "same anim"); CHECK(n_ov == 0, "no play");
    CHECK_U(FLD(ride, 0x38, uint16_t), 0);
    CHECK(func_004FC07C(w(s), 8, -1, 0) == 1, "new anim"); CHECK(n_ov == 1 && ov_frames == 6, "default frames");
}

static void t_look(void)
{
    char *s = obj(0x900);
    g_player = obj(16); F(g_player, 0) = 1.0f; F(g_player, 4) = 5.25f; F(g_player, 8) = -2.0f;
    W(s, 0x2CC) = 3;    /* no linked actor, no target, own id set -> look at the player */
    func_004C01E4(w(s));
    CHECK_F(F(s, 0x7EC), 1.0f); CHECK_F(F(s, 0x7F0), 6.25f); CHECK_F(F(s, 0x7F4), -2.0f);
    W(s, 0x2CC) = 0; CHECK_U(func_004C01E4(w(s)), w(s));
    /* linked actor with a different, non-player id -> 004C15EC */
    char *o = obj(0x300); W(o, 0x2CC) = 9; W(s, 0x774) = w(o); W(s, 0x2CC) = 3; n_15ec = 0;
    CHECK(func_004C01E4(w(s)) == 5 && n_15ec == 1, "retarget");
    /* target == own id with a linked actor: clear, return the actor */
    W(s, 0x810) = 3; CHECK_U(func_004C01E4(w(s)), w(o)); CHECK_U(W(s, 0x810), 0);
}

static void t_misc(void)
{
    char *s = obj(0x60), *vt = obj(0x20);
    W(s, 0) = w(vt); W(vt, 0x10) = gp_u32((void *)vt10);
    F(s, 4) = 1.0f; F(s, 8) = 2.0f; F(s, 0xC) = 3.0f;
    n_vt10 = 0; func_004356B4(w(s));
    CHECK(n_vt10 == 1, "vt10"); CHECK_U(FLD(s, 0x30, uint8_t), 1); CHECK_F(F(s, 0x20), 2.0f);
    F(s, 4) = 7.0f; func_004356B4(w(s)); CHECK_F(F(s, 0x10), 1.0f); CHECK_F(F(s, 0x1C), 7.0f);
    W(s, 0x30) = 0;
    char *a = obj(0x40); W(a, 0x2D0) = 0x1000;
    CHECK_U(func_0054DDF4(w(a), 2), 0x1000 + 0x18 + 0xD0 + 0x70); CHECK_U(func_0054DDF4(w(a), 4), 0);
    char *b = obj(0x400); W(b, 0x39C) = 8; CHECK(func_00521078(w(b)) == 0, "flags");
    W(b, 0x39C) = 0xC; CHECK(func_00521078(w(b)) == 1, "flags 2");
    char *c = obj(0x920); func_004C07D8(w(c)); CHECK_U(FLD(c, 0x90E, uint16_t), 0xFFFF);
}

int main(void)
{
    t_effect();
    run_low(t_anim);
    t_look();
    t_misc();
    return report("misc2");
}
