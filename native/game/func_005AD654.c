/* USA 005AD654 (EU 005AD62C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F558;
extern uint32_t data_0070F55C;
extern uint32_t data_0070F560;
extern uint32_t data_0070F564;
extern uint32_t data_00788284;
extern uint32_t data_00788288;
extern uint32_t data_0078828C;
extern uint32_t data_00788290;
extern uint32_t data_007882A4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006036BC(void);


void func_005AD654(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00788284;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjIceBlock";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\203u\203\215\203b\203N\201i\216\235\202\277\217\343\202\260\217\254\201j";
    data_0070F558 = 0xFFFFFFFFu;
    data_0070F55C = 0xFFFFFFFFu;
    data_0070F560 = 0x00000000u;
    data_0070F564 = 0x00000000u;
    data_00788284 = 0x00000000u;
    data_00788288 = 0x00000005u;
    data_0078828C = (uintptr_t)&data_00788290;
    func_0019B51C((uintptr_t)&data_007882A4, (uintptr_t)&func_006036BC, 0x00000038u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00788284, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
