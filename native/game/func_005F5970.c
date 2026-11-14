/* USA 005F5970 (EU 005F5948): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712678;
extern uint32_t data_0071267C;
extern uint32_t data_00712680;
extern uint32_t data_00712684;
extern uint32_t data_007982A4;
extern uint32_t data_007982A8;
extern uint32_t data_007982AC;
extern uint32_t data_007982B0;
extern uint32_t data_007982C4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609EC8(void);


void func_005F5970(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007982A4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCrossLavaGenerator";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\267\202\352\210\341\202\242\227p\203}\203O\203}\220\266\220\254\203^\203O";
    data_00712678 = 0xFFFFFFFFu;
    data_0071267C = 0xFFFFFFFFu;
    data_00712680 = 0x00000000u;
    data_00712684 = 0x00000000u;
    data_007982A4 = 0x00000000u;
    data_007982A8 = 0x00000005u;
    data_007982AC = (uintptr_t)&data_007982B0;
    func_0019B51C((uintptr_t)&data_007982C4, (uintptr_t)&func_00609EC8, 0x000000A4u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007982A4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
