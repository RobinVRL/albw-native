/* USA 005AD1A8 (EU 005AD180): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F490;
extern uint32_t data_0070F494;
extern uint32_t data_0070F498;
extern uint32_t data_0070F49C;
extern uint32_t data_007860C8;
extern uint32_t data_007860CC;
extern uint32_t data_007860D0;
extern uint32_t data_007860D4;
extern uint32_t data_007860E8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603668(void);


void func_005AD1A8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007860C8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjFireBall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\316\202\314\213\312";
    data_0070F490 = 0xFFFFFFFFu;
    data_0070F494 = 0xFFFFFFFFu;
    data_0070F498 = 0x00000000u;
    data_0070F49C = 0x00000000u;
    data_007860C8 = 0x00000000u;
    data_007860CC = 0x00000005u;
    data_007860D0 = (uintptr_t)&data_007860D4;
    func_0019B51C((uintptr_t)&data_007860E8, (uintptr_t)&func_00603668, 0x0000002Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007860C8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
