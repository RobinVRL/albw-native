/* USA 005C0690 (EU 005C0668): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F528;
extern uint32_t data_0070F52C;
extern uint32_t data_0070F530;
extern uint32_t data_0070F534;
extern uint32_t data_00787914;
extern uint32_t data_00787918;
extern uint32_t data_0078791C;
extern uint32_t data_00787920;
extern uint32_t data_00787934;
extern uint32_t data_00787B7C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006054B0(void);

static const char *const names_00787B7C[7] = {
    "up",
    "scale",
    "down",
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C0690(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00787914;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203}\203X\203^\201[\203\\\201[\203h";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjGtEvSwordB";
    fill_names((sead_SafeString *)&data_00787B7C, names_00787B7C, 7);
    data_0070F528 = 0xFFFFFFFFu;
    data_0070F52C = 0xFFFFFFFFu;
    data_0070F530 = 0x00000000u;
    data_0070F534 = 0x00000000u;
    data_00787914 = 0x00000000u;
    data_00787918 = 0x00000005u;
    data_0078791C = (uintptr_t)&data_00787920;
    func_0019B51C((uintptr_t)&data_00787934, (uintptr_t)&func_006054B0, 0x0000006Du, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00787914, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
