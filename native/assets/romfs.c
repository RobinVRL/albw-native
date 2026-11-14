/* RomFS level-3 reader (see romfs.h).
 *
 * Level-3 header (10 x u32 at the start of the level-3 image):
 *   0 header size (0x28)   1 dir hash off   2 dir hash size   3 dir meta off   4 dir meta size
 *   5 file hash off        6 file hash size 7 file meta off   8 file meta size 9 file data off
 * Directory metadata entry: parent, next sibling, first child dir, first file, next in hash
 *   bucket, name length in bytes, UTF-16LE name (padded to 4).
 * File metadata entry: parent, next sibling, u64 data offset (relative to file data), u64 size,
 *   next in hash bucket, name length in bytes, UTF-16LE name (padded to 4).
 * 0xFFFFFFFF = no entry.  The tree is walked once; lookups use binary search on the sorted
 * path table, so the hash tables are not needed. */
#define _GNU_SOURCE
#include "romfs.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define ROM_DEFAULT_PATH \
    "/path/to/your/" \
    "(En,Fr,De,Es,It) Decrypted.3ds"
#define NONE 0xFFFFFFFFu

static int rom_fd = -1;
static RomfsFile *files;
static size_t nfiles, capfiles;
static char *names;            /* one block holding every path */
static size_t names_len, names_cap;

static uint32_t rd32(const uint8_t *p) {
    return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}
static uint64_t rd64(const uint8_t *p) { return (uint64_t)rd32(p) | (uint64_t)rd32(p + 4) << 32; }

static int read_exact(int fd, void *buf, size_t n, uint64_t off) {
    uint8_t *b = buf;
    while (n) {
        ssize_t r = pread(fd, b, n, (off_t)off);
        if (r <= 0) {
            if (r < 0 && errno == EINTR) continue;
            return -1;
        }
        b += r;
        n -= (size_t)r;
        off += (uint64_t)r;
    }
    return 0;
}

/* UTF-16LE -> UTF-8 appended to buf (cap includes the NUL) */
static size_t utf16_to_utf8(const uint8_t *s, uint32_t bytes, char *out, size_t cap) {
    size_t n = 0;
    for (uint32_t i = 0; i + 1 < bytes; i += 2) {
        uint32_t c = (uint32_t)s[i] | (uint32_t)s[i + 1] << 8;
        if (c >= 0xD800 && c < 0xDC00 && i + 3 < bytes) {
            uint32_t c2 = (uint32_t)s[i + 2] | (uint32_t)s[i + 3] << 8;
            c = 0x10000 + ((c - 0xD800) << 10) + (c2 - 0xDC00);
            i += 2;
        }
        char tmp[4];
        size_t k;
        if (c < 0x80) { tmp[0] = (char)c; k = 1; }
        else if (c < 0x800) { tmp[0] = (char)(0xC0 | c >> 6); tmp[1] = (char)(0x80 | (c & 63)); k = 2; }
        else if (c < 0x10000) {
            tmp[0] = (char)(0xE0 | c >> 12); tmp[1] = (char)(0x80 | ((c >> 6) & 63));
            tmp[2] = (char)(0x80 | (c & 63)); k = 3;
        } else {
            tmp[0] = (char)(0xF0 | c >> 18); tmp[1] = (char)(0x80 | ((c >> 12) & 63));
            tmp[2] = (char)(0x80 | ((c >> 6) & 63)); tmp[3] = (char)(0x80 | (c & 63)); k = 4;
        }
        if (n + k + 1 > cap) break;
        memcpy(out + n, tmp, k);
        n += k;
    }
    out[n] = 0;
    return n;
}

typedef struct {
    const uint8_t *dmeta, *fmeta;
    uint32_t dsize, fsize;
    uint64_t data_base;
} Tree;

static size_t add_name(const char *s) {
    size_t len = strlen(s) + 1;
    if (names_len + len > names_cap) {
        names_cap = (names_cap + len) * 2;
        char *nn = realloc(names, names_cap);
        if (!nn) abort();
        names = nn;
    }
    memcpy(names + names_len, s, len);
    names_len += len;
    return names_len - len;
}

static int walk(const Tree *t, uint32_t dir, const char *prefix, int depth) {
    if (depth > 64 || dir + 0x18 > t->dsize) return -1;
    const uint8_t *d = t->dmeta + dir;
    char path[1024], name[512];
    for (uint32_t f = rd32(d + 12); f != NONE;) {
        if (f + 0x20 > t->fsize) return -1;
        const uint8_t *e = t->fmeta + f;
        uint32_t nl = rd32(e + 0x1C);
        if (f + 0x20 + nl > t->fsize) return -1;
        utf16_to_utf8(e + 0x20, nl, name, sizeof name);
        snprintf(path, sizeof path, "%s%s%s", prefix, *prefix ? "/" : "", name);
        if (nfiles == capfiles) {
            capfiles = capfiles ? capfiles * 2 : 1024;
            RomfsFile *nf = realloc(files, capfiles * sizeof *files);
            if (!nf) abort();
            files = nf;
        }
        /* path stored as an offset for now (names may move on realloc) */
        files[nfiles].path = (const char *)(uintptr_t)add_name(path);
        files[nfiles].offset = t->data_base + rd64(e + 8);
        files[nfiles].size = rd64(e + 16);
        nfiles++;
        f = rd32(e + 4);
    }
    for (uint32_t c = rd32(d + 8); c != NONE;) {
        if (c + 0x18 > t->dsize) return -1;
        const uint8_t *e = t->dmeta + c;
        uint32_t nl = rd32(e + 0x14);
        if (c + 0x18 + nl > t->dsize) return -1;
        utf16_to_utf8(e + 0x18, nl, name, sizeof name);
        snprintf(path, sizeof path, "%s%s%s", prefix, *prefix ? "/" : "", name);
        if (walk(t, c, path, depth + 1)) return -1;
        c = rd32(e + 4);
    }
    return 0;
}

