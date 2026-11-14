/* USA 005EED74 (EU 005EED4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712658;
extern uint32_t data_0071265C;
extern uint32_t data_00712660;
extern uint32_t data_00712664;
extern uint32_t data_00797DD4;
extern uint32_t data_00797DD8;
extern uint32_t data_00797DDC;
extern uint32_t data_00797DE0;
extern uint32_t data_00797DF4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609340(void);


void func_005EED74(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00797DD4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCaveBombEntrance";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223\264\214A\224\232\222e\223\301\216\352\203^\203O";
    data_00712658 = 0xFFFFFFFFu;
    data_0071265C = 0xFFFFFFFFu;
    data_00712660 = 0x00000000u;
    data_00712664 = 0x00000000u;
    data_00797DD4 = 0x00000000u;
    data_00797DD8 = 0x00000005u;
    data_00797DDC = (uintptr_t)&data_00797DE0;
    func_0019B51C((uintptr_t)&data_00797DF4, (uintptr_t)&func_00609340, 0x00000278u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00797DD4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
