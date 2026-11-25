/* One-screen pause menu (ALBW_ONESCREEN=1), in the style of Ocarina of Time's: three pages (Items,
 * Gear, Map) on the faces of a ring around the viewer, turned with L / R. Everything on them comes
 * from the game: the images of its layout archives (Lyt_Common / Lyt_Game / Lyt_Collect), its
 * message font (MessageFont.bffnt) and its text (the MSBTs of LanguageBoot.szs, by label).
 * Included by platform.c after menu.c.
 *
 * Entry: Start in the field (onescreen_input, selor.c) or a click on the minimap call
 * pause_request(), which only notes the request. pause_frame_hook() (the end of frame_ms_trace,
 * the app core held) checks that the game can be paused now (no event / cutscene running: the
 * same checks as the game's own menu buttons, func_00477024), lets the game draw a few frames in
 * view 2 (plat_one_screen_view: the bottom screen drawn as on the 3DS, for the Map page; the top
 * screen without the minimap) and then runs pause_run(), modally, like the Esc menu: the game is
 * stopped until it closes. Changes call the game's own functions (X / Y: func_003616D4), never
 * simulated input.
 *
 * Debug (headless tests): ALBW_PAUSE_TRACE=1 logs the gate and the item state every 2 s;
 * ALBW_PAUSE_SCRIPT=<n>:<button>[:<frames>],... holds buttons at frame n of the menu's own loop
 * (counted from each opening; A B X Y L R START SELECT UP DOWN LEFT RIGHT ESC);
 * ALBW_PAUSE_SHOT=<n>,... writes the menu's frame n as pause_<opening * 10000 + n>.ppm (ALBW_SHOT_DIR).
 * ALBW_PAUSE_CUBE="<face height fraction> <tan vertical half-FOV> <offset down px>" (0.8 0.54 6). */

#include "../assets/romfs.h"
#include "../assets/sarc.h"
#include "../assets/yaz0.h"
#include "../assets/texture.h"

#ifndef GL_ONE
#define GL_ONE 1
#endif
#define PS_GL_REPEAT 0x2901
#define PS_GL_ZERO 0
#define PS_GL_LINEAR_MIPMAP_LINEAR 0x2703

/* weak: builds without the asset readers or the game (asset viewer, tests) */
__attribute__((weak)) int romfs_open(const char *rom_path);
__attribute__((weak)) uint8_t *romfs_read(const char *path, size_t *size_out);
__attribute__((weak)) int sarc_open(Sarc *s, const uint8_t *buf, size_t n);
__attribute__((weak)) const SarcFile *sarc_find(const Sarc *s, const char *name);
__attribute__((weak)) int yaz0_is(const uint8_t *src, size_t n);
__attribute__((weak)) uint8_t *yaz0_decompress_alloc(const uint8_t *src, size_t n, size_t *out_size);
__attribute__((weak)) int lim_parse(const uint8_t *buf, size_t n, LimImage *out);
__attribute__((weak)) int pica_tex_decode(const uint8_t *src, size_t src_size, int fmt, int w, int h, uint8_t *dst,
                                          int flip_for_gl);
__attribute__((weak)) const char *albw_rom_path(void);   /* sdk/fs.c: the ROM the game runs from */
/* the game */
__attribute__((weak)) _Bool func_003616D4(void *p, uint32_t index, int32_t value);   /* set item slot (1, 2) */
__attribute__((weak)) unsigned func_00520B48(unsigned mgr);   /* nonzero: something holds the game */
__attribute__((weak)) int func_0058D888(void *p);              /* nonzero: menus may open */
extern uint8_t data_0070FB60[] __attribute__((weak));   /* -> the player data owner (+0x10 = pdata) */
extern uint8_t data_0070B728[] __attribute__((weak));   /* -> the event manager (+0x44: running event) */
extern uint8_t data_00712450[] __attribute__((weak));
extern uint8_t data_007142C8[] __attribute__((weak));
void albw_sched_block_begin(void);
void albw_sched_block_end(void);

#define PS_W 320   /* one page, in page pixels */
#define PS_H 240

/* ================================================================ little helpers */
static uint16_t ps_r16(const uint8_t *p, size_t o) { return (uint16_t)(p[o] | p[o + 1] << 8); }
static uint32_t ps_r32(const uint8_t *p, size_t o) { return p[o] | p[o + 1] << 8 | p[o + 2] << 16 | (uint32_t)p[o + 3] << 24; }
static float ps_clampf(float v, float a, float b) { return v < a ? a : v > b ? b : v; }
static float ps_ease(float t) { t = ps_clampf(t, 0, 1); return t * t * (3 - 2 * t); }

/* ================================================================ assets */
static Sarc ps_lyt[3];
static int ps_nlyt;
static int ps_assets_state;   /* 0 not tried, 1 loaded, -1 failed */

static uint8_t *ps_load(const char *path, size_t *n) {
    uint8_t *b = romfs_read(path, n);
    if (!b) return NULL;
    if (yaz0_is(b, *n)) {
        size_t m;
        uint8_t *d = yaz0_decompress_alloc(b, *n, &m);
        free(b);
        if (!d) return NULL;
        b = d, *n = m;
    }
    return b;
}

static GLuint ps_upload(const uint8_t *rgba, int w, int h, int repeat) {
    GLuint t;
    glGenTextures(1, &t);
    glBindTexture(GL_TEXTURE_2D, t);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, repeat ? PS_GL_REPEAT : GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, repeat ? PS_GL_REPEAT : GL_CLAMP_TO_EDGE);
    return t;
}

/* layout images by name ("II_Bin32_00" = timg/II_Bin32_00.bflim), decoded on first use */
typedef struct { char name[40]; GLuint tex; int w, h; } PsTex;
static PsTex ps_texs[192];
static int ps_ntex;

static const PsTex *ps_img(const char *name) {
    if (!name) return NULL;
    for (int i = 0; i < ps_ntex; i++)
        if (!SDL_strcmp(ps_texs[i].name, name)) return ps_texs[i].tex ? &ps_texs[i] : NULL;
    if (ps_ntex == (int)(sizeof ps_texs / sizeof ps_texs[0])) return NULL;
    PsTex *t = &ps_texs[ps_ntex++];
    SDL_strlcpy(t->name, name, sizeof t->name);
    t->tex = 0;
    char path[80];
    SDL_snprintf(path, sizeof path, "timg/%s.bflim", name);
    for (int a = 0; a < ps_nlyt && !t->tex; a++) {
        const SarcFile *f = sarc_find(&ps_lyt[a], path);
        LimImage li;
        if (!f || lim_parse(f->data, f->size, &li)) continue;
        uint8_t *img = malloc((size_t)li.stored_w * li.stored_h * 4);
        if (!img) break;
        if (!pica_tex_decode(li.data, li.size, li.format, li.stored_w, li.stored_h, img, 0)) {
            /* the visible part is the top-left of the stored image */
            for (int y = 1; y < li.height; y++)
                memmove(img + (size_t)y * li.width * 4, img + (size_t)y * li.stored_w * 4, (size_t)li.width * 4);
            t->tex = ps_upload(img, li.width, li.height, !SDL_strncmp(name, "SRC_Pattern", 11));
            t->w = li.width;
            t->h = li.height;
        }
        free(img);
    }
    if (!t->tex) fprintf(stderr, "pause: no image %s\n", name);
    return t->tex ? t : NULL;
}

/* ---------------------------------------------------------------- font (BFFNT) */
static struct {
    const uint8_t *f;
    const uint8_t *tglp;
    uint32_t cwdh, cmap, finf;
    int cw, ch, cols, rows, sw, sh, nsheet, linefeed, alt;
    GLuint sheet[8];
} ps_fnt;

static int ps_glyph(uint32_t code) {
    if (!ps_fnt.f) return -1;
    for (uint32_t o = ps_fnt.cmap; o;) {
        const uint8_t *c = ps_fnt.f + o - 8;
        uint16_t begin = ps_r16(c, 8), end = ps_r16(c, 10), method = ps_r16(c, 12);
        if (code >= begin && code <= end) {
            if (method == 0) return ps_r16(c, 0x14) + (int)(code - begin);
            if (method == 1) { int v = ps_r16(c, 0x14 + 2 * (code - begin)); if (v != 0xFFFF) return v; }
        }
        if (method == 2) {
            uint16_t n = ps_r16(c, 0x14);
            for (int i = 0; i < n; i++)
                if (ps_r16(c, 0x16 + 4 * i) == code) return ps_r16(c, 0x18 + 4 * i);
        }
        o = ps_r32(c, 0x10);
    }
    return -1;
}

static void ps_glyph_w(int g, int *left, int *gw, int *adv) {
    for (uint32_t o = ps_fnt.cwdh; o;) {
        const uint8_t *c = ps_fnt.f + o - 8;
        int first = ps_r16(c, 8), last = ps_r16(c, 10);
        if (g >= first && g <= last) {
            const uint8_t *e = c + 0x10 + 3 * (g - first);
            *left = (int8_t)e[0], *gw = e[1], *adv = e[2];
            return;
        }
        o = ps_r32(c, 0xC);
    }
    const uint8_t *d = ps_fnt.f + ps_fnt.finf + 0x10;   /* the font's default widths */
    *left = (int8_t)d[0], *gw = d[1], *adv = d[2];
}

