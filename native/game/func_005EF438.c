/* USA 005EF438 (EU 005EF410): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (14 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007136D8;
extern uint32_t data_007136DC;
extern uint32_t data_007136E0;
extern uint32_t data_007136E4;
extern uint32_t data_007136E8;
extern uint32_t data_0079BFDC;
void func_005902C0(void);

static const char *const names_007136E8[2] = {
    "Gm_SRCSignBoardT",
    "T_Message_00",
};
static const char *const names_0079BFDC[12] = {
    "In",
    "Out",
    "InGuide",
    "OutGuide",
    "DecideGuide",
    "Pos",
    "OutPos",
    "Loop",
    "Lv1",
    "Lv2",
    "Lv3",
    "Lv4",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EF438(void) {
    fill_names((sead_SafeString *)&data_007136E8, names_007136E8, 2);
    fill_names((sead_SafeString *)&data_0079BFDC, names_0079BFDC, 12);
    data_007136D8 = 0xFFFFFFFFu;
    data_007136DC = 0xFFFFFFFFu;
    data_007136E0 = 0x00000000u;
    data_007136E4 = 0x00000000u;
    func_005902C0();
}
