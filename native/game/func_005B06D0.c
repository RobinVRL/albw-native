/* USA 005B06D0 (EU 005B06A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697700;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AC20;
extern uint32_t data_0070AC28;
extern uint32_t data_0070AC2C;
extern uint32_t data_0070AC30;
extern uint32_t data_0070AC34;
extern uint32_t data_00740C48;
extern uint32_t data_00740C4C;
extern uint32_t data_00740C50;
extern uint32_t data_00740C54;
extern uint32_t data_00740C68;
extern uint32_t data_00740EB0;
extern uint32_t data_00740F00;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006039C0(void);

static const char *const names_00740EB0[10] = {
    "wait",
    "run",
    "field_to_water_st",
    "field_to_water_ed",
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

void func_005B06D0(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKuChase";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203N\201[\203`\203F\203C\203X";
    data_0070AC28 = 0xFFFFFFFFu;
    data_0070AC2C = 0xFFFFFFFFu;
    data_0070AC30 = 0x00000000u;
    data_0070AC34 = 0x00000000u;
    data_00740C48 = 0x00000000u;
    data_00740C4C = 0x00000005u;
    data_00740C50 = (uintptr_t)&data_00740C54;
    uintptr_t v0 = data_0070AC20;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697700 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00740C48;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00740C68, (uintptr_t)&func_006039C0, 0x00000270u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00740C48, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00740EB0, names_00740EB0, 10);
    func_004FC6FC((uintptr_t)&data_00740F00, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
