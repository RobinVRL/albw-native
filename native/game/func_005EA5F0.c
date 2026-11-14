/* USA 005EA5F0 (EU 005EA5C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F998;
extern uint32_t data_0070F99C;
extern uint32_t data_0070F9A0;
extern uint32_t data_0070F9A4;
extern uint32_t data_00790F0C;
extern uint32_t data_00790F10;
extern uint32_t data_00790F14;
extern uint32_t data_00790F18;
extern uint32_t data_00790F2C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608970(void);


void func_005EA5F0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00790F0C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjSalamanderFire";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203T\203\211\203}\203\223\203_\201[\202\314\211\316";
    data_0070F998 = 0xFFFFFFFFu;
    data_0070F99C = 0xFFFFFFFFu;
    data_0070F9A0 = 0x00000000u;
    data_0070F9A4 = 0x00000000u;
    data_00790F0C = 0x00000000u;
    data_00790F10 = 0x00000005u;
    data_00790F14 = (uintptr_t)&data_00790F18;
    func_0019B51C((uintptr_t)&data_00790F2C, (uintptr_t)&func_00608970, 0x00000066u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00790F0C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
