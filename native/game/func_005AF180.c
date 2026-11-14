/* USA 005AF180 (EU 005AF158): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (3 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709EF8;
extern uint32_t data_00709EFC;
extern uint32_t data_00709F00;
extern uint32_t data_00709F04;
extern uint32_t data_00709F08;
extern uint32_t data_00709F18;
void func_005902C0(uintptr_t);

static const char *const names_00709F08[3] = {
    "World/Cross",
    "BoxIcon48.ctpk",
    "MessageIcon40.ctpk",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AF180(void) {
    fill_names((sead_SafeString *)&data_00709F08, names_00709F08, 3);
    data_00709EF8 = 0xFFFFFFFFu;
    data_00709EFC = 0xFFFFFFFFu;
    data_00709F00 = 0x00000000u;
    data_00709F04 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00709F18);
}
