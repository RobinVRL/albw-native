/* Standalone test of the Tier B render path, without the game: drives the real native nngx layer
 * (sdk/gfx.c) and nn::gr replacements (sdk/gr.c) the way the game's frame does:
 *   display buffers + command list, MemoryFill (clear) of a VRAM colour/depth buffer, gr
 *   MakeCommand calls writing native markers at CURRENT_BUFADDR (render target, viewport,
 *   RenderState, combiner, texture unit), draws, a prebuilt block run through the CMDBUF call
 *   helper (003CC230) with a scissor, SplitDrawCmdlist, B2L transfer to the display buffer,
 *   RunCmdlist, SwapBuffers; then checks pixels of the render target and of the rotated scan-out.
 * Not linked into the game. Build: native/render/test/build.sh. Usage: render_test [outdir]
 * The fake game objects are static and the test is linked -no-pie, so (like the game's data on
 * 64-bit, see gfx.c) their addresses fit the 32-bit address fields of the 3DS structures. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../../platform/platform.h"
#include "../render.h"
#include "../texdecode.h"

/* nngx / GSP / gr natives under test (sdk/gfx.c, sdk/gr.c) */
int32_t func_006006B0(void *alloc_fn, void *free_fn);
void func_00600148(int32_t n, uint32_t *ids);
void func_005FF418(uint32_t id);
void func_005FF850(uint32_t bufsize, uint32_t reqcount);
void func_0060027C(int32_t n, uint32_t *ids);
void func_005FEF2C(uint32_t display);
void func_005FF5DC(uint32_t id);
void func_005FFAF0(uint32_t format, uint32_t width, uint32_t height, uint32_t area);
void func_006005BC(uint32_t pname, uint32_t *out);
void *func_00600660(uint32_t area);
void func_005FF2C8(void *b0, uint32_t s0, uint32_t v0, uint32_t w0, void *b1, uint32_t s1, uint32_t v1, uint32_t w1);
void func_006003D8(uint32_t pname, uint32_t *out);
void func_00601378(int32_t bytes);
void func_005FFDC0(void);
void func_005FF018(const void *src, uint32_t sw, uint32_t sh, uint32_t sfmt, void *dst, uint32_t dw, uint32_t dh,
                   uint32_t dfmt, uint32_t aa, uint32_t flip, uint32_t block);
void func_00601390(void);
void func_005FF760(void);
void func_00601658(uint32_t display);
uint32_t *func_00561B30(const uint8_t *fb, uint32_t *p, uint32_t which, int32_t flush);
uint32_t *func_00563A5C(const uint32_t *vp, uint32_t *p);
uint32_t *func_00563170(const uint8_t *s, uint32_t *p);
uint32_t *func_00561C34(const uint8_t *rs, uint32_t *p, int32_t fbAccess);
uint32_t *func_00563918(const uint8_t *c, uint32_t *p);
uint32_t *func_005632B0(const uint8_t *t, uint32_t *p, int32_t with_cfg);
uint32_t *func_003CC230(uint32_t *p, uint32_t *size_slot, uint32_t target, uint32_t size);

/* link stubs for gfx.c */
void runtime_fatal(const char *fmt, ...) { fprintf(stderr, "fatal: %s\n", fmt); abort(); }
void func_004964F8(uint32_t a, void *b, int32_t x, int32_t y, uint64_t c) {}

static void (*readpix)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; fprintf(stderr, "FAIL: " __VA_ARGS__); fputc('\n', stderr); } } while (0)

static void save_ppm(const char *path, const uint8_t *rgba, int w, int h) {
    FILE *f = fopen(path, "wb");
    if (!f) { perror(path); return; }
    fprintf(f, "P6 %d %d 255\n", w, h);
    for (int y = h - 1; y >= 0; y--) /* GL rows bottom-up -> image top-down */
        for (int x = 0; x < w; x++) fwrite(rgba + ((size_t)y * w + x) * 4, 1, 3, f);
    fclose(f);
    fprintf(stderr, "wrote %s\n", path);
}

static int near_px(const uint8_t *p, int r, int g, int b) {
    return abs(p[0] - r) <= 4 && abs(p[1] - g) <= 4 && abs(p[2] - b) <= 4;
}

