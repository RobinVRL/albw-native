/* USA 00607020 <- EU 00606FF8: factory: allocate (0x99C) and construct an actor of the
 * 00182E50 family with vtable data_006DCCE0:
 *     obj = new(0x99C); if (!obj) return NULL;
 *     self = 00182E50(obj, params);            (base ctor, returns this)
 *     self->vtbl = 006DCCE0; self->[0x320] = 006DCCE0 + 0xB8;
 *     self->[0x998] = 3; self->[0x999] = 0;
 *     if (!game->[0x2EC]) { self->[0x2D7] = 1; return self; }     (game = *data_0070D858)
 *     004C03B8(self, data_00773A2C);
 *     004C0808(self, 1, &data_0070DEB8, 0, 1.0f);
 *     self->[0x998] = game->[0x2E4];
 *     return self;
 *
 * What was wrong: the float argument 1.0 passed in s0 to 004C0808 was dropped by Ghidra (see
 * func_004C0808.c, which now takes it). Also 00182E50 is typed `void` by Ghidra although it
 * returns `this` in r0 (ARM C++ ABI: constructors return this); this version uses the
 * allocated pointer, which is the value 00182E50 returns, so it does not depend on the native
 * 00182E50 returning anything.
 * Verified against EU 00606FF8-0060708C (constants: size 0x99C, f = 0x3F800000).
 * Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void func_00182E50(void *self, void *params);
void func_004C03B8(void *self, void *table);
void func_004C0808(void *a0, int32_t a1, void *a2, int32_t a3, float f);

extern char data_006DCCE0[];  /* vtable */
extern char *data_0070D858;   /* game singleton */
extern char data_00773A2C[];
extern char data_0070DEB8[];

char *func_00607020(void *params) {
    char *self = func_0010BAB4(0x99C);
    if (!self)
        return NULL;
    func_00182E50(self, params);  /* returns self */
    FLD(self, 0x000, char *) = data_006DCCE0;
    FLD(self, 0x320, char *) = data_006DCCE0 + 0xB8;
    FLD(self, 0x998, uint8_t) = 3;
    FLD(self, 0x999, uint8_t) = 0;
    if (FLD(data_0070D858, 0x2EC, uint8_t) == 0) {
        FLD(self, 0x2D7, uint8_t) = 1;
        return self;
    }
    func_004C03B8(self, data_00773A2C);
    func_004C0808(self, 1, data_0070DEB8, 0, 1.0f);
    FLD(self, 0x998, uint8_t) = FLD(data_0070D858, 0x2E4, uint8_t);
    return self;
}
