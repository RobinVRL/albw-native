/* USA 005AED78 (EU 005AED50): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007088D0;
extern uint32_t data_007088D4;
extern uint32_t data_007088D8;
extern uint32_t data_007088DC;
extern uint32_t data_007301C0;
extern uint32_t data_007301C4;
extern uint32_t data_007301C8;
extern uint32_t data_007301CC;
extern uint32_t data_007301E0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603870(void);


void func_005AED78(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007301C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaWarpHole";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\217\201[\203v\203z\201[\203\213";
    data_007088D0 = 0xFFFFFFFFu;
    data_007088D4 = 0xFFFFFFFFu;
    data_007088D8 = 0x00000000u;
    data_007088DC = 0x00000000u;
    data_007301C0 = 0x00000000u;
    data_007301C4 = 0x00000005u;
    data_007301C8 = (uintptr_t)&data_007301CC;
    func_0019B51C((uintptr_t)&data_007301E0, (uintptr_t)&func_00603870, 0x00000173u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007301C0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
