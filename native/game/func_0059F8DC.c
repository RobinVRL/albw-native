/* USA 0059F8DC (EU 0059F8B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706CE0;
extern uint32_t data_00706CE4;
extern uint32_t data_00706CE8;
extern uint32_t data_00706CEC;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059F8DC(void) {
    data_00706CE0 = 0xFFFFFFFFu;
    data_00706CE4 = 0xFFFFFFFFu;
    data_00706CE8 = 0x00000000u;
    data_00706CEC = 0x00000000u;
}
