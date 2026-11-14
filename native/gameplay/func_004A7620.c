/* USA 004A7620 <- EU 004A75F8: collision manager, swept-shape query against the whole broad
 * phase ("world sweep"): for each layer 5..0 selected by `mask`, every collider in the
 * large-object chain (mgr+0xBF3C) and in the grid cells around the query's end point
 * (004A8930) gets its vt[2] test; returns 1 when any test reported a hit.
 *     int f(CollisionMgr *mgr, Query *q, u32 mask, float f0, float f1);   (r0, r1, r2, s0, s1)
 *   Query (0x3C bytes): +0 Vec3 *out (accumulated push-back, may be 0), +0xC owner tag (colliders
 *   with c+0x20 == tag are skipped, as are colliders with byte c+0x44 == 0), +0x1C Vec3 *p1
 *   (end), +0x20 Vec3 *p0 (start), +0x24 length (written here), +0x2C radius, +0x30 Vec3 offset.
 *   Collider test: c->vt[2](c, q->out ? &box : 0, query, shape) (shape = sphere/capsule built by
 *   00432F74 from offset + p1 / offset + p0 and the radius at shape+0x58); data_00709D28+8 holds
 *   the collider under test during the call.
 *
 *   len = |*p1 - *p0| (vmul, vmla, vmla, vsqrt), q+0x24 = len.
 *   Single test (the "short" path) when len <= r*f0 or len > r*f1 (both NaN-true: ble / bhi):
 *     one capsule p0..p1; hit -> *out += box.min + box.max (box at sp+0x150, filled by the tests).
 *   Otherwise (r*f0 < len <= r*f1) the move is SUBDIVIDED: dir = (p1 - p0) / len, step =
 *   dir * min(r, cellSize - 0.1) (cellSize = data_00709CC8+4; vmovlo: NaN keeps r); a private
 *   copy of the query (sp+0x5c, 0x3C bytes, followed by the shape at sp+0x98) points p1 at the
 *   moving point cur (sp+0xF4) and p0 at the start copy (sp+0x178); t accumulates the step:
 *   cur = (t < len, bhi) ? cur + step : end; test capsule start..cur against all layers; on the
 *   first hit: *out += box.min + box.max + (cur - end) and return 1; loop while len > t.
 *   For layers 1 and 2 (when out != 0) the shape centre is moved by box.min + box.max after the
 *   layer and 004356B4 re-derives it (the next layers see the pushed shape).
 * Callers: 18 functions / 27 sites, + the fall-back of 004A9F98. ARM s0/s1 at every site:
 * (2.0, 4.0) except 00341D28 at EU 003422E4 (s0 = 1.0 [s25], s1 = 4.0).
 *
 * Round-2 state (build/ghidra_analyzed4 + converted): signature (int, uint *, uint) -> int: the
 * two float arguments are still lost (livein2 misses them: the prologue saves d0 with
 * `vpush {d0}` and moves it with `vmov.f64 d8, d0`, both 64-bit reads that only the new
 * tools/livein_dregs.py sees). The converted body compares the length with `in_s0`/`in_s1`
 * (uninitialised: x87 / xmm garbage), so it takes the single-test or the subdivided path at
 * random; the subdivided path also mixes up which stack Vec3 the step uses (Ghidra's
 * `fparam_0 < local_1a8` loop runs on stale copies).
 * Exact version: albw_collision_sweep (gp_collision.h). func_004A7620 keeps the converted
 * callers' prototype and supplies (2.0, 4.0), the value at 26 of the 27 ARM call sites.
 * The stack frame is reproduced at the ARM sp offsets (char F[0x1E0]) because the callee tests
 * receive the query copy and the shape that follows it in one frame. Dead stores omitted: the
 * 0x2A-byte query template at sp+0x10C copied to sp+0x5C (00110D44), sp+0x88 = 0 and
 * sp+0x8C = data_007A9260, all overwritten by the 0x3C-byte query copy (0010E3C4) right after.
 *
 * Verified against EU 004A75F8-004A7ED4 instruction by instruction. Confidence: high (flow),
 * medium (role names: out/box/shape). */
#include "gameplay.h"
#include "gp_collision.h"
#include <math.h>
#pragma STDC FP_CONTRACT OFF

extern char data_00709D28[];
extern char data_00709CC8[];
extern char data_0072776C[];
extern char data_007AF404[];
extern char data_007342CC[];
int func_00100174(int *guard);
int func_0010B3EC(uint32_t *buf, int cap, int storage);
int func_0010E3C4(uint32_t *dst, uint32_t *src, uint32_t n);
int func_00115C54(float *out, float *a, float *b);   /* a + b */
int func_00115C70(float *out, float *a, float *b);   /* a - b */
int func_00115D70(float *out, float *v, float s);    /* v * s */
int func_00432F74(uint32_t *shape);
int func_004356B4(int *shape);
int func_004A8930(int mgr, float *pos, int *buf, uint32_t layer);
int func_0068B2DC(float *box, float a, float b, float c, float d, float e, float f);

