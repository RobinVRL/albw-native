/* USA 005A497C (EU 005A4954): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (16 names), 10 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696BB4;
extern uint32_t data_00696BB8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A9F8;
extern uint32_t data_0070A9FC;
extern uint32_t data_0070AA00;
extern uint32_t data_0070AA04;
extern uint32_t data_0070AA08;
extern uint32_t data_0070AA0C;
extern uint32_t data_0070AA10;
extern uint32_t data_0073D644;
extern uint32_t data_0073D648;
extern uint32_t data_0073D64C;
extern uint32_t data_0073D650;
extern uint32_t data_0073D664;
extern uint32_t data_0073D8AC;
extern uint32_t data_0073D8B0;
extern uint32_t data_0073D8B4;
extern uint32_t data_0073D8B8;
extern uint32_t data_0073D8CC;
extern uint32_t data_0073DB14;
extern uint32_t data_0073DB8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006028A8(void);
void func_006048D0(void);

static const char *const names_0070AA10[1] = {
    "bomb",
};
static const char *const names_0073DB14[15] = {
    "wait",
    "walk",
    "run_st",
    "run",
    "run_ed",
    "turn_l",
    "turn_r",
    "throw",
    "damage",
    "dead_back_st",
    "dead_back_ed",
    "dead_front_st",
    "dead_front_ed",
    "jitabata",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A497C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyHinox";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203q\203m\203b\203N\203X";
    data_0070AA00 = 0xFFFFFFFFu;
    data_0070AA04 = 0xFFFFFFFFu;
    data_0070AA08 = 0x00000000u;
    data_0070AA0C = 0x00000000u;
    data_0073D644 = 0x00000000u;
    data_0073D648 = 0x00000005u;
    data_0073D64C = (uintptr_t)&data_0073D650;
    uintptr_t v0 = data_0070A9F8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696BB4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073D644;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073D664, (uintptr_t)&func_006028A8, 0x0000024Au, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073D644, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyIceHinox";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203A\203C\203X\203q\203m\203b\203N\203X";
    data_0073D8AC = 0x00000000u;
    data_0073D8B0 = 0x00000005u;
    data_0073D8B4 = (uintptr_t)&data_0073D8B8;
    uintptr_t v2 = data_0070A9FC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00696BB8 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073D8AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073D8CC, (uintptr_t)&func_006048D0, 0x0000024Bu, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073D8AC, (uintptr_t)((char *)stk + 48), v3);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070AA10, names_0070AA10, 1);
    fill_names((sead_SafeString *)&data_0073DB14, names_0073DB14, 15);
    func_004FC6FC((uintptr_t)&data_0073DB8C, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
