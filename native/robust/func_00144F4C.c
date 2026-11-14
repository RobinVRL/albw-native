/* USA 00144F4C <- EU 00144F4C: actor constructor with a 4-state StateMachine at +0x790
 * (cState_Wait / cState_Rail / cState_Fall / cState_SceneChange; animation "fall").
 * Signature: (this, params, r2, r3) -> this; the base ctor 001E6CEC gets (this, params, 0x10, r3).
 *
 * Sequence (from the disassembly):
 *   001E6CEC base ctor; vtables data_006C7944 / +0x98; +0x78C = 0; 0010A794(sm = this+0x790);
 *   sm+0x14..+0x24 = 0; +0x7B8 = 0054D964(this, 1); +0x7BC = new(0x48) -> 004EDC9C; +0x7C0 = 0;
 *   +0x7C4 = params->[0x1C]; b[0x7C8] = 0x7F; b[0x7C9..0x7CB] = 0;
 *   b[0x7C9] = index of 00588BE4(this) in {*data_0069318C .. *data_006931A4} (0..6, else 0);
 *   003249E0(this, 0); +0x788 = this->[0x2D0]->[0x1C8]; +0x78C = 0014E428(this,1,0,0,1,0,0);
 *   +0x78C->[0x164] |= 0x90000; for i < +0x78C->[0x20]->[4]: 004D01E0(+0x78C, 1, i);
 *   if (b[0x7C9] != 1) { if (0053B530(*data_0070C8E0, params->[0x29C], params->[0x2A0])) {
 *         +0x7C0 = new(0x88) -> 002758CC(o, params);
 *         if (params->h[0x32] == 0 && params->h[0x34] == 0) b[0x7CB] = 1; } }
 *   else { +0x7B4 = 0014E904(this, 1, 1); 00169688(+0x7B4, 0, "fall", +0x788);
 *          0016A02C(+0x7B4, -1, -1, 0); local list (002C11E8 layout 0,0,0) -> 0016898C;
 *          +0x7B4->[0x14]->f[0x10] = 0; 00168E9C(+0x7B4, +0x78C, 0); }
 *   StateMachine: owner = this, 4 states, PMF tables from data_006A257C, 4 name buffers
 *   (00100118 / 0010BDF0), this->[0x354] = sm, this->h[0x35A] = 4, the 4 names copied in
 *   (bounded strlen 0x40000, clipped to the buffer size);
 *   00657808(sm, b[0x7C9] == 1 ? 2 : +0x7C0 ? 1 : 0) (changeState);
 *   pos = this->[0x3D0..]; +0x78C->[0x164] |= 0x40000000; 004D7EB0(+0x78C+0x80, +0x7C4,
 *   this->[0x3E8], &pos); 004CEAF0(+0x78C); 00491624(+0x7B8+0x64, 0, this->[0x3E8], 0);
 *   +0x7BC->[0x18] = +0x7B8; 004EDAD0(+0x7BC, &this->[0x2CC]); +0x7BC->h[0x2C] = this->h[0x54];
 *   pos.y += 0.5; 004D8054(&pos, this->[0x3E8], -0.5f); +0x7B8->pos = pos; 004356B4(+0x7B8);
 *   00324964(this);
 *   if (+0x7C0 == 0 && b[0x7C9] != 1) 004A879C(*data_00709D28, +0x7BC, 2);
 *   else { f[0x3AC] = -1.0; [0x2E0] |= 4; 004A7F00(*data_00709D28, +0x7BC, 2); }
 *   return this.
 *
 * What was wrong in the Ghidra version:
 *  - float bit reinterpretations `(float)puVar6[-0xf0]` / `[-0xef]` (the pos copy, really
 *    ldm/stm of words plus one vldr/vadd/vstr) became numeric conversions natively;
 *  - `in_s0` passed to 0054D964 is a phantom (0054D964 takes (actor, idx); see 003249E0);
 *  - the list word built with `orr r0, r7, #0xff` (low byte only) -> 002C11E8 layout;
 *  - 001E6CEC is a ctor typed void whose result Ghidra reused (ARM ctors return `this`).
 * DEPENDENCIES: 0014E904 returns a pointer in r0 but its Ghidra definition is void (needs a
 * rewrite); 0014E428 / 0054D964 have native/robust rewrites.
 *
 * Verified instruction by instruction against EU 00144F4C-001458B4 (literal pools 00145484-
 * 001454C8, 0014585C-00145888; strings at 001454B0, 001454CC, 001454D8, 00145860, 0014586C;
 * data_006A257C = 10 PMFs). Confidence: medium-high. */
