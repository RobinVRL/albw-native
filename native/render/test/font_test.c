/* Standalone test of the native nw::font / nw::lyt RectDrawer path (native/sdk/lyt.c +
 * RPROG_FONT_RECT in native/render/font.c) with real game data from the user's ROM, without the
 * game: the drawer, material, TexMap, TextureObject and DispStringBuffer objects are filled the way
 * the decompiled lyt / font code fills them, then the REPLACED producers record the command list:
 *   004205A4 shader object init (real nwfont2_RectDrawerShader.shbin for the block sizes)
 *   00420028 DrawBegin, 0041F3C0 projection, 00401160 + 004018A8 material combiner / texture
 *     (real BFLIM layout image TitleLogoUSEU_00 from Lyt_Menu.arc), records + pools + flush;
 *     a second pane without texture and four corner colours (bilinear vertex colours);
 *   0041E948 builds the cached command of a string with glyphs of the real MessageFont.bffnt
 *     (RegionBoot.szs), 0041F970 draws it twice (shadow pass b0|b2, main pass b0) with a top /
 *     bottom colour gradient;
 * then renders the list through render_exec_cmds into a 400x240 surface and writes a PNG.
 * Not linked into the game. Build: native/render/test/build.sh. Usage: font_test <out dir>
 * Static buffers + -no-pie keep every game-visible address below 2 GiB (32-bit struct fields). */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../../assets/dvlb.h"
#include "../../assets/png.h"
#include "../../assets/romfs.h"
#include "../../assets/sarc.h"
#include "../../assets/texture.h"
#include "../../assets/yaz0.h"
#include "../../platform/platform.h"
#include "../font.h"
#include "../render.h"

/* replaced producers under test (native/sdk/lyt.c) */
uint32_t *func_0041F3C0(uint8_t *drawer, uint32_t *p, const void *src, uint32_t reg, int32_t count);
uint32_t *func_0041F54C(uint8_t *drawer, uint32_t *p, int32_t n);
void func_004205A4(uint8_t *obj, uint8_t *mem, const uint8_t *shbin);
uint32_t *func_00420028(uint8_t *d, uint32_t *p, uint32_t flags);
uint32_t *func_00420074(uint8_t *d, uint32_t *p, uint32_t flags);
uint32_t *func_0041E948(uint8_t *d, uint32_t *p, uint32_t end, uint8_t *buf);
uint32_t *func_0041F970(uint8_t *d, uint32_t *p, const uint8_t *c, uint32_t x);
uint32_t *func_004018A8(uint8_t *d, uint32_t *p, uint8_t *m);
uint32_t *func_00401160(uint8_t *d, uint32_t *p, uint8_t *m, uint32_t x);

/* test stand-ins for the decompiled game functions lyt.c calls */
uint32_t *func_004010C8(uint8_t *d, uint32_t *p) { /* = 0041F6CC + 0041F5A8 + 0041F6F8 + 0041F54C */
    uint32_t n = d[0x30];
    if (!n) return p;
    p = func_0041F3C0(d, p, d + 0x88, 9, (int32_t)n);
    d[0x30] = 0;
    if (d[0x32] < d[0x31]) {
        p = func_0041F3C0(d, p, d + 0x1F8 + d[0x32] * 16, 0x20u + d[0x32], d[0x31] - d[0x32]);
        d[0x32] = d[0x31];
    }
    if (d[0x34] < d[0x33]) {
        p = func_0041F3C0(d, p, d + 0x3F8 + d[0x34] * 16, 0x40u + d[0x34], d[0x33] - d[0x34]);
        d[0x33] = d[0x34] = 0;
    }
    return func_0041F54C(d, p, (int32_t)n);
}
uint32_t *func_0041F83C(uint8_t *d, uint32_t *p, uint32_t addr, uint32_t bytes) { return p; }

static int fails;
#define CHECK(c, ...) do { if (!(c)) { fails++; fprintf(stderr, "FAIL: " __VA_ARGS__); fputc('\n', stderr); } } while (0)

