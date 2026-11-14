/* USA 005CE848 (EU 005CE820): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C3A8;
extern uint32_t data_0070C3AC;
extern uint32_t data_0070C3B0;
extern uint32_t data_0070C3B4;
extern uint32_t data_00761E4C;
extern uint32_t data_00761E50;
extern uint32_t data_00761E54;
extern uint32_t data_00761E58;
extern uint32_t data_00761E6C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606D50(void);


void func_005CE848(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00761E4C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojVolcanicRock";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\316\216R\212\342";
    data_0070C3A8 = 0xFFFFFFFFu;
    data_0070C3AC = 0xFFFFFFFFu;
    data_0070C3B0 = 0x00000000u;
    data_0070C3B4 = 0x00000000u;
    data_00761E4C = 0x00000000u;
    data_00761E50 = 0x00000005u;
    data_00761E54 = (uintptr_t)&data_00761E58;
    func_0019B51C((uintptr_t)&data_00761E6C, (uintptr_t)&func_00606D50, 0x00000114u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00761E4C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
