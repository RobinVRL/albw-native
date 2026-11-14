/* USA 005CE208 (EU 005CE1E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BFB8;
extern uint32_t data_0070BFBC;
extern uint32_t data_0070BFC0;
extern uint32_t data_0070BFC4;
extern uint32_t data_0070BFC8;
extern uint32_t data_00755D18;
extern uint32_t data_00755D1C;
extern uint32_t data_00755D20;
extern uint32_t data_00755D24;
extern uint32_t data_00755D38;
extern uint32_t data_00755F80;
extern uint32_t data_00755F84;
extern uint32_t data_00755F88;
extern uint32_t data_00755F8C;
extern uint32_t data_00755FA0;
extern uint32_t data_007561E8;
extern uint32_t data_007561EC;
extern uint32_t data_007561F0;
extern uint32_t data_007561F4;
extern uint32_t data_00756208;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609614(void);
void func_00609B04(void);
void func_00609B30(void);

static const char *const names_0070BFC8[1] = {
    "open",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CE208(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00755D18;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorWallHideWater";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211B\202\265\224\340\201i\220\205\202\314\342K\201j";
    fill_names((sead_SafeString *)&data_0070BFC8, names_0070BFC8, 1);
    data_0070BFB8 = 0xFFFFFFFFu;
    data_0070BFBC = 0xFFFFFFFFu;
    data_0070BFC0 = 0x00000000u;
    data_0070BFC4 = 0x00000000u;
    data_00755D18 = 0x00000000u;
    data_00755D1C = 0x00000005u;
    data_00755D20 = (uintptr_t)&data_00755D24;
    func_0019B51C((uintptr_t)&data_00755D38, (uintptr_t)&func_00609614, 0x000000BEu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00755D18, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00755F80;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojDoorWallHideDokuro";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\211B\202\265\224\340\201i\203h\203N\203\215\202\314\220X\201j";
    data_00755F80 = 0x00000000u;
    data_00755F84 = 0x00000005u;
    data_00755F88 = (uintptr_t)&data_00755F8C;
    func_0019B51C((uintptr_t)&data_00755FA0, (uintptr_t)&func_00609B30, 0x000000BFu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00755F80, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007561E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MojDoorWallHideCastle";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\211B\202\265\224\340\201i\203n\203C\203\211\203\213\217\351\201j";
    data_007561E8 = 0x00000000u;
    data_007561EC = 0x00000005u;
    data_007561F0 = (uintptr_t)&data_007561F4;
    func_0019B51C((uintptr_t)&data_00756208, (uintptr_t)&func_00609B04, 0x000000C0u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_007561E8, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
