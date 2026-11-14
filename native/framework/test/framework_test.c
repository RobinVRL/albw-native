/* Unit checks for native/framework (expected values derived by hand from the EU disassembly,
 * see each func_<ADDR>.c header). Every callee is a recording stub; game vtables/function
 * words hold stub addresses, so the program is linked non-PIE (below 4 GiB on -m64 too) and game
 * objects come from lowalloc() (native/gameplay/test/lowmem.h). */
#include <stdio.h>
#include <string.h>
#include <ucontext.h>
#include "framework.h"
#include "lowmem.h"

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)
#define W(p, o) FLD(p, o, uint32_t)
#define B(p, o) FLD(p, o, uint8_t)
#define H(p, o) FLD(p, o, uint16_t)

int func_0010A794(void *self);
int func_0010BEC4(uint32_t self_w, uint32_t idx, void *name);
int func_002D55D0(uint32_t self_w, uint32_t next);
int func_0010A464(void *self);
int func_004EDC9C(void *self);
int func_002DFF7C(void *self);
int func_004B9A10(void *self, uint8_t flag);
int func_00150A84(int *self, int *name, int arg);
int func_001507D8(uint32_t self_w, int *name, int arg);
int func_0049F920(void *self, uint32_t cls_w);
int func_0049F7B8(void *self, void *cls, uint32_t param);
int func_0049F79C(void *self, uint32_t b, void *cls, uint32_t a);
int func_0025D9E8(uint32_t self_w, int *arg, int name);
int func_0049D3D8(uint32_t self_w, uint32_t *arg, uint32_t heaps_w);
int func_004FD464(void *self, uint32_t *arg, uint32_t *param);
int func_00520FC0(void);

/* ---- game data ---- */
uint32_t data_006D68BC[4], data_006ED880[4], data_006EB32C[32], data_006F6C44[4], data_006F5C98[4];
uint32_t data_006D6B1C[4], data_006EDB00[64], data_006F4C98[4];
uint32_t data_007A9254[3] = { 0x11, 0x22, 0x33 };
uint32_t data_007A9260[3] = { 0x44, 0x55, 0x66 };
uint32_t data_00711F50, data_00715210, data_00709DF8;
int32_t data_0079E048;
uint8_t data_0069512C[0x60];
uint8_t data_0070A5A4[4] = { 0x5E };
uint32_t data_0070A5AC[1] = { 0xCAFEF00D };
uint32_t data_0069513C[2] = { 0xA1, 0xA2 };

/* ---- logging ---- */
static char log_[4096];
static void L(const char *s) { strcat(log_, s); strcat(log_, " "); }
static void LX(const char *s, uint32_t v) { char b[64]; snprintf(b, sizeof b, "%s=%X", s, v); L(b); }

/* ---- SafeString with a counting assureTermination ---- */
static int assure_calls;
static uint32_t assure_stub(void *s) { assure_calls++; return 0; }
static uint32_t ss_vt[4];
static void mkstr(fw_SafeString *s, const char *txt) { s->vtbl = GPTR_OF(ss_vt); s->top = GPTR_OF(txt); }

uint32_t func_0010E3C4(void *d, const void *s, uint32_t n) { memcpy(d, s, n); return 0x1234; }
uint32_t func_0010DA7C(void *self, void *heap, uint32_t o) { LX("DA7C", o); W(self, 0) = 0xD15; return gp_u32(self); }
uint32_t func_001B6E04(void *self) { L("6E04"); return gp_u32(self); }
uint32_t func_0048D088(void *self, void *arg, uint32_t name) { LX("D088", name); return gp_u32(self); }

/* ---- CreateArg base ctor stub (native/game/func_001031B4.c behaviour) ---- */
uint32_t func_001031B4(void *self, void *cls) {
    char *p = self;
    W(p, 0) = W(cls, 0); W(p, 4) = W(cls, 4);
    memset(p + 8, 0x77, 0x50);
    for (int o = 0x58; o < 0x74; o += 4) W(p, o) = 0;
    W(p, 0x74) = 0xFFFFFFFF; B(p, 0x78) = 1; W(p, 0x7C) = 0;
    return gp_u32(p);
}

