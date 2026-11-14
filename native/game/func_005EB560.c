/* USA 005EB560 (EU 005EB538): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 32 other stores, 9 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006EFCEC;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007046C0;
extern uint32_t data_007047C0;
extern uint32_t data_007048C0;
extern uint32_t data_007149A8;
extern uint32_t data_0079CDD4;
extern uint32_t data_0079CDD8;
extern uint32_t data_0079CDDC;
extern uint32_t data_0079CDE0;
extern uint32_t data_0079CDE4;
extern uint32_t data_0079CDE8;
extern uint32_t data_0079CDF8;
extern uint32_t data_0079CE04;
extern uint32_t data_0079CE08;
extern uint32_t data_0079CE0C;
extern uint32_t data_0079CE10;
extern uint32_t data_0079CE14;
extern uint32_t data_0079CE18;
extern uint32_t data_0079CE1C;
extern uint32_t data_0079CE20;
extern uint32_t data_0079CE24;
extern uint32_t data_0079CE34;
extern uint32_t data_0079CE40;
extern uint32_t data_0079CE44;
extern uint32_t data_0079CE48;
extern uint32_t data_0079CE4C;
extern uint32_t data_0079CE50;
extern uint32_t data_0079CE54;
extern uint32_t data_0079CE58;
extern uint32_t data_0079CE5C;
extern uint32_t data_0079CE60;
extern uint32_t data_0079CE70;
extern uint32_t data_0079CE7C;
extern uint32_t data_0079CE80;
extern uint32_t data_0079CE84;
extern uint32_t data_0079CE88;
extern uint32_t data_0079CE98;
void func_00100118(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0010DEB0(uintptr_t);
void func_0010FC88(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_003C8E3C(void);
void func_005902C0(void);


void func_005EB560(void) {
    uintptr_t stk[4];  /* stack temporaries (objects passed by address) */
    func_00100118((uintptr_t)&data_0079CE98, (uintptr_t)&func_003C8E3C, 0x00000010u, 0x00000020u);
    data_007149A8 = 0x00000000u;
    data_0079CE88 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CE88);
    *(uintptr_t *)((char *)stk + 0) = 0x00000004u;
    *(uintptr_t *)((char *)stk + 4) = 0x00000000u;
    data_0079CDD4 = (uintptr_t)&data_006EFCEC;
    data_0079CDD8 = 0x00000000u;
    data_0079CDDC = 0x00000000u;
    data_0079CDE0 = 0x00000000u;
    data_0079CDE4 = 0x00000000u;
    data_0079CDE8 = 0x00000000u;
    data_0079CDF8 = 0x00000000u;
    data_0079CE04 = 0x00000000u;
    data_0079CE08 = 0x00000000u;
    data_0079CE0C = 0xFFFFFFFFu;
    func_0010FC88((uintptr_t)&data_0079CDD4, 0x00000010u, (uintptr_t)&data_007046C0, 0x00000100u, 0x00000004u, 0x00000000u);
    func_0010DEB0((uintptr_t)&data_0079CE04);
    *(uintptr_t *)((char *)stk + 0) = 0x00000004u;
    *(uintptr_t *)((char *)stk + 4) = 0x00000000u;
    data_0079CE10 = (uintptr_t)&data_006EFCEC;
    data_0079CE14 = 0x00000000u;
    data_0079CE18 = 0x00000000u;
    data_0079CE1C = 0x00000000u;
    data_0079CE20 = 0x00000000u;
    data_0079CE24 = 0x00000000u;
    data_0079CE34 = 0x00000000u;
    data_0079CE40 = 0x00000000u;
    data_0079CE44 = 0x00000000u;
    data_0079CE48 = 0xFFFFFFFFu;
    func_0010FC88((uintptr_t)&data_0079CE10, 0x00000008u, (uintptr_t)&data_007047C0, 0x00000100u, 0x00000004u, 0x00000000u);
    func_0010DEB0((uintptr_t)&data_0079CE40);
    *(uintptr_t *)((char *)stk + 0) = 0x00000004u;
    *(uintptr_t *)((char *)stk + 4) = 0x00000000u;
    data_0079CE4C = (uintptr_t)&data_006EFCEC;
    data_0079CE50 = 0x00000000u;
    data_0079CE54 = 0x00000000u;
    data_0079CE58 = 0x00000000u;
    data_0079CE5C = 0x00000000u;
    data_0079CE60 = 0x00000000u;
    data_0079CE70 = 0x00000000u;
    data_0079CE7C = 0x00000000u;
    data_0079CE80 = 0x00000000u;
    data_0079CE84 = 0xFFFFFFFFu;
    func_0010FC88((uintptr_t)&data_0079CE4C, 0x00000008u, (uintptr_t)&data_007048C0, 0x00000080u, 0x00000004u, 0x00000000u);
    func_0010DEB0((uintptr_t)&data_0079CE7C);
    func_005902C0();
}
