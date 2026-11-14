/* USA 005AB9A8 (EU 005AB980): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C250;
extern uint32_t data_0070C254;
extern uint32_t data_0070C258;
extern uint32_t data_0070C25C;
extern uint32_t data_0075E19C;
extern uint32_t data_0075E1A0;
extern uint32_t data_0075E1A4;
extern uint32_t data_0075E1A8;
extern uint32_t data_0075E1BC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060337C(void);


void func_005AB9A8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075E19C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSunlight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\221\213\202\251\202\347\202\314\214\365";
    data_0070C250 = 0xFFFFFFFFu;
    data_0070C254 = 0xFFFFFFFFu;
    data_0070C258 = 0x00000000u;
    data_0070C25C = 0x00000000u;
    data_0075E19C = 0x00000000u;
    data_0075E1A0 = 0x00000005u;
    data_0075E1A4 = (uintptr_t)&data_0075E1A8;
    func_0019B51C((uintptr_t)&data_0075E1BC, (uintptr_t)&func_0060337C, 0x00000126u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075E19C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
