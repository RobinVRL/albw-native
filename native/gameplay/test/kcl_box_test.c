/* Unit test for the KCL octree box walkers 0042EFB0 / 0043081C (+ 004317D4 for full subtrees)
 * on a synthetic KCL (no game data). Expected values derived by hand from the ARM code
 * (see the headers of func_0042EFB0.c / func_0043081C.c).
 * Build + run (from albw-port):
 *   for m in 32 64; do X=; [ $m = 64 ] && X=-fms-extensions; \
 *   clang -m$m $X -std=gnu11 -Wall -Wextra -Wno-unused-parameter -msse2 -mfpmath=sse \
 *     -ffp-contract=off -Inative/include -Inative/gameplay -I../albw-decomp-ai/shared/include \
 *     native/gameplay/test/kcl_box_test.c native/gameplay/func_0042EFB0.c \
 *     native/gameplay/func_0043081C.c native/gameplay/func_004317D4.c -o /tmp/kb$m && /tmp/kb$m; done
 *
 * Synthetic mesh: area min (0,0,0), coord shift 4 (16-unit cells), ~mask = 31 on all axes
 * (2 cells per axis), index = x | y << 1 | z << 2.
 *   root[0] (cell 0,0,0) = inner node N: child 0 = leaf B {P3}, children 1..7 = empty leaf
 *   root[1] (cell 1,0,0) = leaf A {P1, P2, P4, P5};  root[2..7] = empty leaf
 * Prisms (height 4, face normal (0,1,0), edge normals (-1,0,0), (0,0,-1), (1,0,0)), so for
 * d = centre - vertex the sphere test is: -dx <= r, -dz <= r, dx <= 4 + r, |dy| <= r:
 *   P1 vertex (20,0,2), P2 (28,0,10), P3 (2,0,2) attr 0; P4 attr 5 (not in mask 1);
 *   P5 attr 0x8000 (class 8, skipped while data_00709C38 == 0). */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <float.h>
#ifdef __x86_64__
#include <sys/mman.h>
#endif
#include "gameplay.h"

int func_0042EFB0(uint32_t obj_w, const float *mn, const float *mx, uint32_t mask, void *cb);

char data_007307DC[0x80];
uint8_t data_00709C38;

static int fails;
#define CHECK(c) do { if (!(c)) { printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #c); fails++; } } while (0)

static int clear_calls;
void func_0010F1DC(void *list, void *link) { (void)list; FLD(link, 0, uint32_t) = 1; }
int func_0049F5FC(uint32_t *list) { (void)list; clear_calls++; return 0x1234; }

static char *mem;               /* low arena (gp_ptr-able) */
static char *obj, *ko, *hdr, *ents;
static uint32_t cb_obj;         /* game object: word 0 -> vtable */
static int cb_count, cb_stop_after;

static void cb_fn(void *cb, void *o) {
    (void)cb; (void)o;
    if (++cb_count == cb_stop_after) FLD(data_007307DC, 0x6F, uint8_t) = 1;
}

