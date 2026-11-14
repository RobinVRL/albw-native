/* USA 005DE4E8 (EU 005DE4C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (36 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E50;
extern uint32_t data_00709E54;
extern uint32_t data_00709E58;
extern uint32_t data_00709E5C;
extern uint32_t data_00735244;
void func_00100000(void);
void func_0011A544(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_00735244[36] = {
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

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005DE4E8(void) {
    fill_names((SafeString *)&data_00735244, names_00735244, 36);
    data_00709E50 = 0xFFFFFFFFu;
    data_00709E54 = 0xFFFFFFFFu;
    data_00709E58 = 0x00000000u;
    data_00709E5C = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_0011A544, (uint32_t)(uintptr_t)&func_00100000);
}
