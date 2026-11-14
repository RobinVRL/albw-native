/* USA 005C6BA8 (EU 005C6B80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 14 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F850;
extern uint32_t data_0070F858;
extern uint32_t data_0070F85C;
extern uint32_t data_0070F860;
extern uint32_t data_0070F864;
extern uint32_t data_0078D114;
extern uint32_t data_0078D118;
extern uint32_t data_0078D11C;
extern uint32_t data_0078D120;
extern uint32_t data_0078D134;
extern uint32_t data_0078D37C;
extern uint32_t data_0078D380;
extern uint32_t data_0078D384;
extern uint32_t data_0078D388;
extern uint32_t data_0078D39C;
extern uint32_t data_0078D5E4;
extern uint32_t data_0078D5E8;
extern uint32_t data_0078D5EC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606478(void);


void func_005C6BA8(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    data_0070F858 = 0xFFFFFFFFu;
    data_0070F85C = 0xFFFFFFFFu;
    data_0070F860 = 0x00000000u;
    data_0070F864 = 0x00000000u;
    data_0078D5E4 = 0x00000000u /* 0.0 f */;
    data_0078D5E8 = 0x00000000u /* 0.0 f */;
    data_0078D5EC = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4D638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078D114;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjOctorokRock";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203I\203N\203^\203\215\203b\203N\212\342";
    data_0070F850 = ret0;
    data_0078D114 = 0x00000000u;
    data_0078D118 = 0x00000005u;
    data_0078D11C = (uintptr_t)&data_0078D120;
    func_0019B51C((uintptr_t)&data_0078D134, (uintptr_t)&func_00606478, 0x00000068u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078D114, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078D37C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjSlarokRock";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203X\203\211\203\215\203b\203N\212\342";
    data_0078D37C = 0x00000000u;
    data_0078D380 = 0x00000005u;
    data_0078D384 = (uintptr_t)&data_0078D388;
    func_0019B51C((uintptr_t)&data_0078D39C, (uintptr_t)&func_00606478, 0x00000069u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0078D37C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