typedef int (*coll_test_fn)(void *c, void *box, void *query, void *shape);

/* one collider list (circular, node+4 = next, node+8 = collider); `head` is the list sentinel */
static int test_list(char *head, char *query, char *shape, char *box) {
    int hit = 0;
    for (char *node = GPTR(head, 4, char); node != head; node = GPTR(node, 4, char)) {
        char *c = GPTR(node, 8, char);
        FLD(data_00709D28, 8, uint32_t) = gp_u32(c);
        if (FLD(query, 0xC, uint32_t) != FLD(c, 0x20, uint32_t) && FLD(c, 0x44, uint8_t) != 0) {
            coll_test_fn fn = (coll_test_fn)gp_ptr(FLD(GPTR(c, 0, char), 8, uint32_t));
            if (fn(c, FLD(query, 0, uint32_t) != 0 ? box : 0, query, shape) != 0)
                hit = 1;
        }
        FLD(data_00709D28, 8, uint32_t) = 0;
    }
    return hit;
}

/* static-local list buffer (cap 9): guard word, buffer */
static void init_buf(char *guard, char *buf) {
    if ((FLD(guard, 0, uint32_t) & 1) == 0 && func_00100174((int *)guard) != 0) {
        FLD(buf, 0, uint32_t) = 0;
        FLD(buf, 4, uint32_t) = 0;
        FLD(buf, 8, uint32_t) = 0;
        func_0010B3EC((uint32_t *)buf, 9, (int)gp_u32(buf + 0xC));
    }
}

/* one layer: large-object chain, then the grid cells around *pos (pos may be 0: no cells) */
static int test_layer(char *mgr, uint32_t layer, char *buf, float *pos, char *query, char *shape,
                      char *box) {
    int hit = 0;
    char *big = mgr + 0xBF3C;
    int32_t off = FLD(big, 0xC, int32_t);
    for (char *obj = (char *)gp_ptr(FLD(big, 4, uint32_t) - (uint32_t)off);
         obj != (char *)gp_ptr(gp_u32(big) - FLD(big, 0xC, uint32_t));
         obj = (char *)gp_ptr(FLD(obj + off, 4, uint32_t) - (uint32_t)off)) {
        char *lst = obj + 0xB4 + (layer < 6 ? layer * 12 : 0);
        hit |= test_list(lst, query, shape, box);
    }
    FLD(buf, 0, uint32_t) = 0;
    if (pos != 0)
        func_004A8930((int)gp_u32(mgr), pos, (int *)buf, layer);
    int32_t n = FLD(buf, 0, int32_t);
    for (int32_t i = 0; i < n; i++) {
        char *head = 0;
        if (FLD(buf, 0, uint32_t) > (uint32_t)i)
            head = gp_ptr(FLD(GPTR(buf, 8, char), i * 4, uint32_t));
        hit |= test_list(head, query, shape, box);
    }
    return hit;
}

static void copy3(void *dst, const void *src) { memcpy(dst, src, 12); }

