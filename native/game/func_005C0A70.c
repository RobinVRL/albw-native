/* USA 005C0A70 (EU 005C0A48): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F740;
extern uint32_t data_0070F744;
extern uint32_t data_0070F748;
extern uint32_t data_0070F750;
extern uint32_t data_0070F754;
extern uint32_t data_0070F758;
extern uint32_t data_0070F75C;
extern uint32_t data_0078B338;
extern uint32_t data_0078B33C;
extern uint32_t data_0078B340;
extern uint32_t data_0078B344;
extern uint32_t data_0078B358;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605504(void);


void func_005C0A70(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F750 = 0xFFFFFFFFu;
    data_0070F754 = 0xFFFFFFFFu;
    data_0070F758 = 0x00000000u;
    data_0070F75C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x00000000u, 0xFFFFFFFFu);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078B338;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMapleBroom";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203A\203C\203\212\203\223\202\314\342\264";
    data_0070F740 = ret0;
    data_0070F744 = ret0;
    data_0070F748 = ret0;
    data_0078B338 = 0x00000000u;
    data_0078B33C = 0x00000005u;
    data_0078B340 = (uintptr_t)&data_0078B344;
    func_0019B51C((uintptr_t)&data_0078B358, (uintptr_t)&func_00605504, 0x00000094u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078B338, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
