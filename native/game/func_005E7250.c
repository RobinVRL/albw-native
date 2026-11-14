/* USA 005E7250 (EU 005E7228): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C2C0;
extern uint32_t data_0070C2C4;
extern uint32_t data_0070C2C8;
extern uint32_t data_0070C2CC;
extern uint32_t data_0075F00C;
extern uint32_t data_0075F010;
extern uint32_t data_0075F014;
extern uint32_t data_0075F018;
extern uint32_t data_0075F02C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006086AC(void);


void func_005E7250(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075F00C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSwitchSunlight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\332\213\312\203X\203C\203b\203`";
    data_0070C2C0 = 0xFFFFFFFFu;
    data_0070C2C4 = 0xFFFFFFFFu;
    data_0070C2C8 = 0x00000000u;
    data_0070C2CC = 0x00000000u;
    data_0075F00C = 0x00000000u;
    data_0075F010 = 0x00000005u;
    data_0075F014 = (uintptr_t)&data_0075F018;
    func_0019B51C((uintptr_t)&data_0075F02C, (uintptr_t)&func_006086AC, 0x000000E7u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075F00C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
