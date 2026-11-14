/* USA 005E6C08 (EU 005E6BE0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C140;
extern uint32_t data_0070C148;
extern uint32_t data_0070C14C;
extern uint32_t data_0070C150;
extern uint32_t data_0070C154;
extern uint32_t data_0075B290;
extern uint32_t data_0075B294;
extern uint32_t data_0075B298;
extern uint32_t data_0075B29C;
extern uint32_t data_0075B2B0;
extern uint32_t data_0075B4F8;
extern uint32_t data_0075B4FC;
extern uint32_t data_0075B500;
extern uint32_t data_0075B504;
extern uint32_t data_0075B518;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060862C(void);


void func_005E6C08(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    data_0070C148 = 0xFFFFFFFFu;
    data_0070C14C = 0xFFFFFFFFu;
    data_0070C150 = 0x00000000u;
    data_0070C154 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E000000u, 0xFFFFFFFFu);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075B290;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojPushPullStatue";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"µø«Î";
    data_0070C140 = ret0;
    data_0075B290 = 0x00000000u;
    data_0075B294 = 0x00000005u;
    data_0075B298 = (uintptr_t)&data_0075B29C;
    func_0019B51C((uintptr_t)&data_0075B2B0, (uintptr_t)&func_0060862C, 0x0000000Bu, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075B4F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojPushPullLowralStatue";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"µø«ÎiEéj";
    data_0075B4F8 = 0x00000000u;
    data_0075B4FC = 0x00000005u;
    data_0075B500 = (uintptr_t)&data_0075B504;
    func_0019B51C((uintptr_t)&data_0075B518, (uintptr_t)&func_0060862C, 0x0000000Cu, (uintptr_t)((char *)stk + 32));
}
