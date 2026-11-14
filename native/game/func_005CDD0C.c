/* USA 005CDD0C (EU 005CDCE4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C8D0;
extern uint32_t data_0070C8D4;
extern uint32_t data_0070C8D8;
extern uint32_t data_0070C8DC;
extern uint32_t data_007676B0;
extern uint32_t data_007676B4;
extern uint32_t data_007676B8;
extern uint32_t data_007676BC;
extern uint32_t data_007676D0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006069E4(void);


void func_005CDD0C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007676B0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapLoruleCastle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\215\203E\203\211\203\213\217\351[\222n\214`]";
    data_0070C8D0 = 0xFFFFFFFFu;
    data_0070C8D4 = 0xFFFFFFFFu;
    data_0070C8D8 = 0x00000000u;
    data_0070C8DC = 0x00000000u;
    data_007676B0 = 0x00000000u;
    data_007676B4 = 0x00000005u;
    data_007676B8 = (uintptr_t)&data_007676BC;
    func_0019B51C((uintptr_t)&data_007676D0, (uintptr_t)&func_006069E4, 0x0000015Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007676B0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
