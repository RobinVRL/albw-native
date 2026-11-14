/* USA 004A879C <- EU 004A8774: collision broad phase, (re)register a collider entry in the
 * collision manager's grid. 120 static callers (every actor that moves its collider).
 *     void f(CollisionMgr *mgr, ColEntry *ent, u32 layer);
 *   ent+0x1C = layer; shape = ent+0x10 (00589A64(ent) true) or ent+0x18; if the shape's AABB
 *   (shape+0x34 min, +0x40 max) is wider than 2.0 in x or z it goes to the "large objects" list
 *   (tail call 004A7F00); otherwise cell = 00581A18(mgr, &shape->pos, sizeClass) and the entry's
 *   link (ent+0x30, owner list at ent+0x3C) moves to list mgr+0x11C + cell*0x48 + layer*12
 *   (cell < 0x2A4, layer < 6; otherwise the base list), list+8 = count.
 *   sizeClass = (s16)ent+0x2C, or when negative the default (s16) at (*data_0070C8E0)->[0x38]+0x15B40.
 *
 * What was wrong in the Ghidra C: the "wider than 2.0" tests are `vmov r2, s0; cmp r2,
 * #0x40000000; bgt` (signed compare of the float BIT PATTERN with 2.0f). Ghidra printed them as
 * value conversions `0x40000000 < (int)(max - min)`, so natively they were never true: big
 * colliders were put into a single grid cell instead of the large-object list and are missed by
 * queries from neighbouring cells (walls/platforms that span cells).
 *
 * Verified against EU 004A8774-004A88FC instruction by instruction (both copies of the body
 * for the 00589A64 true/false paths are identical except the shape field; merged here).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern uint32_t data_0070C8E0;
int func_00589A64(void *ent);
uint32_t func_00581A18(void *mgr, float *pos, int sizeClass);
void func_004A7F00(void *mgr, void *ent, uint32_t layer);
void func_0010F1F8(void *link);
void func_0010F1DC(void *list, void *link);

void func_004A879C(uint32_t mgr_w, uint32_t ent_w, uint32_t layer) {
    char *mgr = (char *)gp_ptr(mgr_w);
    char *ent = (char *)gp_ptr(ent_w);
    FLD(ent, 0x1C, uint32_t) = layer;
    char *shape = func_00589A64(ent) ? GPTR(ent, 0x10, char) : GPTR(ent, 0x18, char);
    if (gp_f2i_bits(FLD(shape, 0x40, float) - FLD(shape, 0x34, float)) > 0x40000000 ||
        gp_f2i_bits(FLD(shape, 0x48, float) - FLD(shape, 0x3C, float)) > 0x40000000) {
        func_004A7F00(mgr, ent, layer);
        return;
    }
    int sizeClass = FLD(ent, 0x2C, int16_t);
    if (sizeClass < 0) {
        char *g = gp_ptr(data_0070C8E0);
        sizeClass = FLD(GPTR(g, 0x38, char), 0x15B40, int16_t);
    }
    uint32_t cell = func_00581A18(mgr, (float *)AT(shape, 4), sizeClass);
    char *list = mgr + 0x11C;
    if (cell < 0x2A4) list += cell * 0x48;
    if (layer < 6) list += layer * 12;

    char *link = ent + 0x30;
    char *old = GPTR(link, 0xC, char);
    if (old) {
        FLD(link, 0xC, uint32_t) = 0;
        func_0010F1F8(link);
        FLD(old, 8, int32_t) -= 1;
    }
    FLD(link, 0xC, uint32_t) = gp_u32(list);
    func_0010F1DC(list, link);
    FLD(list, 8, int32_t) += 1;
}
