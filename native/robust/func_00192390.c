/* USA 00192390 <- EU 00192390: IceFloor actor constructor (sound "SE_IceFloor_GROW", model
 * animations "solid_on"/"solid_off"). Signature: (this, params) -> this.
 *
 * Sequence (from the disassembly):
 *   00150E40 base ctor; vtables data_006CD980 / +0x54; +0x40C = new(0x48) -> 004EDC9C;
 *   +0x410 = 0054D964(this, 0); +0x418 = +0x41C = +0x420 = 0; b[0x429] = 1;
 *   pos.y (+0x3D4) += 0.5 (the original pos is kept for the effect);
 *   b[0x427] = params->f[0x44] != 0; +0x418 = 360; +0x414 = params->[0x10] (a float, the size);
 *   b[0x428] = (Random::getU32(*data_00715388) * 4) >> 32  (0..3);
 *   effect +0x410: f[0x58] = size, f[0x5C] = 0.5, f[0x60] = size, h[0x28] = 0x2C1,
 *                  pos = {x, y_orig + 0.25, z}; 004356B4(effect);
 *   +0x40C->[0x18] = effect; 004ED9C8; 004EDAD0(&this->[0x2CC]); h[0x2C] = this->h[0x54];
 *   004A7F00(*data_00709D28, +0x40C, 0); +0x41C = 0014E428(this,1,0,0,1,0,0);
 *   +0x420 = new(0xA8) -> 0016A2FC(p, 2, data_00725974, 1); 00169608 x2 (anims 0/1);
 *   0016A02C(+0x420,-1,-1,0); local list (002C11E8 layout) -> 0016898C; reset track weight,
 *   track f[0x10] = 1.0; b[0x424] = 1, b[0x425] = b[0x426] = 0; 00191C90(this);
 *   own AABB = pos -/+ {size*0.5 - 0.005, 1.0, size*0.5 - 0.005}; walk the actor list
 *   (005841A8 iterator over mgr = *data_00706E20, end = mgr->[0x3DBC8]); for each actor of the
 *   runtime type data_0072797C (static, lazily set to data_006F5D5C under guard 00100174) with
 *   b[0x41C] == 1, build its AABB the same way from 0058C364()'s size vector; on overlap
 *   clamp +0x418 to <= 0x15 and stop;  00150A84(this, "SE_IceFloor_GROW", 0);  return this.
 *
 * What was wrong in the Ghidra version:
 *  - float bit reinterpretations turned into numeric conversions natively:
 *    `(float)piVar2[0xf5]` (pos.y), `piVar2[0xf5] = (int)(... + 0.5)`, `(float)param_2[0x11]`,
 *    `(float)piVar2[0x105]` (size), and the AABB values packed by Ghidra into 64-bit
 *    CONCAT44 pairs read back with `(float)uVarN` / `(float)(uVarN >> 32)`;
 *  - `in_s0` passed to 0054D964 is a phantom (see 003249E0);
 *  - the list word built with `orr r0, r5, #0xff` (low byte only) -> 002C11E8;
 *  - 0058C364 / 00191C90 got phantom arguments (they take none / only this).
 * DEPENDENCIES: 0014E428 returns a pointer (r0; native/robust rewrite returns it);
 * 004EDC9C is a ctor typed void (the allocated pointer is used: ARM ctors return `this`).
 *
 * Verified instruction by instruction against EU 00192390-001928CC (vnmls = a*b - c; the
 * vcmpe/hi/lt chain at 00192824 is reproduced with NaN behaving as "no overlap", as in VFP).
 * Confidence: medium-high. */
#include <stdbool.h>
#include "robust.h"
#include "sead.h"

