/* USA 005BA5DC (EU 005BA5B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (12 names), 10 other stores, 5 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695BF0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A748;
extern uint32_t data_0070A74C;
extern uint32_t data_0070A750;
extern uint32_t data_0070A754;
extern uint32_t data_0070A758;
extern uint32_t data_0070A75C;
extern uint32_t data_0070A760;
extern uint32_t data_0070A764;
extern uint32_t data_00739B2C;
extern uint32_t data_00739B30;
extern uint32_t data_00739B34;
extern uint32_t data_00739B38;
extern uint32_t data_00739B4C;
extern uint32_t data_00739D94;
extern uint32_t data_00739DF4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116F64(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006047B8(void);

static const char *const names_00739D94[12] = {
    "wait",
    "run",
    "stop",
    "kyorokyoro",
    "rock",
    "shake",
    "revive",
    "dead",
    "jitabata",
    "DeadRock",
    "rock",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BA5DC(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyDeadRock";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203f\203b\203h\203\215\203b\203N";
    data_0070A758 = 0xFFFFFFFFu;
    data_0070A75C = 0xFFFFFFFFu;
    data_0070A760 = 0x00000000u;
    data_0070A764 = 0x00000000u;
    data_00739B2C = 0x00000000u;
    data_00739B30 = 0x00000005u;
    data_00739B34 = (uintptr_t)&data_00739B38;
    uintptr_t v0 = data_0070A748;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695BF0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00739B2C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00739B4C, (uintptr_t)&func_006047B8, 0x0000021Eu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00739B2C, (uintptr_t)((char *)stk + 32), v1);
    fill_names((sead_SafeString *)&data_00739D94, names_00739D94, 12);
    uintptr_t ret1 = func_00114608(0x4D360B61u, (uintptr_t)&func_00116F64);
    data_0070A74C = ret1;
    uintptr_t ret2 = func_00114608(0x4DC71C72u, 0x00000000u);
    data_0070A750 = ret2;
    uintptr_t ret3 = func_00114608(0x4C1F49F5u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A754 = ret3;
    func_004FC6FC((uintptr_t)&data_00739DF4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
