/* USA 005F06A4 (EU 005F067C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708890;
extern uint32_t data_00708894;
extern uint32_t data_00708898;
extern uint32_t data_0070889C;
extern uint32_t data_0072F0C8;
extern uint32_t data_0072F0CC;
extern uint32_t data_0072F0D0;
extern uint32_t data_0072F0D4;
extern uint32_t data_0072F0E8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006094D0(void);


void func_005F06A4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072F0C8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaPlayerStateCheck";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203v\203\214\203C\203\204\217\363\221\324\212\304\216\213\203G\203\212\203A";
    data_00708890 = 0xFFFFFFFFu;
    data_00708894 = 0xFFFFFFFFu;
    data_00708898 = 0x00000000u;
    data_0070889C = 0x00000000u;
    data_0072F0C8 = 0x00000000u;
    data_0072F0CC = 0x00000005u;
    data_0072F0D0 = (uintptr_t)&data_0072F0D4;
    func_0019B51C((uintptr_t)&data_0072F0E8, (uintptr_t)&func_006094D0, 0x00000179u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072F0C8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
