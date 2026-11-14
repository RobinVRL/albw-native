/* USA 005EA2B8 (EU 005EA290): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 14 other stores, 4 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F410;
extern uint32_t data_0070F414;
extern uint32_t data_0070F418;
extern uint32_t data_0070F41C;
extern uint32_t data_0070F420;
extern uint32_t data_0070F424;
extern uint32_t data_0070F428;
extern uint32_t data_0070F42C;
extern uint32_t data_00784C28;
extern uint32_t data_00784C2C;
extern uint32_t data_00784C30;
extern uint32_t data_00784C34;
extern uint32_t data_00784C48;
extern uint32_t data_00784E90;
extern uint32_t data_00784E94;
extern uint32_t data_00784E98;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006088EC(void);


void func_005EA2B8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F420 = 0xFFFFFFFFu;
    data_0070F424 = 0xFFFFFFFFu;
    data_0070F428 = 0x00000000u;
    data_0070F42C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4F600000u, 0xFFFFFFFFu);
    data_0070F410 = ret0;
    uintptr_t ret1 = func_00114608(0x4F533334u, 0x00000000u);
    data_0070F414 = ret1;
    uintptr_t ret2 = func_00114608(0x4EF1C71Du, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00784C28;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjDropRentalItem";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\227\216\202\306\202\265\202\275\203\214\203\223\203^\203\213\203A\203C\203e\203\200";
    data_0070F418 = ret2;
    data_0070F41C = ret0;
    data_00784C28 = 0x00000000u;
    data_00784C2C = 0x00000005u;
    data_00784C30 = (uintptr_t)&data_00784C34;
    data_00784E90 = 0xBC23D70Au /* -0.009999999776482582 f */;
    data_00784E94 = 0xBD75C28Fu /* -0.05999999865889549 f */;
    data_00784E98 = 0xBDB851ECu /* -0.09000000357627869 f */;
    func_0019B51C((uintptr_t)&data_00784C48, (uintptr_t)&func_006088EC, 0x00000054u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00784C28, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
