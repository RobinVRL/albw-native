/* USA 005B3C74 (EU 005B3C4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D598;
extern uint32_t data_0070D59C;
extern uint32_t data_0070D5A0;
extern uint32_t data_0070D5A4;
extern uint32_t data_0076E8D8;
extern uint32_t data_0076E8DC;
extern uint32_t data_0076E8E0;
extern uint32_t data_0076E8E4;
extern uint32_t data_0076E8F8;
extern uint32_t data_0076EB40;
extern uint32_t data_0076EB44;
extern uint32_t data_0076EB48;
extern uint32_t data_0076EB4C;
extern uint32_t data_0076EB60;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607690(void);
void func_00607710(void);


void func_005B3C74(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076E8D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassYukaPeraWind";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\217\260\203y\203\211\201i\225\227\202\314\212\331\201j";
    data_0070D598 = 0xFFFFFFFFu;
    data_0070D59C = 0xFFFFFFFFu;
    data_0070D5A0 = 0x00000000u;
    data_0070D5A4 = 0x00000000u;
    data_0076E8D8 = 0x00000000u;
    data_0076E8DC = 0x00000005u;
    data_0076E8E0 = (uintptr_t)&data_0076E8E4;
    func_0019B51C((uintptr_t)&data_0076E8F8, (uintptr_t)&func_00607710, 0x00000156u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076E8D8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076EB40;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassYukaPeraDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\217\260\203y\203\211\201i\210\305\202\314\220_\223a\201j";
    data_0076EB40 = 0x00000000u;
    data_0076EB44 = 0x00000005u;
    data_0076EB48 = (uintptr_t)&data_0076EB4C;
    func_0019B51C((uintptr_t)&data_0076EB60, (uintptr_t)&func_00607690, 0x00000157u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0076EB40, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
