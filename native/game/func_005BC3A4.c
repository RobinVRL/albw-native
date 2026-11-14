/* USA 005BC3A4 (EU 005BC37C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698340;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ADF0;
extern uint32_t data_0070ADF8;
extern uint32_t data_0070ADFC;
extern uint32_t data_0070AE00;
extern uint32_t data_0070AE04;
extern uint32_t data_00742D6C;
extern uint32_t data_00742D70;
extern uint32_t data_00742D74;
extern uint32_t data_00742D78;
extern uint32_t data_00742D8C;
extern uint32_t data_00742FD4;
extern uint32_t data_00743014;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604A34(void);

static const char *const names_00742FD4[8] = {
    "wait",
    "walk",
    "bomb_st",
    "bomb_end",
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

void func_005BC3A4(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00742FD4, names_00742FD4, 8);
    data_0070ADF8 = 0xFFFFFFFFu;
    data_0070ADFC = 0xFFFFFFFFu;
    data_0070AE00 = 0x00000000u;
    data_0070AE04 = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_00743014, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyNuranuru";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203k\203\211\203k\201[\203\213";
    data_00742D6C = 0x00000000u;
    data_00742D70 = 0x00000005u;
    data_00742D74 = (uintptr_t)&data_00742D78;
    uintptr_t v0 = data_0070ADF0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698340 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00742D6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00742D8C, (uintptr_t)&func_00604A34, 0x0000026Bu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00742D6C, (uintptr_t)((char *)stk + 32), v1);
}
