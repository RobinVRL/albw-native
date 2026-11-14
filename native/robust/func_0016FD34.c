/* USA 0016FD34 <- EU 0016FD34: TileIce actor constructor (a group of ice tiles, one 0x3C-byte
 * record per placement entry; collision "Actor/TileIce.kcl", animation "crack").
 * Signature: (this, params, r2, r3) -> this  (r2/r3 go straight to the base ctor 001E56CC).
 *
 * Sequence (from the disassembly):
 *   001E56CC base ctor; vtables data_006C8A1C / +0x74; tiles {count +0x61C, data +0x620} = 0;
 *   f[0x624] = 0.0; 001E518C(this, params, 1, 0, 0);
 *   n = +0x478: tiles = __aeabi_vec_ctor(0010CEE0(n*0x3C, 0, 4), 0016F8C4, 0x3C, n);
 *   for each placement entry i (array +0x480, n entries):
 *     part = i < +0x604 ? (+0x60C)[i] : NULL; part->vtbl[0x10](part, 0x24); tile(i)->[0x20] = part;
 *     k = new(0x48) -> 004EDC9C; FixedSafeString<64> "Actor/TileIce.kcl" (00111A20 format);
 *     004EDC5C(k, &name); 004EDAB0(k, &entry->pos); 004ED9C8(k); 004EDAD0(k, &this->[0x2CC]);
 *     004EDB1C(k, i); k->h[0x2C] = this->h[0x54];
 *     tile->[4] = tile, tile->[8..0xC] = PMF data_0069E854[0]; k->[0x28] = tile;
 *     004A879C(*data_00709D28, k, 2); tile->[0x24] = k;
 *     e = 0054D964(this, 0): e->pos = entry->pos + {0, 0.25, 0}; e->f[0x58] = e->f[0x60] = 2.0;
 *     004356B4(e); e->h[0x28] = 0x220; tile->[0x2C] = e;
 *     tile->[0x14] = tile, tile->[0x18..0x1C] = PMF data_0069E854[1]; tile->[0x30] = entry->[8];
 *     m = new(0xA8) -> 0016A2FC(m, 1, copy of SafeString data_00725974, 1) (NULL if no memory);
 *     00169608(m, 0, "crack", saved this->[0x2D0]->[0x1C8]); 0016A02C(m, -1, -1, 0);
 *     local list (002C11E8 layout with 0, 0, 0) -> 0016898C(m, &list); tile->[0x28] = m;
 *     tile b[0x34] = 0, b[0x35] = 0x3C, b[0x36] = i, b[0x37] = b[0x38] = 0;
 *     if (entry->h[0x2E] == 1) { b[0x3B] = 1; b[0x34] = 3; 004CF478(tile->[0x20], 0, 0);
 *                                004A8304(*data_00709D28, tile->[0x24]); } else b[0x3B] = 0;
 *   return this.
 *   tile(i) = i < count ? data + i*0x3C : data  (the ARM bounds idiom, repeated per access).
 *
 * What was wrong in the Ghidra version:
 *  - float bit reinterpretations: the PMF pair copied through s0/s1 (`vldmia/vstmia`) came out
 *    as CONCAT44 + `(float)uVar` and `(int)(fVar13 + (float)uVar17)` (the +0.25 on the effect y),
 *    i.e. numeric int<->float conversions natively;
 *  - `unaff_r9`: the list word built with `orr sb, sb, #0xff` (sb = caller's r9, only the low
 *    byte is defined) -> 002C11E8 layout;
 *  - `in_s0` passed to 0054D964 is a phantom (see 003249E0).
 * DEPENDENCY: 004EDC9C is a ctor typed void (allocated pointer used: ARM ctors return `this`).
 *
 * Verified instruction by instruction against EU 0016FD34-001702FC (strings at 0017012C and
 * 0017014C; data_0069E854 = two PMFs {0016F814, 0}, {0016F7D4, 0} (EU addresses)).
 * Confidence: medium-high. */
#include <stdbool.h>
#include "robust.h"
#include "sead.h"

void *func_001E56CC(void *self, void *params, void *r2, uint32_t r3);
void func_001E518C(void *self, void *params, uint32_t a, uint32_t b, uint32_t c);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void (*ctor)(void *), uint32_t size, uint32_t count);
void func_0016F8C4(void *self);
void *func_0010BAB4(uint32_t size);
void func_004EDC9C(void *self);                                      /* ctor */
int32_t func_00111A20(void *fixedSafeString, const char *format, void *args);
void func_004EDC5C(void *self, void *name);
void func_004EDAB0(void *self, const float *pos);
void func_004ED9C8(void *self);
void func_004EDAD0(void *self, void *arg);
void func_004EDB1C(void *self, uint16_t v);
uint32_t func_004A879C(void *mgr, void *obj, uint32_t flag);
void *func_0054D964(void *self, uint32_t index);       /* native/robust */
void func_004356B4(void *obj);
void *func_0016A2FC(void *self, int32_t a, void *b, int32_t c);
void func_00169608(void *self, uint32_t a, sead_SafeString *name, uint32_t b);
void func_0016A02C(void *self, int32_t a, int32_t b, void *c);
void func_002C11E8(char *list, uint32_t first, uint32_t v54, uint8_t v58);
void func_0016898C(void *self, void *list);
uint32_t func_004CF478(void *self, int32_t a, int32_t b);
void func_004A8304(void *mgr, void *obj);

extern char data_006C8A1C[];
extern char data_006F6FE8[];            /* FixedSafeString vtable */
extern char data_006F5988[];            /* sead::SafeString vtable */
extern const albw_pmf data_0069E854[2];
extern void *data_00709D28;
extern char data_00725974[];            /* a sead::SafeString object */

