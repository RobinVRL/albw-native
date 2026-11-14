/* USA 005BEC1C (EU 005BEBF4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C298;
extern uint32_t data_0070C29C;
extern uint32_t data_0070C2A0;
extern uint32_t data_0070C2A4;
extern uint32_t data_0070C2A8;
extern uint32_t data_0075EB3C;
extern uint32_t data_0075EB40;
extern uint32_t data_0075EB44;
extern uint32_t data_0075EB48;
extern uint32_t data_0075EB5C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604F54(void);

static const char *const names_0070C2A8[1] = {
    "SwitchPull",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BEC1C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075EB3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\210\370\202\253\203X\203C\203b\203`";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSwitchPull";
    fill_names((sead_SafeString *)&data_0070C2A8, names_0070C2A8, 1);
    data_0070C298 = 0xFFFFFFFFu;
    data_0070C29C = 0xFFFFFFFFu;
    data_0070C2A0 = 0x00000000u;
    data_0070C2A4 = 0x00000000u;
    data_0075EB3C = 0x00000000u;
    data_0075EB40 = 0x00000005u;
    data_0075EB44 = (uintptr_t)&data_0075EB48;
    func_0019B51C((uintptr_t)&data_0075EB5C, (uintptr_t)&func_00604F54, 0x00000121u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0075EB3C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
