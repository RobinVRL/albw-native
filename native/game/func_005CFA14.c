/* USA 005CFA14 (EU 005CF9EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB18;
extern uint32_t data_0070FB20;
extern uint32_t data_0070FB24;
extern uint32_t data_0070FB28;
extern uint32_t data_0070FB2C;
extern uint32_t data_0079569C;
extern uint32_t data_007956A0;
extern uint32_t data_007956A4;
extern uint32_t data_007956A8;
extern uint32_t data_007956BC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060729C(void);


void func_005CFA14(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070FB20 = 0xFFFFFFFFu;
    data_0070FB24 = 0xFFFFFFFFu;
    data_0070FB28 = 0x00000000u;
    data_0070FB2C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4DAAAAABu, 0xFFFFFFFFu);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079569C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjVolcanicBomb";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\316\216R\222e";
    data_0070FB18 = ret0;
    data_0079569C = 0x00000000u;
    data_007956A0 = 0x00000005u;
    data_007956A4 = (uintptr_t)&data_007956A8;
    func_0019B51C((uintptr_t)&data_007956BC, (uintptr_t)&func_0060729C, 0x00000044u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079569C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
