/* USA 005BDEA8 (EU 005BDE80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D8F0;
extern uint32_t data_0070D8F4;
extern uint32_t data_0070D8F8;
extern uint32_t data_0070D8FC;
extern uint32_t data_0076FCA8;
extern uint32_t data_0076FCAC;
extern uint32_t data_0076FCB0;
extern uint32_t data_0076FCB4;
extern uint32_t data_0076FCC8;
extern uint32_t data_0076FF10;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604D20(void);

static const char *const names_0076FF10[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "on",
    "off",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BDEA8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076FCA8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"X^WApâ";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MiniGameRSPot";
    fill_names((sead_SafeString *)&data_0076FF10, names_0076FF10, 6);
    data_0070D8F0 = 0xFFFFFFFFu;
    data_0070D8F4 = 0xFFFFFFFFu;
    data_0070D8F8 = 0x00000000u;
    data_0070D8FC = 0x00000000u;
    data_0076FCA8 = 0x00000000u;
    data_0076FCAC = 0x00000005u;
    data_0076FCB0 = (uintptr_t)&data_0076FCB4;
    func_0019B51C((uintptr_t)&data_0076FCC8, (uintptr_t)&func_00604D20, 0x0000002Au, (uintptr_t)((char *)stk + 24));
}
