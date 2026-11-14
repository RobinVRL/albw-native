/* USA 005DCFB4 (EU 005DCF8C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007087A8;
extern uint32_t data_007087AC;
extern uint32_t data_007087B0;
extern uint32_t data_007087B4;
extern uint32_t data_0072B180;
extern uint32_t data_0072B184;
extern uint32_t data_0072B188;
extern uint32_t data_0072B18C;
extern uint32_t data_0072B1A0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607354(void);


void func_005DCFB4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072B180;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaCameraOffset";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\203\201\203\211\203I\203t\203Z\203b\203g\203G\203\212\203A";
    data_007087A8 = 0xFFFFFFFFu;
    data_007087AC = 0xFFFFFFFFu;
    data_007087B0 = 0x00000000u;
    data_007087B4 = 0x00000000u;
    data_0072B180 = 0x00000000u;
    data_0072B184 = 0x00000005u;
    data_0072B188 = (uintptr_t)&data_0072B18C;
    func_0019B51C((uintptr_t)&data_0072B1A0, (uintptr_t)&func_00607354, 0x0000009Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072B180, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
