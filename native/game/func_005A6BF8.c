/* USA 005A6BF8 (EU 005A6BD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F458;
extern uint32_t data_0070F45C;
extern uint32_t data_0070F460;
extern uint32_t data_0070F464;
extern uint32_t data_00785AC4;
extern uint32_t data_00785AC8;
extern uint32_t data_00785ACC;
extern uint32_t data_00785AD0;
extern uint32_t data_00785AE4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602E98(void);


void func_005A6BF8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00785AC4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjEyeBall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\332\213\312";
    data_0070F458 = 0xFFFFFFFFu;
    data_0070F45C = 0xFFFFFFFFu;
    data_0070F460 = 0x00000000u;
    data_0070F464 = 0x00000000u;
    data_00785AC4 = 0x00000000u;
    data_00785AC8 = 0x00000005u;
    data_00785ACC = (uintptr_t)&data_00785AD0;
    func_0019B51C((uintptr_t)&data_00785AE4, (uintptr_t)&func_00602E98, 0x00000028u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00785AC4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
