/* PICA200 texture decoding into RGBA8 (see texdecode.h).
 *
 * Layout (the same for textures and colour render targets, cf. 3dbrew "GPU/Textures" and the
 * reference behaviour of every 3DS tool chain):
 *  - the image is cut into 8x8 tiles; tiles are stored left->right, then the next row of tiles;
 *    the FIRST tile row in memory is the TOP of the image (texture coordinate t = 1);
 *  - inside a tile, texels are in Morton (Z) order: offset bits = x0 y0 x1 y1 x2 y2 (y from the
 *    top of the tile);
 *  - ETC1/ETC1A4: an 8x8 tile holds four 4x4 ETC1 blocks (top-left, top-right, bottom-left,
 *    bottom-right), each a little-endian u64 (ETC1A4: u64 alpha nibbles first);
 *  - multi-byte texels are little-endian words: RGBA8 = R<<24|G<<16|B<<8|A, RGB565 = R<<11|G<<5|B ...
 * The output is in OpenGL row order (row 0 = bottom), so dst row = h - 1 - y. */
#include "texdecode.h"

#include <string.h>

static const int BPP[TEXFMT_COUNT] = {32, 24, 16, 16, 16, 16, 16, 8, 8, 8, 4, 4, 4, 8};
static const char *NAMES[TEXFMT_COUNT] = {"RGBA8", "RGB8", "RGB5A1", "RGB565", "RGBA4", "LA8", "HILO8",
                                          "L8",    "A8",   "LA4",    "L4",     "A4",    "ETC1", "ETC1A4"};

int texfmt_bpp(int fmt) { return fmt >= 0 && fmt < TEXFMT_COUNT ? BPP[fmt] : 0; }
const char *texfmt_name(int fmt) { return fmt >= 0 && fmt < TEXFMT_COUNT ? NAMES[fmt] : "?"; }
size_t texfmt_size(int fmt, int w, int h) {
    int bpp = texfmt_bpp(fmt);
    return bpp ? (size_t)w * (size_t)h * (size_t)bpp / 8 : 0;
}

/* Morton offset of (x, y) inside an 8x8 tile */
static unsigned morton(unsigned x, unsigned y) {
    return (x & 1) | (y & 1) << 1 | (x & 2) << 1 | (y & 2) << 2 | (x & 4) << 2 | (y & 4) << 3;
}

static inline uint8_t x4(unsigned v) { return (uint8_t)(v * 17); }
static inline uint8_t x5(unsigned v) { return (uint8_t)(v << 3 | v >> 2); }
static inline uint8_t x6(unsigned v) { return (uint8_t)(v << 2 | v >> 4); }

static void put(uint8_t *d, unsigned r, unsigned g, unsigned b, unsigned a) {
    d[0] = (uint8_t)r;
    d[1] = (uint8_t)g;
    d[2] = (uint8_t)b;
    d[3] = (uint8_t)a;
}

