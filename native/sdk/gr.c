/* Native replacements of the nn::gr::CTR "MakeCommand" family (USA ~0x00561000-0x00569000) and
 * of the engine command-buffer CALL helper, for native/render (Tier B of GRAPHICS_STACK.md).
 *
 * Each original serialises a structured state object (render target, viewport, blend, depth,
 * texture unit, combiner stages...) into PICA200 register words at the command pointer `p` and
 * returns the advanced pointer. The replacement reads the SAME structured object (3DS layout:
 * 32-bit fields at the offsets the original reads, documented per function from its Ghidra body
 * and the EU literal pools), describes it as a native op and records it with render_rec(), which
 * writes a 2-word native marker at `p`. Nothing is encoded as PICA and nothing is decoded later.
 *
 * Pointer contract: every replacement writes AT MOST as many bytes as the original wrote for the
 * same input and returns the pointer just after what it wrote, so callers that subtract pointers
 * (CURRENT_BUFADDR + MoveCommandbufferPointer), build prebuilt blocks, memcpy them into lists or
 * call them as subroutines keep working; the markers travel with the bytes. When the original
 * would have written nothing, nothing is written. Known limit: a caller that skipped a FIXED size
 * instead of using the returned pointer would leave stale bytes (possibly an older marker) in the
 * gap; every direct caller checked (0048AD08..0048AFEC, 0057EAC0, 0012D18C, 0016E5A0, 003F9B70,
 * 0054391C, 004979CC, 003CC090) chains the returned pointer.
 *
 * Layouts: the state objects are nn::gr::CTR::RenderState and friends. The engine
 * GraphicsContext keeps one RenderState at +0x54 (wrappers 0048AD08..0048AFEC), the RenderState
 * MakeCommand reads (offsets from the RenderState):
 *   +0x00 Blend      {u8 enable, eqRgb, eqA, srcRgb, srcA, dstRgb, dstA, u8 color[4] @+7, ptr parent @+0xC}
 *   +0x10 LogicOp    {u8 enable, op, ptr parent @+4}
 *   +0x18 ShadowMap  (fragment-op mode 3 + shadow texture params; not mapped, see 00562530)
 *   +0x30 AlphaTest  {u8 enable, ref, func, ptr parent @+4}
 *   +0x38 Stencil    {u8 enable, writeMask @+1, func @+4, s32 ref @+8, s32 mask @+0xC,
 *                     u8 opFail @+0x10, opZFail @+0x11, opZPass @+0x12, ptr parent @+0x14}
 *   +0x50 u8 colorMask (R1 G2 B4 A8)
 *   +0x54 Depth      {u8 enable, write, func, ptr parent @+4}
 *   +0x5C Culling    {u8 enable, frontFace, cullFace, ptr parent @+4}
 *   +0x64 WBuffer    {f32 wScale, u8 polyOffsetEnable @+4, f32 polyOffsetUnits @+8,
 *                     f32 depthNear @+0xC, f32 depthFar @+0x10, u8 depthBits @+0x14}
 *   +0x7C FBAccess   {ptr renderState} (framebuffer read/write enables: implied by GL masks)
 * Enum values are the PICA ones (render.h).
 *
 * Confidence (function boundaries and register meaning: high, from the literal pools; field
 * names: medium, from the nn::gr::CTR API shape): see each function. 64-bit: game structures are
 * read with 32-bit fields (OBJ_*), addresses widened through uintptr_t (gfx.c keeps GPU memory
 * below 2 GiB). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <execinfo.h>

#include "../render/render.h"
#include "../render/texdecode.h"

#define U8(p, o) (((const uint8_t *)(p))[o])
#define U32(p, o) (*(const uint32_t *)((const uint8_t *)(p) + (o)))
#define S32(p, o) (*(const int32_t *)((const uint8_t *)(p) + (o)))
#define F32(p, o) (*(const float *)((const uint8_t *)(p) + (o)))
#define PTR(p, o) ((const uint8_t *)(uintptr_t)U32(p, o))

static ROp op_new(ROpType t) {
    ROp op;
    memset(&op, 0, sizeof op); /* zeroed padding: identical states share one pool entry */
    op.type = (uint16_t)t;
    return op;
}

