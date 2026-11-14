/* USA 0059D904 (EU 0059D8DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F300;
extern uint32_t data_0070F304;
extern uint32_t data_0070F308;
extern uint32_t data_0070F30C;
extern uint32_t data_00782320;
extern uint32_t data_00782324;
extern uint32_t data_00782328;
extern uint32_t data_0078232C;
extern uint32_t data_00782340;
extern uint32_t data_00782588;
extern uint32_t data_0078258C;
extern uint32_t data_00782590;
extern uint32_t data_00782594;
extern uint32_t data_00782598;
extern uint32_t data_0078259C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060ADA4(void);


void func_0059D904(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00782320;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjArrow";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\356";
    data_0070F300 = 0xFFFFFFFFu;
    data_0070F304 = 0xFFFFFFFFu;
    data_0070F308 = 0x00000000u;
    data_0070F30C = 0x00000000u;
    data_00782320 = 0x00000000u;
    data_00782324 = 0x00000005u;
    data_00782328 = (uintptr_t)&data_0078232C;
    data_00782588 = 0x3E19999Au /* 0.15000000596046448 f */;
    data_0078258C = 0x3E800000u /* 0.25 f */;
    data_00782590 = 0x3E99999Au /* 0.30000001192092896 f */;
    data_00782594 = 0x3E19999Au /* 0.15000000596046448 f */;
    data_00782598 = 0x3E800000u /* 0.25 f */;
    data_0078259C = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    func_0019B51C((uintptr_t)&data_00782340, (uintptr_t)&func_0060ADA4, 0x00000023u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00782320, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
