/* USA 005E708C (EU 005E7064): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (6 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C208;
extern uint32_t data_0070C20C;
extern uint32_t data_0070C210;
extern uint32_t data_0070C214;
extern uint32_t data_0070C218;
extern uint32_t data_0075DA44;
extern uint32_t data_0075DA48;
extern uint32_t data_0075DA4C;
extern uint32_t data_0075DA50;
extern uint32_t data_0075DA64;
extern uint32_t data_0075DCAC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608680(void);

static const char *const names_0070C218[2] = {
    "MessageBoad_Back",
    "MessageBoad_Dark",
};
static const char *const names_0075DCAC[4] = {
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

void func_005E708C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075DA44;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\220\316\224\305";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSignboardStone";
    fill_names((sead_SafeString *)&data_0070C218, names_0070C218, 2);
    fill_names((sead_SafeString *)&data_0075DCAC, names_0075DCAC, 4);
    data_0070C208 = 0xFFFFFFFFu;
    data_0070C20C = 0xFFFFFFFFu;
    data_0070C210 = 0x00000000u;
    data_0070C214 = 0x00000000u;
    data_0075DA44 = 0x00000000u;
    data_0075DA48 = 0x00000005u;
    data_0075DA4C = (uintptr_t)&data_0075DA50;
    func_0019B51C((uintptr_t)&data_0075DA64, (uintptr_t)&func_00608680, 0x00000117u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0075DA44, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