void *func_00150E40(void *self, void *params);
void *func_0010BAB4(uint32_t size);
void func_004EDC9C(void *self);                                      /* ctor */
void *func_0054D964(void *self, uint32_t index);       /* native/robust */
uint32_t func_00111A64(void *random);
void func_004356B4(void *obj);
void func_004ED9C8(void *self);
void func_004EDAD0(void *self, void *arg);
void func_004A7F00(void *mgr, void *obj, uint32_t flag);
void *func_0014E428(void *self, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void *func_0016A2FC(void *self, int32_t a, void *b, int32_t c);
void func_00169608(void *self, uint32_t a, sead_SafeString *name, uint32_t b);
void func_0016A02C(void *self, int32_t a, int32_t b, void *c);
void func_002C11E8(char *list, uint32_t first, uint32_t v54, uint8_t v58);
void func_0016898C(void *self, void *list);
void func_00191C90(void *self);
void func_00115C70(float *dst, const float *a, const float *b);      /* dst = a - b */
void func_00115C54(float *dst, const float *a, const float *b);      /* dst = a + b */
void **func_005841A8(void *mgr, uint32_t a, void **it);
float *func_0058C364(void);
int func_00100174(int32_t *guard);                                   /* __cxa_guard_acquire */
void func_00150A84(void *self, sead_SafeString *name, int32_t a);

extern char data_006CD980[];
extern void *data_00715388;            /* Random */
extern void *data_00709D28;
extern char data_00725974[];
extern char data_006F5988[];           /* sead::SafeString vtable */
extern char *data_00706E20;            /* actor manager */
extern uint32_t data_006933D0;
extern int32_t data_00727978;          /* guard */
extern void *data_0072797C;            /* static runtime-type tag */
extern char data_006F5D5C[];

typedef int (*isderived_fn)(void *self, void *type);

void *func_00192390(void *self_, char *params) {
    char *t = func_00150E40(self_, params);
    FLD(t, 0x320, void *) = data_006CD980 + 0x54;
    FLD(t, 0x000, void *) = data_006CD980;
    void *p = func_0010BAB4(0x48);
    if (p) func_004EDC9C(p);
    FLD(t, 0x40C, void *) = p;
    FLD(t, 0x410, void *) = func_0054D964(t, 0);
    FLD(t, 0x418, int32_t) = 0;
    FLD(t, 0x41C, void *) = NULL;
    FLD(t, 0x420, void *) = NULL;
    FLD(t, 0x429, uint8_t) = 1;
    float px = FLD(t, 0x3D0, float), py = FLD(t, 0x3D4, float), pz = FLD(t, 0x3D8, float);
    FLD(t, 0x3D4, float) = py + 0.5f;
    FLD(t, 0x427, uint8_t) = FLD(params, 0x44, float) != 0.0f;
    FLD(t, 0x418, int32_t) = 0x168;
    FLD(t, 0x414, uint32_t) = FLD(params, 0x10, uint32_t);
    FLD(t, 0x428, uint8_t) = (uint8_t)(((uint64_t)func_00111A64(data_00715388) * 4) >> 32);
    char *eff = FLD(t, 0x410, char *);
    float size = FLD(t, 0x414, float);
    FLD(eff, 0x58, float) = size;
    FLD(eff, 0x5C, float) = 0.5f;
    FLD(eff, 0x60, float) = size;
    FLD(eff, 0x28, uint16_t) = 0x2C1;
    FLD(eff, 0x04, float) = px;
    FLD(eff, 0x08, float) = py + 0.25f;
    FLD(eff, 0x0C, float) = pz;
    func_004356B4(eff);
    FLD(FLD(t, 0x40C, char *), 0x18, void *) = FLD(t, 0x410, void *);
    func_004ED9C8(FLD(t, 0x40C, void *));
    uint32_t arg80 = FLD(t, 0x2CC, uint32_t);
    func_004EDAD0(FLD(t, 0x40C, void *), &arg80);
    FLD(FLD(t, 0x40C, char *), 0x2C, uint16_t) = FLD(t, 0x54, uint16_t);
    func_004A7F00(data_00709D28, FLD(t, 0x40C, void *), 0);
    FLD(t, 0x41C, void *) = func_0014E428(t, 1, 0, 0, 1, 0, 0);
    void *q = func_0010BAB4(0xA8);
    if (q) q = func_0016A2FC(q, 2, data_00725974, 1);
    FLD(t, 0x420, void *) = q;
    sead_SafeString ss = { data_006F5988, "solid_on" };
    func_00169608(FLD(t, 0x420, void *), 0, &ss, FLD(FLD(t, 0x2D0, char *), 0x1C8, uint32_t));
    ss.mStringTop = "solid_off";
    func_00169608(FLD(t, 0x420, void *), 1, &ss, FLD(FLD(t, 0x2D0, char *), 0x1C8, uint32_t));
    func_0016A02C(FLD(t, 0x420, void *), -1, -1, NULL);
    char list[0x5C];
    func_002C11E8(list, 0, 10, 0);
    func_0016898C(FLD(t, 0x420, void *), list);
    char *trk = FLD(FLD(t, 0x420, char *), 0x14, char *);
    if (FLD(trk, 0x08, float) != 0.0f) {
        FLD(trk, 0x08, float) = 0.0f;
        FLD(trk, 0x26, uint8_t) = 1;
    }
    FLD(FLD(FLD(t, 0x420, char *), 0x14, char *), 0x10, float) = 1.0f;
    FLD(t, 0x424, uint8_t) = 1;
    FLD(t, 0x425, uint8_t) = 0;
    FLD(t, 0x426, uint8_t) = 0;
    func_00191C90(t);

    /* own AABB */
    float half = FLD(t, 0x414, float) * 0.5f - 0.005f;      /* vnmls: a*b - c */
    float h[3] = { half, 1.0f, half };
    float mn[3], mx[3];
    func_00115C70(mn, (float *)AT(t, 0x3D0), h);
    func_00115C54(mx, (float *)AT(t, 0x3D0), h);
    char *mgr = data_00706E20;
    void **it = func_005841A8(mgr, data_006933D0, FLD(mgr, 0x3DBC0, void **));
    void **end = FLD(mgr, 0x3DBC8, void **);
    if (it != end) {
        do {
            char *a = *it;
            if ((data_00727978 & 1) == 0 && func_00100174(&data_00727978))
                data_0072797C = data_006F5D5C;              /* (no guard release in this build) */
            if (a != NULL && ((isderived_fn)FLD(FLD(a, 0, char *), 0, void *))(a, &data_0072797C) == 0)
                a = NULL;
            if (a != NULL && FLD(a, 0x41C, uint8_t) == 1) {
                float *v = func_0058C364();
                float h2[3];
                h2[0] = v[0] * 0.5f - 0.005f;
                h2[1] = 1.0f;
                h2[2] = v[2] * 0.5f - 0.005f;
                float omn[3], omx[3];
                func_00115C70(omn, (float *)AT(a, 0x3D0), h2);
                func_00115C54(omx, (float *)AT(a, 0x3D0), h2);
                if (omn[0] <= mx[0] && mn[0] <= omx[0] &&
                    mx[1] >= omn[1] && mn[1] <= omx[1] &&
                    mx[2] >= omn[2] && mn[2] <= omx[2]) {
                    if (FLD(t, 0x418, int32_t) > 0x15)
                        FLD(t, 0x418, int32_t) = 0x15;
                    break;
                }
            }
            it = func_005841A8(data_00706E20, data_006933D0, (void **)AT(it, 4));
        } while (it != end);
    }
    ss.mStringTop = "SE_IceFloor_GROW";
    func_00150A84(t, &ss, 0);
    return t;
}
