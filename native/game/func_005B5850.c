/* USA 005B5850 (EU 005B5828): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C370;
extern uint32_t data_0070C374;
extern uint32_t data_0070C378;
extern uint32_t data_0070C37C;
extern uint32_t data_0070C380;
extern uint32_t data_0070C384;
extern uint32_t data_007614AC;
extern uint32_t data_007614B0;
extern uint32_t data_007614B4;
extern uint32_t data_007614B8;
extern uint32_t data_007614CC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603ECC(void);


void func_005B5850(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070C378 = 0xFFFFFFFFu;
    data_0070C37C = 0xFFFFFFFFu;
    data_0070C380 = 0x00000000u;
    data_0070C384 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C888889u, 0x00000000u);
    data_0070C370 = ret0;
    uintptr_t ret1 = func_00114608(0x4E555556u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007614AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTrapFloat";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\202\227V\203g\203\211\203b\203v";
    data_0070C374 = ret1;
    data_007614AC = 0x00000000u;
    data_007614B0 = 0x00000005u;
    data_007614B4 = (uintptr_t)&data_007614B8;
    func_0019B51C((uintptr_t)&data_007614CC, (uintptr_t)&func_00603ECC, 0x000000DBu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007614AC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