/* one texel of a non-ETC format; `t` = tile base, i = morton index */
static void texel(int fmt, const uint8_t *t, unsigned i, uint8_t *d) {
    switch (fmt) {
    case TEXFMT_RGBA8: { const uint8_t *s = t + i * 4; put(d, s[3], s[2], s[1], s[0]); break; }
    case TEXFMT_RGB8: { const uint8_t *s = t + i * 3; put(d, s[2], s[1], s[0], 255); break; }
    case TEXFMT_RGB5A1: {
        unsigned v = t[i * 2] | t[i * 2 + 1] << 8;
        put(d, x5(v >> 11 & 31), x5(v >> 6 & 31), x5(v >> 1 & 31), (v & 1) * 255);
        break;
    }
    case TEXFMT_RGB565: {
        unsigned v = t[i * 2] | t[i * 2 + 1] << 8;
        put(d, x5(v >> 11 & 31), x6(v >> 5 & 63), x5(v & 31), 255);
        break;
    }
    case TEXFMT_RGBA4: {
        unsigned v = t[i * 2] | t[i * 2 + 1] << 8;
        put(d, x4(v >> 12 & 15), x4(v >> 8 & 15), x4(v >> 4 & 15), x4(v & 15));
        break;
    }
    case TEXFMT_LA8: { const uint8_t *s = t + i * 2; put(d, s[1], s[1], s[1], s[0]); break; }
    case TEXFMT_HILO8: { const uint8_t *s = t + i * 2; put(d, s[1], s[0], 0, 255); break; }
    case TEXFMT_L8: put(d, t[i], t[i], t[i], 255); break;
    case TEXFMT_A8: put(d, 0, 0, 0, t[i]); break;
    case TEXFMT_LA4: put(d, x4(t[i] >> 4), x4(t[i] >> 4), x4(t[i] >> 4), x4(t[i] & 15)); break;
    case TEXFMT_L4: { unsigned v = t[i / 2] >> (i & 1 ? 4 : 0) & 15; put(d, x4(v), x4(v), x4(v), 255); break; }
    case TEXFMT_A4: { unsigned v = t[i / 2] >> (i & 1 ? 4 : 0) & 15; put(d, 0, 0, 0, x4(v)); break; }
    default: put(d, 255, 0, 255, 255); break;
    }
}

/* ------------------------------------------------------------------ ETC1 */

static const int ETC_MOD[8][2] = {{2, 8}, {5, 17}, {9, 29}, {13, 42}, {18, 60}, {24, 80}, {33, 106}, {47, 183}};

static inline int clamp255(int v) { return v < 0 ? 0 : v > 255 ? 255 : v; }

/* decode a 4x4 ETC1 block; out[y][x] RGB with y from the top */
static void etc1_block(uint64_t v, uint8_t out[4][4][3]) {
    unsigned hi = (unsigned)(v >> 32), lo = (unsigned)v;
    int diff = hi >> 1 & 1, flip = hi & 1;
    int cw[2] = {(int)(hi >> 5 & 7), (int)(hi >> 2 & 7)};
    int c[2][3];
    if (diff) {
        int base[3] = {(int)(hi >> 27 & 31), (int)(hi >> 19 & 31), (int)(hi >> 11 & 31)};
        int dlt[3] = {(int)(hi >> 24 & 7), (int)(hi >> 16 & 7), (int)(hi >> 8 & 7)};
        for (int k = 0; k < 3; k++) {
            int d = dlt[k] >= 4 ? dlt[k] - 8 : dlt[k];
            int b2 = (base[k] + d) & 31;
            c[0][k] = x5((unsigned)base[k]);
            c[1][k] = x5((unsigned)b2);
        }
    } else {
        c[0][0] = x4(hi >> 28 & 15); c[1][0] = x4(hi >> 24 & 15);
        c[0][1] = x4(hi >> 20 & 15); c[1][1] = x4(hi >> 16 & 15);
        c[0][2] = x4(hi >> 12 & 15); c[1][2] = x4(hi >> 8 & 15);
    }
    for (int x = 0; x < 4; x++)
        for (int y = 0; y < 4; y++) {
            int i = x * 4 + y;
            int sub = flip ? y >= 2 : x >= 2;
            int msb = lo >> (16 + i) & 1, lsb = lo >> i & 1;
            int m = ETC_MOD[cw[sub]][lsb];
            if (msb) m = -m;
            for (int k = 0; k < 3; k++) out[y][x][k] = (uint8_t)clamp255(c[sub][k] + m);
        }
}

static uint64_t le64(const uint8_t *p) {
    uint64_t v = 0;
    for (int i = 7; i >= 0; i--) v = v << 8 | p[i];
    return v;
}

