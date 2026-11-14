/* USA 005C6F74 (EU 005C6F4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 27 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FB78;
extern uint32_t data_0070FB79;
extern uint32_t data_0070FB7A;
extern uint32_t data_0070FB7B;
extern uint32_t data_0070FB7C;
extern uint32_t data_0070FB7D;
extern uint32_t data_0070FB7E;
extern uint32_t data_0070FB7F;
extern uint32_t data_0070FB80;
extern uint32_t data_0070FB84;
extern uint32_t data_0070FB85;
extern uint32_t data_0070FB86;
extern uint32_t data_0070FB87;
extern uint32_t data_0070FB88;
extern uint32_t data_0070FB89;
extern uint32_t data_0070FB8A;
extern uint32_t data_0070FB8B;
extern uint32_t data_0070FB8C;
extern uint32_t data_0070FB90;
extern uint32_t data_0070FB94;
extern uint32_t data_0070FB98;
extern uint32_t data_0070FB9C;
extern uint32_t data_0070FBA0;
extern uint32_t data_0070FBF0;
extern uint32_t data_0070FBF4;
extern uint32_t data_0079605C;
extern uint32_t data_00796060;
extern uint32_t data_00796064;
uintptr_t func_00114608(uintptr_t, uintptr_t);

static const char *const names_0070FBA0[10] = {
    "skl_root",
    "center",
    "chest_jnt",
    "head_jnt",
    "neck_jnt",
    "cl_LhandA",
    "cl_RhandA",
    "Lshoulder_jnt",
    "LlegB_jnt",
    "RlegB_jnt",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C6F74(void) {
    fill_names((sead_SafeString *)&data_0070FBA0, names_0070FBA0, 10);
    *(uint8_t *)&data_0070FB78 = 0xFFu;
    *(uint8_t *)&data_0070FB79 = 0x0u;
    *(uint8_t *)&data_0070FB7A = 0x0u;
    *(uint8_t *)&data_0070FB7B = 0x0u;
    *(uint8_t *)&data_0070FB7C = 0xFFu;
    *(uint8_t *)&data_0070FB7D = 0x0u;
    *(uint8_t *)&data_0070FB7E = 0x0u;
    *(uint8_t *)&data_0070FB7F = 0xFFu;
    data_0070FB90 = 0xFFFFFFFFu;
    data_0070FB94 = 0xFFFFFFFFu;
    data_0070FB98 = 0x00000000u;
    data_0070FB9C = 0x00000000u;
    data_0070FBF0 = 0x00000080u;
    data_0070FBF4 = 0x00000080u;
    data_0079605C = 0x00000000u /* 0.0 f */;
    data_00796060 = 0x3F63D70Au /* 0.8899999856948853 f */;
    data_00796064 = 0x00000000u /* 0.0 f */;
    uintptr_t ret0 = func_00114608(0x4D800000u, 0x00000000u);
    data_0070FB80 = ret0;
    *(uint8_t *)&data_0070FB84 = 0xFFu;
    *(uint8_t *)&data_0070FB85 = 0x0u;
    *(uint8_t *)&data_0070FB86 = 0x8Au;
    *(uint8_t *)&data_0070FB87 = 0x6Au;
    *(uint8_t *)&data_0070FB88 = 0xFFu;
    *(uint8_t *)&data_0070FB89 = 0xF0u;
    *(uint8_t *)&data_0070FB8A = 0x7Fu;
    *(uint8_t *)&data_0070FB8B = 0xE6u;
    uintptr_t ret1 = func_00114608(0x4E000000u, 0x0000007Fu);
    data_0070FB8C = ret1;
}
