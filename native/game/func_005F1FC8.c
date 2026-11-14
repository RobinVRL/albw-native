/* USA 005F1FC8 (EU 005F1FA0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126F8;
extern uint32_t data_007126FC;
extern uint32_t data_00712700;
extern uint32_t data_00712704;
extern uint32_t data_0079988C;
extern uint32_t data_00799890;
extern uint32_t data_00799894;
extern uint32_t data_00799898;
extern uint32_t data_007998AC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609968(void);


void func_005F1FC8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079988C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagKyameronGenerator";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203L\203\203\203\201\203\215\203\223\224\255\220\266\203^\203O";
    data_007126F8 = 0xFFFFFFFFu;
    data_007126FC = 0xFFFFFFFFu;
    data_00712700 = 0x00000000u;
    data_00712704 = 0x00000000u;
    data_0079988C = 0x00000000u;
    data_00799890 = 0x00000005u;
    data_00799894 = (uintptr_t)&data_00799898;
    func_0019B51C((uintptr_t)&data_007998AC, (uintptr_t)&func_00609968, 0x00000276u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079988C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
