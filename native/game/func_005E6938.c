/* USA 005E6938 (EU 005E6910): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF80;
extern uint32_t data_0070BF84;
extern uint32_t data_0070BF88;
extern uint32_t data_0070BF8C;
extern uint32_t data_00755358;
extern uint32_t data_0075535C;
extern uint32_t data_00755360;
extern uint32_t data_00755364;
extern uint32_t data_00755378;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608408(void);


void func_005E6938(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00755358;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorHyruleGate";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203n\203C\203\211\203\213\217\351\226\345";
    data_0070BF80 = 0xFFFFFFFFu;
    data_0070BF84 = 0xFFFFFFFFu;
    data_0070BF88 = 0x00000000u;
    data_0070BF8C = 0x00000000u;
    data_00755358 = 0x00000000u;
    data_0075535C = 0x00000005u;
    data_00755360 = (uintptr_t)&data_00755364;
    func_0019B51C((uintptr_t)&data_00755378, (uintptr_t)&func_00608408, 0x000000BDu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00755358, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
