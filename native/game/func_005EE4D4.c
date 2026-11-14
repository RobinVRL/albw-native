/* USA 005EE4D4 (EU 005EE4AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BEA8;
extern uint32_t data_0070BEAC;
extern uint32_t data_0070BEB0;
extern uint32_t data_0070BEB4;
extern uint32_t data_00752930;
extern uint32_t data_00752934;
extern uint32_t data_00752938;
extern uint32_t data_0075293C;
extern uint32_t data_00752950;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060918C(void);


void func_005EE4D4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00752930;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojColiseumAudience";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203R\203\215\203V\203A\203\200\202\314\212\317\213q";
    data_0070BEA8 = 0xFFFFFFFFu;
    data_0070BEAC = 0xFFFFFFFFu;
    data_0070BEB0 = 0x00000000u;
    data_0070BEB4 = 0x00000000u;
    data_00752930 = 0x00000000u;
    data_00752934 = 0x00000005u;
    data_00752938 = (uintptr_t)&data_0075293C;
    func_0019B51C((uintptr_t)&data_00752950, (uintptr_t)&func_0060918C, 0x000000F3u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00752930, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
