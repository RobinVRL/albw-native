/* USA 005C4B30 (EU 005C4B08): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C270;
extern uint32_t data_0070C274;
extern uint32_t data_0070C278;
extern uint32_t data_0070C27C;
extern uint32_t data_0075E66C;
extern uint32_t data_0075E670;
extern uint32_t data_0075E674;
extern uint32_t data_0075E678;
extern uint32_t data_0075E68C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605C6C(void);


void func_005C4B30(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075E66C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojSwitchColor";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\220\324\220\302\203X\203C\203b\203`";
    data_0070C270 = 0xFFFFFFFFu;
    data_0070C274 = 0xFFFFFFFFu;
    data_0070C278 = 0x00000000u;
    data_0070C27C = 0x00000000u;
    data_0075E66C = 0x00000000u;
    data_0075E670 = 0x00000005u;
    data_0075E674 = (uintptr_t)&data_0075E678;
    func_0019B51C((uintptr_t)&data_0075E68C, (uintptr_t)&func_00605C6C, 0x000000DDu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075E66C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
