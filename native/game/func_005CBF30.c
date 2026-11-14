/* USA 005CBF30 (EU 005CBF08): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709EC8;
extern uint32_t data_00709ECC;
extern uint32_t data_00709ED0;
extern uint32_t data_00709ED4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005CBF30(void) {
    data_00709EC8 = 0xFFFFFFFFu;
    data_00709ECC = 0xFFFFFFFFu;
    data_00709ED0 = 0x00000000u;
    data_00709ED4 = 0x00000000u;
}
