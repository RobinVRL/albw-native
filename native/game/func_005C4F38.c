/* USA 005C4F38 (EU 005C4F10): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C388;
extern uint32_t data_0070C38C;
extern uint32_t data_0070C390;
extern uint32_t data_0070C394;
extern uint32_t data_00761714;
extern uint32_t data_00761718;
extern uint32_t data_0076171C;
extern uint32_t data_00761720;
extern uint32_t data_00761734;
extern uint32_t data_0076197C;
extern uint32_t data_00761980;
extern uint32_t data_00761984;
extern uint32_t data_00761988;
extern uint32_t data_0076199C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606C44(void);
void func_00606CC0(void);


void func_005C4F38(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00761714;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTreasureBoxL";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\363\224\240(\221\345)";
    data_0070C388 = 0xFFFFFFFFu;
    data_0070C38C = 0xFFFFFFFFu;
    data_0070C390 = 0x00000000u;
    data_0070C394 = 0x00000000u;
    data_00761714 = 0x00000000u;
    data_00761718 = 0x00000005u;
    data_0076171C = (uintptr_t)&data_00761720;
    func_0019B51C((uintptr_t)&data_00761734, (uintptr_t)&func_00606C44, 0x000000EFu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00761714, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076197C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojTreasureBoxS";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\225\363\224\240(\217\254)";
    data_0076197C = 0x00000000u;
    data_00761980 = 0x00000005u;
    data_00761984 = (uintptr_t)&data_00761988;
    func_0019B51C((uintptr_t)&data_0076199C, (uintptr_t)&func_00606CC0, 0x000000F0u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0076197C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
