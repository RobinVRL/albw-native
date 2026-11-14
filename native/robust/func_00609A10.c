/* USA 00609A10 <- EU 006099E8: factory for the Triforce/Sages event actor (11-state machine:
 * cState_AppearPlayer ... cState_GetEndTriForce; vtable data_006E6FF0, state PMF table
 * data_006A4714):
 *     obj = new(0x4E4); if (!obj) return NULL; return ctor(obj, params);     (tail call)
 * The constructor (EU 003915F4) has no entry in the function map, so Ghidra inlined it; it is
 * reproduced here as a static helper:
 *     self = 00150E40(obj, params);                       (base ctor, returns this)
 *     vtables; 002E1BB4(self+0x40C, 0); 002E1BB4(self+0x414, 0); bytes +0x41C..0x41E = 0;
 *     state machine at +0x420 (0010A794 ctor), field clears, owner self, 11 states, enter/exec/
 *     exit PMF arrays (exit always the default entry +0x10), 11 x 0x24 name buffers;
 *     00668058(sm, 0) (initial state change);
 *     self->[0x4E0] = new(0x108) ? 001663BC(m, &SafeString(SJIS name @code 00391C70),
 *                                            self->[0x2CC], 0, 1) : NULL;
 *     004ECF6C(self); return self;
 *
 * What was wrong: Ghidra typed the factory `void` (the original returns the ctor's r0, or 0)
 * and marked 004ECF6C as "does not return" (tail call to 004CD7C8, which returns), so the
 * converted code returned nothing to its factory-table caller. The inlined ctor also took
 * `self` from the return values of 002E1BB4 and 0010A794, which leave r0 = this on ARM but are
 * void natively; the pointers are computed from obj here. Constructors return this (ARM C++
 * ABI); 001663BC is typed void natively, so the allocated pointer is stored. The `mov r1, r0`
 * / `mov r1, sb` before operator new / new[] are phantom arguments.
 * Verified against EU 006099E8-00609A0C and 003915F4-00391B5C instruction by instruction
 * (state table offsets per load group: enter = 0 / 0x18 + 0x10*(i-1), exec = enter + 8,
 * "null" PMF at +0xB8; names read from the code at 00391B70...; 00391780 / 00391B1C are
 * `nop`s in this build). PMF words copied as raw 8-byte entries.
 * Confidence: high. */
#include "robust.h"
#include "sead.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void *func_0010BA78(uint32_t size);   /* operator new[] */
void *func_0010CEE0(uint32_t size, void *heap, int32_t alignment);
void *func_00100118(void *array, void *(*ctor)(void *), uint32_t size, uint32_t count);
void *func_0010BDF0(void *p);
void *func_00150E40(void *self, void *params);
void func_002E1BB4(void *p, uint16_t n);
void func_0010A794(void *sm);
int func_0010BEC4(void *names, uint32_t index, const sead_SafeString *name);
void func_00668058(char *sm, uint32_t newState);
void func_001663BC(void *self, sead_SafeString *name, uint32_t a, uint8_t b, uint8_t c);
void func_004ECF6C(void *self);

extern char data_006E6FF0[];          /* vtable */
extern const char data_006A4714[];    /* state PMF table */
extern char data_006F5988[];          /* sead::SafeString vtable */

/* SJIS name stored in the code at EU 00391C70 */
static const char event_name[] = {
    (char)0x8C, (char)0xAB, (char)0x8E, (char)0xD2, (char)0x82, (char)0xCC, (char)0x8A, (char)0xD4,
    (char)0x92, (char)0x8D, (char)0x96, (char)0xDA, (char)0x83, 'C', (char)0x83, 'x',
    (char)0x83, (char)0x93, (char)0x83, 'g', 0};

