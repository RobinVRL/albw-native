/* USA 005AED4C (EU 005AED24): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706E58;
extern uint32_t data_00706E5C;
extern uint32_t data_00706E60;
extern uint32_t data_00706E64;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005AED4C(void) {
    data_00706E58 = 0xFFFFFFFFu;
    data_00706E5C = 0xFFFFFFFFu;
    data_00706E60 = 0x00000000u;
    data_00706E64 = 0x00000000u;
}
