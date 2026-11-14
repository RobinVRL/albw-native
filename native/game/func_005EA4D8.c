/* USA 005EA4D8 (EU 005EA4B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F838;
extern uint32_t data_0070F83C;
extern uint32_t data_0070F840;
extern uint32_t data_0070F844;
extern uint32_t data_0070F848;
extern uint32_t data_0070F84C;
extern uint32_t data_0078CEAC;
extern uint32_t data_0078CEB0;
extern uint32_t data_0078CEB4;
extern uint32_t data_0078CEB8;
extern uint32_t data_0078CECC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608944(void);


void func_005EA4D8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F840 = 0xFFFFFFFFu;
    data_0070F844 = 0xFFFFFFFFu;
    data_0070F848 = 0x00000000u;
    data_0070F84C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4EAAAAABu, 0x00000000u);
    data_0070F838 = ret0;
    uintptr_t ret1 = func_00114608(0xCE2AAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078CEAC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMoriblinShield";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"uEEºmÌ";
    data_0070F83C = ret1;
    data_0078CEAC = 0x00000000u;
    data_0078CEB0 = 0x00000005u;
    data_0078CEB4 = (uintptr_t)&data_0078CEB8;
    func_0019B51C((uintptr_t)&data_0078CECC, (uintptr_t)&func_00608944, 0x00000087u, (uintptr_t)((char *)stk + 16));
}