/* ---- TaskMgr stubs ---- */
static char *g_task; static uint32_t fac_cls[2], fac_ca[3]; static int heap_calls; static uint32_t heap_args[4];
int func_0010C0B8(void *cs) { L("lock"); return 0; }
int func_0010EEE0(void *cs) { L("unlock"); return 0; }
uint32_t func_0010983C(void *mgr, void *heap) { heap_args[heap_calls++] = gp_u32(heap); return 0x900 + heap_calls; }
uint32_t func_0057D87C(const void *cls, void *ca) {
    memcpy(fac_cls, cls, 8); memcpy(fac_ca, ca, 12); L("factory"); return gp_u32(g_task);
}
static uint32_t tree_a, tree_b;
int func_0049FBC4(void *tree, void *node) { tree_a = gp_u32(tree); tree_b = gp_u32(node); return 0; }

/* ---- sound stubs ---- */
static int r_F0F8, r_81C8, r_A014, r_AA88; static uint32_t r_7674;
static uint8_t set_flag; static char se_seen[0x40]; static uint32_t se_vt_seen; static int se_size_seen;
int func_0014F0F8(void *self, void *se, uint8_t *flag) {
    fw_FixedSafeString64 *s = se; strcpy(se_seen, GPTR_TO(char, s->top)); se_vt_seen = s->vtbl; se_size_seen = s->size;
    *flag = set_flag; return r_F0F8;
}
int func_005881C8(void *mgr, void *se, uint32_t mask) { LX("81C8", mask); return r_81C8; }
static int e670_flag, e670_arg;
int func_0014E670(void *self, void *se, void *name, int flag, int arg) { e670_flag = flag; e670_arg = arg; return 77; }
uint32_t func_00297674(void *mgr, void *self) { L("7674"); return r_7674; }
int func_0019A4C4(void *h, void *p) { L("A4C4"); return 0; }
uint32_t func_0019A014(void *h, void *se) { L("A014"); return r_A014; }
static uint32_t ins_list, ins_node;
int func_0010F1DC(void *list, void *node) { ins_list = gp_u32(list); ins_node = gp_u32(node); L("insert"); return 0; }
int func_001DF8F8(void *s, void *name) { L("F8F8"); return 0; }
int func_0025B6A8(void *arg, void *s) { LX("B6A8", gp_u32(s)); return 0; }
int func_00297574(void *mgr, void *h) { LX("7574", gp_u32(h)); return 0; }
uint32_t func_00587FCC(void *mgr, void *name) { return 0x5E1D; }
static uint32_t aa88_id;
uint32_t func_0019AA88(void *h, uint32_t id, int arg) { aa88_id = id; return r_AA88; }

/* ---- EnemyBase stubs ---- */
static char *g_res; static uint32_t c428[7]; static uint8_t blk_seen[12]; static float c798_f; static uint32_t c798_list, c798_m;
static int vec_calls; static uint32_t vec_arr[8], vec_sz[8], vec_n[8];
static uint8_t *fa000; static uint32_t o89c;
/* ActorBase/Actor ctor 00150E40 is native/hot's (stub here): sets the resource pointer +0x2D0
 * and the +0x3A4 object the way the real one leaves them */
