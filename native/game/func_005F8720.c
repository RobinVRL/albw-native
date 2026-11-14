/* USA 005F8720 (EU 005F86F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F7C0;
extern uint32_t data_0070F7C4;
extern uint32_t data_0070F7C8;
extern uint32_t data_0070F7CC;
extern uint32_t data_0078BF64;
extern uint32_t data_0078BF68;
extern uint32_t data_0078BF6C;
extern uint32_t data_0078BF70;
extern uint32_t data_0078BF84;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A118(void);


void func_005F8720(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078BF64;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumGanonMagicDark";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203K\203m\203\223\226\202\226@\215U\214\202";
    data_0070F7C0 = 0xFFFFFFFFu;
    data_0070F7C4 = 0xFFFFFFFFu;
    data_0070F7C8 = 0x00000000u;
    data_0070F7CC = 0x00000000u;
    data_0078BF64 = 0x00000000u;
    data_0078BF68 = 0x00000005u;
    data_0078BF6C = (uintptr_t)&data_0078BF70;
    func_0019B51C((uintptr_t)&data_0078BF84, (uintptr_t)&func_0060A118, 0x00000232u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078BF64, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
