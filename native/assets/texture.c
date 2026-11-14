/* PICA200 texture decoding (see texture.h). */
#include "texture.h"
#include <stdlib.h>
#include <string.h>

static const char *const fmt_names[] = {"RGBA8", "RGB8", "RGBA5551", "RGB565", "RGBA4", "LA8",
                                        "HILO8", "L8", "A8", "LA4", "L4", "A4", "ETC1", "ETC1A4"};
static const uint8_t fmt_bpp[] = {32, 24, 16, 16, 16, 16, 16, 8, 8, 8, 4, 4, 4, 8};

const char *pica_tex_format_name(int f) {
    return f >= 0 && f < PICA_TEX_FORMAT_COUNT ? fmt_names[f] : "?";
}
int pica_tex_bpp(int f) { return f >= 0 && f < PICA_TEX_FORMAT_COUNT ? fmt_bpp[f] : 0; }
size_t pica_tex_size(int f, int w, int h) { return (size_t)w * (size_t)h * (size_t)pica_tex_bpp(f) / 8; }
size_t pica_tex_size_mips(int f, int w, int h, int levels) {
    size_t s = 0;
    for (int i = 0; i < levels && w >= 8 && h >= 8; i++, w >>= 1, h >>= 1) s += pica_tex_size(f, w, h);
    return s;
}

/* Morton offset of (x, y) inside an 8x8 tile */
static unsigned morton8(unsigned x, unsigned y) {
    return (x & 1) | (y & 1) << 1 | (x & 2) << 1 | (y & 2) << 2 | (x & 4) << 2 | (y & 4) << 3;
}

static uint8_t x5(unsigned v) { return (uint8_t)(v << 3 | v >> 2); }
static uint8_t x6(unsigned v) { return (uint8_t)(v << 2 | v >> 4); }
static uint8_t x4(unsigned v) { return (uint8_t)(v * 0x11); }

static void texel(const uint8_t *p, int fmt, unsigned sub, uint8_t *o) {
    unsigned v;
    switch (fmt) {
    case PICA_TEX_RGBA8: o[0] = p[3]; o[1] = p[2]; o[2] = p[1]; o[3] = p[0]; break;
    case PICA_TEX_RGB8: o[0] = p[2]; o[1] = p[1]; o[2] = p[0]; o[3] = 255; break;
    case PICA_TEX_RGBA5551:
        v = p[0] | p[1] << 8;
        o[0] = x5(v >> 11 & 31); o[1] = x5(v >> 6 & 31); o[2] = x5(v >> 1 & 31); o[3] = (v & 1) ? 255 : 0;
        break;
    case PICA_TEX_RGB565:
        v = p[0] | p[1] << 8;
        o[0] = x5(v >> 11 & 31); o[1] = x6(v >> 5 & 63); o[2] = x5(v & 31); o[3] = 255;
        break;
    case PICA_TEX_RGBA4:
        v = p[0] | p[1] << 8;
        o[0] = x4(v >> 12 & 15); o[1] = x4(v >> 8 & 15); o[2] = x4(v >> 4 & 15); o[3] = x4(v & 15);
        break;
    case PICA_TEX_LA8: o[0] = o[1] = o[2] = p[1]; o[3] = p[0]; break;
    case PICA_TEX_HILO8: o[0] = p[1]; o[1] = p[0]; o[2] = 0; o[3] = 255; break;
    case PICA_TEX_L8: o[0] = o[1] = o[2] = p[0]; o[3] = 255; break;
    case PICA_TEX_A8: o[0] = o[1] = o[2] = 0; o[3] = p[0]; break;  /* hardware: RGB = 0 */
    case PICA_TEX_LA4: o[0] = o[1] = o[2] = x4(p[0] >> 4); o[3] = x4(p[0] & 15); break;
    case PICA_TEX_L4: o[0] = o[1] = o[2] = x4(sub ? p[0] >> 4 : p[0] & 15); o[3] = 255; break;
    case PICA_TEX_A4: o[0] = o[1] = o[2] = 0; o[3] = x4(sub ? p[0] >> 4 : p[0] & 15); break;
    default: o[0] = o[1] = o[2] = o[3] = 0; break;
    }
}

/* ---- ETC1 (one 4x4 block -> rgba[4][4][4] indexed [y][x]) ---- */
static const int etc1_mod[8][4] = {{2, 8, -2, -8},     {5, 17, -5, -17},    {9, 29, -9, -29},
                                   {13, 42, -13, -42}, {18, 60, -18, -60},  {24, 80, -24, -80},
                                   {33, 106, -33, -106}, {47, 183, -47, -183}};
static uint8_t clamp8(int v) { return (uint8_t)(v < 0 ? 0 : v > 255 ? 255 : v); }

