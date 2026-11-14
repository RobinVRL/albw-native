/* USA 005EEFE8 (EU 005EEFC0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712740;
extern uint32_t data_00712744;
extern uint32_t data_00712748;
extern uint32_t data_0071274C;
extern uint32_t data_0079A258;
extern uint32_t data_0079A25C;
extern uint32_t data_0079A260;
extern uint32_t data_0079A264;
extern uint32_t data_0079A278;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006093F8(void);


void func_005EEFE8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079A258;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagOverwriteRestart";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\212\203X\203^\201[\203g\217\343\217\221\202\253";
    data_00712740 = 0xFFFFFFFFu;
    data_00712744 = 0xFFFFFFFFu;
    data_00712748 = 0x00000000u;
    data_0071274C = 0x00000000u;
    data_0079A258 = 0x00000000u;
    data_0079A25C = 0x00000005u;
    data_0079A260 = (uintptr_t)&data_0079A264;
    func_0019B51C((uintptr_t)&data_0079A278, (uintptr_t)&func_006093F8, 0x0000009Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079A258, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
