/* USA 005AF278 (EU 005AF250): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 10 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695AC4;
extern uint32_t data_00695AC8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A710;
extern uint32_t data_0070A714;
extern uint32_t data_0070A718;
extern uint32_t data_0070A71C;
extern uint32_t data_0070A720;
extern uint32_t data_0070A724;
extern uint32_t data_0073905C;
extern uint32_t data_00739060;
extern uint32_t data_00739064;
extern uint32_t data_00739068;
extern uint32_t data_0073907C;
extern uint32_t data_007392C4;
extern uint32_t data_007392C8;
extern uint32_t data_007392CC;
extern uint32_t data_007392D0;
extern uint32_t data_007392E4;
extern uint32_t data_0073952C;
extern uint32_t data_00739554;
extern uint32_t data_0073959C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006038C4(void);

static const char *const names_0073952C[5] = {
    "fly",
    "attack",
    "attack_ed",
    "damage",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AF278(void) {
    uintptr_t stk[22];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"Creepee";
    fill_names((sead_SafeString *)&data_0073952C, names_0073952C, 5);
    data_0070A718 = 0xFFFFFFFFu;
    data_0070A71C = 0xFFFFFFFFu;
    data_0070A720 = 0x00000000u;
    data_0070A724 = 0x00000000u;
    func_004FC5F8((uintptr_t)&data_00739554, (uintptr_t)((char *)stk + 32), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 24) = 0x0u;
    *(uint8_t *)((char *)stk + 25) = 0x0u;
    *(uint8_t *)((char *)stk + 26) = 0x0u;
    *(uint8_t *)((char *)stk + 27) = 0xFFu;
    *(uint8_t *)((char *)stk + 28) = 0xFFu;
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"Creepee";
    func_004FC5F8((uintptr_t)&data_0073959C, (uintptr_t)((char *)stk + 40), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 24), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"EnemyCreepee";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203N\203\212\201[\203s\201[";
    data_0073905C = 0x00000000u;
    data_00739060 = 0x00000005u;
    data_00739064 = (uintptr_t)&data_00739068;
    uintptr_t v0 = data_0070A710;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695AC4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073905C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073907C, (uintptr_t)&func_006038C4, 0x0000024Du, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0073905C, (uintptr_t)((char *)stk + 56), v1);
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"EnemyIceCreepee";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\225X\203N\203\212\201[\203s\201[";
    data_007392C4 = 0x00000000u;
    data_007392C8 = 0x00000005u;
    data_007392CC = (uintptr_t)&data_007392D0;
    uintptr_t v2 = data_0070A714;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00695AC8 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007392C4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007392E4, (uintptr_t)&func_006038C4, 0x0000024Eu, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_007392C4, (uintptr_t)((char *)stk + 72), v3);
}
