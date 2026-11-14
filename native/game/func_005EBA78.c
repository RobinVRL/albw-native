/* USA 005EBA78 (EU 005EBA50): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716628;
extern uint32_t data_0071662C;
extern uint32_t data_00716630;
extern uint32_t data_00716634;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EBA78(void) {
    data_00716628 = 0xFFFFFFFFu;
    data_0071662C = 0xFFFFFFFFu;
    data_00716630 = 0x00000000u;
    data_00716634 = 0x00000000u;
}
