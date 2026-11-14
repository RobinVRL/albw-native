/* USA 005EE6B8 (EU 005EE690): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F440;
extern uint32_t data_0070F448;
extern uint32_t data_0070F44C;
extern uint32_t data_0070F450;
extern uint32_t data_0070F454;
extern uint32_t data_00785850;
extern uint32_t data_00785854;
extern uint32_t data_00785858;
extern uint32_t data_0078585C;
extern uint32_t data_00785870;
extern uint32_t data_00785AB8;
extern uint32_t data_00785ABC;
extern uint32_t data_00785AC0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006092E8(void);


void func_005EE6B8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F448 = 0xFFFFFFFFu;
    data_0070F44C = 0xFFFFFFFFu;
    data_0070F450 = 0x00000000u;
    data_0070F454 = 0x00000000u;
    data_00785AB8 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00785ABC = 0x41200000u /* 10.0 f */;
    data_00785AC0 = 0x3F59999Au /* 0.8500000238418579 f */;
    uintptr_t ret0 = func_00114608(0x4E000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00785850;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjEventStoneBeauty";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Cxgp·×·×Î";
    data_0070F440 = ret0;
    data_00785850 = 0x00000000u;
    data_00785854 = 0x00000005u;
    data_00785858 = (uintptr_t)&data_0078585C;
    func_0019B51C((uintptr_t)&data_00785870, (uintptr_t)&func_006092E8, 0x0000007Eu, (uintptr_t)((char *)stk + 16));
}
