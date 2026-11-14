/* USA 005EEE54 (EU 005EEE2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007126D8;
extern uint32_t data_007126DC;
extern uint32_t data_007126E0;
extern uint32_t data_007126E4;
extern uint32_t data_00799134;
extern uint32_t data_00799138;
extern uint32_t data_0079913C;
extern uint32_t data_00799140;
extern uint32_t data_00799154;
extern uint32_t data_0079939C;
extern uint32_t data_007993A0;
extern uint32_t data_007993A4;
extern uint32_t data_007993A8;
extern uint32_t data_007993BC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006093CC(void);
void func_0060A410(void);


void func_005EEE54(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00799134;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagHolocaustChecker";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\221S\226\305\203`\203F\203b\203J";
    data_007126D8 = 0xFFFFFFFFu;
    data_007126DC = 0xFFFFFFFFu;
    data_007126E0 = 0x00000000u;
    data_007126E4 = 0x00000000u;
    data_00799134 = 0x00000000u;
    data_00799138 = 0x00000005u;
    data_0079913C = (uintptr_t)&data_00799140;
    func_0019B51C((uintptr_t)&data_00799154, (uintptr_t)&func_006093CC, 0x00000272u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00799134, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079939C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"TagHolocaustOnEventChecker";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\221S\226\305\203`\203F\203b\203J(\203C\203x\203\223\203g)";
    data_0079939C = 0x00000000u;
    data_007993A0 = 0x00000005u;
    data_007993A4 = (uintptr_t)&data_007993A8;
    func_0019B51C((uintptr_t)&data_007993BC, (uintptr_t)&func_0060A410, 0x00000273u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0079939C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