uint32_t data_0070FB60;
static uint32_t r_3a4;
uint32_t func_00150E40(void *self, void *arg) { W(self, 0x2D0) = gp_u32(g_res); W(self, 0x3A4) = r_3a4; return gp_u32(self); }
uint32_t func_0010BAB4(uint32_t size) { return gp_u32(lowalloc(size)); }
uint32_t func_004EE484(void *p) { return gp_u32(p); }
uint32_t func_0032493C(void *p) { return gp_u32(p); }
uint32_t func_0034CAA0(void *p) { return gp_u32(p); }
uint32_t func_002B2590(void *p, void *owner) { return gp_u32(p); }
void func_004FD414(void) {}
void func_004FC988(void) {}
void func_004F7DFC(void) {}
void *func_00100118(void *arr, void *ctor, uint32_t size, uint32_t n) {
    vec_arr[vec_calls] = gp_u32(arr); vec_sz[vec_calls] = size; vec_n[vec_calls] = n; vec_calls++;
    memset(arr, 0xEE, size * n); return arr;
}
uint32_t func_004FA000(int zero) { return gp_u32(fa000); }
uint32_t func_005330BC(void *res, void *name) { return 0x3C3C; }
uint32_t func_0014E428(void *self, uint32_t a, int32_t b, uint32_t c, int32_t store, uint8_t e, uint8_t f) {
    c428[0] = a; c428[1] = b; c428[2] = c; c428[3] = store; c428[4] = e; c428[5] = f; return 0x4D0DE1;
}
int func_004FC798(void *list, uint32_t model, void *arg, float f) {
    c798_list = gp_u32(list); c798_m = model; memcpy(blk_seen, arg, 12); c798_f = f; return 1;
}
static int c9a2c; int func_004F9A2C(void *self, void *name) { c9a2c++; return 0; }
int func_0054DD54(void *p, uint32_t i) { return 1; }
int func_0054DD3C(void *p, uint32_t i) { return 1; }
uint32_t func_0054D89C(void *self, uint32_t i) { return o89c; }

static void test_state(void) {
    char *sm = lowalloc(0x40);
    memset(sm, 0xAB, 0x40);
    CHECK(func_0010A794(sm) == (int)gp_u32(sm));
    CHECK(W(sm, 0) == 0 && B(sm, 4) == 0xFF && B(sm, 5) == 0xFF && B(sm, 6) == 0 && B(sm, 7) == 0xAB);
    CHECK(W(sm, 8) == 0 && W(sm, 0xC) == 0 && W(sm, 0x10) == 0 && W(sm, 0x14) == 0xABABABAB);

    /* names: 3 FixedSafeString<24> entries (0x24 bytes), bufsize 24 */
    char *tab = lowalloc(3 * 0x24);
    for (int i = 0; i < 3; i++) { W(tab + i * 0x24, 4) = gp_u32(tab + i * 0x24 + 0xC); W(tab + i * 0x24, 8) = 24; }
    W(sm, 8) = 3; W(sm, 0xC) = gp_u32(tab);
    fw_SafeString n; mkstr(&n, "cState_Wait");
    assure_calls = 0;
    func_0010BEC4(gp_u32(sm), 1, &n);
    CHECK(assure_calls == 2 && strcmp(tab + 0x24 + 0xC, "cState_Wait") == 0);
    mkstr(&n, "cState_AVeryLongStateNameThatOverflows");          /* 38 chars -> 23 + NUL */
    func_0010BEC4(gp_u32(sm), 2, &n);
    CHECK(strlen(tab + 0x48 + 0xC) == 23 && memcmp(tab + 0x48 + 0xC, "cState_AVeryLongStateNa", 23) == 0);
    mkstr(&n, "Out");                                              /* idx >= count -> entry 0 */
    func_0010BEC4(gp_u32(sm), 3, &n);
    CHECK(strcmp(tab + 0xC, "Out") == 0);
    func_0010BEC4(gp_u32(sm), 0xFFFFFFFFu, &n);                    /* unsigned compare */
    CHECK(strcmp(tab + 0xC, "Out") == 0);
    mkstr(&n, "");
    func_0010BEC4(gp_u32(sm), 1, &n);
    CHECK(tab[0x24 + 0xC] == 0);

    /* StateBase::changeState */
    char *sb = lowalloc(16); W(sb, 4) = 0x5555;
    CHECK(func_002D55D0(gp_u32(sb), (uint32_t)-1) == 0 && W(sb, 4) == 0x5555);
    CHECK(func_002D55D0(gp_u32(sb), (uint32_t)-2) == 0 && W(sb, 4) == 0x5555);
    CHECK(func_002D55D0(gp_u32(sb), 0x12345) == (int)gp_u32(sb + 8) && H(sb, 4) == 0x2345 && H(sb, 6) == 0);
    CHECK(func_002D55D0(gp_u32(sb), (uint32_t)-3) == (int)gp_u32(sb + 8) && H(sb, 4) == 0xFFFD);
}

