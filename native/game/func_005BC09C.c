/* USA 005BC09C (EU 005BC074): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 11 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698280;
extern uint32_t data_00698284;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ADC8;
extern uint32_t data_0070ADCC;
extern uint32_t data_0070ADD0;
extern uint32_t data_0070ADD8;
extern uint32_t data_0070ADDC;
extern uint32_t data_0070ADE0;
extern uint32_t data_0070ADE4;
extern uint32_t data_0070ADE8;
extern uint32_t data_00742814;
extern uint32_t data_00742818;
extern uint32_t data_0074281C;
extern uint32_t data_00742820;
extern uint32_t data_00742834;
extern uint32_t data_00742A7C;
extern uint32_t data_00742A80;
extern uint32_t data_00742A84;
extern uint32_t data_00742A88;
extern uint32_t data_00742A9C;
extern uint32_t data_00742CE4;
extern uint32_t data_00742D24;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00118710(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604A0C(void);

static const char *const names_0070ADE8[1] = {
    "damage2",
};
static const char *const names_00742CE4[8] = {
    "Moldworm1",
    "Moldworm2",
    "Moldworm3",
    "Moldworm4",
    "wait_1",
    "damage",
    "wait_1",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BC09C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070ADE8, names_0070ADE8, 1);
    fill_names((sead_SafeString *)&data_00742CE4, names_00742CE4, 8);
    data_0070ADD8 = 0xFFFFFFFFu;
    data_0070ADDC = 0xFFFFFFFFu;
    data_0070ADE0 = 0x00000000u;
    data_0070ADE4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4BB60B61u, (uintptr_t)&func_00118710);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070ADD0 = ret0;
    func_004FC5F8((uintptr_t)&data_00742D24, (uintptr_t)&data_00742CE4, 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyMoldworm";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\202\203\213\203h\203A\201[\203\200";
    data_00742814 = 0x00000000u;
    data_00742818 = 0x00000005u;
    data_0074281C = (uintptr_t)&data_00742820;
    uintptr_t v0 = data_0070ADC8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698280 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00742814;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00742834, (uintptr_t)&func_00604A0C, 0x00000251u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00742814, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyFireMoldworm";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203t\203@\203C\203A\203\202\203\213\203h\203A\201[\203\200";
    data_00742A7C = 0x00000000u;
    data_00742A80 = 0x00000005u;
    data_00742A84 = (uintptr_t)&data_00742A88;
    uintptr_t v2 = data_0070ADCC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00698284 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00742A7C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00742A9C, (uintptr_t)&func_00604A0C, 0x00000252u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00742A7C, (uintptr_t)((char *)stk + 48), v3);
}