/* ------------------------------------------------------------------ decoders of the sub-objects */

static void blend_get(const uint8_t *b, RFragState *f) {
    f->blend_enable = U8(b, 0) != 0;
    if (f->blend_enable) {
        f->eq_rgb = U8(b, 1); f->eq_a = U8(b, 2);
        f->src_rgb = U8(b, 3); f->src_a = U8(b, 4);
        f->dst_rgb = U8(b, 5); f->dst_a = U8(b, 6);
    } else {
        /* disabled: the original programs ADD, ONE, ZERO (0x01010000) */
        f->eq_rgb = f->eq_a = 0;
        f->src_rgb = f->src_a = 1;
        f->dst_rgb = f->dst_a = 0;
    }
    memcpy(f->blend_color, b + 7, 4);
}

static void stencil_get(const uint8_t *s, RFragState *f) {
    f->stencil_test = U8(s, 0) != 0;
    f->stencil_write = U8(s, 1);
    f->stencil_func = U8(s, 4) & 7;
    f->stencil_ref = (uint8_t)S32(s, 8);
    f->stencil_mask = (uint8_t)S32(s, 0xC);
    f->stencil_fail = U8(s, 0x10) & 7;
    f->stencil_zfail = U8(s, 0x11) & 7;
    f->stencil_zpass = U8(s, 0x12) & 7;
}

static uint8_t cull_mode(const uint8_t *c) {
    if (!U8(c, 0)) return 0;
    uint8_t ff = U8(c, 1), cf = U8(c, 2);
    /* 00561F74: register 0x40 = 2 when (front CCW, cull back) or (front CW, cull front), else 1 */
    return (ff == 0 && cf == 0) || (ff == 1 && cf == 1) ? 2 : 1;
}

static void wbuffer_get(const uint8_t *w, RFragState *f) {
    float scale = F32(w, 0), n = F32(w, 0xC), fa = F32(w, 0x10);
    int bits = U8(w, 0x14) ? U8(w, 0x14) : 24;
    f->wbuffer = scale != 0.0f;  /* W-buffering has no GL 3.3 equivalent: plain depth is used */
    f->depth_near = n;
    f->depth_far = fa;
    f->poly_offset_enable = U8(w, 4) != 0;
    /* 00562060: depth offset = (far-near) * 128 * units / (2^bits - 1), in [0,1] depth; GL
     * polygon-offset units are steps of the 24-bit depth buffer */
    float steps = (float)((1u << bits) - 1u);
    f->poly_offset_units = f->poly_offset_enable ? (fa - n) * 128.0f * F32(w, 8) * (16777215.0f / steps) : 0.0f;
}

/* ================================================================== render target / viewport */

/* USA 00561B30  nn::gr::CTR::RenderTarget (FrameBuffer) MakeCommand (const FrameBuffer *fb, u32 *p,
 * u32 which, int flush) -> p'. which bit 0: colour buffer, bits 1-2: depth/stencil buffer; flush:
 * framebuffer cache flush/invalidate pair (0x111/0x110) before. Object: +0x00 colour address,
 * +0x04 u8 colour format (PICA 0 RGBA8 .. 4 RGBA4), +0x24 depth address, +0x28 u8 depth format
 * (0 D16, 2 D24, 3 D24S8), +0x40 width, +0x44 height (register 0x11E). Callers: 00322CF4 (init),
 * 002FF8A4, 0057E870 (render pass). Native: ROP_TARGET (the GL FBO for that address pair is created
 * at execution). Original writes >= 8 words. Confidence: high. */
