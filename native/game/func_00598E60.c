/* USA 00598E60 (EU 00598E38): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D4F0;
extern uint32_t data_0070D4F4;
extern uint32_t data_0070D4F8;
extern uint32_t data_0070D500;
extern uint32_t data_0070D504;
extern uint32_t data_0070D508;
extern uint32_t data_0070D50C;
extern uint32_t data_0076B5B0;
extern uint32_t data_0076B5B4;
extern uint32_t data_0076B5B8;
extern uint32_t data_0076B5BC;
extern uint32_t data_0076B5D0;
extern uint32_t data_0076B818;
extern uint32_t data_0076B81C;
extern uint32_t data_0076B820;
extern uint32_t data_0076B824;
extern uint32_t data_0076B838;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A4A8(void);


void func_00598E60(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    data_0070D500 = 0xFFFFFFFFu;
    data_0070D504 = 0xFFFFFFFFu;
    data_0070D508 = 0x00000000u;
    data_0070D50C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E2AAAABu, 0x00000000u);
    data_0070D4F0 = ret0;
    uintptr_t ret1 = func_00114608(0x4D088889u, 0x00000000u);
    data_0070D4F4 = ret1;
    uintptr_t ret2 = func_00114608(0x4D93E93Fu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076B5B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassPotLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"âiõ:Massj";
    data_0070D4F8 = ret2;
    data_0076B5B0 = 0x00000000u;
    data_0076B5B4 = 0x00000005u;
    data_0076B5B8 = (uintptr_t)&data_0076B5BC;
    func_0019B51C((uintptr_t)&data_0076B5D0, (uintptr_t)&func_0060A4A8, 0x00000147u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076B818;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassPotSkull";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"âihN:Massj";
    data_0076B818 = 0x00000000u;
    data_0076B81C = 0x00000005u;
    data_0076B820 = (uintptr_t)&data_0076B824;
    func_0019B51C((uintptr_t)&data_0076B838, (uintptr_t)&func_0060A4A8, 0x00000148u, (uintptr_t)((char *)stk + 32));
}