static void etc1_block(uint64_t b, uint64_t alpha, int has_alpha, uint8_t out[4][4][4]) {
    /* b is the block as the standard big-endian ETC1 64-bit word */
    uint32_t hi = (uint32_t)(b >> 32), lo = (uint32_t)b;
    int diff = hi >> 1 & 1, flip = hi & 1;
    int t1 = hi >> 5 & 7, t2 = hi >> 2 & 7;
    int c[2][3];
    if (diff) {
        for (int k = 0; k < 3; k++) {
            int base = hi >> (27 - 8 * k) & 31;
            int d = hi >> (24 - 8 * k) & 7;
            if (d & 4) d -= 8;
            int b2 = base + d;
            c[0][k] = base << 3 | base >> 2;
            c[1][k] = (b2 & 31) << 3 | (b2 & 31) >> 2;
        }
    } else {
        for (int k = 0; k < 3; k++) {
            int a = hi >> (28 - 8 * k) & 15, bb = hi >> (24 - 8 * k) & 15;
            c[0][k] = a * 17;
            c[1][k] = bb * 17;
        }
    }
    for (int x = 0; x < 4; x++)
        for (int y = 0; y < 4; y++) {
            int i = x * 4 + y;
            int sub = flip ? (y >= 2) : (x >= 2);
            int idx = (lo >> i & 1) | (lo >> (16 + i) & 1) << 1;
            /* idx: msb<<1 | lsb ; table order 0:+a 1:+b 2:-a 3:-b */
            int m = etc1_mod[sub ? t2 : t1][idx];
            uint8_t *o = out[y][x];
            o[0] = clamp8(c[sub][0] + m);
            o[1] = clamp8(c[sub][1] + m);
            o[2] = clamp8(c[sub][2] + m);
            o[3] = has_alpha ? x4((unsigned)(alpha >> (i * 4)) & 15) : 255;
        }
}

static uint64_t le64(const uint8_t *p) {
    uint64_t v = 0;
    for (int i = 7; i >= 0; i--) v = v << 8 | p[i];
    return v;
}

int pica_tex_decode(const uint8_t *src, size_t n, int fmt, int w, int h, uint8_t *dst, int flip) {
    if (fmt < 0 || fmt >= PICA_TEX_FORMAT_COUNT || w <= 0 || h <= 0 || (w & 7) || (h & 7)) return -1;
    if (n < pica_tex_size(fmt, w, h)) return -1;
    int bpp = fmt_bpp[fmt];
    if (fmt == PICA_TEX_ETC1 || fmt == PICA_TEX_ETC1A4) {
        int blk = fmt == PICA_TEX_ETC1A4 ? 16 : 8;
        const uint8_t *p = src;
        for (int ty = 0; ty < h; ty += 8)
            for (int tx = 0; tx < w; tx += 8)
                for (int k = 0; k < 4; k++, p += blk) {
                    uint64_t a = blk == 16 ? le64(p) : 0;
                    uint64_t b = le64(p + blk - 8);
                    uint8_t px[4][4][4];
                    etc1_block(b, a, blk == 16, px);
                    int bx = tx + (k & 1) * 4, by = ty + (k >> 1) * 4;
                    for (int y = 0; y < 4; y++) {
                        int row = flip ? h - 1 - (by + y) : by + y;
                        memcpy(dst + ((size_t)row * w + bx) * 4, px[y], 16);
                    }
                }
        return 0;
    }
    size_t tile_bytes = (size_t)64 * bpp / 8;
    for (int y = 0; y < h; y++) {
        int row = flip ? h - 1 - y : y;
        for (int x = 0; x < w; x++) {
            size_t tile = (size_t)(y >> 3) * (w >> 3) + (x >> 3);
            unsigned m = morton8(x & 7, y & 7);
            const uint8_t *p = src + tile * tile_bytes + (size_t)m * bpp / 8;
            texel(p, fmt, bpp == 4 ? (m & 1) : 0, dst + ((size_t)row * w + x) * 4);
        }
    }
    return 0;
}


/* ---- BCLIM / BFLIM ---- */
int lim_parse(const uint8_t *b, size_t n, LimImage *o) {
    /* CLIM/FLIM format enum -> PICA */
    static const int8_t conv[14] = {PICA_TEX_L8, PICA_TEX_A8, PICA_TEX_LA4, PICA_TEX_LA8, PICA_TEX_HILO8,
                                    PICA_TEX_RGB565, PICA_TEX_RGB8, PICA_TEX_RGBA5551, PICA_TEX_RGBA4,
                                    PICA_TEX_RGBA8, PICA_TEX_ETC1, PICA_TEX_ETC1A4, PICA_TEX_L4, PICA_TEX_A4};
    if (n < 0x28) return -1;
    const uint8_t *h = b + n - 0x28;
    if (memcmp(h, "FLIM", 4) && memcmp(h, "CLIM", 4)) return -1;
    const uint8_t *im = h + 0x14;
    if (memcmp(im, "imag", 4)) return -1;
    memset(o, 0, sizeof *o);
    o->width = im[8] | im[9] << 8;
    o->height = im[10] | im[11] << 8;
    int f = im[14];
    if (f == 0x12) o->format = PICA_TEX_L4;        /* FLIM (NW4F) codes for the 4-bit formats */
    else if (f == 0x13) o->format = PICA_TEX_A4;
    else if (f < 14) o->format = conv[f];
    else return -1;
    o->flags = im[15];
    uint32_t sz = (uint32_t)im[16] | (uint32_t)im[17] << 8 | (uint32_t)im[18] << 16 | (uint32_t)im[19] << 24;
    int w = 8, hh = 8;
    while (w < o->width) w <<= 1;
    while (hh < o->height) hh <<= 1;
    o->stored_w = w;
    o->stored_h = hh;
    o->data = b;
    o->size = sz;
    if (sz > n - 0x28 || pica_tex_size(o->format, w, hh) > sz) return -1;
    return 0;
}
