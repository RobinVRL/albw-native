/* USA 005DE940 (EU 005DE918): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 10 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695358;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A5F8;
extern uint32_t data_0070A600;
extern uint32_t data_0070A604;
extern uint32_t data_0070A608;
extern uint32_t data_0070A60C;
extern uint32_t data_00736D6C;
extern uint32_t data_00736D70;
extern uint32_t data_00736D74;
extern uint32_t data_00736D78;
extern uint32_t data_00736D8C;
extern uint32_t data_00736FD4;
extern uint32_t data_00736FFC;
extern uint32_t data_00737000;
extern uint32_t data_00737004;
extern uint32_t data_00737008;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006074D8(void);

static const char *const names_00736FD4[5] = {
    "move",
    "touchdown",
    "damage",
    "dead",
    "jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005DE940(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Big_Ice_Gimos";
    fill_names((sead_SafeString *)&data_00736FD4, names_00736FD4, 5);
    data_0070A600 = 0xFFFFFFFFu;
    data_0070A604 = 0xFFFFFFFFu;
    data_0070A608 = 0x00000000u;
    data_0070A60C = 0x00000000u;
    data_00736FFC = 0x00000000u /* 0.0 f */;
    data_00737000 = 0x3F800000u /* 1.0 f */;
    data_00737004 = 0xBFC00000u /* -1.5 f */;
    func_004FC5F8((uintptr_t)&data_00737008, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyBigIceGimos";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203A\203C\203X\203M\203\202\203X\201i\221\345\201j";
    data_00736D6C = 0x00000000u;
    data_00736D70 = 0x00000005u;
    data_00736D74 = (uintptr_t)&data_00736D78;
    uintptr_t v0 = data_0070A5F8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695358 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00736D6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00736D8C, (uintptr_t)&func_006074D8, 0x000001F7u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00736D6C, (uintptr_t)((char *)stk + 40), v1);
}
