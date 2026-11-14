/* USA 005CA5B8 (EU 005CA590): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712750;
extern uint32_t data_00712754;
extern uint32_t data_00712758;
extern uint32_t data_0071275C;
extern uint32_t data_0079A4C0;
extern uint32_t data_0079A4C4;
extern uint32_t data_0079A4C8;
extern uint32_t data_0079A4CC;
extern uint32_t data_0079A4E0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006065B4(void);


void func_005CA5B8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079A4C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagRupeeAppear";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\213\203s\201[\217o\214\273\203|\203C\203\223\203g";
    data_00712750 = 0xFFFFFFFFu;
    data_00712754 = 0xFFFFFFFFu;
    data_00712758 = 0x00000000u;
    data_0071275C = 0x00000000u;
    data_0079A4C0 = 0x00000000u;
    data_0079A4C4 = 0x00000005u;
    data_0079A4C8 = (uintptr_t)&data_0079A4CC;
    func_0019B51C((uintptr_t)&data_0079A4E0, (uintptr_t)&func_006065B4, 0x000000A2u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079A4C0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
