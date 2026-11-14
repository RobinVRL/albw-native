/* USA 00230ADC (EU 00230ADC): calc of an area-change ("exit/door") actor base class (vtable slots
 * 006D3AEC, 006DB9B4, 006DE75C, 006DE7B4, 006EE380; also called by 0032FE78). Busy (+0xF8): run
 * 00165FB8 and return 1, else tail-call 00165F84(this); pending (+0xFA) / reset (+0xF9) paths;
 * otherwise StateMgr::exec (StateMgr at +0x108) and, via the virtual +0x40 (link/target object):
 * request the scene change 004EF418(*data_00709DF8, target+0x138, target[0x144], 0) once
 * (sets target[0xDB]), or call the virtual +0x44 when the destination is unset (s8 -1), or
 * 00165E28(this, s16 +0xEC) when the player can enter.
 * Route: the field change to the first playable area / room exits (route phase 5).
 * Bugs: the state handler was called with no `this` (Ghidra `(*(code *)*piVar5)()`), and the
 * tail call `b 00165F84` with r0 = this was printed `func_00165F84()` without its argument.
 * Verified instruction by instruction against EU 00230ADC..00230D08 (movne r0, #1 path, every
 * virtual +0x40 call re-made as on ARM (5 calls on the 0xDA path), `cmn #1` on s8 +0x138,
 * `ldrb r2, [r5, #0x144]` from the first +0x40 result, ldrh +0xEC, bge on +0x10C).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_00709DF8[], data_007142C8[], data_00708998[];
int func_00165FB8(char *self);
int func_00165F84(char *self);
int func_00166010(char *self);
int func_002E1B70(void *p);
int func_004EF418(int mgr, void *dest, int a, int b);
int func_0058DA24(int obj);
int func_00165E28(char *self, int a);

typedef char *(*vget_fn)(char *);

int func_00230ADC(char *self)
{
    if (RF(self, 0xF8, uint8_t) != 0) {
        if (func_00165FB8(self) != 0)
            return 1;
        return func_00165F84(self);
    }
    if (RF(self, 0xFA, uint8_t) != 0) {
        func_00166010(self);
        return 0;
    }
    if (RF(self, 0xF9, uint8_t) != 0) {
        RF(self, 0xF9, uint8_t) = 0;
        func_002E1B70(RAT(self, 0xAC));
        return 0;
    }
    RF(self, 0x130, uint8_t) = 0;
    route_statemgr_exec(RAT(self, 0x108));

    if (RVFN(vget_fn, self, 0x40)(self) == 0)
        return 0;
    if (RF(RVFN(vget_fn, self, 0x40)(self), 0xDA, uint8_t) != 0) {
        if (RF(RVFN(vget_fn, self, 0x40)(self), 0xDB, uint8_t) != 0)
            return 0;
        if (RF(RVFN(vget_fn, self, 0x40)(self), 0x138, int8_t) == -1) {
            RVFN(int (*)(char *), self, 0x44)(self);
            return 0;
        }
        char *a = RVFN(vget_fn, self, 0x40)(self);
        char *b = RVFN(vget_fn, self, 0x40)(self);
        if (func_004EF418((int)data_00709DF8[0], RAT(b, 0x138), RF(a, 0x144, uint8_t), 0) != 0)
            RF(RVFN(vget_fn, self, 0x40)(self), 0xDB, uint8_t) = 1;
        return 0;
    }
    char *t = RVFN(vget_fn, self, 0x40)(self);
    if (RVFN(int (*)(char *), t, 0x28)(t) == 0)
        return 0;
    if (func_0058DA24((int)data_007142C8[0]) == 0)
        return 0;
    if (RF(RP(GPTR_TO(char, data_00708998[0]), 0x18), 0x10C, int32_t) >= 1)
        return 0;
    func_00165E28(self, RF(self, 0xEC, uint16_t));
    return 0;
}
