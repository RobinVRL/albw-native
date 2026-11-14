/* USA 005A6B28 (EU 005A6B00): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F3A8;
extern uint32_t data_0070F3AC;
extern uint32_t data_0070F3B0;
extern uint32_t data_0070F3B4;
extern uint32_t data_00783FEC;
extern uint32_t data_00783FF0;
extern uint32_t data_00783FF4;
extern uint32_t data_00783FF8;
extern uint32_t data_0078400C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602E70(void);


void func_005A6B28(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00783FEC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjCrystal";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203N\203\212\203X\203^\203\213";
    data_0070F3A8 = 0xFFFFFFFFu;
    data_0070F3AC = 0xFFFFFFFFu;
    data_0070F3B0 = 0x00000000u;
    data_0070F3B4 = 0x00000000u;
    data_00783FEC = 0x00000000u;
    data_00783FF0 = 0x00000005u;
    data_00783FF4 = (uintptr_t)&data_00783FF8;
    func_0019B51C((uintptr_t)&data_0078400C, (uintptr_t)&func_00602E70, 0x0000004Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00783FEC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
