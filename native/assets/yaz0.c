/* Yaz0: a group byte gives 8 flags (MSB first): 1 = copy one literal byte, 0 = back-reference.
 * Back-reference: 2 bytes "N D D D" (nibble N, 12-bit distance-1); N = 0 means a third byte
 * holds length-0x12, else length = N + 2. */
#include "yaz0.h"
#include <stdlib.h>
#include <string.h>

int yaz0_is(const uint8_t *s, size_t n) { return n >= 16 && !memcmp(s, "Yaz0", 4); }

size_t yaz0_size(const uint8_t *s, size_t n) {
    if (!yaz0_is(s, n)) return 0;
    return (size_t)((uint32_t)s[4] << 24 | (uint32_t)s[5] << 16 | (uint32_t)s[6] << 8 | s[7]);
}

int yaz0_decompress(const uint8_t *src, size_t n, uint8_t *dst, size_t dst_size) {
    if (!yaz0_is(src, n)) return -1;
    size_t si = 16, di = 0;
    uint32_t group = 0, bits = 0;
    while (di < dst_size) {
        if (!bits) {
            if (si >= n) return -1;
            group = src[si++];
            bits = 8;
        }
        if (group & 0x80) {
            if (si >= n) return -1;
            dst[di++] = src[si++];
        } else {
            if (si + 2 > n) return -1;
            uint32_t b0 = src[si], b1 = src[si + 1];
            si += 2;
            size_t dist = ((b0 & 0xF) << 8 | b1) + 1, len = b0 >> 4;
            if (!len) {
                if (si >= n) return -1;
                len = (size_t)src[si++] + 0x12;
            } else {
                len += 2;
            }
            if (dist > di) return -1;
            if (len > dst_size - di) len = dst_size - di;
            for (size_t k = 0; k < len; k++, di++) dst[di] = dst[di - dist];
        }
        group <<= 1;
        bits--;
    }
    return 0;
}

uint8_t *yaz0_decompress_alloc(const uint8_t *src, size_t n, size_t *out_size) {
    size_t sz = yaz0_size(src, n);
    if (!sz) return NULL;
    uint8_t *d = malloc(sz + 1);
    if (!d) return NULL;
    if (yaz0_decompress(src, n, d, sz)) {
        free(d);
        return NULL;
    }
    d[sz] = 0;
    if (out_size) *out_size = sz;
    return d;
}
