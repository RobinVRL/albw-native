/* Native replacements of the nw::font RectDrawer and nw::lyt drawing producers (Tier B of
 * native/GRAPHICS_STACK.md). Shader: hand-written GLSL RPROG_FONT_RECT (native/render/font.c).
 *
 * The RectDrawer (USA 0041E840..004205A4) and the layout drawer derived from it (00400AB4..
 * 004032F0) keep all geometry on the CPU side: per rect a "record" vec4 (drawer +0x88, uniform
 * c9 + i) and two vec4 pools (+0x1F8 -> c32.., +0x3F8 -> c64..) holding modelview rows, rect
 * geometry, texcoord sets and corner colours; a batch of up to 23 rects is drawn from a fixed
 * vertex buffer. The functions below are the ones that turned that structured state into PICA
 * words; each now records native ops (render_rec / font_rec_*) at the command pointer. All pure
 * CPU logic of the game (pane traversal, material resolution, pool filling, batching, the string
 * command cache) is unchanged, so the decompiled callers keep driving everything.
 *
 * Replaced (USA address, role, confidence of the role):
 *   0041F3C0  uniform burst (drawer, p, vec4s, reg, count)                          high
 *   0041F54C  draw `n` rects (draw arrays 6n)                                       high
 *   0041F43C  flush records + dirty pool ranges + draw (text batches)               high
 *   004205A4  shader object init: block A (program, vertex buffer, base fragment
 *             state, combiner stages 3-5), block B, vertex buffer                   high
 *   0041F7EC  texture-unit reset words at draw begin                                high
 *   00420028 / 00420074  DrawBegin (lyt / font): reset caches, replay block A       high
 *   0041E948  RectDrawer::BuildTextCommand (per sheet: combiner + texture, glyph
 *             rects into the pools, batched draws; the result is the cached string
 *             command that 0041F970 replays)                                        high
 *   0041F970  RectDrawer::DrawDispStringBuffer (projection, modelview, glyph bools,
 *             shadow + main pass constants and colours, replay)                     high
 *   004018A8  lyt material textures (TexMap -> texture units) + texcoord bools      high
 *   00401160  lyt material combiner (0/1 texture paths, dispatch to 2/3)            high
 *   00401E44 / 00402110  lyt material combiner for 2 / 3 textures                   high
 *   004032F0  lyt material colours -> combiner constants of stages 3 / 4            high
 *   004016FC  lyt material alpha test + blend (dispatch to 00401A98)                high
 *   00401A98  lyt material blend mode / logic op                                    high
 * Not replaced (no PICA words of their own or covered by the above): 004010C8 / 00401D90 (flush:
 * call 0041F6CC/0041F5A8/0041F6F8 -> 0041F3C0, 0041F54C; their raw "i0" and draw-kick words are
 * skipped by the renderer), 0041F83C (CMDBUF call through 003CC230, already native), the pane
 * functions.
 *
 * Combiner templates: the game copies fixed 6-word stage blocks from .rodata (EU 006A8444..
 * 006A8504 font, 006A860C..006A8714 layout, 006A8064 draw-begin state). Their contents were read
 * once while writing this file and are written below by hand as RTevStage values (tables T_*), so
 * no command word is decoded at run time.
 *
 * Structures (offsets from the game objects, 32-bit fields):
 *   drawer: +0x30 u8 record count, +0x31/+0x32 c32-pool dirty end/start, +0x33/+0x34 c64-pool
 *     end/start, +0x35 begun, +0x38 c0-c4 (proj + stereo), +0x88 records, +0x1F8 / +0x3F8 pools,
 *     +0x5F8..+0x5FB record flag bytes, +0x5FC..+0x608 current record, +0x624 texcoord count,
 *     +0x628 default blend set, +0x629 default alpha set, +0x62A combiner mode cache (7 = none),
 *     +0x62C / +0x630 constant colour caches, +0x634 + 0x20 i texture caches (value at +8 =
 *     address >> 3, +0x18 = sampler key); shader object at +4 (below).
 *   shader object (= drawer + 4): +0 memory, +4 block A {base, used, cap, u8 flag},
 *     +0x14 block B {base, used, cap, flag}, +0x24 vertex buffer address, +0x28 u8 initialised.
 *   lyt TexMap (0x20): +8 u32 {wrapS 0-1, wrapT 2-3, min 4-6, mag 7, format 8-15, rotate 16-17},
 *     +0xC image address, +0x10 u16 width, +0x12 u16 height (+0x14/+0x18/+0x1C register caches,
 *     not read here).
 *   lyt material: +0x6A u16 texcoord bools, +0x6C black colour, +0x70 white colour (RGBA8),
 *     +0x74 resource counts, +0x78 texture / blend-mode counts, +0x7C resources, +0x9E flags.
 *   nw::font TextureObject: +4 image >> 3, +8 u16 sheet height, +0xA u16 sheet width, +0xE u8
 *     format (PICA code), +0x10 sheet size >> 3, +0x14 filter (bit 1 mag linear, bit 2 min linear).
 *   DispStringBuffer: +4 u16 chars, +7 flags (bit 1 cached command is a subroutine, bit 2 use
 *     the second buffer), +8 done bitmap, +0xC command words, +0x10/+0x14 command buffers,
 *     +0x1C default top/bottom colours, +0x24 shadow colours, +0x2C/+0x30 shadow offset,
 *     +0x34/+0x38 shadow scale, +0x3C/+0x3E s16 italic, +0x40 bit 0 shadow, +0x41 combiner
 *     variant bits, +0x44 CharAttribute[] (0x20: s16 size*16 x/y, s16 pos*4 x/y, colours, s16
 *     texcoords * 16384, TextureObject *, u16 sheet | bit 15 two-tone flag).
 *
 * 64-bit: game structures are read through 32-bit fields; addresses are widened (gfx.c keeps GPU
 * memory and the game image below 2 GiB, GetPhysicalAddr is the identity). */
#include <stdint.h>
#include <string.h>

#include "../render/font.h"
#include "../render/render.h"
#include "../render/texdecode.h"

#define U8(p, o) (((const uint8_t *)(p))[o])
#define U16(p, o) (*(const uint16_t *)((const uint8_t *)(p) + (o)))
#define S16(p, o) (*(const int16_t *)((const uint8_t *)(p) + (o)))
#define U32(p, o) (*(const uint32_t *)((const uint8_t *)(p) + (o)))
#define F32(p, o) (*(const float *)((const uint8_t *)(p) + (o)))
#define PTR(p, o) ((uint8_t *)(uintptr_t)U32(p, o))
#define B8(p, o) (((uint8_t *)(p))[o])
#define W32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define WF(p, o) (*(float *)((uint8_t *)(p) + (o)))