static void test_ctors(void) {
    char *o = lowalloc(0x100); memset(o, 0xAB, 0x100); log_[0] = 0;
    CHECK(func_0010A464(o) == (int)gp_u32(o));
    CHECK(W(o, 0) == GPTR_OF(data_006D68BC) && W(o, 0x10) == 0 && W(o, 0x14) == 0 && W(o, 0x18) == 0xABABABAB);
    CHECK(W(o, 0x2C) == 0 && W(o, 0x30) == 0 && W(o, 0x34) == 0xFFFFFFFF && W(o, 0x38) == 0xFFFFFFFF);
    CHECK(W(o, 0x3C) == 0xFFFFFFFF && W(o, 0x40) == 0xFFFFFFFF && W(o, 0x44) == 0 && W(o, 0x48) == 0);
    CHECK(W(o, 0x4C) == 0 && B(o, 0x50) == 0 && B(o, 0x51) == 0xFF && B(o, 0x52) == 0xAB && W(o, 0x58) == 0);
    CHECK(strcmp(log_, "DA7C=3 ") == 0);

    memset(o, 0xAB, 0x100);
    CHECK(func_004EDC9C(o) == (int)gp_u32(o));
    CHECK(W(o, 0) == GPTR_OF(data_006ED880) && W(o, 0x18) == 0 && W(o, 0x1C) == 1 && H(o, 0x24) == 0 && H(o, 0x26) == 0xABAB);
    CHECK(H(o, 0x2C) == 0xFF && W(o, 0x38) == gp_u32(o) && W(o, 0x3C) == 0 && B(o, 0x44) == 1 && B(o, 0x45) == 0xAB);

    char *sp = lowalloc(0x300); memset(sp, 0xAB, 0x300);
    CHECK(func_002DFF7C(sp) == (int)gp_u32(sp + 0x10));
    CHECK(W(sp, 0) == 0 && W(sp, 0x10) == 0x11 && W(sp, 0x14) == 0x22 && W(sp, 0x18) == 0x33);
    CHECK(H(sp, 0x50) == 0xFFFF && H(sp, 0x56) == 0xFFFF && W(sp, 0x2C0) == 0 && W(sp, 0x2C4) == 0xABABABAB);

    memset(o, 0, 0x100); W(o, 0x18) = 0x1001; log_[0] = 0;
    CHECK(func_004B9A10(o, 0x5A) == (int)gp_u32(o));
    CHECK(W(o, 0) == GPTR_OF(data_006EB32C) && W(o, 0x38) == GPTR_OF(data_006EB32C) + 0x54);
    CHECK(W(o, 0x48) == gp_u32(o + 0x48) && W(o, 0x4C) == gp_u32(o + 0x48) && W(o, 0x50) == 0);
    CHECK(W(o, 0x58) == gp_u32(o + 0x58) && W(o, 0x5C) == gp_u32(o + 0x58) && W(o, 0x60) == 0);
    CHECK(W(o, 0x54) == 4 && W(o, 0x64) == 0x18 && W(o, 0x68) == 2 && W(o, 0x6C) == 0 && B(o, 0x70) == 0x5A);
    CHECK(W(o, 0x10) == gp_u32(o) && W(o, 0x18) == 0x1181 && strcmp(log_, "6E04 DA7C=3 ") == 0);

    log_[0] = 0;
    CHECK(func_0025D9E8(gp_u32(o), NULL, 0x14CF5C) == (int)gp_u32(o) && W(o, 0) == GPTR_OF(data_006D6B1C));
    CHECK(strcmp(log_, "D088=14CF5C ") == 0);
}