uint32_t *func_00561B30(const uint8_t *fb, uint32_t *p, uint32_t which, int32_t flush) {
    ROp op = op_new(ROP_TARGET);
    op.u.target.has_color = (which & 1) != 0;
    op.u.target.has_depth = (which & 6) != 0;
    op.u.target.color = (uintptr_t)U32(fb, 0x00);
    op.u.target.cfmt = U8(fb, 0x04);
    op.u.target.depth = (uintptr_t)U32(fb, 0x24);
    op.u.target.dfmt = U8(fb, 0x28);
    op.u.target.w = (uint16_t)U32(fb, 0x40);
    op.u.target.h = (uint16_t)U32(fb, 0x44);
    return render_rec(p, &op);
}

/* USA 00563A5C  Viewport MakeCommand (const u32 vp[4] {x, y, w, h}, u32 *p) -> p'. The original
 * writes w/2, 2/w, h/2, 2/h as float24/float31 (0x41-0x44) and x | y << 16 (0x68). Callers:
 * 0048AD94 (GraphicsContext::SetViewport, +0xD4), 0012D18C, 0016E5A0. 10 words. High. */
uint32_t *func_00563A5C(const uint32_t *vp, uint32_t *p) {
    ROp op = op_new(ROP_VIEWPORT);
    op.u.rect.x = (int32_t)vp[0];
    op.u.rect.y = (int32_t)vp[1];
    op.u.rect.w = (int32_t)vp[2];
    op.u.rect.h = (int32_t)vp[3];
    return render_rec(p, &op);
}

/* USA 00563170  Scissor MakeCommand (const Scissor *s, u32 *p) -> p'. Object: +0 u8 enable,
 * +4 x, +8 y, +0xC w, +0x10 h, +0x14 buffer width, +0x18 buffer height; the original clamps the
 * corners to the buffer (0x65 mode 0/3, 0x66 x|y<<16, 0x67 right|top<<16). Callers 0048AD08
 * (GraphicsContext::SetScissor, +0xE4), 0012D18C, 0016E5A0. 4 words. High. */
uint32_t *func_00563170(const uint8_t *s, uint32_t *p) {
    int32_t x = S32(s, 4), y = S32(s, 8), w = S32(s, 0xC), h = S32(s, 0x10), bw = S32(s, 0x14), bh = S32(s, 0x18);
    int32_t x1 = x + w - 1, y1 = y + h - 1;
    if (x < 0) x = 0; else if (x >= bw) x = bw - 1;
    if (y < 0) y = 0; else if (y >= bh) y = bh - 1;
    if (x1 < 0) x1 = 0;
    if (y1 < 0) y1 = 0;
    ROp op = op_new(ROP_SCISSOR);
    op.u.rect.enable = U8(s, 0) != 0;
    op.u.rect.x = x;
    op.u.rect.y = y;
    op.u.rect.w = x1 - x + 1;
    op.u.rect.h = y1 - y + 1;
    return render_rec(p, &op);
}

/* ================================================================== fragment operations */

/* USA 00561C34  RenderState::MakeCommand (const RenderState *rs, u32 *p, int fbAccess) -> p': the
 * whole fragment-operation state (layout in the header: culling 0x40, blend/logic 0x100-0x103,
 * alpha 0x104, stencil 0x105/0x106, depth+colour mask 0x107, depth map 0x4D/0x4E/0x6D, FB access
 * 0x112-0x115). Callers 0057EAC0 (engine, +0x68), 0012D18C (env block build), 0054391C. The
 * shadow-map sub-state (+0x18, fragment mode 3) is not mapped. >= 20 words. High. */
