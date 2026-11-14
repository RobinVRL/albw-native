/* USA 005AE758 (EU 005AE730): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB50;
extern uint32_t data_0070FB54;
extern uint32_t data_0070FB58;
extern uint32_t data_0070FB5C;
extern uint32_t data_00795DD4;
extern uint32_t data_00795DD8;
extern uint32_t data_00795DDC;
extern uint32_t data_00795DE0;
extern uint32_t data_00795DF4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603844(void);


void func_005AE758(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00795DD4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjZoraFire";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203]\201[\203\211\202\314\211\316";
    data_0070FB50 = 0xFFFFFFFFu;
    data_0070FB54 = 0xFFFFFFFFu;
    data_0070FB58 = 0x00000000u;
    data_0070FB5C = 0x00000000u;
    data_00795DD4 = 0x00000000u;
    data_00795DD8 = 0x00000005u;
    data_00795DDC = (uintptr_t)&data_00795DE0;
    func_0019B51C((uintptr_t)&data_00795DF4, (uintptr_t)&func_00603844, 0x00000067u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00795DD4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
