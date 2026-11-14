/* USA 005B8844 (EU 005B881C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA60;
extern uint32_t data_0070FA64;
extern uint32_t data_0070FA68;
extern uint32_t data_0070FA6C;
extern uint32_t data_0070FA70;
extern uint32_t data_0070FA74;
extern uint32_t data_00793F68;
extern uint32_t data_00793F6C;
extern uint32_t data_00793F70;
extern uint32_t data_00793F74;
extern uint32_t data_00793F88;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604540(void);


void func_005B8844(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070FA68 = 0xFFFFFFFFu;
    data_0070FA6C = 0xFFFFFFFFu;
    data_0070FA70 = 0x00000000u;
    data_0070FA74 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D8E38E4u, 0x00000000u);
    data_0070FA60 = ret0;
    uintptr_t ret1 = func_00114608(0x4DAAAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00793F68;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjSwordBeam";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\225\203r\201[\203\200";
    data_0070FA64 = ret1;
    data_00793F68 = 0x00000000u;
    data_00793F6C = 0x00000005u;
    data_00793F70 = (uintptr_t)&data_00793F74;
    func_0019B51C((uintptr_t)&data_00793F88, (uintptr_t)&func_00604540, 0x00000034u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00793F68, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
