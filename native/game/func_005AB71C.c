/* USA 005AB71C (EU 005AB6F4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BFD0;
extern uint32_t data_0070BFD4;
extern uint32_t data_0070BFD8;
extern uint32_t data_0070BFDC;
extern uint32_t data_00756450;
extern uint32_t data_00756454;
extern uint32_t data_00756458;
extern uint32_t data_0075645C;
extern uint32_t data_00756470;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603328(void);


void func_005AB71C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00756450;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojEyeStand";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\332\213\312\221\344";
    data_0070BFD0 = 0xFFFFFFFFu;
    data_0070BFD4 = 0xFFFFFFFFu;
    data_0070BFD8 = 0x00000000u;
    data_0070BFDC = 0x00000000u;
    data_00756450 = 0x00000000u;
    data_00756454 = 0x00000005u;
    data_00756458 = (uintptr_t)&data_0075645C;
    func_0019B51C((uintptr_t)&data_00756470, (uintptr_t)&func_00603328, 0x000000C2u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00756450, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
