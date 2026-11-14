/* USA 005E1034 (EU 005E100C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 15 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C0E0;
extern uint32_t data_0070C0E4;
extern uint32_t data_0070C0E8;
extern uint32_t data_0070C0EC;
extern uint32_t data_0070C0F0;
extern uint32_t data_0070C0F4;
extern uint32_t data_0075A160;
extern uint32_t data_0075A164;
extern uint32_t data_0075A168;
extern uint32_t data_0075A16C;
extern uint32_t data_0075A180;
extern uint32_t data_0075A3C8;
extern uint32_t data_0075A3F8;
extern uint32_t data_0075A3FC;
extern uint32_t data_0075A400;
extern uint32_t data_0075A404;
extern uint32_t data_0075A408;
extern uint32_t data_0075A40C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DD28(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607810(void);

static const char *const names_0075A3C8[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "BarrierRowral",
    "Disappear",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E1034(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0075A3C8, names_0075A3C8, 6);
    data_0070C0E8 = 0xFFFFFFFFu;
    data_0070C0EC = 0xFFFFFFFFu;
    data_0070C0F0 = 0x00000000u;
    data_0070C0F4 = 0x00000000u;
    data_0075A3F8 = 0x00000000u /* 0.0 f */;
    data_0075A3FC = 0x00000000u /* 0.0 f */;
    data_0075A400 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4DC71C72u, (uintptr_t)&func_0011DD28);
    data_0070C0E0 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075A160;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\215\203E\203\211\203\213\217\351\214\213\212E";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojLoruleBarrier";
    data_0070C0E4 = ret1;
    data_0075A160 = 0x00000000u;
    data_0075A164 = 0x00000005u;
    data_0075A168 = (uintptr_t)&data_0075A16C;
    data_0075A404 = 0x00000000u /* 0.0 f */;
    data_0075A408 = 0x40133333u /* 2.299999952316284 f */;
    data_0075A40C = 0x40200000u /* 2.5 f */;
    func_0019B51C((uintptr_t)&data_0075A180, (uintptr_t)&func_00607810, 0x0000011Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0075A160, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
