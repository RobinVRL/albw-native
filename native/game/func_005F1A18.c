/* USA 005F1A18 (EU 005F19F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F500;
extern uint32_t data_0070F504;
extern uint32_t data_0070F508;
extern uint32_t data_0070F50C;
extern uint32_t data_00787444;
extern uint32_t data_00787448;
extern uint32_t data_0078744C;
extern uint32_t data_00787450;
extern uint32_t data_00787464;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609898(void);


void func_005F1A18(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00787444;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjGtEvBottleMessage";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\201\203b\203Z\201[\203W\203{\203g\203\213";
    data_0070F500 = 0xFFFFFFFFu;
    data_0070F504 = 0xFFFFFFFFu;
    data_0070F508 = 0x00000000u;
    data_0070F50C = 0x00000000u;
    data_00787444 = 0x00000000u;
    data_00787448 = 0x00000005u;
    data_0078744C = (uintptr_t)&data_00787450;
    func_0019B51C((uintptr_t)&data_00787464, (uintptr_t)&func_00609898, 0x00000089u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00787444, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
