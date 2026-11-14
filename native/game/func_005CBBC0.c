/* USA 005CBBC0 (EU 005CBB98): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708850;
extern uint32_t data_00708854;
extern uint32_t data_00708858;
extern uint32_t data_0070885C;
extern uint32_t data_0072E984;
extern uint32_t data_0072E988;
extern uint32_t data_0072E98C;
extern uint32_t data_0072E990;
extern uint32_t data_0072E9A4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060673C(void);


void func_005CBBC0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072E984;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaFixedCamera";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\305\222\350\203J\203\201\203\211\203G\203\212\203A";
    data_00708850 = 0xFFFFFFFFu;
    data_00708854 = 0xFFFFFFFFu;
    data_00708858 = 0x00000000u;
    data_0070885C = 0x00000000u;
    data_0072E984 = 0x00000000u;
    data_0072E988 = 0x00000005u;
    data_0072E98C = (uintptr_t)&data_0072E990;
    func_0019B51C((uintptr_t)&data_0072E9A4, (uintptr_t)&func_0060673C, 0x0000017Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072E984, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
