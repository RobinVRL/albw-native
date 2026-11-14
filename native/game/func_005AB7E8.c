/* USA 005AB7E8 (EU 005AB7C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C130;
extern uint32_t data_0070C134;
extern uint32_t data_0070C138;
extern uint32_t data_0070C13C;
extern uint32_t data_0075ADB0;
extern uint32_t data_0075ADB4;
extern uint32_t data_0075ADB8;
extern uint32_t data_0075ADBC;
extern uint32_t data_0075ADD0;
extern uint32_t data_0075B018;
extern uint32_t data_0075B01C;
extern uint32_t data_0075B020;
extern uint32_t data_0075B024;
extern uint32_t data_0075B038;
extern uint32_t data_0075B280;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603354(void);

static const char *const names_0075B280[2] = {
    "up",
    "down",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AB7E8(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075ADB0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojPillarUp";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ßt­Æoé";
    data_0070C130 = 0xFFFFFFFFu;
    data_0070C134 = 0xFFFFFFFFu;
    data_0070C138 = 0x00000000u;
    data_0070C13C = 0x00000000u;
    data_0075ADB0 = 0x00000000u;
    data_0075ADB4 = 0x00000005u;
    data_0075ADB8 = (uintptr_t)&data_0075ADBC;
    func_0019B51C((uintptr_t)&data_0075ADD0, (uintptr_t)&func_00603354, 0x000000D6u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075B018;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojPillarUpL";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"ßt­Æoéi2x2j";
    data_0075B018 = 0x00000000u;
    data_0075B01C = 0x00000005u;
    data_0075B020 = (uintptr_t)&data_0075B024;
    func_0019B51C((uintptr_t)&data_0075B038, (uintptr_t)&func_00603354, 0x000000D7u, (uintptr_t)((char *)stk + 32));
    fill_names((sead_SafeString *)&data_0075B280, names_0075B280, 2);
}
