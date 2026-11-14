/* USA 005A0998 (EU 005A0970): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069A8D0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B440;
extern uint32_t data_0070B444;
extern uint32_t data_0070B448;
extern uint32_t data_0070B44C;
extern uint32_t data_0070B450;
extern uint32_t data_0070B454;
extern uint32_t data_0074BA24;
extern uint32_t data_0074BA28;
extern uint32_t data_0074BA2C;
extern uint32_t data_0074BA30;
extern uint32_t data_0074BA44;
extern uint32_t data_0074BC8C;
extern uint32_t data_0074BCC4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011C8B4(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B0F4(void);

static const char *const names_0074BC8C[7] = {
    "attack",
    "damage",
    "move",
    "jitabata",
    "piyopiyo",
    "wait",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A0998(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074BC8C, names_0074BC8C, 7);
    data_0070B448 = 0xFFFFFFFFu;
    data_0070B44C = 0xFFFFFFFFu;
    data_0070B450 = 0x00000000u;
    data_0070B454 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, (uintptr_t)&func_0011C8B4);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B444 = ret0;
    func_004FC6FC((uintptr_t)&data_0074BCC4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyStal";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203X\203^\203\213";
    data_0074BA24 = 0x00000000u;
    data_0074BA28 = 0x00000005u;
    data_0074BA2C = (uintptr_t)&data_0074BA30;
    uintptr_t v0 = data_0070B440;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069A8D0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074BA24;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074BA44, (uintptr_t)&func_0060B0F4, 0x000001FDu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074BA24, (uintptr_t)((char *)stk + 32), v1);
}
