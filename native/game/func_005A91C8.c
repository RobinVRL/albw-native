/* USA 005A91C8 (EU 005A91A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007088C0;
extern uint32_t data_007088C4;
extern uint32_t data_007088C8;
extern uint32_t data_007088CC;
extern uint32_t data_0072FF58;
extern uint32_t data_0072FF5C;
extern uint32_t data_0072FF60;
extern uint32_t data_0072FF64;
extern uint32_t data_0072FF78;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602FFC(void);


void func_005A91C8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072FF58;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaThunder";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\213\203^\203O";
    data_007088C0 = 0xFFFFFFFFu;
    data_007088C4 = 0xFFFFFFFFu;
    data_007088C8 = 0x00000000u;
    data_007088CC = 0x00000000u;
    data_0072FF58 = 0x00000000u;
    data_0072FF5C = 0x00000005u;
    data_0072FF60 = (uintptr_t)&data_0072FF64;
    func_0019B51C((uintptr_t)&data_0072FF78, (uintptr_t)&func_00602FFC, 0x00000187u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072FF58, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
