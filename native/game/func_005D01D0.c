/* USA 005D01D0 (EU 005D01A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712628;
extern uint32_t data_0071262C;
extern uint32_t data_00712630;
extern uint32_t data_00712634;
extern uint32_t data_0079769C;
extern uint32_t data_007976A0;
extern uint32_t data_007976A4;
extern uint32_t data_007976A8;
extern uint32_t data_007976BC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006072C8(void);


void func_005D01D0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079769C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraOffset";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\203\201\203\211\203I\203t\203Z\203b\203g\203^\203O";
    data_00712628 = 0xFFFFFFFFu;
    data_0071262C = 0xFFFFFFFFu;
    data_00712630 = 0x00000000u;
    data_00712634 = 0x00000000u;
    data_0079769C = 0x00000000u;
    data_007976A0 = 0x00000005u;
    data_007976A4 = (uintptr_t)&data_007976A8;
    func_0019B51C((uintptr_t)&data_007976BC, (uintptr_t)&func_006072C8, 0x00000099u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079769C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
