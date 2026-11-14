/* USA 005B40DC (EU 005B40B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BED0;
extern uint32_t data_0070BED4;
extern uint32_t data_0070BED8;
extern uint32_t data_0070BEDC;
extern uint32_t data_00752E40;
extern uint32_t data_00752E44;
extern uint32_t data_00752E48;
extern uint32_t data_00752E4C;
extern uint32_t data_00752E60;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603D10(void);


void func_005B40DC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00752E40;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojCubeBreak";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\224j\211\363\203u\203\215\203b\203N";
    data_0070BED0 = 0xFFFFFFFFu;
    data_0070BED4 = 0xFFFFFFFFu;
    data_0070BED8 = 0x00000000u;
    data_0070BEDC = 0x00000000u;
    data_00752E40 = 0x00000000u;
    data_00752E44 = 0x00000005u;
    data_00752E48 = (uintptr_t)&data_00752E4C;
    func_0019B51C((uintptr_t)&data_00752E60, (uintptr_t)&func_00603D10, 0x000000D9u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00752E40, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