/* little helpers to write the 3DS-layout game objects */
static void w32(uint8_t *o, int off, uint32_t v) { memcpy(o + off, &v, 4); }
static void wf(uint8_t *o, int off, float v) { memcpy(o + off, &v, 4); }

static uint32_t *cmd_cur(void) {
    uint32_t a;
    func_006003D8(0x208, &a);
    return (uint32_t *)(uintptr_t)a;
}
static void cmd_done(uint32_t *start, uint32_t *end) { func_00601378((int32_t)((uint8_t *)end - (uint8_t *)start)); }

static uint32_t *rec_quad(uint32_t *p, const float (*v)[8]) {
    /* the attribute arrays of a future native draw producer: v0 position, v1 colour, v2 uv */
    ROp a;
    for (int i = 0; i < 3; i++) {
        memset(&a, 0, sizeof a);
        a.type = ROP_ATTRIB;
        a.unit = (uint8_t)i;
        a.u.attrib.ptr = (uintptr_t)&v[0][i == 0 ? 0 : i == 1 ? 3 : 6];
        a.u.attrib.type = RATTR_FLOAT;
        a.u.attrib.count = (uint8_t)(i == 0 ? 3 : i == 1 ? 3 : 2);
        a.u.attrib.stride = sizeof v[0];
        p = render_rec(p, &a);
    }
    ROp d;
    memset(&d, 0, sizeof d);
    d.type = ROP_DRAW;
    d.u.draw.prim = RPRIM_STRIP;
    d.u.draw.count = 4;
    return render_rec(p, &d);
}

static int texdecode_selftest(void) {
    int bad = 0;
    enum { W = 16, H = 16 };
    uint8_t img[W * H * 4], out[W * H * 4], tiled[W * H * 4];
    for (int i = 0; i < W * H; i++) {
        img[i * 4] = (uint8_t)(i * 7);
        img[i * 4 + 1] = (uint8_t)(i * 13);
        img[i * 4 + 2] = (uint8_t)(i * 29);
        img[i * 4 + 3] = (uint8_t)(255 - i);
    }
    for (int fmt = TEXFMT_RGBA8; fmt <= TEXFMT_RGBA4; fmt++) {
        tex_encode(fmt, img, W, H, tiled);
        tex_decode(fmt, tiled, W, H, out);
        int tol = fmt == TEXFMT_RGBA8 || fmt == TEXFMT_RGB8 ? 0 : fmt == TEXFMT_RGBA4 ? 17 : 8;
        for (int i = 0; i < W * H * 4; i++) {
            if (fmt == TEXFMT_RGB8 || fmt == TEXFMT_RGB565) { if (i % 4 == 3) continue; }
            if (fmt == TEXFMT_RGB5A1 && i % 4 == 3) { if ((out[i] == 255) != (img[i] >= 128)) bad++; continue; }
            if (abs(out[i] - img[i]) > tol) { bad++; break; }
        }
        CHECK(!bad, "texdecode round trip %s", texfmt_name(fmt));
    }
    /* known tiled layout: Morton order, top tile row first: texel (x=1, y=0 from top) is at index 1
     * of tile 0, texel (0, 1) at index 2 */
    uint8_t l8[64 * 4] = {0};
    for (int i = 0; i < 64 * 4; i++) l8[i] = (uint8_t)i;
    uint8_t o[16 * 16 * 4];
    tex_decode(TEXFMT_L8, l8, 16, 16, o);
    CHECK(o[((15 - 0) * 16 + 1) * 4] == 1 && o[((15 - 1) * 16 + 0) * 4] == 2 && o[((15 - 0) * 16 + 8) * 4] == 64,
          "L8 tiled layout");
    /* ETC1: a block in individual mode with both base colours = 0x88 and zero modifiers is flat */
    uint8_t etc[8 * 4];
    memset(etc, 0, sizeof etc);
    for (int b = 0; b < 4; b++) {
        uint64_t v = (uint64_t)0x888888 << 40; /* R1=R2=8, G1=G2=8, B1=B2=8 -> 0x88; table 0; idx 0 -> +2 */
        memcpy(etc + b * 8, &v, 8);
    }
    uint8_t eo[8 * 8 * 4];
    tex_decode(TEXFMT_ETC1, etc, 8, 8, eo);
    CHECK(eo[0] == 0x8A && eo[1] == 0x8A && eo[2] == 0x8A && eo[3] == 255, "ETC1 flat block (%02x)", eo[0]);
    return bad;
}

