/* USA 005A5E68 (EU 005A5E40): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 15 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BD94;
extern uint32_t data_0070BD98;
extern uint32_t data_0070BDA0;
extern uint32_t data_0070BDA4;
extern uint32_t data_0070BDA8;
extern uint32_t data_0070BDAC;
extern uint32_t data_0074FD48;
extern uint32_t data_0074FD4C;
extern uint32_t data_0074FD50;
extern uint32_t data_0074FD54;
extern uint32_t data_0074FD68;
extern uint32_t data_0074FFB0;
extern uint32_t data_0074FFC0;
extern uint32_t data_0074FFC4;
extern uint32_t data_0074FFC8;
extern uint32_t data_0074FFCC;
extern uint32_t data_0074FFD0;
extern uint32_t data_0074FFD4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011D7CC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006029F0(void);

static const char *const names_0074FFB0[2] = {
    "Barrier",
    "Hide",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A5E68(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074FFB0, names_0074FFB0, 2);
    data_0070BDA0 = 0xFFFFFFFFu;
    data_0070BDA4 = 0xFFFFFFFFu;
    data_0070BDA8 = 0x00000000u;
    data_0070BDAC = 0x00000000u;
    data_0074FFC0 = 0x00000000u /* 0.0 f */;
    data_0074FFC4 = 0x00000000u /* 0.0 f */;
    data_0074FFC8 = 0xC1000000u /* -8.0 f */;
    uintptr_t ret0 = func_00114608(0x4DC71C72u, (uintptr_t)&func_0011D7CC);
    data_0070BD94 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074FD48;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"E";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojBarrier";
    data_0070BD98 = ret1;
    data_0074FD48 = 0x00000000u;
    data_0074FD4C = 0x00000005u;
    data_0074FD50 = (uintptr_t)&data_0074FD54;
    data_0074FFCC = 0x00000000u /* 0.0 f */;
    data_0074FFD0 = 0x40133333u /* 2.299999952316284 f */;
    data_0074FFD4 = 0x40200000u /* 2.5 f */;
    func_0019B51C((uintptr_t)&data_0074FD68, (uintptr_t)&func_006029F0, 0x0000011Eu, (uintptr_t)((char *)stk + 24));
}
