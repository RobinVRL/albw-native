/* USA 005C4A5C (EU 005C4A34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C188;
extern uint32_t data_0070C18C;
extern uint32_t data_0070C190;
extern uint32_t data_0070C194;
extern uint32_t data_0075CABC;
extern uint32_t data_0075CAC0;
extern uint32_t data_0075CAC4;
extern uint32_t data_0075CAC8;
extern uint32_t data_0075CADC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605C40(void);


void func_005C4A5C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075CABC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojRentalHouse";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\212\203\223\203N\202\314\211\306";
    data_0070C188 = 0xFFFFFFFFu;
    data_0070C18C = 0xFFFFFFFFu;
    data_0070C190 = 0x00000000u;
    data_0070C194 = 0x00000000u;
    data_0075CABC = 0x00000000u;
    data_0075CAC0 = 0x00000005u;
    data_0075CAC4 = (uintptr_t)&data_0075CAC8;
    func_0019B51C((uintptr_t)&data_0075CADC, (uintptr_t)&func_00605C40, 0x00000120u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075CABC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
