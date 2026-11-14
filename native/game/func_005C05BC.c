/* USA 005C05BC (EU 005C0594): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F510;
extern uint32_t data_0070F514;
extern uint32_t data_0070F518;
extern uint32_t data_0070F51C;
extern uint32_t data_007876AC;
extern uint32_t data_007876B0;
extern uint32_t data_007876B4;
extern uint32_t data_007876B8;
extern uint32_t data_007876CC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605488(void);


void func_005C05BC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007876AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjGtEvSwordA";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226Y\202\352\225\250\202\314\214\225";
    data_0070F510 = 0xFFFFFFFFu;
    data_0070F514 = 0xFFFFFFFFu;
    data_0070F518 = 0x00000000u;
    data_0070F51C = 0x00000000u;
    data_007876AC = 0x00000000u;
    data_007876B0 = 0x00000005u;
    data_007876B4 = (uintptr_t)&data_007876B8;
    func_0019B51C((uintptr_t)&data_007876CC, (uintptr_t)&func_00605488, 0x0000008Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007876AC, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
