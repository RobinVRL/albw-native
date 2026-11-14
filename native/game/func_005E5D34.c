/* USA 005E5D34 (EU 005E5D0C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (37 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B660;
extern uint32_t data_0070B664;
extern uint32_t data_0070B668;
extern uint32_t data_0070B66C;
extern uint32_t data_0070B670;
extern uint32_t data_0074F064;
void func_005902C0(void);

static const char *const names_0070B670[1] = {
    "CrossBattleResult",
};
static const char *const names_0074F064[36] = {
    "Èµ",
    "",
    "",
    "|",
    "u[",
    "oN_",
    "t@C[bh",
    "ACXbh",
    "Thbh",
    "gl[hbh",
    "n}[",
    "tbNVbg",
    "yKTXu[c",
    " Ý",
    "Je",
    "qgKl",
    "ó«r",
    "Ô­·è",
    "©NX",
    "NX",
    "ÂNX",
    "d¸",
    "n`",
    "©àn`",
    "_A",
    "h",
    "n[g",
    "Ôèñ²",
    "Âèñ²",
    "bZ[W{g",
    "û",
    "n¬û",
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

void func_005E5D34(void) {
    fill_names((sead_SafeString *)&data_0070B670, names_0070B670, 1);
    fill_names((sead_SafeString *)&data_0074F064, names_0074F064, 36);
    data_0070B660 = 0xFFFFFFFFu;
    data_0070B664 = 0xFFFFFFFFu;
    data_0070B668 = 0x00000000u;
    data_0070B66C = 0x00000000u;
    func_005902C0();
}
