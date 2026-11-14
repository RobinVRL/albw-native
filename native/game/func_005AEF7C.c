/* USA 005AEF7C (EU 005AEF54): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709CA8;
extern uint32_t data_00709CAC;
extern uint32_t data_00709CB0;
extern uint32_t data_00709CB4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005AEF7C(void) {
    data_00709CA8 = 0xFFFFFFFFu;
    data_00709CAC = 0xFFFFFFFFu;
    data_00709CB0 = 0x00000000u;
    data_00709CB4 = 0x00000000u;
}
