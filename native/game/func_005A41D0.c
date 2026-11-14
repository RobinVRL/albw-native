/* USA 005A41D0 (EU 005A41A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 11 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696764;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A898;
extern uint32_t data_0070A89C;
extern uint32_t data_0070A8A0;
extern uint32_t data_0070A8A4;
extern uint32_t data_0070A8A8;
extern uint32_t data_0070A8AC;
extern uint32_t data_0073BD84;
extern uint32_t data_0073BD88;
extern uint32_t data_0073BD8C;
extern uint32_t data_0073BD90;
extern uint32_t data_0073BDA4;
extern uint32_t data_0073BFEC;
extern uint32_t data_0073C034;
extern uint32_t data_0073C038;
extern uint32_t data_0073C03C;
extern uint32_t data_0073C040;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116E84(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602814(void);

static const char *const names_0073BFEC[9] = {
    "walk",
    "damage",
    "change",
    "dead_front_st",
    "dead_front_ed",
    "dead_back_st",
    "dead_back_ed",
    "jitabata",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A41D0(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073BFEC, names_0073BFEC, 9);
    data_0070A8A0 = 0xFFFFFFFFu;
    data_0070A8A4 = 0xFFFFFFFFu;
    data_0070A8A8 = 0x00000000u;
    data_0070A8AC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C360B61u, (uintptr_t)&func_00116E84);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A89C = ret0;
    data_0073C034 = 0x00000000u /* 0.0 f */;
    data_0073C038 = 0x3FC00000u /* 1.5 f */;
    data_0073C03C = 0xBF000000u /* -0.5 f */;
    func_004FC6FC((uintptr_t)&data_0073C040, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyGibdo";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203M\203u\203h";
    data_0073BD84 = 0x00000000u;
    data_0073BD88 = 0x00000005u;
    data_0073BD8C = (uintptr_t)&data_0073BD90;
    uintptr_t v0 = data_0070A898;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696764 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073BD84;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073BDA4, (uintptr_t)&func_00602814, 0x00000229u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073BD84, (uintptr_t)((char *)stk + 32), v1);
}
