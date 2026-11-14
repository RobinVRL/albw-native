/* USA 005F8E9C (EU 005F8E74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722A28;
extern uint32_t data_00722A2C;
extern uint32_t data_00722A30;
extern uint32_t data_00722A34;


static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F8E9C(void) {
    data_00722A28 = 0xFFFFFFFFu;
    data_00722A2C = 0xFFFFFFFFu;
    data_00722A30 = 0x00000000u;
    data_00722A34 = 0x00000000u;
}
