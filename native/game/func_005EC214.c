/* USA 005EC214 (EU 005EC1EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C418;
extern uint32_t data_0070C420;
extern uint32_t data_0070C424;
extern uint32_t data_0070C428;
extern uint32_t data_0070C42C;
extern uint32_t data_00765B18;
extern uint32_t data_00765B1C;
extern uint32_t data_00765B20;
extern uint32_t data_00765B24;
extern uint32_t data_00765B38;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608D08(void);


void func_005EC214(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070C420 = 0xFFFFFFFFu;
    data_0070C424 = 0xFFFFFFFFu;
    data_0070C428 = 0x00000000u;
    data_0070C42C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E000000u, 0xFFFFFFFFu);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00765B18;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojWaterMoveStatue";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\237\202\265\210\370\202\253\226\330\221\234";
    data_0070C418 = ret0;
    data_00765B18 = 0x00000000u;
    data_00765B1C = 0x00000005u;
    data_00765B20 = (uintptr_t)&data_00765B24;
    func_0019B51C((uintptr_t)&data_00765B38, (uintptr_t)&func_00608D08, 0x0000000Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00765B18, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