int main(int argc, char **argv) {
    const char *outdir = argc > 1 ? argv[1] : ".";
    texdecode_selftest();
    PlatConfig cfg = {1, 1, 0};
    if (plat_init("ALBW render test", &cfg)) return 2;
    readpix = (void (*)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *))SDL_GL_GetProcAddress("glReadPixels");

    static int dummy_alloc, dummy_free;
    func_006006B0(&dummy_alloc, &dummy_free);
    uint32_t list;
    func_00600148(1, &list);
    func_005FF418(list);
    func_005FF850(0x10000, 64);

    /* display buffers: top 240x400 RGB8, bottom 240x320 RGB8 (portrait, like the game) */
    uint32_t db[2], dtop, dbot;
    func_0060027C(2, db);
    func_005FEF2C(0x400); func_005FF5DC(db[0]); func_005FFAF0(0x8051, 240, 400, 0x20000);
    func_006005BC(0x600, &dtop);
    func_005FEF2C(0x401); func_005FF5DC(db[1]); func_005FFAF0(0x8051, 240, 320, 0x20000);
    func_006005BC(0x600, &dbot);

    uint8_t *vram = func_00600660(0x20000);
    uint8_t *color = vram, *depth = vram + 0x80000, *bcolor = vram + 0x100000;
    const uint32_t csz = 240 * 400 * 4;

    /* clear: colour (R 0x20 G 0x40 B 0x80 A 0xFF), depth 1.0 / stencil 0 - like 003CB588 */
    func_005FF2C8(color, csz, 0x204080FFu, 32, depth, csz, 0x00FFFFFFu, 32);
    func_005FF2C8(bcolor, 240 * 320 * 4, 0x00FF00FFu, 32, NULL, 0, 0, 0);

    /* --- frame commands through the gr replacements, at CURRENT_BUFADDR */
    static uint8_t fb[0x48] = {0};
    w32(fb, 0x00, (uint32_t)(uintptr_t)color); fb[0x04] = 0;
    w32(fb, 0x24, (uint32_t)(uintptr_t)depth); fb[0x28] = 3;
    w32(fb, 0x40, 240); w32(fb, 0x44, 400);
    uint32_t vp[4] = {0, 0, 240, 400};
    static uint8_t rs[0x80] = {0};
    rs[0x50] = 15;                         /* colour mask */
    rs[0x54] = 1; rs[0x55] = 1; rs[0x56] = 4; /* depth test LESS, write */
    wf(rs, 0x70, 0.f); wf(rs, 0x74, 1.f);  /* depth range */
    rs[0x78] = 24;
    static uint8_t tev[0x94] = {0};
    for (int i = 0; i < 6; i++) {
        uint8_t *s = tev + i * 0x18;
        s[4] = s[0xD] = i == 0 ? 0 : 15; /* stage 0: primary colour; others: previous */
    }

    uint32_t *p0 = cmd_cur(), *p = p0;
    p = func_00561B30(fb, p, 7, 0);
    p = func_00563A5C(vp, p);
    p = func_00561C34(rs, p, 1);
    p = func_00563918(tev, p);
    /* quad 1: red, RT x 0..120 / y 300..400 (LCD bottom-left after the rotation), z 0.5 */
    static const float q1[4][8] = {
        {-1, 0.5f, -0.5f, 1, 0, 0, 0, 0}, {0, 0.5f, -0.5f, 1, 0, 0, 1, 0},
        {-1, 1, -0.5f, 1, 0, 0, 0, 1}, {0, 1, -0.5f, 1, 0, 0, 1, 1}};
    p = rec_quad(p, q1);
    cmd_done(p0, p);

    /* quad 2: textured (checker 16x16 RGBA8 in VRAM, tex0 * primary white), RT centre */
    static uint8_t texmem[16 * 16 * 4];
    {
        uint8_t img[16 * 16 * 4];
        for (int y = 0; y < 16; y++)
            for (int x = 0; x < 16; x++) {
                int on = (x / 8 + y / 8) & 1;
                uint8_t *d = img + (y * 16 + x) * 4;
                d[0] = on ? 255 : 0; d[1] = on ? 255 : 0; d[2] = on ? 0 : 255; d[3] = 255;
            }
        tex_encode(TEXFMT_RGBA8, img, 16, 16, texmem);
    }
    static uint8_t units[0xA4] = {0};
    w32(units, 0x00, (uint32_t)(uintptr_t)texmem);
    w32(units, 0x04, 16 | 16u << 16);
    units[0x08] = TEXFMT_RGBA8; units[0x09] = 2; units[0x0A] = 2; units[0x0B] = 0; units[0x0C] = 0;
    units[0x1C] = 0; /* 2D, enabled */
    w32(units, 0x38, (uint32_t)(uintptr_t)units);
    static uint8_t tev2[0x94];
    memcpy(tev2, tev, sizeof tev2);
    tev2[0] = 1; tev2[4] = 3; tev2[5] = 0; /* rgb = tex0 * primary */
    p0 = p = cmd_cur();
    p = func_005632B0(units, p, 1);
    p = func_00563918(tev2, p);
    static const float q2[4][8] = {
        {-0.5f, -0.5f, -0.25f, 1, 1, 1, 0, 0}, {0.5f, -0.5f, -0.25f, 1, 1, 1, 1, 0},
        {-0.5f, 0.5f, -0.25f, 1, 1, 1, 0, 1}, {0.5f, 0.5f, -0.25f, 1, 1, 1, 1, 1}};
    p = rec_quad(p, q2);
    cmd_done(p0, p);

    /* prebuilt block (e.g. an environment block built at init), called through 003CC230:
     * scissor RT x 200..240, y 0..40, then a full-screen yellow quad at depth 0.9 (passes depth
     * only where nothing nearer was drawn) */
    static uint32_t block[64];
    uint32_t *b = block;
    static uint8_t sc[0x1C] = {0};
    sc[0] = 1; w32(sc, 4, 200); w32(sc, 8, 0); w32(sc, 0xC, 40); w32(sc, 0x10, 40); w32(sc, 0x14, 240); w32(sc, 0x18, 400);
    b = func_00563170(sc, b);
    static const float q3[4][8] = {
        {-1, -1, -0.9f, 1, 1, 1, 0, 0}, {1, -1, -0.9f, 1, 1, 1, 0, 0},
        {-1, 1, -0.9f, 1, 1, 1, 0, 0}, {1, 1, -0.9f, 1, 1, 1, 0, 0}};
    b = func_00563918(tev, b);
    b = rec_quad(b, q3);
    sc[0] = 0;
    b = func_00563170(sc, b);
    p0 = p = cmd_cur();
    uint32_t slot = 0;
    p = func_003CC230(p, &slot, (uint32_t)(uintptr_t)block, (uint32_t)((uint8_t *)b - (uint8_t *)block));
    cmd_done(p0, p);
    func_005FFDC0(); /* close the 3D chunk */

    /* resolve: render target -> top display buffer; bottom: the green-cleared buffer */
    func_005FF018(color, 240, 400, 0x8058, (void *)(uintptr_t)dtop, 240, 400, 0x8051, 0x500, 0, 8);
    func_005FF018(bcolor, 240, 320, 0x8058, (void *)(uintptr_t)dbot, 240, 320, 0x8051, 0x500, 0, 8);
    func_00601390(); /* run: fills, ops, transfers in request order */

    RStats st = render_stats();
    fprintf(stderr, "ops recorded %llu run %llu pooled %llu, fills %llu transfers %llu draws %llu tex uploads %llu\n",
            (unsigned long long)st.ops_recorded, (unsigned long long)st.ops_run, (unsigned long long)st.ops_pooled,
            (unsigned long long)st.fills, (unsigned long long)st.transfers, (unsigned long long)st.draws,
            (unsigned long long)st.tex_uploads);
    CHECK(st.draws == 3, "3 draws (got %llu)", (unsigned long long)st.draws);
    CHECK(st.transfers == 2, "2 transfers (got %llu)", (unsigned long long)st.transfers);

    /* --- render target check (GL rows = window y) */
    int w, h;
    static uint8_t rt[240 * 400 * 4];
    if (render_read_surface((uintptr_t)color, rt, &w, &h) && w == 240 && h == 400) {
        char path[512];
        snprintf(path, sizeof path, "%s/render_target.ppm", outdir);
        save_ppm(path, rt, w, h);
        CHECK(near_px(rt + ((size_t)350 * w + 60) * 4, 255, 0, 0), "red quad at RT (60,350)");
        CHECK(near_px(rt + ((size_t)10 * w + 60) * 4, 0x20, 0x40, 0x80), "clear colour at RT (60,10)");
        /* checker: window (100, 180) -> uv (0.33, 0.4) -> texel (5, 6): x/8 + y/8 = 0 -> blue */
        CHECK(near_px(rt + ((size_t)180 * w + 100) * 4, 0, 0, 255), "texture texel (blue) at RT (100,180)");
        CHECK(near_px(rt + ((size_t)180 * w + 160) * 4, 255, 255, 0), "texture texel (yellow) at RT (160,180)");
        CHECK(near_px(rt + ((size_t)20 * w + 220) * 4, 255, 255, 255), "scissored white quad at RT (220,20)");
        CHECK(near_px(rt + ((size_t)20 * w + 180) * 4, 0x20, 0x40, 0x80), "outside the scissor at RT (180,20)");
    } else {
        CHECK(0, "render target read back");
    }

    /* --- scan-out of the top display buffer, rotated to 400x240 */
    plat_begin_screen(SCREEN_TOP);
    CHECK(render_scanout(SCREEN_TOP, (void *)(uintptr_t)dtop), "scan-out of the top display buffer");
    static uint8_t scr[400 * 240 * 4];
    readpix(0, 0, 400, 240, GL_RGBA, GL_UNSIGNED_BYTE, scr);
    {
        char path[512];
        snprintf(path, sizeof path, "%s/screen_top.ppm", outdir);
        save_ppm(path, scr, 400, 240);
        /* LCD (x from left, y from top) shows RT (239 - y, 399 - x): red quad (RT x<120, y>300) is at
         * LCD x<100, y>120, i.e. the bottom-left; GL row = 239 - lcd_y */
        CHECK(near_px(scr + ((size_t)(239 - 200) * 400 + 50) * 4, 255, 0, 0), "red at LCD (50,200)");
        CHECK(near_px(scr + ((size_t)(239 - 20) * 400 + 50) * 4, 0x20, 0x40, 0x80), "clear at LCD (50,20)");
        /* scissored quad RT x 200..240, y 0..40 -> LCD x 360..400, y 0..40 (top-right) */
        CHECK(near_px(scr + ((size_t)(239 - 20) * 400 + 380) * 4, 255, 255, 255), "white at LCD (380,20)");
    }
    plat_begin_screen(SCREEN_BOTTOM);
    CHECK(render_scanout(SCREEN_BOTTOM, (void *)(uintptr_t)dbot), "scan-out bottom");
    readpix(0, 0, 320, 240, GL_RGBA, GL_UNSIGNED_BYTE, scr);
    CHECK(near_px(scr + ((size_t)120 * 320 + 160) * 4, 0, 255, 0), "bottom screen green");

    /* present through nngxSwapBuffers (gfx.c present path: scan-out + plat_end_frame) */
    func_00601658(0x402);
    /* second frame: clear the list, the pool dedupes identical ops */
    uint64_t pooled = render_stats().ops_pooled;
    func_005FF760();
    p0 = p = cmd_cur();
    p = func_00561B30(fb, p, 7, 0);
    p = func_00563A5C(vp, p);
    cmd_done(p0, p);
    CHECK(render_stats().ops_pooled == pooled, "identical ops deduplicated");

    fprintf(stderr, fails ? "render_test: %d FAILED\n" : "render_test: all checks passed\n", fails);
    plat_shutdown();
    return fails != 0;
}