int albw_collision_sweep(uint32_t mgr_w, uint32_t *q, uint32_t mask, float f0, float f1) {
    _Alignas(8) char F[0x1E0];
    char *mgr = gp_ptr(mgr_w);
    char *Q = (char *)q;
    float *boxB = (float *)(F + 0x150), *dir = (float *)(F + 0x1A8);

    func_0068B2DC(boxB, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_00115C70(dir, GPTR(Q, 0x1C, float), GPTR(Q, 0x20, float));
    float x = dir[0], y = dir[1], z = dir[2];
    float len = sqrtf(x * x + y * y + z * z);
    FLD(Q, 0x24, float) = len;
    float r = FLD(Q, 0x2C, float);

    if (VCMP_LE(len, r * f0) || VCMP_HI(len, r * f1)) {
        /* ---- single test of the whole move (EU 004A7BAC) ---- */
        char *S = F;
        int hit = 0;
        func_00432F74((uint32_t *)S);
        func_00115C54((float *)(F + 0x5C), (float *)(Q + 0x30), GPTR(Q, 0x1C, float));
        copy3(S + 4, F + 0x5C);
        func_00115C54((float *)(F + 0x5C), (float *)(Q + 0x30), GPTR(Q, 0x20, float));
        copy3(S + 0x1C, F + 0x5C);
        copy3(S + 0x10, F + 0x5C);
        FLD(S, 0x58, uint32_t) = FLD(Q, 0x2C, uint32_t);
        char *buf = data_007342CC;
        init_buf(data_00709D28 + 0x1C, buf);
        for (int32_t layer = 5; layer >= 0; layer--) {
            if ((mask & (1u << layer)) == 0)
                continue;
            hit |= test_layer(mgr, (uint32_t)layer, buf, GPTR(Q, 0x1C, float), Q, S, (char *)boxB);
            if (FLD(Q, 0, uint32_t) != 0 && layer <= 2 && layer > 0) {
                func_00115C54((float *)(F + 0x64), (float *)(Q + 0x30), GPTR(Q, 0x1C, float));
                copy3(S + 4, F + 0x64);
                func_00115C54((float *)(S + 4), (float *)(S + 4), boxB);
                func_00115C54((float *)(S + 4), (float *)(S + 4), boxB + 3);
                func_004356B4((int *)S);
            }
        }
        if (hit != 0 && FLD(Q, 0, uint32_t) != 0) {
            func_00115C54(GPTR(Q, 0, float), GPTR(Q, 0, float), boxB);
            func_00115C54(GPTR(Q, 0, float), GPTR(Q, 0, float), boxB + 3);
        }
        return hit;
    }

    /* ---- subdivided move (EU 004A7694) ---- */
    dir[0] = x / len;
    dir[1] = y / len;
    dir[2] = z / FLD(Q, 0x24, float);
    float t = 0.0f;
    char *QC = F + 0x5C, *S = F + 0x98;
    float *boxA = (float *)(F + 0x138), *step = (float *)(F + 0x100);
    float *cur = (float *)(F + 0xF4), *start = (float *)(F + 0x178), *end = (float *)(F + 0x184);
    func_0010E3C4((uint32_t *)QC, q, 0x3C);
    func_0068B2DC(boxA, t, t, t, t, t, t);
    char *buf = data_007AF404;
    init_buf(data_0072776C, buf);
    copy3(step, dir);
    float s = FLD(QC, 0x2C, float);
    float lim = FLD(data_00709CC8, 4, float) - 0.1f;
    if (VCMP_LO(lim, s))
        s = lim;
    func_00115D70(step, step, s);
    copy3(end, GPTR(QC, 0x1C, char));
    copy3(start, GPTR(QC, 0x20, char));
    copy3(cur, start);
    do {
        t = t + s;
        if (VCMP_HI(FLD(QC, 0x24, float), t))
            func_00115C54(cur, cur, step);
        else
            copy3(cur, end);
        FLD(QC, 0x1C, uint32_t) = gp_u32(cur);
        FLD(QC, 0x20, uint32_t) = gp_u32(start);
        func_00432F74((uint32_t *)S);
        func_00115C54((float *)(F + 0x1C8), (float *)(QC + 0x30), cur);
        copy3(S + 4, F + 0x1C8);
        func_00115C54((float *)(F + 0x1D4), (float *)(QC + 0x30), start);
        copy3(S + 0x1C, F + 0x1D4);
        copy3(S + 0x10, F + 0x1D4);
        FLD(S, 0x58, uint32_t) = FLD(QC, 0x2C, uint32_t);
        int hit = 0;
        for (int32_t layer = 5; layer >= 0; layer--) {
            if ((mask & (1u << layer)) == 0)
                continue;
            hit |= test_layer(mgr, (uint32_t)layer, buf, GPTR(QC, 0x1C, float), QC, S,
                              (char *)boxA);
            if (FLD(QC, 0, uint32_t) != 0 && layer <= 2 && layer > 0) {
                func_00115C54((float *)(F + 0x194), (float *)(QC + 0x30), cur);
                copy3(S + 4, F + 0x194);
                func_00115C54((float *)(S + 4), (float *)(S + 4), boxA);
                func_00115C54((float *)(S + 4), (float *)(S + 4), boxA + 3);
                func_004356B4((int *)S);
            }
        }
        if (hit != 0) {
            if (FLD(QC, 0, uint32_t) != 0) {
                func_00115C70((float *)S, cur, end);
                func_00115C54(GPTR(QC, 0, float), GPTR(QC, 0, float), boxA);
                func_00115C54(GPTR(QC, 0, float), GPTR(QC, 0, float), boxA + 3);
                func_00115C54(GPTR(QC, 0, float), GPTR(QC, 0, float), (float *)S);
            }
            return 1;
        }
    } while (VCMP_HI(FLD(QC, 0x24, float), t));
    return 0;
}

/* converted callers: (int mgr, uint *q, uint mask), no s0/s1 -> the (2.0, 4.0) of 26 of 27 ARM
 * sites (00341D28's site at EU 003422E4 passes 1.0, 4.0) */
int func_004A7620(int mgr, uint32_t *q, uint32_t mask) {
    return albw_collision_sweep((uint32_t)mgr, q, mask, 2.0f, 4.0f);
}
