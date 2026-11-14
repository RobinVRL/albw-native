/* USA 005BD9CC (EU 005BD9A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C928;
extern uint32_t data_0070C92C;
extern uint32_t data_0070C930;
extern uint32_t data_0070C934;
extern uint32_t data_00767DE8;
extern uint32_t data_00767DEC;
extern uint32_t data_00767DF0;
extern uint32_t data_00767DF4;
extern uint32_t data_00767E08;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604BE0(void);


void func_005BD9CC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00767DE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapSagesPlace";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\253\216\322\202\314\212\324[\222n\214`]";
    data_0070C928 = 0xFFFFFFFFu;
    data_0070C92C = 0xFFFFFFFFu;
    data_0070C930 = 0x00000000u;
    data_0070C934 = 0x00000000u;
    data_00767DE8 = 0x00000000u;
    data_00767DEC = 0x00000005u;
    data_00767DF0 = (uintptr_t)&data_00767DF4;
    func_0019B51C((uintptr_t)&data_00767E08, (uintptr_t)&func_00604BE0, 0x0000015Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00767DE8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
