/* USA 005A0D54 (EU 005A0D2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (12 names), 10 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069B2AC;
extern uint32_t data_0069B2B0;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B630;
extern uint32_t data_0070B634;
extern uint32_t data_0070B638;
extern uint32_t data_0070B63C;
extern uint32_t data_0070B640;
extern uint32_t data_0070B644;
extern uint32_t data_0070B648;
extern uint32_t data_0074EAF4;
extern uint32_t data_0074EAF8;
extern uint32_t data_0074EAFC;
extern uint32_t data_0074EB00;
extern uint32_t data_0074EB14;
extern uint32_t data_0074ED5C;
extern uint32_t data_0074ED60;
extern uint32_t data_0074ED64;
extern uint32_t data_0074ED68;
extern uint32_t data_0074ED7C;
extern uint32_t data_0074EFC4;
extern uint32_t data_0074F01C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A470(void);
void func_0060B14C(void);

static const char *const names_0070B648[1] = {
    "mouth",
};
static const char *const names_0074EFC4[11] = {
    "water_wait",
    "water_up",
    "water_turn",
    "water_fire_st",
    "water_fire_ed",
    "water_fire",
    "water_dive",
    "water_damage",
    "water_dead_fire",
    "water_dead",
    "water_piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A0D54(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070B648, names_0070B648, 1);
    fill_names((sead_SafeString *)&data_0074EFC4, names_0074EFC4, 11);
    data_0070B638 = 0xFFFFFFFFu;
    data_0070B63C = 0xFFFFFFFFu;
    data_0070B640 = 0x00000000u;
    data_0070B644 = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0074F01C, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyZora";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203]\201[\203\211\223G \214\365";
    data_0074EAF4 = 0x00000000u;
    data_0074EAF8 = 0x00000005u;
    data_0074EAFC = (uintptr_t)&data_0074EB00;
    uintptr_t v0 = data_0070B630;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069B2AC : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074EAF4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074EB14, (uintptr_t)&func_0060B14C, 0x00000233u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074EAF4, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyKu";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203N\201[\223G \210\305";
    data_0074ED5C = 0x00000000u;
    data_0074ED60 = 0x00000005u;
    data_0074ED64 = (uintptr_t)&data_0074ED68;
    uintptr_t v2 = data_0070B634;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069B2B0 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074ED5C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074ED7C, (uintptr_t)&func_0060A470, 0x00000259u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074ED5C, (uintptr_t)((char *)stk + 48), v3);
}
