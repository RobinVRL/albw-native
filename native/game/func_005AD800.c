/* USA 005AD800 (EU 005AD7D8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F650;
extern uint32_t data_0070F654;
extern uint32_t data_0070F658;
extern uint32_t data_0070F65C;
extern uint32_t data_007896EC;
extern uint32_t data_007896F0;
extern uint32_t data_007896F4;
extern uint32_t data_007896F8;
extern uint32_t data_0078970C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603714(void);


void func_005AD800(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007896EC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjKeySmall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\217\254\214\256";
    data_0070F650 = 0xFFFFFFFFu;
    data_0070F654 = 0xFFFFFFFFu;
    data_0070F658 = 0x00000000u;
    data_0070F65C = 0x00000000u;
    data_007896EC = 0x00000000u;
    data_007896F0 = 0x00000005u;
    data_007896F4 = (uintptr_t)&data_007896F8;
    func_0019B51C((uintptr_t)&data_0078970C, (uintptr_t)&func_00603714, 0x00000029u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007896EC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
