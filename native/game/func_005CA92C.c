/* USA 005CA92C (EU 005CA904): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 19 other stores, 6 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712808;
extern uint32_t data_0071280C;
extern uint32_t data_00712810;
extern uint32_t data_00712814;
extern uint32_t data_00712818;
extern uint32_t data_0071282C;
extern uint32_t data_00712840;
extern uint32_t data_00712844;
extern uint32_t data_00712848;
extern uint32_t data_00712854;
extern uint32_t data_00712858;
extern uint32_t data_0071286C;
extern uint32_t data_00712880;
extern uint32_t data_00712884;
extern uint32_t data_00712888;
extern uint32_t data_00712894;
extern uint32_t data_0079B5F8;
extern uint32_t data_0079B5FC;
extern uint32_t data_0079B600;
extern uint32_t data_0079B604;
extern uint32_t data_0079B618;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0019B5EC(void);
void func_00606680(void);


void func_005CA92C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079B5F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagTowerCamera";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"J^O";
    data_00712808 = 0xFFFFFFFFu;
    data_0071280C = 0xFFFFFFFFu;
    data_00712810 = 0x00000000u;
    data_00712814 = 0x00000000u;
    data_0079B5F8 = 0x00000000u;
    data_0079B5FC = 0x00000005u;
    data_0079B600 = (uintptr_t)&data_0079B604;
    func_0019B51C((uintptr_t)&data_0079B618, (uintptr_t)&func_00606680, 0x00000182u, (uintptr_t)((char *)stk + 16));
    uintptr_t ret1 = func_00114608(0x4DAAAAABu, (uintptr_t)&func_0019B5EC);
    data_00712818 = ret1;
    uintptr_t ret2 = func_00114608(0x4B888889u, 0x00000000u);
    data_0071282C = ret2;
    uintptr_t ret3 = func_00114608(0x4E8E38E4u, 0x00000000u);
    data_00712840 = ret3;
    uintptr_t ret4 = func_00114608(0x00000000u, 0x00000000u);
    data_00712844 = ret4;
    data_00712848 = 0x00000000u;
    data_00712854 = 0x00000000u;
    data_00712858 = ret1;
    uintptr_t ret5 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0071286C = ret5;
    data_00712880 = ret3;
    data_00712884 = ret4;
    data_00712888 = 0x80000000u;
    data_00712894 = 0xA38E38E3u;
}
