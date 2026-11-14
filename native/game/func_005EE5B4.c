/* USA 005EE5B4 (EU 005EE58C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F310;
extern uint32_t data_0070F314;
extern uint32_t data_0070F318;
extern uint32_t data_0070F31C;
extern uint32_t data_0070F320;
extern uint32_t data_0070F324;
extern uint32_t data_007825A0;
extern uint32_t data_007825A4;
extern uint32_t data_007825A8;
extern uint32_t data_007825AC;
extern uint32_t data_007825C0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006092BC(void);


void func_005EE5B4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F318 = 0xFFFFFFFFu;
    data_0070F31C = 0xFFFFFFFFu;
    data_0070F320 = 0x00000000u;
    data_0070F324 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0070F310 = ret0;
    uintptr_t ret1 = func_00114608(0x4CE38E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007825A0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjBlackShueyesBall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\203{\203X\202\314\222e";
    data_0070F314 = ret1;
    data_007825A0 = 0x00000000u;
    data_007825A4 = 0x00000005u;
    data_007825A8 = (uintptr_t)&data_007825AC;
    func_0019B51C((uintptr_t)&data_007825C0, (uintptr_t)&func_006092BC, 0x00000267u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007825A0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
