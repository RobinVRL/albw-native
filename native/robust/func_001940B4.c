/* USA 001940B4 <- EU 001940B4: actor constructor (object with a 1-state StateMachine at +0x40C,
 * state "cState_Wait"; animation/model "mix"). Signature: (this, params) -> this.
 *
 * Sequence (from the disassembly):
 *   00150E40(this, params) base ctor; vtables data_006CDBB4 / +0x54 (at +0x320);
 *   0010A794(sm = this+0x40C) StateMachine ctor; sm+0x14..+0x2C = 0;
 *   +0x43C = 0054D964(this, 0)  (effect slot 0);  +0x440 = new(0x48) -> 004EDC9C;  +0x444 = 0;
 *   +0x430 = this->[0x2D0]->[0x1C8]; +0x434 = 0014E428(this,1,0,0,1,0,0); +0x438 = 0014E904(this,1,0);
 *   00169608(+0x438, 0, SafeString "mix", +0x430); 0016A02C(+0x438, -1, -1, 0);
 *   local list (002C11E8 layout: first 0, 10, 0) -> 0016898C(+0x438, &list);
 *   reset the blend weight of +0x438's track (f8 = 0, dirty b26 = 1);  00168E9C(+0x438, +0x434, 0);
 *   +0x440->[0x18] = +0x43C; 004EDAD0(+0x440, &this->[0x2CC]); +0x440->h[0x2C] = this->h[0x54];
 *   pos = this->[0x3D0..0x3D8]; +0x434->[0x164] |= 0x40000000;
 *   004D8AEC(+0x434 + 0x80, this->[0x3E8], &pos); 004CEAF0(+0x434);
 *   pos.y += 0.5; +0x43C->[4..0xC] = pos; 004356B4(+0x43C); 004A879C(*data_00709D28, +0x440, 2);
 *   StateMachine: 1 state, owner = this, PMF arrays from data_006A2784, 1 SafeString name buffer
 *   (__aeabi_vec_ctor 00100118 with 0010BDF0), this->[0x354] = sm, this->h[0x35A] = 1,
 *   name[0] = "cState_Wait" (bounded strlen 0x40000, clipped to the buffer size);
 *   changeState(0) inlined: exit(old) (none: current is -1 after ctor), log name via 0010BEB4,
 *   enter(0) called with the adjusted owner;  this->[0x2E0] |= 2;  return this.
 *
 * What was wrong in the Ghidra version:
 *  - float bit reinterpretations: `(float)puVar4[-0xf]` etc. (the pos copy, really ldr/str of
 *    words and one vldr/vadd/vstr) and `piVar13[1] = (int)fVar9` turned into numeric
 *    int<->float conversions natively: the effect position was garbage;
 *  - `in_s0` passed to 0054D964 is a phantom (see 003249E0);
 *  - enter(0) was called as `(*pcVar15)()`: the adjusted owner (r0) was dropped;
 *  - the SafeString {vtbl, names[0].buffer} built at sp for 0010BEB4 was dropped (Ghidra
 *    passed the address of an unwritten stack slot);
 *  - the list word built with `orr r0, r0, #0xff` (only the low byte defined) -> 002C11E8.
 * DEPENDENCIES: 0014E428 (native/robust rewrite) and 0014E904 return pointers in r0; 0014E904's
 * Ghidra definition is still void (needs a rewrite); 0010A794 and 004EDC9C are ctors typed void (ARM ctors return `this`: the known pointer
 * is used here instead).
 *
 * Verified instruction by instruction against EU 001940B4-0019462C (literal pool 00194474-
 * 0019449C; strings "mix" at 00194478 and "cState_Wait" at 001944A0). Confidence: medium-high. */
#include <stdbool.h>
#include "robust.h"
#include "sead.h"

