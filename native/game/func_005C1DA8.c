/* USA 005C1DA8 (EU 005C1D80): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 12 sead::SafeString name tables (24 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712FB0;
extern uint32_t data_00712FB4;
extern uint32_t data_00712FB8;
extern uint32_t data_00712FBC;
extern uint32_t data_00712FD4;
extern uint32_t data_00712FF8;
extern uint32_t data_0071301C;
extern uint32_t data_00713040;
extern uint32_t data_00713064;
extern uint32_t data_00713088;
extern uint32_t data_007130AC;
extern uint32_t data_007130D0;
extern uint32_t data_007130F4;
extern uint32_t data_00713118;
extern uint32_t data_0071313C;
extern uint32_t data_00713160;
void func_00100000(void);
void func_001166C0(void);
void func_005902C0(uint32_t, uint32_t, uint32_t, uint32_t);  /* tail call */

static const char *const names_00712FD4[2] = {
    "Gully",
    "O          ",
};
static const char *const names_00712FF8[2] = {
    "Seres",
    "ZX        ",
};
static const char *const names_0071301C[2] = {
    "Osfala",
    "AXt@    ",
};
static const char *const names_00713040[2] = {
    "Irene",
    "AC      ",
};
static const char *const names_00713064[2] = {
    "Oren",
    "I[      ",
};
static const char *const names_00713088[2] = {
    "Rosso",
    "b\\        ",
};
static const char *const names_007130AC[2] = {
    "Impa",
    "Cp        ",
};
static const char *const names_007130D0[2] = {
    "Omote02",
    "~No[   ",
};
static const char *const names_007130F4[2] = {
    "Omote03",
    "RbR®     ",
};
static const char *const names_00713118[2] = {
    "Omote04",
    "JJRº   ",
};
static const char *const names_0071313C[2] = {
    "Omote01",
    "}U[}C}C",
};
static const char *const names_00713160[2] = {
    "Zelda",
    "[_        ",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C1DA8(void) {
    fill_names((sead_SafeString *)&data_00712FD4, names_00712FD4, 2);
    fill_names((sead_SafeString *)&data_00712FF8, names_00712FF8, 2);
    fill_names((sead_SafeString *)&data_0071301C, names_0071301C, 2);
    fill_names((sead_SafeString *)&data_00713040, names_00713040, 2);
    fill_names((sead_SafeString *)&data_00713064, names_00713064, 2);
    fill_names((sead_SafeString *)&data_00713088, names_00713088, 2);
    fill_names((sead_SafeString *)&data_007130AC, names_007130AC, 2);
    fill_names((sead_SafeString *)&data_007130D0, names_007130D0, 2);
    fill_names((sead_SafeString *)&data_007130F4, names_007130F4, 2);
    fill_names((sead_SafeString *)&data_00713118, names_00713118, 2);
    fill_names((sead_SafeString *)&data_0071313C, names_0071313C, 2);
    fill_names((sead_SafeString *)&data_00713160, names_00713160, 2);
    data_00712FB0 = 0xFFFFFFFFu;
    data_00712FB4 = 0xFFFFFFFFu;
    data_00712FB8 = 0x00000000u;
    data_00712FBC = 0x00000000u;
    func_005902C0(0x00000000u, (uint32_t)(uintptr_t)&func_001166C0, (uint32_t)(uintptr_t)&func_00100000, (uint32_t)(uintptr_t)"Zelda");
}