uint32_t *func_00561C34(const uint8_t *rs, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_FRAG);
    RFragState *f = &op.u.frag;
    blend_get(rs, f);
    f->logic_enable = U8(rs, 0x10) != 0;
    f->logic_op = U8(rs, 0x11) & 15;
    f->alpha_test = U8(rs, 0x30) != 0;
    f->alpha_ref = U8(rs, 0x31);
    f->alpha_func = U8(rs, 0x32) & 7;
    stencil_get(rs + 0x38, f);
    f->color_mask = U8(rs, 0x50) & 15;
    f->depth_test = U8(rs, 0x54) != 0;
    f->depth_write = U8(rs, 0x55) != 0;
    f->depth_func = U8(rs, 0x56) & 7;
    f->cull = cull_mode(rs + 0x5C);
    wbuffer_get(rs + 0x64, f);
    return render_rec(p, &op);
}

/* USA 00561EB4  Blend::MakeCommand (const Blend *b, u32 *p, int fbAccess) -> p': fragment mode
 * "blend" (0x100 byte 1), 0x101 equations/factors, 0x103 colour. Callers 0048AE70 (engine
 * SetBlendEnable, RenderState+0), 00132A20, 003F3854, 003F9B70. >= 4 words. High. */
uint32_t *func_00561EB4(const uint8_t *b, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_BLEND);
    blend_get(b, &op.u.frag);
    return render_rec(p, &op);
}

/* USA 00561FF0  LogicOp::MakeCommand (const LogicOp *l, u32 *p, int fbAccess) -> p'. When enabled:
 * fragment mode "logic op" + 0x101 = replace + 0x102 = op; when disabled it writes nothing (the
 * blend state stays). Caller 003F9B70. Medium (name), high (body). */
uint32_t *func_00561FF0(const uint8_t *l, uint32_t *p, int32_t fbAccess) {
    if (!U8(l, 0)) return p; /* original: no words unless fbAccess (FB-access words only) */
    ROp op = op_new(ROP_LOGICOP);
    op.u.frag.logic_enable = 1;
    op.u.frag.logic_op = U8(l, 1) & 15;
    return render_rec(p, &op);
}

/* USA 00562430  AlphaTest::MakeCommand (const AlphaTest *a, u32 *p, int fbAccess) -> p': 0x104 =
 * enable | func << 4 | ref << 8. Object {u8 enable, ref, func}. Caller 003F9B70. 2 words. High. */
uint32_t *func_00562430(const uint8_t *a, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_ALPHATEST);
    op.u.frag.alpha_test = U8(a, 0) != 0;
    op.u.frag.alpha_ref = U8(a, 1);
    op.u.frag.alpha_func = U8(a, 2) & 7;
    return render_rec(p, &op);
}

/* USA 00561E28  StencilTest::MakeCommand (const StencilTest *s, u32 *p, int fbAccess) -> p': 0x105
 * and 0x106. Callers: engine wrappers 0048AEB8 (ops), 0048AF54 (func/ref/mask), 0048AFEC
 * (enable + write mask 0xFF/0), all on RenderState+0x38; 003F9B70. 4 words. High. */
uint32_t *func_00561E28(const uint8_t *s, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_STENCIL);
    stencil_get(s, &op.u.frag);
    return render_rec(p, &op);
}

/* USA 00562488  DepthTest::MakeCommand (const DepthTest *d, u32 *p, int fbAccess) -> p': 0x107 =
 * enable | func << 4 | colour mask << 8 (from the parent RenderState +0x50) | write << 12.
 * Callers: 0048AF10 (depth enable) / 0048AFA8 (depth write) on RenderState+0x54, 00132A20,
 * 003F9B70. 2 words. High. */
uint32_t *func_00562488(const uint8_t *d, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_DEPTH);
    op.u.frag.depth_test = U8(d, 0) != 0;
    op.u.frag.depth_write = U8(d, 1) != 0;
    op.u.frag.depth_func = U8(d, 2) & 7;
    const uint8_t *rs = PTR(d, 4);
    op.u.frag.color_mask = rs ? (U8(rs, 0x50) & 15) : 15;
    return render_rec(p, &op);
}

