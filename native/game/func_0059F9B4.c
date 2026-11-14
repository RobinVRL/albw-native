/* USA 0059F9B4 (EU 0059F98C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709DA0;
extern uint32_t data_00709DA4;
extern uint32_t data_00709DA8;
extern uint32_t data_00709DAC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059F9B4(void) {
    data_00709DA0 = 0xFFFFFFFFu;
    data_00709DA4 = 0xFFFFFFFFu;
    data_00709DA8 = 0x00000000u;
    data_00709DAC = 0x00000000u;
}
