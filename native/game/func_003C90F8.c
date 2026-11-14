/* USA 003C90F8 (EU 003C90D4): nn::fs file object (vtable 006EFAFC) vtable[0] Read: forwards to the fs:USER
 * wrapper 003C9A84 (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 003C90D4 ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9A84(const uint32_t *h, uint32_t *out, uint32_t lo, uint32_t hi, void *buf, uint32_t size);

int32_t func_003C90F8(void *self, uint32_t *out_read, uint32_t off_lo, uint32_t off_hi, void *buf, uint32_t size)
{
    uint32_t h = func_00561354(self);
    return func_003C9A84(&h, out_read, off_lo, off_hi, buf, size);
}
