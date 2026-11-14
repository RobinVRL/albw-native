/* Tests: AnimSlotCtl (002317C0, 002313DC, 00231524), AnimSet::allocSlots (0016773C),
 * SkelAnim ctor / request / calc (0016A2FC, 0016898C, 00169A80). Expected values from the ARM
 * semantics (see each func_ file), incl. the NaN branches where Ghidra differs. */
#include "hot_test.h"
#include <math.h>

char data_006F5988[16];

/* ---- stubs ---- */
static int n_play; static volatile uint32_t play_anim; static uint32_t play_slot; static float play_start, play_rate;
int func_001672F8(int anim, uint32_t slot, float start, float rate)
{ n_play++; play_anim = (uint32_t)anim; play_slot = slot; play_start = start; play_rate = rate; return 0x55; }
static int n_req; static volatile uint32_t req_self; static uint32_t *volatile req_ptr;
int func_00169344(int self, uint32_t *req) { n_req++; req_self = (uint32_t)self; req_ptr = req; return 0; }
static int n_notify; static volatile uint32_t notify_name; static float notify_frame;
int func_0010DBB4(int l, int *name, float frame)
{ (void)l; n_notify++; notify_name = (uint32_t)name[1]; notify_frame = frame; return 0x77; }
static int n_copy; static uint32_t copy_n;
int func_0010E3C4(uint32_t *d, uint32_t *s, uint32_t n) { n_copy++; copy_n = n; memmove(d, s, n); return 0; }
void *func_0010BA78(uint32_t size) { return obj(size ? size : 4); }
void *func_0010CEE0(uint32_t size, void *heap, int32_t align) { (void)heap; (void)align; return obj(size ? size : 4); }
void *func_00100118(void *a, void *ctor, uint32_t size, uint32_t n)
{ for (uint32_t i = 0; i < n; i++) ((int (*)(int *))ctor)((int *)((char *)a + i * size)); return a; }
static int n_ctor_slot, n_ctor_layer, n_ctor_group;
int func_00168204(int *p) { n_ctor_slot++; p[4] = 0x1234; return 0; }
int func_00270A2C(int *p) { n_ctor_layer++; (void)p; return 0; }
int func_00169A28(int *p) { n_ctor_group++; (void)p; return 0; }

float func_002317C0(uint32_t ctl, float rate);
int func_002313DC(uint32_t ctl);
int func_00231524(uint32_t ctl);
int func_0016773C(uint32_t self, int32_t n);
int func_0016A2FC(uint32_t self, int32_t nb, uint32_t u, int32_t nl);
int func_0016898C(uint32_t self, uint32_t req);
int func_00169A80(uint32_t self, uint32_t a, uint32_t b, uint32_t c);

static char *mk_ctl(int16_t mode, int16_t slot, float frame, char **e_out)
{
    char *ctl = obj(16), *anim = obj(16), *e = obj(0x38 * 2), *sub = obj(0x20);
    FLD(ctl, 0, int16_t) = mode; FLD(ctl, 2, int16_t) = slot; F(ctl, 4) = frame; W(ctl, 8) = w(anim);
    W(anim, 8) = 1; W(anim, 0xC) = w(e);
    W(e, 0x10) = w(sub); F(e, 0x20) = 30.0f;
    *e_out = e;
    return ctl;
}

