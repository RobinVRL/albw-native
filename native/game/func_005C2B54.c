/* USA 005C2B54 (EU 005C2B2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708788;
extern uint32_t data_0070878C;
extern uint32_t data_00708790;
extern uint32_t data_00708794;
extern uint32_t data_0072ACB0;
extern uint32_t data_0072ACB4;
extern uint32_t data_0072ACB8;
extern uint32_t data_0072ACBC;
extern uint32_t data_0072ACD0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060571C(void);


void func_005C2B54(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072ACB0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaBellReject";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203x\203\213\225s\213\226\211\302\203G\203\212\203A";
    data_00708788 = 0xFFFFFFFFu;
    data_0070878C = 0xFFFFFFFFu;
    data_00708790 = 0x00000000u;
    data_00708794 = 0x00000000u;
    data_0072ACB0 = 0x00000000u;
    data_0072ACB4 = 0x00000005u;
    data_0072ACB8 = (uintptr_t)&data_0072ACBC;
    func_0019B51C((uintptr_t)&data_0072ACD0, (uintptr_t)&func_0060571C, 0x00000186u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072ACB0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
