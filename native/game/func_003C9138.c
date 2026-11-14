/* USA 003C9138 (EU 003C9114): nn::fs file object (vtable 006EFAFC) vtable[5] Flush (Write of 0 bytes with flush): forwards to the fs:USER
 * wrapper 003C9B08 (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 003C9114 ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9B08(const uint32_t *h, uint32_t *out, uint32_t lo, uint32_t hi, const void *buf, uint32_t size, uint32_t flags);

int32_t func_003C9138(void *self)
{
    uint32_t out = 0;
    uint32_t h = func_00561354(self);
    return func_003C9B08(&h, &out, 0, 0, &out, 0, 0x10001);
}
