/* USA 005EC8F4 (EU 005EC8CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007125D8;
extern uint32_t data_007125DC;
extern uint32_t data_007125E0;
extern uint32_t data_007125E4;
extern uint32_t data_0079682C;
extern uint32_t data_00796830;
extern uint32_t data_00796834;
extern uint32_t data_00796838;
extern uint32_t data_0079684C;
extern uint32_t data_00796A94;
extern uint32_t data_00796A98;
extern uint32_t data_00796A9C;
extern uint32_t data_00796AA0;
extern uint32_t data_00796AB4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608FAC(void);
void func_0060A368(void);


void func_005EC8F4(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079682C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagActivateChecker";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\213N\223\256\203`\203F\203b\203J";
    data_007125D8 = 0xFFFFFFFFu;
    data_007125DC = 0xFFFFFFFFu;
    data_007125E0 = 0x00000000u;
    data_007125E4 = 0x00000000u;
    data_0079682C = 0x00000000u;
    data_00796830 = 0x00000005u;
    data_00796834 = (uintptr_t)&data_00796838;
    func_0019B51C((uintptr_t)&data_0079684C, (uintptr_t)&func_00608FAC, 0x00000274u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079682C, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00796A94;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"TagActivateOnEventChecker";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\213N\223\256\203`\203F\203b\203J(\203C\203x\203\223\203g)";
    data_00796A94 = 0x00000000u;
    data_00796A98 = 0x00000005u;
    data_00796A9C = (uintptr_t)&data_00796AA0;
    func_0019B51C((uintptr_t)&data_00796AB4, (uintptr_t)&func_0060A368, 0x00000275u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00796A94, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