#include <stdbool.h>
#include "robust.h"
#include "sead.h"

void func_001E6CEC(void *self, void *params, uint32_t r2, uint32_t r3);   /* ctor */
void func_0010A794(void *sm);                                             /* ctor */
void *func_0054D964(void *self, uint32_t index);                          /* native/robust */
void *func_0010BAB4(uint32_t size);
void func_004EDC9C(void *self);                                           /* ctor */
uint32_t func_00588BE4(void *actor);
void func_003249E0(char *self, uint32_t index);
void *func_0014E428(void *self, uint32_t a, uint32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void func_004D01E0(void *self, int32_t a, int32_t i);
uint32_t func_0053B530(void *mgr, uint32_t a, uint32_t b);
void *func_002758CC(void *self, void *params);
void *func_0014E904(void *self, int32_t a, int32_t b);
void func_00169688(void *self, uint32_t a, sead_SafeString *name, uint32_t b);
void func_0016A02C(void *self, int32_t a, int32_t b, void *c);
void func_002C11E8(char *list, uint32_t first, uint32_t v54, uint8_t v58);
void func_0016898C(void *self, void *list);
void func_00168E9C(char *self, char *model, int force);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void (*ctor)(void *), uint32_t size, uint32_t count);
void func_0010BDF0(void *self);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);
void func_00657808(void *sm, uint8_t state);
void func_004D7EB0(float *dst, uint32_t a, uint32_t b, float *pos);
void func_004CEAF0(void *self);
void func_00491624(float *dst, uint32_t a, uint32_t b, uint32_t c);
void func_004EDAD0(void *self, void *arg);
void func_004D8054(float *pos, uint32_t a, float f);
void func_004356B4(void *obj);
void func_00324964(void *self);
uint32_t func_004A879C(void *mgr, void *obj, uint32_t flag);
void func_004A7F00(void *mgr, void *obj, uint32_t flag);

extern char data_006C7944[];
extern uint32_t data_0069318C, data_00693190, data_00693194, data_00693198,
                data_0069319C, data_006931A0, data_006931A4;
extern void *data_0070C8E0;
extern char data_006F5988[];             /* sead::SafeString vtable */
extern const albw_pmf data_006A257C[10];
extern void *data_00709D28;

static void ss_assure(void *ss) {
    void (*f)(void *) = (void (*)(void *))FLD(FLD(ss, 0, char *), 8, void *);
    f(ss);
}

/* copy a state name into a name buffer (FixedSafeString-like: +4 buffer, +8 capacity) */
static void set_name(char *elt, const char *s) {
    sead_SafeString ss = { data_006F5988, s };
    char *buf = FLD(elt, 4, char *);
    ss_assure(&ss);
    int32_t len = 0;
    for (;;) {
        if (ss.mStringTop[len] == 0) {
            if (len > 0x40000) len = 0;
            break;
        }
        len++;
        if (len > 0x40000) { len = 0; break; }
    }
    if (FLD(elt, 8, int32_t) <= len)
        len = FLD(elt, 8, int32_t) - 1;
    ss_assure(&ss);
    func_0010E3C4(buf, ss.mStringTop, (uint32_t)len);
    buf[len] = 0;
}

static char *name_elt(char *sm, uint32_t i) {
    char *names = FLD(sm, 0x0C, char *);
    return FLD(sm, 0x08, uint32_t) > i ? names + i * 0x24 : names;
}

