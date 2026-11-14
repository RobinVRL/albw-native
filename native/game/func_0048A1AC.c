/* USA 0048A1AC (EU 0048A184): sead::FileHandle::read(handle, u8 *buf, u32 size) -> bytes read:
 * handle->device (+0x10) ? device->tryRead(&n, handle, buf, size) (00489F74), return n : 0.
 * Native fix of the Ghidra decompilation: its text had no return statement (a garbled
 * `return` type macro), so callers got garbage, e.g. the Yaz0 streaming loader 00492D98
 * stopped after two chunks and left the rest of the archive zero. Confidence: high. */
#include <stdint.h>

int32_t func_00489F74(void *device, uint32_t *out_read, void *handle, void *buf, uint32_t size);

uint32_t func_0048A1AC(uint8_t *handle, void *buf, uint32_t size)
{
    void *device = (void *)(uintptr_t)*(uint32_t *)(handle + 0x10);
    if (!device)
        return 0;
    uint32_t n = 0;
    func_00489F74(device, &n, handle, buf, size);
    return n;
}