static void test_tasks(void) {
    char *a = lowalloc(0x100);
    uint32_t cls[2] = { 2, 0x00103C10 };
    data_0079E048 = 3;
    CHECK(func_0049F920(a, GPTR_OF(cls)) == (int)gp_u32(a));
    CHECK(W(a, 0) == 2 && W(a, 4) == 0x00103C10 && B(a, 0x78) == 0);
    for (int i = 0; i < 3; i++) CHECK(B(a, 8 + i * 0x14 + 0x10) == 1 && B(a, 8 + i * 0x14 + 0x12) == (i != 0));
    CHECK(B(a, 8 + 3 * 0x14 + 0x10) == 0x77);        /* only n slots */
    /* t >= n: second loop skipped */
    data_0079E048 = 0;
    func_0049F920(a, GPTR_OF(cls));
    CHECK(B(a, 8 + 0x10) == 0x77 && B(a, 8 + 0x12) == 0x77 && B(a, 0x78) == 0);
    data_0079E048 = 2;
    CHECK(func_0049F7B8(a, cls, 0xBEEF) == (int)gp_u32(a) && W(a, 0x64) == 0xBEEF && W(a, 0x68) == 0 && W(a, 4) == 0x00103C10);
    CHECK(func_0049F79C(a, 0xB, cls, 0xA) == (int)gp_u32(a) && W(a, 0x64) == 0xA && W(a, 0x68) == 0xB);

    /* TaskMgr::createTask_ */
    char *mgr = lowalloc(0x40), *arg = lowalloc(0x100), *heaps = lowalloc(0x40), *tree = lowalloc(0x40);
    g_task = lowalloc(0x100);
    W(arg, 0) = 2; W(arg, 4) = 0x6887A8; B(arg, 0x78) = 0x3C; W(arg, 0x60) = 0x60606060; W(arg, 0x5C) = gp_u32(tree);
    W(heaps, 0x14) = 2; W(heaps, 8) = 0x4AE40;
    log_[0] = 0; heap_calls = 0;
    CHECK(func_0049D3D8(gp_u32(mgr), (uint32_t *)arg, gp_u32(heaps)) == (int)gp_u32(g_task));
    CHECK(strcmp(log_, "lock factory unlock ") == 0);
    CHECK(fac_cls[0] == 2 && fac_cls[1] == 0x6887A8 && fac_ca[0] == gp_u32(heaps) && fac_ca[1] == gp_u32(mgr) && fac_ca[2] == 0x60606060);
    CHECK(heap_calls == 2 && heap_args[0] == 0x4AE40 && heap_args[1] == 0x901);
    CHECK(W(g_task, 0x64) == 2 && W(g_task, 0x68) == 0x6887A8 && B(g_task, 0x61) == 0x3C);
    CHECK(tree_a == gp_u32(tree + 0x10) && tree_b == gp_u32(g_task + 0x10));
    W(heaps, 8) = 0; W(arg, 0x5C) = 0; heap_calls = 0; tree_a = 0;
    func_0049D3D8(gp_u32(mgr), (uint32_t *)arg, gp_u32(heaps));
    CHECK(heap_calls == 0 && tree_a == 0);
}

