/* USA 005E6694 (EU 005E666C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE60;
extern uint32_t data_0070BE64;
extern uint32_t data_0070BE68;
extern uint32_t data_0070BE6C;
extern uint32_t data_00752198;
extern uint32_t data_0075219C;
extern uint32_t data_007521A0;
extern uint32_t data_007521A4;
extern uint32_t data_007521B8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006083B0(void);


void func_005E6694(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00752198;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojCaveZoraPillar";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203]\201[\203\211\202\314\220\362\202\314\222\214";
    data_0070BE60 = 0xFFFFFFFFu;
    data_0070BE64 = 0xFFFFFFFFu;
    data_0070BE68 = 0x00000000u;
    data_0070BE6C = 0x00000000u;
    data_00752198 = 0x00000000u;
    data_0075219C = 0x00000005u;
    data_007521A0 = (uintptr_t)&data_007521A4;
    func_0019B51C((uintptr_t)&data_007521B8, (uintptr_t)&func_006083B0, 0x00000132u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00752198, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