static void ps_font_init(const uint8_t *f, size_t n) {
    if (n < 0x40 || (SDL_memcmp(f, "FFNT", 4) && SDL_memcmp(f, "CFNT", 4))) return;
    uint32_t finf = ps_r16(f, 6);
    if (SDL_memcmp(f + finf, "FINF", 4)) return;
    ps_fnt.f = f;
    ps_fnt.finf = finf;
    ps_fnt.tglp = f + ps_r32(f, finf + 0x14) - 8;
    ps_fnt.cwdh = ps_r32(f, finf + 0x18);
    ps_fnt.cmap = ps_r32(f, finf + 0x1C);
    ps_fnt.linefeed = ps_r16(f, finf + 0xC);
    ps_fnt.alt = ps_r16(f, finf + 0xE);
    const uint8_t *t = ps_fnt.tglp;
    ps_fnt.cw = t[8], ps_fnt.ch = t[9], ps_fnt.nsheet = t[0xA];
    uint32_t sheet_size = ps_r32(t, 0xC);
    int fmt = ps_r16(t, 0x12);
    ps_fnt.cols = ps_r16(t, 0x14), ps_fnt.rows = ps_r16(t, 0x16);
    ps_fnt.sw = ps_r16(t, 0x18), ps_fnt.sh = ps_r16(t, 0x1A);
    const uint8_t *data = f + ps_r32(t, 0x1C);
    uint8_t *px = malloc((size_t)ps_fnt.sw * ps_fnt.sh * 4);
    if (!px) { ps_fnt.f = NULL; return; }
    if (ps_fnt.nsheet > 8) ps_fnt.nsheet = 8;
    for (int s = 0; s < ps_fnt.nsheet; s++) {
        if (pica_tex_decode(data + (size_t)s * sheet_size, sheet_size, fmt, ps_fnt.sw, ps_fnt.sh, px, 0)) break;
        /* white glyphs, coverage in alpha (A formats: alpha; L formats: the luminance) */
        int lum = fmt == PICA_TEX_L8 || fmt == PICA_TEX_L4;
        for (size_t i = 0; i < (size_t)ps_fnt.sw * ps_fnt.sh; i++) {
            uint8_t a = lum ? px[i * 4] : px[i * 4 + 3];
            px[i * 4] = px[i * 4 + 1] = px[i * 4 + 2] = 255;
            px[i * 4 + 3] = a;
        }
        ps_fnt.sheet[s] = ps_upload(px, ps_fnt.sw, ps_fnt.sh, 0);
    }
    free(px);
    fprintf(stderr, "pause: font cell %dx%d linefeed %d, %d sheet(s) %dx%d format %d\n", ps_fnt.cw, ps_fnt.ch,
            ps_fnt.linefeed, ps_fnt.nsheet, ps_fnt.sw, ps_fnt.sh, fmt);
}

/* ---------------------------------------------------------------- text (MSBT) */
#define PS_HI 0xF001   /* in expanded text: colour on (the game's <0,3:colour> tag) */
#define PS_LO 0xF000   /* colour off */
typedef struct { const uint8_t *lbl, *txt; } PsMsbt;
static PsMsbt ps_msg[128];
static int ps_nmsg, ps_names_file = -1;

static void ps_msbt_add(const uint8_t *d, size_t n) {
    if (n < 0x20 || SDL_memcmp(d, "MsgStdBn", 8) || d[8] != 0xFF || d[9] != 0xFE) return;
    int nsec = ps_r16(d, 0xE);
    size_t off = 0x20;
    PsMsbt m = {0};
    for (int s = 0; s < nsec && off + 0x10 <= n; s++) {
        uint32_t size = ps_r32(d, off + 4);
        if (!SDL_memcmp(d + off, "LBL1", 4)) m.lbl = d + off + 0x10;
        if (!SDL_memcmp(d + off, "TXT2", 4)) m.txt = d + off + 0x10;
        off = (off + 0x10 + size + 15) & ~(size_t)15;
    }
    if (m.lbl && m.txt && ps_nmsg < (int)(sizeof ps_msg / sizeof ps_msg[0])) ps_msg[ps_nmsg++] = m;
}

static int ps_label(int file, const char *label) {   /* text index, -1 */
    const uint8_t *b = ps_msg[file].lbl;
    size_t len = SDL_strlen(label);
    uint32_t ng = ps_r32(b, 0);
    for (uint32_t g = 0; g < ng; g++) {
        uint32_t cnt = ps_r32(b, 4 + 8 * g), o = ps_r32(b, 8 + 8 * g);
        for (uint32_t e = 0; e < cnt; e++) {
            size_t l = b[o];
            if (l == len && !SDL_memcmp(b + o + 1, label, len)) return (int)ps_r32(b, o + 1 + l);
            o += 5 + (uint32_t)l;
        }
    }
    return -1;
}

static int ps_expand(int file, int idx, uint16_t *out, int pos, int max, int depth) {
    const uint8_t *t = ps_msg[file].txt;
    if (idx < 0 || (uint32_t)idx >= ps_r32(t, 0)) return pos;
    const uint8_t *p = t + ps_r32(t, 4 + 4 * (uint32_t)idx);
    for (int guard = 0; guard < 4096; guard++) {
        uint16_t c = ps_r16(p, 0);
        p += 2;
        if (!c) break;
        if (c == 0x0E) {   /* tag: group, type, size, params */
            uint16_t g = ps_r16(p, 0), ty = ps_r16(p, 2), sz = ps_r16(p, 4);
            const uint8_t *pr = p + 6;
            p += 6 + sz;
            if (g == 2 && ty == 2 && sz >= 3 && depth < 3 && ps_names_file >= 0) {   /* an item's name */
                int start = pos;
                pos = ps_expand(ps_names_file, ps_r16(pr, 0), out, pos, max, depth + 1);
                if (!pr[2] && pos > start && out[start] >= 'A' && out[start] <= 'Z') out[start] += 32;
            } else if (g == 0 && ty == 3 && sz >= 2) {
                if (pos < max) out[pos++] = ps_r16(pr, 0) == 0xFFFF ? PS_LO : PS_HI;
            }
            continue;
        }
        if (c == 0x0F) { p += 4; continue; }   /* end tag */
        if (pos < max) out[pos++] = c;
    }
    return pos;
}

/* the text of a label (NULL: none); `near`: another label of the same file (names repeat) */
typedef struct { char label[48]; uint16_t text[256]; int ok; } PsMsgCache;
static PsMsgCache ps_mcache[160];
static int ps_nmcache;

static const uint16_t *ps_msg_get(const char *label, const char *near) {
    if (!label) return NULL;
    for (int i = 0; i < ps_nmcache; i++)
        if (!SDL_strcmp(ps_mcache[i].label, label)) return ps_mcache[i].ok ? ps_mcache[i].text : NULL;
    PsMsgCache *c = ps_nmcache < (int)(sizeof ps_mcache / sizeof ps_mcache[0]) ? &ps_mcache[ps_nmcache++] : &ps_mcache[0];
    SDL_strlcpy(c->label, label, sizeof c->label);
    c->ok = 0;
    for (int f = 0; f < ps_nmsg && !c->ok; f++) {
        int idx = ps_label(f, label);
        if (idx < 0 || (near && ps_label(f, near) < 0)) continue;
        int n = ps_expand(f, idx, c->text, 0, (int)(sizeof c->text / 2) - 1, 0);
        c->text[n] = 0;
        c->ok = n > 0;
    }
    return c->ok ? c->text : NULL;
}

static const uint16_t *ps_msgf(const char *fmt, const char *a, const char *b) {
    char l[64];
    SDL_snprintf(l, sizeof l, fmt, a, b);
    return ps_msg_get(l, NULL);
}

static const uint16_t *ps_ascii(const char *s) {   /* frontend-only strings, rotating buffers */
    static uint16_t buf[8][128];
    static int k;
    uint16_t *o = buf[k++ & 7];
    int i = 0;
    for (; s[i] && i < 127; i++) o[i] = (unsigned char)s[i];
    o[i] = 0;
    return o;
}

