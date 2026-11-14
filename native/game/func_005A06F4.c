/* USA 005A06F4 (EU 005A06CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 10 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698C34;
extern uint32_t data_00698C38;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF20;
extern uint32_t data_0070AF24;
extern uint32_t data_0070AF28;
extern uint32_t data_0070AF2C;
extern uint32_t data_0070AF30;
extern uint32_t data_0070AF34;
extern uint32_t data_00745930;
extern uint32_t data_00745934;
extern uint32_t data_00745938;
extern uint32_t data_0074593C;
extern uint32_t data_00745950;
extern uint32_t data_00745B98;
extern uint32_t data_00745B9C;
extern uint32_t data_00745BA0;
extern uint32_t data_00745BA4;
extern uint32_t data_00745BB8;
extern uint32_t data_00745E00;
extern uint32_t data_00745E40;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606810(void);
void func_0060B0BC(void);

static const char *const names_00745E00[8] = {
    "wait00",
    "move00",
    "run00",
    "fall00",
    "damage00",
    "piyopiyo00",
    "jitabata00",
    "dead00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A06F4(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyRope";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\215\201[\203v(\214\365)";
    data_0070AF28 = 0xFFFFFFFFu;
    data_0070AF2C = 0xFFFFFFFFu;
    data_0070AF30 = 0x00000000u;
    data_0070AF34 = 0x00000000u;
    data_00745930 = 0x00000000u;
    data_00745934 = 0x00000005u;
    data_00745938 = (uintptr_t)&data_0074593C;
    uintptr_t v0 = data_0070AF20;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698C34 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00745930;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00745950, (uintptr_t)&func_0060B0BC, 0x00000203u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00745930, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyBubbleRope";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203o\203u\203\215\201[\203v(\210\305)";
    data_00745B98 = 0x00000000u;
    data_00745B9C = 0x00000005u;
    data_00745BA0 = (uintptr_t)&data_00745BA4;
    uintptr_t v2 = data_0070AF24;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00698C38 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00745B98;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00745BB8, (uintptr_t)&func_00606810, 0x00000258u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00745B98, (uintptr_t)((char *)stk + 48), v3);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00745E00, names_00745E00, 8);
    func_004FC6FC((uintptr_t)&data_00745E40, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