static void build(void) {
    memset(mem, 0, 0x10000);
    obj = mem; ko = mem + 0x1000; hdr = mem + 0x1100; ents = mem + 0x1200;
    char *pos = mem + 0x1300, *nrm = mem + 0x1400, *pr = mem + 0x1500, *oct = mem + 0x1600;
    float P[3][3] = { {20, 0, 2}, {28, 0, 10}, {2, 0, 2} };
    memcpy(pos, P, sizeof P);
    float N[4][3] = { {0, 1, 0}, {-1, 0, 0}, {0, 0, -1}, {1, 0, 0} };
    memcpy(nrm, N, sizeof N);
    /* prisms 1..5 (0 is a dummy: index 0 terminates a leaf) */
    static const uint16_t posidx[6] = { 0, 0, 1, 2, 0, 0 };
    static const uint16_t attr[6] = { 0, 0, 0, 0, 5, 0x8000 };
    for (int i = 1; i <= 5; i++) {
        char *p = pr + i * 16;
        FLD(p, 0, float) = 4.0f;
        FLD(p, 4, uint16_t) = posidx[i];
        FLD(p, 6, uint16_t) = 0; FLD(p, 8, uint16_t) = 1;
        FLD(p, 0xA, uint16_t) = 2; FLD(p, 0xC, uint16_t) = 3;
        FLD(p, 0xE, uint16_t) = attr[i];
    }
    /* octree: root 8 words at oct, inner node N at oct+0x40, leaves at oct+0x100.. */
    char *N8 = oct + 0x40, *leafA = oct + 0x100, *leafB = oct + 0x120, *empty = oct + 0x140;
    uint16_t la[] = { 0, 1, 2, 4, 5, 0 }, lb[] = { 0, 3, 0 }, le[] = { 0, 0 };
    memcpy(leafA, la, sizeof la); memcpy(leafB, lb, sizeof lb); memcpy(empty, le, sizeof le);
    for (int k = 0; k < 8; k++) FLD(oct, 4 * k, uint32_t) = 0x80000000u | (uint32_t)(empty - oct);
    FLD(oct, 0, uint32_t) = (uint32_t)(N8 - oct);
    FLD(oct, 4, uint32_t) = 0x80000000u | (uint32_t)(leafA - oct);
    for (int k = 0; k < 8; k++) FLD(N8, 4 * k, uint32_t) = 0x80000000u | (uint32_t)(empty - N8);
    FLD(N8, 0, uint32_t) = 0x80000000u | (uint32_t)(leafB - N8);

    FLD(hdr, 0, uint32_t) = gp_u32(pos); FLD(hdr, 4, uint32_t) = gp_u32(nrm);
    FLD(hdr, 8, uint32_t) = gp_u32(pr); FLD(hdr, 0xC, uint32_t) = gp_u32(oct);
    for (int a = 0; a < 3; a++) FLD(hdr, 0x20 + 4 * a, uint32_t) = ~31u;
    FLD(hdr, 0x2C, uint32_t) = 4; FLD(hdr, 0x30, uint32_t) = 1; FLD(hdr, 0x34, uint32_t) = 2;

    FLD(ko, 0xC8, uint32_t) = 6; FLD(ko, 0xCC, uint32_t) = gp_u32(ents);
    FLD(obj, 0x58, uint32_t) = gp_u32(ko); FLD(obj, 0x5C, uint32_t) = gp_u32(hdr);
    FLD(obj, 0x488, uint32_t) = gp_u32(obj + 0x88);
    FLD(obj, 0x48C, uint32_t) = gp_u32(obj + 0x86);
    /* callback object at mem+0x1800: word 0 -> vtable at mem+0x1810 {cb_fn} (32-bit only:
     * a native function address does not fit a game word on -m64, so gather mode is tested
     * there through the same path with the vtable word pointing to a low trampoline copy) */
    cb_obj = gp_u32(mem + 0x1800);
    FLD(mem, 0x1800, uint32_t) = gp_u32(mem + 0x1810);

    memset(data_007307DC, 0, sizeof data_007307DC);
    FLD(data_007307DC, 0x6E, uint8_t) = 1;           /* sphere mode */
    data_00709C38 = 0;
    clear_calls = 0; cb_count = 0; cb_stop_after = 0;
}

static void centre(float x, float y, float z, float r) {
    FLD(data_007307DC, 8, float) = x; FLD(data_007307DC, 0xC, float) = y;
    FLD(data_007307DC, 0x10, float) = z; FLD(data_007307DC, 0x14, float) = r;
}
static int nhits(void) { return (int)((FLD(obj, 0x488, uint32_t) - gp_u32(obj + 0x88)) / 2); }
static uint16_t hit(int i) { return FLD(obj, 0x88 + 2 * i, uint16_t); }
static int run(float x0, float y0, float z0, float x1, float y1, float z1) {
    float mn[3] = { x0, y0, z0 }, mx[3] = { x1, y1, z1 };
    return func_0042EFB0(gp_u32(obj), mn, mx, 1, (void *)(uintptr_t)cb_obj);
}

