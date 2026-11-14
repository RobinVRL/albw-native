/* USA 005CBA30 (EU 005CBA08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007087C8;
extern uint32_t data_007087D0;
extern uint32_t data_007087D4;
extern uint32_t data_007087D8;
extern uint32_t data_007087DC;
extern uint32_t data_0072B650;
extern uint32_t data_0072B654;
extern uint32_t data_0072B658;
extern uint32_t data_0072B65C;
extern uint32_t data_0072B670;
extern uint32_t data_0072B8B8;
extern uint32_t data_0072B8BC;
extern uint32_t data_0072B8C0;
extern uint32_t data_0072B8C4;
extern uint32_t data_0072B8D8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0019B5EC(void);
void func_006066D4(void);
void func_0060A600(void);


void func_005CBA30(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072B650;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaChangeScene";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203V\201[\203\223\220\330\202\350\221\326\202\246\203G\203\212\203A";
    data_007087D0 = 0xFFFFFFFFu;
    data_007087D4 = 0xFFFFFFFFu;
    data_007087D8 = 0x00000000u;
    data_007087DC = 0x00000000u;
    data_0072B650 = 0x00000000u;
    data_0072B654 = 0x00000005u;
    data_0072B658 = (uintptr_t)&data_0072B65C;
    func_0019B51C((uintptr_t)&data_0072B670, (uintptr_t)&func_006066D4, 0x00000167u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072B650, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072B8B8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"AreaLoad";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203\215\201[\203h\203G\203\212\203A";
    data_0072B8B8 = 0x00000000u;
    data_0072B8BC = 0x00000005u;
    data_0072B8C0 = (uintptr_t)&data_0072B8C4;
    func_0019B51C((uintptr_t)&data_0072B8D8, (uintptr_t)&func_0060A600, 0x00000166u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0072B8B8, (uintptr_t)((char *)stk + 40), 0x00000000u);
    uintptr_t ret2 = func_00114608(0x4D638E39u, (uintptr_t)&func_0019B5EC);
    data_007087C8 = ret2;
}
