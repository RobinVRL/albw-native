/* PICA200 texture formats -> RGBA8 (asset conversion, CPU, once at load).
 *
 * Memory layout on the 3DS: the image is cut into 8x8 tiles stored row-major (tile row 0 = top of
 * the image as the GPU addresses it, i.e. t = 1.0); inside a tile texels are Morton (Z-order)
 * interleaved: offset bits = x0 y0 x1 y1 x2 y2.  ETC1/ETC1A4 store 4x4 blocks, four per 8x8 tile
 * (top-left, top-right, bottom-left, bottom-right), each block a 64-bit little-endian word
 * (ETC1A4: preceded by a 64-bit word of 4-bit alphas, pixel (x,y) at nibble x*4+y).
 * The PICA texture coordinate origin is the bottom-left corner, so a top-down image has to be
 * flipped vertically before it is handed to OpenGL (whose row 0 is at t = 0). */
#pragma once
#include <stddef.h>
#include <stdint.h>

typedef enum {
    PICA_TEX_RGBA8 = 0, PICA_TEX_RGB8 = 1, PICA_TEX_RGBA5551 = 2, PICA_TEX_RGB565 = 3,
    PICA_TEX_RGBA4 = 4, PICA_TEX_LA8 = 5, PICA_TEX_HILO8 = 6, PICA_TEX_L8 = 7, PICA_TEX_A8 = 8,
    PICA_TEX_LA4 = 9, PICA_TEX_L4 = 10, PICA_TEX_A4 = 11, PICA_TEX_ETC1 = 12, PICA_TEX_ETC1A4 = 13,
    PICA_TEX_FORMAT_COUNT
} PicaTexFormat;

const char *pica_tex_format_name(int fmt);
int pica_tex_bpp(int fmt);                                   /* bits per texel, 0 if unknown */
size_t pica_tex_size(int fmt, int w, int h);                 /* bytes of one level */
size_t pica_tex_size_mips(int fmt, int w, int h, int levels);

/* Decode one level into dst (w*h*4 bytes, RGBA8 bytes R,G,B,A).  w and h must be multiples of 8.
 * flip_for_gl = 0: rows top-down (natural image, e.g. for PNG); 1: bottom-up (glTexImage2D
 * row 0 = t 0, which is what PICA texture coordinates expect).  Returns 0 or -1. */
int pica_tex_decode(const uint8_t *src, size_t src_size, int fmt, int w, int h, uint8_t *dst,
                    int flip_for_gl);

/* PICA sampler state (decoded once from BCH texture mappers / register 0x83) */
typedef struct {
    uint8_t wrap_s, wrap_t;      /* 0 clamp-to-edge, 1 clamp-to-border, 2 repeat, 3 mirror */
    uint8_t mag_linear;          /* 0 nearest, 1 linear */
    uint8_t min_filter;          /* H3D: 0 N, 1 N-mip-N, 2 N-mip-L, 3 L, 4 L-mip-N, 5 L-mip-L */
    float lod_bias;
    uint32_t border_rgba;        /* bytes R,G,B,A from low to high */
} PicaSampler;

/* Upload helper (texture_gl.c): decodes every level, creates a GL texture with the sampler state applied.
 * Needs a current GL 3.3 context (native/platform).  Returns the GL texture name or 0. */
unsigned pica_tex_upload_gl(const uint8_t *src, size_t src_size, int fmt, int w, int h, int levels,
                            const PicaSampler *sampler);

/* BCLIM/BFLIM (layout images): PICA texture data followed by a footer:
 *   "CLIM"/"FLIM" header (0x14: magic, u16 BOM, u16 header size, u32 version, u32 file size,
 *   u16 block count) and an "imag" block (u32 size, u16 width, u16 height, u16 alignment,
 *   u8 format, u8 flags, u32 data size).  Format codes: 0 L8 1 A8 2 LA4 3 LA8 4 HILO8 5 RGB565
 *   6 RGB8 7 RGBA5551 8 RGBA4 9 RGBA8 10 ETC1 11 ETC1A4 12 L4 13 A4; FLIM also uses 0x12 L4 and
 *   0x13 A4 (163 of the game's 838 layout images).  The texture is stored with power-of-two dimensions
 *   (>= 8); width/height are the visible part (top-left of the decoded top-down image). */
typedef struct {
    int format;                 /* PicaTexFormat (converted from the CLIM/FLIM enum) */
    int width, height;          /* visible size */
    int stored_w, stored_h;     /* tiled storage size */
    uint8_t flags;
    const uint8_t *data;
    size_t size;
} LimImage;
int lim_parse(const uint8_t *buf, size_t n, LimImage *out);  /* 0 = ok */