static void test_ctl(void)
{
    char *e; char *ctl = mk_ctl(4, 0, 5.0f, &e);
    float nan = gp_u2f(0x7FC00000u);
    /* mode 4, NaN rate: ARM blt taken -> reverse from the end frame */
    n_play = 0;
    float r = func_002317C0(w(ctl), nan);
    CHECK(n_play == 1, "one play call");
    CHECK_F(play_start, 30.0f);
    CHECK_U(gp_f2u(play_rate), 0xFFC00000u);   /* -NaN */
    CHECK_F(r, 30.0f);
    CHECK_F(F(e, 0x14), 5.0f);
    CHECK_F(F(P(W(e, 0x10)), 0x10), 5.0f);
    r = func_002317C0(w(ctl), -2.0f);
    CHECK_F(play_start, 30.0f); CHECK_F(play_rate, 2.0f); CHECK_F(r, 30.0f);
    r = func_002317C0(w(ctl), 2.0f);
    CHECK_F(play_start, 0.0f); CHECK_F(play_rate, 2.0f); CHECK_F(r, 0.0f);
    /* mode 2 reverse, mode 0 forward, mode 3 stop at end, mode 1 stop at start */
    FLD(ctl, 0, int16_t) = 2; r = func_002317C0(w(ctl), 1.5f);
    CHECK_F(play_start, 30.0f); CHECK_F(play_rate, -1.5f); CHECK_F(r, 30.0f);
    FLD(ctl, 0, int16_t) = 0; r = func_002317C0(w(ctl), 1.5f);
    CHECK_F(play_start, 0.0f); CHECK_F(play_rate, 1.5f); CHECK_F(r, 0.0f);
    FLD(ctl, 0, int16_t) = 3; r = func_002317C0(w(ctl), 1.5f);
    CHECK_F(play_rate, 0.0f); CHECK_F(F(e, 0x14), 30.0f); CHECK_F(F(P(W(e, 0x10)), 0x10), 30.0f);
    FLD(ctl, 0, int16_t) = 1; r = func_002317C0(w(ctl), 1.5f);
    CHECK_F(F(e, 0x14), 0.0f); CHECK_F(r, 0.0f);
    /* unknown / negative mode: no call, returns 0; negative slot: returns rate */
    n_play = 0;
    FLD(ctl, 0, int16_t) = 7; r = func_002317C0(w(ctl), 1.5f);
    CHECK(n_play == 0, "no call for mode 7"); CHECK_F(r, 0.0f);
    FLD(ctl, 0, int16_t) = -1; r = func_002317C0(w(ctl), 1.5f);
    CHECK(n_play == 0, "no call for mode -1"); CHECK_F(r, 0.0f);
    FLD(ctl, 2, int16_t) = -1; r = func_002317C0(w(ctl), 1.5f);
    CHECK_F(r, 1.5f);
    /* out-of-range slot -> entry 0 after the play call */
    FLD(ctl, 0, int16_t) = 3; FLD(ctl, 2, int16_t) = 5; F(e, 0x14) = -1.0f;
    func_002317C0(w(ctl), 1.0f);
    CHECK_U(play_slot, 5); CHECK_F(F(e, 0x14), 30.0f);
    /* 002313DC / 00231524 */
    FLD(ctl, 2, int16_t) = 0; F(e, 0x14) = 7.0f;
    func_002313DC(w(ctl)); CHECK_F(F(e, 0x14), 0.0f); CHECK_F(play_rate, 0.0f);
    func_00231524(w(ctl)); CHECK_F(F(e, 0x14), 30.0f);
    W(ctl, 8) = 0; CHECK(func_00231524(w(ctl)) == 0, "null anim");
}

static void test_alloc(void)
{
    char *set = obj(16);
    n_ctor_slot = 0;
    CHECK(func_0016773C(w(set), 3) == 3, "loop count");
    CHECK(n_ctor_slot == 3, "3 slot ctors");
    CHECK_U(W(set, 8), 3);
    CHECK_U(W(P(W(set, 0xC)), 0x38 * 2 + 0x10), 0);
    CHECK(func_0016773C(w(set), 0) == 0, "n = 0");

    char *sk = obj(0xB0);
    n_ctor_layer = n_ctor_group = 0;
    CHECK_U(func_0016A2FC(w(sk), 5, 0, 2), w(sk));
    CHECK_U(W(sk, 0), 0xFFFFFFFFu); CHECK_U(W(sk, 0x28), 3); CHECK_U(W(sk, 0x2C), w(sk) + 0x30);
    CHECK_U(W(sk, 0x78), 10); CHECK_F(F(sk, 0x8C), 1.0f); CHECK_F(F(sk, 0x88), 0.0f);
    CHECK_U(W(sk, 0x10), 2); CHECK_U(W(sk, 0xC), 0); CHECK_U(W(sk, 0x1C), 2);
    CHECK_U(W(sk, 0x90), 4); CHECK_U(W(sk, 4), 5);
    CHECK(n_ctor_layer == 4 && n_ctor_group == 4, "ctors %d %d", n_ctor_layer, n_ctor_group);
}

