/* USA 005A30FC (EU 005A30D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F5F8;
extern uint32_t data_0070F5FC;
extern uint32_t data_0070F600;
extern uint32_t data_0070F604;
extern uint32_t data_00788D24;
extern uint32_t data_00788D28;
extern uint32_t data_00788D2C;
extern uint32_t data_00788D30;
extern uint32_t data_00788D44;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B51C(void);


void func_005A30FC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00788D24;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjIcicle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\302\202\347\202\347";
    data_0070F5F8 = 0xFFFFFFFFu;
    data_0070F5FC = 0xFFFFFFFFu;
    data_0070F600 = 0x00000000u;
    data_0070F604 = 0x00000000u;
    data_00788D24 = 0x00000000u;
    data_00788D28 = 0x00000005u;
    data_00788D2C = (uintptr_t)&data_00788D30;
    func_0019B51C((uintptr_t)&data_00788D44, (uintptr_t)&func_0060B51C, 0x0000001Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00788D24, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
