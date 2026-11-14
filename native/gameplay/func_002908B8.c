/* USA 002908B8 <- EU 002908E0: player action component, apply the pending action change.
 *     int f(ActionComp *self);   returns 0 (nothing pending) / 1 (applied)
 *   m = self->[0x48] (action machine); id = (s16)m->[4]; if (id == -2) return 0;
 *   e = &data_007111A8[id * 16] (action table: u8 class, s16 anim, u32 flags +4, object +8);
 *   local {s16 old = self->[0x42], s16 new = id, u8 oldClass, u8 newClass, 8 words m->[8..0x24]};
 *   if (oldClass != newClass) { m->vt[2](m); member-function pointer data_006A33C8[class]
 *     ({fn, adj}: this = self + (adj >> 1), virtual if adj & 1) called on this; }
 *   mode byte +0x84 from the id / class / flags (+0x7C, +0xC9, flags 0x200 / 0x400, a 23-entry
 *     class switch incl. the 0x17 sub-cases and +0x160 for class 0x18), +0xC5 cleared for ids
 *     other than 0/1;
 *   anim = e->[2] (0 -> 0053F7CC(self), 3 also clears +0xC4; 0x12 -> -2 when self->[0x18]->[0x52]
 *     is 0x12); id 1 (walk/run): speed s = (bits(self->[0x10]->[0x5B0]) != bits(1.0f) ? 0.0855f
 *     : 0.095f) * self->[0x14]->[0x24], times the ridden/carried actor's float virtual vt[0x60]
 *     (the same inline code as 002900EC), anim = bits(s) > bits(0.065f) (signed) ? 10 : 7;
 *   blend b = 0 (class 2 or old id 0x11), 20 (old id 0x84/0x88), 3 (id 5), 1 (id 0x17 / 0x51),
 *     5 (id 0x4B), else 6; then 0028D580(self->[0x18] + 0x3C / + 0x5C, anim, 1, b != 0,
 *     vcvt.s32(b)) (only +0x5C when +0xC5 is set), the extra (0x59, ..., 6) request when flags & 8
 *     and 0052E920(self->[0x10], id); 0028C8EC(self->[0x18], 0); m->vt[4](m, &local);
 *     +0x40 = old +0x42, +0x42 = id, +0x44 = 0; if (self->[0x10]->[0x344]) { e->obj(+8)->vt[2]();
 *     0010DBBC(self->[0x10] + 0x324, &{data_006F5988, e->[0xC]}, 2, 0.0f); }  return 1.
 *
 * What was wrong in the round-2 converted C (ghidra_analyzed4/002/func_002908B8.c):
 *  - the float returned by the ridden actor's vt[0x60] is lost: `fVar16 = fVar15 * fVar16` uses
 *    the stale act->[0x24] instead of s0 (and the virtual is called with its result dropped);
 *  - the speed threshold `DAT_00290ec8 < (int)ALBW_AS_U32(fVar16)` compares the bit pattern with
 *    a FLOAT global (int promoted to float): the ARM compares two integers (bits vs 0x3D851EB8);
 *    with the integer compare a NaN speed (default NaN 0x7FC00000 on the 3DS, FPSCR.DN) gives
 *    anim 10. Here NaN results are canonicalised to 0x7FC00000 as with DN (x86 would make
 *    0xFFC00000, negative -> 7);
 *  - 0010DBBC's second argument is a stack pair {data_006F5988, entry[0xC]} that Ghidra never
 *    wrote (`&stack0xffffff98`: lost stack object -> uninitialised words); its s0 came out right
 *    only by accident (0.0f from the CONCAT44 of the 0.0 pool word);
 *  - 0028C8EC got r2/r3 junk (harmless: its live-in is r0, r1).
 * Not a bug (checked): the blend value passed to 0028D580 IS an integer on ARM (vcvt.s32 then a
 * stack word: 5th argument), so `(int)fVar16` is right (constants 0..20, exact).
 * Callee prototypes = round-2 converted declarations (0028D580 float(uint *, int, u8, u8, uint);
 * 0028C8EC int(int, u32, u32, int *); 0010DBBC int(int, int *, int, float); 0053F7CC int(int);
 * 0052E920 int(int, int); 0052FBA0 int(int, uint); 00100174 int(int *)); live-in agrees.
 * 64-bit note: the local block passed to m->vt[4] and the pair passed to 0010DBBC are native
 * stack objects (pointer arguments; fine unless a callee stores the address in a 32-bit field).
 * Prototype = the 2 round-2 callers' `extern int func_002908B8(int)`.
 * Verified against EU 002908E0-00290E8C instruction by instruction, both jump tables read from
 * the ROM (00290A38: 23 entries for class 2..0x18, 00290B44: 5 entries). Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern uint8_t data_007111A8[];
extern uint32_t data_006A33C8[];
extern uint32_t data_00706E20;
extern uint32_t data_007260CC;
extern uint32_t data_007260D0;
extern uint8_t data_006F6314[];
extern uint8_t data_006F5988[];

float func_0028D580(uint32_t *a, int anim, uint8_t one, uint8_t blend_on, uint32_t blend);
int func_0028C8EC(int a, uint32_t b, uint32_t c, int *d);
int func_0010DBBC(int a, int *pair, int n, float f);
int func_0053F7CC(int self);
int func_0052E920(int a, int id);
int func_0052FBA0(int mgr, uint32_t handle);
int func_00100174(int *guard);

typedef int (*vfn1)(uint32_t self);
typedef int (*vfn2)(uint32_t self, void *arg);
typedef float (*vfnf)(uint32_t self);

static uint32_t vslot(uint32_t obj, uint32_t off) {
    return FLD(GPTR(gp_ptr(obj), 0, char), off, uint32_t);
}

/* +0x84 mode byte: returns -1 for "no store", else the byte to store */
static int mode_byte(char *self, int32_t id, uint8_t cls, const uint8_t *e, uint32_t w0) {
    int r0 = 0xFF;
    if (FLD(self, 0x7C, uint8_t) != 0) return r0;
    uint32_t flags = FLD(e, 4, uint32_t);
    if (flags & 0x200) return r0;
    if (FLD(self, 0xC9, uint8_t) != 0 && cls == 0) return r0;
    if (id == 1 || id == 0) {
        char *p = GPTR(self, 0x10, char);
        if (FLD(p, 0x620, uint32_t) == 0 && FLD(p, 0x434, uint32_t) != 0)
            return 0;
    }
    if ((flags & 0x400) == 0) return -1;
    switch (cls) {
    case 2: return 0;
    case 3: return 1;
    case 4: return 8;
    case 5: return 4;
    case 6: return 6;
    case 7: return 10;
    case 10: return 3;
    case 11: return 0xB;
    case 12: return 7;
    case 13: return 9;
    case 0x17:
        if (id == 0x9C) return 0xC;
        if (id == 0x9D) return 0xD;
        if (id == 0xA1 || id == 0xA2) return 0xF;
        if (id == 0xA4) return 2;
        if (id == 0xA6) return 0x10;
        if (id == 0xA7) return 0x11;
        if (id != 0x9E && id != 0x9F) return -1;
        if (w0 < 5) return 0x12 + (int)w0;
        return -1;
    case 0x18: return FLD(self, 0x160, uint8_t);
    default: return -1;
    }
}

