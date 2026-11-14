/* USA 005A7BC4 (EU 005A7B9C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FAA8;
extern uint32_t data_0070FAAC;
extern uint32_t data_0070FAB0;
extern uint32_t data_0070FAB4;
extern uint32_t data_007946E8;
extern uint32_t data_007946EC;
extern uint32_t data_007946F0;
extern uint32_t data_007946F4;
extern uint32_t data_00794708;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602FD0(void);


void func_005A7BC4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007946E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjTornade";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\275\202\302\202\334\202\253";
    data_0070FAA8 = 0xFFFFFFFFu;
    data_0070FAAC = 0xFFFFFFFFu;
    data_0070FAB0 = 0x00000000u;
    data_0070FAB4 = 0x00000000u;
    data_007946E8 = 0x00000000u;
    data_007946EC = 0x00000005u;
    data_007946F0 = (uintptr_t)&data_007946F4;
    func_0019B51C((uintptr_t)&data_00794708, (uintptr_t)&func_00602FD0, 0x00000031u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007946E8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
