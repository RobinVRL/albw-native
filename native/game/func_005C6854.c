/* USA 005C6854 (EU 005C682C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F3F0;
extern uint32_t data_0070F3F4;
extern uint32_t data_0070F3F8;
extern uint32_t data_0070F3FC;
extern uint32_t data_00784758;
extern uint32_t data_0078475C;
extern uint32_t data_00784760;
extern uint32_t data_00784764;
extern uint32_t data_00784778;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606370(void);


void func_005C6854(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00784758;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjDemonPurple";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\202\225\250\202\314\212\314\201i\216\207\201j";
    data_0070F3F0 = 0xFFFFFFFFu;
    data_0070F3F4 = 0xFFFFFFFFu;
    data_0070F3F8 = 0x00000000u;
    data_0070F3FC = 0x00000000u;
    data_00784758 = 0x00000000u;
    data_0078475C = 0x00000005u;
    data_00784760 = (uintptr_t)&data_00784764;
    func_0019B51C((uintptr_t)&data_00784778, (uintptr_t)&func_00606370, 0x00000081u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00784758, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
