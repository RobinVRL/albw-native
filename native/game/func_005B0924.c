/* USA 005B0924 (EU 005B08FC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 12 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006983B4;
extern uint32_t data_006983B8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE08;
extern uint32_t data_0070AE0C;
extern uint32_t data_0070AE10;
extern uint32_t data_0070AE14;
extern uint32_t data_0070AE18;
extern uint32_t data_0070AE1C;
extern uint32_t data_0070AE20;
extern uint32_t data_0070AE24;
extern uint32_t data_0074305C;
extern uint32_t data_00743060;
extern uint32_t data_00743064;
extern uint32_t data_00743068;
extern uint32_t data_0074307C;
extern uint32_t data_007432C4;
extern uint32_t data_007432C8;
extern uint32_t data_007432CC;
extern uint32_t data_007432D0;
extern uint32_t data_007432E4;
extern uint32_t data_0074352C;
extern uint32_t data_00743574;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116784(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006039EC(void);

static const char *const names_0074352C[9] = {
    "walk",
    "wait",
    "attack_st",
    "attack_ed",
    "damage",
    "jitabata",
    "piyopiyo",
    "dead_st",
    "dead_ed",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B0924(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074352C, names_0074352C, 9);
    data_0070AE18 = 0xFFFFFFFFu;
    data_0070AE1C = 0xFFFFFFFFu;
    data_0070AE20 = 0x00000000u;
    data_0070AE24 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D4CCCCDu, (uintptr_t)&func_00116784);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AE10 = ret0;
    data_0070AE14 = ret0;
    func_004FC6FC((uintptr_t)&data_00743574, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyOctorok";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203I\203N\203^\203\215\203b\203N";
    data_0074305C = 0x00000000u;
    data_00743060 = 0x00000005u;
    data_00743064 = (uintptr_t)&data_00743068;
    uintptr_t v0 = data_0070AE08;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006983B4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074305C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074307C, (uintptr_t)&func_006039EC, 0x00000236u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074305C, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemySlarok";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203X\203\211\203\215\203b\203N";
    data_007432C4 = 0x00000000u;
    data_007432C8 = 0x00000005u;
    data_007432CC = (uintptr_t)&data_007432D0;
    uintptr_t v2 = data_0070AE0C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006983B8 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007432C4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007432E4, (uintptr_t)&func_006039EC, 0x00000237u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_007432C4, (uintptr_t)((char *)stk + 48), v3);
}
