/* USA 006043E4 <- EU 006043BC: factory for an actor of the 001CD73C family (variant 1):
 *     obj = new(0x510); if (!obj) return NULL;
 *     self = 001CD73C(obj, params);                 (base ctor, returns the object)
 *     self->vtbl = data_006D11F8; self->[0x4F9] = 1; self->[0x320] = data_006D11F8 + 0x64;
 *     if (001CD098(self)) 004ECF6C(self);
 *     return self;
 *
 * What was wrong: Ghidra marked 004ECF6C as "does not return" (it is a 4-instruction tail call
 * to 004CD7C8, which returns), so the converted code had no path from that call to
 * `return self`: natively, whenever 001CD098 was true, the function fell off its end and the
 * caller got a garbage pointer.
 * Verified against EU 006043BC-00604410 (allocation size 0x510, byte 1 stored at +0x4F9 before the
 * secondary vtable at +0x320, conditional blne to 004ECF6C, then `mov r0, r4`).
 * Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void *func_001CD73C(void *self, void *params);
int func_001CD098(void *self);
void func_004ECF6C(void *self);

extern char data_006D11F8[];  /* vtable */

char *func_006043E4(void *params) {
    void *obj = func_0010BAB4(0x510);
    if (!obj)
        return NULL;
    char *self = func_001CD73C(obj, params);
    FLD(self, 0x000, char *) = data_006D11F8;
    FLD(self, 0x4F9, uint8_t) = 1;
    FLD(self, 0x320, char *) = data_006D11F8 + 0x64;
    if (func_001CD098(self))
        func_004ECF6C(self);
    return self;
}
