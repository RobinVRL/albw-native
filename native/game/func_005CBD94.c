/* USA 005CBD94 (EU 005CBD6C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708870;
extern uint32_t data_00708874;
extern uint32_t data_00708878;
extern uint32_t data_0070887C;
extern uint32_t data_0072EE60;
extern uint32_t data_0072EE64;
extern uint32_t data_0072EE68;
extern uint32_t data_0072EE6C;
extern uint32_t data_0072EE80;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606794(void);


void func_005CBD94(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072EE60;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaRockChecker";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\212\342\203`\203F\203b\203N\203G\203\212\203A";
    data_00708870 = 0xFFFFFFFFu;
    data_00708874 = 0xFFFFFFFFu;
    data_00708878 = 0x00000000u;
    data_0070887C = 0x00000000u;
    data_0072EE60 = 0x00000000u;
    data_0072EE64 = 0x00000005u;
    data_0072EE68 = (uintptr_t)&data_0072EE6C;
    func_0019B51C((uintptr_t)&data_0072EE80, (uintptr_t)&func_00606794, 0x00000183u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072EE60, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
