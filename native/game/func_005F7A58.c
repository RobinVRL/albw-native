/* USA 005F7A58 (EU 005F7A30): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 1 sead::SafeString name tables (2 names) and 5 other globals. */
#include <stdint.h>

typedef struct { const void *vtbl; const char *str; } SafeString;  /* sead::SafeString */

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713CE8;
extern uint32_t data_00713CEC;
extern uint32_t data_00713CF0;
extern uint32_t data_00713CF4;
extern uint32_t data_00713CF8;
extern uint32_t data_00713D00;
void func_00100000(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */
void func_00688D9C(void);

static const char *const names_00713CF8[2] = {
    "Mn_KeyBoardGuideT",
    "T_Message_00",
};

static void fill_names(SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].str = names[i];
    }
}

void func_005F7A58(void) {
    fill_names((SafeString *)&data_00713CF8, names_00713CF8, 2);
    data_00713CE8 = 0xFFFFFFFFu;
    data_00713CEC = 0xFFFFFFFFu;
    data_00713CF0 = 0x00000000u;
    data_00713CF4 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_00713D00, (uint32_t)(uintptr_t)&func_00688D9C, (uint32_t)(uintptr_t)&func_00100000);
}
