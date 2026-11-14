/* USA 0059B66C (EU 0059B644): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D2C0;
extern uint32_t data_0070D2C4;
extern uint32_t data_0070D2C8;
extern uint32_t data_0070D2CC;
extern uint32_t data_007698A0;
extern uint32_t data_007698A4;
extern uint32_t data_007698A8;
extern uint32_t data_007698AC;
extern uint32_t data_007698C0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A8F0(void);


void func_0059B66C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007698A0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassFire";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222\274\211\316";
    data_0070D2C0 = 0xFFFFFFFFu;
    data_0070D2C4 = 0xFFFFFFFFu;
    data_0070D2C8 = 0x00000000u;
    data_0070D2CC = 0x00000000u;
    data_007698A0 = 0x00000000u;
    data_007698A4 = 0x00000005u;
    data_007698A8 = (uintptr_t)&data_007698AC;
    func_0019B51C((uintptr_t)&data_007698C0, (uintptr_t)&func_0060A8F0, 0x0000013Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007698A0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