void *func_00150E40(void *self, void *params);
void func_0010A794(void *sm);                                        /* ctor */
void *func_0054D964(void *self, uint32_t index);       /* native/robust */
void *func_0010BAB4(uint32_t size);
void func_004EDC9C(void *self);                                      /* ctor */
void *func_0014E428(void *self, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void *func_0014E904(void *self, int32_t a, int32_t b);
void func_00169608(void *self, uint32_t a, sead_SafeString *name, uint32_t b);
void func_0016A02C(void *self, int32_t a, int32_t b, void *c);
void func_002C11E8(char *list, uint32_t first, uint32_t v54, uint8_t v58);
void func_0016898C(void *self, void *list);
void func_00168E9C(char *self, char *model, int force);
void func_004EDAD0(void *self, void *arg);
void func_004D8AEC(float *dst, uint32_t a, float *pos);
void func_004CEAF0(void *self);
void func_004356B4(void *obj);
uint32_t func_004A879C(void *mgr, void *obj, uint32_t flag);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void (*ctor)(void *), uint32_t size, uint32_t count);
void func_0010BDF0(void *self);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);
void func_0010BEB4(void *logger, void *name);

extern char data_006CDBB4[];
extern char data_006F5988[];          /* sead::SafeString vtable */
extern void *data_00709D28;
extern const albw_pmf data_006A2784[4]; /* enter, exec, exit, default */

typedef void (*ss_fn)(sead_SafeString *);
typedef void (*state_fn1)(void *self);
typedef void (*state_fn2)(void *self, uint32_t next);

static void ss_assure(void *ss) {
    /* virtual assureTerminationImpl_ (vtable slot 2) */
    ss_fn f = (ss_fn)FLD(FLD(ss, 0, char *), 8, void *);
    f((sead_SafeString *)ss);
}

