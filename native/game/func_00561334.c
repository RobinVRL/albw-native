/* USA 00561334 (EU 0056130C): nn::fs file object (vtable 006EFAFC) vtable[3] GetSize: forwards to the fs:USER
 * wrapper 003C9B68 (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 0056130C ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9B68(const uint32_t *h, uint32_t *out_size);

int32_t func_00561334(void *self, uint32_t *out_size /* u64 */)
{
    uint32_t h = func_00561354(self);
    return func_003C9B68(&h, out_size);
}
