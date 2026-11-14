/* USA 0042EFB0 <- EU 0042EF90: KCL octree box query: visit every prism of the KCL mesh whose
 * octree cell overlaps the AABB [mn, mx] (gather into a callback or sphere-test, see 0043081C).
 *     int f(KclObj *obj, const float *mn, const float *mx, u32 attrMask, Callback *cb);
 *   ctx = data_007307DC; ctx+0x68 = attrMask; hdr = obj+0x5C (KCL header: +0xC octree,
 *   +0x14 area min, +0x20/24/28 x/y/z masks, +0x2C coord shift s, +0x30/+0x34 y/z index shifts).
 *     x0 = vcvt.s32(mn.x - min.x), clamped below to 0          (same y0, z0)
 *     x1 = vcvt.s32((mx.x - min.x) + 1.0f), clamped above to ~mask_x (signed)   (same y1, z1)
 *     if !(x0 < x1 && y0 < y1) || !(z0 < z1) (signed): return (r0 = z1, no list reset);
 *     cells x0>>s .. x1>>s (unsigned, inclusive; then y, then z innermost), index
 *     (z << zs) | (y << ys) | x (ARM register shifts: amount = low byte, >= 32 gives 0);
 *     per cell the box fractions lo = (cell == first ? c0 << (31 - s) : 0),
 *     hi = (cell == last ? c1 << (31 - s) : ~0) and EXACTLY the body of 0043081C on
 *     (octree, 4 * index) - the ARM inlines it (full cell: leaf scan / 8x 004317D4; partial:
 *     leaf scan / 8x 0043081C), implemented here as the same helper;
 *     finally tail call 0049F5FC(obj + 0x78) (clear the per-query "visited" prism list).
 * Callers: 00431F44 (segment query, long segments), 004A9178 (box path), 0042E4CC, 00433D60,
 * 00434558.
 *
 * What was wrong in the round-2 Ghidra C (build/ghidra_analyzed4): (1) the distance vector d
 * that 00115C70 writes to sp+8 is read as `in_stack_ffffff10..1c` (lost stack object, 73
 * in_stack uses; one of them is even reused as the visited-list pointer): every sphere-vs-prism
 * test of the inlined leaf scans read uninitialised words; (2) the six vcvt.s32 bounds are C
 * `(uint)` casts: x86 gives 0x80000000 for NaN and overflow where the ARM saturates (NaN -> 0):
 * a box reaching past +2^31 (e.g. +FLT_MAX) becomes INT_MIN -> early return (no prisms at all)
 * instead of the clamped full extent, a NaN bound becomes INT_MIN instead of 0; (3) the
 * shifts `>> (s & 0xff)` are C UB for s >= 32 (ARM: 0); (4) `return;` without the tail call's
 * value (r0) on the walk path (callers declare int; one site tail-returns it).
 * The triangle record copies on the stack (sp+0x74..0x8C: header, prism, index, vertex, ctx+0x38,
 * 1.0f) only feed 00115C70's vertex operand; the vertex is read directly here (bit copy).
 *
 * Signature: round-2 callers declare `extern int func_0042EFB0(int, float *, float *,
 * undefined4, undefined4 *)` = ARM r0-r3 + one stack word: same here (obj as a 32-bit word).
 * Verified against EU 0042EF90-00430294 instruction by instruction (bounds 42EFA0-42F06C,
 * shifts 42F084-42F0EC, loops 42F10C/42F11C/42F128 + 430240-430268, per-cell 42F160-42F1F8,
 * leaf scans 42F264, 42F328, 42F5D4, 42F858, 42FC68, 42FEEC, full subtree 42F944, split
 * 42FFD0-43023C, exit 43026C/430288). Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];
int func_0049F5FC(uint32_t *list);
void albw_kcl_box_node(char *obj, char *node, uint32_t slot, char *cb,
                       const uint32_t lo[3], const uint32_t hi[3]);   /* 0043081C body */

static inline uint32_t lsr_r(uint32_t v, uint32_t s) { s &= 0xFF; return s >= 32 ? 0 : v >> s; }
static inline uint32_t lsl_r(uint32_t v, uint32_t s) { s &= 0xFF; return s >= 32 ? 0 : v << s; }

int func_0042EFB0(uint32_t obj_w, const float *mn, const float *mx, uint32_t mask, void *cb) {
    char *obj = (char *)gp_ptr(obj_w);
    char *ctx = data_007307DC;
    FLD(ctx, 0x68, uint32_t) = mask;
    char *hdr = GPTR(obj, 0x5C, char);
    const float *amin = (const float *)AT(hdr, 0x14);

    int32_t c0[3], c1[3];
    for (int a = 0; a < 3; a++) {
        int32_t v = gp_vcvt_s32(mn[a] - amin[a]);
        c0[a] = v < 0 ? 0 : v;
    }
    for (int a = 0; a < 3; a++) {
        int32_t v = gp_vcvt_s32((mx[a] - amin[a]) + 1.0f);
        int32_t lim = (int32_t)~FLD(hdr, 0x20 + 4 * a, uint32_t);
        c1[a] = lim < v ? lim : v;
    }
    if (!(c0[0] < c1[0] && c0[1] < c1[1]) || !(c0[2] < c1[2]))
        return c1[2];

    char *oct = GPTR(hdr, 0xC, char);
    uint32_t s = FLD(hdr, 0x2C, uint32_t);
    uint32_t ys = FLD(hdr, 0x30, uint32_t), zs = FLD(hdr, 0x34, uint32_t);
    uint32_t first[3], last[3], f0[3], f1[3];
    for (int a = 0; a < 3; a++) {
        first[a] = lsr_r((uint32_t)c0[a], s);
        last[a] = lsr_r((uint32_t)c1[a], s);
        f0[a] = lsl_r((uint32_t)c0[a], 31 - s);
        f1[a] = lsl_r((uint32_t)c1[a], 31 - s);
    }

    for (uint32_t x = first[0]; x <= last[0]; x++) {
        for (uint32_t y = first[1]; y <= last[1]; y++) {
            for (uint32_t z = first[2]; z <= last[2]; z++) {
                uint32_t idx = lsl_r(z, zs) | lsl_r(y, ys) | x;
                uint32_t lo[3], hi[3];
                lo[0] = x == first[0] ? f0[0] : 0;
                lo[1] = y == first[1] ? f0[1] : 0;
                lo[2] = z == first[2] ? f0[2] : 0;
                hi[0] = x == last[0] ? f1[0] : 0xFFFFFFFFu;
                hi[1] = y == last[1] ? f1[1] : 0xFFFFFFFFu;
                hi[2] = z == last[2] ? f1[2] : 0xFFFFFFFFu;
                albw_kcl_box_node(obj, oct, idx << 2, (char *)cb, lo, hi);
            }
        }
    }
    return func_0049F5FC((uint32_t *)(obj + 0x78));
}
