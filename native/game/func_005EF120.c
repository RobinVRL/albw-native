/* USA 005EF120 (EU 005EF0F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713260;
extern uint32_t data_00713264;
extern uint32_t data_00713268;
extern uint32_t data_0071326C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EF120(void) {
    data_00713260 = 0xFFFFFFFFu;
    data_00713264 = 0xFFFFFFFFu;
    data_00713268 = 0x00000000u;
    data_0071326C = 0x00000000u;
}
