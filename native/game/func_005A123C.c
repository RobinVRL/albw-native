/* USA 005A123C (EU 005A1214): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (17 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B8A0;
extern uint32_t data_0070B8A4;
extern uint32_t data_0070B8A8;
extern uint32_t data_0070B8AC;
extern uint32_t data_0074F5C0;
void func_005902C0(void);

static const char *const names_0074F5C0[17] = {
    "Lyt_Boot",
    "Lyt_Collect",
    "Lyt_Common",
    "Lyt_Dark",
    "Lyt_Demo",
    "Lyt_Dungeon",
    "Lyt_Ending",
    "Lyt_Field",
    "Lyt_Game",
    "Lyt_Light",
    "Lyt_Menu",
    "Lyt_Versus",
    "Lyt_Obaba",
    "Lyt_PowerUp",
    "Lyt_Rental",
    "Lyt_Stadium",
    "",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A123C(void) {
    fill_names((sead_SafeString *)&data_0074F5C0, names_0074F5C0, 17);
    data_0070B8A0 = 0xFFFFFFFFu;
    data_0070B8A4 = 0xFFFFFFFFu;
    data_0070B8A8 = 0x00000000u;
    data_0070B8AC = 0x00000000u;
    func_005902C0();
}
