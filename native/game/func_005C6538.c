/* USA 005C6538 (EU 005C6510): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F398;
extern uint32_t data_0070F39C;
extern uint32_t data_0070F3A0;
extern uint32_t data_0070F3A4;
extern uint32_t data_00783B10;
extern uint32_t data_00783B14;
extern uint32_t data_00783B18;
extern uint32_t data_00783B1C;
extern uint32_t data_00783B30;
extern uint32_t data_00783D78;
extern uint32_t data_00783D7C;
extern uint32_t data_00783D80;
extern uint32_t data_00783D84;
extern uint32_t data_00783D98;
extern uint32_t data_00783FE0;
extern uint32_t data_00783FE4;
extern uint32_t data_00783FE8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606318(void);


void func_005C6538(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00783B10;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjCreepeeBomb";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"N[s[Ìe";
    data_0070F398 = 0xFFFFFFFFu;
    data_0070F39C = 0xFFFFFFFFu;
    data_0070F3A0 = 0x00000000u;
    data_0070F3A4 = 0x00000000u;
    data_00783B10 = 0x00000000u;
    data_00783B14 = 0x00000005u;
    data_00783B18 = (uintptr_t)&data_00783B1C;
    data_00783FE0 = 0x00000000u /* 0.0 f */;
    data_00783FE4 = 0x3E800000u /* 0.25 f */;
    data_00783FE8 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_00783B30, (uintptr_t)&func_00606318, 0x00000077u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00783D78;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjIceCreepeeBomb";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"ACXN[s[Ìe";
    data_00783D78 = 0x00000000u;
    data_00783D7C = 0x00000005u;
    data_00783D80 = (uintptr_t)&data_00783D84;
    func_0019B51C((uintptr_t)&data_00783D98, (uintptr_t)&func_00606318, 0x00000078u, (uintptr_t)((char *)stk + 32));
}
