/* USA 005EDC4C (EU 005EDC24): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007159B8;
extern uint32_t data_007159BC;
extern uint32_t data_007159C0;
extern uint32_t data_007159C4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EDC4C(void) {
    data_007159B8 = 0xFFFFFFFFu;
    data_007159BC = 0xFFFFFFFFu;
    data_007159C0 = 0x00000000u;
    data_007159C4 = 0x00000000u;
}
