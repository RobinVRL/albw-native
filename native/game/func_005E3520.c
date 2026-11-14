/* USA 005E3520 (EU 005E34F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712648;
extern uint32_t data_0071264C;
extern uint32_t data_00712650;
extern uint32_t data_00712654;
extern uint32_t data_00797B6C;
extern uint32_t data_00797B70;
extern uint32_t data_00797B74;
extern uint32_t data_00797B78;
extern uint32_t data_00797B8C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607F84(void);


void func_005E3520(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00797B6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCameraVsGanon";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203K\203m\203\223\220\355\220\352\227p\203J\203\201\203\211\203^\203O";
    data_00712648 = 0xFFFFFFFFu;
    data_0071264C = 0xFFFFFFFFu;
    data_00712650 = 0x00000000u;
    data_00712654 = 0x00000000u;
    data_00797B6C = 0x00000000u;
    data_00797B70 = 0x00000005u;
    data_00797B74 = (uintptr_t)&data_00797B78;
    func_0019B51C((uintptr_t)&data_00797B8C, (uintptr_t)&func_00607F84, 0x0000009Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00797B6C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
