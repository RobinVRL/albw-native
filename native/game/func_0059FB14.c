/* USA 0059FB14 (EU 0059FAEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 19 other stores, 6 calls, 4 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069500C;
extern uint32_t data_00695010;
extern uint32_t data_00695014;
extern uint32_t data_00695018;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A550;
extern uint32_t data_0070A554;
extern uint32_t data_0070A558;
extern uint32_t data_0070A55C;
extern uint32_t data_0070A560;
extern uint32_t data_0070A564;
extern uint32_t data_0070A568;
extern uint32_t data_0070A56C;
extern uint32_t data_00735E4C;
extern uint32_t data_00735E50;
extern uint32_t data_00735E54;
extern uint32_t data_00735E58;
extern uint32_t data_00735E6C;
extern uint32_t data_007360B4;
extern uint32_t data_007360B8;
extern uint32_t data_007360BC;
extern uint32_t data_007360C0;
extern uint32_t data_007360D4;
extern uint32_t data_0073631C;
extern uint32_t data_00736320;
extern uint32_t data_00736324;
extern uint32_t data_00736328;
extern uint32_t data_0073633C;
extern uint32_t data_00736584;
extern uint32_t data_00736588;
extern uint32_t data_0073658C;
extern uint32_t data_00736590;
extern uint32_t data_007365A4;
extern uint32_t data_007367EC;
extern uint32_t data_0073682C;
extern uint32_t data_00736830;
extern uint32_t data_00736834;
extern uint32_t data_00736838;
extern uint32_t data_00736880;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AF90(void);

static const char *const names_007367EC[8] = {
    "move",
    "touchdown",
    "damage",
    "dead",
    "jitabata",
    "piyopiyo",
    "LavaAppear",
    "LavaDisappear",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059FB14(void) {
    uintptr_t stk[30];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyAmos";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203A\203\202\203X";
    data_0070A560 = 0xFFFFFFFFu;
    data_0070A564 = 0xFFFFFFFFu;
    data_0070A568 = 0x00000000u;
    data_0070A56C = 0x00000000u;
    data_00735E4C = 0x00000000u;
    data_00735E50 = 0x00000005u;
    data_00735E54 = (uintptr_t)&data_00735E58;
    uintptr_t v0 = data_0070A550;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069500C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00735E4C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00735E6C, (uintptr_t)&func_0060AF90, 0x000001F4u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00735E4C, (uintptr_t)((char *)stk + 48), v1);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyGimos";
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"\203M\203\202\203X";
    data_007360B4 = 0x00000000u;
    data_007360B8 = 0x00000005u;
    data_007360BC = (uintptr_t)&data_007360C0;
    uintptr_t v2 = data_0070A554;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00695010 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007360B4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 64);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007360D4, (uintptr_t)&func_0060AF90, 0x000001F5u, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_007360B4, (uintptr_t)((char *)stk + 64), v3);
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"EnemyIceGimos";
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"\203A\203C\203X\203M\203\202\203X";
    data_0073631C = 0x00000000u;
    data_00736320 = 0x00000005u;
    data_00736324 = (uintptr_t)&data_00736328;
    uintptr_t v4 = data_0070A558;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_00695014 : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073631C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 80);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073633C, (uintptr_t)&func_0060AF90, 0x000001F6u, (uintptr_t)((char *)stk + 72), (uintptr_t)&data_0073631C, (uintptr_t)((char *)stk + 80), v5);
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"EnemyFireGimos";
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"\203t\203@\203C\203A\203M\203\202\203X";
    data_00736584 = 0x00000000u;
    data_00736588 = 0x00000005u;
    data_0073658C = (uintptr_t)&data_00736590;
    uintptr_t v6 = data_0070A55C;
    uintptr_t v7 = v6 == 0x0u ? (uintptr_t)&data_00695018 : v6;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00736584;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 96);
    *(uintptr_t *)((char *)stk + 8) = v7;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007365A4, (uintptr_t)&func_0060AF90, 0x000001F8u, (uintptr_t)((char *)stk + 88), (uintptr_t)&data_00736584, (uintptr_t)((char *)stk + 96), v7);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 32) = 0x0u;
    *(uint8_t *)((char *)stk + 33) = 0x0u;
    *(uint8_t *)((char *)stk + 34) = 0x0u;
    *(uint8_t *)((char *)stk + 35) = 0xFFu;
    *(uint8_t *)((char *)stk + 36) = 0xFFu;
    fill_names((sead_SafeString *)&data_007367EC, names_007367EC, 8);
    data_0073682C = 0x00000000u /* 0.0 f */;
    data_00736830 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00736834 = 0xBECCCCCDu /* -0.4000000059604645 f */;
    func_004FC6FC((uintptr_t)&data_00736838, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 32), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 20);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 20) = 0x0u;
    *(uint8_t *)((char *)stk + 21) = 0x0u;
    *(uint8_t *)((char *)stk + 22) = 0x0u;
    *(uint8_t *)((char *)stk + 23) = 0xFFu;
    *(uint8_t *)((char *)stk + 24) = 0xFFu;
    *(uintptr_t *)((char *)stk + 104) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 108) = (uintptr_t)"Ice_Gimos";
    func_004FC5F8((uintptr_t)&data_00736880, (uintptr_t)((char *)stk + 104), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 20), 0x0000000Bu);
}
