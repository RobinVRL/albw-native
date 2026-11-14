/* USA 005CE0E0 (EU 005CE0B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BDE8;
extern uint32_t data_0070BDEC;
extern uint32_t data_0070BDF0;
extern uint32_t data_0070BDF4;
extern uint32_t data_007504A8;
extern uint32_t data_007504AC;
extern uint32_t data_007504B0;
extern uint32_t data_007504B4;
extern uint32_t data_007504C8;
extern uint32_t data_00750710;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606B70(void);

static const char *const names_00750710[2] = {
    "play",
    "playback",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CE0E0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007504A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203x\203\213\203g\203R\203\223\203x\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojBeltConveyor";
    fill_names((sead_SafeString *)&data_00750710, names_00750710, 2);
    data_0070BDE8 = 0xFFFFFFFFu;
    data_0070BDEC = 0xFFFFFFFFu;
    data_0070BDF0 = 0x00000000u;
    data_0070BDF4 = 0x00000000u;
    data_007504A8 = 0x00000000u;
    data_007504AC = 0x00000005u;
    data_007504B0 = (uintptr_t)&data_007504B4;
    func_0019B51C((uintptr_t)&data_007504C8, (uintptr_t)&func_00606B70, 0x0000000Au, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007504A8, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
