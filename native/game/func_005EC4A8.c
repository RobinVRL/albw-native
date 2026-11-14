/* USA 005EC4A8 (EU 005EC480): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A1F64;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F780;
extern uint32_t data_0070F788;
extern uint32_t data_0070F78C;
extern uint32_t data_0070F790;
extern uint32_t data_0070F794;
extern uint32_t data_0078B82C;
extern uint32_t data_0078B830;
extern uint32_t data_0078B834;
extern uint32_t data_0078B838;
extern uint32_t data_0078B84C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608F80(void);


void func_005EC4A8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F788 = 0xFFFFFFFFu;
    data_0070F78C = 0xFFFFFFFFu;
    data_0070F790 = 0x00000000u;
    data_0070F794 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078B82C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A1F64;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumGanonBall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"KmÊ";
    data_0070F780 = ret0;
    data_0078B82C = 0x00000000u;
    data_0078B830 = 0x00000005u;
    data_0078B834 = (uintptr_t)&data_0078B838;
    func_0019B51C((uintptr_t)&data_0078B84C, (uintptr_t)&func_00608F80, 0x0000022Fu, (uintptr_t)((char *)stk + 16));
}
