/* USA 005BED2C (EU 005BED04): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C2B0;
extern uint32_t data_0070C2B4;
extern uint32_t data_0070C2B8;
extern uint32_t data_0070C2BC;
extern uint32_t data_0075EDA4;
extern uint32_t data_0075EDA8;
extern uint32_t data_0075EDAC;
extern uint32_t data_0075EDB0;
extern uint32_t data_0075EDC4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604F80(void);


void func_005BED2C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075EDA4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSwitchStep";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\323\202\335\203X\203C\203b\203`";
    data_0070C2B0 = 0xFFFFFFFFu;
    data_0070C2B4 = 0xFFFFFFFFu;
    data_0070C2B8 = 0x00000000u;
    data_0070C2BC = 0x00000000u;
    data_0075EDA4 = 0x00000000u;
    data_0075EDA8 = 0x00000005u;
    data_0075EDAC = (uintptr_t)&data_0075EDB0;
    func_0019B51C((uintptr_t)&data_0075EDC4, (uintptr_t)&func_00604F80, 0x000000E5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075EDA4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