/* ---------------------------------------------------------------- game-visible memory (static) */
static uint8_t drawer[0x700] __attribute__((aligned(16)));
static uint8_t shmem[0x4000] __attribute__((aligned(16)));
static uint32_t cmd[1 << 16] __attribute__((aligned(16)));
static uint32_t strcmd[1 << 14] __attribute__((aligned(16)));
static uint8_t fontfile[512 * 1024] __attribute__((aligned(128)));
static uint8_t image[512 * 1024] __attribute__((aligned(128)));
static uint8_t mat1[0xA0], mat2[0xA0], res1[0x40], res2[0x40];
static uint8_t texobj[0x18] __attribute__((aligned(8)));
static uint8_t strbuf[0x44 + 128 * 0x20] __attribute__((aligned(8)));
static uint8_t strdone[32];
static uint8_t ctx[0x58] __attribute__((aligned(8)));
static float proj_lyt[20], proj_txt[16];
static uint8_t target[400 * 240 * 4];

static void w16(uint8_t *o, int off, uint32_t v) { uint16_t x = (uint16_t)v; memcpy(o + off, &x, 2); }
static void w32(uint8_t *o, int off, uint32_t v) { memcpy(o + off, &v, 4); }
static void wf(uint8_t *o, int off, float v) { memcpy(o + off, &v, 4); }
static uint32_t r32(const uint8_t *o, size_t off) { uint32_t v; memcpy(&v, o + off, 4); return v; }
static uint16_t r16(const uint8_t *o, size_t off) { uint16_t v; memcpy(&v, o + off, 2); return v; }
static uint32_t addr32(const void *p) { return (uint32_t)(uintptr_t)p; }

/* ---------------------------------------------------------------- ROM data */
static uint8_t *archive(const char *path, size_t *n) {
    size_t sz;
    uint8_t *b = romfs_read(path, &sz);
    if (!b) return NULL;
    size_t dn = 0;
    uint8_t *d = yaz0_decompress_alloc(b, sz, &dn);
    if (d) { free(b); *n = dn; return d; }
    *n = sz;
    return b;
}

/* ---------------------------------------------------------------- BFFNT (test-side glyph lookup) */
static const uint8_t *tglp, *cwdh;
static uint32_t cmap_first;

static int glyph_index(uint32_t code) {
    for (uint32_t o = cmap_first; o; ) {
        const uint8_t *c = fontfile + o - 8; /* offsets point past the block header */
        uint16_t begin = r16(c, 8), end = r16(c, 10), method = r16(c, 12);
        if (code >= begin && code <= end) {
            if (method == 0) return r16(c, 0x14) + (int)(code - begin);
            if (method == 1) { int v = r16(c, 0x14 + 2 * (code - begin)); if (v != 0xFFFF) return v; }
        }
        if (method == 2) {
            uint16_t n = r16(c, 0x14);
            for (int i = 0; i < n; i++)
                if (r16(c, 0x16 + 4 * i) == code) return r16(c, 0x18 + 4 * i);
        }
        o = r32(c, 0x10);
    }
    return 0;
}