void *func_00144F4C(void *self_, void *params_, void *r2, uint32_t r3) {
    char *params = params_;
    char *t = self_;
    func_001E6CEC(t, params, 0x10, r3);
    FLD(t, 0x000, void *) = data_006C7944;
    FLD(t, 0x320, void *) = data_006C7944 + 0x98;
    FLD(t, 0x78C, void *) = NULL;
    char *sm = AT(t, 0x790);
    func_0010A794(sm);
    for (int off = 0x14; off <= 0x24; off += 4)
        FLD(sm, off, uint32_t) = 0;
    FLD(t, 0x7B8, void *) = func_0054D964(t, 1);
    void *k = func_0010BAB4(0x48);
    if (k) func_004EDC9C(k);
    FLD(t, 0x7BC, void *) = k;
    FLD(t, 0x7C0, void *) = NULL;
    FLD(t, 0x7C4, uint32_t) = FLD(params, 0x1C, uint32_t);
    FLD(t, 0x7C8, uint8_t) = 0x7F;
    FLD(t, 0x7C9, uint8_t) = 0;
    FLD(t, 0x7CA, uint8_t) = 0;
    FLD(t, 0x7CB, uint8_t) = 0;
    uint32_t id = func_00588BE4(t);
    if (id == data_0069318C) FLD(t, 0x7C9, uint8_t) = 0;
    else if (id == data_00693190) FLD(t, 0x7C9, uint8_t) = 1;
    else if (id == data_00693194) FLD(t, 0x7C9, uint8_t) = 2;
    else if (id == data_00693198) FLD(t, 0x7C9, uint8_t) = 3;
    else if (id == data_0069319C) FLD(t, 0x7C9, uint8_t) = 4;
    else if (id == data_006931A0) FLD(t, 0x7C9, uint8_t) = 5;
    else if (id == data_006931A4) FLD(t, 0x7C9, uint8_t) = 6;
    func_003249E0(t, 0);
    FLD(t, 0x788, uint32_t) = FLD(FLD(t, 0x2D0, char *), 0x1C8, uint32_t);
    char *m = func_0014E428(t, 1, 0, 0, 1, 0, 0);
    FLD(t, 0x78C, char *) = m;
    FLD(m, 0x164, uint32_t) |= 0x90000u;
    for (int32_t i = 0; i < FLD(FLD(FLD(t, 0x78C, char *), 0x20, char *), 4, int32_t); i++)
        func_004D01E0(FLD(t, 0x78C, void *), 1, i);
    if (FLD(t, 0x7C9, uint8_t) != 1) {
        if (func_0053B530(data_0070C8E0, FLD(params, 0x29C, uint32_t), FLD(params, 0x2A0, uint32_t))) {
            void *o = func_0010BAB4(0x88);
            if (o) o = func_002758CC(o, params);
            FLD(t, 0x7C0, void *) = o;
            if (FLD(params, 0x32, uint16_t) == 0 && FLD(params, 0x34, uint16_t) == 0)
                FLD(t, 0x7CB, uint8_t) = 1;
        }
    } else {
        FLD(t, 0x7B4, void *) = func_0014E904(t, 1, 1);
        sead_SafeString fall = { data_006F5988, "fall" };
        func_00169688(FLD(t, 0x7B4, void *), 0, &fall, FLD(t, 0x788, uint32_t));
        func_0016A02C(FLD(t, 0x7B4, void *), -1, -1, NULL);
        char list[0x5C];
        func_002C11E8(list, 0, 0, 0);
        func_0016898C(FLD(t, 0x7B4, void *), list);
        FLD(FLD(FLD(t, 0x7B4, char *), 0x14, char *), 0x10, float) = 0.0f;
        func_00168E9C(FLD(t, 0x7B4, char *), FLD(t, 0x78C, char *), 0);
    }

    /* ---- StateMachine: 4 states ---- */
    FLD(sm, 0x14, void *) = t;
    FLD(sm, 0x06, uint8_t) = 4;
    char *arr = func_0010BA78(0x40);
    FLD(sm, 0x18, char *) = arr;
    FLD(sm, 0x1C, char *) = arr + FLD(sm, 0x06, uint8_t) * 8;
    for (int i = 0; i < 4; i++) {                       /* loop count fixed at 4 */
        FLD(arr, i * 16, albw_pmf) = data_006A257C[9];
        FLD(arr, i * 16 + 8, albw_pmf) = data_006A257C[9];
    }
    uint32_t n = FLD(sm, 0x06, uint8_t);
    char *ex = func_0010BA78(n << 3);
    FLD(sm, 0x20, char *) = ex;
    for (uint32_t i = 0; i < n; i++)
        FLD(ex, i * 8, albw_pmf) = data_006A257C[2];
    {
        char *blk = func_0010CEE0(8 + 4 * 0x24, NULL, 4);
        char *names = NULL;
        if (blk) {
            FLD(blk, 0, uint32_t) = 0x24;
            FLD(blk, 4, uint32_t) = 4;
            names = func_00100118(blk + 8, func_0010BDF0, 0x24, 4);
        }
        if (names) {
            FLD(sm, 0x08, int32_t) = 4;
            FLD(sm, 0x0C, char *) = names;
        }
    }
    FLD(t, 0x354, void *) = sm;
    FLD(t, 0x35A, uint16_t) = 4;
    static const char *const kNames[4] = { "cState_Wait", "cState_Rail", "cState_Fall",
                                           "cState_SceneChange" };
    static const int kEnter[4] = { 0, 3, 5, 7 }, kExec[4] = { 1, 4, 6, 8 };
    for (uint32_t s = 0; s < 4; s++) {
        set_name(s == 0 ? FLD(sm, 0x0C, char *) : name_elt(sm, s), kNames[s]);
        FLD(FLD(sm, 0x18, char *), s * 8, albw_pmf) = data_006A257C[kEnter[s]];
        FLD(FLD(sm, 0x1C, char *), s * 8, albw_pmf) = data_006A257C[kExec[s]];
        FLD(FLD(sm, 0x20, char *), s * 8, albw_pmf) = data_006A257C[2];
    }
    if (FLD(t, 0x7C9, uint8_t) == 1) func_00657808(sm, 2);
    else if (FLD(t, 0x7C0, void *) != NULL) func_00657808(sm, 1);
    else func_00657808(sm, 0);

    float pos[3];
    memcpy(pos, AT(t, 0x3D0), sizeof pos);                       /* ldm/stm: raw words */
    m = FLD(t, 0x78C, char *);
    FLD(m, 0x164, uint32_t) |= 0x40000000u;
    func_004D7EB0((float *)AT(m, 0x80), FLD(t, 0x7C4, uint32_t), FLD(t, 0x3E8, uint32_t), pos);
    func_004CEAF0(FLD(t, 0x78C, void *));
    func_00491624((float *)AT(FLD(t, 0x7B8, char *), 0x64), 0, FLD(t, 0x3E8, uint32_t), 0);
    FLD(FLD(t, 0x7BC, char *), 0x18, void *) = FLD(t, 0x7B8, void *);
    uint32_t arg84 = FLD(t, 0x2CC, uint32_t);
    func_004EDAD0(FLD(t, 0x7BC, void *), &arg84);
    FLD(FLD(t, 0x7BC, char *), 0x2C, uint16_t) = FLD(t, 0x54, uint16_t);
    pos[1] = pos[1] + 0.5f;
    func_004D8054(pos, FLD(t, 0x3E8, uint32_t), -0.5f);
    memcpy(AT(FLD(t, 0x7B8, char *), 4), pos, sizeof pos);
    func_004356B4(FLD(t, 0x7B8, void *));
    func_00324964(t);
    if (FLD(t, 0x7C0, void *) == NULL && FLD(t, 0x7C9, uint8_t) != 1) {
        func_004A879C(data_00709D28, FLD(t, 0x7BC, void *), 2);
    } else {
        FLD(t, 0x3AC, float) = -1.0f;
        FLD(t, 0x2E0, uint32_t) |= 4;
        func_004A7F00(data_00709D28, FLD(t, 0x7BC, void *), 2);
    }
    return t;
}
