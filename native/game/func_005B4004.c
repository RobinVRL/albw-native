/* USA 005B4004 (EU 005B3FDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE30;
extern uint32_t data_0070BE34;
extern uint32_t data_0070BE38;
extern uint32_t data_0070BE3C;
extern uint32_t data_00750BF0;
extern uint32_t data_00750BF4;
extern uint32_t data_00750BF8;
extern uint32_t data_00750BFC;
extern uint32_t data_00750C10;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603CE4(void);


void func_005B4004(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00750BF0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojBoardHook";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203t\203b\203N\203{\201[\203h";
    data_0070BE30 = 0xFFFFFFFFu;
    data_0070BE34 = 0xFFFFFFFFu;
    data_0070BE38 = 0x00000000u;
    data_0070BE3C = 0x00000000u;
    data_00750BF0 = 0x00000000u;
    data_00750BF4 = 0x00000005u;
    data_00750BF8 = (uintptr_t)&data_00750BFC;
    func_0019B51C((uintptr_t)&data_00750C10, (uintptr_t)&func_00603CE4, 0x000000F2u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00750BF0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
