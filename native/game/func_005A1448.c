/* USA 005A1448 (EU 005A1420): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BC30;
extern uint32_t data_0070BC34;
extern uint32_t data_0070BC38;
extern uint32_t data_0070BC3C;
extern uint32_t data_0070BC40;
void func_005902C0(uintptr_t);

static const char *const names_0070BC40[1] = {
    "",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A1448(void) {
    fill_names((sead_SafeString *)&data_0070BC40, names_0070BC40, 1);
    data_0070BC30 = 0xFFFFFFFFu;
    data_0070BC34 = 0xFFFFFFFFu;
    data_0070BC38 = 0x00000000u;
    data_0070BC3C = 0x00000000u;
    func_005902C0((uintptr_t)&data_0070BC40);
}