/* USA 00561F74  Culling::MakeCommand (const Culling *c, u32 *p, int fbAccess) -> p': 0x40 (see
 * cull_mode). Caller 003F9B70. 2 words. High (register), medium (front/cull naming). */
uint32_t *func_00561F74(const uint8_t *c, uint32_t *p, int32_t fbAccess) {
    ROp op = op_new(ROP_CULL);
    op.u.frag.cull = cull_mode(c);
    return render_rec(p, &op);
}

/* USA 00562060  WBuffer::MakeCommand (const WBuffer *w, u32 *p) -> p': 0x6D (w-buffer enable),
 * 0x4D depth scale = near - far, 0x4E depth offset = near (+ polygon offset). Caller 00561C34
 * only (kept for completeness). 6 words. High. */
uint32_t *func_00562060(const uint8_t *w, uint32_t *p) {
    ROp op = op_new(ROP_DEPTHMAP);
    wbuffer_get(w, &op.u.frag);
    return render_rec(p, &op);
}

/* USA 00562530  ShadowMap state (fragment mode 3, 0x8B shadow texture bias, 0x130 penumbra) ->
 * p'. Shadow rendering is not mapped yet: nothing is written (callers only advance by the
 * returned pointer). Callers 00561C34, 003F9B70. Confidence: medium. */
uint32_t *func_00562530(const uint8_t *s, uint32_t *p, int32_t fbAccess, int32_t full) { return p; }

/* USA 00562280  FBAccess::MakeCommand (const RenderState **rs, u32 *p, int flush) -> p':
 * framebuffer colour/depth/stencil read & write enables (0x112-0x115) derived from the other
 * states. GL derives the same from blend/masks/tests: nothing to record. High. */
uint32_t *func_00562280(const uint8_t *fba, uint32_t *p, int32_t flush) { return p; }

/* ================================================================== textures */

/* texture object as read by 005632B0 / 00563548 / 00563750 (offsets from the unit object):
 * +0x00 address (already "physical"), +0x04 u16 width, +0x06 u16 height, +0x08 u8 format,
 * +0x09 wrapT, +0x0A wrapS, +0x0B mag, +0x0C min, +0x10 f32 lod bias, +0x14 u8 min level,
 * +0x15 u8 max level, +0x16..0x19 border RGBA, +0x1C u8 type (unit 0 only), +0x20.. cube faces
 * (unit 0 only, 6 addresses) */
static void texunit_get(const uint8_t *t, int unit, RTexUnit *u) {
    u->addr = (uintptr_t)U32(t, 0);
    u->w = (uint16_t)(U32(t, 4) & 0xFFFF);
    u->h = (uint16_t)(U32(t, 4) >> 16);
    u->fmt = U8(t, 8);
    u->wrap_t = U8(t, 9) & 3;
    u->wrap_s = U8(t, 0xA) & 3;
    u->mag = U8(t, 0xB) & 1;
    u->min = U8(t, 0xC);
    u->lod_bias = F32(t, 0x10);
    u->min_level = U8(t, 0x14);
    u->max_level = U8(t, 0x15);
    memcpy(u->border, t + 0x16, 4);
    u->type = unit == 0 ? U8(t, 0x1C) : 0;
    if (unit == 0 && (u->type == 1 || u->type == 4))
        for (int i = 0; i < 6; i++) u->cube[i] = (uintptr_t)U32(t, 0x20 + 4 * i);
}

/* texture-unit block (00563220 / 00563710): unit 0 at +0x00 (0x3C bytes, type 5 = off), unit 1 at
 * +0x3C, unit 2 at +0x60 (enable byte at +0x1C of each), unit 2 coordinate select +0x7D, procedural
 * texture (unit 3) enable +0xA0, coordinate +0xA1 */
