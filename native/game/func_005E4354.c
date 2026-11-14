/* USA 005E4354 (EU 005E432C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713B90;
extern uint32_t data_00713B94;
extern uint32_t data_00713B98;
extern uint32_t data_00713B9C;
extern uint32_t data_00713BA0;
void func_005902C0(uintptr_t);

static const char *const names_00713BA0[1] = {
    "Cm_HomeBtnB",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4354(void) {
    fill_names((sead_SafeString *)&data_00713BA0, names_00713BA0, 1);
    data_00713B90 = 0xFFFFFFFFu;
    data_00713B94 = 0xFFFFFFFFu;
    data_00713B98 = 0x00000000u;
    data_00713B9C = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713BA0);
}
