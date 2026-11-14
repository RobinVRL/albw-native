/* USA 005A34C8 (EU 005A34A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F808;
extern uint32_t data_0070F810;
extern uint32_t data_0070F814;
extern uint32_t data_0070F818;
extern uint32_t data_0070F81C;
extern uint32_t data_0078C9B4;
extern uint32_t data_0078C9B8;
extern uint32_t data_0078C9BC;
extern uint32_t data_0078C9C0;
extern uint32_t data_0078C9D4;
extern uint32_t data_0078CC1C;
extern uint32_t data_0078CC20;
extern uint32_t data_0078CC24;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B570(void);


void func_005A34C8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F810 = 0xFFFFFFFFu;
    data_0070F814 = 0xFFFFFFFFu;
    data_0070F818 = 0x00000000u;
    data_0070F81C = 0x00000000u;
    data_0078CC1C = 0x00000000u /* 0.0 f */;
    data_0078CC20 = 0x3FC00000u /* 1.5 f */;
    data_0078CC24 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4E555556u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078C9B4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMedusa";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"f[Tâ";
    data_0070F808 = ret0;
    data_0078C9B4 = 0x00000000u;
    data_0078C9B8 = 0x00000005u;
    data_0078C9BC = (uintptr_t)&data_0078C9C0;
    func_0019B51C((uintptr_t)&data_0078C9D4, (uintptr_t)&func_0060B570, 0x0000008Au, (uintptr_t)((char *)stk + 16));
}
