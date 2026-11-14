/* USA 005BF2A4 (EU 005BF27C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C398;
extern uint32_t data_0070C39C;
extern uint32_t data_0070C3A0;
extern uint32_t data_0070C3A4;
extern uint32_t data_00761BE4;
extern uint32_t data_00761BE8;
extern uint32_t data_00761BEC;
extern uint32_t data_00761BF0;
extern uint32_t data_00761C04;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605074(void);


void func_005BF2A4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00761BE4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTrialModel";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\250\216\216\202\265\203\202\203f\203\213";
    data_0070C398 = 0xFFFFFFFFu;
    data_0070C39C = 0xFFFFFFFFu;
    data_0070C3A0 = 0x00000000u;
    data_0070C3A4 = 0x00000000u;
    data_00761BE4 = 0x00000000u;
    data_00761BE8 = 0x00000005u;
    data_00761BEC = (uintptr_t)&data_00761BF0;
    func_0019B51C((uintptr_t)&data_00761C04, (uintptr_t)&func_00605074, 0x0000027Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00761BE4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
