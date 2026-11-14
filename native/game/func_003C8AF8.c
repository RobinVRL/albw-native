/* USA 003C8AF8 (EU 003C8AD4): nn::fs OpenDirectory(Directory *out, const wchar16 *path) ->
 * Result: archive = mount lookup (006761A0) of the name before ':' (none -> 0xC8804465),
 * archive->openDirectory(&dir, {4 (UTF-16), path after ':', bytes incl. NUL}) (vtable +4),
 * *out = dir on success. Native fix of the Ghidra decompilation: typed void, the Result was
 * lost (sead's isExistFile 00499974 decides on it). Confidence: high. */
#include <stdint.h>

void *func_006761A0(const uint16_t *path);
uint32_t func_00100910(const uint16_t *s);   /* wcslen */

int32_t func_003C8AF8(uint32_t *out, const uint16_t *path)
{
    uint32_t *archive = func_006761A0(path);
    if (!archive)
        return (int32_t)0xC8804465u;
    const uint16_t *p = path;
    while (*p++ != ':') {}
    uint32_t desc[3] = { 4, (uint32_t)(uintptr_t)p, (func_00100910(p) + 1) * 2 };
    uint32_t dir = 0;
    typedef int32_t (*OpenDirFn)(uint32_t *archive, uint32_t *out, uint32_t *desc);
    int32_t r = ((OpenDirFn)(uintptr_t)((uint32_t *)(uintptr_t)archive[0])[1])(archive, &dir, desc);
    if (r >= 0)
        *out = dir;
    return r;
}
