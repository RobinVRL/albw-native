/* USA 005CA84C (EU 005CA824): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007127F8;
extern uint32_t data_007127FC;
extern uint32_t data_00712800;
extern uint32_t data_00712804;
extern uint32_t data_0079B390;
extern uint32_t data_0079B394;
extern uint32_t data_0079B398;
extern uint32_t data_0079B39C;
extern uint32_t data_0079B3B0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606654(void);


void func_005CA84C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079B390;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagSwitchTimer";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203X\203C\203b\203`\203^\203C\203}\201[\203^\203O";
    data_007127F8 = 0xFFFFFFFFu;
    data_007127FC = 0xFFFFFFFFu;
    data_00712800 = 0x00000000u;
    data_00712804 = 0x00000000u;
    data_0079B390 = 0x00000000u;
    data_0079B394 = 0x00000005u;
    data_0079B398 = (uintptr_t)&data_0079B39C;
    func_0019B51C((uintptr_t)&data_0079B3B0, (uintptr_t)&func_00606654, 0x000000A6u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079B390, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
