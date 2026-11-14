/* USA 005E0D50 (EU 005E0D28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (6 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF18;
extern uint32_t data_0070BF1C;
extern uint32_t data_0070BF20;
extern uint32_t data_0070BF24;
extern uint32_t data_0070BF28;
extern uint32_t data_00753838;
extern uint32_t data_0075383C;
extern uint32_t data_00753840;
extern uint32_t data_00753844;
extern uint32_t data_00753858;
extern uint32_t data_00753AA0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006077BC(void);

static const char *const names_0070BF28[1] = {
    "open",
};
static const char *const names_00753AA0[5] = {
    "key_A",
    "key_B",
    "key_C",
    "key_D",
    "open",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E0D50(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00753838;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\215\203E\203\211\203\213\217\351\221\345\224\340";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojDoorBossGanon";
    fill_names((sead_SafeString *)&data_0070BF28, names_0070BF28, 1);
    fill_names((sead_SafeString *)&data_00753AA0, names_00753AA0, 5);
    data_0070BF18 = 0xFFFFFFFFu;
    data_0070BF1C = 0xFFFFFFFFu;
    data_0070BF20 = 0x00000000u;
    data_0070BF24 = 0x00000000u;
    data_00753838 = 0x00000000u;
    data_0075383C = 0x00000005u;
    data_00753840 = (uintptr_t)&data_00753844;
    func_0019B51C((uintptr_t)&data_00753858, (uintptr_t)&func_006077BC, 0x000000AFu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00753838, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
