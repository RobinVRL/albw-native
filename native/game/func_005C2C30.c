/* USA 005C2C30 (EU 005C2C08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007087B8;
extern uint32_t data_007087BC;
extern uint32_t data_007087C0;
extern uint32_t data_007087C4;
extern uint32_t data_0072B3E8;
extern uint32_t data_0072B3EC;
extern uint32_t data_0072B3F0;
extern uint32_t data_0072B3F4;
extern uint32_t data_0072B408;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605758(void);


void func_005C2C30(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072B3E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaChangeClip";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203N\203\212\203b\203v\220\330\202\350\221\326\202\246\203G\203\212\203A";
    data_007087B8 = 0xFFFFFFFFu;
    data_007087BC = 0xFFFFFFFFu;
    data_007087C0 = 0x00000000u;
    data_007087C4 = 0x00000000u;
    data_0072B3E8 = 0x00000000u;
    data_0072B3EC = 0x00000005u;
    data_0072B3F0 = (uintptr_t)&data_0072B3F4;
    func_0019B51C((uintptr_t)&data_0072B408, (uintptr_t)&func_00605758, 0x00000168u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072B3E8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