static int cmp_file(const void *a, const void *b) {
    return strcmp(((const RomfsFile *)a)->path, ((const RomfsFile *)b)->path);
}

int romfs_open(const char *path) {
    if (rom_fd >= 0) return 0;
    if (!path) path = getenv("ALBW_ROM");
    if (!path || !*path) path = ROM_DEFAULT_PATH;
    int fd = open(path, O_RDONLY | O_CLOEXEC);
    if (fd < 0) {
        fprintf(stderr, "romfs: cannot open '%s': %s\n", path, strerror(errno));
        return -1;
    }
    uint8_t h[0x200], n[0x200], iv[0x60], l3h[0x28];
    uint64_t ncch;
    if (read_exact(fd, h, sizeof h, 0)) goto bad;
    if (!memcmp(h + 0x100, "NCSD", 4)) ncch = (uint64_t)rd32(h + 0x120) * 0x200;
    else if (!memcmp(h + 0x100, "NCCH", 4)) ncch = 0;
    else goto bad;
    if (read_exact(fd, n, sizeof n, ncch) || memcmp(n + 0x100, "NCCH", 4)) goto bad;
    uint64_t romfs = ncch + (uint64_t)rd32(n + 0x1B0) * 0x200;
    if (read_exact(fd, iv, sizeof iv, romfs) || memcmp(iv, "IVFC", 4)) goto bad;
    uint32_t master = rd32(iv + 8), l3_log2 = rd32(iv + 0x4C);
    if (l3_log2 < 4 || l3_log2 > 24) goto bad;
    uint64_t blk = (uint64_t)1 << l3_log2;
    uint64_t l3 = romfs + ((0x60 + (uint64_t)master + blk - 1) & ~(blk - 1));
    if (read_exact(fd, l3h, sizeof l3h, l3) || rd32(l3h) != 0x28) goto bad;
    Tree t;
    t.dsize = rd32(l3h + 16);
    t.fsize = rd32(l3h + 32);
    uint8_t *dm = malloc(t.dsize), *fm = malloc(t.fsize);
    if (!dm || !fm || read_exact(fd, dm, t.dsize, l3 + rd32(l3h + 12)) ||
        read_exact(fd, fm, t.fsize, l3 + rd32(l3h + 28))) {
        free(dm);
        free(fm);
        goto bad;
    }
    t.dmeta = dm;
    t.fmeta = fm;
    t.data_base = l3 + rd32(l3h + 36);
    int r = walk(&t, 0, "", 0);
    free(dm);
    free(fm);
    if (r) goto bad;
    for (size_t i = 0; i < nfiles; i++) files[i].path = names + (uintptr_t)files[i].path;
    qsort(files, nfiles, sizeof *files, cmp_file);
    rom_fd = fd;
    return 0;
bad:
    fprintf(stderr, "romfs: '%s' is not a decrypted NCSD/NCCH image with a RomFS\n", path);
    close(fd);
    nfiles = 0;
    return -1;
}

void romfs_close(void) {
    if (rom_fd >= 0) close(rom_fd);
    rom_fd = -1;
    free(files);
    free(names);
    files = NULL;
    names = NULL;
    nfiles = capfiles = names_len = names_cap = 0;
}

size_t romfs_count(void) { return nfiles; }
const RomfsFile *romfs_file(size_t i) { return i < nfiles ? &files[i] : NULL; }

const RomfsFile *romfs_find(const char *path) {
    while (*path == '/') path++;
    size_t lo = 0, hi = nfiles;
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        int c = strcmp(files[mid].path, path);
        if (!c) return &files[mid];
        if (c < 0) lo = mid + 1; else hi = mid;
    }
    return NULL;
}

int romfs_read_at(const RomfsFile *f, uint64_t off, void *dst, size_t n) {
    if (rom_fd < 0 || off > f->size || n > f->size - off) return -1;
    return read_exact(rom_fd, dst, n, f->offset + off);
}

uint8_t *romfs_read(const char *path, size_t *size_out) {
    const RomfsFile *f = romfs_find(path);
    if (!f || f->size > (uint64_t)(SIZE_MAX - 1)) return NULL;
    uint8_t *b = malloc((size_t)f->size + 1);
    if (!b) return NULL;
    if (romfs_read_at(f, 0, b, (size_t)f->size)) {
        free(b);
        return NULL;
    }
    b[f->size] = 0;
    if (size_out) *size_out = (size_t)f->size;
    return b;
}
