/* USA 0059B2A8 (EU 0059B280): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C4A0;
extern uint32_t data_0070C4A4;
extern uint32_t data_0070C4A8;
extern uint32_t data_0070C4AC;
extern uint32_t data_007669A8;
extern uint32_t data_007669AC;
extern uint32_t data_007669B0;
extern uint32_t data_007669B4;
extern uint32_t data_007669C8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A748(void);


void func_0059B2A8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007669A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapField";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203t\203B\201[\203\213\203h\222n\214`";
    data_0070C4A0 = 0xFFFFFFFFu;
    data_0070C4A4 = 0xFFFFFFFFu;
    data_0070C4A8 = 0x00000000u;
    data_0070C4AC = 0x00000000u;
    data_007669A8 = 0x00000000u;
    data_007669AC = 0x00000005u;
    data_007669B0 = (uintptr_t)&data_007669B4;
    func_0019B51C((uintptr_t)&data_007669C8, (uintptr_t)&func_0060A748, 0x0000015Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007669A8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
