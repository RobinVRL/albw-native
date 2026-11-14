/* USA 005A1924 (EU 005A18FC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D530;
extern uint32_t data_0070D534;
extern uint32_t data_0070D538;
extern uint32_t data_0070D53C;
extern uint32_t data_0076C420;
extern uint32_t data_0076C424;
extern uint32_t data_0076C428;
extern uint32_t data_0076C42C;
extern uint32_t data_0076C440;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B21C(void);


void func_005A1924(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076C420;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassRupee";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\213\203s\201[\201i\222\274\222u\202\253\201j";
    data_0070D530 = 0xFFFFFFFFu;
    data_0070D534 = 0xFFFFFFFFu;
    data_0070D538 = 0x00000000u;
    data_0070D53C = 0x00000000u;
    data_0076C420 = 0x00000000u;
    data_0076C424 = 0x00000005u;
    data_0076C428 = (uintptr_t)&data_0076C42C;
    func_0019B51C((uintptr_t)&data_0076C440, (uintptr_t)&func_0060B21C, 0x0000015Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076C420, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
