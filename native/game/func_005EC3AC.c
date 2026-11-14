/* USA 005EC3AC (EU 005EC384): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F638;
extern uint32_t data_0070F640;
extern uint32_t data_0070F644;
extern uint32_t data_0070F648;
extern uint32_t data_0070F64C;
extern uint32_t data_00789484;
extern uint32_t data_00789488;
extern uint32_t data_0078948C;
extern uint32_t data_00789490;
extern uint32_t data_007894A4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608F54(void);


void func_005EC3AC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F640 = 0xFFFFFFFFu;
    data_0070F644 = 0xFFFFFFFFu;
    data_0070F648 = 0x00000000u;
    data_0070F64C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4DAAAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00789484;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjJewelRockBullet";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"WGbNÌeÛ";
    data_0070F638 = ret0;
    data_00789484 = 0x00000000u;
    data_00789488 = 0x00000005u;
    data_0078948C = (uintptr_t)&data_00789490;
    func_0019B51C((uintptr_t)&data_007894A4, (uintptr_t)&func_00608F54, 0x00000084u, (uintptr_t)((char *)stk + 16));
}
