/* USA 00606538 <- EU 00606510: factory for an actor of the 00150E40 family (vtable
 * data_006DA53C; SJIS-named "camera tag" event):
 *     obj = new(0x468); if (!obj) return NULL; return ctor(obj, params);     (tail call)
 * The constructor (EU 00298B6C) has no entry in the function map, so Ghidra inlined it; it is
 * reproduced here as a static helper:
 *     self = 00150E40(obj, params);                 (base ctor, returns this)
 *     self->vtbl = 006DA53C; self->[0x320] = 006DA53C + 0x54;
 *     clears +0x40C..+0x452 (byte [0x451] = 1), copies 3 words from data_007A9260 to +0x458,
 *     [0x464] = 0;
 *     self->[0x414] = new(0x11C) ? 002FCBCC(m, &SafeString(data_006A4644), self->[0x2CC], 0, 1)
 *                                : NULL;
 *     004ECF6C(self); return self;
 *
 * What was wrong: Ghidra typed the factory `void` (the original returns the ctor's r0 through
 * the tail call, or 0 when allocation fails) and marked 004ECF6C as "does not return" (a tail
 * call to 004CD7C8, which returns), so the converted code returned nothing. Its registered
 * factory-table callers (static initialiser 005CA324) use the returned pointer.
 * Constructors return this (ARM C++ ABI); 002FCBCC is typed void natively, so the allocated
 * pointer is stored. `mov r1, r5` before operator new is a phantom argument.
 * Verified against EU 00606510-00606534 and 00298B6C-00298C38.
 * Confidence: high. */
#include "robust.h"
#include "sead.h"

void *func_0010BAB4(uint32_t size);   /* operator new (native/sdk/memory.c) */
void *func_00150E40(void *self, void *params);
void func_002FCBCC(void *self, const sead_SafeString *name, void *a2, uint8_t a3, uint8_t a4);
void func_004ECF6C(void *self);

extern char data_006DA53C[];        /* vtable */
extern const uint32_t data_007A9260[3];
extern const char data_006A4644[];  /* SJIS name */
extern char data_006F5988[];        /* sead::SafeString vtable */

static char *cam_ctor(char *self, void *params) {
    func_00150E40(self, params);
    FLD(self, 0x000, char *) = data_006DA53C;
    FLD(self, 0x320, char *) = data_006DA53C + 0x54;
    int off;
    for (off = 0x40C; off <= 0x411; off++)
        FLD(self, off, uint8_t) = 0;
    FLD(self, 0x414, uint32_t) = 0;
    FLD(self, 0x418, uint32_t) = 0;
    FLD(self, 0x41C, uint32_t) = 0;
    FLD(self, 0x424, uint32_t) = 0;
    FLD(self, 0x428, uint32_t) = 0;
    FLD(self, 0x44C, uint32_t) = 0;
    FLD(self, 0x450, uint8_t) = 0;
    FLD(self, 0x451, uint8_t) = 1;
    FLD(self, 0x452, uint8_t) = 0;
    memcpy(AT(self, 0x458), data_007A9260, 12);
    FLD(self, 0x464, uint32_t) = 0;
    void *m = func_0010BAB4(0x11C);
    if (m) {
        sead_SafeString name = {data_006F5988, data_006A4644};
        func_002FCBCC(m, &name, FLD(self, 0x2CC, void *), 0, 1);
    }
    FLD(self, 0x414, void *) = m;
    func_004ECF6C(self);
    return self;
}

char *func_00606538(void *params) {
    char *obj = func_0010BAB4(0x468);
    if (!obj)
        return NULL;
    return cam_ctor(obj, params);
}
