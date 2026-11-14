/* USA 005C47E0 (EU 005C47B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D4C0;
extern uint32_t data_0070D4C4;
extern uint32_t data_0070D4C8;
extern uint32_t data_0070D4CC;
extern uint32_t data_0076A9A8;
extern uint32_t data_0076A9AC;
extern uint32_t data_0076A9B0;
extern uint32_t data_0076A9B4;
extern uint32_t data_0076A9C8;
extern uint32_t data_0076AC10;
extern uint32_t data_0076AC14;
extern uint32_t data_0076AC18;
extern uint32_t data_0076AC1C;
extern uint32_t data_0076AC30;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006059E4(void);


void func_005C47E0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076A9A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassHammerStopLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\215Y\201i\214\365\201j";
    data_0070D4C0 = 0xFFFFFFFFu;
    data_0070D4C4 = 0xFFFFFFFFu;
    data_0070D4C8 = 0x00000000u;
    data_0070D4CC = 0x00000000u;
    data_0076A9A8 = 0x00000000u;
    data_0076A9AC = 0x00000005u;
    data_0076A9B0 = (uintptr_t)&data_0076A9B4;
    func_0019B51C((uintptr_t)&data_0076A9C8, (uintptr_t)&func_006059E4, 0x0000014Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076A9A8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076AC10;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassHammerStopDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\215Y\201i\210\305\201j";
    data_0076AC10 = 0x00000000u;
    data_0076AC14 = 0x00000005u;
    data_0076AC18 = (uintptr_t)&data_0076AC1C;
    func_0019B51C((uintptr_t)&data_0076AC30, (uintptr_t)&func_006059E4, 0x0000014Cu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0076AC10, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
