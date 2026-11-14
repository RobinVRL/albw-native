/* USA 005EA9A4 (EU 005EA97C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711178;
extern uint32_t data_0071117C;
extern uint32_t data_00711180;
extern uint32_t data_00711184;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EA9A4(void) {
    data_00711178 = 0xFFFFFFFFu;
    data_0071117C = 0xFFFFFFFFu;
    data_00711180 = 0x00000000u;
    data_00711184 = 0x00000000u;
}
