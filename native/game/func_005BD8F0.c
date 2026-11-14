/* USA 005BD8F0 (EU 005BD8C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C8F8;
extern uint32_t data_0070C8FC;
extern uint32_t data_0070C900;
extern uint32_t data_0070C904;
extern uint32_t data_00767918;
extern uint32_t data_0076791C;
extern uint32_t data_00767920;
extern uint32_t data_00767924;
extern uint32_t data_00767938;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604B80(void);


void func_005BD8F0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00767918;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapPartsFixed";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\305\222\350\203}\203b\203v\203p\201[\203c";
    data_0070C8F8 = 0xFFFFFFFFu;
    data_0070C8FC = 0xFFFFFFFFu;
    data_0070C900 = 0x00000000u;
    data_0070C904 = 0x00000000u;
    data_00767918 = 0x00000000u;
    data_0076791C = 0x00000005u;
    data_00767920 = (uintptr_t)&data_00767924;
    func_0019B51C((uintptr_t)&data_00767938, (uintptr_t)&func_00604B80, 0x00000165u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00767918, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
