/* USA 005FB83C (EU 005FB814): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007136F8;
extern uint32_t data_007136FC;
extern uint32_t data_00713700;
extern uint32_t data_00713704;
extern uint32_t data_00713708;
extern uint32_t data_0079C03C;
void func_005902C0(void);

static const char *const names_00713708[2] = {
    "Gm_SRCRecordListT",
    "Gm_SRCRecordListIndexT",
};
static const char *const names_0079C03C[6] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "In",
    "Out",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FB83C(void) {
    fill_names((sead_SafeString *)&data_00713708, names_00713708, 2);
    fill_names((sead_SafeString *)&data_0079C03C, names_0079C03C, 6);
    data_007136F8 = 0xFFFFFFFFu;
    data_007136FC = 0xFFFFFFFFu;
    data_00713700 = 0x00000000u;
    data_00713704 = 0x00000000u;
    func_005902C0();
}