static int ps_assets_init(void) {
    if (ps_assets_state) return ps_assets_state > 0;
    ps_assets_state = -1;
    if (!romfs_open || !romfs_read || !sarc_open || !sarc_find || !yaz0_is || !yaz0_decompress_alloc || !lim_parse ||
        !pica_tex_decode) {
        fprintf(stderr, "pause: no asset readers in this build\n");
        return 0;
    }
    if (romfs_open(albw_rom_path ? albw_rom_path() : NULL)) { fprintf(stderr, "pause: cannot open the ROM\n"); return 0; }
    static const char *lyt[3] = {"Archive/Lyt_Common.arc", "Archive/Lyt_Game.arc", "Archive/Lyt_Collect.arc"};
    for (int i = 0; i < 3; i++) {
        size_t n;
        uint8_t *b = ps_load(lyt[i], &n);   /* kept: the archive views it */
        if (b && !sarc_open(&ps_lyt[ps_nlyt], b, n)) ps_nlyt++;
        else fprintf(stderr, "pause: cannot read %s\n", lyt[i]);
    }
    static const char *region[][3] = {{"EU/RegionBoot.szs", "EU/Font/MessageFont.bffnt", "EU_English/LanguageBoot.szs"},
                                      {"US/RegionBoot.szs", "US/Font/MessageFont.bffnt", "US_English/LanguageBoot.szs"}};
    for (int r = 0; r < 2 && !ps_fnt.f; r++) {
        size_t n;
        uint8_t *b = ps_load(region[r][0], &n);
        static Sarc s;
        if (!b) continue;
        if (sarc_open(&s, b, n)) { free(b); continue; }
        const SarcFile *f = sarc_find(&s, region[r][1]);
        if (f) ps_font_init(f->data, f->size);
        uint8_t *lb = ps_load(region[r][2], &n);
        static Sarc ls;
        if (lb && !sarc_open(&ls, lb, n))
            for (size_t i = 0; i < ls.count; i++) ps_msbt_add(ls.files[i].data, ls.files[i].size);
    }
    for (int f = 0; f < ps_nmsg && ps_names_file < 0; f++)
        if (ps_label(f, "item_name_icerod") >= 0) ps_names_file = f;
    fprintf(stderr, "pause: %d layout archives, font %s, %d message files (names %d)\n", ps_nlyt,
            ps_fnt.f ? "ok" : "missing", ps_nmsg, ps_names_file);
    ps_assets_state = ps_nlyt ? 1 : -1;
    return ps_assets_state > 0;
}

/* ================================================================ drawing */
typedef struct { float x, y, z, u, v, r, g, b, a; } PsVtx;
#define PS_MAX_VTX 12000
static PsVtx ps_vtx[PS_MAX_VTX];
static int ps_nv;
static GLuint ps_cur, ps_prog, ps_vao, ps_vbo, ps_white;
static GLint ps_loc_mvp, ps_loc_blur;

static const char *PS_VS =
    "#version 330 core\n"
    "layout(location=0) in vec3 pos; layout(location=1) in vec2 uv; layout(location=2) in vec4 col;\n"
    "uniform mat4 mvp; out vec2 v_uv; out vec4 v_col;\n"
    "void main() { gl_Position = mvp * vec4(pos, 1.0); v_uv = uv; v_col = col; }\n";
static const char *PS_FS =
    "#version 330 core\n"
    "in vec2 v_uv; in vec4 v_col; uniform sampler2D tex; uniform vec4 blur; out vec4 o;\n"
    "void main() {\n"
    "  vec4 c;\n"
    "  if (blur.x > 0.0) {\n"
    "    c = vec4(0.0);\n"
    "    for (int j = -3; j <= 3; j++) for (int i = -3; i <= 3; i++) c += texture(tex, v_uv + vec2(i, j) * blur.xy);\n"
    "    c = vec4(c.rgb / 49.0, 1.0);\n"
    "  } else c = texture(tex, v_uv);\n"
    "  o = c * v_col;\n"
    "}\n";

static void ps_gl_init(void) {
    if (ps_prog) return;
    ps_prog = gl_program(PS_VS, PS_FS);
    ps_loc_mvp = glGetUniformLocation(ps_prog, "mvp");
    ps_loc_blur = glGetUniformLocation(ps_prog, "blur");
    glUseProgram(ps_prog);
    glUniform1i(glGetUniformLocation(ps_prog, "tex"), 0);
    glGenVertexArrays(1, &ps_vao);
    glGenBuffers(1, &ps_vbo);
    glBindVertexArray(ps_vao);
    glBindBuffer(GL_ARRAY_BUFFER, ps_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof ps_vtx, NULL, GL_DYNAMIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(PsVtx), (void *)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(PsVtx), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(PsVtx), (void *)(5 * sizeof(float)));
    glBindVertexArray(0);
    static const uint8_t white[4 * 4] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
    ps_white = ps_upload(white, 2, 2, 0);
}

static void ps_flush(void) {
    if (!ps_nv) return;
    glBindTexture(GL_TEXTURE_2D, ps_cur);
    glBindBuffer(GL_ARRAY_BUFFER, ps_vbo);
    glBufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)(ps_nv * sizeof(PsVtx)), ps_vtx);
    glDrawArrays(GL_TRIANGLES, 0, ps_nv);
    ps_nv = 0;
}

static void ps_begin(void) {
    ps_nv = 0;
    glUseProgram(ps_prog);
    glBindVertexArray(ps_vao);
    glActiveTexture(GL_TEXTURE0);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_SCISSOR_TEST);
    glEnable(GL_BLEND);
    glUniform4fv(ps_loc_blur, 1, (float[4]){0, 0, 0, 0});
}

static void ps_mvp(const float m[16]) { ps_flush(); glUniformMatrix4fv(ps_loc_mvp, 1, GL_FALSE, m); }
static void ps_ortho(float w, float h) {   /* pixels, y down */
    float m[16] = {2 / w, 0, 0, 0, 0, -2 / h, 0, 0, 0, 0, 1, 0, -1, 1, 0, 1};
    ps_mvp(m);
}

static void ps_q4(GLuint tex, const PsVtx q[4]) {   /* q: top-left, top-right, bottom-left, bottom-right */
    if (tex != ps_cur) { ps_flush(); ps_cur = tex; }
    if (ps_nv + 6 > PS_MAX_VTX) ps_flush();
    static const int idx[6] = {0, 1, 2, 2, 1, 3};
    for (int k = 0; k < 6; k++) ps_vtx[ps_nv++] = q[idx[k]];
}

static void ps_quad(GLuint tex, float x, float y, float w, float h, float u0, float v0, float u1, float v1, const float c[4]) {
    PsVtx q[4] = {{x, y, 0, u0, v0, c[0], c[1], c[2], c[3]}, {x + w, y, 0, u1, v0, c[0], c[1], c[2], c[3]},
                  {x, y + h, 0, u0, v1, c[0], c[1], c[2], c[3]}, {x + w, y + h, 0, u1, v1, c[0], c[1], c[2], c[3]}};
    ps_q4(tex, q);
}

static void ps_rect(float x, float y, float w, float h, float r, float g, float b, float a) {
    ps_quad(ps_white, x, y, w, h, 0.5f, 0.5f, 0.5f, 0.5f, (float[4]){r, g, b, a});
}

static void ps_outline(float x, float y, float w, float h, float t, float r, float g, float b, float a) {
    ps_rect(x, y, w, t, r, g, b, a);
    ps_rect(x, y + h - t, w, t, r, g, b, a);
    ps_rect(x, y + t, t, h - 2 * t, r, g, b, a);
    ps_rect(x + w - t, y + t, t, h - 2 * t, r, g, b, a);
}

/* a layout image; flip bits 1 = mirror x, 2 = mirror y */
static void ps_image(const char *name, float x, float y, float w, float h, int flip, const float c[4]) {
    const PsTex *t = ps_img(name);
    if (!t) return;
    float u0 = flip & 1 ? 1.0f : 0.0f, v0 = flip & 2 ? 1.0f : 0.0f;
    ps_quad(t->tex, x, y, w, h, u0, v0, 1 - u0, 1 - v0, c);
}
static const float PS_WHITE[4] = {1, 1, 1, 1};

/* ---------------------------------------------------------------- text */
static float ps_text_w(const uint16_t *s, float px) {   /* widest line, px = line height */
    if (!s || !ps_fnt.f) return 0;
    float sc = px / ps_fnt.linefeed, w = 0, best = 0;
    for (; *s; s++) {
        if (*s == '\n') { if (w > best) best = w; w = 0; continue; }
        if (*s >= 0xE000 && *s < 0xF800) continue;
        int g = ps_glyph(*s);
        if (g < 0) g = ps_fnt.alt;
        int l, gw, adv;
        ps_glyph_w(g, &l, &gw, &adv);
        w += adv * sc;
    }
    return w > best ? w : best;
}

