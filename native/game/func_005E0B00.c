/* USA 005E0B00 (EU 005E0AD8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069EA58;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D888;
extern uint32_t data_0070D890;
extern uint32_t data_0070D894;
extern uint32_t data_0070D898;
extern uint32_t data_0070D89C;
extern uint32_t data_0076F110;
extern uint32_t data_0076F114;
extern uint32_t data_0076F118;
extern uint32_t data_0076F11C;
extern uint32_t data_0076F130;
extern uint32_t data_0076F378;
extern uint32_t data_0076F3C8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607790(void);

static const char *const names_0076F378[10] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "fly",
    "fly",
    "damage",
    "dead",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E0B00(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0076F378, names_0076F378, 10);
    data_0070D890 = 0xFFFFFFFFu;
    data_0070D894 = 0xFFFFFFFFu;
    data_0070D898 = 0x00000000u;
    data_0070D89C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0076F3C8, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MiniGameRSCrowly";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203X\203^\203W\203A\203\200\227p\203N\203\215\203E\203\212\201[";
    data_0076F110 = 0x00000000u;
    data_0076F114 = 0x00000005u;
    data_0076F118 = (uintptr_t)&data_0076F11C;
    uintptr_t v0 = data_0070D888;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069EA58 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076F110;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0076F130, (uintptr_t)&func_00607790, 0x000000ABu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0076F110, (uintptr_t)((char *)stk + 32), v1);
}
