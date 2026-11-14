/* USA 003C91C0 (EU 003C919C): nn::fs file object (vtable 006EFAFC) vtable[1] Write: forwards to the fs:USER
 * wrapper 003C9B08 (native in sdk/fs.c) with the object's handle (00561354 = getHandle).
 * Native fix of the Ghidra decompilation: Ghidra typed it void, but the wrapper's Result is
 * returned in r0 (EU 003C919C ends with the call then pop pc), and callers test it (e.g. 0010DC6C
 * checks the read result).  Confidence: high. */
#include <stdint.h>

uint32_t func_00561354(void *self);
int32_t func_003C9B08(const uint32_t *h, uint32_t *out, uint32_t lo, uint32_t hi, const void *buf, uint32_t size, uint32_t flags);

/* flush: bool; the WriteOption word is flush in byte 0 and byte 2 (as built in EU 003C91B8..003C9200) */
int32_t func_003C91C0(void *self, uint32_t *out_written, uint32_t off_lo, uint32_t off_hi, const void *buf, uint32_t size, uint32_t flush)
{
    uint32_t f = flush & 0xff;
    uint32_t h = func_00561354(self);
    return func_003C9B08(&h, out_written, off_lo, off_hi, buf, size, f | f << 16);
}
