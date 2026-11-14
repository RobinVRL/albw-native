/* SARC layout:
 *   "SARC" u16 header size (0x14) u16 BOM (FEFF read as BE = big endian) u32 file size
 *          u32 data offset u16 version u16 pad
 *   "SFAT" u16 header size (0xC) u16 node count u32 hash key (0x65)
 *          nodes: u32 name hash, u32 attr (0x01000000 | name offset/4 when named),
 *                 u32 data begin, u32 data end (relative to the data offset)
 *   "SFNT" u16 header size u16 pad, then the NUL-terminated names (4-aligned) */
#include "sarc.h"
#include <stdlib.h>
#include <string.h>

static uint32_t r32(const uint8_t *p, int be) {
    return be ? (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3]
              : (uint32_t)p[3] << 24 | (uint32_t)p[2] << 16 | (uint32_t)p[1] << 8 | p[0];
}
static uint32_t r16(const uint8_t *p, int be) {
    return be ? (uint32_t)p[0] << 8 | p[1] : (uint32_t)p[1] << 8 | p[0];
}

int sarc_is(const uint8_t *b, size_t n) { return n >= 0x20 && !memcmp(b, "SARC", 4); }

uint32_t sarc_hash(const char *name, uint32_t key) {
    uint32_t h = 0;
    for (const unsigned char *p = (const unsigned char *)name; *p; p++) h = h * key + (int8_t)*p;
    return h;
}

int sarc_open(Sarc *s, const uint8_t *b, size_t n) {
    memset(s, 0, sizeof *s);
    if (!sarc_is(b, n)) return -1;
    int be = b[6] == 0xFE;
    uint32_t hsz = r16(b + 4, be), data = r32(b + 12, be);
    if (hsz + 12 > n || memcmp(b + hsz, "SFAT", 4)) return -1;
    const uint8_t *fat = b + hsz;
    uint32_t cnt = r16(fat + 6, be), key = r32(fat + 8, be);
    size_t nodes = hsz + r16(fat + 4, be);
    size_t sfnt = nodes + (size_t)cnt * 16;
    if (sfnt + 8 > n || memcmp(b + sfnt, "SFNT", 4) || data > n) return -1;
    size_t names = sfnt + r16(b + sfnt + 4, be);
    s->files = calloc(cnt ? cnt : 1, sizeof *s->files);
    if (!s->files) return -1;
    for (uint32_t i = 0; i < cnt; i++) {
        const uint8_t *e = b + nodes + i * 16;
        uint32_t attr = r32(e + 4, be), beg = r32(e + 8, be), end = r32(e + 12, be);
        if (end < beg || data + (size_t)end > n) {
            sarc_close(s);
            return -1;
        }
        SarcFile *f = &s->files[i];
        f->hash = r32(e, be);
        f->data = b + data + beg;
        f->size = end - beg;
        if (attr >> 24) {
            size_t no = names + (size_t)(attr & 0xFFFFFF) * 4;
            if (no < data && memchr(b + no, 0, data - no)) f->name = (const char *)b + no;
        }
    }
    s->buf = b;
    s->size = n;
    s->big_endian = be;
    s->hash_key = key;
    s->count = cnt;
    return 0;
}

void sarc_close(Sarc *s) {
    free(s->files);
    memset(s, 0, sizeof *s);
}

const SarcFile *sarc_find(const Sarc *s, const char *name) {
    while (*name == '/') name++;
    uint32_t h = sarc_hash(name, s->hash_key);
    for (size_t i = 0; i < s->count; i++)
        if (s->files[i].hash == h && (!s->files[i].name || !strcmp(s->files[i].name, name)))
            return &s->files[i];
    return NULL;
}
