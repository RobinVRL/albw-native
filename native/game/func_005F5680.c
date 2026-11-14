/* USA 005F5680 (EU 005F5658): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A2130;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F7A8;
extern uint32_t data_0070F7B0;
extern uint32_t data_0070F7B4;
extern uint32_t data_0070F7B8;
extern uint32_t data_0070F7BC;
extern uint32_t data_0078BCFC;
extern uint32_t data_0078BD00;
extern uint32_t data_0078BD04;
extern uint32_t data_0078BD08;
extern uint32_t data_0078BD1C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609E74(void);


void func_005F5680(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F7B0 = 0xFFFFFFFFu;
    data_0070F7B4 = 0xFFFFFFFFu;
    data_0070F7B8 = 0x00000000u;
    data_0070F7BC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078BCFC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A2130;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumGanonFireObj";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"KmIuWF";
    data_0070F7A8 = ret0;
    data_0078BCFC = 0x00000000u;
    data_0078BD00 = 0x00000005u;
    data_0078BD04 = (uintptr_t)&data_0078BD08;
    func_0019B51C((uintptr_t)&data_0078BD1C, (uintptr_t)&func_00609E74, 0x00000231u, (uintptr_t)((char *)stk + 16));
}