void *func_001940B4(void *self_, void *params) {
    char *t = func_00150E40(self_, params);
    FLD(t, 0x000, void *) = data_006CDBB4;
    FLD(t, 0x320, void *) = data_006CDBB4 + 0x54;
    char *sm = AT(t, 0x40C);
    func_0010A794(sm);
    for (int off = 0x14; off <= 0x2C; off += 4)
        FLD(sm, off, uint32_t) = 0;
    FLD(sm, 0x30, void *) = func_0054D964(t, 0);          /* +0x43C */
    void *p = func_0010BAB4(0x48);
    if (p) func_004EDC9C(p);
    FLD(t, 0x440, void *) = p;
    FLD(t, 0x444, uint8_t) = 0;
    FLD(t, 0x430, uint32_t) = FLD(FLD(t, 0x2D0, char *), 0x1C8, uint32_t);
    FLD(t, 0x434, void *) = func_0014E428(t, 1, 0, 0, 1, 0, 0);
    FLD(t, 0x438, void *) = func_0014E904(t, 1, 0);
    sead_SafeString mix = { data_006F5988, "mix" };
    func_00169608(FLD(t, 0x438, void *), 0, &mix, FLD(t, 0x430, uint32_t));
    func_0016A02C(FLD(t, 0x438, void *), -1, -1, NULL);
    char list[0x5C];
    func_002C11E8(list, 0, 10, 0);
    func_0016898C(FLD(t, 0x438, void *), list);
    char *trk = FLD(FLD(t, 0x438, char *), 0x14, char *);
    if (FLD(trk, 0x08, float) != 0.0f) {
        FLD(trk, 0x08, float) = 0.0f;
        FLD(trk, 0x26, uint8_t) = 1;
    }
    func_00168E9C(FLD(t, 0x438, char *), FLD(t, 0x434, char *), 0);
    FLD(FLD(t, 0x440, char *), 0x18, void *) = FLD(t, 0x43C, void *);
    uint32_t arg70 = FLD(t, 0x2CC, uint32_t);
    func_004EDAD0(FLD(t, 0x440, void *), &arg70);
    FLD(FLD(t, 0x440, char *), 0x2C, uint16_t) = FLD(t, 0x54, uint16_t);
    float pos[3];
    memcpy(pos, AT(t, 0x3D0), sizeof pos);                       /* ldm/stm: raw words */
    char *m = FLD(t, 0x434, char *);
    FLD(m, 0x164, uint32_t) |= 0x40000000u;
    func_004D8AEC((float *)AT(m, 0x80), FLD(t, 0x3E8, uint32_t), pos);
    func_004CEAF0(FLD(t, 0x434, void *));
    pos[1] = pos[1] + 0.5f;
    char *eff = FLD(t, 0x43C, char *);
    memcpy(AT(eff, 4), pos, sizeof pos);
    func_004356B4(eff);
    func_004A879C(data_00709D28, FLD(t, 0x440, void *), 2);

    /* ---- StateMachine (sm = this+0x40C): 1 state ---- */
    FLD(sm, 0x06, uint8_t) = 1;
    FLD(sm, 0x14, void *) = t;                                   /* owner */
    char *arr = func_0010BA78(0x10);
    FLD(sm, 0x18, char *) = arr;
    FLD(sm, 0x1C, char *) = arr + FLD(sm, 0x06, uint8_t) * 8;
    for (int i = 0; i < 1; i++) {                                /* loop count fixed at 1 */
        FLD(arr, i * 16, albw_pmf) = data_006A2784[3];
        FLD(arr, i * 16 + 8, albw_pmf) = data_006A2784[3];
    }
    uint32_t n = FLD(sm, 0x06, uint8_t);
    char *ex = func_0010BA78(n << 3);
    FLD(sm, 0x20, char *) = ex;
    for (uint32_t i = 0; i < n; i++)
        FLD(ex, i * 8, albw_pmf) = data_006A2784[2];
    {
        char *blk = func_0010CEE0(8 + 1 * 0x24, NULL, 4);
        char *names = NULL;
        if (blk) {
            FLD(blk, 0, uint32_t) = 0x24;
            FLD(blk, 4, uint32_t) = 1;
            names = func_00100118(blk + 8, func_0010BDF0, 0x24, 1);
        }
        if (names) {
            FLD(sm, 0x08, int32_t) = 1;
            FLD(sm, 0x0C, char *) = names;
        }
    }
    FLD(t, 0x354, void *) = sm;
    FLD(t, 0x35A, uint16_t) = 1;
    {
        sead_SafeString nm = { data_006F5988, "cState_Wait" };
        char *names = FLD(t, 0x418, char *);                     /* sm+0x0C */
        char *buf = FLD(names, 4, char *);
        ss_assure(&nm);
        int32_t len = 0;
        for (;;) {
            if (nm.mStringTop[len] == 0) {
                if (len > 0x40000) len = 0;
                break;
            }
            len++;
            if (len > 0x40000) { len = 0; break; }
        }
        if (FLD(names, 8, int32_t) <= len)
            len = FLD(names, 8, int32_t) - 1;
        ss_assure(&nm);
        func_0010E3C4(buf, nm.mStringTop, (uint32_t)len);
        buf[len] = 0;
    }
    FLD(FLD(t, 0x424, char *), 0, albw_pmf) = data_006A2784[0]; /* enter */
    FLD(FLD(t, 0x428, char *), 0, albw_pmf) = data_006A2784[1]; /* exec */
    FLD(FLD(t, 0x42C, char *), 0, albw_pmf) = data_006A2784[2]; /* exit */

    /* ---- changeState(0), inlined ---- */
    int8_t cur = FLD(sm, 0x04, int8_t);
    if (cur != -1) {
        const albw_pmf *x = (const albw_pmf *)(FLD(sm, 0x20, char *) + cur * 8);
        if (albw_pmf_valid(x)) {
            char *o = albw_pmf_this(x, FLD(sm, 0x14, void *));
            ((state_fn2)albw_pmf_fn(x, o))(o, 0);
        }
    }
    uint8_t prev = FLD(sm, 0x04, uint8_t);
    FLD(sm, 0x04, uint8_t) = 0;
    FLD(sm, 0x00, uint32_t) = 0;
    FLD(sm, 0x05, uint8_t) = prev;
    if (FLD(sm, 0x10, void *) != NULL) {
        char *nm0 = FLD(sm, 0x0C, char *);
        ss_assure(nm0);
        sead_SafeString s = { data_006F5988, FLD(nm0, 4, char *) };
        func_0010BEB4(FLD(sm, 0x10, void *), &s);
    }
    {
        int8_t ns = FLD(sm, 0x04, int8_t);
        const albw_pmf *en = (const albw_pmf *)(FLD(sm, 0x18, char *) + ns * 8);
        if (albw_pmf_valid(en)) {
            char *o = albw_pmf_this(en, FLD(sm, 0x14, void *));
            ((state_fn1)albw_pmf_fn(en, o))(o);
        }
    }
    FLD(t, 0x2E0, uint32_t) |= 2;
    return t;
}
