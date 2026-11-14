/* USA 005BDAA4 (EU 005BDA7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D8A0;
extern uint32_t data_0070D8A4;
extern uint32_t data_0070D8A8;
extern uint32_t data_0070D8AC;
extern uint32_t data_0076F410;
extern uint32_t data_0076F414;
extern uint32_t data_0076F418;
extern uint32_t data_0076F41C;
extern uint32_t data_0076F430;
extern uint32_t data_0076F678;
extern uint32_t data_0076F6B0;
extern uint32_t data_0076F6B4;
extern uint32_t data_0076F6B8;
extern uint32_t data_0076F6BC;
extern uint32_t data_0076F6C0;
extern uint32_t data_0076F6C4;
extern uint32_t data_0076F6C8;
extern uint32_t data_0076F6CC;
extern uint32_t data_0076F6D0;
extern uint32_t data_0076F6D4;
extern uint32_t data_0076F6D8;
extern uint32_t data_0076F6DC;
extern uint32_t data_0076F6E4;
extern uint32_t data_0076F6E8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604CC8(void);

static const char *const names_0076F678[7] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "attack",
    "attack_angry",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BDAA4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076F410;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"X^WApIN^";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MiniGameRSMgr";
    fill_names((sead_SafeString *)&data_0076F678, names_0076F678, 7);
    data_0070D8A0 = 0xFFFFFFFFu;
    data_0070D8A4 = 0xFFFFFFFFu;
    data_0070D8A8 = 0x00000000u;
    data_0070D8AC = 0x00000000u;
    data_0076F410 = 0x00000000u;
    data_0076F414 = 0x00000005u;
    data_0076F418 = (uintptr_t)&data_0076F41C;
    data_0076F6B0 = 0x40800000u /* 4.0 f */;
    data_0076F6B4 = 0x00000000u /* 0.0 f */;
    data_0076F6B8 = 0xC0800000u /* -4.0 f */;
    data_0076F6BC = 0xC0800000u /* -4.0 f */;
    data_0076F6C0 = 0x00000000u /* 0.0 f */;
    data_0076F6C4 = 0xC0800000u /* -4.0 f */;
    data_0076F6C8 = 0x41400000u /* 12.0 f */;
    data_0076F6CC = 0x40200000u /* 2.5 f */;
    data_0076F6D0 = 0xC0400000u /* -3.0 f */;
    data_0076F6D4 = 0x00000000u /* 0.0 f */;
    data_0076F6D8 = 0x00000000u /* 0.0 f */;
    data_0076F6DC = 0x00000000u /* 0.0 f */;
    data_0076F6E4 = 0x00000000u;
    data_0076F6E8 = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0076F430, (uintptr_t)&func_00604CC8, 0x00000021u, (uintptr_t)((char *)stk + 24));
}