static void test_se(void) {
    char *act = lowalloc(0x500);
    fw_SafeString n; mkstr(&n, "SE_Test_Name");
    data_00711F50 = 0x5D0;
    /* 0014F0F8 fails -> 0 */
    r_F0F8 = 0; assure_calls = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 9) == 0);
    CHECK(assure_calls == 2 && strcmp(se_seen, "SE_Test_Name") == 0 && se_vt_seen == GPTR_OF(data_006F5C98) && se_size_seen == 0x40);
    /* sound manager path */
    r_F0F8 = 1; r_81C8 = 1; set_flag = 0xFF; log_[0] = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 9) == 77 && e670_flag == -1 && e670_arg == 9);
    CHECK(strcmp(log_, "81C8=10000000 ") == 0);
    /* create handle, play ok */
    r_81C8 = 0; r_7674 = 0x7000; r_A014 = 0xA0A0; set_flag = 1; W(act, 0x3F0) = 0; W(act, 0x404) = 0x10; W(act, 0x400) = 5;
    log_[0] = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 9) == 1);
    CHECK(W(act, 0x3F0) == 0x7000 && W(act, 0x400) == 6 && ins_list == gp_u32(act + 0x3F8) && ins_node == 0x7010);
    CHECK(strcmp(log_, "81C8=10000000 7674 A4C4 A014 insert F8F8 B6A8=A0A0 ") == 0);
    /* existing handle, play fails -> no destroy */
    r_A014 = 0; log_[0] = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 0) == 0 && W(act, 0x3F0) == 0x7000);
    CHECK(strcmp(log_, "81C8=10000000 A014 ") == 0);
    /* created handle, play fails -> destroyed */
    W(act, 0x3F0) = 0; log_[0] = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 0) == 0 && W(act, 0x3F0) == 0);
    CHECK(strcmp(log_, "81C8=10000000 7674 A4C4 A014 7574=7000 ") == 0);
    /* create fails */
    r_7674 = 0; log_[0] = 0;
    CHECK(func_00150A84((int *)act, (int *)&n, 0) == 0 && strcmp(log_, "81C8=10000000 7674 ") == 0);

    /* playSE2 */
    r_7674 = 0x7100; r_AA88 = 0xAA; W(act, 0x3F4) = 0; W(act, 0x400) = 0; log_[0] = 0;
    CHECK(func_001507D8(gp_u32(act), (int *)&n, 3) == 1 && aa88_id == 0x5E1D);
    CHECK(W(act, 0x3F4) == 0x7100 && W(act, 0x400) == 1 && ins_node == 0x7110);
    CHECK(strcmp(log_, "7674 A4C4 insert B6A8=AA ") == 0);
    r_AA88 = 0; log_[0] = 0;
    CHECK(func_001507D8(gp_u32(act), (int *)&n, 3) == 0 && W(act, 0x3F4) == 0x7100 && log_[0] == 0);
    W(act, 0x3F4) = 0; log_[0] = 0;
    CHECK(func_001507D8(gp_u32(act), (int *)&n, 3) == 0 && W(act, 0x3F4) == 0);
    CHECK(strcmp(log_, "7674 A4C4 7574=7100 ") == 0);
}

static void test_accessors(void) {
    /* 00520FC0: (*data_0070FB60)->+0x1C */
    char *pl = lowalloc(0x20); W(pl, 0x1C) = 0x1C1C1C; data_0070FB60 = gp_u32(pl);
    CHECK(func_00520FC0() == 0x1C1C1C);
}

