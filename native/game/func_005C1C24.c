/* USA 005C1C24 (EU 005C1BFC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712708;
extern uint32_t data_0071270C;
extern uint32_t data_00712710;
extern uint32_t data_00712714;
extern uint32_t data_00799AF4;
extern uint32_t data_00799AF8;
extern uint32_t data_00799AFC;
extern uint32_t data_00799B00;
extern uint32_t data_00799B14;
extern uint32_t data_00799D5C;
extern uint32_t data_00799D60;
extern uint32_t data_00799D64;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006056D8(void);


void func_005C1C24(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00799AF4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagLightFocus";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222\215\226\332\223_\223\224\203\211\203C\203g\203^\203O";
    data_00712708 = 0xFFFFFFFFu;
    data_0071270C = 0xFFFFFFFFu;
    data_00712710 = 0x00000000u;
    data_00712714 = 0x00000000u;
    data_00799AF4 = 0x00000000u;
    data_00799AF8 = 0x00000005u;
    data_00799AFC = (uintptr_t)&data_00799B00;
    data_00799D5C = 0x00000000u /* 0.0 f */;
    data_00799D60 = 0x40400000u /* 3.0 f */;
    data_00799D64 = 0x3F000000u /* 0.5 f */;
    func_0019B51C((uintptr_t)&data_00799B14, (uintptr_t)&func_006056D8, 0x0000009Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00799AF4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
