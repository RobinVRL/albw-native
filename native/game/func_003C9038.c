/* USA 003C9038 (EU 003C9014): nn::fs file object (vtable 006EFAFC) vtable[6] SetPriority: forwards to the fs:USER
 * wrapper 003C9A1C (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 003C9014 ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9A1C(const uint32_t *h, uint32_t priority);

int32_t func_003C9038(void *self, uint32_t priority)
{
    uint32_t h = func_00561354(self);
    return func_003C9A1C(&h, priority);
}
