/* USA 005AA7C8 (EU 005AA7A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (16 names), 10 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069847C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE28;
extern uint32_t data_0070AE30;
extern uint32_t data_0070AE34;
extern uint32_t data_0070AE38;
extern uint32_t data_0070AE3C;
extern uint32_t data_007435BC;
extern uint32_t data_007435C0;
extern uint32_t data_007435C4;
extern uint32_t data_007435C8;
extern uint32_t data_007435DC;
extern uint32_t data_00743824;
extern uint32_t data_007438A4;
extern uint32_t data_007438A8;
extern uint32_t data_007438AC;
extern uint32_t data_007438B0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603154(void);

static const char *const names_00743824[16] = {
    "fly_wait",
    "wait",
    "walk_st",
    "walk_ed",
    "catch",
    "fly_hide_st",
    "fly_hide_md",
    "fly_hide_ed",
    "damage",
    "dead_st",
    "dead_ed",
    "up",
    "fly_hide_guard",
    "jitabata",
    "piyopiyo",
    "fly_jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AA7C8(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00743824, names_00743824, 16);
    data_0070AE30 = 0xFFFFFFFFu;
    data_0070AE34 = 0xFFFFFFFFu;
    data_0070AE38 = 0x00000000u;
    data_0070AE3C = 0x00000000u;
    data_007438A4 = 0x00000000u /* 0.0 f */;
    data_007438A8 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_007438AC = 0xBF19999Au /* -0.6000000238418579 f */;
    func_004FC6FC((uintptr_t)&data_007438B0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyOmugai";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203I\203E\203\200\203K\203C";
    data_007435BC = 0x00000000u;
    data_007435C0 = 0x00000005u;
    data_007435C4 = (uintptr_t)&data_007435C8;
    uintptr_t v0 = data_0070AE28;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069847C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007435BC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007435DC, (uintptr_t)&func_00603154, 0x0000025Cu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007435BC, (uintptr_t)((char *)stk + 32), v1);
}
