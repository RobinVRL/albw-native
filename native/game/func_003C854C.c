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
 * "rom:/World/Sound/Jack.bcsar", which exists.
 * Also here: USA 003C8238 (EU 003C8214) OpenDirectory (vtable +4), same lookup: a directory
 * -> dir object {vtable 006EFA8C, archive, first child dir, first file, archive+4}; a FILE at
 * that path -> 0xE0C04702 (sead's isExistFile 00499974 relies on this to try the file next);
 * nothing -> 0xC8804471. (The decompiled table lookups 0068F1B8/0068F3E4 fail natively.)
 * Confidence: high (RomFS format; object layout read from 003C854C and a live archive). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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
    uint32_t next_at = dir ? 0x10 : 0x18, name_at = dir ? 0x18 : 0x20;   /* hash-chain link; file entry: +0x18 (+0x1C is the name length) */
    while (off != EMPTY && off + name_at <= msize) {
        const uint8_t *e = meta + off;
        if (U32(e, 0) == parent && name_eq(e + name_at, U32(e, name_at - 4), s, n))
            return off;
        off = U32(e, next_at);
    }
    return EMPTY;
}

/* resolve a UTF-16 path: returns 1 dir / 2 file / 0 none, *off = entry offset */
static int resolve(const uint8_t *arch, const uint16_t *p, uint32_t *off)
{
    uint32_t parent = 0;
    for (;;) {
        while (*p == '/')
            p++;
        const uint16_t *start = p;
        while (*p && *p != '/')
            p++;
        uint32_t n = (uint32_t)(p - start);
        if (n == 0) { *off = parent; return 1; }           /* "" or trailing '/': the dir itself */
        uint32_t d = lookup(arch, 1, parent, start, n);
        if (*p == '/') {
            if (d == EMPTY) return 0;
            parent = d;
            continue;
        }
        if (d != EMPTY) { *off = d; return 1; }
        uint32_t f = lookup(arch, 0, parent, start, n);
        if (f == EMPTY) return 0;
        *off = f;
        return 2;
    }
}

extern uint32_t data_006EFA8C[];

uint32_t func_003C8238(uint8_t *arch, uint32_t *out_dir, const uint32_t *path)
{
    const uint16_t *p = path[0] == 4 ? (const uint16_t *)(uintptr_t)path[1] : 0;
    uint32_t off;
    int kind = p ? resolve(arch, p, &off) : 0;
    if (kind == 0)
        return 0xC8804471u;
    if (kind == 2)
        return 0xE0C04702u;
    const uint8_t *e = PTR(U32(arch, 0x80)) + off;   /* dir entry: parent, sibling, child, file */
    uint32_t *d = func_0010FB48(arch + 0xF4);
    *out_dir = (uint32_t)(uintptr_t)d;
    if (!d)
        return RES_NO_MEMORY;
    d[0] = (uint32_t)(uintptr_t)data_006EFA8C;
    d[1] = (uint32_t)(uintptr_t)arch;
    d[2] = U32(e, 8);
    d[3] = U32(e, 12);
    d[5] = U32(arch, 4);
    return 0;
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
    {   /* ALBW_FS_LOG=1: RomFS opens (the path, UTF-16 -> ASCII) */
        static int log = -1;
        if (log < 0) { const char *ev = getenv("ALBW_FS_LOG"); log = ev && *ev == '1'; }
        if (log) {
            char a[256]; int i = 0;
            for (const uint16_t *q = (const uint16_t *)(uintptr_t)path[1]; *q && i < 255; q++) a[i++] = (char)*q;
            a[i] = 0;
            fprintf(stderr, "[romfs] open %s%s\n", a, file == EMPTY ? " (not found)" : "");
        }
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
