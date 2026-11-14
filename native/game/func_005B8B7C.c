/* USA 005B8B7C (EU 005B8B54): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126B8;
extern uint32_t data_007126BC;
extern uint32_t data_007126C0;
extern uint32_t data_007126C4;
extern uint32_t data_00798C44;
extern uint32_t data_00798C48;
extern uint32_t data_00798C4C;
extern uint32_t data_00798C50;
extern uint32_t data_00798C64;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604598(void);


void func_005B8B7C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00798C44;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagEnvEffect";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\212\302\213\253\203G\203t\203F\203N\203g\203^\203O";
    data_007126B8 = 0xFFFFFFFFu;
    data_007126BC = 0xFFFFFFFFu;
    data_007126C0 = 0x00000000u;
    data_007126C4 = 0x00000000u;
    data_00798C44 = 0x00000000u;
    data_00798C48 = 0x00000005u;
    data_00798C4C = (uintptr_t)&data_00798C50;
    func_0019B51C((uintptr_t)&data_00798C64, (uintptr_t)&func_00604598, 0x000000A8u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00798C44, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
