/* USA 005CE658 (EU 005CE630): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C260;
extern uint32_t data_0070C264;
extern uint32_t data_0070C268;
extern uint32_t data_0070C26C;
extern uint32_t data_0075E404;
extern uint32_t data_0075E408;
extern uint32_t data_0075E40C;
extern uint32_t data_0075E410;
extern uint32_t data_0075E424;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606BEC(void);


void func_005CE658(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075E404;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSwitchCandle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223\224\202\353\202\244\203X\203C\203b\203`";
    data_0070C260 = 0xFFFFFFFFu;
    data_0070C264 = 0xFFFFFFFFu;
    data_0070C268 = 0x00000000u;
    data_0070C26C = 0x00000000u;
    data_0075E404 = 0x00000000u;
    data_0075E408 = 0x00000005u;
    data_0075E40C = (uintptr_t)&data_0075E410;
    func_0019B51C((uintptr_t)&data_0075E424, (uintptr_t)&func_00606BEC, 0x000000E6u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075E404, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
