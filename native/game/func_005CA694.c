/* USA 005CA694 (EU 005CA66C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007127A8;
extern uint32_t data_007127AC;
extern uint32_t data_007127B0;
extern uint32_t data_007127B4;
extern uint32_t data_0079AC58;
extern uint32_t data_0079AC5C;
extern uint32_t data_0079AC60;
extern uint32_t data_0079AC64;
extern uint32_t data_0079AC78;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606600(void);


void func_005CA694(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079AC58;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagSoundPlayer";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203T\203E\203\223\203h\215\304\220\266\203^\203O";
    data_007127A8 = 0xFFFFFFFFu;
    data_007127AC = 0xFFFFFFFFu;
    data_007127B0 = 0x00000000u;
    data_007127B4 = 0x00000000u;
    data_0079AC58 = 0x00000000u;
    data_0079AC5C = 0x00000005u;
    data_0079AC60 = (uintptr_t)&data_0079AC64;
    func_0019B51C((uintptr_t)&data_0079AC78, (uintptr_t)&func_00606600, 0x00000279u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079AC58, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
