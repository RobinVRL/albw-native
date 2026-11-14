/* USA 005D0308 (EU 005D02E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713558;
extern uint32_t data_0071355C;
extern uint32_t data_00713560;
extern uint32_t data_00713564;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0308(void) {
    data_00713558 = 0xFFFFFFFFu;
    data_0071355C = 0xFFFFFFFFu;
    data_00713560 = 0x00000000u;
    data_00713564 = 0x00000000u;
}
