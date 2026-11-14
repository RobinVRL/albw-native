/* USA 005DEDA0 (EU 005DED78): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (24 names), 19 other stores, 11 calls, 3 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006970D4;
extern uint32_t data_006970D8;
extern uint32_t data_006970DC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AAD8;
extern uint32_t data_0070AADC;
extern uint32_t data_0070AAE0;
extern uint32_t data_0070AAE4;
extern uint32_t data_0070AAE8;
extern uint32_t data_0070AAEC;
extern uint32_t data_0070AAF0;
extern uint32_t data_0070AAF4;
extern uint32_t data_0070AAF8;
extern uint32_t data_0070AB00;
extern uint32_t data_0070AB04;
extern uint32_t data_0070AB08;
extern uint32_t data_0070AB0C;
extern uint32_t data_0073F028;
extern uint32_t data_0073F02C;
extern uint32_t data_0073F030;
extern uint32_t data_0073F034;
extern uint32_t data_0073F048;
extern uint32_t data_0073F290;
extern uint32_t data_0073F294;
extern uint32_t data_0073F298;
extern uint32_t data_0073F29C;
extern uint32_t data_0073F2B0;
extern uint32_t data_0073F4F8;
extern uint32_t data_0073F4FC;
extern uint32_t data_0073F500;
extern uint32_t data_0073F504;
extern uint32_t data_0073F518;
extern uint32_t data_0073F760;
extern uint32_t data_0073F7E0;
extern uint32_t data_0073F800;
extern uint32_t data_0073F820;
extern uint32_t data_0073F868;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00118C88(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060752C(void);
void func_00609F38(void);

static const char *const names_0073F760[24] = {
    "ironball_op00",
    "ironball_wait00",
    "ironball_wait01",
    "ironball_walk00",
    "ironball_walk01",
    "ironball_find00",
    "ironball_kamae00",
    "ironball_attack00_st",
    "ironball_attack00_md",
    "ironball_attack00_ed",
    "ironball_guard00",
    "ironball_damge00",
    "ironball_fall00",
    "ironball_piyopiyo00",
    "ironball_dead_st00",
    "ironball_dead_ed00",
    "Heishi1",
    "Heishi_ironball",
    "Heishi_ironball_chain",
    "Heishi_ironball_handle",
    "Heishi_great1",
    "Heishi_great_ironball",
    "Heishi_great_ironball_chain",
    "Heishi_great_ironball_handle",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005DEDA0(void) {
    uintptr_t stk[24];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073F760, names_0073F760, 24);
    data_0070AB00 = 0xFFFFFFFFu;
    data_0070AB04 = 0xFFFFFFFFu;
    data_0070AB08 = 0x00000000u;
    data_0070AB0C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E000000u, (uintptr_t)&func_00118C88);
    data_0070AAE4 = ret0;
    uintptr_t ret1 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070AAE8 = ret1;
    uintptr_t ret2 = func_00114608(0x4BB60B61u, 0x00000000u);
    data_0070AAEC = ret2;
    uintptr_t ret3 = func_00114608(0x4C888889u, 0x00000000u);
    data_0070AAF0 = ret3;
    uintptr_t ret4 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0070AAF4 = ret4;
    uintptr_t ret5 = func_00114608(0x4EC00000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 32) = 0x0u;
    *(uint8_t *)((char *)stk + 33) = 0x0u;
    *(uint8_t *)((char *)stk + 34) = 0x0u;
    *(uint8_t *)((char *)stk + 35) = 0xFFu;
    *(uint8_t *)((char *)stk + 36) = 0xFFu;
    data_0070AAF8 = ret5;
    func_004FC5F8((uintptr_t)&data_0073F820, (uintptr_t)&data_0073F7E0, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 32), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 20);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 20) = 0x0u;
    *(uint8_t *)((char *)stk + 21) = 0x0u;
    *(uint8_t *)((char *)stk + 22) = 0x0u;
    *(uint8_t *)((char *)stk + 23) = 0xFFu;
    *(uint8_t *)((char *)stk + 24) = 0xFFu;
    func_004FC5F8((uintptr_t)&data_0073F868, (uintptr_t)&data_0073F800, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 20), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyIronSoldier";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\223S\213\205\225\272\216m(\213\340)";
    data_0073F028 = 0x00000000u;
    data_0073F02C = 0x00000005u;
    data_0073F030 = (uintptr_t)&data_0073F034;
    uintptr_t v0 = data_0070AAD8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006970D4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073F028;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073F048, (uintptr_t)&func_0060752C, 0x00000255u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073F028, (uintptr_t)((char *)stk + 48), v1);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyIronSoldierSilver";
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"\223S\213\205\225\272\216m(\213\342)";
    data_0073F290 = 0x00000000u;
    data_0073F294 = 0x00000005u;
    data_0073F298 = (uintptr_t)&data_0073F29C;
    uintptr_t v2 = data_0070AADC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006970D8 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073F290;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 64);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073F2B0, (uintptr_t)&func_00609F38, 0x00000256u, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_0073F290, (uintptr_t)((char *)stk + 64), v3);
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"EnemyIronSoldierFire";
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"\223S\213\205\225\272\216m(\211\212)";
    data_0073F4F8 = 0x00000000u;
    data_0073F4FC = 0x00000005u;
    data_0073F500 = (uintptr_t)&data_0073F504;
    uintptr_t v4 = data_0070AAE0;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_006970DC : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073F4F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 80);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073F518, (uintptr_t)&func_0060752C, 0x00000257u, (uintptr_t)((char *)stk + 72), (uintptr_t)&data_0073F4F8, (uintptr_t)((char *)stk + 80), v5);
}
