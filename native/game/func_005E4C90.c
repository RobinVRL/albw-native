/* USA 005E4C90 (EU 005E4C68): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706D10;
extern uint32_t data_00706D14;
extern uint32_t data_00706D18;
extern uint32_t data_00706D1C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E4C90(void) {
    data_00706D10 = 0xFFFFFFFFu;
    data_00706D14 = 0xFFFFFFFFu;
    data_00706D18 = 0x00000000u;
    data_00706D1C = 0x00000000u;
}
