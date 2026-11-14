/* USA 005A36D0 (EU 005A36A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713170;
extern uint32_t data_00713174;
extern uint32_t data_00713178;
extern uint32_t data_0071317C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005A36D0(void) {
    data_00713170 = 0xFFFFFFFFu;
    data_00713174 = 0xFFFFFFFFu;
    data_00713178 = 0x00000000u;
    data_0071317C = 0x00000000u;
}
