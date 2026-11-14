/* USA 005EA3FC (EU 005EA3D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F4C8;
extern uint32_t data_0070F4CC;
extern uint32_t data_0070F4D0;
extern uint32_t data_0070F4D4;
extern uint32_t data_007865BC;
extern uint32_t data_007865C0;
extern uint32_t data_007865C4;
extern uint32_t data_007865C8;
extern uint32_t data_007865DC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608918(void);


void func_005EA3FC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007865BC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjFlatLightArrow";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\307\223\340\202\314\214\365\202\314\226\356";
    data_0070F4C8 = 0xFFFFFFFFu;
    data_0070F4CC = 0xFFFFFFFFu;
    data_0070F4D0 = 0x00000000u;
    data_0070F4D4 = 0x00000000u;
    data_007865BC = 0x00000000u;
    data_007865C0 = 0x00000005u;
    data_007865C4 = (uintptr_t)&data_007865C8;
    func_0019B51C((uintptr_t)&data_007865DC, (uintptr_t)&func_00608918, 0x0000008Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007865BC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
