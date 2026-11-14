/* USA 005B95F4 (EU 005B95CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 6 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715458;
extern uint32_t data_0071545C;
extern uint32_t data_00715460;
extern uint32_t data_00715464;
extern uint32_t data_00715468;
extern uint32_t data_0071546C;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005B95F4(void) {
    data_00715458 = 0x0FFB0FF0u;
    data_0071545C = 0x00000000u;
    data_00715460 = 0xFFFFFFFFu;
    data_00715464 = 0xFFFFFFFFu;
    data_00715468 = 0x00000000u;
    data_0071546C = 0x00000000u;
}
