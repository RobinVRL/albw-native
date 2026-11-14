/* USA 0050B788 <- EU 0050B764: constructor of the actor class aliased Object_0050B78C
 * (native/symbol_aliases.txt maps _ZN15Object_0050B78CC1EPv to it); a one-state ("cState_Wait")
 * actor with a model and an animation-slot set. Called as func_0050B788(this, params) by its
 * factory 0060B2A0; returns this.
 *
 * What was wrong in the Ghidra version: the function table has a bogus extra start at USA 0050B78C
 * (EU 0050B768, the instruction after the push), so Ghidra cut this function into a 1-instruction
 * prologue and typed it `int func_0050B788(void)`: `this` and `params` became in_r0/in_r1
 * (uninitialised natively), i.e. the whole object was constructed at a garbage address. Also the
 * inlined changeState(0) called the state's enter PMF as `(*pcVar13)()` with no `this` (class B
 * pattern without the UNRECOVERED_JUMPTABLE name), and in_s0 / extraout_r1 were phantom arguments
 * (0054D964 takes r0/r1 only; 00169A80 only reads r0).
 *
 * Verified against EU 0050B764-0050BC18 (disassembled without the bogus 0050B768 start):
 *  - 00150E40 / 0010A794 / 004EDC9C are constructors returning their `this`; the ARM code keeps
 *    using r0 after them, here the same addresses are computed from `self` directly.
 *  - 0010BAB4(0xA8) gets a stale r1 (caller's r5): operator new ignores it.
 *  - The state tables: enter/exec table = 16 bytes from 0010BA78(0x10), both PMF slots filled from
 *    data_0069D55C+0x18 (the generic init loop with count 1); exit table = u8[sm+6]=1 PMFs from
 *    data_0069D55C+0x10; then the three real PMFs (data_0069D55C +0/+8/+0x10) are stored into
 *    slot 0 of the three tables (vldmia/vstmia of 6 words: a bit copy).
 *  - The name copy is sead::BufferedSafeString::copy inlined: assureTermination (vtable +8) on a
 *    temporary SafeString, strlen bounded by 0x40000 (longer -> 0), clamp to bufSize-1, memcpy
 *    (0010E3C4), terminate.
 *  - changeState(0) is the robust_sm.h template (same code, entry index 0 < count 1).
 * Confidence: high for the sequence; medium for names. */
#include "robust_sm.h"

extern char data_006EE930[];   /* vtable */
extern char data_00725974[];
extern char data_0070C128[];   /* resource name (SafeString) */
extern void *data_00709D28;
extern char data_0069D55C[];   /* state PMF table: enter, exec, exit (8 bytes each) + defaults */

void *func_00150E40(void *self, void *params);
void func_0010A794(void *sm);
void *func_0054D964(char *actor, uint32_t idx);
void func_004EDC9C(void *self);
void *func_0014E428(void *actor, uint32_t a, int32_t b, uint32_t c, int32_t d, uint8_t e, uint8_t f);
void *func_0010BAB4(uint32_t size);
void *func_0016A2FC(void *self, int32_t a, void *b, int32_t c);
void func_00169608(void *slots, uint32_t a, void *name, void *res);
void func_0016A02C(char *self, int32_t minA, int32_t minB, void *model);
void func_004356B4(void *obj);
void func_004EDAD0(void *self, uint32_t *arg);
void func_004A879C(void *mgr, void *obj, uint32_t kind);
void *func_0010BA78(uint32_t size);
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void *(*ctor)(void *), uint32_t size, uint32_t count);
void *func_0010BDF0(void *p);
void *func_0010E3C4(void *dst, const void *src, uint32_t n);
void func_00169A80(void *slots, uint32_t a, uint32_t b, void *c);
void func_00168E9C(char *self, char *model, int force);
void func_004D8AEC(float *p, uint32_t a, float *b);
void func_004CEAF0(void *actor);

