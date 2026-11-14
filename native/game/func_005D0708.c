/* USA 005D0708 (EU 005D06E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714250;
extern uint32_t data_00714254;
extern uint32_t data_00714258;
extern uint32_t data_0071425C;
extern uint32_t data_00714260;
extern uint32_t data_007142A8;
void func_005902C0(uintptr_t);

static const char *const names_00714260[10] = {
    "cmn_fileselect_preparing",
    "cmn_fileselect_initialized",
    "cmn_fileformat_ask",
    "cmn_fileformat_ask_00",
    "cmn_fileformat_ask_01",
    "cmn_fileformat_confirm",
    "cmn_fileformat_confirm_00",
    "cmn_fileformat_confirm_01",
    "cmn_fileformat_formatting",
    "cmn_fileformat_formatted",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005D0708(void) {
    fill_names((sead_SafeString *)&data_00714260, names_00714260, 10);
    data_00714250 = 0xFFFFFFFFu;
    data_00714254 = 0xFFFFFFFFu;
    data_00714258 = 0x00000000u;
    data_0071425C = 0x00000000u;
    func_005902C0((uintptr_t)&data_007142A8);
}
