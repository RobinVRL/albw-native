/* USA 003C854C (EU 003C8528): nn::fs RomFS archive: OpenFile(archive, IFile **out, const
 * FsPath *path {u32 type (4 = UTF-16), const u16 *str, u32 size}, mode) -> Result.
 *
 * Archive object (built by 0010F240, 32-bit layout): +0x04 base file object, +0x20 directory
 * table helper (+0x28 bucket count), +0x48 file table helper (+0x50 bucket count), table
 * descriptors {ptr, size, 0, owner} at +0x70 dir hash, +0x80 dir meta, +0x90 file hash,
 * +0xA0 file meta, +0xB0 u32 offset of the file data region, +0xB8 file-object pool.
 * Lookup = the standard RomFS level-3 scheme: walk the path from the root directory
 * (offset 0); every name is found through its hash bucket
 *   h = parent ^ 123456789; for each UTF-16 unit c: h = ror(h, 5) ^ c; bucket = h % count
 * and the entry's chain (dir entry: parent, sibling, child, file, next-in-bucket, name len,
 * name; file entry: parent, sibling, u64 offset, u64 size, next-in-bucket, name len, name).
 * The file object (pool 0010FB48, vtable 006EFA48) gets {vtable, archive, u64 start, u64 end,
 * archive+4}; then its vtable+0x18 (init with the base file) runs, as in the original.
 * Results as the original: not found 0xC8804470, pool empty 0xD8604659.
 *
 * Rewritten by meaning from the EU disassembly: the Ghidra version kept the found entry's
 * offset/size in unaffected registers (unaff_r4/r5/r8) and returned NotFound natively for
 * "rom:/World/Sound/Jack.bcsar", which exists. Directory open (vtable +4) is separate.
 * Confidence: high (RomFS format; object layout read from 003C854C and a live archive). */
#include <stdint.h>

#define RES_NOT_FOUND 0xC8804470u
#define RES_NO_MEMORY 0xD8604659u
#define EMPTY 0xFFFFFFFFu

extern uint32_t data_006EFA48[];
void *func_0010FB48(void *pool);

#define U32(p, o) (*(const uint32_t *)((const uint8_t *)(p) + (o)))
#define PTR(v) ((const uint8_t *)(uintptr_t)(v))

static uint32_t name_hash(uint32_t parent, const uint16_t *s, uint32_t n)
{
    uint32_t h = parent ^ 123456789u;
    for (uint32_t i = 0; i < n; i++)
        h = ((h >> 5) | (h << 27)) ^ s[i];
    return h;
}

static int name_eq(const uint8_t *entry_name, uint32_t len_bytes, const uint16_t *s, uint32_t n)
{
    if (len_bytes != n * 2)
        return 0;
    for (uint32_t i = 0; i < n; i++)
        if ((uint16_t)(entry_name[2 * i] | entry_name[2 * i + 1] << 8) != s[i])
            return 0;
    return 1;
}

/* find a child directory (dir=1) or file (dir=0) of `parent` named s[0..n) */
static uint32_t lookup(const uint8_t *arch, int dir, uint32_t parent, const uint16_t *s, uint32_t n)
{
    const uint8_t *hash = PTR(U32(arch, dir ? 0x70 : 0x90));
    uint32_t hsize = U32(arch, dir ? 0x74 : 0x94);
    const uint8_t *meta = PTR(U32(arch, dir ? 0x80 : 0xA0));
    uint32_t msize = U32(arch, dir ? 0x84 : 0xA4);
    uint32_t buckets = hsize / 4;
    if (!buckets)
        return EMPTY;
    uint32_t off = U32(hash, 4 * (name_hash(parent, s, n) % buckets));
    uint32_t next_at = dir ? 0x10 : 0x1C, name_at = dir ? 0x18 : 0x20;
    while (off != EMPTY && off + name_at <= msize) {
        const uint8_t *e = meta + off;
        if (U32(e, 0) == parent && name_eq(e + name_at, U32(e, name_at - 4), s, n))
            return off;
        off = U32(e, next_at);
    }
    return EMPTY;
}

uint32_t func_003C854C(uint8_t *arch, uint32_t *out_file, const uint32_t *path, uint32_t mode)
{
    const uint16_t *p = path[0] == 4 ? (const uint16_t *)(uintptr_t)path[1] : 0;
    if (!p)
        return RES_NOT_FOUND;
    uint32_t parent = 0;   /* root directory */
    uint32_t file = EMPTY;
    for (;;) {
        while (*p == '/')
            p++;
        const uint16_t *start = p;
        while (*p && *p != '/')
            p++;
        uint32_t n = (uint32_t)(p - start);
        if (*p == '/') {
            uint32_t d = lookup(arch, 1, parent, start, n);
            if (d == EMPTY)
                return RES_NOT_FOUND;
            parent = d;
            continue;
        }
        if (n == 0)
            return RES_NOT_FOUND;
        file = lookup(arch, 0, parent, start, n);
        break;
    }
    if (file == EMPTY)
        return RES_NOT_FOUND;
    const uint8_t *e = PTR(U32(arch, 0xA0)) + file;
    uint64_t off = (uint64_t)U32(e, 8) | (uint64_t)U32(e, 12) << 32;
    uint64_t size = (uint64_t)U32(e, 16) | (uint64_t)U32(e, 20) << 32;
    uint64_t start = off + U32(arch, 0xB0);
    uint64_t end = start + size;

    uint32_t *f = func_0010FB48(arch + 0xB8);
    *out_file = (uint32_t)(uintptr_t)f;
    if (!f)
        return RES_NO_MEMORY;
    f[0] = (uint32_t)(uintptr_t)data_006EFA48;
    f[1] = (uint32_t)(uintptr_t)arch;
    f[2] = (uint32_t)start;
    f[3] = (uint32_t)(start >> 32);
    f[4] = (uint32_t)end;
    f[5] = (uint32_t)(end >> 32);
    f[6] = U32(arch, 4);
    typedef int32_t (*InitFn)(uint32_t *self, uint32_t base);
    typedef void (*CloseFn)(uint32_t *self);
    const uint32_t *vt = (const uint32_t *)(uintptr_t)f[0];
    int32_t r = ((InitFn)(uintptr_t)vt[0x18 / 4])(f, U32(arch, 4));
    if (r < 0) {
        ((CloseFn)(uintptr_t)vt[0x30 / 4])(f);
        *out_file = 0;
        return (uint32_t)r;
    }
    return 0;
}
