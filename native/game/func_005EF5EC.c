/* USA 005EF5EC (EU 005EF5C4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713A38;
extern uint32_t data_00713A3C;
extern uint32_t data_00713A40;
extern uint32_t data_00713A44;
extern uint32_t data_00713A48;
extern uint32_t data_00713A98;
void func_005902C0(uintptr_t);

static const char *const names_00713A48[11] = {
    "Mn_FileSelectT",
    "T_FileNumber_00",
    "T_SavePlace_00",
    "T_Rupy_00",
    "T_Rupee_00",
    "N_AttentionText_00",
    "T_HardModeAttention_00",
    "P_HardModeAttention_01",
    "T_HardModeAttention_01",
    "T_FileNumber_00",
    "T_FileNumber_Hard_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EF5EC(void) {
    fill_names((sead_SafeString *)&data_00713A48, names_00713A48, 11);
    data_00713A38 = 0xFFFFFFFFu;
    data_00713A3C = 0xFFFFFFFFu;
    data_00713A40 = 0x00000000u;
    data_00713A44 = 0x00000000u;
    func_005902C0((uintptr_t)&data_00713A98);
}
