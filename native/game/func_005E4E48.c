/* USA 005E4E48 (EU 005E4E20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007087E0;
extern uint32_t data_007087E4;
extern uint32_t data_007087E8;
extern uint32_t data_007087EC;
extern uint32_t data_0072BB20;
extern uint32_t data_0072BB24;
extern uint32_t data_0072BB28;
extern uint32_t data_0072BB2C;
extern uint32_t data_0072BB40;
extern uint32_t data_0072BD88;
extern uint32_t data_0072BD8C;
extern uint32_t data_0072BD90;
extern uint32_t data_0072BD94;
extern uint32_t data_0072BDA8;
extern uint32_t data_0072BFF0;
extern uint32_t data_0072BFF4;
extern uint32_t data_0072BFF8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060804C(void);
void func_0060817C(void);


void func_005E4E48(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072BB20;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaDisableWallIn";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\307\202\311\223\374\202\352\202\310\202\242\203G\203\212\203A";
    data_007087E0 = 0xFFFFFFFFu;
    data_007087E4 = 0xFFFFFFFFu;
    data_007087E8 = 0x00000000u;
    data_007087EC = 0x00000000u;
    data_0072BB20 = 0x00000000u;
    data_0072BB24 = 0x00000005u;
    data_0072BB28 = (uintptr_t)&data_0072BB2C;
    func_0019B51C((uintptr_t)&data_0072BB40, (uintptr_t)&func_0060804C, 0x0000001Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072BB20, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072BD88;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"AreaNoCalcWallNrm";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\220\346\223\307\202\335\225\307\203J\203\201\203\211\214v\216Z\202\265\202\310\202\242\203G\203\212\203A";
    data_0072BD88 = 0x00000000u;
    data_0072BD8C = 0x00000005u;
    data_0072BD90 = (uintptr_t)&data_0072BD94;
    func_0019B51C((uintptr_t)&data_0072BDA8, (uintptr_t)&func_0060817C, 0x0000001Fu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0072BD88, (uintptr_t)((char *)stk + 40), 0x00000000u);
    data_0072BFF0 = 0x3F800000u /* 1.0 f */;
    data_0072BFF4 = 0x3F800000u /* 1.0 f */;
    data_0072BFF8 = 0x3F800000u /* 1.0 f */;
}
