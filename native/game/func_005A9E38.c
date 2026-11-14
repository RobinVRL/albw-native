/* USA 005A9E38 (EU 005A9E10): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006977B8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AC38;
extern uint32_t data_0070AC40;
extern uint32_t data_0070AC44;
extern uint32_t data_0070AC48;
extern uint32_t data_0070AC4C;
extern uint32_t data_00740F48;
extern uint32_t data_00740F4C;
extern uint32_t data_00740F50;
extern uint32_t data_00740F54;
extern uint32_t data_00740F68;
extern uint32_t data_007411B0;
extern uint32_t data_007411F0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006030D4(void);

static const char *const names_007411B0[8] = {
    "wait",
    "run",
    "water_to_field_st",
    "water_to_field_ed",
    "damage",
    "jitabata",
    "piyopiyo",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A9E38(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKuLand";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\227\244\217\343\203N\201[";
    data_0070AC40 = 0xFFFFFFFFu;
    data_0070AC44 = 0xFFFFFFFFu;
    data_0070AC48 = 0x00000000u;
    data_0070AC4C = 0x00000000u;
    data_00740F48 = 0x00000000u;
    data_00740F4C = 0x00000005u;
    data_00740F50 = (uintptr_t)&data_00740F54;
    uintptr_t v0 = data_0070AC38;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006977B8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00740F48;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00740F68, (uintptr_t)&func_006030D4, 0x00000271u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00740F48, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_007411B0, names_007411B0, 8);
    func_004FC6FC((uintptr_t)&data_007411F0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
