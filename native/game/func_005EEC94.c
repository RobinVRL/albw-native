/* USA 005EEC94 (EU 005EEC6C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712618;
extern uint32_t data_0071261C;
extern uint32_t data_00712620;
extern uint32_t data_00712624;
extern uint32_t data_00797434;
extern uint32_t data_00797438;
extern uint32_t data_0079743C;
extern uint32_t data_00797440;
extern uint32_t data_00797454;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609314(void);


void func_005EEC94(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00797434;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraFocusEnemy";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223G\222\215\226\332\203J\203\201\203\211\203^\203O";
    data_00712618 = 0xFFFFFFFFu;
    data_0071261C = 0xFFFFFFFFu;
    data_00712620 = 0x00000000u;
    data_00712624 = 0x00000000u;
    data_00797434 = 0x00000000u;
    data_00797438 = 0x00000005u;
    data_0079743C = (uintptr_t)&data_00797440;
    func_0019B51C((uintptr_t)&data_00797454, (uintptr_t)&func_00609314, 0x00000096u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00797434, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
