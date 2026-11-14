/* USA 004A9F98 <- EU 004A9F70: collision manager, swept-shape query restricted to one AREA
 * ("area sweep"): like 004A7620, but instead of the global large-object chain it walks, per
 * layer 5..0 selected by `mask`: the area's collider list (area+0xB4 + layer*12), the grid cells
 * around the end point (004A8930), and the manager's per-layer list (mgr+0xC4 + layer*12).
 *     int f(CollisionMgr *mgr, Query *q, u32 mask, float f0, float f1);   (r0, r1, r2, s0, s1)
 *   (Query layout and collider test as in func_004A7620.c.)
 *   Area: idx = (s16)q+0x10; idx < 0 -> fall-back; idx == 0xFF -> a = 0052FBA0(*data_00706E20
 *   + 0x3DBBC, q+0xC) (actor by handle), idx = (s16)a+0x54, and when a == 0 or that is < 0,
 *   idx = (s16)(*(*data_0070C8E0 + 0x38) + 0x15B40); idx < 0 -> fall-back;
 *   area = *(*data_0070C8E0 + 0x38) + 0x1C3C + idx * 0x50C; area == 0 (adds/beq) -> fall-back.
 *   Fall-back: tail call 004A7620(mgr, q, mask, 2.0f, 4.0f) (constants, NOT f0/f1).
 *   len = |*p1 - *p0| (q+0x24); single test when len <= r*f0 or len > r*f1 (NaN-true), box
 *   at sp+0x138; else subdivided with step = dir * min(2r, cellSize - 0.1) (vmovgt: NaN keeps
 *   2r; 004A7620 uses r), private query copy at sp+0x5C, shape at sp+0x98, box at sp+0x1A8,
 *   cur at sp+0x198, start copy at sp+0x164, end at sp+0x188.
 * Callers: 21 functions / 23 sites; ARM s0/s1 = (2.0, 4.0) at every site (constants or s-regs
 * loaded with them: 001AEB78 s19/s18, 001FF628 s19, 002F93C8 s18/s17).
 *
 * Round-2 state: signature (int, uint *, uint) -> int, s0/s1 lost (`vpush {d0}` + `vmov.f64
 * d8, d0` prologue, see tools/livein_dregs.py); the converted body tests the length against
 * `in_s0`/`in_s1` garbage; 15 bit-casts of the round-1 text are ALBW_AS_* now, the remaining
 * defect is the bounds. The fall-back is converted as a 3-argument call too.
 * Exact version: albw_collision_sweep_area (gp_collision.h); func_004A9F98 keeps the converted
 * callers' prototype and passes (2.0, 4.0), exact for all 23 ARM sites.
 * Frame reproduced at the ARM sp offsets (char F[0x1E8]); dead query-template stores omitted
 * (as in 004A7620; here the template's u16 0xFFFF field takes its upper half from the area
 * pointer, a register reuse, and is overwritten by the 0x3C-byte query copy).
 *
 * Verified against EU 004A9F70-004AA9CC instruction by instruction. Confidence: high (flow),
 * medium (role names). */
#include "gameplay.h"
#include "gp_collision.h"
#include <math.h>
#pragma STDC FP_CONTRACT OFF

extern char data_00709D28[];
extern char data_00709CC8[];
extern char data_0070C8E0[];
extern char data_00706E20[];
extern char data_00727768[];
extern char data_007AF3D4[];
extern char data_0073429C[];
int func_00100174(int *guard);
int func_0010B3EC(uint32_t *buf, int cap, int storage);
int func_0010E3C4(uint32_t *dst, uint32_t *src, uint32_t n);
int func_00115C54(float *out, float *a, float *b);   /* a + b */
int func_00115C70(float *out, float *a, float *b);   /* a - b */
int func_00115D70(float *out, float *v, float s);    /* v * s */
int func_00432F74(uint32_t *shape);
int func_004356B4(int *shape);
int func_004A8930(int mgr, float *pos, int *buf, uint32_t layer);
int func_0052FBA0(int mgr, uint32_t handle);
int func_0068B2DC(float *box, float a, float b, float c, float d, float e, float f);

typedef int (*coll_test_fn)(void *c, void *box, void *query, void *shape);

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

static void init_buf(char *guard, char *buf) {
    if ((FLD(guard, 0, uint32_t) & 1) == 0 && func_00100174((int *)guard) != 0) {
        FLD(buf, 0, uint32_t) = 0;
        FLD(buf, 4, uint32_t) = 0;
        FLD(buf, 8, uint32_t) = 0;
        func_0010B3EC((uint32_t *)buf, 9, (int)gp_u32(buf + 0xC));
    }
}

/* one layer: area list, grid cells around *pos (pos may be 0), manager list */
static int test_layer(char *mgr, char *area, uint32_t layer, char *buf, float *pos, char *query,
                      char *shape, char *box) {
    uint32_t lo = layer < 6 ? layer * 12 : 0;
    int hit = test_list(area + 0xB4 + lo, query, shape, box);
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
    hit |= test_list(mgr + 0xC4 + lo, query, shape, box);
    return hit;
}

static void copy3(void *dst, const void *src) { memcpy(dst, src, 12); }

