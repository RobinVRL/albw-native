/* USA 005EB7F4 (EU 005EB7CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714D30;
extern uint32_t data_00714D34;
extern uint32_t data_00714D38;
extern uint32_t data_00714D3C;
extern uint32_t data_00714D40;
void func_005902C0(void);

static const char *const names_00714D40[1] = {
    "Audio3DMgr",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EB7F4(void) {
    fill_names((sead_SafeString *)&data_00714D40, names_00714D40, 1);
    data_00714D30 = 0xFFFFFFFFu;
    data_00714D34 = 0xFFFFFFFFu;
    data_00714D38 = 0x00000000u;
    data_00714D3C = 0x00000000u;
    func_005902C0();
}
