/* USA 0059B44C (EU 0059B424): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C8B0;
extern uint32_t data_0070C8B4;
extern uint32_t data_0070C8B8;
extern uint32_t data_0070C8BC;
extern uint32_t data_00766F78;
extern uint32_t data_00766F7C;
extern uint32_t data_00766F80;
extern uint32_t data_00766F84;
extern uint32_t data_00766F98;
extern uint32_t data_007671E0;
extern uint32_t data_007671E4;
extern uint32_t data_007671E8;
extern uint32_t data_007671EC;
extern uint32_t data_00767200;
extern uint32_t data_00767448;
extern uint32_t data_0076744C;
extern uint32_t data_00767450;
extern uint32_t data_00767454;
extern uint32_t data_00767468;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603AC4(void);
void func_00604B0C(void);
void func_00605940(void);


void func_0059B44C(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00766F78;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapFloatRoom";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\302\223\256\222n\214`\201i\203\213\201[\203\200\201j";
    data_0070C8B0 = 0xFFFFFFFFu;
    data_0070C8B4 = 0xFFFFFFFFu;
    data_0070C8B8 = 0x00000000u;
    data_0070C8BC = 0x00000000u;
    data_00766F78 = 0x00000000u;
    data_00766F7C = 0x00000005u;
    data_00766F80 = (uintptr_t)&data_00766F84;
    func_0019B51C((uintptr_t)&data_00766F98, (uintptr_t)&func_00603AC4, 0x00000000u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00766F78, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007671E0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MapFloatFloor";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\211\302\223\256\222n\214`\201i\203t\203\215\203A\201j";
    data_007671E0 = 0x00000000u;
    data_007671E4 = 0x00000005u;
    data_007671E8 = (uintptr_t)&data_007671EC;
    func_0019B51C((uintptr_t)&data_00767200, (uintptr_t)&func_00604B0C, 0x00000001u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007671E0, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00767448;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MapFloatAlways";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\211\302\223\256\222n\214`\201i\217\355\222\223\201j";
    data_00767448 = 0x00000000u;
    data_0076744C = 0x00000005u;
    data_00767450 = (uintptr_t)&data_00767454;
    func_0019B51C((uintptr_t)&data_00767468, (uintptr_t)&func_00605940, 0x00000002u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00767448, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