static float ps_text(const uint16_t *s, float x, float y, float px, const float col[4], const float hi[4], int shadow) {
    if (!s || !ps_fnt.f) return y;
    float sc = px / ps_fnt.linefeed, x0 = x;
    const float *c = col;
    int per = ps_fnt.cols * ps_fnt.rows;
    for (; *s; s++) {
        if (*s == '\n') { x = x0; y += px; continue; }
        if (*s == PS_HI) { c = hi ? hi : col; continue; }
        if (*s == PS_LO) { c = col; continue; }
        int g = ps_glyph(*s);
        if (g < 0) {
            if (*s >= 0xE000 && *s < 0xF800) continue;   /* button glyphs: not in this font */
            g = ps_fnt.alt;
        }
        int l, gw, adv;
        ps_glyph_w(g, &l, &gw, &adv);
        int sheet = per ? g / per : 0, cell = per ? g % per : 0;
        if (sheet < ps_fnt.nsheet && ps_fnt.sheet[sheet] && gw > 0) {
            int cx = cell % ps_fnt.cols, cy = cell / ps_fnt.cols;
            float gx = (float)(cx * (ps_fnt.cw + 1) + 1), gy = (float)(cy * (ps_fnt.ch + 1) + 1);
            float u0 = gx / ps_fnt.sw, v0 = gy / ps_fnt.sh, u1 = (gx + gw) / ps_fnt.sw, v1 = (gy + ps_fnt.ch) / ps_fnt.sh;
            if (shadow)
                ps_quad(ps_fnt.sheet[sheet], x + l * sc + sc * 1.5f, y + sc * 1.5f, gw * sc, ps_fnt.ch * sc, u0, v0, u1, v1,
                        (float[4]){0, 0, 0, 0.7f * c[3]});
            ps_quad(ps_fnt.sheet[sheet], x + l * sc, y, gw * sc, ps_fnt.ch * sc, u0, v0, u1, v1, c);
        }
        x += adv * sc;
    }
    return y + px;
}

static void ps_text_c(const uint16_t *s, float cx, float y, float px, const float col[4], int shadow) {
    ps_text(s, cx - ps_text_w(s, px) * 0.5f, y, px, col, NULL, shadow);
}

/* ---------------------------------------------------------------- panels */
/* the game's window frame: a 64x64 corner (SRC_WinFrame_0n) mirrored to the four corners, the
 * edges stretched from its last column / row */
static void ps_panel(float x0, float y0, float x1, float y1, const char *frame, const float fill[4], const float pat[4]) {
    float cs = 40;
    ps_rect(x0 + 5, y0 + 5, x1 - x0 - 10, y1 - y0 - 10, fill[0], fill[1], fill[2], fill[3]);
    const PsTex *p = ps_img("SRC_Pattern_00");
    if (p) ps_quad(p->tex, x0 + 5, y0 + 5, x1 - x0 - 10, y1 - y0 - 10, 0, 0, (x1 - x0 - 10) / 48.0f, (y1 - y0 - 10) / 48.0f, pat);
    const PsTex *c = ps_img(frame);
    if (!c) { ps_outline(x0 + 3, y0 + 3, x1 - x0 - 6, y1 - y0 - 6, 2, 0.8f, 0.65f, 0.3f, 1); return; }
    float e = 63.5f / 64.0f;
    const float *w = PS_WHITE;
    ps_quad(c->tex, x0, y0, cs, cs, 0, 0, 1, 1, w);
    ps_quad(c->tex, x1 - cs, y0, cs, cs, 1, 0, 0, 1, w);
    ps_quad(c->tex, x0, y1 - cs, cs, cs, 0, 1, 1, 0, w);
    ps_quad(c->tex, x1 - cs, y1 - cs, cs, cs, 1, 1, 0, 0, w);
    ps_quad(c->tex, x0 + cs, y0, x1 - x0 - 2 * cs, cs, e, 0, e, 1, w);
    ps_quad(c->tex, x0 + cs, y1 - cs, x1 - x0 - 2 * cs, cs, e, 1, e, 0, w);
    ps_quad(c->tex, x0, y0 + cs, cs, y1 - y0 - 2 * cs, 0, e, 1, e, w);
    ps_quad(c->tex, x1 - cs, y0 + cs, cs, y1 - y0 - 2 * cs, 1, e, 0, e, w);
}

/* the gold cursor: SRC_CursorLT_00 at the four corners of a cell, breathing */
static float ps_time;   /* seconds since the menu opened */
static void ps_cursor(float x, float y, float w, float h) {
    float o = 1.5f + 1.5f * SDL_sinf(ps_time * 6.0f), s = 12;
    ps_image("SRC_CursorLT_00", x - o, y - o, s, s, 0, PS_WHITE);
    ps_image("SRC_CursorLT_00", x + w - s + o, y - o, s, s, 1, PS_WHITE);
    ps_image("SRC_CursorLT_00", x - o, y + h - s + o, s, s, 2, PS_WHITE);
    ps_image("SRC_CursorLT_00", x + w - s + o, y + h - s + o, s, s, 3, PS_WHITE);
}

/* ================================================================ the game's state */
static struct {
    int ok;
    uint32_t lv[0x30];     /* item levels (pdata + 0x434): 0 none, 1 rented, 2 owned, 3 upgraded */
    uint32_t bottle[5];    /* bottle contents (pdata + 0x4A0 + 4 * id), 14 = no bottle */
    int slot[3];           /* item on slot 1 / 2 (ps_slot_item), -1 none */
} ps_st;

static uint8_t *ps_pdata(void) {
    if (!data_0070FB60) return NULL;
    uint8_t *p = *(uint8_t **)data_0070FB60;
    return p ? *(uint8_t **)(p + 0x10) : NULL;
}

/* an item slot (pdata + 0x694 + 12 * i): +5 the item on it (-1 none), +6 a change requested by
 * func_002D455C (-2 none) that func_002D4460 moves to +5 on the game's next frame */
static int ps_slot_item(const uint8_t *pd, int i) {
    int8_t cur = *(const int8_t *)(pd + 0x699 + 12 * i), req = *(const int8_t *)(pd + 0x69A + 12 * i);
    return req != -2 ? req : cur;
}

static void ps_read_state(void) {   /* the core held */
    uint8_t *pd = ps_pdata();
    ps_st.ok = pd != NULL;
    if (!pd) return;
    for (int i = 0; i < 0x30; i++) ps_st.lv[i] = *(uint32_t *)(pd + 0x434 + 4 * i);
    for (int n = 0; n < 5; n++) ps_st.bottle[n] = ps_st.lv[0x12 + n] ? *(uint32_t *)(pd + 0x4A0 + 4 * (0x12 + n)) : 14;
    for (int i = 1; i <= 2; i++) ps_st.slot[i] = ps_slot_item(pd, i);
}

static int ps_slot_of(int y) {   /* the game's slot index of X (y = 0) or Y (y = 1) */
    static int x = -1;
    if (x < 0) { const char *e = getenv("ALBW_PAUSE_XSLOT"); x = e && *e == '1' ? 1 : 2; }   /* X = slot 2 (tested in play) */
    return y ? 3 - x : x;
}

/* X / Y: the item goes on that button; one that was already on the other button swaps over */
static void ps_assign(int y, int id) {
    if (!func_003616D4 || !data_0070FB60) return;
    albw_sched_block_end();
    void *p = *(void **)data_0070FB60;
    uint8_t *pd = ps_pdata();
    if (p && pd) {
        int sa = ps_slot_of(y), sb = ps_slot_of(!y);
        int cur = ps_slot_item(pd, sa), oth = ps_slot_item(pd, sb);
        if (cur != id) {
            if (oth == id) func_003616D4(p, (uint32_t)sb, cur < 0 ? -1 : cur);
            func_003616D4(p, (uint32_t)sa, id);
        }
        fprintf(stderr, "pause: %s = item %#x (slot %d: %d -> %d, slot %d was %d)\n", y ? "Y" : "X", id, sa, cur,
                ps_slot_item(pd, sa), sb, oth);
    }
    ps_read_state();
    albw_sched_block_begin();
}

/* ---------------------------------------------------------------- the Items page */
typedef struct { int id; const char *key; int rent; const char *ic[4]; } PsItem;
static const PsItem ps_items[20] = {   /* 5 x 4, as the game's Items screen */
    {0x0C, "lantern", 0, {0, "II_Kantera32_00", "II_Kantera32_00", "II_Kantera32_01"}},
    {0x06, "hammer", 1, {0, "II_HammerR32_00", "II_HammerA32_00", "II_Hanma32_01"}},
    {0x02, "bomb", 1, {0, "II_BombR32_00", "II_BombS32_00", "II_Bakudan32_01"}},
    {0x04, "bow", 1, {0, "II_BowR32_00", "II_BowA32_00", "II_Yumi32_02"}},
    {0x0B, "hookshot", 1, {0, "II_HookshotR32_00", "II_HookshotA32_00", "II_HookShot32_01"}},
    {0x03, "boomerang", 1, {0, "II_BoomerangR32_00", "II_BoomerangA32_00", "II_Bumeran32_01"}},
    {0x0A, "tornaderod", 1, {0, "II_TornadoR32_00", "II_TornadoA32_00", "II_TornadRod32_01"}},
    {0x07, "sandrod", 1, {0, "II_RodSandR32_00", "II_RodSandA32_00", "II_SandRod32_01"}},
    {0x0D, "net", 0, {0, "II_Mushiami32_00", "II_Mushiami32_00", "II_Mushiami32_01"}},
    {0x0E, "hintglass", 0, {0, "II_Glass32_00", "II_Glass32_00", "II_Glass32_00"}},
    {0x08, "firerod", 1, {0, "II_FireRod32_r", "II_FireRod32_00", "II_FireRod32_01"}},
    {0x09, "icerod", 1, {0, "II_IceRod32_r", "II_IceRod32_00", "II_IceRod32_01"}},
    {0x12, NULL, 0, {0}}, {0x13, NULL, 0, {0}}, {0x14, NULL, 0, {0}},
    {0x15, NULL, 0, {0}}, {0x16, NULL, 0, {0}},
    {0x11, "doron", 0, {0, "II_FruitEscape32_00", "II_FruitEscape32_00", "II_FruitEscape32_00"}},
    {0x10, "durian", 0, {0, "II_FruitStop32_00", "II_FruitStop32_00", "II_FruitStop32_00"}},
    {0x05, "bow_light", 0, {0, "II_BowB32_00", "II_BowB32_00", "II_BowB32_00"}},
};
/* bottle contents (the value at pdata + 0x4A0): message key, icon */
static const struct { const char *key, *icon; } ps_bottles[14] = {
    {"bottle", "II_Bin32_00"}, {"potshop_red", "II_BinRed32_00"}, {"potshop_blue", "II_BinBlue32_00"},
    {"potshop_yellow", "II_BinYellow32_00"}, {"potshop_purple", "II_BinPurple32_00"}, {"fairy", "II_BinYousei32_00"},
    {"bee", "II_BinBee32_00"}, {"goldenbee", "II_BinGoldBee32_00"}, {"heart", "II_BinHeart32_00"},
    {"apple_red", "II_BinRApple32_00"}, {"apple_blue", "II_BinGApple32_00"}, {"milk", "II_BinMilk32_00"},
    {"milk_matured", "II_BinJMilk32_00"}, {"message_bottle", "II_BinMessage32_00"},
};

