/* USA 005AE684 (EU 005AE65C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB40;
extern uint32_t data_0070FB44;
extern uint32_t data_0070FB48;
extern uint32_t data_0070FB4C;
extern uint32_t data_00795B6C;
extern uint32_t data_00795B70;
extern uint32_t data_00795B74;
extern uint32_t data_00795B78;
extern uint32_t data_00795B8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603818(void);


void func_005AE684(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00795B6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjWirtBeam";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\217\201[\203g\202\314\203r\201[\203\200";
    data_0070FB40 = 0xFFFFFFFFu;
    data_0070FB44 = 0xFFFFFFFFu;
    data_0070FB48 = 0x00000000u;
    data_0070FB4C = 0x00000000u;
    data_00795B6C = 0x00000000u;
    data_00795B70 = 0x00000005u;
    data_00795B74 = (uintptr_t)&data_00795B78;
    func_0019B51C((uintptr_t)&data_00795B8C, (uintptr_t)&func_00603818, 0x00000062u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00795B6C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
