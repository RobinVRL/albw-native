/* USA 005B8028 (EU 005B8000): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F3E0;
extern uint32_t data_0070F3E4;
extern uint32_t data_0070F3E8;
extern uint32_t data_0070F3EC;
extern uint32_t data_007844F0;
extern uint32_t data_007844F4;
extern uint32_t data_007844F8;
extern uint32_t data_007844FC;
extern uint32_t data_00784510;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006043E4(void);


void func_005B8028(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007844F0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjDemonBlue";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\202\225\250\202\314\212\314\201i\220\302\201j";
    data_0070F3E0 = 0xFFFFFFFFu;
    data_0070F3E4 = 0xFFFFFFFFu;
    data_0070F3E8 = 0x00000000u;
    data_0070F3EC = 0x00000000u;
    data_007844F0 = 0x00000000u;
    data_007844F4 = 0x00000005u;
    data_007844F8 = (uintptr_t)&data_007844FC;
    func_0019B51C((uintptr_t)&data_00784510, (uintptr_t)&func_006043E4, 0x00000083u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007844F0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