static char *tri_ctor(char *self, void *params) {
    func_00150E40(self, params);
    FLD(self, 0x320, char *) = data_006E6FF0 + 0x54;
    FLD(self, 0x000, char *) = data_006E6FF0;
    func_002E1BB4(AT(self, 0x40C), 0);
    func_002E1BB4(AT(self, 0x414), 0);
    FLD(self, 0x41C, uint8_t) = 0;
    FLD(self, 0x41D, uint8_t) = 0;
    FLD(self, 0x41E, uint8_t) = 0;
    char *sm = AT(self, 0x420);
    func_0010A794(sm);
    FLD(sm, 0x18, uint32_t) = 0;
    FLD(sm, 0x1C, uint32_t) = 0;
    FLD(sm, 0x20, uint32_t) = 0;
    FLD(sm, 0x40, uint32_t) = 0;
    FLD(sm, 0x44, uint32_t) = 0;
    static const uint16_t clr[] = {0x48C, 0x490, 0x4B4, 0x4B8, 0x4BC, 0x4C0, 0x4C8, 0x4D4, 0x4D8, 0x4DC};
    unsigned k;
    for (k = 0; k < sizeof clr / sizeof clr[0]; k++)
        FLD(self, clr[k], uint32_t) = 0;
    FLD(sm, 6, uint8_t) = 11;
    FLD(self, 0x434, char *) = self;

    const char *t = data_006A4714;
    char *enter = func_0010BA78(0xB0);
    FLD(sm, 0x18, char *) = enter;
    FLD(sm, 0x1C, char *) = enter + FLD(sm, 6, uint8_t) * 8;
    int i;
    for (i = 0; i < 22; i++)              /* enter[11] + exec[11] = "null" PMF */
        memcpy(enter + i * 8, t + 0xB8, 8);
    uint8_t n = FLD(sm, 6, uint8_t);
    char *exitp = func_0010BA78((uint32_t)n * 8);
    FLD(sm, 0x20, char *) = exitp;
    for (i = 0; i < n; i++)
        memcpy(exitp + i * 8, t + 0x10, 8);
    {
        uint32_t *mem = func_0010CEE0(11 * 0x24 + 8, NULL, 4);
        void *arr = NULL;
        if (mem) {
            mem[0] = 0x24;
            mem[1] = 11;
            arr = func_00100118(mem + 2, func_0010BDF0, 0x24, 11);
        }
        if (arr) {
            FLD(sm, 0x08, uint32_t) = 11;
            FLD(sm, 0x0C, void *) = arr;
        }
    }
    FLD(self, 0x354, char *) = sm;
    FLD(self, 0x35A, uint16_t) = 11;
    static const char *const names[11] = {
        "cState_AppearPlayer", "cState_AppearSage", "cState_AppearTriForceBrave",
        "cState_AppearWarpHole", "cState_PlayerFree", "cState_PlayerExit",
        "cState_AppearTriForce", "cState_RiseEndTriForce", "cState_RiseSagesPlaceStep",
        "cState_GetTriForce", "cState_GetEndTriForce",
    };
    for (i = 0; i < 11; i++) {
        sead_SafeString nm = {data_006F5988, names[i]};
        func_0010BEC4(sm, (uint32_t)i, &nm);
        uint32_t en = i == 0 ? 0 : 0x18 + 0x10 * (uint32_t)(i - 1);
        memcpy(FLD(self, 0x438, char *) + i * 8, t + en, 8);
        memcpy(FLD(self, 0x43C, char *) + i * 8, t + en + 8, 8);
        memcpy(FLD(self, 0x440, char *) + i * 8, t + 0x10, 8);
    }
    func_00668058(sm, 0);
    void *m = func_0010BAB4(0x108);
    if (m) {
        sead_SafeString nm = {data_006F5988, event_name};
        func_001663BC(m, &nm, FLD(self, 0x2CC, uint32_t), 0, 1);
    }
    FLD(self, 0x4E0, void *) = m;
    func_004ECF6C(self);
    return self;
}

char *func_00609A10(void *params) {
    char *obj = func_0010BAB4(0x4E4);
    if (!obj)
        return NULL;
    return tri_ctor(obj, params);
}
