/* Standalone test of the hand-written nw::eft particle GLSL (render/effects.c, RPROG_EFT) with the
 * game's register interface: 8-particle batches (corner vertices with the particle register offset
 * 10 n in v0.z, like the buffer 003F3854 builds), per-particle blocks c(1 + 10 n) .. c(10 + 10 n)
 * as the per-particle writers fill them (003EF31C: colour, scale / texture rotation, texture
 * offsets, position, velocity, rotation, emitter rows), emitter constants c82-c84, eye c85,
 * projection c86-c89, view c90-c92. Particles: a soft round sprite (RGBA8, encoded to the PICA
 * tiled layout), combiner texture x vertex colour, alpha blending.
 * Rows (left to right): billboards with rotation, Y billboards, directional (moving up-right),
 * polygons XZ (lying on the ground). The JackAll.ptcl emitter data (SPBD v3) is not parsed: the
 * particle values are synthetic. -> eft_test.png
 *   eft_test <out dir> */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../../assets/png.h"
#include "../../platform/platform.h"
#include "../effects.h"
#include "../render.h"
#include "../texdecode.h"

static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; fprintf(stderr, "FAIL: " __VA_ARGS__); fputc('\n', stderr); } } while (0)
#define A32(p) ((uintptr_t)(p))

static float C[96][4];
static void set(int r, float x, float y, float z, float w) { C[r][0] = x; C[r][1] = y; C[r][2] = z; C[r][3] = w; }