int main(void) {
#ifdef __x86_64__
    mem = mmap(NULL, 0x10000, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    if (mem == MAP_FAILED) { puts("mmap failed"); return 2; }
#else
    static char arena[0x10000] __attribute__((aligned(16)));
    mem = arena;
#endif
    FLD(mem, 0, uint32_t) = 0; (void)cb_fn;

    /* A: partial box inside cell 0 -> inner node split (0043081C): only child 0 (leaf B)
     *    hi = 4 << 27 = 0x20000000 -> <<1 = 0x40000000 (bit31 clear): second halves empty */
    build(); centre(3, 0.5f, 3, 1);
    CHECK(run(0, 0, 0, 3, 3, 3) == 0x1234);
    CHECK(FLD(data_007307DC, 0x68, uint32_t) == 1);
    CHECK(nhits() == 1 && hit(0) == 3);
    CHECK(FLD(obj, 0x80, int32_t) == 1);              /* only P3 visited */
    CHECK(clear_calls == 1);

    /* B: box over cells 0..1 on every axis: cell 0 fully covered (lo 0, hi ~0) -> 8x 004317D4
     *    on N; cell 1 partial -> leaf A: P1, P2 visited (P4 mask, P5 class 8) */
    build(); centre(21, 0.5f, 3, 1);
    run(0, 0, 0, 20, 20, 20);
    CHECK(FLD(obj, 0x80, int32_t) == 3);
    CHECK(nhits() == 1 && hit(0) == 1);               /* P1: d = (1, .5, 1) */
    centre(3, 0.5f, 3, 1); build(); centre(3, 0.5f, 3, 1);
    run(0, 0, 0, 20, 20, 20);
    CHECK(nhits() == 1 && hit(0) == 3);               /* P3 through the full-subtree path */
    data_00709C38 = 1;  build(); data_00709C38 = 1; centre(21, 0.5f, 3, 1);
    run(0, 0, 0, 20, 20, 20);
    CHECK(FLD(obj, 0x80, int32_t) == 4);              /* class 8 allowed now: P5 visited */
    CHECK(nhits() == 2 && hit(0) == 1 && hit(1) == 5);
    data_00709C38 = 0;

    /* C: vcvt saturation/NaN: mn = NaN -> 0, mx = 1e30 -> INT_MAX -> clamped to 31: whole mesh.
     *    (round-2 C: (uint)1e30 = 0x80000000 -> early return, no prism at all) */
    build(); centre(21, 0.5f, 3, 1);
    CHECK(run(NAN, NAN, NAN, 1e30f, 1e30f, 1e30f) == 0x1234);
    CHECK(FLD(obj, 0x80, int32_t) == 3);
    CHECK(nhits() == 1 && hit(0) == 1);
    build(); centre(21, 0.5f, 3, 1);                  /* -inf..+inf too */
    run(-INFINITY, -FLT_MAX, -1e20f, INFINITY, FLT_MAX, 1e20f);
    CHECK(FLD(obj, 0x80, int32_t) == 3 && nhits() == 1);

    /* D: empty box (x0 = 5, x1 = vcvt(5.5) = 5): early return of z1 = vcvt(4) = 4, no reset */
    build();
    CHECK(run(5, 0, 0, 4.5f, 3, 3) == 4);
    CHECK(clear_calls == 0 && FLD(obj, 0x80, int32_t) == 0);
    CHECK(FLD(data_007307DC, 0x68, uint32_t) == 1);   /* mask stored before the test */

    /* E: multi mode: P3 already in the list (between *(obj+0x48C)+2 and the write pointer) */
    build(); centre(3, 0.5f, 3, 1);
    FLD(obj, 0x4A0, uint8_t) = 1;
    FLD(obj, 0x88, uint16_t) = 3; FLD(obj, 0x488, uint32_t) = gp_u32(obj + 0x8A);
    run(0, 0, 0, 3, 3, 3);
    CHECK(nhits() == 1 && hit(0) == 3);               /* not appended twice */

    /* F: buffer full: write pointer at the last slot -> append, then step back one entry */
    build(); centre(3, 0.5f, 3, 1);
    FLD(obj, 0x488, uint32_t) = gp_u32(obj + 0x486);
    run(0, 0, 0, 3, 3, 3);
    CHECK(FLD(obj, 0x486, uint16_t) == 3);
    CHECK(FLD(obj, 0x488, uint32_t) == gp_u32(obj + 0x486));

    /* G: NaN radius: every comparison is false (bgt / blo not taken) -> every visited prism
     *    hits. Box in cell 1 only: lo x = 16 << 27 = 0x80000000 (partial) -> leaf A. */
    build(); centre(0, 0, 0, NAN);
    run(16, 0, 0, 20, 3, 3);
    CHECK(FLD(obj, 0x80, int32_t) == 2);
    CHECK(nhits() == 2 && hit(0) == 1 && hit(1) == 2);

    /* H: |dy| just over r: s = -dy = -1.0000001 < -r -> miss (blo); dy = -1 exactly -> hit */
    build(); centre(21, 1.0000001f, 3, 1);
    run(16, 0, 0, 20, 3, 3);
    CHECK(nhits() == 0);
    build(); centre(21, -1.0f, 3, 1);
    run(16, 0, 0, 20, 3, 3);
    CHECK(nhits() == 1 && hit(0) == 1);

#ifndef __x86_64__
    /* I: gather mode: cb->vt[0](cb, obj) per newly visited prism, stop flag after the 2nd call:
     *    leaf A gives P1, P2 (cell order x-major: cell 0 first, leaf B: P3 -> 1st call) */
    build();
    FLD(mem, 0x1810, uint32_t) = gp_u32((void *)cb_fn);
    FLD(data_007307DC, 0x6E, uint8_t) = 0; cb_stop_after = 2;
    run(0, 0, 0, 20, 20, 20);
    CHECK(cb_count == 2);
    CHECK(FLD(obj, 0x80, int32_t) == 2);              /* P3, P1; then stopped */
#endif

    printf("kcl_box_test (%d-bit): %s (%d failures)\n", (int)(8 * sizeof(void *)),
           fails ? "FAIL" : "ok", fails);
    return fails != 0;
}
