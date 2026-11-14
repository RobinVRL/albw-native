/* USA 005A19FC (EU 005A19D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D540;
extern uint32_t data_0070D544;
extern uint32_t data_0070D548;
extern uint32_t data_0070D54C;
extern uint32_t data_0070D550;
extern uint32_t data_0070D554;
extern uint32_t data_0076C688;
extern uint32_t data_0076C68C;
extern uint32_t data_0076C690;
extern uint32_t data_0076C694;
extern uint32_t data_0076C6A8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605ABC(void);


void func_005A19FC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070D548 = 0xFFFFFFFFu;
    data_0070D54C = 0xFFFFFFFFu;
    data_0070D550 = 0x00000000u;
    data_0070D554 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C888889u, 0xFFFFFFFFu);
    data_0070D540 = ret0;
    uintptr_t ret1 = func_00114608(0x4A5A740Fu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076C688;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassShrubLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222\341\226\330\201i\214\365\201j";
    data_0070D544 = ret1;
    data_0076C688 = 0x00000000u;
    data_0076C68C = 0x00000005u;
    data_0076C690 = (uintptr_t)&data_0076C694;
    func_0019B51C((uintptr_t)&data_0076C6A8, (uintptr_t)&func_00605ABC, 0x00000141u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0076C688, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
