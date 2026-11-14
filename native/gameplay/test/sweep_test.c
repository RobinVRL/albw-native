/* Unit test for the main collision sweeps 004A7620 / 004A9F98 (func_004A7620.c, func_004A9F98.c)
 * on a synthetic broad phase: a large-object chain, grid cells (stub 004A8930), an area with its
 * per-layer lists, the manager's +0xC4 lists, and colliders whose vt[2] test is a recording stub.
 * Expected values derived by hand from the ARM semantics (see the file headers):
 *   single test when len <= r*f0 or len > r*f1 (NaN -> single), else subdivided with
 *   step r (004A7620) / 2r (004A9F98), clamped to cellSize - 0.1 (NaN cell size keeps it);
 *   push-back out += box.min + box.max (+ cur - end in the subdivided path).
 * The sweeps store stack addresses into 32-bit query words (as on the 3DS), so the test runs on
 * a stack below 4 GiB (the game threads do too: runtime/lowmem.c).
 * Build + run (from albw-port; -m64 needs -no-pie so code/data addresses fit 32 bits):
 *   for m in 32 64; do clang -m$m -no-pie -O1 -std=gnu11 -Wall -Wextra -Wno-unused-parameter \
 *     -msse2 -mfpmath=sse -ffp-contract=off $([ $m = 64 ] && echo -fms-extensions) \
 *     -Inative/include -Inative/gameplay -I../albw-decomp-ai/shared/include \
 *     native/gameplay/test/sweep_test.c native/gameplay/func_004A7620.c \
 *     native/gameplay/func_004A9F98.c native/gameplay/func_00115C54.c \
 *     native/gameplay/func_00115C70.c native/gameplay/func_00115D70.c -lm -o $TMPDIR/sw$m \
 *     && $TMPDIR/sw$m; done
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ucontext.h>
#include "gameplay.h"
#include "gp_collision.h"
#include "lowmem.h"

int func_004A7620(int mgr, uint32_t *q, uint32_t mask);
int func_004A9F98(int mgr, uint32_t *q, uint32_t mask);

static int fails, checks;
#define CHECK(c) do { checks++; if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)
#define CHECKF(a, b) do { float a_ = (a), b_ = (b); checks++; \
    if (gp_f2u(a_) != gp_f2u(b_)) { printf("FAIL %s:%d %s = %.9g (want %.9g)\n", __FILE__, __LINE__, #a, a_, b_); fails++; } } while (0)

/* ---- game data the sweeps use ---- */
char data_00709D28[0x40], data_00709CC8[8], data_0072776C[4], data_007AF404[0x40],
     data_007342CC[0x40], data_0070C8E0[4], data_00706E20[4], data_00727768[4],
     data_007AF3D4[0x40], data_0073429C[0x40];

/* ---- stubs of the callees ---- */
int func_00100174(int *g) { *g |= 1; return 1; }                 /* guard acquire */
int func_0010B3EC(uint32_t *b, int cap, int st) { b[1] = (uint32_t)cap; b[2] = (uint32_t)st; return 0; }
int func_0010E3C4(uint32_t *d, uint32_t *s, uint32_t n) { memcpy(d, s, n); return 0; }
static int n_ctor, n_update;
static float upd_x[8];
int func_00432F74(uint32_t *shape) { n_ctor++; shape[0] = 0x5AFE; return 0; }
int func_004356B4(int *shape) { upd_x[n_update++ & 7] = FLD(shape, 4, float); return 0; }
int func_0068B2DC(float *b, float a0, float a1, float a2, float a3, float a4, float a5) {
    b[0] = a0; b[1] = a1; b[2] = a2; b[3] = a3; b[4] = a4; b[5] = a5; return 0;
}
static uint32_t cell_items[1];          /* list heads returned for the grid query */
static uint32_t cell_layer = 99;
static int n_cells;
int func_004A8930(int mgr, float *pos, int *buf, uint32_t layer) {
    n_cells++;
    if (layer == cell_layer) { buf[0] = 1; buf[2] = (int)gp_u32(cell_items); }
    return 0;
}
static uint32_t actor_w;
int func_0052FBA0(int mgr, uint32_t handle) { return (int)actor_w; }

