/* USA 005C4E14 (EU 005C4DEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 12 other stores, 6 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C330;
extern uint32_t data_0070C334;
extern uint32_t data_0070C338;
extern uint32_t data_0070C33C;
extern uint32_t data_0070C340;
extern uint32_t data_0070C348;
extern uint32_t data_0070C34C;
extern uint32_t data_0070C350;
extern uint32_t data_0070C354;
extern uint32_t data_00760B0C;
extern uint32_t data_00760B10;
extern uint32_t data_00760B14;
extern uint32_t data_00760B18;
extern uint32_t data_00760B2C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605CC0(void);


void func_005C4E14(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070C348 = 0xFFFFFFFFu;
    data_0070C34C = 0xFFFFFFFFu;
    data_0070C350 = 0x00000000u;
    data_0070C354 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B23D70Au, 0xFFFFFFFFu);
    data_0070C330 = ret0;
    uintptr_t ret1 = func_00114608(0x4C888889u, 0x00000000u);
    data_0070C334 = ret1;
    uintptr_t ret2 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070C338 = ret2;
    uintptr_t ret3 = func_00114608(0x4D638E39u, 0x00000000u);
    data_0070C33C = ret3;
    uintptr_t ret4 = func_00114608(0x4991A2B4u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00760B0C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTileTornado";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"Ô^C";
    data_0070C340 = ret4;
    data_00760B0C = 0x00000000u;
    data_00760B10 = 0x00000005u;
    data_00760B14 = (uintptr_t)&data_00760B18;
    func_0019B51C((uintptr_t)&data_00760B2C, (uintptr_t)&func_00605CC0, 0x0000012Du, (uintptr_t)((char *)stk + 16));
}
