/* USA 005F2198 (EU 005F2170): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 18 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712780;
extern uint32_t data_00712784;
extern uint32_t data_00712788;
extern uint32_t data_0071278C;
extern uint32_t data_00712790;
extern uint32_t data_00712798;
extern uint32_t data_0071279C;
extern uint32_t data_007127A0;
extern uint32_t data_007127A4;
extern uint32_t data_0079A9B8;
extern uint32_t data_0079A9BC;
extern uint32_t data_0079A9C0;
extern uint32_t data_0079A9C4;
extern uint32_t data_0079A9D8;
extern uint32_t data_0079AC20;
extern uint32_t data_0079AC40;
extern uint32_t data_0079AC44;
extern uint32_t data_0079AC48;
extern uint32_t data_0079AC4C;
extern uint32_t data_0079AC50;
extern uint32_t data_0079AC54;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DFE4(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609A10(void);

static const char *const names_0079AC20[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F2198(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0079AC20, names_0079AC20, 4);
    data_00712798 = 0xFFFFFFFFu;
    data_0071279C = 0xFFFFFFFFu;
    data_007127A0 = 0x00000000u;
    data_007127A4 = 0x00000000u;
    data_0079AC40 = 0x00000000u /* 0.0 f */;
    data_0079AC44 = 0x3F800000u /* 1.0 f */;
    data_0079AC48 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4AA3D70Au, (uintptr_t)&func_0011DFE4);
    data_00712780 = ret0;
    uintptr_t ret1 = func_00114608(0x4B23D70Au, 0x00000000u);
    data_00712784 = ret1;
    uintptr_t ret2 = func_00114608(0x4EDC3ECFu, 0x00000000u);
    data_00712788 = ret2;
    uintptr_t ret3 = func_00114608(0xCB360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079A9B8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"«ÒÌÔJ}l[W[^O";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"TagSageRoomCameraMgr";
    data_0071278C = ret3;
    data_00712790 = ret3;
    data_0079A9B8 = 0x00000000u;
    data_0079A9BC = 0x00000005u;
    data_0079A9C0 = (uintptr_t)&data_0079A9C4;
    data_0079AC4C = 0x00000000u /* 0.0 f */;
    data_0079AC50 = 0xC0400000u /* -3.0 f */;
    data_0079AC54 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_0079A9D8, (uintptr_t)&func_00609A10, 0x0000027Bu, (uintptr_t)((char *)stk + 24));
}
