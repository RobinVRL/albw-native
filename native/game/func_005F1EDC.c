/* USA 005F1EDC (EU 005F1EB4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007125E8;
extern uint32_t data_007125EC;
extern uint32_t data_007125F0;
extern uint32_t data_007125F4;
extern uint32_t data_00796CFC;
extern uint32_t data_00796D00;
extern uint32_t data_00796D04;
extern uint32_t data_00796D08;
extern uint32_t data_00796D1C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006098F0(void);


void func_005F1EDC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00796CFC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraAddDistance";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\203\201\203\211\203p\203\211\203\201\201[\203^\225\317\215X\203^\203O";
    data_007125E8 = 0xFFFFFFFFu;
    data_007125EC = 0xFFFFFFFFu;
    data_007125F0 = 0x00000000u;
    data_007125F4 = 0x00000000u;
    data_00796CFC = 0x00000000u;
    data_00796D00 = 0x00000005u;
    data_00796D04 = (uintptr_t)&data_00796D08;
    func_0019B51C((uintptr_t)&data_00796D1C, (uintptr_t)&func_006098F0, 0x0000009Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00796CFC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
