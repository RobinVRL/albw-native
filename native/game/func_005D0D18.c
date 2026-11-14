/* USA 005D0D18 (EU 005D0CF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007165B8;
extern uint32_t data_007165BC;
extern uint32_t data_007165C0;
extern uint32_t data_007165C4;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005D0D18(void) {
    data_007165B8 = 0xFFFFFFFFu;
    data_007165BC = 0xFFFFFFFFu;
    data_007165C0 = 0x00000000u;
    data_007165C4 = 0x00000000u;
}
