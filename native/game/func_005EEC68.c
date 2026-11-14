/* USA 005EEC68 (EU 005EEC40): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007123D0;
extern uint32_t data_007123D4;
extern uint32_t data_007123D8;
extern uint32_t data_007123DC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EEC68(void) {
    data_007123D0 = 0xFFFFFFFFu;
    data_007123D4 = 0xFFFFFFFFu;
    data_007123D8 = 0x00000000u;
    data_007123DC = 0x00000000u;
}
