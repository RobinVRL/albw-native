/* USA 005EE340 (EU 005EE318): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D2B0;
extern uint32_t data_0070D2B4;
extern uint32_t data_0070D2B8;
extern uint32_t data_0070D2BC;
extern uint32_t data_007693D0;
extern uint32_t data_007693D4;
extern uint32_t data_007693D8;
extern uint32_t data_007693DC;
extern uint32_t data_007693F0;
extern uint32_t data_00769638;
extern uint32_t data_0076963C;
extern uint32_t data_00769640;
extern uint32_t data_00769644;
extern uint32_t data_00769658;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609F74(void);
void func_0060A088(void);


void func_005EE340(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007693D0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MassBlockColorWidthBlue";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\220\302\203u\203\215\203b\203N\201i\211\241\201j";
    data_0070D2B0 = 0xFFFFFFFFu;
    data_0070D2B4 = 0xFFFFFFFFu;
    data_0070D2B8 = 0x00000000u;
    data_0070D2BC = 0x00000000u;
    data_007693D0 = 0x00000000u;
    data_007693D4 = 0x00000005u;
    data_007693D8 = (uintptr_t)&data_007693DC;
    func_0019B51C((uintptr_t)&data_007693F0, (uintptr_t)&func_0060A088, 0x00000009u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007693D0, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00769638;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MassBlockColorWidthRed";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\220\324\203u\203\215\203b\203N\201i\211\241\201j";
    data_00769638 = 0x00000000u;
    data_0076963C = 0x00000005u;
    data_00769640 = (uintptr_t)&data_00769644;
    func_0019B51C((uintptr_t)&data_00769658, (uintptr_t)&func_00609F74, 0x00000008u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00769638, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
