/* USA 005BB4A8 (EU 005BB480): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (9 names), 13 other stores, 5 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006968F8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A8E8;
extern uint32_t data_0070A8EC;
extern uint32_t data_0070A8F0;
extern uint32_t data_0070A8F4;
extern uint32_t data_0070A8F8;
extern uint32_t data_0070A8FC;
extern uint32_t data_0070A900;
extern uint32_t data_0070A904;
extern uint32_t data_0070A908;
extern uint32_t data_0073C8EC;
extern uint32_t data_0073C8F0;
extern uint32_t data_0073C8F4;
extern uint32_t data_0073C8F8;
extern uint32_t data_0073C90C;
extern uint32_t data_0073CB54;
extern uint32_t data_0073CB94;
extern uint32_t data_0073CB98;
extern uint32_t data_0073CB9C;
extern uint32_t data_0073CBA0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116634(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060487C(void);

static const char *const names_0070A908[1] = {
    "GueldMan",
};
static const char *const names_0073CB54[8] = {
    "walk",
    "damage",
    "dead",
    "jitabata",
    "run_st",
    "run_ed",
    "hit",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BB4A8(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070A908, names_0070A908, 1);
    fill_names((sead_SafeString *)&data_0073CB54, names_0073CB54, 8);
    data_0070A8F8 = 0xFFFFFFFFu;
    data_0070A8FC = 0xFFFFFFFFu;
    data_0070A900 = 0x00000000u;
    data_0070A904 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, (uintptr_t)&func_00116634);
    data_0070A8EC = ret0;
    uintptr_t ret1 = func_00114608(0x4C088889u, 0x00000000u);
    data_0070A8F0 = ret1;
    uintptr_t ret2 = func_00114608(0x4C888889u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A8F4 = ret2;
    data_0073CB94 = 0x00000000u /* 0.0 f */;
    data_0073CB98 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_0073CB9C = 0xBF333333u /* -0.699999988079071 f */;
    func_004FC6FC((uintptr_t)&data_0073CBA0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyGueldMan";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203Q\203\213\203h\203}\203\223";
    data_0073C8EC = 0x00000000u;
    data_0073C8F0 = 0x00000005u;
    data_0073C8F4 = (uintptr_t)&data_0073C8F8;
    uintptr_t v0 = data_0070A8E8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006968F8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073C8EC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073C90C, (uintptr_t)&func_0060487C, 0x000001F9u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073C8EC, (uintptr_t)((char *)stk + 32), v1);
}
