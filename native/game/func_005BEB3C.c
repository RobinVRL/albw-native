/* USA 005BEB3C (EU 005BEB14): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C240;
extern uint32_t data_0070C244;
extern uint32_t data_0070C248;
extern uint32_t data_0070C24C;
extern uint32_t data_0075DF34;
extern uint32_t data_0075DF38;
extern uint32_t data_0075DF3C;
extern uint32_t data_0075DF40;
extern uint32_t data_0075DF54;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604F2C(void);


void func_005BEB3C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075DF34;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojStatueHint";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203_\203\223\203W\203\207\203\223\203q\203\223\203g\220\316\221\234";
    data_0070C240 = 0xFFFFFFFFu;
    data_0070C244 = 0xFFFFFFFFu;
    data_0070C248 = 0x00000000u;
    data_0070C24C = 0x00000000u;
    data_0075DF34 = 0x00000000u;
    data_0075DF38 = 0x00000005u;
    data_0075DF3C = (uintptr_t)&data_0075DF40;
    func_0019B51C((uintptr_t)&data_0075DF54, (uintptr_t)&func_00604F2C, 0x00000122u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075DF34, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