/* ---- colliders ---- */
struct rec { char *c; void *box; char *query; float cur_x, start_x, rad; uint32_t marker, under_test; };
static struct rec recs[16];
static int n_calls;
static int hit_on_call = -1;            /* the n-th call (0-based) reports a hit */
static float hit_box[6];
static int test_cb(void *c, void *box, void *query, void *shape) {
    struct rec *r = &recs[n_calls & 15];
    r->c = c; r->box = box; r->query = query;
    r->cur_x = FLD(shape, 4, float); r->start_x = FLD(shape, 0x10, float);
    r->rad = FLD(shape, 0x58, float); r->marker = FLD(shape, 0, uint32_t);
    r->under_test = FLD(data_00709D28, 8, uint32_t);
    int hit = n_calls++ == hit_on_call;
    if (hit && box) memcpy(box, hit_box, 24);
    return hit;
}
static uint32_t *vtbl;
static char *new_collider(uint32_t tag, int enabled) {
    char *c = lowalloc(0x100);
    FLD(c, 0, uint32_t) = gp_u32(vtbl);
    FLD(c, 0x20, uint32_t) = tag;
    FLD(c, 0x44, uint8_t) = (uint8_t)enabled;
    return c;
}
static void list_init(char *head) { FLD(head, 4, uint32_t) = gp_u32(head); }
static void list_add(char *head, char *c) {     /* append one node */
    char *n = lowalloc(16);
    char *last = head;
    while (GPTR(last, 4, char) != head) last = GPTR(last, 4, char);
    FLD(n, 8, uint32_t) = gp_u32(c);
    FLD(n, 4, uint32_t) = gp_u32(head);
    FLD(last, 4, uint32_t) = gp_u32(n);
}

static char *mgr, *bigobj, *area_base_obj, *areas;
static float *p0, *p1, *outv;
static uint32_t *q;

static void reset(void) {
    n_calls = 0; n_ctor = 0; n_update = 0; n_cells = 0; hit_on_call = -1; cell_layer = 99;
    memset(recs, 0, sizeof recs);
    memset(cell_items, 0, sizeof cell_items);
    for (int l = 0; l < 6; l++) {
        list_init(bigobj + 0xB4 + l * 12);
        list_init(mgr + 0xC4 + l * 12);
        list_init(areas + 0xB4 + l * 12);
        list_init(areas + 0x50C + 0xB4 + l * 12);
    }
    memset(q, 0, 0x3C);
    p0[0] = p0[1] = p0[2] = 0.0f;
    p1[0] = 1.0f; p1[1] = p1[2] = 0.0f;
    outv[0] = outv[1] = outv[2] = 10.0f;
    FLD(q, 0, uint32_t) = gp_u32(outv);
    FLD(q, 0xC, uint32_t) = 0x77;               /* owner tag */
    FLD(q, 0x10, int16_t) = 0;                  /* area 0 (004A9F98) */
    FLD(q, 0x1C, uint32_t) = gp_u32(p1);
    FLD(q, 0x20, uint32_t) = gp_u32(p0);
    FLD(q, 0x2C, float) = 1.0f;                 /* radius */
    FLD(data_00709CC8, 4, float) = 10.0f;       /* cell size */
}

