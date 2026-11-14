/* USA 005A3FD8 (EU 005A3FB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695A80;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A6F8;
extern uint32_t data_0070A700;
extern uint32_t data_0070A704;
extern uint32_t data_0070A708;
extern uint32_t data_0070A70C;
extern uint32_t data_00738D6C;
extern uint32_t data_00738D70;
extern uint32_t data_00738D74;
extern uint32_t data_00738D78;
extern uint32_t data_00738D8C;
extern uint32_t data_00738FD4;
extern uint32_t data_00739014;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602770(void);

static const char *const names_00738FD4[8] = {
    "wait",
    "walk",
    "guard",
    "damage",
    "dead_st",
    "dead_ed",
    "piyopiyo",
    "jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A3FD8(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00738FD4, names_00738FD4, 8);
    data_0070A700 = 0xFFFFFFFFu;
    data_0070A704 = 0xFFFFFFFFu;
    data_0070A708 = 0x00000000u;
    data_0070A70C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00739014, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyCoppi";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203R\203b\203s";
    data_00738D6C = 0x00000000u;
    data_00738D70 = 0x00000005u;
    data_00738D74 = (uintptr_t)&data_00738D78;
    uintptr_t v0 = data_0070A6F8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695A80 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00738D6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00738D8C, (uintptr_t)&func_00602770, 0x00000244u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00738D6C, (uintptr_t)((char *)stk + 32), v1);
}
