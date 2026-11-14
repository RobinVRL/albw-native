/* USA 005C6A04 (EU 005C69DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F568;
extern uint32_t data_0070F56C;
extern uint32_t data_0070F570;
extern uint32_t data_0070F574;
extern uint32_t data_007884EC;
extern uint32_t data_007884F0;
extern uint32_t data_007884F4;
extern uint32_t data_007884F8;
extern uint32_t data_0078850C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606428(void);


void func_005C6A04(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007884EC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjIceFloating";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\202\202\242\202\275\225X";
    data_0070F568 = 0xFFFFFFFFu;
    data_0070F56C = 0xFFFFFFFFu;
    data_0070F570 = 0x00000000u;
    data_0070F574 = 0x00000000u;
    data_007884EC = 0x00000000u;
    data_007884F0 = 0x00000005u;
    data_007884F4 = (uintptr_t)&data_007884F8;
    func_0019B51C((uintptr_t)&data_0078850C, (uintptr_t)&func_00606428, 0x0000001Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007884EC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
