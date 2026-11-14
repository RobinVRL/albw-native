/* USA 005E5028 (EU 005E5000): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 6 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709D10;
extern uint32_t data_00709D14;
extern uint32_t data_00709D18;
extern uint32_t data_00709D1C;
extern uint32_t data_00709D20;
extern uint32_t data_00709D24;


void func_005E5028(void) {
    data_00709D10 = 0xFFFFFFFFu;
    data_00709D14 = 0xFFFFFFFFu;
    data_00709D18 = 0x00000000u;
    data_00709D1C = 0x00000000u;
    data_00709D20 = 0x7F7FFFFFu /* 3.4028234663852886e+38 f */;
    data_00709D24 = 0x7F7FFFFFu /* 3.4028234663852886e+38 f */;
}