/* icon and message key of an item id at its current level (NULL: not owned) */
static const char *ps_item_info(int id, const char **key, const char **suffix) {
    *key = NULL, *suffix = "";
    if (id < 0 || id >= 0x30 || !ps_st.lv[id]) return NULL;
    int lv = (int)ps_st.lv[id];
    if (id >= 0x12 && id <= 0x16) {
        uint32_t c = ps_st.bottle[id - 0x12];
        if (c >= 14) return NULL;
        *key = ps_bottles[c].key;
        return ps_bottles[c].icon;
    }
    for (int i = 0; i < 20; i++) {
        const PsItem *it = &ps_items[i];
        if (it->id != id || !it->key) continue;
        *key = it->key;
        if (it->rent && lv == 1) *suffix = "_rental";
        else if (lv >= 3) *suffix = "_lv2";
        return it->ic[lv > 3 ? 3 : lv];
    }
    return NULL;
}

static const uint16_t *ps_item_text(const char *what, const char *key, const char *suffix) {
    const uint16_t *t = ps_msgf("is_%s_%s", what, key);
    if (*suffix) {
        char k[48];
        SDL_snprintf(k, sizeof k, "%s%s", key, suffix);
        const uint16_t *t2 = ps_msgf("is_%s_%s", what, k);
        if (t2) t = t2;
    }
    return t;
}

static const float PS_NAME_COL[4] = {0.55f, 1.0f, 0.45f, 1}, PS_TEXT_COL[4] = {1, 1, 1, 1}, PS_HI_COL[4] = {1, 0.5f, 0.35f, 1};
static const float PS_GOLD[4] = {1.0f, 0.86f, 0.45f, 1};

static void ps_infobox(const uint16_t *name, const uint16_t *desc) {
    ps_rect(14, 176, 292, 52, 0, 0, 0, 0.45f);
    ps_outline(14, 176, 292, 52, 1, 0.8f, 0.7f, 0.45f, 0.5f);
    uint16_t nm[128];   /* names are written for use inside sentences ("lamp"): a capital first */
    if (name) {
        int i = 0;
        for (; name[i] && i < 127; i++) nm[i] = name[i];
        nm[i] = 0;
        if (nm[0] >= 'a' && nm[0] <= 'z') nm[0] -= 32;
        name = nm;
    }
    float y = ps_text(name, 22, 179, 12, PS_NAME_COL, NULL, 1);
    ps_text(desc, 22, y + 1, 11, PS_TEXT_COL, PS_HI_COL, 1);
}

static int ps_cursor_i[PAUSE_FACES];

static void ps_item_cell(int col, int row, float *x, float *y) { *x = 16 + col * 35.0f; *y = 34 + row * 35.0f; }

static void ps_face_items(void) {
    ps_panel(0, 0, PS_W, PS_H, "SRC_WinFrame_02", (float[4]){0.04f, 0.07f, 0.16f, 0.93f}, (float[4]){0.55f, 0.7f, 1, 0.35f});
    ps_text_c(ps_msg_get("TextBox_00", "TextBox_01"), PS_W / 2, 11, 13, PS_GOLD, 1);
    for (int i = 0; i < 20; i++) {
        float x, y;
        ps_item_cell(i % 5, i / 5, &x, &y);
        ps_rect(x, y, 33, 33, 0, 0, 0, 0.35f);
        ps_outline(x, y, 33, 33, 1, 0.55f, 0.65f, 0.9f, 0.35f);
        const char *k, *s;
        const char *ic = ps_item_info(ps_items[i].id, &k, &s);
        if (ic) ps_image(ic, x + 0.5f, y + 0.5f, 32, 32, 0, PS_WHITE);
    }
    /* Y and X: the items on the buttons */
    for (int b = 0; b < 2; b++) {
        float x = b ? 252 : 200, y = 44;
        ps_rect(x, y, 46, 46, 0, 0, 0, 0.45f);
        ps_outline(x, y, 46, 46, 1, 0.85f, 0.75f, 0.45f, 0.7f);
        int id = ps_st.slot[ps_slot_of(!b)];
        const char *k, *s;
        const char *ic = ps_item_info(id, &k, &s);
        if (ic) ps_image(ic, x + 7, y + 7, 32, 32, 0, PS_WHITE);
        ps_image(b ? "ISS_XbtnIcon_01" : "ISS_YbtnIcon_01", x - 7, y - 7, 20, 20, 0, PS_WHITE);
    }
    int c = ps_cursor_i[PAUSE_FACE_ITEMS];
    float x, y;
    ps_item_cell(c % 5, c / 5, &x, &y);
    ps_cursor(x, y, 33, 33);
    const char *k, *s;
    if (ps_item_info(ps_items[c].id, &k, &s)) ps_infobox(ps_item_text("name", k, s), ps_item_text("instruction", k, s));
    else ps_infobox(NULL, NULL);
}

/* ---------------------------------------------------------------- the Gear page */
typedef struct { int id; const char *key[5]; const char *ic[5]; } PsGear;
static const PsGear ps_gear[] = {
    {0x00, {0, "sword", "masterswordLv1", "masterswordLv2", "masterswordLv3"}, {0, "CIS_Sword_00", "CIS_Sword_01", "CIS_Sword_02", "CIS_Sword_03"}},
    {0x01, {0, "shieldLv1", "shieldLv2"}, {0, "CIS_Shield_00", "CIS_Shield_01"}},
    {0x1F, {0, "clothesLv2", "clothesLv2", "clothesLv3", "clothesLv4"}, {0, "CIS_Clothese_00", "CIS_Clothese_00", "CIS_Clothese_01", "CIS_Clothese_02"}},
    {0x1E, {0, "powerglovesLv1", "powerglovesLv2"}, {0, "CIS_Glove_00", "CIS_Glove_01"}},
    {0x20, {0, "pegasus"}, {0, "CIS_Boots_00"}},
    {0x1C, {0, "web"}, {0, "CIS_Mizukaki_00"}},
    {0x17, {0, "emptyBracelet", "bracelet"}, {0, "CIS_Udewa_00", "CIS_Udewa_01"}},
    {0x18, {0, "courage"}, {0, "CIS_Pendant_00"}},
    {0x19, {0, "power"}, {0, "CIS_Pendant_01"}},
    {0x1A, {0, "wisdom"}, {0, "CIS_Pendant_02"}},
    {0x21, {0, "beebadge"}, {0, "CIS_Bee_00"}},
    {0x1D, {0, "stonebeauty"}, {0, "CIS_SubeSube_00"}},
    {0x26, {0, "ganbari_power_up"}, {0, "CIS_PowerUpSword_00"}},
};
#define PS_NGEAR ((int)(sizeof ps_gear / sizeof ps_gear[0]))
#define PS_GEAR_COLS 7

static int ps_gear_info(int i, const char **key, const char **icon) {
    const PsGear *g = &ps_gear[i];
    int lv = (int)ps_st.lv[g->id];
    *key = *icon = NULL;
    if (!lv) return 0;
    for (int l = lv > 4 ? 4 : lv; l >= 1 && !*icon; l--) *key = g->key[l], *icon = g->ic[l];
    return *icon != NULL;
}

static void ps_gear_cell(int i, float *x, float *y) {
    int row = i / PS_GEAR_COLS, col = i % PS_GEAR_COLS;
    int n = row ? PS_NGEAR - PS_GEAR_COLS : PS_GEAR_COLS;
    *x = PS_W / 2 - n * 20.0f + col * 40 + 3.5f;
    *y = 50 + row * 56.0f;
}