static char *tile(char *t, uint32_t i) {
    char *d = FLD(t, 0x620, char *);
    return i < FLD(t, 0x61C, uint32_t) ? d + i * 0x3C : d;
}

static void ss_assure(void *ss) {
    void (*f)(void *) = (void (*)(void *))FLD(FLD(ss, 0, char *), 8, void *);
    f(ss);
}

void *func_0016FD34(void *self_, void *params, void *r2, uint32_t r3) {
    char *t = func_001E56CC(self_, params, r2, r3);
    FLD(t, 0x000, void *) = data_006C8A1C;
    FLD(t, 0x320, void *) = data_006C8A1C + 0x74;
    FLD(t, 0x61C, uint32_t) = 0;
    FLD(t, 0x620, char *) = NULL;
    FLD(t, 0x624, float) = 0.0f;
    char *res2d0 = FLD(t, 0x2D0, char *);
    func_001E518C(t, params, 1, 0, 0);
    int32_t n = FLD(t, 0x478, int32_t);
    if (n > 0) {
        char *blk = func_0010CEE0((uint32_t)n * 0x3C, NULL, 4);
        char *arr = NULL;
        if (blk) arr = func_00100118(blk, func_0016F8C4, 0x3C, (uint32_t)n);
        if (arr) {
            FLD(t, 0x620, char *) = arr;
            FLD(t, 0x61C, int32_t) = n;
        }
    }
    char **ent = FLD(t, 0x480, char **);
    char **end = (char **)AT(ent, FLD(t, 0x478, int32_t) * 4);
    uint32_t va_dummy[4] = {0};              /* sp+0xC: va_list for a format with no specifiers */
    for (uint32_t i = 0; ent != end; ent = (char **)AT(ent, 4), i++) {
        char *part = i < FLD(t, 0x604, uint32_t) ? FLD(FLD(t, 0x60C, char *), i * 4, char *) : NULL;
        ((void (*)(void *, int32_t))FLD(FLD(part, 0, char *), 0x10, void *))(part, 0x24);
        FLD(tile(t, i), 0x20, char *) = part;

        char *k = func_0010BAB4(0x48);
        if (k) func_004EDC9C(k);
        struct { void *vtbl; char *buf; int32_t cap; char data[0x40]; } fs;
        fs.vtbl = data_006F6FE8;
        fs.buf = fs.data;
        fs.cap = 0x40;
        fs.data[0x3F] = 0;
        fs.data[0] = 0;
        func_00111A20(&fs, "Actor/TileIce.kcl", va_dummy);
        func_004EDC5C(k, &fs);
        func_004EDAB0(k, (const float *)AT(*ent, 4));
        func_004ED9C8(k);
        uint32_t argfc = FLD(t, 0x2CC, uint32_t);
        func_004EDAD0(k, &argfc);
        func_004EDB1C(k, (uint16_t)i);
        FLD(k, 0x2C, uint16_t) = FLD(t, 0x54, uint16_t);
        char *tl = tile(t, i);
        FLD(tl, 0x04, char *) = tl;
        FLD(tl, 0x08, albw_pmf) = data_0069E854[0];
        FLD(k, 0x28, char *) = tile(t, i);
        func_004A879C(data_00709D28, k, 2);
        FLD(tile(t, i), 0x24, char *) = k;

        char *e = func_0054D964(t, 0);
        char *p = *ent;
        FLD(e, 0x04, uint32_t) = FLD(p, 0x04, uint32_t);
        FLD(e, 0x08, float) = FLD(p, 0x08, float) + 0.25f;
        FLD(e, 0x0C, float) = FLD(p, 0x0C, float);
        FLD(e, 0x60, float) = 2.0f;
        FLD(e, 0x58, float) = 2.0f;
        func_004356B4(e);
        FLD(e, 0x28, uint16_t) = 0x220;
        FLD(tile(t, i), 0x2C, char *) = e;
        tl = tile(t, i);
        FLD(tl, 0x14, char *) = tl;
        FLD(tl, 0x18, albw_pmf) = data_0069E854[1];
        FLD(tile(t, i), 0x30, uint32_t) = FLD(*ent, 0x08, uint32_t);

        char *m = func_0010BAB4(0xA8);
        if (m) {
            ss_assure(data_00725974);
            sead_SafeString ss = { data_006F5988, FLD(data_00725974, 4, char *) };
            m = func_0016A2FC(m, 1, &ss, 1);
        }
        sead_SafeString crack = { data_006F5988, "crack" };
        func_00169608(m, 0, &crack, FLD(res2d0, 0x1C8, uint32_t));
        func_0016A02C(m, -1, -1, NULL);
        char list[0x5C];
        func_002C11E8(list, 0, 0, 0);
        func_0016898C(m, list);
        FLD(tile(t, i), 0x28, char *) = m;
        FLD(tile(t, i), 0x34, uint8_t) = 0;
        FLD(tile(t, i), 0x35, uint8_t) = 0x3C;
        FLD(tile(t, i), 0x36, uint8_t) = (uint8_t)i;
        FLD(tile(t, i), 0x37, uint8_t) = 0;
        FLD(tile(t, i), 0x38, uint8_t) = 0;
        if (FLD(*ent, 0x2E, uint16_t) == 1) {
            FLD(tile(t, i), 0x3B, uint8_t) = 1;
            tl = tile(t, i);
            FLD(tl, 0x34, uint8_t) = 3;
            func_004CF478(FLD(tl, 0x20, void *), 0, 0);
            func_004A8304(data_00709D28, FLD(tl, 0x24, void *));
        } else {
            FLD(tile(t, i), 0x3B, uint8_t) = 0;
        }
    }
    return t;
}
