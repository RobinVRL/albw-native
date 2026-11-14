/* USA 005EFDE4 (EU 005EFDBC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714D58;
extern uint32_t data_00714D5C;
extern uint32_t data_00714D60;
extern uint32_t data_00714D64;
extern uint32_t data_00714D68;
extern uint32_t data_00714D90;
void func_005902C0(uintptr_t);

static const char *const names_00714D68[6] = {
    "ReverbParam(NW)",
    "DelayParam(NW)",
    "ReverbParam(SDK)",
    "DelayParam(SDK)",
    "ReverbParam(DSP)",
    "DelayParam(DSP)",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EFDE4(void) {
    fill_names((sead_SafeString *)&data_00714D68, names_00714D68, 6);
    data_00714D58 = 0xFFFFFFFFu;
    data_00714D5C = 0xFFFFFFFFu;
    data_00714D60 = 0x00000000u;
    data_00714D64 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00714D90);
}
