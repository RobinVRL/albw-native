/* USA 005CA770 (EU 005CA748): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007127D0;
extern uint32_t data_007127D4;
extern uint32_t data_007127D8;
extern uint32_t data_007127DC;
extern uint32_t data_0079AEC0;
extern uint32_t data_0079AEC4;
extern uint32_t data_0079AEC8;
extern uint32_t data_0079AECC;
extern uint32_t data_0079AEE0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606628(void);


void func_005CA770(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079AEC0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagSwitchPause";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203X\203C\203b\203`\212\304\216\213\203^\203O";
    data_007127D0 = 0xFFFFFFFFu;
    data_007127D4 = 0xFFFFFFFFu;
    data_007127D8 = 0x00000000u;
    data_007127DC = 0x00000000u;
    data_0079AEC0 = 0x00000000u;
    data_0079AEC4 = 0x00000005u;
    data_0079AEC8 = (uintptr_t)&data_0079AECC;
    func_0019B51C((uintptr_t)&data_0079AEE0, (uintptr_t)&func_00606628, 0x000000A5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079AEC0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
