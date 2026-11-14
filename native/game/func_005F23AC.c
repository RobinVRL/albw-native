/* USA 005F23AC (EU 005F2384): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007127E8;
extern uint32_t data_007127EC;
extern uint32_t data_007127F0;
extern uint32_t data_007127F4;
extern uint32_t data_0079B128;
extern uint32_t data_0079B12C;
extern uint32_t data_0079B130;
extern uint32_t data_0079B134;
extern uint32_t data_0079B148;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609A3C(void);


void func_005F23AC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079B128;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagSwitchSoundPlayer";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203T\203E\203\223\203h\215\304\220\266\203^\203O(\203X\203C\203b\203`)";
    data_007127E8 = 0xFFFFFFFFu;
    data_007127EC = 0xFFFFFFFFu;
    data_007127F0 = 0x00000000u;
    data_007127F4 = 0x00000000u;
    data_0079B128 = 0x00000000u;
    data_0079B12C = 0x00000005u;
    data_0079B130 = (uintptr_t)&data_0079B134;
    func_0019B51C((uintptr_t)&data_0079B148, (uintptr_t)&func_00609A3C, 0x0000027Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079B128, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
