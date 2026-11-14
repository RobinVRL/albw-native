/* USA 003C8968 (EU 003C8944): nn::fs file Write helper (u32 *out_written, IFile *file,
 * u32 offset_lo, u32 offset_hi, const void *buf, u32 size, u32 flush) -> Result:
 * E0E046BC (invalid argument) if out/file/buf is NULL; 003C8DAC(0) (fs access pacing: an
 * artificial delay computed from the system tick); file->vtable[1](file, out, offset, buf,
 * size, flush) (003C91C0 -> fs:USER File::Write, native in sdk/fs.c).
 * No source existed (tripwire stub). Native: the access pacing is not reproduced (no delay).
 * Confidence: high. */
#include <stdint.h>

typedef int32_t (*WriteFn)(uint32_t *file, uint32_t *out, uint32_t lo, uint32_t hi,
                           const void *buf, uint32_t size, uint32_t flush);

int32_t func_003C8968(uint32_t *out, uint32_t *file, uint32_t lo, uint32_t hi, const void *buf,
                      uint32_t size, uint32_t flush)
{
    if (!out || !file || !buf)
        return (int32_t)0xE0E046BCu;
    const uint32_t *vt = (const uint32_t *)(uintptr_t)file[0];
    return ((WriteFn)(uintptr_t)vt[1])(file, out, lo, hi, buf, size, flush);
}
