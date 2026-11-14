/* USA 005F882C (EU 005F8804): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712698;
extern uint32_t data_0071269C;
extern uint32_t data_007126A0;
extern uint32_t data_007126A4;
extern uint32_t data_00798774;
extern uint32_t data_00798778;
extern uint32_t data_0079877C;
extern uint32_t data_00798780;
extern uint32_t data_00798794;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A144(void);


void func_005F882C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00798774;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"TagDoorOpenCloseChecker";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\224\340\212J\202\257\225\302\202\337\203`\203F\203b\203J";
    data_00712698 = 0xFFFFFFFFu;
    data_0071269C = 0xFFFFFFFFu;
    data_007126A0 = 0x00000000u;
    data_007126A4 = 0x00000000u;
    data_00798774 = 0x00000000u;
    data_00798778 = 0x00000005u;
    data_0079877C = (uintptr_t)&data_00798780;
    func_0019B51C((uintptr_t)&data_00798794, (uintptr_t)&func_0060A144, 0x000000A3u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00798774, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
