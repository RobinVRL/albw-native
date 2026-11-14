/* USA 005CA324 (EU 005CA2FC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712608;
extern uint32_t data_0071260C;
extern uint32_t data_00712610;
extern uint32_t data_00712614;
extern uint32_t data_007971CC;
extern uint32_t data_007971D0;
extern uint32_t data_007971D4;
extern uint32_t data_007971D8;
extern uint32_t data_007971EC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606538(void);


void func_005CA324(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007971CC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraFocus";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222\215\226\332\203J\203\201\203\211\203^\203O";
    data_00712608 = 0xFFFFFFFFu;
    data_0071260C = 0xFFFFFFFFu;
    data_00712610 = 0x00000000u;
    data_00712614 = 0x00000000u;
    data_007971CC = 0x00000000u;
    data_007971D0 = 0x00000005u;
    data_007971D4 = (uintptr_t)&data_007971D8;
    func_0019B51C((uintptr_t)&data_007971EC, (uintptr_t)&func_00606538, 0x00000095u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007971CC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
