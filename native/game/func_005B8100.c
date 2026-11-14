/* USA 005B8100 (EU 005B80D8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F4F0;
extern uint32_t data_0070F4F4;
extern uint32_t data_0070F4F8;
extern uint32_t data_0070F4FC;
extern uint32_t data_00786F74;
extern uint32_t data_00786F78;
extern uint32_t data_00786F7C;
extern uint32_t data_00786F80;
extern uint32_t data_00786F94;
extern uint32_t data_007871DC;
extern uint32_t data_007871E0;
extern uint32_t data_007871E4;
extern uint32_t data_007871E8;
extern uint32_t data_007871FC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604440(void);


void func_005B8100(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00786F74;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjGrassLift";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\221\220\201i\214\365\201E\216\235\202\277\217\343\202\260\227p\201j";
    data_0070F4F0 = 0xFFFFFFFFu;
    data_0070F4F4 = 0xFFFFFFFFu;
    data_0070F4F8 = 0x00000000u;
    data_0070F4FC = 0x00000000u;
    data_00786F74 = 0x00000000u;
    data_00786F78 = 0x00000005u;
    data_00786F7C = (uintptr_t)&data_00786F80;
    func_0019B51C((uintptr_t)&data_00786F94, (uintptr_t)&func_00604440, 0x00000039u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00786F74, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007871DC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjGrassLiftDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\221\220\201i\210\305\201E\216\235\202\277\217\343\202\260\227p\201j";
    data_007871DC = 0x00000000u;
    data_007871E0 = 0x00000005u;
    data_007871E4 = (uintptr_t)&data_007871E8;
    func_0019B51C((uintptr_t)&data_007871FC, (uintptr_t)&func_00604440, 0x0000003Au, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007871DC, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
