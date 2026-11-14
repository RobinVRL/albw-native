/* USA 005A6338 (EU 005A6310): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C0C0;
extern uint32_t data_0070C0C4;
extern uint32_t data_0070C0C8;
extern uint32_t data_0070C0CC;
extern uint32_t data_00759C90;
extern uint32_t data_00759C94;
extern uint32_t data_00759C98;
extern uint32_t data_00759C9C;
extern uint32_t data_00759CB0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602ACC(void);


void func_005A6338(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00759C90;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojLiftIce";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\254\225X\203\212\203t\203g";
    data_0070C0C0 = 0xFFFFFFFFu;
    data_0070C0C4 = 0xFFFFFFFFu;
    data_0070C0C8 = 0x00000000u;
    data_0070C0CC = 0x00000000u;
    data_00759C90 = 0x00000000u;
    data_00759C94 = 0x00000005u;
    data_00759C98 = (uintptr_t)&data_00759C9C;
    func_0019B51C((uintptr_t)&data_00759CB0, (uintptr_t)&func_00602ACC, 0x00000113u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00759C90, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