int albw_collision_sweep_area(uint32_t mgr_w, uint32_t *q, uint32_t mask, float f0, float f1) {
    _Alignas(8) char F[0x1E8];
    char *mgr = gp_ptr(mgr_w);
    char *Q = (char *)q;
    float *boxB = (float *)(F + 0x138), *dir = (float *)(F + 0x12C);

    func_0068B2DC(boxB, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    int32_t idx = FLD(Q, 0x10, int16_t);
    if (idx < 0)
        goto fallback;
    if (idx == 0xFF) {
        char *a = gp_ptr((uint32_t)func_0052FBA0(
            (int)(FLD(data_00706E20, 0, uint32_t) + 0x3DBBC), FLD(Q, 0xC, uint32_t)));
        if (a == 0 || (idx = FLD(a, 0x54, int16_t)) < 0)
            idx = FLD(GPTR(GPTR(data_0070C8E0, 0, char), 0x38, char), 0x15B40, int16_t);
        if (idx < 0)
            goto fallback;
    }
    uint32_t area_w = FLD(GPTR(data_0070C8E0, 0, char), 0x38, uint32_t) + 0x183C
                      + (uint32_t)idx * 0x143u * 4u + 0x400;
    if (area_w == 0)
        goto fallback;
    char *area = gp_ptr(area_w);

    func_00115C70(dir, GPTR(Q, 0x1C, float), GPTR(Q, 0x20, float));
    float x = dir[0], y = dir[1], z = dir[2];
    float len = sqrtf(x * x + y * y + z * z);
    float r = FLD(Q, 0x2C, float);
    FLD(Q, 0x24, float) = len;

    if (VCMP_LE(len, r * f0) || VCMP_HI(len, r * f1)) {
        /* ---- single test of the whole move (EU 004AA654) ---- */
        char *S = F;
        int hit = 0;
        func_00432F74((uint32_t *)S);
        func_00115C54((float *)(F + 0x68), (float *)(Q + 0x30), GPTR(Q, 0x1C, float));
        copy3(S + 4, F + 0x68);
        func_00115C54((float *)(F + 0x68), (float *)(Q + 0x30), GPTR(Q, 0x20, float));
        copy3(S + 0x1C, F + 0x68);
        copy3(S + 0x10, F + 0x68);
        FLD(S, 0x58, uint32_t) = FLD(Q, 0x2C, uint32_t);
        char *buf = data_0073429C;
        init_buf(data_00709D28 + 0x18, buf);
        for (int32_t layer = 5; layer >= 0; layer--) {
            if ((mask & (1u << layer)) == 0)
                continue;
            hit |= test_layer(mgr, area, (uint32_t)layer, buf, GPTR(Q, 0x1C, float), Q, S,
                              (char *)boxB);
            if (FLD(Q, 0, uint32_t) != 0 && layer <= 2 && layer > 0) {
                func_00115C54((float *)(F + 0x6C), (float *)(Q + 0x30), GPTR(Q, 0x1C, float));
                copy3(S + 4, F + 0x6C);
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

    /* ---- subdivided move (EU 004AA09C) ---- */
    dir[0] = x / len;
    dir[1] = y / len;
    dir[2] = z / FLD(Q, 0x24, float);
    float t = 0.0f;
    char *QC = F + 0x5C, *S = F + 0x98;
    float *boxA = (float *)(F + 0x1A8), *step = (float *)(F + 0x17C);
    float *cur = (float *)(F + 0x198), *start = (float *)(F + 0x164), *end = (float *)(F + 0x188);
    func_0010E3C4((uint32_t *)QC, q, 0x3C);
    func_0068B2DC(boxA, t, t, t, t, t, t);
    float s = FLD(QC, 0x2C, float) * 2.0f;
    float lim = FLD(data_00709CC8, 4, float) - 0.1f;
    copy3(step, dir);
    if (VCMP_GT(s, lim))
        s = lim;
    func_00115D70(step, step, s);
    copy3(end, GPTR(QC, 0x1C, char));
    copy3(start, GPTR(QC, 0x20, char));
    copy3(cur, start);
    char *buf = data_007AF3D4;
    init_buf(data_00727768, buf);
    do {
        t = t + s;
        if (VCMP_HI(FLD(QC, 0x24, float), t))
            func_00115C54(cur, cur, step);
        else
            copy3(cur, end);
        FLD(QC, 0x20, uint32_t) = gp_u32(start);
        FLD(QC, 0x1C, uint32_t) = gp_u32(cur);
        func_00432F74((uint32_t *)S);
        func_00115C54((float *)(F + 0x1C4), (float *)(QC + 0x30), GPTR(QC, 0x1C, float));
        copy3(S + 4, F + 0x1C4);
        func_00115C54((float *)(F + 0x1D0), (float *)(QC + 0x30), GPTR(QC, 0x20, float));
        copy3(S + 0x1C, F + 0x1D0);
        copy3(S + 0x10, F + 0x1D0);
        FLD(S, 0x58, uint32_t) = FLD(QC, 0x2C, uint32_t);
        int hit = 0;
        for (int32_t layer = 5; layer >= 0; layer--) {
            if ((mask & (1u << layer)) == 0)
                continue;
            hit |= test_layer(mgr, area, (uint32_t)layer, buf, GPTR(QC, 0x1C, float), QC, S,
                              (char *)boxA);
            if (FLD(QC, 0, uint32_t) != 0 && layer <= 2 && layer > 0) {
                func_00115C54((float *)(F + 0x1DC), (float *)(QC + 0x30), cur);
                copy3(S + 4, F + 0x1DC);
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

fallback:
    return albw_collision_sweep(mgr_w, q, mask, 2.0f, 4.0f);
}

/* converted callers: (int mgr, uint *q, uint mask), no s0/s1 -> (2.0, 4.0) as at all 23 ARM
 * call sites */
int func_004A9F98(int mgr, uint32_t *q, uint32_t mask) {
    return albw_collision_sweep_area((uint32_t)mgr, q, mask, 2.0f, 4.0f);
}
