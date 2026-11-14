/* USA 005A517C (EU 005A5154): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (14 names), 23 other stores, 11 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697A3C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ACB0;
extern uint32_t data_0070ACB4;
extern uint32_t data_0070ACB8;
extern uint32_t data_0070ACBC;
extern uint32_t data_0070ACC0;
extern uint32_t data_0070ACC4;
extern uint32_t data_0070ACC8;
extern uint32_t data_0070ACCC;
extern uint32_t data_0070ACD0;
extern uint32_t data_0070ACD4;
extern uint32_t data_0070ACD8;
extern uint32_t data_0070ACDC;
extern uint32_t data_0070ACE0;
extern uint32_t data_0070ACE4;
extern uint32_t data_0070ACE8;
extern uint32_t data_0070ACEC;
extern uint32_t data_0070ACF0;
extern uint32_t data_0070ACF4;
extern uint32_t data_00741AE8;
extern uint32_t data_00741AEC;
extern uint32_t data_00741AF0;
extern uint32_t data_00741AF4;
extern uint32_t data_00741B08;
extern uint32_t data_00741D50;
extern uint32_t data_00741DC0;
extern uint32_t data_00741DC4;
extern uint32_t data_00741DC8;
extern uint32_t data_00741DCC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117530(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602938(void);

static const char *const names_00741D50[14] = {
    "wait",
    "walk0",
    "walk1",
    "find",
    "fire",
    "burn_st",
    "burn",
    "burn_turn",
    "burn_ed",
    "jitabata",
    "piyopiyo",
    "damage",
    "nondamage",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A517C(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00741D50, names_00741D50, 14);
    data_0070ACE8 = 0xFFFFFFFFu;
    data_0070ACEC = 0xFFFFFFFFu;
    data_0070ACF0 = 0x00000000u;
    data_0070ACF4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E000000u, (uintptr_t)&func_00117530);
    data_0070ACB4 = ret0;
    uintptr_t ret1 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070ACB8 = ret1;
    uintptr_t ret2 = func_00114608(0x4C088889u, 0x00000000u);
    data_0070ACBC = ret2;
    uintptr_t ret3 = func_00114608(0x4D93E93Fu, 0x00000000u);
    data_0070ACC0 = ret3;
    uintptr_t ret4 = func_00114608(0x4BB60B61u, 0x00000000u);
    data_0070ACC4 = ret4;
    uintptr_t ret5 = func_00114608(0x4CB60B61u, 0x00000000u);
    data_0070ACC8 = ret5;
    uintptr_t ret6 = func_00114608(0x00000000u, 0x00000000u);
    data_0070ACCC = ret6;
    uintptr_t ret7 = func_00114608(0x4B888889u, 0x00000000u);
    data_0070ACD0 = ret7;
    data_0070ACD4 = ret1;
    data_0070ACD8 = ret2;
    uintptr_t ret8 = func_00114608(0xCCE38E39u, (uintptr_t)&data_0070ACD8);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 28);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 28) = 0x0u;
    *(uint8_t *)((char *)stk + 29) = 0x0u;
    *(uint8_t *)((char *)stk + 30) = 0x0u;
    *(uint8_t *)((char *)stk + 31) = 0xFFu;
    *(uint8_t *)((char *)stk + 32) = 0xFFu;
    data_0070ACDC = ret8;
    data_0070ACE0 = ret1;
    data_0070ACE4 = ret4;
    data_00741DC0 = 0x00000000u /* 0.0 f */;
    data_00741DC4 = 0x00000000u /* 0.0 f */;
    data_00741DC8 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    func_004FC6FC((uintptr_t)&data_00741DCC, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 28), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"EnemyLynel";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203\211\203C\203l\203\213";
    data_00741AE8 = 0x00000000u;
    data_00741AEC = 0x00000005u;
    data_00741AF0 = (uintptr_t)&data_00741AF4;
    uintptr_t v0 = data_0070ACB0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697A3C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00741AE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00741B08, (uintptr_t)&func_00602938, 0x0000026Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00741AE8, (uintptr_t)((char *)stk + 40), v1);
}
