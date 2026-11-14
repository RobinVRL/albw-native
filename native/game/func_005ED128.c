/* USA 005ED128 (EU 005ED100): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (7 names), 6 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007138F8;
extern uint32_t data_007138FC;
extern uint32_t data_00713900;
extern uint32_t data_00713904;
extern uint32_t data_00713908;
extern uint32_t data_00713920;
extern uint32_t data_00713924;
extern uint32_t data_0079C384;

static const char *const names_00713908[3] = {
    "Gm_LinkChecker",
    "Gm_DestinationIcon",
    "Gm_RaceGoalIcon",
};
static const char *const names_0079C384[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ED128(void) {
    fill_names((sead_SafeString *)&data_00713908, names_00713908, 3);
    fill_names((sead_SafeString *)&data_0079C384, names_0079C384, 4);
    data_007138F8 = 0xFFFFFFFFu;
    data_007138FC = 0xFFFFFFFFu;
    data_00713900 = 0x00000000u;
    data_00713904 = 0x00000000u;
    data_00713920 = 0xC2400000u /* -48.0 f */;
    data_00713924 = 0xC2E00000u /* -112.0 f */;
}
