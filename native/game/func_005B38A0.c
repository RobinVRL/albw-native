/* USA 005B38A0 (EU 005B3878): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D4E0;
extern uint32_t data_0070D4E4;
extern uint32_t data_0070D4E8;
extern uint32_t data_0070D4EC;
extern uint32_t data_0076B0E0;
extern uint32_t data_0076B0E4;
extern uint32_t data_0076B0E8;
extern uint32_t data_0076B0EC;
extern uint32_t data_0076B100;
extern uint32_t data_0076B348;
extern uint32_t data_0076B34C;
extern uint32_t data_0076B350;
extern uint32_t data_0076B354;
extern uint32_t data_0076B368;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603C64(void);


void func_005B38A0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076B0E0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassPillarUp";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\213\337\225t\202\255\202\306\217o\202\351\222\214(Mass)";
    data_0070D4E0 = 0xFFFFFFFFu;
    data_0070D4E4 = 0xFFFFFFFFu;
    data_0070D4E8 = 0x00000000u;
    data_0070D4EC = 0x00000000u;
    data_0076B0E0 = 0x00000000u;
    data_0076B0E4 = 0x00000005u;
    data_0076B0E8 = (uintptr_t)&data_0076B0EC;
    func_0019B51C((uintptr_t)&data_0076B100, (uintptr_t)&func_00603C64, 0x00000149u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076B0E0, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076B348;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassPillarUpL";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\213\337\225t\202\255\202\306\217o\202\351\222\214\201i2x2\201j(Mass)";
    data_0076B348 = 0x00000000u;
    data_0076B34C = 0x00000005u;
    data_0076B350 = (uintptr_t)&data_0076B354;
    func_0019B51C((uintptr_t)&data_0076B368, (uintptr_t)&func_00603C64, 0x0000014Au, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0076B348, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
