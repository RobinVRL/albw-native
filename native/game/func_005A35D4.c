/* USA 005A35D4 (EU 005A35AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB30;
extern uint32_t data_0070FB34;
extern uint32_t data_0070FB38;
extern uint32_t data_0070FB3C;
extern uint32_t data_00795904;
extern uint32_t data_00795908;
extern uint32_t data_0079590C;
extern uint32_t data_00795910;
extern uint32_t data_00795924;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B598(void);


void func_005A35D4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00795904;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjWinder";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\217\203C\203\223\203_\201[";
    data_0070FB30 = 0xFFFFFFFFu;
    data_0070FB34 = 0xFFFFFFFFu;
    data_0070FB38 = 0x00000000u;
    data_0070FB3C = 0x00000000u;
    data_00795904 = 0x00000000u;
    data_00795908 = 0x00000005u;
    data_0079590C = (uintptr_t)&data_00795910;
    func_0019B51C((uintptr_t)&data_00795924, (uintptr_t)&func_0060B598, 0x00000061u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00795904, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
