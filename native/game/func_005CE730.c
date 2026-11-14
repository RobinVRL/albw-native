/* USA 005CE730 (EU 005CE708): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C2E0;
extern uint32_t data_0070C2E4;
extern uint32_t data_0070C2E8;
extern uint32_t data_0070C2EC;
extern uint32_t data_0070C2F0;
extern uint32_t data_007600E4;
extern uint32_t data_007600E8;
extern uint32_t data_007600EC;
extern uint32_t data_007600F0;
extern uint32_t data_00760104;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606C18(void);

static const char *const names_0070C2F0[1] = {
    "SwitchTongue",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CE730(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007600E4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203x\203\215\210\370\202\253\203X\203C\203b\203`";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSwitchTongue";
    fill_names((sead_SafeString *)&data_0070C2F0, names_0070C2F0, 1);
    data_0070C2E0 = 0xFFFFFFFFu;
    data_0070C2E4 = 0xFFFFFFFFu;
    data_0070C2E8 = 0x00000000u;
    data_0070C2EC = 0x00000000u;
    data_007600E4 = 0x00000000u;
    data_007600E8 = 0x00000005u;
    data_007600EC = (uintptr_t)&data_007600F0;
    func_0019B51C((uintptr_t)&data_00760104, (uintptr_t)&func_00606C18, 0x00000131u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007600E4, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
