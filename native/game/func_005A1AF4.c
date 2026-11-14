/* USA 005A1AF4 (EU 005A1ACC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BDC0;
extern uint32_t data_0070BDC4;
extern uint32_t data_0070BDC8;
extern uint32_t data_0070BDCC;
extern uint32_t data_0070BDD0;
extern uint32_t data_0070BDD4;
extern uint32_t data_0070BDD8;
extern uint32_t data_00750240;
extern uint32_t data_00750244;
extern uint32_t data_00750248;
extern uint32_t data_0075024C;
extern uint32_t data_00750260;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117F94(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B248(void);

static const char *const names_0070BDD8[2] = {
    "EfBeam",
    "EfBeam",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A1AF4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00750240;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojBeamos";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"r";
    data_0070BDC8 = 0xFFFFFFFFu;
    data_0070BDCC = 0xFFFFFFFFu;
    data_0070BDD0 = 0x00000000u;
    data_0070BDD4 = 0x00000000u;
    data_00750240 = 0x00000000u;
    data_00750244 = 0x00000005u;
    data_00750248 = (uintptr_t)&data_0075024C;
    func_0019B51C((uintptr_t)&data_00750260, (uintptr_t)&func_0060B248, 0x00000123u, (uintptr_t)((char *)stk + 16));
    fill_names((sead_SafeString *)&data_0070BDD8, names_0070BDD8, 2);
    uintptr_t ret1 = func_00114608(0x4CE38E39u, (uintptr_t)&func_00117F94);
    data_0070BDC0 = ret1;
    uintptr_t ret2 = func_00114608(0x4DAAAAABu, 0x00000000u);
    data_0070BDC4 = ret2;
}
