/* USA 005A5B7C (EU 005A5B54): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C490;
extern uint32_t data_0070C494;
extern uint32_t data_0070C498;
extern uint32_t data_0070C49C;
extern uint32_t data_00766740;
extern uint32_t data_00766744;
extern uint32_t data_00766748;
extern uint32_t data_0076674C;
extern uint32_t data_00766760;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006029C4(void);


void func_005A5B7C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00766740;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapDungeon";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203_\203\223\203W\203\207\203\223\222n\214`";
    data_0070C490 = 0xFFFFFFFFu;
    data_0070C494 = 0xFFFFFFFFu;
    data_0070C498 = 0x00000000u;
    data_0070C49C = 0x00000000u;
    data_00766740 = 0x00000000u;
    data_00766744 = 0x00000005u;
    data_00766748 = (uintptr_t)&data_0076674C;
    func_0019B51C((uintptr_t)&data_00766760, (uintptr_t)&func_006029C4, 0x0000015Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00766740, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
