/* USA 00607C9C <- EU 00607C74: factory: allocate (0x99C) and construct an actor of the
 * 00182E50 family with vtable data_006DFA54:
 *     obj = new(0x99C); if (!obj) return NULL;
 *     self = 00182E50(obj, params);            (base ctor, returns this)
 *     self->vtbl = 006DFA54; self->[0x998] = 0; self->[0x320] = 006DFA54 + 0xB8;
 *     004C03B8(self, data_00773A04);
 *     004C0808(self, 1, &data_0070DEB8, 0, 0.0f);
 *     return self;
 *
 * What was wrong: the float argument 0.0 passed in s0 to 004C0808 was dropped by Ghidra (see
 * func_004C0808.c). 00182E50 is typed `void` by Ghidra but returns `this`; the allocated
 * pointer (== its return value) is used here.
 * Verified against EU 00607C74-00607CD8 (constants: size 0x99C, f = 0.0 from pool 00607CE8).
 * Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void func_00182E50(void *self, void *params);
void func_004C03B8(void *self, void *table);
void func_004C0808(void *a0, int32_t a1, void *a2, int32_t a3, float f);

extern char data_006DFA54[];  /* vtable */
extern char data_00773A04[];
extern char data_0070DEB8[];

char *func_00607C9C(void *params) {
    char *self = func_0010BAB4(0x99C);
    if (!self)
        return NULL;
    func_00182E50(self, params);  /* returns self */
    FLD(self, 0x000, char *) = data_006DFA54;
    FLD(self, 0x998, uint8_t) = 0;
    FLD(self, 0x320, char *) = data_006DFA54 + 0xB8;
    func_004C03B8(self, data_00773A04);
    func_004C0808(self, 1, data_0070DEB8, 0, 0.0f);
    return self;
}