/* lay out one string (y down, pixels) into strbuf CharAttributes; returns the count */
static int layout(const char *s, int n0, float x, float y, float scale) {
    int cw = tglp[8], ch = tglp[9], cols = r16(tglp, 0x14), rows = r16(tglp, 0x16);
    int sw = r16(tglp, 0x18), sh = r16(tglp, 0x1A);
    int n = n0;
    for (; *s; s++) {
        int g = glyph_index((uint8_t)*s);
        const uint8_t *wd = cwdh + 0x10 + 3 * g; /* left, glyph width, char width */
        int8_t left = (int8_t)wd[0];
        int gw = wd[1], adv = wd[2];
        int cell = g % (cols * rows), sheet = g / (cols * rows);
        int cx = cell % cols, cy = cell / cols;
        int px = cx * (cw + 1) + 1, py = cy * (ch + 1) + 1;
        uint8_t *a = strbuf + 0x44 + n * 0x20;
        memset(a, 0, 0x20);
        w16(a, 0, (uint32_t)(int)lroundf(gw * scale * 16));            /* size * 16 */
        w16(a, 2, (uint32_t)(int)lroundf(ch * scale * 16));
        w16(a, 4, (uint32_t)(int)lroundf((x + left * scale) * 4));     /* position * 4 */
        w16(a, 6, (uint32_t)(int)lroundf(y * 4));
        memcpy(a + 8, strbuf + 0x1C, 8);                               /* default colours */
        /* texcoords * 16384, PICA t (1 = top row of the sheet) */
        w16(a, 0x10, (uint32_t)(int)lroundf(16384.0f * px / sw));
        w16(a, 0x12, (uint32_t)(int)lroundf(16384.0f * (1.0f - (float)py / sh)));
        w16(a, 0x14, (uint32_t)(int)lroundf(16384.0f * (px + gw) / sw));
        w16(a, 0x16, (uint32_t)(int)lroundf(16384.0f * (1.0f - (float)(py + ch) / sh)));
        w32(a, 0x18, addr32(texobj));
        w16(a, 0x1E, (uint32_t)sheet);
        x += adv * scale;
        n++;
    }
    return n;
}

static void ortho_rows(float *m, float l, float r, float b, float t) {
    memset(m, 0, 16 * sizeof(float));
    m[0] = 2.0f / (r - l); m[3] = -(r + l) / (r - l);
    m[5] = 2.0f / (t - b); m[7] = -(t + b) / (t - b);
    m[11] = -0.5f;         /* PICA clip z in [-w, 0] */
    m[15] = 1.0f;
}

static const uint8_t *px_at(const uint8_t *rgba, int w, int x, int y_top, int h) {
    return rgba + ((size_t)(h - 1 - y_top) * w + x) * 4; /* GL rows are bottom-up */
}

