/* USA 005BE040 (EU 005BE018): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BDF8;
extern uint32_t data_0070BDFC;
extern uint32_t data_0070BE00;
extern uint32_t data_0070BE04;
extern uint32_t data_0070BE08;
extern uint32_t data_00750720;
extern uint32_t data_00750724;
extern uint32_t data_00750728;
extern uint32_t data_0075072C;
extern uint32_t data_00750740;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604D4C(void);

static const char *const names_0070BE08[1] = {
    "BlockBound",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BE040(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00750720;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203{\203\210\203\210\203\223\203u\203\215\203b\203N";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojBlockBound";
    fill_names((sead_SafeString *)&data_0070BE08, names_0070BE08, 1);
    data_0070BDF8 = 0xFFFFFFFFu;
    data_0070BDFC = 0xFFFFFFFFu;
    data_0070BE00 = 0x00000000u;
    data_0070BE04 = 0x00000000u;
    data_00750720 = 0x00000000u;
    data_00750724 = 0x00000005u;
    data_00750728 = (uintptr_t)&data_0075072C;
    func_0019B51C((uintptr_t)&data_00750740, (uintptr_t)&func_00604D4C, 0x000000C3u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00750720, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
