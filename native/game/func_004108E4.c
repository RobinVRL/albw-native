/* USA 004108E4 (EU 004108C4): nw::snd cached file stream Read(this, buf, size), vtable +0x24.
 * Fields: +0x14 the underlying file stream, +0x18 cache buffer, +0x1C cache size, +0x20 file
 * offset of the cached block (-1 = none), +0x24 current position; vtable +0x54 = Tell.
 *   - no cache: tail call file->Read(buf, size);
 *   - [pos, pos + size) inside the cached block: copy from the cache;
 *   - else file->Seek(pos, 0), base = Tell(), then either fill the cache (size <= cache size:
 *     file->Read(cache, cache size), copy size bytes out) or read straight into buf and keep its
 *     first cache-size bytes in the cache; a negative Read result sets base = -1 and is returned.
 * Native rewrite from the disassembly (EU 004108C4..00410A0C): the Ghidra text lost r2 (the
 * length) of the uncached tail call and of the cache fill (`(*vt[0x24])(file, buf)`), so reads
 * of the stream header returned 0 bytes, 00413124 failed and sound command 0x28 ran with no
 * stream object (boot stop 78b). Confidence: high. */
#include <stdint.h>

extern void func_001163A0(void *dst, const void *src, uint32_t n);  /* memcpy */

typedef int32_t (*ReadFn)(void *file, void *buf, uint32_t n);
typedef void (*SeekFn)(void *file, int32_t off, int32_t origin);
typedef int32_t (*TellFn)(void *self);

#define W(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define PTR(v) ((void *)(uintptr_t)(v))
#define VFN(obj, off) PTR(W(PTR(W(obj, 0)), off))

int32_t func_004108E4(void *self, void *buf, uint32_t size)
{
    void *file = PTR(W(self, 0x14));
    uint32_t cache = W(self, 0x18), csize = W(self, 0x1C);
    if (cache == 0 || csize == 0)
        return ((ReadFn)VFN(file, 0x24))(file, buf, size);

    int32_t base = (int32_t)W(self, 0x20);
    uint32_t pos = W(self, 0x24);
    if (base >= 0 && (int32_t)pos >= base && (uint32_t)base + csize >= pos + size) {
        func_001163A0(buf, PTR(pos - (uint32_t)base + cache), size);
        W(self, 0x24) = pos + size;
        return (int32_t)size;
    }
    ((SeekFn)VFN(file, 0x40))(file, (int32_t)pos, 0);
    W(self, 0x20) = (uint32_t)((TellFn)VFN(self, 0x54))(self);
    int32_t r;
    if (csize >= size) {
        r = ((ReadFn)VFN(file, 0x24))(file, PTR(cache), csize);
        if (r >= 0) func_001163A0(buf, PTR(cache), size);
    } else {
        r = ((ReadFn)VFN(file, 0x24))(file, buf, size);
        if (r >= 0) func_001163A0(PTR(cache), buf, csize);
    }
    if (r < 0) {
        W(self, 0x20) = 0xFFFFFFFFu;
        return r;
    }
    W(self, 0x24) += size;
    return (int32_t)size;
}
