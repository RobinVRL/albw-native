/* USA 005C6AD8 (EU 005C6AB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F700;
extern uint32_t data_0070F704;
extern uint32_t data_0070F708;
extern uint32_t data_0070F70C;
extern uint32_t data_0078ADF4;
extern uint32_t data_0078ADF8;
extern uint32_t data_0078ADFC;
extern uint32_t data_0078AE00;
extern uint32_t data_0078AE14;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606450(void);


void func_005C6AD8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078ADF4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMagicBottle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\202\226@\225r";
    data_0070F700 = 0xFFFFFFFFu;
    data_0070F704 = 0xFFFFFFFFu;
    data_0070F708 = 0x00000000u;
    data_0070F70C = 0x00000000u;
    data_0078ADF4 = 0x00000000u;
    data_0078ADF8 = 0x00000005u;
    data_0078ADFC = (uintptr_t)&data_0078AE00;
    func_0019B51C((uintptr_t)&data_0078AE14, (uintptr_t)&func_00606450, 0x00000040u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078ADF4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
