/* USA 0059F154 (EU 0059F12C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F958;
extern uint32_t data_0070F95C;
extern uint32_t data_0070F960;
extern uint32_t data_0070F964;
extern uint32_t data_007907BC;
extern uint32_t data_007907C0;
extern uint32_t data_007907C4;
extern uint32_t data_007907C8;
extern uint32_t data_007907DC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AF28(void);


void func_0059F154(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007907BC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjRupee";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\213\203s\201[";
    data_0070F958 = 0xFFFFFFFFu;
    data_0070F95C = 0xFFFFFFFFu;
    data_0070F960 = 0x00000000u;
    data_0070F964 = 0x00000000u;
    data_007907BC = 0x00000000u;
    data_007907C0 = 0x00000005u;
    data_007907C4 = (uintptr_t)&data_007907C8;
    func_0019B51C((uintptr_t)&data_007907DC, (uintptr_t)&func_0060AF28, 0x0000003Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007907BC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
