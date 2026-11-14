/* USA 005A939C (EU 005A9374): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709D90;
extern uint32_t data_00709D94;
extern uint32_t data_00709D98;
extern uint32_t data_00709D9C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A939C(void) {
    data_00709D90 = 0xFFFFFFFFu;
    data_00709D94 = 0xFFFFFFFFu;
    data_00709D98 = 0x00000000u;
    data_00709D9C = 0x00000000u;
}
