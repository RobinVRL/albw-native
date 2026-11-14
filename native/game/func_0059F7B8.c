/* USA 0059F7B8 (EU 0059F790): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716618;
extern uint32_t data_0071661C;
extern uint32_t data_00716620;
extern uint32_t data_00716624;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_0059F7B8(void) {
    data_00716618 = 0xFFFFFFFFu;
    data_0071661C = 0xFFFFFFFFu;
    data_00716620 = 0x00000000u;
    data_00716624 = 0x00000000u;
}
