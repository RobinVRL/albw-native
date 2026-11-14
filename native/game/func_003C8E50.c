/* USA 003C8E50 (EU 003C8E2C): nn::fs archive CreateFile(archive, const FsPath *path {type,
 * str, size}, u64 size (r2:r3)) -> Result: path size > 0x200 -> E0E046BF; else fs:USER
 * CreateFile (003C96B8, native in sdk/fs.c) on the archive handle (archive+8, u64) with the
 * path and size. Native fix of the Ghidra decompilation: typed void, so the Result was lost
 * (callers such as 003CE6EC then saw garbage and threw a fatal error on some runs).
 * Confidence: high. */
#include <stdint.h>

uint32_t func_0056130C(void *self);
int32_t func_003C96B8(const uint32_t *session, uint32_t transaction, uint32_t archive_lo,
                      uint32_t archive_hi, uint32_t path_type, const void *path, uint32_t path_size,
                      uint32_t attributes, uint32_t size_lo, uint32_t size_hi);

int32_t func_003C8E50(uint8_t *archive, const uint32_t *path, uint32_t size_lo, uint32_t size_hi)
{
    if (path[2] > 0x200)
        return (int32_t)0xE0E046BFu;
    uint32_t session = func_0056130C(archive);
    return func_003C96B8(&session, 0, *(uint32_t *)(archive + 8), *(uint32_t *)(archive + 0xC),
                         path[0], (const void *)(uintptr_t)path[1], path[2], 0, size_lo, size_hi);
}
