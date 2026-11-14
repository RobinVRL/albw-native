/* USA 0059B1D4 (EU 0059B1AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C450;
extern uint32_t data_0070C454;
extern uint32_t data_0070C458;
extern uint32_t data_0070C45C;
extern uint32_t data_007664D8;
extern uint32_t data_007664DC;
extern uint32_t data_007664E0;
extern uint32_t data_007664E4;
extern uint32_t data_007664F8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A71C(void);


void func_0059B1D4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007664D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapBlock";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222n\214`\203u\203\215\203b\203N";
    data_0070C450 = 0xFFFFFFFFu;
    data_0070C454 = 0xFFFFFFFFu;
    data_0070C458 = 0x00000000u;
    data_0070C45C = 0x00000000u;
    data_007664D8 = 0x00000000u;
    data_007664DC = 0x00000005u;
    data_007664E0 = (uintptr_t)&data_007664E4;
    func_0019B51C((uintptr_t)&data_007664F8, (uintptr_t)&func_0060A71C, 0x00000162u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007664D8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
