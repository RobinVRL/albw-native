/* USA 0032740C <- EU 003273E8: actor constructor (0x4B8+ object; created by 00606C44 and
 * 00606CC0, which use the returned pointer). Signature (r0..r3): (this, params, name, r3);
 * `name` (r2) is a C string (stored in a sead::SafeString), NULL for 00606CC0.
 *
 * What was wrong in the Ghidra version (several independent defects):
 *  1. Ghidra marked 004ECF6C as "does not return", so everything after it was cut: the
 *     flag updates at +0x2E0 / +0x47A and `return this`. Natively the function fell off the
 *     end (declared void) and both callers used a garbage pointer.
 *  2. `fparam_0` stored at +0x498 is the float RETURN (s0) of 0054DE3C(this, 0, 1); Ghidra typed
 *     0054DE3C `void(void)` and dropped its arguments.
 *  3. extraout_r1 passed to 00326DAC: phantom (00326DAC only forwards r1-r3 to 00169A80, which
 *     ignores them); the asm passes only r0.
 *  4. The word at sp+0x2C of the local list is built with `orr r0, r5, #0xff` (only the low
 *     byte is defined: same inline list init as 002C11E8); reproduced by calling 002C11E8.
 *  5. `mov r1, r6` before operator new(0x48): r6 is the caller's register, a phantom 2nd arg
 *     (0010BAB4 takes only the size). Ignored.
 *
 * DEPENDENCIES: 0014E428 (pointer in r0, stored at +0x490) and 0054DE3C (float in s0, stored
 *  at +0x498) were void in Ghidra; both now have native/robust rewrites returning the value.
 *  The ctors 004EDC9C / 001663BC are also typed void, but ARM C++ ctors return `this`, so the
 *  allocated pointer is used directly here (same value as the ARM r0).
 *
 * Verified instruction by instruction against EU 003273E8-00327924 (incl. the literal pool at
 * 0032776C-003277AC, Shift-JIS name at 0032777C, PMF pair data_006942FC = {003272B0, 0}).
 * Confidence: medium-high (straight transcription; correctness at runtime also needs the two
 * dependencies above). */
#include <stdbool.h>
#include "robust.h"
#include "sead.h"

