/* USA 005BE8D8 (EU 005BE8B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C020;
extern uint32_t data_0070C024;
extern uint32_t data_0070C028;
extern uint32_t data_0070C02C;
extern uint32_t data_0070C030;
extern uint32_t data_007583B8;
extern uint32_t data_007583BC;
extern uint32_t data_007583C0;
extern uint32_t data_007583C4;
extern uint32_t data_007583D8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604E5C(void);

static const char *const names_0070C030[1] = {
    "HeartPaint",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BE8D8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007583B8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojHeartPaint";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\216\217\221\202\253\203n\201[\203g";
    data_0070C020 = 0xFFFFFFFFu;
    data_0070C024 = 0xFFFFFFFFu;
    data_0070C028 = 0x00000000u;
    data_0070C02C = 0x00000000u;
    data_007583B8 = 0x00000000u;
    data_007583BC = 0x00000005u;
    data_007583C0 = (uintptr_t)&data_007583C4;
    func_0019B51C((uintptr_t)&data_007583D8, (uintptr_t)&func_00604E5C, 0x0000012Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007583B8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070C030, names_0070C030, 1);
}
