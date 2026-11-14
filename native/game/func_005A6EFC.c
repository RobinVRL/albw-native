/* USA 005A6EFC (EU 005A6ED4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 14 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F608;
extern uint32_t data_0070F610;
extern uint32_t data_0070F614;
extern uint32_t data_0070F618;
extern uint32_t data_0070F61C;
extern uint32_t data_00788F8C;
extern uint32_t data_00788F90;
extern uint32_t data_00788F94;
extern uint32_t data_00788F98;
extern uint32_t data_00788FAC;
extern uint32_t data_007891F4;
extern uint32_t data_007891F8;
extern uint32_t data_007891FC;
extern uint32_t data_00789200;
extern uint32_t data_00789204;
extern uint32_t data_00789208;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602F24(void);


void func_005A6EFC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F610 = 0xFFFFFFFFu;
    data_0070F614 = 0xFFFFFFFFu;
    data_0070F618 = 0x00000000u;
    data_0070F61C = 0x00000000u;
    data_007891F4 = 0x00000000u /* 0.0 f */;
    data_007891F8 = 0x00000000u /* 0.0 f */;
    data_007891FC = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00789200 = 0x00000000u /* 0.0 f */;
    data_00789204 = 0x00000000u /* 0.0 f */;
    data_00789208 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, 0xFFFFFFFFu);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00788F8C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjJavelin";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"";
    data_0070F608 = ret0;
    data_00788F8C = 0x00000000u;
    data_00788F90 = 0x00000005u;
    data_00788F94 = (uintptr_t)&data_00788F98;
    func_0019B51C((uintptr_t)&data_00788FAC, (uintptr_t)&func_00602F24, 0x00000041u, (uintptr_t)((char *)stk + 16));
}