static ROp texcfg_op(const uint8_t *units) {
    ROp op = op_new(ROP_TEXCONFIG);
    op.u.texcfg.enable_mask = (uint8_t)((U8(units, 0x1C) != 5) | (U8(units, 0x58) != 0) << 1 | (U8(units, 0x7C) != 0) << 2);
    op.u.texcfg.tex2_from_tc1 = U8(units, 0x7D) != 0;
    op.u.texcfg.tex3_enable = U8(units, 0xA0) != 0;
    op.u.texcfg.tex3_coord = U8(units, 0xA1);
    return op;
}

/* USA 00563220  texture unit configuration (0x80: unit enables, unit-2 coordinates, procedural
 * texture, cache clear) (const TextureUnits *units, u32 *p, int flush) -> p'. Called by the unit
 * MakeCommands below with flush. >= 2 words. High. */
uint32_t *func_00563220(const uint8_t *units, uint32_t *p, int32_t flush) {
    ROp op = texcfg_op(units);
    return render_rec(p, &op);
}

static uint32_t *texunit_rec(const uint8_t *t, int unit, uint32_t *p, int32_t with_cfg, uint32_t parent_off) {
    if (with_cfg) {
        const uint8_t *units = PTR(t, parent_off);
        if (units) {
            ROp c = texcfg_op(units);
            p = render_rec(p, &c);
        }
    }
    ROp op = op_new(ROP_TEXUNIT);
    op.unit = (uint8_t)unit;
    texunit_get(t, unit, &op.u.tex);
    return render_rec(p, &op);
}

/* USA 005632B0  texture unit 0 MakeCommand (const Texture0 *t, u32 *p, int withConfig) -> p':
 * 0x81-0x8A, 0x8E; withConfig: also 0x80 from the parent unit block (+0x38). Callers 00563710.
 * >= 10 words. High. */
uint32_t *func_005632B0(const uint8_t *t, uint32_t *p, int32_t with_cfg) { return texunit_rec(t, 0, p, with_cfg, 0x38); }

/* USA 00563548  texture unit 1 MakeCommand (const Texture1 *t, u32 *p, int withConfig) -> p':
 * 0x91-0x96, 0x9A; parent at +0x20. 12 words. High. */
uint32_t *func_00563548(const uint8_t *t, uint32_t *p, int32_t with_cfg) { return texunit_rec(t, 1, p, with_cfg, 0x20); }

/* USA 00563750  texture unit 2 MakeCommand (same layout as unit 1): 0x99-0x9E, 0xA2. 12 words.
 * High. */
uint32_t *func_00563750(const uint8_t *t, uint32_t *p, int32_t with_cfg) { return texunit_rec(t, 2, p, with_cfg, 0x20); }

/* USA 00563710  all texture units (const TextureUnits *units, u32 *p, int flush) -> p': config,
 * unit 0 (+0x00), unit 1 (+0x3C), unit 2 (+0x60). >= 34 words. High. */
uint32_t *func_00563710(const uint8_t *units, uint32_t *p, int32_t flush) {
    ROp c = texcfg_op(units);
    p = render_rec(p, &c);
    for (int u = 0; u < 3; u++) {
        static const uint32_t off[3] = {0x00, 0x3C, 0x60};
        ROp op = op_new(ROP_TEXUNIT);
        op.unit = (uint8_t)u;
        texunit_get(units + off[u], u, &op.u.tex);
        p = render_rec(p, &op);
    }
    return p;
}

/* ================================================================== texture combiner */

/* USA 00563918  texture combiner (TexEnv) MakeCommand (const Combiner *c, u32 *p) -> p': six
 * 0x18-byte stages {u8 combineRgb, operandRgb[3], sourceRgb[3] @+4, scaleRgb @+7,
 * bufferInputRgb @+8, combineA @+9, operandA[3] @+0xA, sourceA[3] @+0xD, scaleA @+0x10,
 * bufferInputA @+0x11, const RGBA @+0x12, u16 register @+0x16}, then +0x90 buffer colour; the
 * buffer-input flags of stages 1-4 become register 0xE0 bits 8-15 ("stage n-1 updates the
 * combiner buffer"). Callers 003F9B70, 004979CC (sead PrimitiveRenderer), 0054391C. 40 words.
 * High (layout read straight from the register packing). */
