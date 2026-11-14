/* USA 0059B37C (EU 0059B354): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C8A0;
extern uint32_t data_0070C8A4;
extern uint32_t data_0070C8A8;
extern uint32_t data_0070C8AC;
extern uint32_t data_00766D10;
extern uint32_t data_00766D14;
extern uint32_t data_00766D18;
extern uint32_t data_00766D1C;
extern uint32_t data_00766D30;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A774(void);


void func_0059B37C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00766D10;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapFixed";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\305\222\350\222n\214`";
    data_0070C8A0 = 0xFFFFFFFFu;
    data_0070C8A4 = 0xFFFFFFFFu;
    data_0070C8A8 = 0x00000000u;
    data_0070C8AC = 0x00000000u;
    data_00766D10 = 0x00000000u;
    data_00766D14 = 0x00000005u;
    data_00766D18 = (uintptr_t)&data_00766D1C;
    func_0019B51C((uintptr_t)&data_00766D30, (uintptr_t)&func_0060A774, 0x00000163u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00766D10, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