static void ps_face_gear(void) {
    ps_panel(0, 0, PS_W, PS_H, "SRC_WinFrame_01", (float[4]){0.04f, 0.11f, 0.07f, 0.93f}, (float[4]){0.6f, 1, 0.7f, 0.35f});
    ps_text_c(ps_msg_get("TextBox_01", "TextBox_00"), PS_W / 2, 11, 13, PS_GOLD, 1);
    for (int i = 0; i < PS_NGEAR; i++) {
        float x, y;
        ps_gear_cell(i, &x, &y);
        ps_rect(x, y, 33, 33, 0, 0, 0, 0.35f);
        ps_outline(x, y, 33, 33, 1, 0.6f, 0.9f, 0.6f, 0.35f);
        const char *k, *ic;
        if (ps_gear_info(i, &k, &ic)) {
            const PsTex *t = ps_img(ic);
            float s = t && t->w > 32 ? 32.0f / t->w : 1;   /* 40x40 icons (hearts) fit the cell */
            if (t) ps_image(ic, x + 16.5f - t->w * s * 0.5f, y + 16.5f - t->h * s * 0.5f, t->w * s, t->h * s, 0, PS_WHITE);
        }
    }
    int c = ps_cursor_i[PAUSE_FACE_GEAR];
    float x, y;
    ps_gear_cell(c, &x, &y);
    ps_cursor(x, y, 33, 33);
    const char *k, *ic;
    if (ps_gear_info(c, &k, &ic)) ps_infobox(ps_msgf("cl_name_%s%s", k, ""), ps_msgf("cl_instruction_%s%s", k, ""));
    else ps_infobox(NULL, NULL);
}

/* ---------------------------------------------------------------- the Map page */
static void ps_face_map(void) {
    ps_panel(0, 0, PS_W, PS_H, "SRC_WinFrame_00", (float[4]){0.14f, 0.05f, 0.04f, 0.93f}, (float[4]){1, 0.7f, 0.6f, 0.35f});
    ps_text_c(ps_ascii("Map"), PS_W / 2, 11, 13, PS_GOLD, 1);
    /* the bottom screen's map (drawn by the game this frame, view 2): ALBW_MINIMAP_SRC's part */
    float sx = 48, sy = 4, sw = 202, sh = 200;
    const char *e = getenv("ALBW_MINIMAP_SRC");
    if (e) SDL_sscanf(e, "%f %f %f %f", &sx, &sy, &sw, &sh);
    float h = 190, w = sw * h / sh, x = (PS_W - w) / 2, y = 32;
    ps_rect(x - 3, y - 3, w + 6, h + 6, 0, 0, 0, 0.6f);
    ps_quad(screens[SCREEN_BOTTOM].color, x, y, w, h, sx / BOTTOM_W, 1 - sy / SCREEN_H, (sx + sw) / BOTTOM_W, 1 - (sy + sh) / SCREEN_H,
            PS_WHITE);
    ps_outline(x - 2, y - 2, w + 4, h + 4, 1.5f, 0.85f, 0.7f, 0.5f, 0.9f);
}

/* ================================================================ the ring of pages */
static GLuint ps_face_fbo[PAUSE_FACES], ps_face_tex[PAUSE_FACES];
static int ps_face_k;

static void ps_faces_alloc(int k) {
    if (k == ps_face_k) return;
    if (ps_face_k) { glDeleteFramebuffers(PAUSE_FACES, ps_face_fbo); glDeleteTextures(PAUSE_FACES, ps_face_tex); }
    ps_face_k = k;
    glGenTextures(PAUSE_FACES, ps_face_tex);
    glGenFramebuffers(PAUSE_FACES, ps_face_fbo);
    for (int f = 0; f < PAUSE_FACES; f++) {
        glBindTexture(GL_TEXTURE_2D, ps_face_tex[f]);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, PS_W * k, PS_H * k, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, PS_GL_LINEAR_MIPMAP_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glBindFramebuffer(GL_FRAMEBUFFER, ps_face_fbo[f]);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, ps_face_tex[f], 0);
        if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) fprintf(stderr, "pause: page target incomplete\n");
    }
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

static void ps_draw_face(int f) {
    glBindFramebuffer(GL_FRAMEBUFFER, ps_face_fbo[f]);
    glViewport(0, 0, PS_W * ps_face_k, PS_H * ps_face_k);
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    /* premultiplied result: the page is then drawn with (ONE, ONE_MINUS_SRC_ALPHA) */
    glBlendFuncSeparate(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_ONE, GL_ONE_MINUS_SRC_ALPHA);
    ps_ortho(PS_W, PS_H);
    if (f == PAUSE_FACE_ITEMS) ps_face_items();
    else if (f == PAUSE_FACE_GEAR) ps_face_gear();
    else ps_face_map();
    ps_flush();
    glBindTexture(GL_TEXTURE_2D, ps_face_tex[f]);
    glGenerateMipmap(GL_TEXTURE_2D);
}

static struct {
    float pos;       /* the page in front (animated; pages are 1 apart) */
    int target;      /* the page turned to (any integer, mod 3) */
    float open;      /* 0 closed .. 1 open */
    int closing;
} ps_ui;

static void ps_cube_params(float *frac, float *ty, float *dy) {
    *frac = 0.8f, *ty = 0.54f, *dy = 6;
    const char *e = getenv("ALBW_PAUSE_CUBE");
    if (e) SDL_sscanf(e, "%f %f %f", frac, ty, dy);
}

/* one page of the ring: angle d (in quarter turns) from the front, pitch (radians) of the opening */
static void ps_draw_page(int f, float d, float pitch, float eye, float shade, float alpha) {
    const float H = 0.75f;
    float phi = d * SDL_PI_F * 0.5f, c = SDL_cosf(phi), s = SDL_sinf(phi), cp = SDL_cosf(pitch), sp = SDL_sinf(pitch);
    static const float cx[4] = {-1, 1, -1, 1}, cy[4] = {1, 1, -1, -1};
    PsVtx q[4];
    for (int k = 0; k < 4; k++) {
        float x = cx[k], y = cy[k] * H, z = -1;
        float X = x * c - z * s, Z = x * s + z * c - eye, Y = y;
        q[k].x = X;
        q[k].y = Y * cp - Z * sp;
        q[k].z = Y * sp + Z * cp;
        q[k].u = cx[k] > 0 ? 1.0f : 0.0f;
        q[k].v = cy[k] > 0 ? 1.0f : 0.0f;
        float b = shade * alpha;
        q[k].r = q[k].g = q[k].b = b;
        q[k].a = alpha;
    }
    ps_q4(ps_face_tex[f], q);
}

static const float PS_TAB_COL[PAUSE_FACES][3] = {{0.25f, 0.45f, 0.95f}, {0.25f, 0.75f, 0.35f}, {0.9f, 0.3f, 0.25f}};

static void ps_overlay(float W, float a) {
    /* the page tabs (L / R) */
    const uint16_t *names[PAUSE_FACES] = {ps_msg_get("L_Item_00_T_Btn_00", "L_Collect_00_T_Btn_00"),
                                          ps_msg_get("L_Collect_00_T_Btn_00", "L_Item_00_T_Btn_00"), ps_ascii("Map")};
    if (!names[0]) names[0] = ps_ascii("Items");
    if (!names[1]) names[1] = ps_ascii("Gear");
    int cur = ((ps_ui.target % PAUSE_FACES) + PAUSE_FACES) % PAUSE_FACES;
    float tw = 74, gap = 4, x0 = W / 2 - (PAUSE_FACES * tw + (PAUSE_FACES - 1) * gap) / 2, y = 6;
    for (int f = 0; f < PAUSE_FACES; f++) {
        float x = x0 + f * (tw + gap), k = f == cur ? 1.0f : 0.45f;
        const float *c = PS_TAB_COL[f];
        ps_rect(x, y, tw, 17, c[0] * k, c[1] * k, c[2] * k, 0.85f * a);
        ps_outline(x, y, tw, 17, 1, 1, 0.9f, 0.6f, (f == cur ? 0.9f : 0.3f) * a);
        float tc[4] = {1, 1, 1, (f == cur ? 1 : 0.7f) * a};
        ps_text_c(names[f], x + tw / 2, y + 2.5f, 12, tc, 1);
    }
    float hc[4] = {1, 0.9f, 0.6f, a};
    float lx = x0 - 22, rx = x0 + PAUSE_FACES * tw + (PAUSE_FACES - 1) * gap + 4;
    ps_rect(lx, y + 1, 18, 15, 0, 0, 0, 0.6f * a);
    ps_outline(lx, y + 1, 18, 15, 1, 1, 0.9f, 0.6f, 0.7f * a);
    ps_text_c(ps_ascii("L"), lx + 9, y + 2.5f, 12, hc, 0);
    ps_rect(rx, y + 1, 18, 15, 0, 0, 0, 0.6f * a);
    ps_outline(rx, y + 1, 18, 15, 1, 1, 0.9f, 0.6f, 0.7f * a);
    ps_text_c(ps_ascii("R"), rx + 9, y + 2.5f, 12, hc, 0);
    /* controls */
    float tc[4] = {0.85f, 0.85f, 0.85f, a};
    const char *hint = cur == PAUSE_FACE_ITEMS ? "X / Y  Equip      B  Close      Select  Save / Quit      Esc  Options"
                                               : "B  Close      Select  Save / Quit      Esc  Options";
    ps_text_c(ps_ascii(hint), W / 2, 227, 10, tc, 1);
}