void *func_00324A30(void *self, void *params, const char *name, uint32_t r3);
void *func_0010BAB4(uint32_t size);
void func_004EDC9C(void *self);                                     /* ctor */
void func_001663BC(void *self, sead_SafeString *name, uint32_t a, uint8_t b, uint8_t c); /* ctor */
void *func_003C30DC(void *self, void *owner, void *pos, uint8_t flag, float a, float b);
void *func_0014E428(void *self, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void *func_0016A2FC(void *self, int32_t a, void *b, int32_t c);
void func_00169608(void *self, uint32_t a, sead_SafeString *name, uint32_t b);
void func_0016A02C(void *self, int32_t a, int32_t b, void *c);
void func_002C11E8(char *list, uint32_t first, uint32_t v54, uint8_t v58);
void func_0016898C(void *self, void *list);
void func_003249E0(char *self, uint32_t index);
void func_00324964(void *self);
float func_0054DE3C(void *self, uint32_t idx, int32_t axis);        /* float in s0 */
void func_004EDAD0(void *self, void *arg);
void func_004ED9C8(void *self);
void func_004A7F00(void *mgr, void *obj, uint32_t flag);
bool func_00588BF0(void *self, int32_t which);
void func_003249B4(void *self);
void func_0032651C(void *self, int32_t state);
void func_004CEA18(void *self, int32_t a, int32_t b);
void func_00588C14(void *self, int32_t a, int32_t b);
void func_00326DAC(void *self);
void func_004ECF6C(void *self);

extern char data_006E0CD8[];       /* vtable */
extern char *data_0070D858;        /* game-state singleton pointer */
extern char data_006F5988[];       /* sead::SafeString vtable */
extern const albw_pmf data_006942FC[2];
extern char data_006F4A70[];
extern char data_006E911C[];
extern char data_00725974[];
extern void *data_00709D28;

static const char k_name[] = "\x95\xf3\x94\xa0\x83\x43\x83\x78\x83\x93\x83\x67"; /* EU 0032777C */

void *func_0032740C(void *self_, void *params, const char *name, uint32_t r3) {
    char *t = func_00324A30(self_, params, name, r3);
    FLD(t, 0x320, void *) = data_006E0CD8 + 0x5C;
    FLD(t, 0x000, void *) = data_006E0CD8;
    FLD(t, 0x475, uint8_t) = 0;
    FLD(t, 0x476, uint8_t) = (FLD(data_0070D858, 0x2B4, uint32_t) & 8) != 0;
    FLD(t, 0x477, uint8_t) = 0;
    FLD(t, 0x478, uint8_t) = 0;
    FLD(t, 0x479, uint8_t) = 0;
    FLD(t, 0x47A, uint8_t) = 0;
    FLD(t, 0x48C, uint8_t) = 4;
    FLD(t, 0x490, void *) = NULL;
    FLD(t, 0x494, void *) = NULL;
    FLD(t, 0x498, float) = 1.0f;

    void *p = func_0010BAB4(0x48);
    if (p) func_004EDC9C(p);
    FLD(t, 0x49C, void *) = p;

    void *q = func_0010BAB4(0x108);
    if (q) {
        sead_SafeString s = { data_006F5988, k_name };
        func_001663BC(q, &s, FLD(t, 0x2CC, uint32_t), 7, 1);
    }
    FLD(t, 0x4A0, void *) = q;
    FLD(t, 0x4A4, uint32_t) = 0;
    FLD(t, 0x4AC, uint32_t) = 0;
    FLD(t, 0x4B0, albw_pmf) = data_006942FC[1];
    FLD(t, 0x4A8, void *) = data_006F4A70;

    char *sub = func_003C30DC(AT(t, 0x4B8), t, AT(t, 0x3D0), 0, 0.7f, 0.5f);
    FLD(sub, 0x00, void *) = data_006E911C;
    FLD(sub, 0x7C, uint16_t) = 0;
    FLD(sub, 0x80, uint32_t) = 0;
    t = sub - 0x4B8;

    if (name == NULL) {
        FLD(t, 0x490, void *) = func_0014E428(t, 0, 0, 0, 1, 0, 0);
    } else {
        FLD(t, 0x490, void *) = func_0014E428(t, 1, 0, 0, 1, 0, 0);
        void *r = func_0010BAB4(0xA8);
        if (r) r = func_0016A2FC(r, 1, data_00725974, 1);
        FLD(t, 0x494, void *) = r;
        sead_SafeString s = { data_006F5988, name };
        func_00169608(FLD(t, 0x494, void *), 0, &s,
                      FLD(FLD(t, 0x2D0, char *), 0x1C8, uint32_t));
        func_0016A02C(FLD(t, 0x494, void *), -1, -1, NULL);
        char list[0x5C];   /* sp+0x0C .. sp+0x67 */
        func_002C11E8(list, 0, 10, 0);
        func_0016898C(FLD(t, 0x494, void *), list);
    }
    FLD(t, 0x3EC, void *) = AT(t, 0x4A8);
    func_003249E0(t, 0);
    func_00324964(t);
    if (FLD(t, 0x40C, void *) != NULL)
        FLD(t, 0x498, float) = func_0054DE3C(t, 0, 1);
    char *e = FLD(t, 0x40C, char *);
    FLD(e, 0x28, uint16_t) = 0x60;
    FLD(e, 0x2C, uint32_t) = (FLD(e, 0x2C, uint32_t) & ~0x700u) | 0x200;
    FLD(e, 0x2C, uint32_t) = (FLD(e, 0x2C, uint32_t) & ~0x1800u) | 0x1000;
    FLD(e, 0x2C, uint32_t) |= 0x80;
    FLD(FLD(t, 0x49C, char *), 0x18, void *) = FLD(t, 0x40C, void *);
    uint32_t arg68 = FLD(t, 0x2CC, uint32_t);
    func_004EDAD0(FLD(t, 0x49C, void *), &arg68);
    func_004ED9C8(FLD(t, 0x49C, void *));
    FLD(FLD(t, 0x49C, char *), 0x2C, uint16_t) = FLD(t, 0x54, uint16_t);
    func_004A7F00(data_00709D28, FLD(t, 0x49C, void *), 1);

    int32_t state = 4;
    FLD(t, 0x479, uint8_t) = FLD(t, 0x30, uint16_t) == 1;
    uint32_t has36 = FLD(t, 0x36, uint16_t) != 0;
    uint32_t sb = func_00588BF0(t, 0) ? 1 : 0;
    int16_t k = FLD(t, 0x32, int16_t);
    if (k == 1) {
        state = 5;
        func_003249B4(t);
    } else if (k == 2) {
        state = 6;
    }
    if (FLD(t, 0x476, uint8_t) == 1) {
        state = 7;
    } else if (state == 4) {
        if (has36 & ~sb) state = 0;
    } else if (has36 & sb) {
        if (state == 5) func_00324964(t);
        else if (state == 6) FLD(t, 0x3D4, float) = FLD(t, 0x3D4, float) + 2.5f;
        state = 4;
    }
    func_0032651C(t, state);
    if (func_00588BF0(t, 1)) {
        FLD(t, 0x475, uint8_t) = 1;
        char *o = FLD(t, 0x494, char *);
        if (o) {
            char *c = FLD(o, 0x14, char *);
            if (FLD(c, 0x08, float) != 0.0f) {
                FLD(c, 0x08, float) = 0.0f;
                FLD(c, 0x26, uint8_t) = 1;
            }
        }
        func_004CEA18(FLD(t, 0x490, void *), 0, 0);
        func_004CEA18(FLD(t, 0x490, void *), 0, 1);
        func_00588C14(t, 1, 1);
        func_003249B4(t);
        if (FLD(t, 0x476, uint8_t) == 1)
            FLD(data_0070D858, 0x2E3, uint8_t) += 1;
    }
    func_00326DAC(t);
    FLD(t, 0x4A4, uint32_t) = 0;
    FLD(t, 0x4AC, void *) = t;
    FLD(t, 0x4B0, albw_pmf) = data_006942FC[0];
    func_004ECF6C(t);
    if (FLD(t, 0x2E, uint16_t) != 2)
        FLD(t, 0x2E0, uint32_t) |= 9;
    if (FLD(t, 0x32, uint16_t) == 1)
        FLD(t, 0x47A, uint8_t) = 1;
    return t;
}
