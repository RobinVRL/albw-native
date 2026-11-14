/* USA 0027C13C <- EU 0027C164: place the sub-actors of a multi-part actor at their spawn points.
 * Called as func_0027C13C(self).
 *
 *   kind = 00588BE4(self); mgr = (*data_00706E20)->[0x3DBE4];
 *   for i in 0..self->[0x624]-1 (entries of 40 bytes at self->[0x628]; point index k = i):
 *       pt = k < self->[0x478] ? self->[0x480][k] : NULL;  (pt: +4/+8/+C position, +0x20 rotation)
 *       a = entry->[4]; (x, y, z) = pt position
 *       if (00547B6C(mgr, k)) {                 (flag k set: already triggered)
 *           if (kind == *data_0069358C) y -= 0.975f;
 *           else { 004CEA18(a, 0, 0); 004CEA18(a, 1, 1); }
 *           a->f[0x134] = 0; 004A8304(*data_00709D28, entry->[0x10]); entry->u8[0] = 2;
 *       }
 *       a->vtbl[0x10](a, 0x24); a->[0x164] |= 0x40000000;
 *       00491E80(&a->[0x80], 0, pt->[0x20], 0); a->[0x164] |= 0x40000000;
 *       a->f[0x8C] = x; a->f[0x9C] = y; a->f[0xAC] = z; 004CEAF0(a);
 *
 * What was wrong in the Ghidra version: `unaff_r7` was only Ghidra's view of the conditional
 * ldrhi/movls r7 (harmless), but the floats went through integer variables with C value casts:
 * `fVar11 - (float)uVar14` (uVar14 = the 64-bit-widened BITS of 0.975f, converted as an integer,
 * ~1.06e9) and `piVar5[0x27] = (int)fVar11` (truncating the Y position to an integer and storing
 * its integer bits), so natively every sub-actor got a wrong height.
 *
 * Verified against EU 0027C164-0027C2CC: point index r6 starts at -1 and is pre-incremented with
 * the entry index (they stay equal); the bound test is unsigned (`cmp count, r6; ldrhi/movls`);
 * the loop is do { } while (++i != count) entered only for count != 0; the three position floats
 * are loaded before the 00547B6C call and stored at +0x8C/+0x9C/+0xAC at the end.
 * Confidence: high. */
#include "robust.h"

extern char *data_00706E20;
extern int32_t data_0069358C;
extern void *data_00709D28;
int func_00588BE4(void *self);
_Bool func_00547B6C(void *mgr, uint32_t index);
void func_004CEA18(void *actor, int a, uint32_t b);
void func_004A8304(void *mgr, void *obj);
void func_00491E80(float *p, uint32_t a, uint32_t rot, uint32_t c);
void func_004CEAF0(void *actor);

typedef void (*vfn_int)(void *self, int arg);

void func_0027C13C(char *self) {
    int kind = func_00588BE4(self);
    int32_t count = FLD(self, 0x624, int32_t);
    char *entries = FLD(self, 0x628, char *);
    void *mgr = FLD(data_00706E20, 0x3DBE4, void *);
    if (count == 0)
        return;
    int32_t i = 0;
    do {
        uint32_t k = (uint32_t)i;
        char *pt = FLD(self, 0x478, uint32_t) > k ? FLD(self, 0x480, char **)[k] : (char *)0;
        char *entry = entries + i * 40;
        char *a = FLD(entry, 4, char *);
        float x = FLD(pt, 4, float), y = FLD(pt, 8, float), z = FLD(pt, 0xC, float);
        if (func_00547B6C(mgr, k)) {
            if (kind == data_0069358C) {
                y = y - 0.975f;
            } else {
                func_004CEA18(a, 0, 0);
                func_004CEA18(a, 1, 1);
            }
            FLD(a, 0x134, float) = 0.0f;
            func_004A8304(data_00709D28, FLD(entry, 0x10, void *));
            FLD(entry, 0, uint8_t) = 2;
        }
        FLD(*(char **)a, 0x10, vfn_int)(a, 0x24);
        FLD(a, 0x164, uint32_t) |= 0x40000000u;
        func_00491E80((float *)AT(a, 0x80), 0, FLD(pt, 0x20, uint32_t), 0);
        FLD(a, 0x164, uint32_t) |= 0x40000000u;
        FLD(a, 0x8C, float) = x;
        FLD(a, 0x9C, float) = y;
        FLD(a, 0xAC, float) = z;
        func_004CEAF0(a);
    } while (++i != count);
}
