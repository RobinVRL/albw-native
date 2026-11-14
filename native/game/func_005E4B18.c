/* USA 005E4B18 (EU 005E4AF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716590;
extern uint32_t data_00716594;
extern uint32_t data_00716598;
extern uint32_t data_0071659C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005E4B18(void) {
    data_00716590 = 0xFFFFFFFFu;
    data_00716594 = 0xFFFFFFFFu;
    data_00716598 = 0x00000000u;
    data_0071659C = 0x00000000u;
}