int main(int argc, char **argv) {
    const char *outdir = argc > 1 ? argv[1] : ".";
    if (romfs_open(NULL)) { fprintf(stderr, "ROM not found (ALBW_ROM)\n"); return 2; }

    /* RegionBoot.szs: MessageFont.bffnt + the RectDrawer shader (by its DVLE symbol) */
    size_t rn;
    uint8_t *rb = archive("EU/RegionBoot.szs", &rn);
    Sarc sa;
    if (!rb || sarc_open(&sa, rb, rn)) { fprintf(stderr, "RegionBoot.szs\n"); return 2; }
    const SarcFile *ff = sarc_find(&sa, "EU/Font/MessageFont.bffnt");
    const uint8_t *shbin = NULL;
    for (size_t i = 0; i < sa.count && !shbin; i++) {
        DvlbInfo info;
        if (sa.files[i].size < 4 || memcmp(sa.files[i].data, "DVLB", 4) || dvlb_parse(sa.files[i].data, sa.files[i].size, &info))
            continue;
        for (int s = 0; s < info.programs[0].symbol_count; s++) {
            const char *nm = info.programs[0].symbols[s].name;
            if (nm && !strncmp(nm, "nwfont2_rectdrawershader", 24)) shbin = sa.files[i].data;
        }
    }
    if (!ff || !shbin || ff->size > sizeof fontfile) { fprintf(stderr, "font / shader not found\n"); return 2; }
    memcpy(fontfile, ff->data, ff->size);
    fprintf(stderr, "MessageFont.bffnt %zu bytes, RectDrawer shbin found\n", ff->size);

    /* Lyt_Menu.arc: title logo image */
    size_t ln;
    uint8_t *lb = archive("Archive/Lyt_Menu.arc", &ln);
    Sarc sl;
    if (!lb || sarc_open(&sl, lb, ln)) { fprintf(stderr, "Lyt_Menu.arc\n"); return 2; }
    const SarcFile *lf = sarc_find(&sl, "timg/TitleLogoUSEU_00.bflim");
    LimImage lim;
    if (!lf || lim_parse(lf->data, lf->size, &lim) || lim.size > sizeof image) { fprintf(stderr, "bflim\n"); return 2; }
    memcpy(image, lim.data, lim.size);
    fprintf(stderr, "TitleLogoUSEU_00.bflim %dx%d (stored %dx%d) %s flags %#x\n", lim.width, lim.height,
            lim.stored_w, lim.stored_h, pica_tex_format_name(lim.format), lim.flags);

    PlatConfig cfg = {1, 1, 0};
    if (plat_init("ALBW font/lyt test", &cfg)) return 2;
    if (!render_ready()) { fprintf(stderr, "no GL\n"); return 2; }

    /* ---------------- font resource as the game sees it (TextureObject from TGLP, 0042128C) */
    uint32_t finf = 0x14;
    tglp = fontfile + r32(fontfile, finf + 0x14) - 8;
    cwdh = fontfile + r32(fontfile, finf + 0x18) - 8;
    cmap_first = r32(fontfile, finf + 0x1C);
    uint32_t sheet_size = r32(tglp, 0xC);
    const uint8_t *sheets = fontfile + r32(tglp, 0x1C);
    w32(texobj, 4, addr32(sheets) >> 3);
    w16(texobj, 8, r16(tglp, 0x1A));             /* sheet height */
    w16(texobj, 0xA, r16(tglp, 0x18));           /* sheet width */
    texobj[0xE] = (uint8_t)r16(tglp, 0x12);      /* sheet format (PICA code) */
    texobj[0xF] = 1;
    w32(texobj, 0x10, sheet_size >> 3);
    w32(texobj, 0x14, 6);                        /* ResFont default filter: linear / linear */
    fprintf(stderr, "font: cell %dx%d, sheet %dx%d %s, %d sheet(s)\n", tglp[8], tglp[9], r16(tglp, 0x18),
            r16(tglp, 0x1A), pica_tex_format_name(r16(tglp, 0x12)), tglp[0xA]);

    /* ---------------- shader object (drawer + 4) */
    uint8_t *d = drawer;
    func_004205A4(d + 4, shmem, shbin);
    d[0x2C] = 1;
    CHECK(r32(d, 0xC) > 0 && r32(d, 0xC) < 0x200, "block A size %u", r32(d, 0xC));

    uint32_t *p = cmd;
    /* ---------------- layout: DrawBegin, projection (y up, origin at the centre like lyt) */
    p = func_00420028(d, p, 0);
    ortho_rows(proj_lyt, -200, 200, -120, 120);
    memcpy(d + 0x38, proj_lyt, 80);
    p = func_0041F3C0(d, p, d + 0x38, 0, 5);

    /* pane 1: TitleLogoUSEU_00 (1 texture, default material colours, default blend) */
    static const int TO_LYT[14] = {9, 6, 7, 5, 8, 3, 4, 0, 1, 2, 0x12, 0x13, 10, 11}; /* PICA -> lyt */
    uint8_t *tm = res1;
    /* rotated storage (FLIM flags bits 2-3 -> TextureInfo +9 -> TexMap +8 bits 16-17, 00404F24) */
    uint32_t rot = (uint32_t)(lim.flags >> 2 & 3);
    w32(tm, 8, 0u | 0u << 2 | 1u << 4 | 1u << 7 | (uint32_t)TO_LYT[lim.format] << 8 | rot << 16);
    w32(tm, 0xC, addr32(image));
    w16(tm, 0x10, (uint32_t)lim.stored_w);
    w16(tm, 0x12, (uint32_t)lim.stored_h);
    w32(mat1, 0x6C, 0x00000000);                 /* black colour */
    w32(mat1, 0x70, 0xFFFFFFFF);                 /* white colour */
    w32(mat1, 0x74, 1);                          /* 1 TexMap, no SRT / gen / alpha / blend */
    w32(mat1, 0x78, 1);                          /* 1 texture */
    w32(mat1, 0x7C, addr32(res1));
    p = func_00401160(d, p, mat1, 0);
    p = func_004018A8(d, p, mat1);
    float *pool = (float *)(d + 0x1F8), *pool64 = (float *)(d + 0x3F8);
    static const float id34[12] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};
    float lw = lim.width * 0.75f, lh = lim.height * 0.75f;
    memcpy(pool, id34, sizeof id34);                                       /* slots 0-2 modelview */
    float tc[4] = {0, 1, (float)lim.width / lim.stored_w, 1.0f - (float)lim.height / lim.stored_h};
    memcpy(pool + 12, tc, sizeof tc);                                      /* slot 3: texcoords */
    d[0x32] = 0; d[0x31] = 4;
    float g1[4] = {lw, lh, -lw / 2, 120 - 8};                              /* size, top-left */
    memcpy(pool64, g1, sizeof g1);
    d[0x34] = 0; d[0x33] = 1;
    float rec1[4] = {0, 32, 3, 1.0f};                                      /* mv 0, geometry c64, tc 3, alpha 1 */
    memcpy(d + 0x88, rec1, 16);
    d[0x30] = 1;
    p = func_004010C8(d, p);

    /* pane 2: no texture, four corner colours (vertex colour path, record w = colour index) */
    w32(mat2, 0x6C, 0x00000000);
    w32(mat2, 0x70, 0xFFFFFFFF);
    w32(mat2, 0x74, 0);
    w32(mat2, 0x78, 0);
    w32(mat2, 0x7C, addr32(res2));
    p = func_00401160(d, p, mat2, 0);
    p = func_004018A8(d, p, mat2);
    static const float cols[16] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1}; /* TL TR BL BR */
    memcpy(pool + 12, cols, sizeof cols);
    d[0x32] = 3; d[0x31] = 7;
    float g2[4] = {120, 36, 60, -60};
    memcpy(pool64, g2, sizeof g2);
    d[0x34] = 0; d[0x33] = 1;
    float rec2[4] = {0, 32, 0, 3.0f};
    memcpy(d + 0x88, rec2, 16);
    d[0x30] = 1;
    p = func_004010C8(d, p);

    /* ---------------- text: DispStringBuffer with two lines, shadow on */
    memset(strbuf, 0, sizeof strbuf);
    w32(strbuf, 8, addr32(strdone));
    static const uint8_t top[4] = {255, 255, 255, 255}, bot[4] = {255, 190, 60, 255};
    memcpy(strbuf + 0x1C, top, 4);
    memcpy(strbuf + 0x20, bot, 4);
    static const uint8_t shadow[8] = {255, 255, 255, 160, 255, 255, 255, 160};
    memcpy(strbuf + 0x24, shadow, 8);
    wf(strbuf, 0x2C, 2.0f); wf(strbuf, 0x30, -2.0f);  /* shadow offset (y negated by the draw) */
    wf(strbuf, 0x34, 1.0f); wf(strbuf, 0x38, 1.0f);
    strbuf[0x40] = 1;                                  /* shadow pass */
    int n = layout("A Link Between Worlds", 0, 70, 150, 1.0f);
    n = layout("PRESS START", n, 140, 184, 1.0f);
    w16(strbuf, 4, (uint32_t)n);
    w32(strbuf, 0x10, addr32(strcmd));
    uint32_t *se = func_0041E948(d, strcmd, 0xFFFFFFFFu, strbuf);
    w32(strbuf, 0xC, (uint32_t)(se - strcmd));
    fprintf(stderr, "string: %d chars, cached command %u words\n", n, r32(strbuf, 0xC));

    ortho_rows(proj_txt, 0, 400, 240, 0);              /* y down, pixels */
    w32(ctx, 0, addr32(strbuf));
    w32(ctx, 4, addr32(proj_txt));
    static const float black0[4] = {0, 0, 0, 0}, white1[4] = {1, 1, 1, 1}, sh_white[4] = {0, 0, 0, 1};
    memcpy(ctx + 0x10, black0, 16);
    memcpy(ctx + 0x20, white1, 16);
    memcpy(ctx + 0x30, black0, 16);
    memcpy(ctx + 0x40, sh_white, 16);
    p = func_00420074(d, p, 1);
    p = func_0041F970(d, p, ctx, 0);
    fprintf(stderr, "command list: %zu words\n", (size_t)(p - cmd));

    /* ---------------- execute */
    render_set_target((uintptr_t)target, RFMT_RGBA8, 0, 0, 400, 240);
    render_fill(target, sizeof target, 0x183048FFu, 32);
    render_set_viewport(0, 0, 400, 240);
    int ops = render_exec_cmds(cmd, (uint32_t)((uint8_t *)p - (uint8_t *)cmd));
    RStats st = render_stats();
    fprintf(stderr, "ran %d ops, %llu draws, %llu texture uploads\n", ops, (unsigned long long)st.draws,
            (unsigned long long)st.tex_uploads);
    /* logo, gradient, then 32 glyphs = 2 batches (23 rects max) per pass, shadow + main pass */
    CHECK(st.draws == 6, "expected 6 draws, got %llu", (unsigned long long)st.draws);

    static uint8_t rgba[400 * 240 * 4], img[400 * 240 * 4];
    int w, h;
    if (!render_read_surface((uintptr_t)target, rgba, &w, &h) || w != 400 || h != 240) { fprintf(stderr, "read\n"); return 1; }
    for (int y = 0; y < h; y++) memcpy(img + (size_t)y * w * 4, px_at(rgba, w, 0, y, h), (size_t)w * 4);
    char path[1024];
    snprintf(path, sizeof path, "%s/font_lyt_test.png", outdir);
    if (png_write_rgba(path, img, w, h)) fprintf(stderr, "PNG write failed\n");
    else fprintf(stderr, "wrote %s\n", path);

    /* gradient pane corners (pane at x 260..380, y 180..216 from the top) */
    const uint8_t *c;
    c = px_at(rgba, w, 262, 182, h); CHECK(c[0] > 200 && c[1] < 60 && c[2] < 60, "gradient TL not red (%d %d %d)", c[0], c[1], c[2]);
    c = px_at(rgba, w, 377, 182, h); CHECK(c[1] > 200 && c[0] < 60, "gradient TR not green (%d %d %d)", c[0], c[1], c[2]);
    c = px_at(rgba, w, 262, 213, h); CHECK(c[2] > 200 && c[0] < 60, "gradient BL not blue (%d %d %d)", c[0], c[1], c[2]);
    c = px_at(rgba, w, 377, 213, h); CHECK(c[0] > 200 && c[1] > 200 && c[2] < 60, "gradient BR not yellow (%d %d %d)", c[0], c[1], c[2]);
    /* logo: something drawn over the background inside its rectangle */
    int lit = 0, txt = 0;
    for (int y = 10; y < 100; y++)
        for (int x = 120; x < 280; x++) {
            const uint8_t *q = px_at(rgba, w, x, y, h);
            if (abs(q[0] - 0x18) + abs(q[1] - 0x30) + abs(q[2] - 0x48) > 60) lit++;
        }
    for (int y = 150; y < 210; y++)
        for (int x = 70; x < 330; x++) {
            const uint8_t *q = px_at(rgba, w, x, y, h);
            if (q[0] > 200 && q[1] > 150) txt++;
        }
    fprintf(stderr, "logo pixels %d, bright text pixels %d\n", lit, txt);
    CHECK(lit > 3000, "logo not drawn");
    CHECK(txt > 300, "text not drawn");
    fprintf(stderr, fails ? "font_test: %d FAILED\n" : "font_test: OK\n", fails);
    plat_shutdown();
    return fails ? 1 : 0;
}
