/* USA 005A96C4 (EU 005A969C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 10 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006959D4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A6E0;
extern uint32_t data_0070A6E8;
extern uint32_t data_0070A6EC;
extern uint32_t data_0070A6F0;
extern uint32_t data_0070A6F4;
extern uint32_t data_00738A80;
extern uint32_t data_00738A84;
extern uint32_t data_00738A88;
extern uint32_t data_00738A8C;
extern uint32_t data_00738AA0;
extern uint32_t data_00738CE8;
extern uint32_t data_00738D18;
extern uint32_t data_00738D1C;
extern uint32_t data_00738D20;
extern uint32_t data_00738D24;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603054(void);

static const char *const names_00738CE8[6] = {
    "appear",
    "wait",
    "bomb_st",
    "bomb_end",
    "damage",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A96C4(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Clione";
    fill_names((sead_SafeString *)&data_00738CE8, names_00738CE8, 6);
    data_0070A6E8 = 0xFFFFFFFFu;
    data_0070A6EC = 0xFFFFFFFFu;
    data_0070A6F0 = 0x00000000u;
    data_0070A6F4 = 0x00000000u;
    data_00738D18 = 0x00000000u /* 0.0 f */;
    data_00738D1C = 0x3F000000u /* 0.5 f */;
    data_00738D20 = 0xBF000000u /* -0.5 f */;
    func_004FC5F8((uintptr_t)&data_00738D24, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203l\203I\203\212\201[\203N";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyClione";
    data_00738A80 = 0x00000000u;
    data_00738A84 = 0x00000005u;
    data_00738A88 = (uintptr_t)&data_00738A8C;
    uintptr_t v0 = data_0070A6E0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006959D4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00738A80;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00738AA0, (uintptr_t)&func_00603054, 0x0000024Cu, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00738A80, (uintptr_t)((char *)stk + 32), v1);
}
