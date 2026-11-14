/* USA 005F8638 (EU 005F8610): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A20E4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F798;
extern uint32_t data_0070F79C;
extern uint32_t data_0070F7A0;
extern uint32_t data_0070F7A4;
extern uint32_t data_0078BA94;
extern uint32_t data_0078BA98;
extern uint32_t data_0078BA9C;
extern uint32_t data_0078BAA0;
extern uint32_t data_0078BAB4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A0F0(void);


void func_005F8638(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078BA94;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A20E4;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumGanonBallChild";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203K\203m\203\223\213\312\224j\225\320";
    data_0070F798 = 0xFFFFFFFFu;
    data_0070F79C = 0xFFFFFFFFu;
    data_0070F7A0 = 0x00000000u;
    data_0070F7A4 = 0x00000000u;
    data_0078BA94 = 0x00000000u;
    data_0078BA98 = 0x00000005u;
    data_0078BA9C = (uintptr_t)&data_0078BAA0;
    func_0019B51C((uintptr_t)&data_0078BAB4, (uintptr_t)&func_0060A0F0, 0x00000230u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078BA94, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_006A20E4);
}
