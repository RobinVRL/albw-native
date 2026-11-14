/* USA 005EFA2C (EU 005EFA04): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714770;
extern uint32_t data_00714774;
extern uint32_t data_00714778;
extern uint32_t data_0071477C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EFA2C(void) {
    data_00714770 = 0xFFFFFFFFu;
    data_00714774 = 0xFFFFFFFFu;
    data_00714778 = 0x00000000u;
    data_0071477C = 0x00000000u;
}
