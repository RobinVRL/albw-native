/* USA 005CE474 (EU 005CE44C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C108;
extern uint32_t data_0070C10C;
extern uint32_t data_0070C110;
extern uint32_t data_0070C114;
extern uint32_t data_0075A678;
extern uint32_t data_0075A67C;
extern uint32_t data_0075A680;
extern uint32_t data_0075A684;
extern uint32_t data_0075A698;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606B98(void);


void func_005CE474(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075A678;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojNeedleRoller";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203g\203Q\236\236\226_";
    data_0070C108 = 0xFFFFFFFFu;
    data_0070C10C = 0xFFFFFFFFu;
    data_0070C110 = 0x00000000u;
    data_0070C114 = 0x00000000u;
    data_0075A678 = 0x00000000u;
    data_0075A67C = 0x00000005u;
    data_0075A680 = (uintptr_t)&data_0075A684;
    func_0019B51C((uintptr_t)&data_0075A698, (uintptr_t)&func_00606B98, 0x000000EEu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0075A678, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
