/* USA 005A3F80 (EU 005A3F58): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E20;
extern uint32_t data_00709E24;
extern uint32_t data_00709E28;
extern uint32_t data_00709E2C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A3F80(void) {
    data_00709E20 = 0xFFFFFFFFu;
    data_00709E24 = 0xFFFFFFFFu;
    data_00709E28 = 0x00000000u;
    data_00709E2C = 0x00000000u;
}