/* the whole pause screen into the current window: the frozen game frame (blurred, dimmed), the
 * ring of pages, the tabs */
static void ps_draw_screen(const Layout *l, int *vp) {
    float ndc[4];
    layout_rect_ndc(l, SCREEN_TOP, ndc);
    int vx = (int)SDL_floorf((ndc[0] + 1) * 0.5f * l->ww + 0.5f), vy = (int)SDL_floorf((ndc[1] + 1) * 0.5f * l->wh + 0.5f);
    int vw = (int)SDL_floorf(ndc[2] * 0.5f * l->ww + 0.5f), vh = (int)SDL_floorf(ndc[3] * 0.5f * l->wh + 0.5f);
    if (vw < 1 || vh < 1) vx = 0, vy = 0, vw = l->ww, vh = l->wh;
    vp[0] = vx, vp[1] = vy, vp[2] = vw, vp[3] = vh;
    int k = (vh + PS_H - 1) / PS_H;
    ps_faces_alloc(k < 1 ? 1 : k > 4 ? 4 : k);
    float e = ps_ease(ps_ui.open), W = (float)TOP_W;

    ps_begin();
    for (int f = 0; f < PAUSE_FACES; f++) ps_draw_face(f);

    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glViewport(0, 0, l->ww, l->wh);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(vx, vy, vw, vh);
    /* the game's frame, blurred as the menu opens */
    glBlendFunc(GL_ONE, PS_GL_ZERO);
    ps_ortho(W, SCREEN_H);
    glBindTexture(GL_TEXTURE_2D, screens[SCREEN_TOP].color);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    float dim = 1 - 0.5f * e;
    ps_quad(screens[SCREEN_TOP].color, 0, 0, W, SCREEN_H, 0, 1, 1, 0, (float[4]){dim, dim, dim, 1});
    ps_flush();
    glUniform4fv(ps_loc_blur, 1, (float[4]){1.2f * e / W, 1.2f * e / SCREEN_H, 0, 0});
    if (e > 0.01f) {
        ps_quad(screens[SCREEN_TOP].color, 0, 0, W, SCREEN_H, 0, 1, 1, 0, (float[4]){dim, dim, dim, 1});
        ps_flush();
    }
    glUniform4fv(ps_loc_blur, 1, (float[4]){0, 0, 0, 0});

    /* the ring: perspective from inside it */
    float frac, ty, dy;
    ps_cube_params(&frac, &ty, &dy);
    float aspect = (float)vw / vh, tx = ty * aspect, D = 0.75f / (frac * ty), eye = D - 1;
    float n = 0.05f, fa = 10.0f, off = -dy / (SCREEN_H * 0.5f);
    float m[16] = {1 / tx, 0, 0, 0, 0, 1 / ty, 0, 0, 0, -off, -(fa + n) / (fa - n), -1, 0, 0, -2 * fa * n / (fa - n), 0};
    ps_mvp(m);
    glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);
    float pitch = (1 - e) * SDL_PI_F * 0.5f;
    for (int f = 0; f < PAUSE_FACES; f++) {
        float d = SDL_fmodf(f - ps_ui.pos, (float)PAUSE_FACES);
        if (d < -1.5f) d += PAUSE_FACES;
        if (d >= 1.5f) d -= PAUSE_FACES;
        if (SDL_fabsf(d) > 1.2f) continue;
        ps_draw_page(f, d, pitch, eye, 1 - 0.4f * ps_clampf(SDL_fabsf(d), 0, 1), e);
    }
    ps_flush();
    /* tabs and controls */
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    ps_ortho(W, SCREEN_H);
    ps_overlay(W, e);
    ps_flush();
    glDisable(GL_BLEND);
    glBindVertexArray(0);
    glUseProgram(0);
}

/* ================================================================ debug: scripted keys, shots */
static uint32_t ps_script(long n, int *esc) {
    static const char *spec = (const char *)1;
    if (spec == (const char *)1) spec = getenv("ALBW_PAUSE_SCRIPT");
    if (!spec) return 0;
    static const struct { const char *name; uint32_t bit; } names[] = {
        {"A", KEY_A}, {"B", KEY_B}, {"X", KEY_X}, {"Y", KEY_Y}, {"L", KEY_L}, {"R", KEY_R}, {"START", KEY_START},
        {"SELECT", KEY_SELECT}, {"UP", KEY_DUP}, {"DOWN", KEY_DDOWN}, {"LEFT", KEY_DLEFT}, {"RIGHT", KEY_DRIGHT}, {"ESC", 0}};
    uint32_t keys = 0;
    for (const char *s = spec; *s;) {
        char *e;
        long f = SDL_strtol(s, &e, 10);
        if (e == s || *e != ':') break;
        const char *b = e + 1;
        size_t len = 0;
        while (b[len] && b[len] != ':' && b[len] != ',') len++;
        long dur = 4;
        const char *t = b + len;
        if (*t == ':') { dur = SDL_strtol(t + 1, &e, 10); t = e; }
        for (size_t k = 0; k < sizeof names / sizeof names[0]; k++)
            if (SDL_strlen(names[k].name) == len && !SDL_strncmp(names[k].name, b, len) && n >= f && n < f + dur) {
                keys |= names[k].bit;
                if (!names[k].bit) *esc = 1;
            }
        while (*t && *t != ',') t++;
        s = *t ? t + 1 : t;
    }
    return keys;
}

static void ps_shot(long n, int opening, const int *vp) {
    static const char *spec = (const char *)1;
    if (spec == (const char *)1) spec = getenv("ALBW_PAUSE_SHOT");
    if (!spec) return;
    int hit = 0;
    for (const char *s = spec; *s;) {
        char *e;
        long f = SDL_strtol(s, &e, 10);
        if (e == s) break;
        if (f == n) hit = 1;
        s = *e == ',' ? e + 1 : e;
        if (!*e) break;
    }
    if (!hit) return;
    const char *dir = getenv("ALBW_SHOT_DIR");
    char path[512];
    SDL_snprintf(path, sizeof path, "%s/pause_%ld.ppm", dir && *dir ? dir : ".", (long)opening * 10000 + n);
    uint8_t *px = malloc((size_t)vp[2] * vp[3] * 4);
    if (!px) return;
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(vp[0], vp[1], vp[2], vp[3], GL_RGBA, GL_UNSIGNED_BYTE, px);
    glPixelStorei(GL_PACK_ALIGNMENT, 4);
    FILE *f = fopen(path, "wb");
    if (f) {
        fprintf(f, "P6\n%d %d\n255\n", vp[2], vp[3]);
        for (int y = vp[3] - 1; y >= 0; y--)
            for (int x = 0; x < vp[2]; x++) fwrite(px + ((size_t)y * vp[2] + x) * 4, 1, 3, f);
        fclose(f);
        fprintf(stderr, "pause: wrote %s\n", path);
    }
    free(px);
}

/* ================================================================ the modal loop */
#define PS_DIRS (KEY_DUP | KEY_DDOWN | KEY_DLEFT | KEY_DRIGHT | KEY_CPAD_UP | KEY_CPAD_DOWN | KEY_CPAD_LEFT | KEY_CPAD_RIGHT)

static void ps_move(int dx, int dy) {
    int f = ((ps_ui.target % PAUSE_FACES) + PAUSE_FACES) % PAUSE_FACES;
    int *c = &ps_cursor_i[f];
    if (f == PAUSE_FACE_ITEMS) {
        int x = *c % 5, y = *c / 5;
        x = (x + dx + 5) % 5, y = (y + dy + 4) % 4;
        *c = y * 5 + x;
    } else if (f == PAUSE_FACE_GEAR) {
        int row = *c / PS_GEAR_COLS, col = *c % PS_GEAR_COLS, rows = (PS_NGEAR + PS_GEAR_COLS - 1) / PS_GEAR_COLS;
        row = (row + dy + rows) % rows;
        int n = row == rows - 1 ? PS_NGEAR - row * PS_GEAR_COLS : PS_GEAR_COLS;
        col = dx ? (col + dx + n) % n : (col < n ? col : n - 1);
        *c = row * PS_GEAR_COLS + col;
    }
}

static int ps_openings;

