/* USA 005FDF58 (EU 005FDF30): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (25 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007136B8;
extern uint32_t data_007136BC;
extern uint32_t data_007136C0;
extern uint32_t data_007136C4;
extern uint32_t data_007136C8;
extern uint32_t data_0079BF1C;
void func_005902C0(void);

static const char *const names_007136C8[1] = {
    "Gm_SRCResultTimeUpT",
};
static const char *const names_0079BF1C[24] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "Meter",
    "Stop",
    "Meter",
    "Stop",
    "In",
    "Out",
    "LinkColor",
    "G_MeterS_00",
    "G_MeterNumS_00",
    "G_MeterL_00",
    "G_MeterNumL_00",
    "",
    "",
    "",
    "Lv1",
    "Lv2",
    "Lv3",
    "Lv4",
    "T_MeterNumS_00",
    "T_MeterNumL_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005FDF58(void) {
    fill_names((sead_SafeString *)&data_007136C8, names_007136C8, 1);
    fill_names((sead_SafeString *)&data_0079BF1C, names_0079BF1C, 24);
    data_007136B8 = 0xFFFFFFFFu;
    data_007136BC = 0xFFFFFFFFu;
    data_007136C0 = 0x00000000u;
    data_007136C4 = 0x00000000u;
    func_005902C0();
}
