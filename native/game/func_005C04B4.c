/* USA 005C04B4 (EU 005C048C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F4A4;
extern uint32_t data_0070F4A8;
extern uint32_t data_0070F4AC;
extern uint32_t data_0070F4B0;
extern uint32_t data_0070F4B4;
extern uint32_t data_00786348;
extern uint32_t data_0078634C;
extern uint32_t data_00786350;
extern uint32_t data_00786354;
extern uint32_t data_00786368;
extern uint32_t data_007865B0;
extern uint32_t data_007865B4;
extern uint32_t data_007865B8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605460(void);


void func_005C04B4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F4A8 = 0xFFFFFFFFu;
    data_0070F4AC = 0xFFFFFFFFu;
    data_0070F4B0 = 0x00000000u;
    data_0070F4B4 = 0x00000000u;
    data_007865B0 = 0x00000000u /* 0.0 f */;
    data_007865B4 = 0x00000000u /* 0.0 f */;
    data_007865B8 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00786348;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjFirePillar";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Î";
    data_0070F4A4 = ret0;
    data_00786348 = 0x00000000u;
    data_0078634C = 0x00000005u;
    data_00786350 = (uintptr_t)&data_00786354;
    func_0019B51C((uintptr_t)&data_00786368, (uintptr_t)&func_00605460, 0x0000002Eu, (uintptr_t)((char *)stk + 16));
}
