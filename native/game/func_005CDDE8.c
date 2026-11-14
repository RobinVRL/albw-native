/* USA 005CDDE8 (EU 005CDDC0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069EAFC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D8D8;
extern uint32_t data_0070D8E0;
extern uint32_t data_0070D8E4;
extern uint32_t data_0070D8E8;
extern uint32_t data_0070D8EC;
extern uint32_t data_0076F9C0;
extern uint32_t data_0076F9C4;
extern uint32_t data_0076F9C8;
extern uint32_t data_0076F9CC;
extern uint32_t data_0076F9E0;
extern uint32_t data_0076FC28;
extern uint32_t data_0076FC60;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606B18(void);

static const char *const names_0076FC28[7] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "lowral_walk",
    "damage",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CDDE8(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0076FC28, names_0076FC28, 7);
    data_0070D8E0 = 0xFFFFFFFFu;
    data_0070D8E4 = 0xFFFFFFFFu;
    data_0070D8E8 = 0x00000000u;
    data_0070D8EC = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0076FC60, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MiniGameRSPeace";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203X\203^\203W\203A\203\200\227p\203s\201[\203X";
    data_0076F9C0 = 0x00000000u;
    data_0076F9C4 = 0x00000005u;
    data_0076F9C8 = (uintptr_t)&data_0076F9CC;
    uintptr_t v0 = data_0070D8D8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069EAFC : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076F9C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0076F9E0, (uintptr_t)&func_00606B18, 0x000000AAu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0076F9C0, (uintptr_t)((char *)stk + 32), v1);
}
