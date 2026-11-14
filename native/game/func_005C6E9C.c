/* USA 005C6E9C (EU 005C6E74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F988;
extern uint32_t data_0070F98C;
extern uint32_t data_0070F990;
extern uint32_t data_0070F994;
extern uint32_t data_00790CA4;
extern uint32_t data_00790CA8;
extern uint32_t data_00790CAC;
extern uint32_t data_00790CB0;
extern uint32_t data_00790CC4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006064D0(void);


void func_005C6E9C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00790CA4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjRupeeSilver";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202P\202O\202O\203\213\203s\201[";
    data_0070F988 = 0xFFFFFFFFu;
    data_0070F98C = 0xFFFFFFFFu;
    data_0070F990 = 0x00000000u;
    data_0070F994 = 0x00000000u;
    data_00790CA4 = 0x00000000u;
    data_00790CA8 = 0x00000005u;
    data_00790CAC = (uintptr_t)&data_00790CB0;
    func_0019B51C((uintptr_t)&data_00790CC4, (uintptr_t)&func_006064D0, 0x0000006Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00790CA4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
