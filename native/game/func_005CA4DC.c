/* USA 005CA4DC (EU 005CA4B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712668;
extern uint32_t data_0071266C;
extern uint32_t data_00712670;
extern uint32_t data_00712674;
extern uint32_t data_0079803C;
extern uint32_t data_00798040;
extern uint32_t data_00798044;
extern uint32_t data_00798048;
extern uint32_t data_0079805C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060658C(void);


void func_005CA4DC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079803C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagCaveSparkle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223\264\214A\214\365\202\351\223\301\216\352\203^\203O";
    data_00712668 = 0xFFFFFFFFu;
    data_0071266C = 0xFFFFFFFFu;
    data_00712670 = 0x00000000u;
    data_00712674 = 0x00000000u;
    data_0079803C = 0x00000000u;
    data_00798040 = 0x00000005u;
    data_00798044 = (uintptr_t)&data_00798048;
    func_0019B51C((uintptr_t)&data_0079805C, (uintptr_t)&func_0060658C, 0x0000027Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0079803C, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
