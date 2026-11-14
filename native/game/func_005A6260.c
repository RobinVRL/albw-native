/* USA 005A6260 (EU 005A6238): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C050;
extern uint32_t data_0070C054;
extern uint32_t data_0070C058;
extern uint32_t data_0070C05C;
extern uint32_t data_00758888;
extern uint32_t data_0075888C;
extern uint32_t data_00758890;
extern uint32_t data_00758894;
extern uint32_t data_007588A8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602AA0(void);


void func_005A6260(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00758888;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojIceCube";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\203u\203\215\203b\203N\201i\221\345\201j";
    data_0070C050 = 0xFFFFFFFFu;
    data_0070C054 = 0xFFFFFFFFu;
    data_0070C058 = 0x00000000u;
    data_0070C05C = 0x00000000u;
    data_00758888 = 0x00000000u;
    data_0075888C = 0x00000005u;
    data_00758890 = (uintptr_t)&data_00758894;
    func_0019B51C((uintptr_t)&data_007588A8, (uintptr_t)&func_00602AA0, 0x0000011Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00758888, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
