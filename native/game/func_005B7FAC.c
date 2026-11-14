/* USA 005B7FAC (EU 005B7F84): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F3C8;
extern uint32_t data_0070F3D0;
extern uint32_t data_0070F3D4;
extern uint32_t data_0070F3D8;
extern uint32_t data_0070F3DC;
extern uint32_t data_007844E4;
extern uint32_t data_007844E8;
extern uint32_t data_007844EC;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005B7FAC(void) {
    data_0070F3D0 = 0xFFFFFFFFu;
    data_0070F3D4 = 0xFFFFFFFFu;
    data_0070F3D8 = 0x00000000u;
    data_0070F3DC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0xCD8E38E4u, 0x00000000u);
    data_0070F3C8 = ret0;
    data_007844E4 = 0x00000081u;
    data_007844E8 = 0x00000083u;
    data_007844EC = 0x00000082u;
}
