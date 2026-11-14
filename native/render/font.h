/* nw::font / nw::lyt RectDrawer on the native renderer (see font.c for the shader and the data
 * layout, native/sdk/lyt.c for the replaced game functions).
 *
 * The game's RectDrawer (USA 0041F3C0..004205A4) batches up to 23 rectangles per draw. Per rect it
 * fills one "record" vec4 (c9 + i) that indexes a pool of vec4s (c32..c95: modelview rows, rect
 * geometry, texture coordinates, corner colours) and draws a fixed vertex buffer of
 * 23 x 6 vertices {rect index, vertex index, corner x, corner y}. RPROG_FONT_RECT is the hand-written
 * GLSL of nwfont2_RectDrawerShader.shbin; these helpers record the same uniform values, bools,
 * textures and combiner stages as native ops (render_rec) instead of PICA words. */
#pragma once
#include <stddef.h>
#include <stdint.h>

#include "render.h"

#define FONT_RECTS 23           /* rects per batch (vertex buffer 23 x 6 vertices) */
#define FONT_VTX_BYTES (FONT_RECTS * 6 * 16)

/* the 23 x 6 vertex buffer the game's shader loader builds (USA 004205A4): v0 = (rect, k, k & 1,
 * k >= 2 ? -1 : 0) for k in {1, 0, 3, 3, 0, 2} */
void font_build_vertices(float *dst);

/* float uniforms from game memory: `count` vec4s stored in memory order (m0..m3, the order the game
 * streams them into the PICA uniform port, which receives w first) -> c[reg..reg+count). Records
 * ceil(count / 16) ops; returns the advanced pointer (2 words per op). */
uint32_t *font_rec_uniforms(uint32_t *p, int reg, const void *mem, int count);
/* bind: RPROG_FONT_RECT + v0 = vertex buffer (vec4 floats, stride 16), v1..v7 constant */
uint32_t *font_rec_bind(uint32_t *p, const void *vtx, int pinned);
/* draw rects * 6 vertices (triangles) from vertex 0 */
uint32_t *font_rec_draw(uint32_t *p, int rects);
uint32_t *font_rec_bools(uint32_t *p, uint32_t value);           /* low 16 bits = b0..b15 */
uint32_t *font_rec_texconfig(uint32_t *p, int enable_mask);
uint32_t *font_rec_texunit(uint32_t *p, int unit, uintptr_t addr, int w, int h, int fmt, int wrap_s,
                           int wrap_t, int mag_linear, int min_linear);
/* combiner stages in mask from `t`; flags bit 0: also the buffer-update bits (t->buf_update_*) */
uint32_t *font_rec_tev(uint32_t *p, int stage_mask, const RTev *t, int flags, int pinned);
uint32_t *font_rec_tev_const(uint32_t *p, int stage, const uint8_t rgba[4]);

/* float colour (0..1) -> RGBA8 the way nw::font packs a combiner constant (USA 00420CB8) */
void font_color_pack(const float *rgba, uint8_t out[4]);
