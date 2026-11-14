/* USA 005BE36C (EU 005BE344): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BFA8;
extern uint32_t data_0070BFAC;
extern uint32_t data_0070BFB0;
extern uint32_t data_0070BFB4;
extern uint32_t data_00755828;
extern uint32_t data_0075582C;
extern uint32_t data_00755830;
extern uint32_t data_00755834;
extern uint32_t data_00755848;
extern uint32_t data_00755A90;
extern uint32_t data_00755A94;
extern uint32_t data_00755A98;
extern uint32_t data_00755A9C;
extern uint32_t data_00755AB0;
extern uint32_t data_00755CF8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604E20(void);
void func_00608B74(void);

static const char *const names_00755CF8[4] = {
    "open",
    "close",
    "open",
    "close",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BE36C(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00755828;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorSwitch";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203X\203C\203b\203`\224\340";
    fill_names((sead_SafeString *)&data_00755CF8, names_00755CF8, 4);
    data_0070BFA8 = 0xFFFFFFFFu;
    data_0070BFAC = 0xFFFFFFFFu;
    data_0070BFB0 = 0x00000000u;
    data_0070BFB4 = 0x00000000u;
    data_00755828 = 0x00000000u;
    data_0075582C = 0x00000005u;
    data_00755830 = (uintptr_t)&data_00755834;
    func_0019B51C((uintptr_t)&data_00755848, (uintptr_t)&func_00604E20, 0x000000B2u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00755828, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00755A90;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojDoorSwitchGanon";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203X\203C\203b\203`\224\340\201i\203\215\203E\203\211\203\213\217\351\201j";
    data_00755A90 = 0x00000000u;
    data_00755A94 = 0x00000005u;
    data_00755A98 = (uintptr_t)&data_00755A9C;
    func_0019B51C((uintptr_t)&data_00755AB0, (uintptr_t)&func_00608B74, 0x000000B5u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00755A90, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
