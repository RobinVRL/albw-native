/* USA 00606CC0 <- EU 00606C98: factory for an actor of the 0032740C family (vtable
 * data_006DC4D4):
 *     obj = new(0x53C); if (!obj) return NULL;
 *     self = 0032740C(obj, params, NULL, r3);         (base ctor, returns this)
 *     self->[0x320] = 006DC4D4 + 0x5C; self->vtbl = 006DC4D4;
 *     self->[0x538] = sub = 0054D89C(self, 0);
 *     if (sub) { 001511F0(sub); 001512E8(self->[0x538]);
 *                if (self->[0x48C] == 7) 00151148(self->[0x538], 0); }
 *     return self;
 *
 * What was wrong: Ghidra marked 00151148 as "does not return" (it is `ldr r0,[r0,#0x1c]; b
 * 002C34A4`, a tail call that returns), so when [0x48C] == 7 the converted function fell off
 * its end and returned garbage.
 * r3 is passed through untouched from the caller to 0032740C (its 4th argument), so it is a
 * parameter here too.
 * Verified against EU 00606C98-00606D1C (size 0x53C from the pool, r2 = 0 for the name).
 * Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void *func_0032740C(void *self, void *params, const char *name, uint32_t r3);
void *func_0054D89C(void *self, uint32_t index);
void func_001511F0(void *p);
void func_001512E8(void *p);
float func_00151148(void *p, int32_t arg);   /* returns float (s0); result discarded */

extern char data_006DC4D4[];  /* vtable */

char *func_00606CC0(void *params, uint32_t r1_unused, uint32_t r2_unused, uint32_t r3) {
    void *obj = func_0010BAB4(0x53C);
    if (!obj)
        return NULL;
    char *self = func_0032740C(obj, params, NULL, r3);
    FLD(self, 0x320, char *) = data_006DC4D4 + 0x5C;
    FLD(self, 0x000, char *) = data_006DC4D4;
    void *sub = func_0054D89C(self, 0);
    FLD(self, 0x538, void *) = sub;
    if (sub) {
        func_001511F0(sub);
        func_001512E8(FLD(self, 0x538, void *));
        if (FLD(self, 0x48C, uint8_t) == 7)
            func_00151148(FLD(self, 0x538, void *), 0);
    }
    return self;
}
