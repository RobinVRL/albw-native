/* USA 005EBBA4 (EU 005EBB7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716168;
extern uint32_t data_0071616C;
extern uint32_t data_00716170;
extern uint32_t data_00716174;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005EBBA4(void) {
    data_00716168 = 0xFFFFFFFFu;
    data_0071616C = 0xFFFFFFFFu;
    data_00716170 = 0x00000000u;
    data_00716174 = 0x00000000u;
}
