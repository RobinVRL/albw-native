/* USA 005E732C (EU 005E7304): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C440;
extern uint32_t data_0070C444;
extern uint32_t data_0070C448;
extern uint32_t data_0070C44C;
extern uint32_t data_00766270;
extern uint32_t data_00766274;
extern uint32_t data_00766278;
extern uint32_t data_0076627C;
extern uint32_t data_00766290;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006086D8(void);


void func_005E732C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00766270;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojWindowSunlight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\365\215\267\202\267\221\213";
    data_0070C440 = 0xFFFFFFFFu;
    data_0070C444 = 0xFFFFFFFFu;
    data_0070C448 = 0x00000000u;
    data_0070C44C = 0x00000000u;
    data_00766270 = 0x00000000u;
    data_00766274 = 0x00000005u;
    data_00766278 = (uintptr_t)&data_0076627C;
    func_0019B51C((uintptr_t)&data_00766290, (uintptr_t)&func_006086D8, 0x00000125u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00766270, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
