/* USA 0059F5D4 (EU 0059F5AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126A8;
extern uint32_t data_007126AC;
extern uint32_t data_007126B0;
extern uint32_t data_007126B4;
extern uint32_t data_007989DC;
extern uint32_t data_007989E0;
extern uint32_t data_007989E4;
extern uint32_t data_007989E8;
extern uint32_t data_007989FC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AF54(void);


void func_0059F5D4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007989DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagDummy";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203_\203~\201[\203^\203O";
    data_007126A8 = 0xFFFFFFFFu;
    data_007126AC = 0xFFFFFFFFu;
    data_007126B0 = 0x00000000u;
    data_007126B4 = 0x00000000u;
    data_007989DC = 0x00000000u;
    data_007989E0 = 0x00000005u;
    data_007989E4 = (uintptr_t)&data_007989E8;
    func_0019B51C((uintptr_t)&data_007989FC, (uintptr_t)&func_0060AF54, 0x0000027Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007989DC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