/* decompiled game code called from here */
uint32_t *func_004010C8(uint8_t *drawer, uint32_t *p);                       /* flush pending rects */
uint32_t *func_0041F83C(uint8_t *drawer, uint32_t *p, uint32_t addr, uint32_t bytes); /* CMDBUF call */

/* ================================================================== combiner stage templates */

/* ST(rgb sources, alpha sources, rgb operands, alpha operands, rgb/alpha combine, scales, const) */
#define ST(s0, s1, s2, a0, a1, a2, o0, o1, o2, p0, p1, p2, cr, ca, xr, xa, k)                   \
    { .src_rgb = {s0, s1, s2}, .op_rgb = {o0, o1, o2}, .combine_rgb = cr, .scale_rgb = xr,     \
      .src_a = {a0, a1, a2}, .op_a = {p0, p1, p2}, .combine_a = ca, .scale_a = xa, .konst = k }
#define WHITE {255, 255, 255, 255}
#define ZERO4 {0, 0, 0, 0}
enum { S_PRIM = 0, S_T0 = 3, S_T1 = 4, S_T2 = 5, S_BUF = 13, S_K = 14, S_PREV = 15 };
enum { C_REP = 0, C_MOD = 1, C_ADD = 2, C_ADDS = 3, C_INT = 4, C_SUB = 5, C_MADD = 8 };
enum { O_C = 0, O_1MC = 1, O_A = 2 };

/* nw::font sheet combiners (EU 006A8444..006A84EC), stage 0 or 1 */
static const RTevStage T_F_TEX = ST(S_T0, S_K, S_K, S_T0, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, ZERO4);
static const RTevStage T_F_PREV = ST(S_PREV, S_K, S_K, S_PREV, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, ZERO4);
/* alpha-only sheet (A4 / A8): rgb = white (constant alpha), alpha = texture */
static const RTevStage T_F_ALPHA = ST(S_K, S_K, S_K, S_T0, S_K, S_K, O_A, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, WHITE);
/* two-tone sheets (sheet bit 15): rgb = 2 (a - 1/2), alpha = 2 a / 2 (a - 1/2) */
static const RTevStage T_F_TT0 = ST(S_T0, S_K, S_K, S_T0, S_K, S_K, O_A, 0, 0, 0, 0, 0, C_ADDS, C_REP, 1, 1, ZERO4);
static const RTevStage T_F_TT1 = ST(S_T0, S_K, S_K, S_T0, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_ADDS, 0, 1, ZERO4);
static const RTevStage T_F_TTA = ST(S_T0, S_K, S_K, S_T0, S_K, S_K, O_A, 0, 0, 0, 0, 0, C_ADDS, C_ADDS, 1, 1, ZERO4);

typedef struct { const RTevStage *st; uint8_t stage; } FontBlock;
typedef struct { FontBlock a, b; } FontVariant;
/* index = alpha-only format | two-tone << 1 (0041E948); table 1 = both blocks (EU 00714B38),
 * table 2 = first block only (EU 00714B78); NULL = "no block" (the game never copies it).
 * The values are the tables as the game uses them: its static constructor EU 005D0C00 patches
 * four entries at startup from the table at EU 00714B28 (TAB1[1].b = stage-1 pass-through,
 * TAB1[3].a = TT0, TAB2[2] = TT1, TAB2[3] = TTA); the .rodata image alone has them NULL, which
 * left the A4 two-tone title/demo text with the previous material's stages (boot stop 88b:
 * checked against the original on citra: TextBox bits 2 -> TT0 at stage 0, bits 3 -> TTA at
 * stage 1, sheet format 11 with the two-tone flag in both) */
static const FontVariant FONT_TAB1[4] = {
    {{&T_F_TEX, 0}, {&T_F_PREV, 1}},
    {{&T_F_ALPHA, 0}, {&T_F_PREV, 1}},
    {{&T_F_TT0, 0}, {&T_F_TT1, 1}},
    {{&T_F_TT0, 0}, {&T_F_TTA, 1}},
};
static const FontVariant FONT_TAB2[4] = {
    {{&T_F_TEX, 1}, {NULL, 0}},
    {{&T_F_ALPHA, 1}, {NULL, 0}},
    {{&T_F_TT1, 1}, {NULL, 0}},
    {{&T_F_TTA, 1}, {NULL, 0}},
};