uint32_t *func_00563918(const uint8_t *c, uint32_t *p) {
    ROp op = op_new(ROP_TEV);
    RTev *t = &op.u.tev;
    for (int i = 0; i < 6; i++) {
        const uint8_t *s = c + i * 0x18;
        RTevStage *d = &t->stage[i];
        d->combine_rgb = U8(s, 0);
        for (int k = 0; k < 3; k++) {
            d->op_rgb[k] = U8(s, 1 + k);
            d->src_rgb[k] = U8(s, 4 + k);
            d->op_a[k] = U8(s, 0xA + k);
            d->src_a[k] = U8(s, 0xD + k);
        }
        d->scale_rgb = U8(s, 7);
        d->combine_a = U8(s, 9);
        d->scale_a = U8(s, 0x10);
        memcpy(d->konst, s + 0x12, 4);
    }
    for (int n = 1; n <= 4; n++) {
        if (U8(c, n * 0x18 + 8)) t->buf_update_rgb |= (uint8_t)(1 << (n - 1));
        if (U8(c, n * 0x18 + 0x11)) t->buf_update_a |= (uint8_t)(1 << (n - 1));
    }
    memcpy(t->buf_color, c + 0x90, 4);
    return render_rec(p, &op);
}

/* USA 005647D4  set a material constant colour on the combiner stages that use constant slot
 * `slot` (obj, u32 *p, r, g, b, a, slot) -> p'. Stage mask = obj[+0x28 + 4*slot] bits 0-5 (stage
 * 0..5 const registers 0xC3/0xCB/0xD3/0xDB/0xF3/0xFB); for stage 0 the original writes 0xFFFFFFFF
 * (white), not the colour (EU 005647AC: `mvn r6, #0`). Callers 003F0080, 003F2E98, 003F31AC (eft).
 * 2 words per stage. High. */
uint32_t *func_005647D4(const uint8_t *obj, uint32_t *p, uint32_t r, uint32_t g, uint32_t b, uint32_t a, int32_t slot) {
    uint32_t mask = U32(obj, 0x28 + 4 * slot) & 0x3F;
    if (mask & 1) {
        ROp op = op_new(ROP_TEV_CONST);
        op.u.tev_const.stage_mask = 1;
        memset(op.u.tev_const.rgba, 0xFF, 4);
        p = render_rec(p, &op);
    }
    if (mask & 0x3E) {
        ROp op = op_new(ROP_TEV_CONST);
        op.u.tev_const.stage_mask = (uint8_t)(mask & 0x3E);
        op.u.tev_const.rgba[0] = (uint8_t)r;
        op.u.tev_const.rgba[1] = (uint8_t)g;
        op.u.tev_const.rgba[2] = (uint8_t)b;
        op.u.tev_const.rgba[3] = (uint8_t)a;
        p = render_rec(p, &op);
    }
    return p;
}

/* ================================================================== shader programs */

/* The game's ShaderLite / Shader objects (catalogue in native/render/SHADERS.md): word [0] = VS
 * index, [1] = GS index (-1 none), [3 + i] = DVLE pointers. A bind is recorded as ROP_PROGRAM with
 * the DVLE address as identity; native/render maps identities to hand-written programs once the
 * loaders register them (until then the generic program is used). */
static uint32_t *program_rec(const int32_t *sh, int dvle_base, uint32_t *p) {
    ROp op = op_new(ROP_PROGRAM);
    int32_t vs = sh[0];
    op.u.program.key = (vs >= 0 && vs < 64) ? (uintptr_t)(uint32_t)sh[dvle_base + vs] : 0;
    op.u.program.id = RPROG_GR_DEFAULT;
    return render_rec(p, &op);
}

