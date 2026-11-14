/* USA 005F893C (EU 005F8914): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (4 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713670;
extern uint32_t data_00713674;
extern uint32_t data_00713678;
extern uint32_t data_0071367C;
extern uint32_t data_00713680;
extern uint32_t data_0079BD7C;
void func_005902C0(uintptr_t);

static const char *const names_00713680[1] = {
    "Gm_CongratulationWindowT",
};
static const char *const names_0079BD7C[3] = {
    "InOut",
    "InOut",
    "Loop",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F893C(void) {
    fill_names((sead_SafeString *)&data_00713680, names_00713680, 1);
    fill_names((sead_SafeString *)&data_0079BD7C, names_0079BD7C, 3);
    data_00713670 = 0xFFFFFFFFu;
    data_00713674 = 0xFFFFFFFFu;
    data_00713678 = 0x00000000u;
    data_0071367C = 0x00000000u;
    func_005902C0(0x00000000u);
}
