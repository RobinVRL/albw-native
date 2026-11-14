/* USA 005A5B1C (EU 005A5AF4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BC10;
extern uint32_t data_0070BC14;
extern uint32_t data_0070BC18;
extern uint32_t data_0070BC1C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A5B1C(void) {
    data_0070BC10 = 0xFFFFFFFFu;
    data_0070BC14 = 0xFFFFFFFFu;
    data_0070BC18 = 0x00000000u;
    data_0070BC1C = 0x00000000u;
}
