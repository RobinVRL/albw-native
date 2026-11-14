/* USA 005C0E14 (EU 005C0DEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F9A8;
extern uint32_t data_0070F9AC;
extern uint32_t data_0070F9B0;
extern uint32_t data_0070F9B4;
extern uint32_t data_00791174;
extern uint32_t data_00791178;
extern uint32_t data_0079117C;
extern uint32_t data_00791180;
extern uint32_t data_00791194;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006055C4(void);


void func_005C0E14(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00791174;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjSandNeedle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\215\273\215U\214\202";
    data_0070F9A8 = 0xFFFFFFFFu;
    data_0070F9AC = 0xFFFFFFFFu;
    data_0070F9B0 = 0x00000000u;
    data_0070F9B4 = 0x00000000u;
    data_00791174 = 0x00000000u;
    data_00791178 = 0x00000005u;
    data_0079117C = (uintptr_t)&data_00791180;
    func_0019B51C((uintptr_t)&data_00791194, (uintptr_t)&func_006055C4, 0x0000001Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00791174, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
