/* USA 005B37C8 (EU 005B37A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D4D0;
extern uint32_t data_0070D4D4;
extern uint32_t data_0070D4D8;
extern uint32_t data_0070D4DC;
extern uint32_t data_0076AE78;
extern uint32_t data_0076AE7C;
extern uint32_t data_0076AE80;
extern uint32_t data_0076AE84;
extern uint32_t data_0076AE98;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603B98(void);


void func_005B37C8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076AE78;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassIceBlock";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\203u\203\215\203b\203N(\217\254)";
    data_0070D4D0 = 0xFFFFFFFFu;
    data_0070D4D4 = 0xFFFFFFFFu;
    data_0070D4D8 = 0x00000000u;
    data_0070D4DC = 0x00000000u;
    data_0076AE78 = 0x00000000u;
    data_0076AE7C = 0x00000005u;
    data_0076AE80 = (uintptr_t)&data_0076AE84;
    func_0019B51C((uintptr_t)&data_0076AE98, (uintptr_t)&func_00603B98, 0x00000142u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076AE78, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
