/* USA 005B94EC (EU 005B94C4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715170;
extern uint32_t data_00715174;
extern uint32_t data_00715178;
extern uint32_t data_0071517C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005B94EC(void) {
    data_00715170 = 0xFFFFFFFFu;
    data_00715174 = 0xFFFFFFFFu;
    data_00715178 = 0x00000000u;
    data_0071517C = 0x00000000u;
}