static void tests(void) {
    vtbl = lowalloc(16);
    vtbl[2] = gp_u32((void *)test_cb);
    mgr = lowalloc(0xC000);
    bigobj = lowalloc(0x200);
    q = lowalloc(0x80);
    p0 = lowalloc(16); p1 = lowalloc(16); outv = lowalloc(16);
    /* large-object chain with one object, link at obj+0x10 */
    char *big = mgr + 0xBF3C;
    FLD(big, 0xC, uint32_t) = 0x10;
    FLD(big, 4, uint32_t) = gp_u32(bigobj + 0x10);
    FLD(bigobj + 0x10, 4, uint32_t) = gp_u32(big);
    /* areas: *(*data_0070C8E0 + 0x38) + 0x1C3C + idx * 0x50C */
    area_base_obj = lowalloc(0x20000);
    areas = area_base_obj + 0x1C3C;            /* area 0; area 1 at +0x50C */
    char *ptr38 = lowalloc(0x40);
    FLD(data_0070C8E0, 0, uint32_t) = gp_u32(ptr38);
    FLD(ptr38, 0x38, uint32_t) = gp_u32(area_base_obj);

    char *A = new_collider(1, 1), *B = new_collider(0x77, 1), *C = new_collider(2, 0);
    char *D = new_collider(3, 1);
    char *cellhead = lowalloc(16);

    /* T1: 004A7620 single test (len 1 <= r*2): only A is tested (B: same tag, C: disabled) */
    reset();
    list_add(bigobj + 0xB4 + 5 * 12, B);
    list_add(bigobj + 0xB4 + 5 * 12, A);
    list_add(bigobj + 0xB4 + 5 * 12, C);
    hit_on_call = 0;
    hit_box[0] = 0.5f; hit_box[1] = 0; hit_box[2] = 0; hit_box[3] = 0.25f; hit_box[4] = 0; hit_box[5] = 0;
    FLD(q, 0x30, float) = 0.0f; FLD(q, 0x34, float) = 2.0f;   /* shape offset y = 2 */
    int r = func_004A7620((int)gp_u32(mgr), q, (1u << 5) | (1u << 1));
    CHECK(r == 1);
    CHECK(n_calls == 1 && recs[0].c == A && recs[0].query == (char *)q);
    CHECK(recs[0].under_test == gp_u32(A) && FLD(data_00709D28, 8, uint32_t) == 0);
    CHECK(recs[0].box != 0 && recs[0].marker == 0x5AFE && n_ctor == 1);
    CHECKF(recs[0].cur_x, 1.0f);                /* shape+4 = offset + p1 */
    CHECKF(recs[0].start_x, 0.0f);
    CHECKF(recs[0].rad, 1.0f);
    CHECKF(FLD(q, 0x24, float), 1.0f);          /* length written back */
    CHECKF(outv[0], (10.0f + 0.5f) + 0.25f);
    CHECKF(outv[1], 10.0f);
    /* layer 1 (mask bit, out != 0): shape moved by box.min + box.max, then 004356B4 */
    CHECK(n_update == 1);
    CHECKF(upd_x[0], (1.0f + 0.5f) + 0.25f);
    CHECK(n_cells == 2);                        /* grid queried for layers 5 and 1 */

    /* T2: 004A7620 subdivided (2 < len 3 <= 4): step = r = 1 -> cur 1, 2, end 3; no hit */
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, 2.0f, 4.0f);
    CHECK(r == 0 && n_calls == 3 && n_ctor == 3);
    CHECKF(recs[0].cur_x, 1.0f); CHECKF(recs[1].cur_x, 2.0f); CHECKF(recs[2].cur_x, 3.0f);
    CHECKF(recs[2].start_x, 0.0f);
    CHECK(recs[0].query != (char *)q);          /* the private query copy */
    CHECK(FLD(recs[0].query, 0xC, uint32_t) == 0x77);
    CHECKF(FLD(q, 0x24, float), 3.0f);
    CHECKF(outv[0], 10.0f);

    /* T3: same, hit on the 2nd step: out += box.min + box.max + (cur - end) */
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    hit_on_call = 1;
    hit_box[0] = 0.1f; hit_box[3] = 0.2f;
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, 2.0f, 4.0f);
    CHECK(r == 1 && n_calls == 2);
    CHECKF(outv[0], ((10.0f + 0.1f) + 0.2f) + (2.0f - 3.0f));

    /* T4: cell size 1.05 -> step = min(1, 1.05 - 0.1 = 0.95); NaN cell size keeps r */
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    FLD(data_00709CC8, 4, float) = 1.05f;
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, 2.0f, 4.0f);
    {
        float s = 1.05f - 0.1f, t = 0, x = 0; int n = 0;
        do { t = t + s; x = (3.0f > t) ? x + s : 3.0f; CHECKF(recs[n].cur_x, x); n++; } while (3.0f > t);
        CHECK(n_calls == n && n == 4);
    }
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    FLD(data_00709CC8, 4, float) = NAN;
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, 2.0f, 4.0f);
    CHECK(n_calls == 3);

    /* T5: NaN bounds -> single test (ble / bhi are true when unordered) */
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, NAN, 4.0f);
    CHECK(n_calls == 1); CHECKF(recs[0].cur_x, 3.0f);
    reset();
    p1[0] = 3.0f;
    list_add(bigobj + 0xB4 + 0 * 12, A);
    r = albw_collision_sweep(gp_u32(mgr), q, 1u << 0, 2.0f, NAN);
    CHECK(n_calls == 1);
    /* boundaries: len == 2r -> single; len == 4r -> subdivided; len > 4r -> single */
    reset(); p1[0] = 2.0f; list_add(bigobj + 0xB4, A);
    albw_collision_sweep(gp_u32(mgr), q, 1, 2.0f, 4.0f); CHECK(n_calls == 1);
    reset(); p1[0] = 4.0f; list_add(bigobj + 0xB4, A);
    albw_collision_sweep(gp_u32(mgr), q, 1, 2.0f, 4.0f); CHECK(n_calls == 4);
    reset(); p1[0] = 4.5f; list_add(bigobj + 0xB4, A);
    albw_collision_sweep(gp_u32(mgr), q, 1, 2.0f, 4.0f); CHECK(n_calls == 1);
    /* 00341D28's site passes f0 = 1.0: len 1.5 is subdivided there, single with 2.0 */
    reset(); p1[0] = 1.5f; list_add(bigobj + 0xB4, A);
    albw_collision_sweep(gp_u32(mgr), q, 1, 1.0f, 4.0f); CHECK(n_calls == 2);
    reset(); p1[0] = 1.5f; list_add(bigobj + 0xB4, A);
    func_004A7620((int)gp_u32(mgr), q, 1); CHECK(n_calls == 1);

    /* T6: grid cells: the cell list returned by 004A8930 for layer 3 is walked */
    reset();
    list_init(cellhead); list_add(cellhead, D);
    cell_items[0] = gp_u32(cellhead); cell_layer = 3;
    r = func_004A7620((int)gp_u32(mgr), q, 1u << 3);
    CHECK(r == 0 && n_calls == 1 && recs[0].c == D);
    FLD(q, 0, uint32_t) = 0;                    /* out == 0: box argument 0 */
    n_calls = 0;
    func_004A7620((int)gp_u32(mgr), q, 1u << 3);
    CHECK(n_calls == 1 && recs[0].box == 0);

    /* T7: 004A9F98 area path (idx 0): area list, cells, manager +0xC4 list, in that order; the
     * global chain is NOT walked */
    reset();
    list_add(bigobj + 0xB4 + 2 * 12, B);        /* would be skipped anyway (tag) */
    list_add(bigobj + 0xB4 + 2 * 12, C);
    list_add(areas + 0xB4 + 2 * 12, A);
    list_add(mgr + 0xC4 + 2 * 12, D);
    list_init(cellhead); list_add(cellhead, A);
    cell_items[0] = gp_u32(cellhead); cell_layer = 2;
    char *E = new_collider(9, 1);
    list_add(bigobj + 0xB4 + 2 * 12, E);        /* only reachable through the global chain */
    hit_on_call = 2;
    hit_box[0] = 1.0f; hit_box[3] = 2.0f;
    r = func_004A9F98((int)gp_u32(mgr), q, 1u << 2);
    CHECK(r == 1 && n_calls == 3);
    CHECK(recs[0].c == A && recs[1].c == A && recs[2].c == D);
    CHECKF(outv[0], (10.0f + 1.0f) + 2.0f);
    CHECK(n_update == 1);                       /* layer 2 box update */
    CHECKF(upd_x[0], (1.0f + 1.0f) + 2.0f);

    /* T8: 004A9F98 fall-back (idx < 0) -> 004A7620(…, 2.0, 4.0): global chain walked */
    reset();
    list_add(bigobj + 0xB4 + 2 * 12, E);
    list_add(areas + 0xB4 + 2 * 12, A);
    FLD(q, 0x10, int16_t) = -1;
    p1[0] = 3.0f;                               /* 004A7620: step r = 1 -> 3 steps */
    r = func_004A9F98((int)gp_u32(mgr), q, 1u << 2);
    CHECK(r == 0 && n_calls == 3 && recs[0].c == E);

    /* T9: 004A9F98 subdivided: step = 2r = 2 -> cur 2, end 3 (2 steps) */
    reset();
    list_add(areas + 0xB4, A);
    p1[0] = 3.0f;
    r = func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(r == 0 && n_calls == 2);
    CHECKF(recs[0].cur_x, 2.0f); CHECKF(recs[1].cur_x, 3.0f);
    /* cell size 2.05 -> step min(2, 1.95) = 1.95; NaN cell size keeps 2r (vmovgt) */
    reset(); list_add(areas + 0xB4, A); p1[0] = 3.0f;
    FLD(data_00709CC8, 4, float) = 2.05f;
    func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(n_calls == 2); CHECKF(recs[0].cur_x, 2.05f - 0.1f);
    reset(); list_add(areas + 0xB4, A); p1[0] = 3.0f;
    FLD(data_00709CC8, 4, float) = NAN;
    func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(n_calls == 2); CHECKF(recs[0].cur_x, 2.0f);
    /* NaN radius: r*f0 is NaN -> single test */
    reset(); list_add(areas + 0xB4, A); p1[0] = 3.0f;
    FLD(q, 0x2C, float) = NAN;
    func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(n_calls == 1);

    /* T10: idx 0xFF: actor's area (+0x54 = 1) -> area 1; actor 0 -> fallback area index at
     * *(*data_0070C8E0 + 0x38) + 0x15B40 */
    reset();
    char *actor = lowalloc(0x80);
    FLD(actor, 0x54, int16_t) = 1;
    actor_w = gp_u32(actor);
    FLD(q, 0x10, int16_t) = 0xFF;
    list_add(areas + 0x50C + 0xB4, D);
    list_add(areas + 0xB4, A);
    func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(n_calls == 1 && recs[0].c == D);
    reset();
    FLD(q, 0x10, int16_t) = 0xFF;
    actor_w = 0;
    FLD(area_base_obj, 0x15B40, int16_t) = 0;   /* fall-back area index field: area 0 */
    list_add(areas + 0x50C + 0xB4, D);
    list_add(areas + 0xB4, A);
    func_004A9F98((int)gp_u32(mgr), q, 1u);
    CHECK(n_calls == 1 && recs[0].c == A);
}

/* run on a stack below 4 GiB */
static ucontext_t main_ctx, test_ctx;
static void entry(void) { tests(); }

int main(void) {
    size_t sz = 1 << 20;
    char *stk = lowalloc(sz);
    getcontext(&test_ctx);
    test_ctx.uc_stack.ss_sp = stk;
    test_ctx.uc_stack.ss_size = sz;
    test_ctx.uc_link = &main_ctx;
    makecontext(&test_ctx, entry, 0);
    swapcontext(&main_ctx, &test_ctx);
    printf("sweep_test: %d checks, %d failures\n", checks, fails);
    return fails != 0;
}
