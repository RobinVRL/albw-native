/* USA 005E2D6C (EU 005E2D44): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F7F8;
extern uint32_t data_0070F7FC;
extern uint32_t data_0070F800;
extern uint32_t data_0070F804;
extern uint32_t data_0078C74C;
extern uint32_t data_0078C750;
extern uint32_t data_0078C754;
extern uint32_t data_0078C758;
extern uint32_t data_0078C76C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607F04(void);


void func_005E2D6C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078C74C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumThunder";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\201\203f\203B\203E\203\200\202\314\227\213\226\202\226@";
    data_0070F7F8 = 0xFFFFFFFFu;
    data_0070F7FC = 0xFFFFFFFFu;
    data_0070F800 = 0x00000000u;
    data_0070F804 = 0x00000000u;
    data_0078C74C = 0x00000000u;
    data_0078C750 = 0x00000005u;
    data_0078C754 = (uintptr_t)&data_0078C758;
    func_0019B51C((uintptr_t)&data_0078C76C, (uintptr_t)&func_00607F04, 0x00000064u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078C74C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
