/* USA 005E4618 (EU 005E45F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714538;
extern uint32_t data_0071453C;
extern uint32_t data_00714540;
extern uint32_t data_00714544;
extern uint32_t data_00714548;
extern uint32_t data_0079C93C;
void func_005902C0(void);

static const char *const names_00714548[3] = {
    "CrossRecordList",
    "cross_record_%02d",
    "T_Panel_00",
};
static const char *const names_0079C93C[5] = {
    "GetMedal",
    "Loop",
    "Num",
    "Num",
    "Pos",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E4618(void) {
    fill_names((sead_SafeString *)&data_00714548, names_00714548, 3);
    fill_names((sead_SafeString *)&data_0079C93C, names_0079C93C, 5);
    data_00714538 = 0xFFFFFFFFu;
    data_0071453C = 0xFFFFFFFFu;
    data_00714540 = 0x00000000u;
    data_00714544 = 0x00000000u;
    func_005902C0();
}