static void pause_run(void) {
    ps_gl_init();
    ps_assets_init();
    ps_read_state();
    ps_openings++;
    int face = g_pause_face_req;
    ps_ui.target = face;
    ps_ui.pos = (float)face;
    ps_ui.open = 0;
    ps_ui.closing = 0;
    ps_time = 0;
    uint32_t prev = 0, held = 0;
    int first = 1, esc = 0, sel = 0, rep = 0;
    long n = 0;
    fprintf(stderr, "pause: open (page %d) at f=%ld\n", face, g_plat_frames);
    albw_sched_block_begin();   /* the other game threads run meanwhile, as during the Esc menu */
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            input_handle_event(&e);
            if (e.type == SDL_EVENT_QUIT || e.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED) g_quit_req = 1;
            if (e.type == SDL_EVENT_WINDOW_MOVED || e.type == SDL_EVENT_WINDOW_RESIZED) plat_window_geom_event(e.window.windowID);
        }
        if (g_quit_req) break;
        PlatInput li;
        memset(&li, 0, sizeof li);
        uint32_t kb = 0, gp = 0, cp = 0;
        int sesc = 0;
        int ok = input_update(&li, &kb, &gp, &cp);
        held = kb | gp | cp | ps_script(n, &sesc);
        if (first) { prev = held; first = 0; }   /* what opened it is still held */
        uint32_t edge = held & ~prev;
        prev = held;
        if (!ok || li.menu || sesc) { esc = 1; break; }
        if (!ps_ui.closing) {
            if (edge & KEY_SELECT) { sel = 1; break; }
            if (edge & (KEY_B | KEY_START)) ps_ui.closing = 1;
            if (edge & (KEY_L | KEY_ZL)) ps_ui.target--;
            if (edge & (KEY_R | KEY_ZR)) ps_ui.target++;
            uint32_t dirs = held & PS_DIRS, go = 0;
            if (edge & PS_DIRS) go = edge & PS_DIRS, rep = 0;
            else if (dirs && ++rep >= 14 && (rep - 14) % 4 == 0) go = dirs;
            if (!dirs) rep = 0;
            if (go) {
                int dx = (go & (KEY_DRIGHT | KEY_CPAD_RIGHT)) ? 1 : (go & (KEY_DLEFT | KEY_CPAD_LEFT)) ? -1 : 0;
                int dy = (go & (KEY_DDOWN | KEY_CPAD_DOWN)) ? 1 : (go & (KEY_DUP | KEY_CPAD_UP)) ? -1 : 0;
                ps_move(dx, dy);
            }
            int f = ((ps_ui.target % PAUSE_FACES) + PAUSE_FACES) % PAUSE_FACES;
            if (f == PAUSE_FACE_ITEMS && (edge & (KEY_X | KEY_Y))) {
                int id = ps_items[ps_cursor_i[f]].id;
                const char *k, *s;
                if (ps_item_info(id, &k, &s)) ps_assign((edge & KEY_Y) != 0, id);
            }
        }
        /* animation: 60 steps a second (the loop's pace), so test shots are repeatable */
        const float dt = 1.0f / 60;
        ps_time += dt;
        ps_ui.open = ps_clampf(ps_ui.open + (ps_ui.closing ? -dt : dt) / 0.25f, 0, 1);
        float to = (float)ps_ui.target, step = dt / 0.2f;
        ps_ui.pos = ps_ui.pos < to ? (ps_ui.pos + step > to ? to : ps_ui.pos + step)
                                   : (ps_ui.pos - step < to ? to : ps_ui.pos - step);
        if (ps_ui.closing && ps_ui.open <= 0) break;

        int vp[4];
        if (!g_separate) {
            plat_layout_update();
            SDL_GL_MakeCurrent(win, ctx);
            ps_draw_screen(&g_layout, vp);
            ps_shot(n, ps_openings, vp);
            SDL_GL_SwapWindow(win);
        } else {
            for (int s = SCREEN_BOTTOM; s >= SCREEN_TOP; s--) {
                if (!layout_separate_visible(&g_layout_cfg, s)) continue;
                Layout l;
                SDL_GL_MakeCurrent(plat_window_of(s), ctx);
                plat_window_layout(s, &l);
                if (s == SCREEN_TOP) {
                    ps_draw_screen(&l, vp);
                    ps_shot(n, ps_openings, vp);
                } else plat_composite(&l);
                SDL_GL_SwapWindow(plat_window_of(s));
            }
            SDL_GL_MakeCurrent(win, ctx);
        }
        SDL_DelayNS(16000000ull);
        n++;
    }
    albw_sched_block_end();
    /* buttons still down stay hidden from the game until released (onescreen_input); Select goes
     * through: it is the game's Start (its Pause: save / quit) */
    g_pause_mask = held & ~(sel ? KEY_SELECT : 0u);
    if (esc) {   /* Esc: the Esc menu instead (it runs later in this plat_end_frame) */
        g_menu_open = 1;
        g_menu_cur = 0;
        g_menu_sel = 0;
        g_menu_note[0] = 0;
    }
    g_pause_open = 0;
    fprintf(stderr, "pause: closed after %ld frames%s%s\n", n, esc ? " (Esc menu)" : "", sel ? " (Select: game pause)" : "");
    next_frame_ns = plat_ticks_ns();   /* no catch-up burst after the pause */
}

/* ================================================================ entry */
static int ps_req = -1;

static void pause_request(int face) {
    if (g_pause_open || g_pause_capture > 0 || g_menu_open) return;
    ps_req = face;
}

/* the game can pause now: no event (cutscene, dialogue) holds it (as func_00477024, without its
 * side effect) and menus may open (func_0058D888, as the game's menu buttons) */
static int ps_gate(char *why, size_t n) {
    if (at_title()) { SDL_snprintf(why, n, "title"); return 0; }
    if (func_00520B48 && data_00712450) {
        unsigned m = *(unsigned *)data_00712450;
        if (m && func_00520B48(m)) { SDL_snprintf(why, n, "00520B48"); return 0; }
    }
    if (data_0070B728) {
        uint8_t *ev = *(uint8_t **)data_0070B728;
        if (ev && *(uint32_t *)(ev + 0x44)) { SDL_snprintf(why, n, "event %#x", *(uint32_t *)(ev + 0x44)); return 0; }
    }
    if (func_0058D888 && data_007142C8) {
        void *q = *(void **)data_007142C8;
        if (q && !(func_0058D888(q) & 0xFF)) { SDL_snprintf(why, n, "0058D888"); return 0; }
    }
    return 1;
}

static void ps_trace(void) {
    static int on = -1;
    if (on < 0) on = getenv("ALBW_PAUSE_TRACE") != NULL;
    if (!on || g_plat_frames % 120) return;
    char why[64] = "";
    int ok = ps_gate(why, sizeof why);
    unsigned m = data_00712450 ? *(unsigned *)data_00712450 : 0;
    uint8_t *ev = data_0070B728 ? *(uint8_t **)data_0070B728 : NULL;
    void *q = data_007142C8 ? *(void **)data_007142C8 : NULL;
    fprintf(stderr, "pause-trace: f=%ld gate %d (%s) title %d b48 %u ev44 %#x d888 %d\n", g_plat_frames, ok, why, at_title(),
            m && func_00520B48 ? func_00520B48(m) : 0, ev ? *(uint32_t *)(ev + 0x44) : 0,
            q && func_0058D888 ? func_0058D888(q) : -1);
    if (ev) {
        char buf[300];
        int k = SDL_snprintf(buf, sizeof buf, "pause-trace: ev");
        for (int i = 0x30; i < 0x60; i += 4) k += SDL_snprintf(buf + k, sizeof buf - k, " %x", *(uint32_t *)(ev + i));
        uint32_t o = *(uint32_t *)(ev + 0x44);
        if (o > 0x10000) {
            k += SDL_snprintf(buf + k, sizeof buf - k, " | ev44:");
            for (int i = 0; i < 0x20; i += 4) k += SDL_snprintf(buf + k, sizeof buf - k, " %x", *(uint32_t *)(uintptr_t)(o + i));
        }
        fprintf(stderr, "%s\n", buf);
    }
    ps_read_state();
    if (ps_st.ok) {
        char buf[400];
        int k = SDL_snprintf(buf, sizeof buf, "pause-trace: slots %d %d lv", ps_st.slot[1], ps_st.slot[2]);
        for (int i = 0; i < 0x2D && k < (int)sizeof buf - 8; i++) k += SDL_snprintf(buf + k, sizeof buf - k, " %x", ps_st.lv[i]);
        k += SDL_snprintf(buf + k, sizeof buf - k, " bottles");
        for (int i = 0; i < 5 && k < (int)sizeof buf - 8; i++) k += SDL_snprintf(buf + k, sizeof buf - k, " %u", ps_st.bottle[i]);
        fprintf(stderr, "%s\n", buf);
    }
}

/* end of frame_ms_trace: the app core held */
static __attribute__((noinline)) void pause_frame_hook(void) {
    if (!plat_one_screen()) return;
    ps_trace();
    if (ps_req >= 0) {
        int f = ps_req;
        ps_req = -1;
        char why[64] = "";
        if (ps_gate(why, sizeof why)) {
            g_pause_face_req = f;
            g_pause_capture = 3;   /* frames drawn in view 2 before the menu opens */
        } else fprintf(stderr, "pause: not now (%s) at f=%ld\n", why, g_plat_frames);
        return;
    }
    if (g_pause_capture > 0) {
        if (g_pause_capture > 1) { g_pause_capture--; return; }
        g_pause_open = 1;
        g_pause_capture = 0;
        pause_run();
    }
}
