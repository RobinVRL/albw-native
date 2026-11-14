/* USA 00494374 (EU 0049434C): archive file device doLoad_(this, LoadArg *arg) -> data:
 *   no archive (this+0x50) -> NULL;
 *   arg->buffer (+8) or arg->heap (+0x10) given -> the generic FileDevice::doLoad_ (00489D04:
 *   open, allocate, read, close);
 *   else no copy: archive->getFile(arg, &info) (vtable +0x1C) returns the file's data inside
 *   the archive; arg+0x1C = arg+0x20 = size (info[1]), arg+0x24 = 0 (not owned).
 * Native fix of the Ghidra decompilation: typed void, both results were lost (the resource
 * loader then parsed a garbage pointer). Rewritten from the EU disassembly. Confidence: high. */
#include <stdint.h>

void *func_00489D04(void *device, uint8_t *arg);

void *func_00494374(uint8_t *self, uint8_t *arg)
{
    uint32_t *archive = (uint32_t *)(uintptr_t)*(uint32_t *)(self + 0x50);
    if (!archive)
        return 0;
    if (*(uint32_t *)(arg + 8) || *(uint32_t *)(arg + 0x10))
        return func_00489D04(self, arg);
    uint32_t info[2] = {0, 0};
    typedef void *(*GetFileFn)(uint32_t *archive, uint8_t *arg, uint32_t *info);
    void *data = ((GetFileFn)(uintptr_t)((uint32_t *)(uintptr_t)archive[0])[0x1C / 4])(archive, arg, info);
    if (!data)
        return 0;
    *(uint32_t *)(arg + 0x1C) = info[1];
    arg[0x24] = 0;
    *(uint32_t *)(arg + 0x20) = info[1];
    return data;
}
