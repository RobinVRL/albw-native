/* USA 005AB204 (EU 005AB1DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D2D0;
extern uint32_t data_0070D2D4;
extern uint32_t data_0070D2D8;
extern uint32_t data_0070D2DC;
extern uint32_t data_00769B08;
extern uint32_t data_00769B0C;
extern uint32_t data_00769B10;
extern uint32_t data_00769B14;
extern uint32_t data_00769B28;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603280(void);


void func_005AB204(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00769B08;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassFloorBg";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203}\203X\217\260\203R\203\212\203W\203\207\203\223";
    data_0070D2D0 = 0xFFFFFFFFu;
    data_0070D2D4 = 0xFFFFFFFFu;
    data_0070D2D8 = 0x00000000u;
    data_0070D2DC = 0x00000000u;
    data_00769B08 = 0x00000000u;
    data_00769B0C = 0x00000005u;
    data_00769B10 = (uintptr_t)&data_00769B14;
    func_0019B51C((uintptr_t)&data_00769B28, (uintptr_t)&func_00603280, 0x00000159u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00769B08, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
