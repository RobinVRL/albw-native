/* USA 005C4984 (EU 005C495C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C000;
extern uint32_t data_0070C004;
extern uint32_t data_0070C008;
extern uint32_t data_0070C00C;
extern uint32_t data_00757C60;
extern uint32_t data_00757C64;
extern uint32_t data_00757C68;
extern uint32_t data_00757C6C;
extern uint32_t data_00757C80;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605C18(void);


void func_005C4984(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00757C60;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojGuruGuruBar";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203O\203\213\203O\203\213\203o\201[";
    data_0070C000 = 0xFFFFFFFFu;
    data_0070C004 = 0xFFFFFFFFu;
    data_0070C008 = 0x00000000u;
    data_0070C00C = 0x00000000u;
    data_00757C60 = 0x00000000u;
    data_00757C64 = 0x00000005u;
    data_00757C68 = (uintptr_t)&data_00757C6C;
    func_0019B51C((uintptr_t)&data_00757C80, (uintptr_t)&func_00605C18, 0x0000011Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00757C60, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
