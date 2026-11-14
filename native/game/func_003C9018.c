/* USA 003C9018 (EU 003C8FF4): nn::fs file object (vtable 006EFAFC) vtable[9] OpenLinkFile: forwards to the fs:USER
 * wrapper 003C9A4C (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 003C8FF4 ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9A4C(const uint32_t *h, uint32_t *out_handle);

int32_t func_003C9018(void *self, uint32_t *out_handle)
{
    uint32_t h = func_00561354(self);
    return func_003C9A4C(&h, out_handle);
}