/* USA 00562B24  ShaderLite full bind (code + operand descriptors + setup blocks) (const ShaderLite *,
 * u32 *p) -> p' (hundreds of words). Callers 002C2610 (gr_default_shader), 004970E8 (sead
 * PrimitiveRenderer). USA 00562F64  ShaderLite bind without code upload (sh, p, int modeChange,
 * x) -> p'. USA 005613D4  Shader full bind (sh, p) and 00561808 Shader bind-only (sh, p, int)
 * (nw::h3d, 003FC8DC; DVLE pointers at [4 + i]). Medium (layout), high (role). */
uint32_t *func_00562B24(const int32_t *sh, uint32_t *p) { return program_rec(sh, 3, p); }
uint32_t *func_00562F64(const int32_t *sh, uint32_t *p, int32_t mode, uint32_t x) { return program_rec(sh, 3, p); }
uint32_t *func_005613D4(const int32_t *sh, uint32_t *p) { return program_rec(sh, 4, p); }
uint32_t *func_00561808(const int32_t *sh, uint32_t *p, int32_t mode) { return program_rec(sh, 4, p); }

/* ================================================================== command-buffer subroutine call */

/* USA 003CC230  write a PICA command-buffer "call" (u32 *p, u32 **sizeSlot, target, targetSize)
 * -> p + 6 words: CMDBUF_SIZE0 = targetSize/8, SIZE1 (return segment size, patched later through
 * *sizeSlot), ADDR0 = target, ADDR1 = return address p+6, JUMP0. Callers: the render passes
 * (002C30E8, 002E39E8, 00130C1C, 001321B8...) and 003CC090 (engine cursor variant) to run prebuilt
 * blocks (environment, materials, shaders). Native: ROP_CALL(target, size) - executing it runs the
 * native markers of the target block, then execution continues after the call like the hardware
 * returning through ADDR1. Writes 4 words: the marker and a writable size slot (+ padding) so the
 * caller's later patch lands in our block. High. */
uint32_t *func_003CC230(uint32_t *p, uint32_t *size_slot, uint32_t target, uint32_t size) {
    { /* debug: ALBW_REC_TRACE=<first>-<last> (platform frames): every recorded CALL, with its slot */
        static long lo = -2, hi = -1;
        if (lo == -2) {
            const char *e = getenv("ALBW_REC_TRACE");
            lo = -1;
            if (e) { char *x; lo = strtol(e, &x, 10); hi = *x == '-' ? atol(x + 1) : lo; }
        }
        extern long g_plat_frames;
        if (lo >= 0 && g_plat_frames >= lo && g_plat_frames <= hi) {
            fprintf(stderr, "rec: f=%ld p=%p target=%#x size=%u\n", g_plat_frames, (void *)p, target, size);
            static long bt = -2;
            if (bt == -2) { const char *e = getenv("ALBW_REC_BT"); bt = e ? (long)strtoul(e, NULL, 16) : -1; }
            if (bt >= 0 && (uint32_t)bt == target) {
                void *fr[16];
                int n = backtrace(fr, 16);
                backtrace_symbols_fd(fr, n, 2);
            }
        }
    }
    { extern void h3d_blob_check(uintptr_t addr) __attribute__((weak));
      if (h3d_blob_check) h3d_blob_check((uintptr_t)target); }   /* re-decode a patched blob (render/h3d.c) */
    ROp op = op_new(ROP_CALL);
    op.u.call.addr = (uintptr_t)target;
    op.u.call.size = size;
    uint32_t *q = render_rec(p, &op);
    q[0] = 0; /* return-segment size, patched by the caller */
    q[1] = 0;
    /* the slot is a 32-bit field in the callers (003CC090 keeps it in an int): low-memory address */
    if (size_slot) *size_slot = (uint32_t)(uintptr_t)q;
    return q + 2;
}
