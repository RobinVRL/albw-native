/* USA 0060B2A0 <- EU 0060B278: factory of the actor class Object_0050B78C:
 *     void *create(void *params) { void *m = operator new(0x484); return m ? ctor(m, params) : 0; }
 *
 * What was wrong in the Ghidra version: typed `void func_0060B2A0(void)`, it called the
 * constructor as `func_0050B788()` with neither the new memory nor `params`, and returned nothing
 * (the ARM tail-calls the constructor, so r0 = the new object, or r0 = 0 from the failed new).
 * Fixed together with native/robust/func_0050B788.c.
 *
 * Disassembly (EU): push {r4,lr}; mov r4, r0; ldr r0, =0x484; bl 0010BAB4; cmp r0, #0;
 *   beq ret; mov r1, r4; pop {r4,lr}; b 0050B764 (ctor); ret: pop {r4,pc}.
 * Confidence: high. */
#include "robust.h"

void *func_0010BAB4(uint32_t size);
void *func_0050B788(char *self, void *params);

void *func_0060B2A0(void *params) {
    char *mem = func_0010BAB4(0x484);
    if (mem == 0)
        return 0;
    return func_0050B788(mem, params);
}
