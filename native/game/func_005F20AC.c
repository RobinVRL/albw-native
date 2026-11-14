/* USA 005F20AC (EU 005F2084): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712720;
extern uint32_t data_00712724;
extern uint32_t data_00712728;
extern uint32_t data_0071272C;
extern uint32_t data_00799D68;
extern uint32_t data_00799D6C;
extern uint32_t data_00799D70;
extern uint32_t data_00799D74;
extern uint32_t data_00799D88;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006099E4(void);


void func_005F20AC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00799D68;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagMiniGameTowerGoal";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\215\203E\203\211\203\213\203R\203\215\203V\203A\203\200\203S\201[\203\213";
    data_00712720 = 0xFFFFFFFFu;
    data_00712724 = 0xFFFFFFFFu;
    data_00712728 = 0x00000000u;
    data_0071272C = 0x00000000u;
    data_00799D68 = 0x00000000u;
    data_00799D6C = 0x00000005u;
    data_00799D70 = (uintptr_t)&data_00799D74;
    func_0019B51C((uintptr_t)&data_00799D88, (uintptr_t)&func_006099E4, 0x000000A0u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00799D68, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
