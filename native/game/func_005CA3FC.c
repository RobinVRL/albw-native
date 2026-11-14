/* USA 005CA3FC (EU 005CA3D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712638;
extern uint32_t data_0071263C;
extern uint32_t data_00712640;
extern uint32_t data_00712644;
extern uint32_t data_00797904;
extern uint32_t data_00797908;
extern uint32_t data_0079790C;
extern uint32_t data_00797910;
extern uint32_t data_00797924;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606564(void);


void func_005CA3FC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00797904;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraTrail";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\214\201[\203\213\222\307\217]\203J\203\201\203\211\203^\203O";
    data_00712638 = 0xFFFFFFFFu;
    data_0071263C = 0xFFFFFFFFu;
    data_00712640 = 0x00000000u;
    data_00712644 = 0x00000000u;
    data_00797904 = 0x00000000u;
    data_00797908 = 0x00000005u;
    data_0079790C = (uintptr_t)&data_00797910;
    func_0019B51C((uintptr_t)&data_00797924, (uintptr_t)&func_00606564, 0x00000098u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00797904, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
