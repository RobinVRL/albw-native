/* USA 005E3604 (EU 005E35DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712688;
extern uint32_t data_0071268C;
extern uint32_t data_00712690;
extern uint32_t data_00712694;
extern uint32_t data_0079850C;
extern uint32_t data_00798510;
extern uint32_t data_00798514;
extern uint32_t data_00798518;
extern uint32_t data_0079852C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607FD4(void);


void func_005E3604(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079850C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagDisableWallIn";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\307\202\311\223\374\202\352\202\310\202\242\203^\203O";
    data_00712688 = 0xFFFFFFFFu;
    data_0071268C = 0xFFFFFFFFu;
    data_00712690 = 0x00000000u;
    data_00712694 = 0x00000000u;
    data_0079850C = 0x00000000u;
    data_00798510 = 0x00000005u;
    data_00798514 = (uintptr_t)&data_00798518;
    func_0019B51C((uintptr_t)&data_0079852C, (uintptr_t)&func_00607FD4, 0x000000A9u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079850C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
