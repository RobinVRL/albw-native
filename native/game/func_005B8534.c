/* USA 005B8534 (EU 005B850C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F978;
extern uint32_t data_0070F97C;
extern uint32_t data_0070F980;
extern uint32_t data_0070F984;
extern uint32_t data_00790A3C;
extern uint32_t data_00790A40;
extern uint32_t data_00790A44;
extern uint32_t data_00790A48;
extern uint32_t data_00790A5C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006044C0(void);


void func_005B8534(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00790A3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjRupeeGold";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202R\202O\202O\203\213\203s\201[";
    data_0070F978 = 0xFFFFFFFFu;
    data_0070F97C = 0xFFFFFFFFu;
    data_0070F980 = 0x00000000u;
    data_0070F984 = 0x00000000u;
    data_00790A3C = 0x00000000u;
    data_00790A40 = 0x00000005u;
    data_00790A44 = (uintptr_t)&data_00790A48;
    func_0019B51C((uintptr_t)&data_00790A5C, (uintptr_t)&func_006044C0, 0x0000006Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00790A3C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
