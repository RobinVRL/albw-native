/* USA 005C4664 (EU 005C463C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D2A0;
extern uint32_t data_0070D2A4;
extern uint32_t data_0070D2A8;
extern uint32_t data_0070D2AC;
extern uint32_t data_00768F00;
extern uint32_t data_00768F04;
extern uint32_t data_00768F08;
extern uint32_t data_00768F0C;
extern uint32_t data_00768F20;
extern uint32_t data_00769168;
extern uint32_t data_0076916C;
extern uint32_t data_00769170;
extern uint32_t data_00769174;
extern uint32_t data_00769188;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006082A0(void);
void func_00608AF0(void);


void func_005C4664(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00768F00;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassBlockColorBlue";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\220\302\203u\203\215\203b\203N";
    data_0070D2A0 = 0xFFFFFFFFu;
    data_0070D2A4 = 0xFFFFFFFFu;
    data_0070D2A8 = 0x00000000u;
    data_0070D2AC = 0x00000000u;
    data_00768F00 = 0x00000000u;
    data_00768F04 = 0x00000005u;
    data_00768F08 = (uintptr_t)&data_00768F0C;
    func_0019B51C((uintptr_t)&data_00768F20, (uintptr_t)&func_00608AF0, 0x00000007u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00768F00, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00769168;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassBlockColorRed";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\220\324\203u\203\215\203b\203N";
    data_00769168 = 0x00000000u;
    data_0076916C = 0x00000005u;
    data_00769170 = (uintptr_t)&data_00769174;
    func_0019B51C((uintptr_t)&data_00769188, (uintptr_t)&func_006082A0, 0x00000006u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00769168, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
