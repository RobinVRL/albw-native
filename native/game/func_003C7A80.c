/* USA 003C7A80 (EU 003C7A5C): file stream Seek(this, s64 offset, s32 origin) ->
 * 003C9D1C(this + 8, offset, origin).
 * Native fix of the matched source (src/work7/gpt18/func_003C7A80_nw.cpp): it declares
 * (void*, long long, s32), which on i386 puts the offset right after `this`; callers
 * decompiled from ARM pass the ARM register layout (r0 this, r1 unused, r2:r3 offset, stack
 * origin), e.g. 003CE5EC. Declared here with that layout. Confidence: high. */
#include <stdint.h>

int32_t func_003C9D1C(void *file, uint32_t pad, uint32_t off_lo, uint32_t off_hi, int32_t origin); /* ARM layout too */

int32_t func_003C7A80(uint8_t *self, uint32_t pad, uint32_t off_lo, uint32_t off_hi, int32_t origin)
{
    return func_003C9D1C(self + 8, 0, off_lo, off_hi, origin);
}
