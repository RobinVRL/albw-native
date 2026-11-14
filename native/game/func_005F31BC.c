/* USA 005F31BC (EU 005F3194): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708798;
extern uint32_t data_0070879C;
extern uint32_t data_007087A0;
extern uint32_t data_007087A4;
extern uint32_t data_0072AF18;
extern uint32_t data_0072AF1C;
extern uint32_t data_0072AF20;
extern uint32_t data_0072AF24;
extern uint32_t data_0072AF38;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609A68(void);


void func_005F31BC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072AF18;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaCameraAddDistance";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\203\201\203\211\203p\203\211\203\201\201[\203^\225\317\215X\203G\203\212\203A";
    data_00708798 = 0xFFFFFFFFu;
    data_0070879C = 0xFFFFFFFFu;
    data_007087A0 = 0x00000000u;
    data_007087A4 = 0x00000000u;
    data_0072AF18 = 0x00000000u;
    data_0072AF1C = 0x00000005u;
    data_0072AF20 = (uintptr_t)&data_0072AF24;
    func_0019B51C((uintptr_t)&data_0072AF38, (uintptr_t)&func_00609A68, 0x00000181u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072AF18, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
