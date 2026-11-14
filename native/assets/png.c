#include "png.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint32_t crc_table[256];
static uint32_t crc(uint32_t c, const uint8_t *p, size_t n) {
    if (!crc_table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t v = i;
            for (int k = 0; k < 8; k++) v = v & 1 ? 0xEDB88320u ^ (v >> 1) : v >> 1;
            crc_table[i] = v;
        }
    c = ~c;
    while (n--) c = crc_table[(c ^ *p++) & 0xFF] ^ (c >> 8);
    return ~c;
}
static void be32(uint8_t *p, uint32_t v) { p[0] = (uint8_t)(v >> 24); p[1] = (uint8_t)(v >> 16); p[2] = (uint8_t)(v >> 8); p[3] = (uint8_t)v; }
static void chunk(FILE *f, const char *type, const uint8_t *d, size_t n) {
    uint8_t h[8];
    be32(h, (uint32_t)n);
    memcpy(h + 4, type, 4);
    fwrite(h, 1, 8, f);
    if (n) fwrite(d, 1, n, f);
    uint32_t c = crc(crc(0, (const uint8_t *)type, 4), d, n);
    be32(h, c);
    fwrite(h, 1, 4, f);
}

int png_write_rgba(const char *path, const uint8_t *rgba, int w, int h) {
    size_t row = (size_t)w * 4 + 1, raw_n = row * (size_t)h;
    size_t blocks = (raw_n + 65534) / 65535;
    size_t zn = 2 + raw_n + blocks * 5 + 4;
    uint8_t *z = malloc(zn), *raw = malloc(raw_n);
    if (!z || !raw) { free(z); free(raw); return -1; }
    for (int y = 0; y < h; y++) {
        raw[y * row] = 0;
        memcpy(raw + y * row + 1, rgba + (size_t)y * w * 4, (size_t)w * 4);
    }
    size_t o = 0;
    z[o++] = 0x78; z[o++] = 0x01;
    uint32_t a = 1, b = 0;
    for (size_t i = 0; i < raw_n; i++) { a = (a + raw[i]) % 65521; b = (b + a) % 65521; }
    for (size_t pos = 0; pos < raw_n || pos == 0;) {
        size_t n = raw_n - pos > 65535 ? 65535 : raw_n - pos;
        z[o++] = pos + n >= raw_n ? 1 : 0;
        z[o++] = (uint8_t)n; z[o++] = (uint8_t)(n >> 8);
        z[o++] = (uint8_t)~n; z[o++] = (uint8_t)(~n >> 8);
        memcpy(z + o, raw + pos, n);
        o += n;
        pos += n;
        if (!n) break;
    }
    be32(z + o, b << 16 | a);
    o += 4;
    FILE *f = fopen(path, "wb");
    if (!f) { free(z); free(raw); return -1; }
    static const uint8_t sig[8] = {0x89, 'P', 'N', 'G', 13, 10, 26, 10};
    fwrite(sig, 1, 8, f);
    uint8_t ih[13];
    be32(ih, (uint32_t)w); be32(ih + 4, (uint32_t)h);
    ih[8] = 8; ih[9] = 6; ih[10] = ih[11] = ih[12] = 0;
    chunk(f, "IHDR", ih, 13);
    chunk(f, "IDAT", z, o);
    chunk(f, "IEND", NULL, 0);
    fclose(f);
    free(z);
    free(raw);
    return 0;
}
