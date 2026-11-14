/* USA 005B83E4 (EU 005B83BC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F6F0;
extern uint32_t data_0070F6F4;
extern uint32_t data_0070F6F8;
extern uint32_t data_0070F6FC;
extern uint32_t data_0078AB8C;
extern uint32_t data_0078AB90;
extern uint32_t data_0078AB94;
extern uint32_t data_0078AB98;
extern uint32_t data_0078ABAC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604498(void);


void func_005B83E4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078AB8C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjLynelFire";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\211\203C\203l\203\213\211\212";
    data_0070F6F0 = 0xFFFFFFFFu;
    data_0070F6F4 = 0xFFFFFFFFu;
    data_0070F6F8 = 0x00000000u;
    data_0070F6FC = 0x00000000u;
    data_0078AB8C = 0x00000000u;
    data_0078AB90 = 0x00000005u;
    data_0078AB94 = (uintptr_t)&data_0078AB98;
    func_0019B51C((uintptr_t)&data_0078ABAC, (uintptr_t)&func_00604498, 0x0000007Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078AB8C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
