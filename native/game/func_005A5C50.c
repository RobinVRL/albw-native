/* USA 005A5C50 (EU 005A5C28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C958;
extern uint32_t data_0070C95C;
extern uint32_t data_0070C960;
extern uint32_t data_0070C964;
extern uint32_t data_00768070;
extern uint32_t data_00768074;
extern uint32_t data_00768078;
extern uint32_t data_0076807C;
extern uint32_t data_00768090;
extern uint32_t data_007682D8;
extern uint32_t data_007682DC;
extern uint32_t data_007682E0;
extern uint32_t data_007682E4;
extern uint32_t data_007682F8;
extern uint32_t data_00768540;
extern uint32_t data_00768544;
extern uint32_t data_00768548;
extern uint32_t data_0076854C;
extern uint32_t data_00768560;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006059A8(void);
void func_00606A10(void);
void func_00606ADC(void);


void func_005A5C50(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00768070;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapSurfaceRoom";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\302\223\256\220\205\226\312\201i\203\213\201[\203\200\201j";
    data_0070C958 = 0xFFFFFFFFu;
    data_0070C95C = 0xFFFFFFFFu;
    data_0070C960 = 0x00000000u;
    data_0070C964 = 0x00000000u;
    data_00768070 = 0x00000000u;
    data_00768074 = 0x00000005u;
    data_00768078 = (uintptr_t)&data_0076807C;
    func_0019B51C((uintptr_t)&data_00768090, (uintptr_t)&func_006059A8, 0x00000003u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00768070, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007682D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MapSurfaceFloor";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\211\302\223\256\220\205\226\312\201i\203t\203\215\203A\201j";
    data_007682D8 = 0x00000000u;
    data_007682DC = 0x00000005u;
    data_007682E0 = (uintptr_t)&data_007682E4;
    func_0019B51C((uintptr_t)&data_007682F8, (uintptr_t)&func_00606ADC, 0x00000004u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007682D8, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00768540;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MapSurfaceFixed";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\214\305\222\350\220\205\226\312";
    data_00768540 = 0x00000000u;
    data_00768544 = 0x00000005u;
    data_00768548 = (uintptr_t)&data_0076854C;
    func_0019B51C((uintptr_t)&data_00768560, (uintptr_t)&func_00606A10, 0x00000164u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00768540, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