static void test_enemy(void) {
    char *e = lowalloc(0x900); memset(e, 0xAB, 0x900);
    g_res = lowalloc(0x300); W(g_res, 0x1C8 + 2 * 4) = 0x8E5;
    fa000 = lowalloc(4); fa000[0] = 0x42;
    char *prm = lowalloc(0x80);
    W(prm, 0) = 0; W(prm, 4) = 0x40; W(prm, 8) = 2; W(prm, 0xC) = (uint32_t)-1; W(prm, 0x44) = 0x1F3;
    FLD(data_0069512C, 0x50, uint32_t) = 0xD50; FLD(data_0069512C, 0x54, uint32_t) = 0xD54;
    o89c = 0x0B1;
    char *ctx = lowalloc(0x20); B(ctx, 0x18) = 0x14; data_00709DF8 = gp_u32(ctx);
    vec_calls = 0; c9a2c = 0;
    char *h3a = lowalloc(8); H(h3a, 2) = 0x1234; r_3a4 = gp_u32(h3a);
    char *aprm = lowalloc(0x40);
    CHECK(func_004FD464(e, (uint32_t *)aprm, (uint32_t *)prm) == (int)gp_u32(e));
    CHECK(W(e, 0) == GPTR_OF(data_006EDB00) && W(e, 0x320) == GPTR_OF(data_006EDB00) + 0x84);
    CHECK(W(e, 0x420) != 0 && W(e, 0x424) == 0 && W(e, 0x438) != 0 && W(e, 0x43C) != 0);
    CHECK(W(e, 0x440) == gp_u32(e + 0x524) && W(e, 0x448) == gp_u32(e + 0x544));
    CHECK(W(e, 0x44C) == 0x44 && W(e, 0x458) == 0x11 && W(e, 0x4A8) == 0x33 && W(e, 0x4B8) == 0x44);
    CHECK(W(e, 0x4C4) == 0x3F800000 && W(e, 0x4CC) == 0x3F800000 && B(e, 0x4DC) == 8 && W(e, 0x4E4) == 0x11 && W(e, 0x4EC) == 0x33);
    CHECK(H(e, 0x508) == 0x1234 && H(e, 0x50A) == 0x1234 && H(e, 0x50C) == 4 && H(e, 0x50E) == 4 && W(e, 0x51C) == 0xD50 && W(e, 0x520) == 0xD54);
    CHECK(W(e, 0x524) == GPTR_OF(data_006F4C98) && W(e, 0x528) == 0 && W(e, 0x52C) == 0xD50 && W(e, 0x550) == 0xD54);
    CHECK(W(e, 0x554) == GPTR_OF(data_006F4C98) && W(e, 0x558) == gp_u32(e) && W(e, 0x55C) == 0xA1 && W(e, 0x560) == 0xA2);
    CHECK(W(e, 0x564) == 0 && W(e, 0x580) == 0 && W(e, 0x584) == 0x1F08 && W(e, 0x588) == 0x36 && W(e, 0x58C) == 0xDDF);
    CHECK(W(e, 0x590) == 0x44 && W(e, 0x59C) == (0x1F390003u | 0x400) && W(e, 0x5A0) == 0x3000 && W(e, 0x5A4) == 0x3000);
    CHECK(vec_calls == 3 + 1 && vec_arr[0] == gp_u32(e + 0x5A8) && vec_sz[0] == 0xC && vec_n[0] == 7);
    CHECK(vec_arr[1] == gp_u32(e + 0x618) && vec_arr[2] == gp_u32(e + 0x634) && vec_arr[3] == gp_u32(e + 0x748) && vec_sz[3] == 0x10 && vec_n[3] == 2);
    for (int i = 0; i < 7; i++)
        CHECK(W(e, 0x5A8 + 12 * i) == 0 && B(e, 0x5AC + 12 * i) == 0xB && W(e, 0x5B0 + 12 * i) == 0x3F800000
              && W(e, 0x618 + 4 * i) == 0 && W(e, 0x634 + 4 * i) == 0);
    CHECK(B(e, 0x650) == 0 && B(e, 0x651) == 1 && W(e, 0x5FC) == 0x0B1 && W(e, 0x600) == 0);
    CHECK(B(e, 0x654) == 10 && B(e, 0x655) == 10 && B(e, 0x657) == 0);
    for (int o = 0x658; o < 0x748; o += 12) CHECK(W(e, o) == 0 && W(e, o + 4) == 0 && W(e, o + 8) == 0x3F800000);
    CHECK(B(e, 0x768) == 0 && B(e, 0x76C) == 0 && W(e, 0x770) == 0x44 && B(e, 0x77C) == 1 && B(e, 0x77D) == 0xFF && B(e, 0x780) == 0xFF);
    CHECK(H(e, 0x782) == 0x5A && H(e, 0x784) == 0 && H(e, 0x786) == 0xFFFF && W(e, 0x798) == 0x3F99999A && W(e, 0x7A8) == 0x44);
    CHECK(B(e, 0x7FC) == 0 && W(e, 0x800) == 0 && W(e, 0x820) == 0 && B(e, 0x827) == 0xFF && B(e, 0x82A) == 0 && W(e, 0x82C) == 0x44);
    CHECK(H(e, 0x838) == 0 && W(e, 0x83C) == 0x44 && W(e, 0x84C) == 0 && B(e, 0x850) == 2 && B(e, 0x851) == 0x42);
    CHECK(B(e, 0x858) == 1 && W(e, 0x864) == 0x3F800000 && W(e, 0x870) == 0x3F800000 && B(e, 0x877) == 0x80 && W(e, 0x878) == 0xCAFEF00D);
    CHECK(B(e, 0x87C) == 10 && B(e, 0x87D) == 0x14 && B(e, 0x87E) == 0x28 && B(e, 0x880) == 0xF && B(e, 0x881) == 5);
    CHECK(W(e, 0x884) == gp_u32(e + 0x884) && W(e, 0x888) == gp_u32(e + 0x884) && W(e, 0x88C) == 0 && W(e, 0x890) == 0x28);
    CHECK(B(e, 0x896) == 1 && W(e, 0x8A8) == 0x44 && B(e, 0x8B7) == 1 && B(e, 0x8B5) == 1 && B(e, 0x8B8) == 0);
    CHECK(B(e, 0x3CC) == 1 && W(e, 0x3EC) == gp_u32(e + 0x554) && W(e, 0x41C) == 0x0B1);
    /* model registration: r < 0 -> 005330BC; arg block {(0x1F3 & 0xFF) | 4, 0,0,0, 0, 0} */
    CHECK(W(e, 0x4E0) == 0x8E5 && c428[0] == 0x41 && c428[1] == 2 && c428[2] == 0x3C3C && c428[3] == 1 && c428[4] == 0 && c428[5] == 0);
    CHECK(W(e, 0x40C) == 0x4D0DE1 && c798_list == gp_u32(e + 0x5A8) && c798_m == 0x4D0DE1 && c798_f == -1.0f);
    static const uint8_t blk[12] = { 0xF7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    CHECK(memcmp(blk_seen, blk, 12) == 0);
    CHECK(c9a2c == 1);
    /* flags 1|2|4: no model, no name, no obj registration */
    memset(e, 0xAB, 0x900); W(prm, 0) = 7; c9a2c = 0; c798_list = 0; B(ctx, 0x18) = 0xB;
    func_004FD464(e, (uint32_t *)aprm, (uint32_t *)prm);
    CHECK(c798_list == 0 && c9a2c == 0 && W(e, 0x41C) == 0 && B(e, 0x651) == 0 && W(e, 0x59C) == 0x1F390003);
    CHECK(B(e, 0x8B5) == 0 && B(e, 0x8B8) == 1);
}

static void run_all(void) {
    test_state();
    test_ctors();
    test_tasks();
    test_se();
    test_accessors();
    test_enemy();
}

/* The functions keep 32-bit words that point at their own stack frame (00150A84's local
 * FixedSafeString, CreateArg class ids built on the caller's stack), exactly as the game threads
 * do on their low stacks (native/64BIT.md): run the checks on a stack below 4 GiB. */
static ucontext_t main_ctx, low_ctx;

int main(void) {
    ss_vt[2] = GPTR_OF((void *)assure_stub);
    size_t sz = 1 << 20;
    char *stk = lowalloc(sz);
    getcontext(&low_ctx);
    low_ctx.uc_stack.ss_sp = stk;
    low_ctx.uc_stack.ss_size = sz;
    low_ctx.uc_link = &main_ctx;
    makecontext(&low_ctx, run_all, 0);
    swapcontext(&main_ctx, &low_ctx);
    if (fails) { printf("framework_test: %d FAILED\n", fails); return 1; }
    printf("framework_test: all passed (%d-bit)\n", (int)(sizeof(void *) * 8));
    return 0;
}
