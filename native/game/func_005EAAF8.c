/* USA 005EAAF8 (EU 005EAAD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007125F8;
extern uint32_t data_007125FC;
extern uint32_t data_00712600;
extern uint32_t data_00712604;
extern uint32_t data_00796F64;
extern uint32_t data_00796F68;
extern uint32_t data_00796F6C;
extern uint32_t data_00796F70;
extern uint32_t data_00796F84;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006089C8(void);


void func_005EAAF8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00796F64;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraAdjuster";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203J\203\201\203\211\203A\203W\203\203\203X\203^";
    data_007125F8 = 0xFFFFFFFFu;
    data_007125FC = 0xFFFFFFFFu;
    data_00712600 = 0x00000000u;
    data_00712604 = 0x00000000u;
    data_00796F64 = 0x00000000u;
    data_00796F68 = 0x00000005u;
    data_00796F6C = (uintptr_t)&data_00796F70;
    func_0019B51C((uintptr_t)&data_00796F84, (uintptr_t)&func_006089C8, 0x00000097u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00796F64, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
