/* PICA200 texture formats -> RGBA8 (host-side asset/texture decoding, no GPU emulation).
 *
 * 3DS textures (and render targets) are stored in 8x8 Morton-ordered tiles, the top row of tiles
 * first (see texdecode.c for the exact convention). The decoder outputs rows in OpenGL order
 * (row 0 = bottom = t 0), ready for glTexImage2D. */
#pragma once
#include <stddef.h>
#include <stdint.h>

/* PICA texture format codes (register 0x8E / nn::gr::CTR texture format byte) */
enum {
    TEXFMT_RGBA8 = 0, TEXFMT_RGB8 = 1, TEXFMT_RGB5A1 = 2, TEXFMT_RGB565 = 3, TEXFMT_RGBA4 = 4,
    TEXFMT_LA8 = 5, TEXFMT_HILO8 = 6, TEXFMT_L8 = 7, TEXFMT_A8 = 8, TEXFMT_LA4 = 9, TEXFMT_L4 = 10,
    TEXFMT_A4 = 11, TEXFMT_ETC1 = 12, TEXFMT_ETC1A4 = 13, TEXFMT_COUNT
};

/* bits per texel (4, 8, 16, 24, 32); 0 for an unknown format */
int texfmt_bpp(int fmt);
/* bytes of one w x h level (w, h multiples of 8; ETC1 counts 4x4 blocks) */
size_t texfmt_size(int fmt, int w, int h);
const char *texfmt_name(int fmt);

/* Decode one level of a tiled texture at `src` (w x h, multiples of 8) into `dst` (w*h RGBA8,
 * row 0 = GL bottom row). Returns 0 on success, -1 for an unknown format / bad size. */
int tex_decode(int fmt, const void *src, int w, int h, uint8_t *dst);

/* Encode RGBA8 (GL row order) into the tiled layout of `fmt` (only the colour framebuffer formats
 * RGBA8/RGB8/RGB5A1/RGB565/RGBA4). Used by tests and by render-target read-back. */
int tex_encode(int fmt, const uint8_t *src, int w, int h, void *dst);
