/* USA 005FA7F4 (EU 005FA7CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (3 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709F48;
extern uint32_t data_00709F4C;
extern uint32_t data_00709F50;
extern uint32_t data_00709F54;
extern uint32_t data_00709F58;
extern uint32_t data_00709F68;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00709F58[3] = {
    "DefaultShadowLink",
    "dsl_cross_old_man",
    "dsl_user_name_00",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005FA7F4(void) {
    fill_names((SafeString *)&data_00709F58, names_00709F58, 3);
    data_00709F48 = 0xFFFFFFFFu;
    data_00709F4C = 0xFFFFFFFFu;
    data_00709F50 = 0x00000000u;
    data_00709F54 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00709F68, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
