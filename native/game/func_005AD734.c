/* USA 005AD734 (EU 005AD70C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F578;
extern uint32_t data_0070F57C;
extern uint32_t data_0070F580;
extern uint32_t data_0070F584;
extern uint32_t data_00788754;
extern uint32_t data_00788758;
extern uint32_t data_0078875C;
extern uint32_t data_00788760;
extern uint32_t data_00788774;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006036E8(void);


void func_005AD734(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00788754;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjIceFloor";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\217\260";
    data_0070F578 = 0xFFFFFFFFu;
    data_0070F57C = 0xFFFFFFFFu;
    data_0070F580 = 0x00000000u;
    data_0070F584 = 0x00000000u;
    data_00788754 = 0x00000000u;
    data_00788758 = 0x00000005u;
    data_0078875C = (uintptr_t)&data_00788760;
    func_0019B51C((uintptr_t)&data_00788774, (uintptr_t)&func_006036E8, 0x0000001Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00788754, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
