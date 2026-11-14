/* USA 005A6408 (EU 005A63E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C0F8;
extern uint32_t data_0070C0FC;
extern uint32_t data_0070C100;
extern uint32_t data_0070C104;
extern uint32_t data_0075A410;
extern uint32_t data_0075A414;
extern uint32_t data_0075A418;
extern uint32_t data_0075A41C;
extern uint32_t data_0075A430;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602AF8(void);


void func_005A6408(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075A410;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojMokuzou";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\330\221\234";
    data_0070C0F8 = 0xFFFFFFFFu;
    data_0070C0FC = 0xFFFFFFFFu;
    data_0070C100 = 0x00000000u;
    data_0070C104 = 0x00000000u;
    data_0075A410 = 0x00000000u;
    data_0075A414 = 0x00000005u;
    data_0075A418 = (uintptr_t)&data_0075A41C;
    func_0019B51C((uintptr_t)&data_0075A430, (uintptr_t)&func_00602AF8, 0x0000000Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075A410, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
