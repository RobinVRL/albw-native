/* USA 005AEE50 (EU 005AEE28): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007088E0;
extern uint32_t data_007088E4;
extern uint32_t data_007088E8;
extern uint32_t data_007088EC;
extern uint32_t data_00730428;
extern uint32_t data_0073042C;
extern uint32_t data_00730430;
extern uint32_t data_00730434;
extern uint32_t data_00730448;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060389C(void);


void func_005AEE50(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00730428;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaWarpTile";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\217\201[\203v\217\260";
    data_007088E0 = 0xFFFFFFFFu;
    data_007088E4 = 0xFFFFFFFFu;
    data_007088E8 = 0x00000000u;
    data_007088EC = 0x00000000u;
    data_00730428 = 0x00000000u;
    data_0073042C = 0x00000005u;
    data_00730430 = (uintptr_t)&data_00730434;
    func_0019B51C((uintptr_t)&data_00730448, (uintptr_t)&func_0060389C, 0x00000174u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00730428, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
