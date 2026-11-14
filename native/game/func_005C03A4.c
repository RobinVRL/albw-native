/* USA 005C03A4 (EU 005C037C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 4 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F378;
extern uint32_t data_0070F37C;
extern uint32_t data_0070F380;
extern uint32_t data_0070F388;
extern uint32_t data_0070F38C;
extern uint32_t data_0070F390;
extern uint32_t data_0070F394;
extern uint32_t data_007838A8;
extern uint32_t data_007838AC;
extern uint32_t data_007838B0;
extern uint32_t data_007838B4;
extern uint32_t data_007838C8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605408(void);


void func_005C03A4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F388 = 0xFFFFFFFFu;
    data_0070F38C = 0xFFFFFFFFu;
    data_0070F390 = 0x00000000u;
    data_0070F394 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E800000u, 0x00000000u);
    data_0070F378 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    data_0070F37C = ret1;
    uintptr_t ret2 = func_00114608(0x4DAAAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007838A8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjBowOfLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\365\202\314\213|\226\356";
    data_0070F380 = ret2;
    data_007838A8 = 0x00000000u;
    data_007838AC = 0x00000005u;
    data_007838B0 = (uintptr_t)&data_007838B4;
    func_0019B51C((uintptr_t)&data_007838C8, (uintptr_t)&func_00605408, 0x00000093u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007838A8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
