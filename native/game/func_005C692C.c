/* USA 005C692C (EU 005C6904): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F400;
extern uint32_t data_0070F404;
extern uint32_t data_0070F408;
extern uint32_t data_0070F40C;
extern uint32_t data_007849C0;
extern uint32_t data_007849C4;
extern uint32_t data_007849C8;
extern uint32_t data_007849CC;
extern uint32_t data_007849E0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006063CC(void);


void func_005C692C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007849C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjDemonYellow";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\202\225\250\202\314\212\314\201i\211\251\201j";
    data_0070F400 = 0xFFFFFFFFu;
    data_0070F404 = 0xFFFFFFFFu;
    data_0070F408 = 0x00000000u;
    data_0070F40C = 0x00000000u;
    data_007849C0 = 0x00000000u;
    data_007849C4 = 0x00000005u;
    data_007849C8 = (uintptr_t)&data_007849CC;
    func_0019B51C((uintptr_t)&data_007849E0, (uintptr_t)&func_006063CC, 0x00000082u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007849C0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