/* SkelAnim with n layers */
static char *mk_skel(int n)
{
    char *s = obj(0xB0);
    char *cur = obj(0x28 * 4), *prev = obj(0x28 * 4), *grp = obj(0x14 * 4);
    W(s, 0xC) = n; W(s, 0x14) = w(cur);
    W(s, 0x18) = n; W(s, 0x1C) = 4; W(s, 0x20) = w(prev);
    W(s, 0x90) = 4; W(s, 0x94) = w(grp);
    for (int i = 0; i < 4; i++) {
        char *res = obj(16), *rr = obj(8);
        W(rr, 0) = w(res); F(res, 8) = 40.0f; FLD(res, 4, uint8_t) = 1;
        W(cur + i * 0x28, 4) = w(rr); W(prev + i * 0x28, 4) = w(rr);
        FLD(cur + i * 0x28, 0x24, int8_t) = (int8_t)i; FLD(prev + i * 0x28, 0x24, int8_t) = (int8_t)i;
        FLD(grp + i * 0x14, 0x10, uint8_t) = 1;
    }
    char *name = obj(8);
    W(P(W(cur, 4)), 0) = W(P(W(cur, 4)), 0);
    (void)name;
    return s;
}

static void test_request(void)
{
    char *s = mk_skel(1);
    char *req = obj(0x5C), *ent = obj(0x18 * 2);
    W(req, 0) = 1; W(req, 8) = w(ent);
    char *cur = P(W(s, 0x14));
    W(cur, 0) = 0xAB; W(ent, 0) = 0xAB;           /* same id: in-place update */
    F(ent, 4) = 0.0f; F(ent, 8) = -1.0f;          /* start 0 with negative rate -> start = frame */
    F(ent, 0xC) = -3.0f;                          /* negative frame -> end frame of the res */
    FLD(ent, 0x14, int8_t) = -1;                  /* loop from the res flags */
    W(ent, 0x10) = 0x99;
    W(s, 0xA4) = w(obj(4));
    n_req = n_notify = 0;
    CHECK_U(func_0016898C(w(s), w(req)), 0x77);
    CHECK(n_req == 0, "same ids: no 00169344");
    CHECK_F(F(cur, 0x14), 40.0f); CHECK_U(FLD(cur, 0x1C, uint8_t), 1);
    CHECK_F(F(cur, 8), 40.0f); CHECK_F(F(cur, 0xC), 40.0f); CHECK_F(F(cur, 0x10), -1.0f);
    CHECK_U(FLD(cur, 0x25, uint8_t), 1); CHECK_U(W(cur, 0x20), 0x99);
    CHECK(n_notify == 1, "notify"); CHECK_F(notify_frame, 40.0f);
    /* NaN frame in the request: `bhs` skips (frame stays NaN) */
    F(ent, 0xC) = gp_u2f(0x7FC00000u);
    func_0016898C(w(s), w(req));
    CHECK_U(gp_f2u(F(cur, 0x14)), 0x7FC00000u);

    /* different id: transition. Positive NaN weight -> ARM keeps the blend (path B: only the
     * current layers' groups are deactivated, no copy) */
    W(ent, 0) = 0xCD;
    F(s, 0x88) = gp_u2f(0x7FC00000u);
    n_copy = 0; n_req = 0;
    char *grp = P(W(s, 0x94));
    FLD(grp, 0x10, uint8_t) = 1;
    W(req, 0x54) = 4; FLD(req, 0x58, uint8_t) = 1;
    func_0016898C(w(s), w(req));
    CHECK(n_copy == 0, "NaN weight: no copy (Ghidra copies)");
    CHECK(n_req == 1, "00169344 called");
    CHECK_U(FLD(grp, 0x10, uint8_t), 0);
    CHECK_F(F(s, 0x8C), 0.25f);
    CHECK_U(W(s, 0xC), 0); CHECK_U(W(s, 0x24), 0);
    /* small weight -> copy current to previous, weight 1 */
    W(s, 0xC) = 1; F(s, 0x88) = 0.25f; W(req, 0x54) = 0; FLD(req, 0x58, uint8_t) = 0;
    func_0016898C(w(s), w(req));
    CHECK(n_copy == 1 && copy_n == 0x28, "copy %d %u", n_copy, copy_n);
    CHECK_F(F(s, 0x88), 1.0f); CHECK_F(F(s, 0x8C), 1.0f);
    CHECK_F(F(P(W(s, 0x20)), 0x10), 0.0f);
    /* empty request: nothing but self[0x24] = 0, r0 = self */
    W(req, 0) = 0; W(s, 0x24) = 5;
    CHECK_U(func_0016898C(w(s), w(req)), w(s));
    CHECK_U(W(s, 0x24), 0);
}

