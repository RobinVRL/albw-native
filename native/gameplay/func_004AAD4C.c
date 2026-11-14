/* USA 004AAD4C <- EU 004AAD24: collision manager, box query over the broad-phase grid:
 * calls the per-entry test 004A9178 for every collider registered in a grid cell overlapping
 * the cube [pos - h, pos + h] and for every collider in the large-object lists, for each of the
 * 6 layers selected by `mask`.
 *     void f(CollisionMgr *mgr, const float pos[3], Callback *cb, u32 attrMask, u32 layerMask, u32 flag,
 *            float f0, float h);         (AAPCS: r0-r3, stack mask/extra, s0 = f0, s1 = h)
 *   (cb, attrMask and flag are forwarded unchanged to 004A9178 as its cb / mask / flag)
 * Callers: 001E9098, 001EA96C, 00327C50.
 *
 * What was wrong in the Ghidra C: the half extent h arrives in s1 and the box is built from the
 * Vec3 {h,h,h} at sp+8 (three `vstr s16`). Ghidra lost s0/s1 (`in_s0`/`in_s1`), never wrote the
 * Vec3 (min/max were computed from an uninitialised stack array) and forwarded garbage as the
 * two float arguments of 004A9178.
 *
 * Verified against EU 004AAD24-004AAF0C: min = pos - {h,h,h} (00115C70), max = pos + {h,h,h}
 * (00115C54); function-local static list buffer data_00734498 (guard bit 0 of data_00709D28+0x24,
 * 00100174 guard acquire, 0010B3EC(buf, 100, buf+12)); per layer: buf.count = 0,
 * 004A97F8(mgr, min, max, buf, layer); cells i < count (count read once; each item re-checked
 * against the live count, NULL past it); then the large-object chain at mgr+0xBF3C (offset base
 * read once before the walk, end re-read each step), lists at obj+0xB4 + layer*12.
 * Confidence: high (control flow), medium (role names). */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_00709D28[];
extern char data_00734498[];
int func_00100174(void *guard);   /* static-local guard acquire (Thumb) */
int func_0010B3EC(void *buf, int cap, void *storage);
int func_004A97F8(void *mgr, float *mn, float *mx, void *buf, uint32_t layer);
int func_004A9178(void *mgr, void *entry, const float *pos, void *a2, uint32_t a3, uint32_t extra,
                  float f0, float f1);

void func_004AAD4C(char *mgr, const float *pos, void *a2, uint32_t a3, uint32_t mask,
                   uint32_t extra, float f0, float h) {
    float mn[3], mx[3];
    mn[0] = pos[0] - h; mn[1] = pos[1] - h; mn[2] = pos[2] - h;
    mx[0] = pos[0] + h; mx[1] = pos[1] + h; mx[2] = pos[2] + h;

    char *buf = data_00734498;
    if ((FLD(data_00709D28, 0x24, uint32_t) & 1) == 0 && func_00100174(data_00709D28 + 0x24) != 0) {
        FLD(buf, 0, uint32_t) = 0;
        FLD(buf, 4, uint32_t) = 0;
        FLD(buf, 8, uint32_t) = 0;
        func_0010B3EC(buf, 100, buf + 0xC);
    }
    char *big = mgr + 0xBF3C;
    for (uint32_t layer = 0; layer < 6; layer++) {
        if ((mask & (1u << layer)) == 0)
            continue;
        FLD(buf, 0, uint32_t) = 0;
        func_004A97F8(mgr, mn, mx, buf, layer);
        int32_t n = FLD(buf, 0, int32_t);
        for (int32_t i = 0; i < n; i++) {
            char *head = 0;
            if (FLD(buf, 0, uint32_t) > (uint32_t)i)
                head = gp_ptr(FLD(GPTR(buf, 8, char), i * 4, uint32_t));
            for (char *node = GPTR(head, 4, char); node != head; node = GPTR(node, 4, char))
                func_004A9178(mgr, GPTR(node, 8, char), pos, a2, a3, extra, f0, h);
        }
        int32_t off = FLD(big, 0xC, int32_t);
        for (char *obj = (char *)gp_ptr(FLD(big, 4, uint32_t) - (uint32_t)off);
             obj != (char *)gp_ptr(gp_u32(big) - FLD(big, 0xC, uint32_t));
             obj = (char *)gp_ptr(FLD(obj + off, 4, uint32_t) - (uint32_t)off)) {
            char *lst = obj + 0xB4 + (layer < 6 ? layer * 12 : 0);
            for (char *node = GPTR(lst, 4, char); node != lst; node = GPTR(node, 4, char))
                func_004A9178(mgr, GPTR(node, 8, char), pos, a2, a3, extra, f0, h);
        }
    }
}