/* nw::lyt material combiners (EU 006A860C..006A8714) */
static const RTevStage T_L_CONST = ST(S_K, S_K, S_K, S_K, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, WHITE);
static const RTevStage T_L_TEX0 = ST(S_T0, S_T0, S_K, S_T0, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, WHITE);
static const RTevStage T_L_TEX0P = ST(S_T0, S_T0, S_K, S_T0, S_K, S_K, 0, O_A, 0, 0, 0, 0, C_MOD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_1INT = ST(S_T1, S_PREV, S_T1, S_T1, S_PREV, S_T1, 0, 0, O_A, 0, 0, 0, C_INT, C_REP, 0, 0, WHITE);
static const RTevStage T_L_1MOD = ST(S_T1, S_PREV, S_T1, S_T1, S_PREV, S_T1, 0, 0, O_A, 0, 0, 0, C_MOD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_1ADD = ST(S_T1, S_T1, S_PREV, S_T1, S_PREV, S_T1, 0, O_A, 0, 0, 0, 0, C_MADD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_1PRE = ST(S_T1, S_T1, S_PREV, S_T1, S_PREV, S_T1, 0, O_A, 0, 0, 0, 0, C_MOD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_2INT = ST(S_T2, S_PREV, S_T2, S_T2, S_PREV, S_T2, 0, 0, O_A, 0, 0, 0, C_INT, C_REP, 0, 0, WHITE);
static const RTevStage T_L_2MOD = ST(S_T2, S_PREV, S_T2, S_T2, S_PREV, S_T2, 0, 0, O_A, 0, 0, 0, C_MOD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_2ADD = ST(S_T2, S_T2, S_PREV, S_T2, S_PREV, S_T2, 0, O_A, 0, 0, 0, 0, C_MADD, C_REP, 0, 0, WHITE);
static const RTevStage T_L_2SUB = ST(S_BUF, S_PREV, S_PREV, S_T2, S_PREV, S_T2, 0, 0, 0, 0, 0, 0, C_SUB, C_REP, 0, 0, WHITE);
static const RTevStage T_L_2MUL = ST(S_BUF, S_BUF, S_PREV, S_T2, S_PREV, S_T2, O_1MC, 0, 0, 0, 0, 0, C_INT, C_REP, 0, 0, WHITE);

/* draw-begin state (EU 006A8064, block A): stage 3 = white colour (constant 3), stage 4 =
 * mix(black (constant 4), stage 3, combiner buffer), stage 5 = stage 4 x vertex colour */
static const RTevStage T_B_3 = ST(S_K, S_K, S_K, S_K, S_K, S_K, 0, 0, 0, 0, 0, 0, C_REP, C_REP, 0, 0, WHITE);
static const RTevStage T_B_4 = ST(S_PREV, S_K, S_BUF, S_PREV, S_K, S_BUF, 0, 0, 0, 0, 0, 0, C_INT, C_INT, 0, 0, ZERO4);
static const RTevStage T_B_5 = ST(S_PRIM, S_PREV, S_PREV, S_PRIM, S_PREV, S_PREV, 0, 0, 0, 0, 0, 0, C_MOD, C_MOD, 0, 0, ZERO4);

/* combiner buffer update register value (bits 8-11 rgb, 12-15 alpha of stages 0-3) */
static void tev_buf(RTev *t, uint32_t e0) {
    t->buf_update_rgb = (uint8_t)(e0 >> 8 & 15);
    t->buf_update_a = (uint8_t)(e0 >> 12 & 15);
}

static uint32_t *rec_stages(uint32_t *p, int mask, const RTevStage *const st[6], uint32_t e0, int with_buf) {
    RTev t;
    memset(&t, 0, sizeof t);
    for (int i = 0; i < 6; i++)
        if (mask >> i & 1) t.stage[i] = *st[i];
    if (with_buf) tev_buf(&t, e0);
    return font_rec_tev(p, mask, &t, with_buf ? 1 : 0, 0);
}

static uint32_t *rec_stage(uint32_t *p, int stage, const RTevStage *s) {
    const RTevStage *st[6] = {0};
    st[stage] = s;
    return rec_stages(p, 1 << stage, st, 0, 0);
}

static uint32_t *rec_buf(uint32_t *p, uint32_t e0) {
    const RTevStage *st[6] = {0};
    return rec_stages(p, 0, st, e0, 1);
}

/* ================================================================== RectDrawer core */

/* USA 0041F3C0  write `count` vec4s from memory (vec4s in memory order) to float uniforms
 * c[reg..] (drawer, p, src, reg, count) -> p'. Original: register select + burst header + data
 * (4 + 4 count words). Callers 0041F6CC (records c9), 0041F5A8 / 0041F6F8 (dirty pool ranges),
 * 0041F734 (c0-c4), 0041F970, 00403360 (c6-c8 per-texture scales). High. */
uint32_t *func_0041F3C0(uint8_t *drawer, uint32_t *p, const void *src, uint32_t reg, int32_t count) {
    if (count <= 0) return p;
    return font_rec_uniforms(p, (int)(reg & 0xFF), src, count);
}

/* USA 0041F54C  draw `n` rects (drawer, p, n) -> p': index config 0x227 (with the vertex-cache
 * 4 KiB boundary workaround on the vertex buffer address +0x28) and vertex count 0x228 = 6n;
 * the kick block follows from 0056F468 (raw words, ignored). Callers 004010C8, 00401D90. High. */
uint32_t *func_0041F54C(uint8_t *drawer, uint32_t *p, int32_t n) {
    return n > 0 ? font_rec_draw(p, n) : p;
}

/* USA 0041F43C  flush of the text path (drawer, p) -> p': records c9.. (+0x30 of them), the c32
 * pool range [+0x32, +0x31) (then both = 7: slots 0-6 belong to the draw call), the c64 pool range
 * [+0x34, +0x33) (then 0), and the draw. Callers 0041E948. High. */
uint32_t *func_0041F43C(uint8_t *d, uint32_t *p) {
    uint32_t n = B8(d, 0x30);
    p = func_0041F3C0(d, p, d + 0x88, 9, (int32_t)n);
    B8(d, 0x30) = 0;
    uint32_t s = B8(d, 0x32), e = B8(d, 0x31);
    if (s < e) {
        p = func_0041F3C0(d, p, d + 0x1F8 + s * 16, 0x20 + s, (int32_t)(e - s));
        B8(d, 0x31) = 7;
        B8(d, 0x32) = 7;
    }
    s = B8(d, 0x34);
    e = B8(d, 0x33);
    if (s < e) {
        p = func_0041F3C0(d, p, d + 0x3F8 + s * 16, 0x40 + s, (int32_t)(e - s));
        B8(d, 0x33) = 0;
        B8(d, 0x34) = 0;
    }
    return n ? font_rec_draw(p, (int)n) : p;
}

/* command-buffer object {base, used, cap, u8 flag} (003E6A30) */
static void cmdbuf_init(uint8_t *cb, uintptr_t mem, uint32_t size) {
    uintptr_t base = (mem + 3) & ~(uintptr_t)3;
    W32(cb, 0) = (uint32_t)base;
    W32(cb, 4) = 0;
    W32(cb, 8) = (uint32_t)((mem + size - base) & ~(uintptr_t)7);
    B8(cb, 0xC) = 1;
}

/* USA 004205A4  RectDrawer shader object init (obj = drawer + 4, mem, shbin): the original
 * uploads the program code / operand descriptors / DVLE constants, the attribute buffer
 * (vertex buffer physical address, 1 x float4), output map and the draw-begin fragment state
 * into block A, a small restore block B, and builds the 23 x 6 vertex buffer after them. Native:
 * same memory layout (block sizes from the shbin like the original, vertex buffer at mem + A +
 * 0x28), block A holds pinned markers: RPROG_FONT_RECT + v0, blend (src alpha, 1 - src alpha),
 * alpha test off, combiner stages 1/2 pass-through and 3/4/5 (white / black / vertex colour),
 * buffer updates off. Block B is empty (used = 0). Caller 00420574 <- 003FDFF4 <- 00503A8C. High. */
void func_004205A4(uint8_t *obj, uint8_t *mem, const uint8_t *shbin) {
    W32(obj, 0) = (uint32_t)(uintptr_t)mem;
    /* block A capacity exactly as the original computes it (code + operand descriptor chunks of
     * 128 words with a 4-word header, 6 words per DVLE constant, 0x350 bytes of fixed state) */
    uint32_t nd = U32(shbin, 4);
    const uint8_t *dvlp = shbin + 8 + 4 * nd;
    const uint8_t *dvle = shbin + U32(shbin, 8);
    uint32_t code = U32(dvlp, 0xC), opd = U32(dvlp, 0x14);
    uint32_t wc = (code >> 7) * 132 + ((code & 0x7F) ? (((code & 0x7F) + 4) & ~1u) : 0);
    uint32_t wo = (opd >> 7) * 132 + ((opd & 0x7F) ? (((opd & 0x7F) + 4) & ~1u) : 0);
    uint32_t capa = (wc + wo + U32(dvle, 0x1C) * 6) * 4 + 0x350;
    cmdbuf_init(obj + 4, (uintptr_t)mem, capa);
    cmdbuf_init(obj + 0x14, (uintptr_t)mem + capa, 0x28);
    float *vtx = (float *)(mem + capa + 0x28);
    font_build_vertices(vtx);

    uint32_t *start = (uint32_t *)(uintptr_t)U32(obj, 4), *p = start;
    p = font_rec_bind(p, vtx, 1);
    ROp op;
    memset(&op, 0, sizeof op);
    op.type = ROP_BLEND;
    op.u.frag.blend_enable = 1;
    op.u.frag.src_rgb = op.u.frag.src_a = 6;  /* src alpha */
    op.u.frag.dst_rgb = op.u.frag.dst_a = 7;  /* 1 - src alpha */
    p = render_rec_pinned(p, &op);
    memset(&op, 0, sizeof op);
    op.type = ROP_ALPHATEST;
    op.u.frag.alpha_func = 1;
    p = render_rec_pinned(p, &op);
    const RTevStage *st[6] = {NULL, &T_F_PREV, &T_F_PREV, &T_B_3, &T_B_4, &T_B_5};
    RTev t;
    memset(&t, 0, sizeof t);
    for (int i = 1; i < 6; i++) t.stage[i] = *st[i];
    p = font_rec_tev(p, 0x3E, &t, 1, 1);
    W32(obj, 8) = (uint32_t)((uint8_t *)p - (uint8_t *)start);
    W32(obj, 0x24) = (uint32_t)((uintptr_t)vtx & ~(uintptr_t)0xF);
}

/* USA 0041F7EC  texture units off (p) -> p': original 8 words (output clock 0x6F, two 0x80
 * writes: no unit enabled). Callers 00401E14 (lyt begin). High. */
uint32_t *func_0041F7EC(uint32_t *p) { return font_rec_texconfig(p, 0); }

static uint32_t *draw_begin_tail(uint8_t *d, uint32_t *p, uint32_t flags) {
    if (!(flags & 1)) {
        p = func_0041F7EC(p);
        uint32_t used = U32(d, 0xC);
        memcpy(p, PTR(d, 8), used);
        p = (uint32_t *)((uint8_t *)p + (used & ~3u));
    }
    B8(d, 0x35) = 1;
    W32(d, 0x60C) = 0;
    B8(d, 0x5F8) = B8(d, 0x5F9) = B8(d, 0x5FA) = B8(d, 0x5FB) = 0;
    return p;
}

/* USA 00420028  layout DrawBegin (drawer, p, flags) -> p': resets the layout caches (+0x61C..
 * +0x624, combiner mode 7, default blend set, texture caches like 00401E14) and unless flags bit 0
 * replays block A after the texture reset. High. */
uint32_t *func_00420028(uint8_t *d, uint32_t *p, uint32_t flags) {
    W32(d, 0x620) = 0;
    W32(d, 0x624) = 0;
    W32(d, 0x61C) = 0;
    B8(d, 0x62A) = 7;
    B8(d, 0x628) = 1;
    W32(d, 0x63C) = 0; /* 00401E14(d, p, 0) */
    W32(d, 0x65C) = 0;
    W32(d, 0x67C) = 0;
    return draw_begin_tail(d, p, flags);
}

/* USA 00420074  RectDrawer DrawBegin (text) (drawer, p, flags) -> p'. High. */
uint32_t *func_00420074(uint8_t *d, uint32_t *p, uint32_t flags) { return draw_begin_tail(d, p, flags); }

/* ================================================================== nw::font text */

/* 0041E840: two corner colours (RGBA8) as floats into the c32 pool at +0x31, record w = index */
static void pool_colors(uint8_t *d, const uint8_t *c) {
    uint32_t k = B8(d, 0x31);
    WF(d, 0x608) = (float)k;
    float *v = (float *)(d + 0x1F8 + k * 16);
    for (int i = 0; i < 8; i++) v[i] = (float)c[i] * (1.0f / 255.0f);
    B8(d, 0x31) = (uint8_t)(k + 2);
}

static void record_push(uint8_t *d) {
    float *r = (float *)(d + 0x88 + B8(d, 0x30) * 16);
    r[0] = F32(d, 0x5FC);
    r[1] = F32(d, 0x600);
    r[2] = F32(d, 0x604);
    r[3] = F32(d, 0x608);
    if (B8(d, 0x5F8)) r[0] += (float)B8(d, 0x5F8) * (1.0f / 256.0f);
    if (B8(d, 0x5F9)) r[1] += (float)B8(d, 0x5F9) * (1.0f / 16.0f);
    if (B8(d, 0x5FA)) r[2] += (float)B8(d, 0x5FA) * (1.0f / 64.0f);
    if (r[3] > 1.0f && B8(d, 0x5FB)) r[3] += (float)B8(d, 0x5FB) * 0.25f;
}

static uint32_t sheet_of(const uint8_t *ca) {
    const uint8_t *to = PTR(ca, 0x18);
    return (U16(ca, 0x1E) & 0x7FFF) * U32(to, 0x10) + U32(to, 4); /* (address >> 3) */
}

static uint32_t *font_block(uint32_t *p, const FontBlock *b) {
    return b->st ? rec_stage(p, b->stage, b->st) : p;
}

/* USA 0041E948  RectDrawer::BuildTextCommand (drawer, p, end (unused), DispStringBuffer) -> p'
 * (vtable +0x1C). Groups the characters by glyph sheet; per sheet: combiner variant (stages 0/1 by
 * sheet format and two-tone flag), texture unit 0 = the sheet; per character: colour pair (default
 * colours -> pool slot 5, repeated colours reuse the last pair), texcoords (u0, 1 - v0, u1, 1 - v1)
 * and geometry (size, position) into the c64 pool, a record; batches are flushed by 0041F43C. With
 * buffer flag bit 1 the result is closed as a CMDBUF subroutine (padding + return words). The
 * output is the string's cached command (replayed by 0041F970), so its markers are reused every
 * frame the string is drawn. High. */
uint32_t *func_0041E948(uint8_t *d, uint32_t *p, uint32_t end, uint8_t *buf) {
    uint32_t n = U16(buf, 4);
    if (!n) return p;
    WF(d, 0x5FC) = 0.0f;
    B8(d, 0x5F8) = B8(d, 0x5F9) = B8(d, 0x5FA) = B8(d, 0x5FB) = 0;
    const uint8_t *defc = buf + 0x1C;
    uint8_t last[8];
    memcpy(last, defc, 8);
    uint8_t *done = PTR(buf, 8);
    B8(d, 0x33) = B8(d, 0x34) = 0;
    B8(d, 0x31) = B8(d, 0x32) = 7;
    memset(done, 0, (n + 7) >> 3);
    int sel_first_only = U8(buf, 0x41) >> 1 & 1, sel_tab2 = U8(buf, 0x41) & 1;
    const FontVariant none = {{NULL, 0}, {NULL, 0}};
    const FontVariant *prev = &none;
    int cur_fmt = -1, cur_tt = 0;
    uint32_t sheet = 0, processed = 0, next = 0, last_idx = 0;
    const uint8_t *chars = buf + 0x44;
    while (processed < n) {
        uint32_t i = next;
        while (done[i >> 3] >> (i & 7) & 1) i++;
        next = i + 1;
        const uint8_t *ca = chars + i * 0x20;
        uint32_t s = sheet_of(ca);
        if (s != sheet) {
            sheet = s;
            if (processed && B8(d, 0x30)) {
                p = func_0041F43C(d, p);
                memcpy(last, defc, 8);
            }
            const uint8_t *to = PTR(ca, 0x18);
            int fmt = U8(to, 0xE), tt = U16(ca, 0x1E) >> 15;
            if (cur_fmt != fmt || cur_tt != tt) {
                cur_tt = tt;
                int idx = (fmt == TEXFMT_A4 || fmt == TEXFMT_A8) | tt << 1;
                const FontVariant *v = (sel_first_only && sel_tab2) ? &FONT_TAB2[idx] : &FONT_TAB1[idx];
                if (prev->a.st != v->a.st) p = font_block(p, &v->a);
                if (!sel_first_only && prev->b.st != v->b.st) p = font_block(p, &v->b);
                prev = v;
            }
            cur_fmt = fmt;
            uint32_t filt = U32(to, 0x14);
            p = font_rec_texconfig(p, 1);
            p = font_rec_texunit(p, 0, (uintptr_t)s << 3, U16(to, 0xA), U16(to, 8), fmt, 0, 0, filt >> 1 & 1,
                                 filt >> 2 & 1);
        }
        for (uint32_t j = i; j < n; j++) {
            if (done[j >> 3] >> (j & 7) & 1) continue;
            const uint8_t *a = chars + j * 0x20;
            if (sheet_of(a) != sheet) continue;
            if (!memcmp(a + 8, defc, 8)) {
                WF(d, 0x608) = 5.0f;
            } else if (!memcmp(a + 8, last, 8)) {
                WF(d, 0x608) = (float)last_idx;
            } else {
                last_idx = B8(d, 0x31);
                memcpy(last, a + 8, 8);
                pool_colors(d, a + 8);
            }
            uint32_t k = B8(d, 0x33);
            float *v = (float *)(d + 0x3F8 + k * 16);
            WF(d, 0x604) = (float)(k + 0x20);
            const float kt = 1.0f / 16384.0f;
            v[0] = (float)S16(a, 0x10) * kt;
            v[1] = 1.0f - (float)S16(a, 0x12) * kt;
            v[2] = (float)S16(a, 0x14) * kt;
            v[3] = 1.0f - (float)S16(a, 0x16) * kt;
            k = (k + 1) & 0xFF;
            v = (float *)(d + 0x3F8 + k * 16);
            WF(d, 0x600) = (float)(k + 0x20);
            v[0] = (float)S16(a, 0) * 0.0625f;
            v[1] = (float)(-S16(a, 2)) * 0.0625f;
            v[2] = (float)S16(a, 4) * 0.25f;
            v[3] = (float)S16(a, 6) * 0.25f;
            B8(d, 0x33) = (uint8_t)(k + 1);
            done[j >> 3] |= (uint8_t)(1u << (j & 7));
            processed++;
            record_push(d);
            uint32_t cnt = (B8(d, 0x30) + 1u) & 0xFF;
            B8(d, 0x30) = (uint8_t)cnt;
            if (cnt > 0x16 || B8(d, 0x33) > 0x1E || B8(d, 0x31) > 0x1E) {
                p = func_0041F43C(d, p);
                memcpy(last, defc, 8);
            }
        }
    }
    if (B8(d, 0x30)) p = func_0041F43C(d, p);
    B8(d, 0x31) = B8(d, 0x32) = B8(d, 0x33) = B8(d, 0x34) = 0;
    if (U8(buf, 7) & 2) {
        /* close as a subroutine: pad so that (words written + 2) is a multiple of 4, then the
         * 2-word return (003CC030) - kept as zero words, the renderer runs the range by size */
        uint32_t *base = (uint32_t *)(uintptr_t)U32(buf, 0x10);
        uint32_t w = (uint32_t)(p - base) * 4 + 8;
        if (w & 0xF) {
            int pad = 4 - (int)((w & 0xF) >> 2);
            for (int k = 0; k < pad; k++) *p++ = 0;
        }
        p[0] = 0;
        p[1] = 0;
        p += 2;
    }
    return p;
}

/* nw::math MTX34Mult (out = a x b), as 00114E74 */
static void mtx34_mult(float *o, const float *a, const float *b) {
    float t[12];
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 4; c++)
            t[r * 4 + c] = a[r * 4] * b[c] + a[r * 4 + 1] * b[4 + c] + a[r * 4 + 2] * b[8 + c] + (c == 3 ? a[r * 4 + 3] : 0.0f);
    memcpy(o, t, sizeof t);
}

static uint32_t *replay(uint8_t *d, uint32_t *p, uint8_t *buf) {
    uint32_t words = U32(buf, 0xC);
    if (!(U8(buf, 7) & 2)) {
        if (!U32(buf, 0x10)) return func_0041E948(d, p, 0xFFFFFFFFu, buf);
        memcpy(p, PTR(buf, 0x10), words * 4);
        return p + words;
    }
    return func_0041F83C(d, p, U32(buf, (U8(buf, 7) & 4) ? 0x14 : 0x10), words << 2);
}

static uint32_t *text_pass(uint8_t *d, uint32_t *p, uint8_t *buf, const uint8_t *colors, const float *white,
                           const float *black) {
    pool_colors(d, colors); /* pool slots 5/6 (+0x31 was set to 5) */
    uint32_t s = B8(d, 0x32);
    p = func_0041F3C0(d, p, d + 0x1F8 + s * 16, 0x20 + s, (int32_t)(B8(d, 0x31) - s));
    B8(d, 0x31) = B8(d, 0x32) = 0;
    uint8_t k3[4], k4[4];
    font_color_pack(white, k3);
    font_color_pack(black, k4);
    k4[3] = 0; /* 00420DE8(black, 0): the black colour is packed with alpha 0 (the second argument),
                  so stage 4 interpolates alpha from 0 to white.a by the glyph texel: the glyph shape.
                  Packing black.a (= the pane alpha, 1) drew every glyph as an opaque box (boot stop 88) */
    p = font_rec_tev_const(p, 3, k3);
    p = font_rec_tev_const(p, 4, k4);
    return replay(d, p, buf);
}

/* USA 0041F970  RectDrawer::DrawDispStringBuffer (drawer, p, const DrawContent *c, x) -> p'.
 * c: +0 DispStringBuffer, +4 projection (4x4) or NULL, +8 view (3x4), +0xC model (3x4),
 * +0x10 / +0x20 main black / white colours (float RGBA), +0x30 / +0x40 shadow black / white,
 * +0x50 main corner colours or NULL, +0x54 bit 0: combiner buffer from stage 1. Records: texture
 * unit 0 on, buffer update (stage 0 or 1), c0-c4, modelview -> pool 0-2 (c32-c34); if the buffer
 * has a shadow: bools b0|b2, c35 italic, c36 scale/offset, shadow colours (c37/c38), constants
 * 3/4, replay; then b0, main c35/c36/colours/constants, replay; b = 0 at the end. High. */
uint32_t *func_0041F970(uint8_t *d, uint32_t *p, const uint8_t *c, uint32_t x) {
    uint8_t *buf = PTR(c, 0);
    if (!buf || !U16(buf, 4)) return p;
    p = font_rec_texconfig(p, 1);
    p = rec_buf(p, (U32(c, 0x54) & 1) ? 0x2200 : 0x1100);
    const float *proj = (const float *)PTR(c, 4);
    if (proj) {
        memcpy(d + 0x38, proj, 64);
        p = func_0041F3C0(d, p, d + 0x38, 0, 5);
    }
    const float *view = (const float *)PTR(c, 8), *model = (const float *)PTR(c, 0xC);
    float *mv = (float *)(d + 0x1F8);
    if (!model) {
        if (!view) {
            static const float id[12] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};
            memcpy(mv, id, sizeof id);
        } else {
            memcpy(mv, view, 48);
        }
    } else if (!view) {
        memcpy(mv, model, 48);
    } else {
        mtx34_mult(mv, view, model);
    }
    p = func_0041F3C0(d, p, mv, 0x20, 3);
    if (U8(buf, 0x40) & 1) {
        p = font_rec_bools(p, 5);
        B8(d, 0x31) = B8(d, 0x32) = 3;
        float *v = (float *)(d + 0x228); /* pool 3, 4 */
        v[0] = (float)(int16_t)(S16(buf, 0x3C) + S16(buf, 0x3E));
        v[1] = v[2] = v[3] = 0.0f;
        v[4] = F32(buf, 0x34);
        v[5] = F32(buf, 0x38);
        v[6] = F32(buf, 0x2C);
        v[7] = -F32(buf, 0x30);
        B8(d, 0x31) = 5;
        p = text_pass(d, p, buf, buf + 0x24, (const float *)(c + 0x40), (const float *)(c + 0x30));
    }
    p = font_rec_bools(p, 1);
    B8(d, 0x31) = B8(d, 0x32) = 3;
    float *v = (float *)(d + 0x228);
    v[0] = (float)S16(buf, 0x3C);
    v[1] = v[2] = v[3] = 0.0f;
    v[4] = 1.0f;
    v[5] = 1.0f;
    v[6] = 0.0f;
    v[7] = -0.0f;
    B8(d, 0x31) = 5;
    const uint8_t *cols = U32(c, 0x50) ? PTR(c, 0x50) : buf + 0x1C;
    p = text_pass(d, p, buf, cols, (const float *)(c + 0x20), (const float *)(c + 0x10));
    p = font_rec_bools(p, 0);
    B8(d, 0x31) = B8(d, 0x32) = B8(d, 0x33) = B8(d, 0x34) = 0;
    return p;
}

/* ================================================================== nw::lyt materials */

/* lyt texture format enum -> PICA (00404CF0) */
static int lyt_fmt(int f) {
    static const int8_t map[20] = {7, 8, 9, 5, 6, 3, 1, 2, 4, 0, 12, 13, -1, -1, -1, -1, -1, -1, 10, 11};
    return f >= 0 && f < 20 && map[f] >= 0 ? map[f] : 0;
}
static int lyt_wrap(int w) { return w == 1 ? 2 : w == 2 ? 3 : 0; } /* clamp / repeat / mirror */

static const uint8_t *mat_res(const uint8_t *m, int what) {
    uint32_t f = U32(m, 0x74);
    uint32_t off = (f & 3) * 0x20 + (f >> 2 & 3) * 0x14 + (f >> 4 & 3) * 8; /* alpha compare */
    if (what >= 1) off += (f >> 9 & 1) * 8;                                 /* blend modes */
    if (what >= 2) off += (f >> 10 & 3) * 4 + ((f >> 12 & 1) ? 0xC : 0);    /* texture blend modes */
    return PTR(m, 0x7C) + off;
}

static int alpha_only(const uint8_t *texmap) {
    int f = U8(texmap, 9);
    return f == 1 || f == 0x13; /* A8, A4 */
}

/* USA 004018A8  material textures (drawer, p, material) -> p': up to 3 TexMaps; the per-unit
 * cache (+0x634 + 0x20 i) decides whether the units must be re-sent; with no pending rects or a
 * change the batch is flushed first. Texture units from the TexMap fields (image address, storage
 * size, format, wrap, filter; rotated images swap size and wrap like the register precompute
 * 00404CF0); b1..b6 = rotate/flip bits of each map (kept in material +0x6A, recomputed unless
 * +0x9E bit 2). High. */
uint32_t *func_004018A8(uint8_t *d, uint32_t *p, uint8_t *m) {
    int empty = B8(d, 0x30) == 0;
    uint32_t n = U32(m, 0x78) & 3;
    const uint8_t *maps = PTR(m, 0x7C);
    if (!(U8(m, 0x9E) & 4)) {
        uint32_t bits = 0;
        for (uint32_t i = 0; i < n; i++) bits |= (U32(maps, i * 0x20 + 8) >> 16 & 3) << (2 * i);
        *(uint16_t *)(m + 0x6A) = (uint16_t)(bits << 1);
    }
    int changed = 0;
    uint32_t mask = 0;
    for (uint32_t i = 0; i < n; i++) {
        const uint8_t *t = maps + i * 0x20;
        uint8_t *c = d + 0x634 + i * 0x20;
        mask |= 1u << i;
        if (U32(c, 8) != U32(t, 0xC) >> 3 || U32(c, 0x18) != U32(t, 0x14)) {
            changed = 1;
            W32(c, 0) = U32(t, 0x18);
            W32(c, 8) = U32(t, 0xC) >> 3;
            W32(c, 0x10) = U32(t, 0x1C);
            W32(c, 0x18) = U32(t, 0x14);
        }
    }
    if (empty || changed) p = func_004010C8(d, p);
    if (empty || changed) p = font_rec_texconfig(p, (int)mask);
    if (changed) {
        for (uint32_t i = 0; i < n; i++) {
            const uint8_t *t = maps + i * 0x20;
            uint32_t bits = U32(t, 8);
            int rot = (bits & 0x30000) != 0;
            int w = U16(t, 0x10), h = U16(t, 0x12);
            int ws = lyt_wrap((int)(bits & 3)), wt = lyt_wrap((int)(bits >> 2 & 3));
            if (rot) { int x = w; w = h; h = x; x = ws; ws = wt; wt = x; }
            p = font_rec_texunit(p, (int)i, (uintptr_t)U32(t, 0xC), w, h, lyt_fmt((int)(bits >> 8 & 0xFF)), ws, wt,
                                 bits >> 7 & 1, (bits >> 4 & 7) != 0);
        }
        p = font_rec_bools(p, U16(m, 0x6A));
    }
    return p;
}

/* USA 004032F0  material colours -> combiner constants (drawer, p, white, black, force) -> p':
 * stage 3 = white (+0x70), stage 4 = black (+0x6C), each only when it differs from the cache
 * (+0x62C / +0x630) unless forced. High. */
uint32_t *func_004032F0(uint8_t *d, uint32_t *p, uint32_t white, uint32_t black, int32_t force) {
    if (force || U32(d, 0x62C) != white) {
        uint8_t k[4];
        memcpy(k, &white, 4);
        p = font_rec_tev_const(p, 3, k);
        W32(d, 0x62C) = white;
        if (!force && U32(d, 0x630) == black) return p;
    } else if (U32(d, 0x630) == black) {
        return p;
    }
    uint8_t k[4];
    memcpy(k, &black, 4);
    p = font_rec_tev_const(p, 4, k);
    W32(d, 0x630) = black;
    return p;
}

/* USA 00401A98  material blend mode (drawer, p, material) -> p': lyt blend op / factors / logic op
 * mapped to the PICA enums by the game's tables (EU 006A873C..: op {-, add, sub, revsub, min,
 * max}, source {0, 1, dst, 1-dst, srcA, 1-srcA, dstA, 1-dstA}, destination {0, 1, src, 1-src,
 * srcA, 1-srcA, dstA, 1-dstA}, logic 006A87C4); two entries = separate colour / alpha. High. */
uint32_t *func_00401A98(uint8_t *d, uint32_t *p, const uint8_t *m) {
    static const uint8_t OPT[6] = {0, 0, 1, 2, 3, 4};
    static const uint8_t SRC[8] = {0, 1, 4, 5, 6, 7, 8, 9};
    static const uint8_t DST[8] = {0, 1, 2, 3, 6, 7, 8, 9};
    static const uint8_t LOGIC[17] = {0, 6, 0, 4, 3, 5, 7, 1, 8, 9, 10, 11, 12, 2, 13, 14, 15};
    const uint8_t *b = mat_res(m, 1);
    ROp op;
    memset(&op, 0, sizeof op);
    if (b[0] == 0) {
        if (b[3] != 0) {
            op.type = ROP_LOGICOP;
            op.u.frag.logic_enable = 1;
            op.u.frag.logic_op = LOGIC[b[3] < 17 ? b[3] : 0];
            return render_rec(p, &op);
        }
        op.type = ROP_BLEND; /* blending off (add, one, zero) */
        op.u.frag.src_rgb = op.u.frag.src_a = 1;
        return render_rec(p, &op);
    }
    const uint8_t *a = ((U32(m, 0x74) >> 10 & 3) == 2) ? b + 4 : b;
    op.type = ROP_BLEND;
    RFragState *f = &op.u.frag;
    f->blend_enable = 1;
    f->eq_rgb = OPT[b[0] % 6];
    f->eq_a = OPT[a[0] % 6];
    f->src_rgb = SRC[b[1] & 7];
    f->dst_rgb = DST[b[2] & 7];
    f->src_a = SRC[a[1] & 7];
    f->dst_a = DST[a[2] & 7];
    return render_rec(p, &op);
}

/* USA 004016FC  material alpha test + blend (drawer, p, material, x) -> p': alpha compare from the
 * material (func by the game's table 006A8818, ref = 0.5 + ref * 255) or the default (off, cached
 * by +0x629); blend from the material (00401A98) or the default (src alpha / 1 - src alpha,
 * cached by +0x628). Each change flushes the batch first. High. */
uint32_t *func_004016FC(uint8_t *d, uint32_t *p, uint8_t *m, uint32_t x) {
    static const uint8_t FUNC[8] = {0, 4, 5, 2, 3, 7, 6, 1};
    uint32_t f = U32(m, 0x74);
    ROp op;
    if (!(f & 0x200)) {
        if (!B8(d, 0x629)) {
            p = func_004010C8(d, p);
            B8(d, 0x629) = 1;
            memset(&op, 0, sizeof op);
            op.type = ROP_ALPHATEST;
            op.u.frag.alpha_func = 1;
            p = render_rec(p, &op);
        }
    } else {
        p = func_004010C8(d, p);
        B8(d, 0x629) = 0;
        const uint8_t *ac = mat_res(m, 0);
        memset(&op, 0, sizeof op);
        op.type = ROP_ALPHATEST;
        op.u.frag.alpha_test = 1;
        op.u.frag.alpha_func = FUNC[ac[0] & 7];
        op.u.frag.alpha_ref = (uint8_t)(uint32_t)(0.5f + F32(ac, 4) * 255.0f);
        p = render_rec(p, &op);
    }
    if (!(f & 0xC00)) {
        if (!B8(d, 0x628)) {
            p = func_004010C8(d, p);
            B8(d, 0x628) = 1;
            memset(&op, 0, sizeof op);
            op.type = ROP_BLEND;
            op.u.frag.blend_enable = 1;
            op.u.frag.src_rgb = op.u.frag.src_a = 6;
            op.u.frag.dst_rgb = op.u.frag.dst_a = 7;
            p = render_rec(p, &op);
        }
    } else {
        p = func_004010C8(d, p);
        B8(d, 0x628) = 0;
        p = func_00401A98(d, p, m);
    }
    return p;
}

/* texture blend mode of entry k (0 / 1) as the game remaps it: 1, 2 -> same, 3 -> 4, 5 -> 3,
 * else 0; second byte == 1: alpha modulate (else add) */
static int blend_mode(const uint8_t *m, int k, int *alpha_mod) {
    *alpha_mod = 0;
    if (!(U32(m, 0x78) & 0x1C0)) return 0;
    if (k == 1 && (U32(m, 0x78) >> 6 & 7) < 2) return 0;
    const uint8_t *e = mat_res(m, 2) + 4 * k;
    *alpha_mod = e[1] == 1;
    switch (e[0]) {
    case 1: return 1;
    case 2: return 2;
    case 3: return 4;
    case 5: return 3;
    default: return 0;
    }
}

static RTevStage alpha_patch(RTevStage s, int mod) {
    s.combine_a = mod ? C_MOD : C_ADD;
    return s;
}
static RTevStage rgb_const(RTevStage s, int yes) {
    if (yes) s.src_rgb[0] = S_K;
    return s;
}

/* USA 00401E44  combiner for 2 textures (drawer, p, material, x) -> p': flush, stage 0 = tex0
 * (premultiplied for add/subtract modes), stage 1 = blend of tex1 (by mode: alpha interpolate,
 * modulate, multiply-add, subtract/multiply via stage 2), alpha of stage 1 modulate/add, alpha-only
 * maps take white rgb; buffer updates 0x2200 (0x2500 for the 3-stage modes). Mode cache 3. High. */
uint32_t *func_00401E44(uint8_t *d, uint32_t *p, uint8_t *m, uint32_t x) {
    p = func_004010C8(d, p);
    int amod;
    int mode = blend_mode(m, 0, &amod);
    const uint8_t *maps = PTR(m, 0x7C);
    RTevStage s0, s1, s2;
    int mask = 3;
    uint32_t e0 = 0x2200;
    switch (mode) {
    case 1: s0 = T_L_TEX0; s1 = T_L_1MOD; break;
    case 2: s0 = T_L_TEX0P; s1 = T_L_1ADD; break;
    case 3: s0 = T_L_TEX0P; s1 = T_L_1PRE; s2 = T_L_2SUB; mask = 7; e0 = 0x2500; break;
    case 4: s0 = T_L_TEX0P; s1 = T_L_1PRE; s2 = T_L_2MUL; mask = 7; e0 = 0x2500; break;
    default: s0 = T_L_TEX0; s1 = T_L_1INT; break;
    }
    s0 = rgb_const(s0, alpha_only(maps));
    s1 = alpha_patch(rgb_const(s1, alpha_only(maps + 0x20)), amod);
    const RTevStage *st[6] = {&s0, &s1, mask & 4 ? &s2 : NULL, NULL, NULL, NULL};
    p = rec_stages(p, mask, st, e0, 1);
    B8(d, 0x62A) = 3;
    return p;
}

/* USA 00402110  combiner for 3 textures (drawer, p, material) -> p': stages 0/1 as 00401E44
 * (modes 0-2), stage 2 = blend of tex2 by the second mode (interpolate, modulate, multiply-add),
 * buffer updates 0x4400. Mode cache 4. High. */
uint32_t *func_00402110(uint8_t *d, uint32_t *p, uint8_t *m) {
    p = func_004010C8(d, p);
    int amod1, amod2;
    int mode1 = blend_mode(m, 0, &amod1), mode2 = blend_mode(m, 1, &amod2);
    const uint8_t *maps = PTR(m, 0x7C);
    RTevStage s0, s1, s2;
    if (mode1 == 1) { s0 = T_L_TEX0; s1 = T_L_1MOD; }
    else if (mode1 == 2) { s0 = T_L_TEX0P; s1 = T_L_1ADD; }
    else { s0 = T_L_TEX0; s1 = T_L_1INT; }
    if (mode2 == 1) s2 = T_L_2MOD;
    else if (mode2 == 2) s2 = T_L_2ADD;
    else s2 = T_L_2INT;
    s0 = rgb_const(s0, alpha_only(maps));
    s1 = alpha_patch(rgb_const(s1, alpha_only(maps + 0x20)), amod1);
    s2 = alpha_patch(rgb_const(s2, alpha_only(maps + 0x40)), amod2);
    const RTevStage *st[6] = {&s0, &s1, &s2, NULL, NULL, NULL};
    p = rec_stages(p, 7, st, 0x4400, 1);
    B8(d, 0x62A) = 4;
    return p;
}

/* USA 00401160  material combiner (drawer, p, material, x) -> p'. Material +0x9E bit 1: no
 * combiner of its own (only a flush when a multi-texture mode is cached). Else alpha / blend
 * (004016FC); after a 2/3-texture or reset mode the colour constants are forced; then by texture
 * count: 0 -> stage 0 = white constant, 1 -> stage 0 = tex0 (alpha-only maps: white rgb), both
 * with buffer update from stage 0 (0x1100) and cached in +0x62A (0 / 1 / 2); 2 / 3 -> 00401E44 /
 * 00402110; colours 004032F0. High. */
uint32_t *func_00401160(uint8_t *d, uint32_t *p, uint8_t *m, uint32_t x) {
    if (U8(m, 0x9E) & 2) {
        uint8_t c = B8(d, 0x62A);
        if (c != 0 && c != 1 && c != 2) p = func_004010C8(d, p);
        return p;
    }
    p = func_004016FC(d, p, m, x);
    uint32_t white = U32(m, 0x70), black = U32(m, 0x6C);
    if (B8(d, 0x62A) > 4) {
        p = func_004010C8(d, p);
        p = func_004032F0(d, p, white, black, 1);
    }
    uint32_t n = U32(m, 0x78) & 3;
    const uint8_t *maps = PTR(m, 0x7C);
    const RTevStage *st[6] = {0};
    if (n == 0) {
        if (B8(d, 0x62A) != 0) {
            p = func_004010C8(d, p);
            st[0] = &T_L_CONST;
            p = rec_stages(p, 1, st, 0x1100, 1);
            p = func_004032F0(d, p, white, black, 0);
            B8(d, 0x62A) = 0;
            return p;
        }
        if (U32(d, 0x62C) != white || U32(d, 0x630) != black) {
            p = func_004010C8(d, p);
            p = func_004032F0(d, p, white, black, 0);
        }
        return p;
    }
    if (n == 1) {
        uint8_t c = B8(d, 0x62A);
        int ao = alpha_only(maps);
        RTevStage s0 = rgb_const(T_L_TEX0, ao);
        st[0] = &s0;
        if (c == 1 || c == 2) {
            /* stage 0 already holds the texture template: only its source changes */
            if (ao ? c != 2 : c != 1) {
                p = func_004010C8(d, p);
                p = rec_stages(p, 1, st, 0, 0);
                B8(d, 0x62A) = (uint8_t)(ao ? 2 : 1);
            }
            if (U32(d, 0x62C) != white || U32(d, 0x630) != black) {
                p = func_004010C8(d, p);
                p = func_004032F0(d, p, white, black, 0);
            }
            return p;
        }
        p = func_004010C8(d, p);
        p = rec_stages(p, 1, st, 0x1100, 1);
        p = func_004032F0(d, p, white, black, 0);
        B8(d, 0x62A) = (uint8_t)(ao ? 2 : 1);
        return p;
    }
    if (n == 2) p = func_00401E44(d, p, m, x);
    else p = func_00402110(d, p, m);
    return func_004032F0(d, p, white, black, 0);
}
