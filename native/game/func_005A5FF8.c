/* USA 005A5FF8 (EU 005A5FD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BEE0;
extern uint32_t data_0070BEE4;
extern uint32_t data_0070BEE8;
extern uint32_t data_0070BEEC;
extern uint32_t data_007530A8;
extern uint32_t data_007530AC;
extern uint32_t data_007530B0;
extern uint32_t data_007530B4;
extern uint32_t data_007530C8;
extern uint32_t data_00753310;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602A1C(void);

static const char *const names_00753310[5] = {
    "wait",
    "fire",
    "cut",
    "fire",
    "cut",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A5FF8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007530A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojCurtain";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\201[\203e\203\223";
    data_0070BEE0 = 0xFFFFFFFFu;
    data_0070BEE4 = 0xFFFFFFFFu;
    data_0070BEE8 = 0x00000000u;
    data_0070BEEC = 0x00000000u;
    data_007530A8 = 0x00000000u;
    data_007530AC = 0x00000005u;
    data_007530B0 = (uintptr_t)&data_007530B4;
    func_0019B51C((uintptr_t)&data_007530C8, (uintptr_t)&func_00602A1C, 0x00000135u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007530A8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_00753310, names_00753310, 5);
}
