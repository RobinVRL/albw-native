/* USA 005EDF44 (EU 005EDF1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706CB8;
extern uint32_t data_00706CBC;
extern uint32_t data_00706CC0;
extern uint32_t data_00706CC4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EDF44(void) {
    data_00706CB8 = 0xFFFFFFFFu;
    data_00706CBC = 0xFFFFFFFFu;
    data_00706CC0 = 0x00000000u;
    data_00706CC4 = 0x00000000u;
}