void *func_0050B788(char *self, void *params) {
    func_00150E40(self, params);
    FLD(self, 0x000, void *) = data_006EE930;
    FLD(self, 0x320, void *) = data_006EE930 + 0x54;
    FLD(self, 0x40C, void *) = 0;
    FLD(self, 0x410, void *) = 0;
    char *sm = AT(self, 0x414);
    func_0010A794(sm);
    FLD(sm, 0x14, uint32_t) = 0;
    FLD(sm, 0x18, uint32_t) = 0;
    FLD(sm, 0x1C, uint32_t) = 0;
    FLD(sm, 0x20, uint32_t) = 0;
    FLD(sm, 0x24, void *) = func_0054D964(self, 0);          /* self+0x438 */
    func_004EDC9C(AT(self, 0x43C));
    FLD(self, 0x40C, void *) = func_0014E428(self, 1, 0, 0, 1, 0, 0);

    void *mem = func_0010BAB4(0xA8);
    void *slots = mem ? func_0016A2FC(mem, 1, data_00725974, 1) : 0;
    FLD(self, 0x410, void *) = slots;
    func_00169608(slots, 0, data_0070C128, FLD(FLD(self, 0x2D0, char *), 0x1C8, void *));
    func_0016A02C(FLD(self, 0x410, char *), -1, -1, 0);

    char *obj = FLD(self, 0x438, char *);
    memcpy(AT(obj, 4), AT(self, 0x3D0), 12);
    func_004356B4(FLD(self, 0x438, void *));
    FLD(FLD(self, 0x438, char *), 0x28, uint16_t) = 0xA4;
    FLD(self, 0x454, void *) = FLD(self, 0x438, void *);
    uint32_t tmp = FLD(self, 0x2CC, uint32_t);
    func_004EDAD0(AT(self, 0x43C), &tmp);
    FLD(self, 0x468, uint16_t) = FLD(self, 0x54, uint16_t);
    func_004A879C(data_00709D28, AT(self, 0x43C), 2);

    /* state machine: one state */
    FLD(sm, 0x06, uint8_t) = 1;
    FLD(sm, 0x14, char *) = self;
    char *enter = func_0010BA78(0x10);
    FLD(sm, 0x18, char *) = enter;
    FLD(sm, 0x1C, char *) = enter + FLD(sm, 0x06, uint8_t) * 8;
    memcpy(enter + 0, data_0069D55C + 0x18, 8);
    memcpy(enter + 8, data_0069D55C + 0x18, 8);
    uint8_t n = FLD(sm, 0x06, uint8_t);
    char *exitp = func_0010BA78((uint32_t)n * 8);
    FLD(sm, 0x20, char *) = exitp;
    for (uint32_t i = 0; i < n; i++)
        memcpy(exitp + i * 8, data_0069D55C + 0x10, 8);
    uint32_t *names = func_0010CEE0(1 * 0x24 + 8, 0, 4);
    if (names) {
        names[0] = 0x24;
        names[1] = 1;
        void *arr = func_00100118(names + 2, func_0010BDF0, 0x24, 1);
        if (arr) {
            FLD(sm, 0x0C, void *) = arr;
            FLD(sm, 0x08, uint32_t) = 1;
        }
    }
    FLD(self, 0x35A, uint16_t) = 1;
    FLD(self, 0x354, char *) = sm;

    /* names[0] = "cState_Wait" (BufferedSafeString::copy, inlined) */
    char *entry = FLD(sm, 0x0C, char *);
    char *buf = FLD(entry, 4, char *);
    sead_SafeString s;
    s.vtbl = &data_006F5988;
    s.mStringTop = "cState_Wait";
    ((void (*)(sead_SafeString *))FLD(s.vtbl, 8, void *))(&s);
    int32_t len = 0;
    while (s.mStringTop[len] != 0) {
        if (++len > 0x40000)
            break;
    }
    if (len > 0x40000)
        len = 0;
    if (FLD(entry, 8, int32_t) <= len)
        len = FLD(entry, 8, int32_t) - 1;
    ((void (*)(sead_SafeString *))FLD(s.vtbl, 8, void *))(&s);
    func_0010E3C4(buf, s.mStringTop, (uint32_t)len);
    buf[len] = 0;

    memcpy(FLD(sm, 0x18, char *), data_0069D55C + 0x00, 8);   /* enter */
    memcpy(FLD(sm, 0x1C, char *), data_0069D55C + 0x08, 8);   /* exec */
    memcpy(FLD(sm, 0x20, char *), data_0069D55C + 0x10, 8);   /* exit */
    albw_sm_change_state(sm, 0);

    if (FLD(self, 0x410, void *)) {
        func_00169A80(FLD(self, 0x410, void *), 0, 0, 0);
        func_00168E9C(FLD(self, 0x410, char *), FLD(self, 0x40C, char *), 0);
    }
    char *mdl = FLD(self, 0x40C, char *);
    FLD(mdl, 0x164, uint32_t) |= 0x40000000u;
    func_004D8AEC((float *)AT(mdl, 0x80), FLD(self, 0x3E8, uint32_t), (float *)AT(self, 0x3D0));
    func_004CEAF0(FLD(self, 0x40C, void *));
    return self;
}
