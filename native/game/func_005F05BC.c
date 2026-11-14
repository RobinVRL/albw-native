/* USA 005F05BC (EU 005F0594): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708840;
extern uint32_t data_00708844;
extern uint32_t data_00708848;
extern uint32_t data_0070884C;
extern uint32_t data_0072E71C;
extern uint32_t data_0072E720;
extern uint32_t data_0072E724;
extern uint32_t data_0072E728;
extern uint32_t data_0072E73C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609428(void);


void func_005F05BC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072E71C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaFixedAngleCamera";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\212p\223x\214\305\222\350\203J\203\201\203\211\203G\203\212\203A";
    data_00708840 = 0xFFFFFFFFu;
    data_00708844 = 0xFFFFFFFFu;
    data_00708848 = 0x00000000u;
    data_0070884C = 0x00000000u;
    data_0072E71C = 0x00000000u;
    data_0072E720 = 0x00000005u;
    data_0072E724 = (uintptr_t)&data_0072E728;
    func_0019B51C((uintptr_t)&data_0072E73C, (uintptr_t)&func_00609428, 0x00000180u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072E71C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