int func_002908B8(uint32_t self_w) {
    char *self = (char *)gp_ptr(self_w);
    int32_t id = FLD(GPTR(self, 0x48, char), 4, int16_t);
    if (id == -2)
        return 0;
    uint8_t *e = data_007111A8 + (intptr_t)id * 16;   /* ldrsh: signed index */
    int16_t old = FLD(self, 0x42, int16_t);
    uint8_t ocls = data_007111A8[(intptr_t)old * 16];
    uint8_t ncls = e[0];
    uint32_t local[10];                    /* sp+8 .. sp+0x2F */
    char *L = (char *)local;
    memset(local, 0, sizeof local);        /* +0xE/+0xF are never written on ARM */
    FLD(L, 0, int16_t) = old;
    FLD(L, 2, int16_t) = (int16_t)id;
    FLD(L, 4, uint8_t) = ocls;
    FLD(L, 5, uint8_t) = ncls;
    memcpy(L + 8, AT(GPTR(self, 0x48, char), 8), 32);   /* vldmia/vstmia: a bit copy */

    if (ocls != ncls) {
        uint32_t m = FLD(self, 0x48, uint32_t);
        ((vfn1)gp_ptr(vslot(m, 8)))(m);
        const uint32_t *pm = &data_006A33C8[e[0] * 2];
        int32_t adj = (int32_t)pm[1];
        uint32_t th = self_w + (uint32_t)(adj >> 1);
        uint32_t fn = (adj & 1) == 0 ? pm[0] : vslot(th, pm[0]);
        ((vfn1)gp_ptr(fn))(th);
    }

    if (id == 0x58 || id == 0x59) {
        if (FLD(self, 0xC9, uint8_t) == 0 && FLD(GPTR(self, 0x10, char), 0x434, uint32_t) != 0)
            FLD(self, 0x84, uint8_t) = 0;
        else
            FLD(self, 0x84, uint8_t) = 0xFF;
    }
    int mb = mode_byte(self, id, ncls, e, local[2]);
    if (mb >= 0)
        FLD(self, 0x84, uint8_t) = (uint8_t)mb;

    if (FLD(self, 0xC5, uint8_t) != 0 && id != 0 && id != 1)
        FLD(self, 0xC5, uint8_t) = 0;

    int32_t anim = FLD(e, 2, int16_t);
    if (anim == 0) {
        anim = func_0053F7CC((int)self_w);
        if (anim == 3)
            FLD(self, 0xC4, uint8_t) = 0;
    } else if (anim == 0x12) {
        if (FLD(GPTR(self, 0x18, char), 0x52, uint16_t) == 0x12)
            anim = -2;
    }

    float b = 1.0f;
    if (id == 1) {
        float k = FLD(GPTR(self, 0x10, char), 0x5B0, uint32_t) != 0x3F800000u ? 0.0855f : 0.095f;
        float s = k * FLD(GPTR(self, 0x14, char), 0x24, float);
        uint32_t h = FLD(GPTR(GPTR(self, 0x48, char), 0x44, char), 0, uint32_t);
        if (h != 0) {
            uint32_t a = (uint32_t)func_0052FBA0((int)(data_00706E20 + 0x3DBBC), h);
            if ((data_007260CC & 1) == 0 && func_00100174((int *)&data_007260CC) != 0)
                data_007260D0 = gp_u32(data_006F6314);
            if (a != 0 && ((vfn2)gp_ptr(vslot(a, 0)))(a, &data_007260D0) == 0)
                a = 0;
            if (a != 0) {
                float f = ((vfnf)gp_ptr(vslot(a, 0x60)))(a);
                s = f * s;
            }
        }
        uint32_t bits = s != s ? 0x7FC00000u : gp_f2u(s);   /* FPSCR.DN: default NaN */
        anim = (int32_t)bits > 0x3D851EB8 ? 10 : 7;
    }
    {
        int16_t cur = FLD(self, 0x42, int16_t);
        if (e[0] == 2 || cur == 0x11) b = 0.0f;
        else if (cur == 0x84 || cur == 0x88) b = 20.0f;
        else if (id == 5) b = 3.0f;
        else if (id == 0x17) b = 1.0f;
        else if (id == 0x4B) b = 5.0f;
        else if (id != 0x51) b = 6.0f;
    }
    uint8_t on = VCMP_NE(b, 0.0f) ? 1 : 0;
    uint32_t bi = (uint32_t)gp_vcvt_s32(b);
    if (FLD(self, 0xC5, uint8_t) == 0) {
        char *t = GPTR(self, 0x18, char);
        func_0028D580((uint32_t *)AT(t, 0x3C), anim, 1, on, bi);
        func_0028D580((uint32_t *)AT(t, 0x5C), anim, 1, on, bi);
    } else {
        func_0028D580((uint32_t *)AT(GPTR(self, 0x18, char), 0x5C), anim, 1, on, bi);
    }
    if ((FLD(e, 4, uint32_t) & 8) != 0 && func_0052E920((int)FLD(self, 0x10, uint32_t), id) != 0)
        func_0028D580((uint32_t *)AT(GPTR(self, 0x18, char), 0x3C), 0x59, 1, on, 6);
    func_0028C8EC((int)FLD(self, 0x18, uint32_t), 0, 0, 0);
    {
        uint32_t m = FLD(self, 0x48, uint32_t);
        ((vfn2)gp_ptr(vslot(m, 0x10)))(m, local);
    }
    FLD(self, 0x40, uint16_t) = FLD(self, 0x42, uint16_t);
    FLD(self, 0x42, int16_t) = (int16_t)id;
    FLD(self, 0x44, uint32_t) = 0;
    if (FLD(GPTR(self, 0x10, char), 0x344, uint32_t) != 0) {
        uint32_t o = gp_u32(e + 8);
        ((vfn1)gp_ptr(vslot(o, 8)))(o);
        int pair[2];
        pair[0] = (int)gp_u32(data_006F5988);
        pair[1] = (int)FLD(e, 0xC, uint32_t);
        func_0010DBBC((int)(FLD(self, 0x10, uint32_t) + 0x324), pair, 2, 0.0f);
    }
    return 1;
}
