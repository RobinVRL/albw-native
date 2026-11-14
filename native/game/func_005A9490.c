/* USA 005A9490 (EU 005A9468): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (10 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695864;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A6A8;
extern uint32_t data_0070A6B0;
extern uint32_t data_0070A6B4;
extern uint32_t data_0070A6B8;
extern uint32_t data_0070A6BC;
extern uint32_t data_0070A6C0;
extern uint32_t data_007384CC;
extern uint32_t data_007384D0;
extern uint32_t data_007384D4;
extern uint32_t data_007384D8;
extern uint32_t data_007384EC;
extern uint32_t data_00738734;
extern uint32_t data_0073877C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603028(void);

static const char *const names_0070A6C0[1] = {
    "Bubble",
};
static const char *const names_00738734[9] = {
    "wait",
    "tornado",
    "fall",
    "escape",
    "revival",
    "jitabata",
    "piyopiyo",
    "damage",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A9490(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070A6C0, names_0070A6C0, 1);
    fill_names((sead_SafeString *)&data_00738734, names_00738734, 9);
    data_0070A6B0 = 0xFFFFFFFFu;
    data_0070A6B4 = 0xFFFFFFFFu;
    data_0070A6B8 = 0x00000000u;
    data_0070A6BC = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0073877C, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyBubble";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203o\203u\203\213";
    data_007384CC = 0x00000000u;
    data_007384D0 = 0x00000005u;
    data_007384D4 = (uintptr_t)&data_007384D8;
    uintptr_t v0 = data_0070A6A8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695864 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007384CC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007384EC, (uintptr_t)&func_00603028, 0x00000227u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007384CC, (uintptr_t)((char *)stk + 32), v1);
}