static void etc_tile(int alpha, const uint8_t *t, uint8_t *dst, int w, int h, int tx, int ty) {
    size_t bs = alpha ? 16 : 8;
    for (int sb = 0; sb < 4; sb++) {
        const uint8_t *b = t + sb * bs;
        uint64_t a = alpha ? le64(b) : 0;
        uint8_t rgb[4][4][3];
        etc1_block(le64(b + (alpha ? 8 : 0)), rgb);
        int ox = (sb & 1) * 4, oy = (sb >> 1) * 4; /* y from the top of the tile */
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++) {
                int px = tx * 8 + ox + x, py = ty * 8 + oy + y; /* py from the image top */
                uint8_t *d = dst + ((size_t)(h - 1 - py) * w + px) * 4;
                unsigned al = alpha ? x4((unsigned)(a >> (4 * (x * 4 + y)) & 15)) : 255;
                put(d, rgb[y][x][0], rgb[y][x][1], rgb[y][x][2], al);
            }
    }
}

/* ------------------------------------------------------------------ public */

int tex_decode(int fmt, const void *src, int w, int h, uint8_t *dst) {
    int bpp = texfmt_bpp(fmt);
    if (!bpp || w <= 0 || h <= 0 || w % 8 || h % 8 || !src || !dst) return -1;
    const uint8_t *s = src;
    size_t tile_bytes = (size_t)64 * bpp / 8;
    for (int ty = 0; ty < h / 8; ty++)
        for (int tx = 0; tx < w / 8; tx++) {
            const uint8_t *t = s + ((size_t)ty * (w / 8) + tx) * tile_bytes;
            if (fmt == TEXFMT_ETC1 || fmt == TEXFMT_ETC1A4) {
                etc_tile(fmt == TEXFMT_ETC1A4, t, dst, w, h, tx, ty);
                continue;
            }
            for (int y = 0; y < 8; y++)
                for (int x = 0; x < 8; x++) {
                    int py = ty * 8 + y;
                    texel(fmt, t, morton((unsigned)x, (unsigned)y), dst + ((size_t)(h - 1 - py) * w + tx * 8 + x) * 4);
                }
        }
    return 0;
}

int tex_encode(int fmt, const uint8_t *src, int w, int h, void *dstv) {
    int bpp = texfmt_bpp(fmt);
    if (fmt > TEXFMT_RGBA4 || w % 8 || h % 8) return -1;
    uint8_t *dst = dstv;
    size_t tile_bytes = (size_t)64 * bpp / 8;
    for (int ty = 0; ty < h / 8; ty++)
        for (int tx = 0; tx < w / 8; tx++) {
            uint8_t *t = dst + ((size_t)ty * (w / 8) + tx) * tile_bytes;
            for (int y = 0; y < 8; y++)
                for (int x = 0; x < 8; x++) {
                    int py = ty * 8 + y;
                    const uint8_t *p = src + ((size_t)(h - 1 - py) * w + tx * 8 + x) * 4;
                    unsigned i = morton((unsigned)x, (unsigned)y), v;
                    switch (fmt) {
                    case TEXFMT_RGBA8: t[i * 4] = p[3]; t[i * 4 + 1] = p[2]; t[i * 4 + 2] = p[1]; t[i * 4 + 3] = p[0]; break;
                    case TEXFMT_RGB8: t[i * 3] = p[2]; t[i * 3 + 1] = p[1]; t[i * 3 + 2] = p[0]; break;
                    case TEXFMT_RGB5A1:
                        v = (unsigned)(p[0] >> 3) << 11 | (unsigned)(p[1] >> 3) << 6 | (unsigned)(p[2] >> 3) << 1 | (p[3] >= 128);
                        t[i * 2] = (uint8_t)v; t[i * 2 + 1] = (uint8_t)(v >> 8); break;
                    case TEXFMT_RGB565:
                        v = (unsigned)(p[0] >> 3) << 11 | (unsigned)(p[1] >> 2) << 5 | (unsigned)(p[2] >> 3);
                        t[i * 2] = (uint8_t)v; t[i * 2 + 1] = (uint8_t)(v >> 8); break;
                    default:
                        v = (unsigned)(p[0] >> 4) << 12 | (unsigned)(p[1] >> 4) << 8 | (unsigned)(p[2] >> 4) << 4 | (unsigned)(p[3] >> 4);
                        t[i * 2] = (uint8_t)v; t[i * 2 + 1] = (uint8_t)(v >> 8); break;
                    }
                }
        }
    return 0;
}
