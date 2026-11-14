/* USA 005E36E4 (EU 005E36BC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 11 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712760;
extern uint32_t data_00712764;
extern uint32_t data_00712768;
extern uint32_t data_0071276C;
extern uint32_t data_00712770;
extern uint32_t data_00712774;
extern uint32_t data_00712778;
extern uint32_t data_0071277C;
extern uint32_t data_0079A728;
extern uint32_t data_0079A72C;
extern uint32_t data_0079A730;
extern uint32_t data_0079A734;
extern uint32_t data_0079A748;
extern uint32_t data_0079A990;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608020(void);

static const char *const names_0079A990[5] = {
    "  1 \203\213\203s\201[",
    "  5 \203\213\203s\201[",
    " 20 \203\213\203s\201[",
    " 50 \203\213\203s\201[",
    "100 \203\213\203s\201[",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E36E4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_00712770 = 0xFFFFFFFFu;
    data_00712774 = 0xFFFFFFFFu;
    data_00712778 = 0x00000000u;
    data_0071277C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E2AAAABu, 0x00000000u);
    data_00712760 = ret0;
    uintptr_t ret1 = func_00114608(0x4E638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0079A728;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\213\203s\201[\227N\202\253\217o\202\265\220\362";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"TagRupeeFountain";
    fill_names((sead_SafeString *)&data_0079A990, names_0079A990, 5);
    data_00712764 = ret1;
    data_00712768 = ret0;
    data_0071276C = ret1;
    data_0079A728 = 0x00000000u;
    data_0079A72C = 0x00000005u;
    data_0079A730 = (uintptr_t)&data_0079A734;
    func_0019B51C((uintptr_t)&data_0079A748, (uintptr_t)&func_00608020, 0x00000277u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0079A728, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