int main(int argc, char **argv) {
    const char *out = argc > 1 ? argv[1] : ".";
    PlatConfig cfg = {1, 1, 0};
    if (plat_init("ALBW eft test", &cfg)) return 2;
    if (!render_ready()) { fprintf(stderr, "no GL\n"); return 2; }
    printf("GL: %s | %s\n", (const char *)glGetString(GL_RENDERER), (const char *)glGetString(GL_VERSION));

    /* the 8-particle quad batch: corners (+-0.5), z = 10 n; two triangles per particle */
    static float vtx[32][3];
    static uint16_t idx[48];
    for (int n = 0; n < 8; n++) {
        static const float cx[4] = {-0.5f, 0.5f, -0.5f, 0.5f}, cy[4] = {0.5f, 0.5f, -0.5f, -0.5f};
        for (int k = 0; k < 4; k++) { vtx[n * 4 + k][0] = cx[k]; vtx[n * 4 + k][1] = cy[k]; vtx[n * 4 + k][2] = (float)(10 * n); }
        static const int t[6] = {0, 2, 1, 1, 2, 3};
        for (int k = 0; k < 6; k++) idx[n * 6 + k] = (uint16_t)(n * 4 + t[k]);
    }
    /* soft round sprite, white with radial alpha */
    static uint8_t img[32 * 32 * 4], tex[32 * 32 * 4] __attribute__((aligned(128)));
    for (int y = 0; y < 32; y++)
        for (int x = 0; x < 32; x++) {
            float dx = (x + 0.5f - 16) / 16, dy = (y + 0.5f - 16) / 16, d = sqrtf(dx * dx + dy * dy);
            float a = d >= 1 ? 0 : (1 - d) * (1 - d) * 1.6f;
            uint8_t *p = img + (y * 32 + x) * 4;
            p[0] = p[1] = p[2] = 255;
            p[3] = (uint8_t)(a > 1 ? 255 : a * 255);
        }
    tex_encode(TEXFMT_RGBA8, img, 32, 32, tex);

    static uint8_t color[400 * 240 * 4] __attribute__((aligned(16))), depth[400 * 240 * 4] __attribute__((aligned(16)));
    render_fill(color, sizeof color, 0x10141CFF, 32);
    render_fill(depth, sizeof depth, 0x00FFFFFF, 32);
    render_set_target(A32(color), RFMT_RGBA8, A32(depth), RDEPTH_D24S8, 400, 240);
    render_set_viewport(0, 0, 400, 240);
    RFragState *f = render_frag_state();
    f->blend_enable = 1; f->src_rgb = f->src_a = 6; f->dst_rgb = f->dst_a = 7; /* alpha blending */
    f->depth_test = 1; f->depth_func = 5; f->depth_write = 0; f->color_mask = 15;
    render_frag_dirty();
    RTexUnit u;
    memset(&u, 0, sizeof u);
    u.addr = A32(tex); u.w = u.h = 32; u.fmt = TEXFMT_RGBA8; u.mag = 1; u.min = 3;
    render_set_texunit(0, &u);
    render_set_texconfig(1, 0);
    RTev tv;
    memset(&tv, 0, sizeof tv);
    for (int i = 0; i < 6; i++) {
        RTevStage *s = &tv.stage[i];
        s->combine_rgb = s->combine_a = i ? 0 : 1;
        s->src_rgb[0] = s->src_a[0] = i ? 15 : 3;
        s->src_rgb[1] = s->src_a[1] = i ? 15 : 0;
    }
    render_set_tev(&tv);
    render_set_program(RPROG_EFT);
    render_set_attrib(0, vtx, RATTR_FLOAT, 3, 12);

    /* camera: eye (0, 3, 10) looking at (0, 0.5, 0); PICA projection (z in [-w, 0]) */
    float eye[3] = {0, 3, 10}, at[3] = {0, 0.5f, 0};
    float fw[3] = {at[0] - eye[0], at[1] - eye[1], at[2] - eye[2]};
    float l = sqrtf(fw[0] * fw[0] + fw[1] * fw[1] + fw[2] * fw[2]);
    for (int i = 0; i < 3; i++) fw[i] /= l;
    float sd[3] = {-fw[2], 0, fw[0]};
    l = sqrtf(sd[0] * sd[0] + sd[2] * sd[2]); sd[0] /= l; sd[2] /= l;
    float up[3] = {sd[1] * fw[2] - sd[2] * fw[1], sd[2] * fw[0] - sd[0] * fw[2], sd[0] * fw[1] - sd[1] * fw[0]};
    const float *rows[3] = {sd, up, fw};
    for (int r = 0; r < 3; r++) {
        float s = r == 2 ? -1.0f : 1.0f;
        set(90 + r, s * rows[r][0], s * rows[r][1], s * rows[r][2],
            -s * (rows[r][0] * eye[0] + rows[r][1] * eye[1] + rows[r][2] * eye[2]));
    }
    float fy = 1.0f / tanf(0.45f), zn = 0.1f, zf = 100, a = (zf + zn) / (zn - zf), bb = 2 * zf * zn / (zn - zf);
    set(86, fy / (400.0f / 240.0f), 0, 0, 0); set(87, 0, fy, 0, 0); set(88, 0, 0, -(a - 1) / 2, -bb / 2); set(89, 0, 0, -1, 0);
    set(85, eye[0], eye[1], eye[2], 1);
    set(82, 1, 1, 1, 1);            /* emitter colour */
    set(83, 1, 1, 1, 1);            /* texture repeat */
    set(84, 0, 0, 0, 0);            /* pivot, depth offset */

    static const int variant[4] = {EFT_BILLBOARD | EFT_ROT | EFT_INST, EFT_YBILLBOARD | EFT_INST,
                                   EFT_DIR_VIEW | EFT_INST, EFT_POLY_XZ | EFT_INST};
    for (int row = 0; row < 4; row++) {
        for (int n = 0; n < 8; n++) {
            int r = 1 + 10 * n;
            float h = (float)n / 8, x = -4.2f + 2.8f * row + 0.35f * (float)(n % 2), y = 0.2f + 0.45f * (float)n;
            set(r + 0, 0.5f + 0.5f * cosf(6.28f * h), 0.5f + 0.5f * cosf(6.28f * (h + 0.33f)), 0.5f + 0.5f * cosf(6.28f * (h + 0.66f)), 0.9f);
            set(r + 1, 0.9f, row == 2 ? 1.6f : 0.9f, 0, 0);             /* scale, texture rotations */
            set(r + 2, 0, 0, 1, 1); set(r + 3, 0, 0, 1, 1);             /* texture offsets / flips */
            set(r + 4, x, row == 3 ? 0.02f * n : y, row == 3 ? 1.2f - 0.5f * n : 0, 1);  /* position */
            set(r + 5, 1, 1, 0, 0);                                      /* velocity (directional) */
            set(r + 6, 0, 0, 0.3f * n, 0);                               /* rotation */
            set(r + 7, 1, 0, 0, 0); set(r + 8, 0, 1, 0, 0); set(r + 9, 0, 0, 1, 0); /* emitter rows */
        }
        render_set_vs_float(0, &C[0][0], 96);
        render_set_vs_bool((uint16_t)variant[row]);
        render_draw_indexed(RPRIM_TRIANGLES, idx, 1, 48);
    }
    static uint8_t rgba[400 * 240 * 4], png[400 * 240 * 4];
    int w = 0, h = 0;
    render_read_surface(A32(color), rgba, &w, &h);
    for (int y = 0; y < h; y++) memcpy(png + (size_t)y * w * 4, rgba + (size_t)(h - 1 - y) * w * 4, (size_t)w * 4);
    long lit = 0;
    for (int i = 0; i < w * h; i++) {
        png[i * 4 + 3] = 255;
        if (png[i * 4] > 60 || png[i * 4 + 1] > 60 || png[i * 4 + 2] > 80) lit++;
    }
    char path[1024];
    snprintf(path, sizeof path, "%s/eft_test.png", out);
    png_write_rgba(path, png, w, h);
    printf("eft_test: %llu draws, %ld lit pixels\n", (unsigned long long)render_stats().draws, lit);
    CHECK(lit > 3000, "almost nothing drawn (%ld)", lit);
    plat_shutdown();
    printf(fails ? "eft_test: %d FAILED\n" : "eft_test: OK\n", fails);
    return fails ? 1 : 0;
}
