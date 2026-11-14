/* USA 005AF180 (EU 005AF158): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (3 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709EF8;
extern uint32_t data_00709EFC;
extern uint32_t data_00709F00;
extern uint32_t data_00709F04;
extern uint32_t data_00709F08;
extern uint32_t data_00709F18;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00709F08[3] = {
    "World/Cross",
    "BoxIcon48.ctpk",
    "MessageIcon40.ctpk",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005AF180(void) {
    fill_names((SafeString *)&data_00709F08, names_00709F08, 3);
    data_00709EF8 = 0xFFFFFFFFu;
    data_00709EFC = 0xFFFFFFFFu;
    data_00709F00 = 0x00000000u;
    data_00709F04 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00709F18, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
