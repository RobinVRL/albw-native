/* USA 005AB2DC (EU 005AB2B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D558;
extern uint32_t data_0070D55C;
extern uint32_t data_0070D560;
extern uint32_t data_0070D564;
extern uint32_t data_0076C8F0;
extern uint32_t data_0076C8F4;
extern uint32_t data_0076C8F8;
extern uint32_t data_0076C8FC;
extern uint32_t data_0076C910;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006032A8(void);


void func_005AB2DC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076C8F0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassTileIce";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\224\226\225X";
    data_0070D558 = 0xFFFFFFFFu;
    data_0070D55C = 0xFFFFFFFFu;
    data_0070D560 = 0x00000000u;
    data_0070D564 = 0x00000000u;
    data_0076C8F0 = 0x00000000u;
    data_0076C8F4 = 0x00000005u;
    data_0076C8F8 = (uintptr_t)&data_0076C8FC;
    func_0019B51C((uintptr_t)&data_0076C910, (uintptr_t)&func_006032A8, 0x00000158u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076C8F0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
