/* USA 005B8774 (EU 005B874C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA00;
extern uint32_t data_0070FA04;
extern uint32_t data_0070FA08;
extern uint32_t data_0070FA0C;
extern uint32_t data_00791D38;
extern uint32_t data_00791D3C;
extern uint32_t data_00791D40;
extern uint32_t data_00791D44;
extern uint32_t data_00791D58;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604514(void);


void func_005B8774(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00791D38;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjShockWave";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\217\325\214\202\224g";
    data_0070FA00 = 0xFFFFFFFFu;
    data_0070FA04 = 0xFFFFFFFFu;
    data_0070FA08 = 0x00000000u;
    data_0070FA0C = 0x00000000u;
    data_00791D38 = 0x00000000u;
    data_00791D3C = 0x00000005u;
    data_00791D40 = (uintptr_t)&data_00791D44;
    func_0019B51C((uintptr_t)&data_00791D58, (uintptr_t)&func_00604514, 0x00000030u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00791D38, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