static void test_calc(void)
{
    char *s = mk_skel(1);
    char *l = P(W(s, 0x14));
    W(s, 0x24) = 0; W(s, 0x18) = 0;
    /* looping layer wraps */
    F(l, 8) = 9.0f; F(l, 0x10) = 2.0f; F(l, 0x14) = 10.0f; FLD(l, 0x1C, uint8_t) = 1; W(l, 0x18) = 0;
    FLD(l, 0x25, uint8_t) = 0;
    func_00169A80(w(s), 0, 0, 0);
    CHECK_F(F(l, 8), 1.0f); CHECK_F(F(l, 0xC), 9.0f); CHECK_U(W(l, 0x18), 1);
    /* looping, NaN: ARM leaves the NaN frame, no loop count (Ghidra: subtracts, counts) */
    F(l, 0x10) = gp_u2f(0x7FC00000u);
    func_00169A80(w(s), 0, 0, 0);
    CHECK_U(gp_f2u(F(l, 8)), 0x7FC00000u); CHECK_U(W(l, 0x18), 1);
    /* looping backwards below 0 */
    F(l, 8) = 1.0f; F(l, 0x10) = -3.0f;
    func_00169A80(w(s), 0, 0, 0);
    CHECK_F(F(l, 8), 8.0f); CHECK_U(W(l, 0x18), 2);
    /* one-shot: clamp to end, clamp to 0, NaN -> 0 (Ghidra stores NaN) */
    FLD(l, 0x1C, uint8_t) = 0;
    F(l, 8) = 9.0f; F(l, 0x10) = 5.0f; func_00169A80(w(s), 0, 0, 0); CHECK_F(F(l, 8), 10.0f);
    F(l, 8) = 1.0f; F(l, 0x10) = -5.0f; func_00169A80(w(s), 0, 0, 0); CHECK_F(F(l, 8), 0.0f);
    F(l, 0x10) = gp_u2f(0x7FC00000u); func_00169A80(w(s), 0, 0, 0); CHECK_F(F(l, 8), 0.0f);
    /* just-restarted layer is skipped once, flag cleared */
    F(l, 8) = 2.0f; F(l, 0x10) = 1.0f; FLD(l, 0x25, uint8_t) = 1;
    func_00169A80(w(s), 0, 0, 0);
    CHECK_F(F(l, 8), 2.0f); CHECK_U(FLD(l, 0x25, uint8_t), 0);
    /* previous layers advance only with weight > 0 (NaN: no) and self[0] == 0 */
    char *p = P(W(s, 0x20));
    W(s, 0x18) = 1; F(p, 8) = 1.0f; F(p, 0x10) = 1.0f; F(p, 0x14) = 10.0f; FLD(p, 0x1C, uint8_t) = 0;
    F(s, 0x88) = gp_u2f(0x7FC00000u); func_00169A80(w(s), 0, 0, 0); CHECK_F(F(p, 8), 1.0f);
    F(s, 0x88) = 0.5f; func_00169A80(w(s), 0, 0, 0); CHECK_F(F(p, 8), 2.0f); CHECK_F(F(p, 0xC), 1.0f);
    W(s, 0) = 1; func_00169A80(w(s), 0, 0, 0); CHECK_F(F(p, 8), 2.0f);
}

int main(void)
{
    (void)play_anim; (void)req_self; (void)req_ptr; (void)notify_name;
    test_ctl();
    test_alloc();
    test_request();
    test_calc();
    return report("anim");
}
