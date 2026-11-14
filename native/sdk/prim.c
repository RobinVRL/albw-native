/* sead PrimitiveRenderer (CTR) on the native renderer: native producers of its draw state and
 * draws (shader: World/Shader/primitive_renderer_ctr.bsm, hand-written GLSL RENDER_VS_PRIMITIVE in
 * render/prim.c; registers c0-c3 user, c4-c7 wvp, c8 color0, c9 color1, c10 uv_src, c11 uv_size,
 * inputs v0 Vertex, v1 TexCoord0, v2 ColorRate; GS program: dmp_Line.width c67).
 *
 * Renderer object (USA layout, set up by 004970E8, decompiled, unchanged):
 *   +0x04 / +0x08 VS-only program bind block (words, built by 00562B24 = native markers)
 *   +0x0C.. 8-byte uniform/input locations {u8 useGS, kind, start register, end, name}: wvp +0x0C,
 *   user +0x14, color0 +0x1C, color1 +0x24, uv_src +0x2C, uv_size +0x34, Vertex +0x3C, TexCoord0
 *   +0x44, ColorRate +0x4C; +0x54 / +0x58 VS+GS bind block, +0x5C.. the same locations of that
 *   program, +0xA4 dmp_Line.width; +0xAC texture units (untextured), +0x154 texture unit 0 of
 *   the textured mode, +0x1FC / +0x290 combiners (untextured / textured); +0x324 current mode
 *   (0 untextured, 1 textured, 2 lines), +0x328 current texture; meshes {.. +0x790 index buffer,
 *   +0x794 index physical address, +0x798 index count, +0x79C prim, +0x7A0 positions (f32 x3),
 *   +0x7A4 texcoords (f32 x2), +0x7A8 colour rates (f32)} at +0x32C quad, +0x21DC sphere ...;
 *   +0x4878 mesh whose vertex input is current, +0x487C command pointer, +0x4884 view Mtx34,
 *   +0x48B4 projection Mtx44.
 *
 * Replaced (USA), each keeping the original control flow and writing native markers:
 *   004979CC  mode switch: program block, wvp = proj x view x M, user row 3 / identity, line width,
 *             texture unit + combiner of the mode, uv_src / uv_size of the untextured mode
 *   004968B4  draw a mesh: vertex arrays (ROP_ATTRIB) + indexed draw (ROP_DRAW)
 *   00496A28  quad (untextured): user (Mtx34 rows), color0 / color1, draw quad mesh
 *   00496ABC  textured quad: + texture, uv_src / uv_size
 *   00496F50  sphere: like 00496A28 with the sphere mesh
 * Vertex-input "end" words (005630C8) and vertex-input setup (00113388) / draw words (001132E8)
 * the originals wrote are replaced by the ops above. Confidence: high (literal pools: 0x2C0 /
 * 0x2C1 float uniforms, 0x290 GS uniforms, 0x280 GS off; DVLE registers). */
#include <stdint.h>
#include <string.h>

#include "../include/gptr.h"
#include "../render/render.h"

#define GA(a) ((uintptr_t)(uint32_t)(a))
static inline uint8_t G8(uint32_t a, uint32_t o) { return *(const uint8_t *)GA(a + o); }
static inline uint32_t G32(uint32_t a, uint32_t o) { uint32_t v; memcpy(&v, (const void *)GA(a + o), 4); return v; }
static inline void W32(uint32_t a, uint32_t o, uint32_t v) { memcpy((void *)GA(a + o), &v, 4); }

/* decompiled game code / data */
void func_00115234(float *out44, const float *view34, const float *m34);  /* out = view x m (4x4) */
void func_00115960(float *out, const float *a44, const float *b44);      /* out = a x b */
uint32_t *func_00563710(const uint8_t *units, uint32_t *p, int32_t flush); /* sdk/gr.c */
uint32_t *func_00563918(const uint8_t *c, uint32_t *p);                    /* sdk/gr.c */
int32_t func_00100174(uint32_t *guard);
extern float data_007A93A8[12];  /* M of wvp = proj x view x M */
extern float data_007A9860[16];  /* identity Mtx44 (user) */
extern float data_007A93E8[4];   /* uv_size of the untextured mode */
extern float data_007A93F8[4];   /* uv_src of the untextured mode */
extern uint32_t data_00715160;   /* -> display object: +0xDC width, +0xE0 height */
extern uint32_t data_007275A0;   /* guard of data_007275A4 */
extern uint32_t data_007275A4;   /* texture type identity (00496ABC type check) */

static ROp op_new(ROpType t) {
    ROp op;
    memset(&op, 0, sizeof op);
    op.type = (uint16_t)t;
    return op;
}

/* the renderer's command pointer (+0x487C) */
static uint32_t *cmd(uint32_t self) { return GPTR_TO(uint32_t, G32(self, 0x487C)); }
static void cmd_set(uint32_t self, uint32_t *p) { W32(self, 0x487C, GPTR_OF(p)); }
static void rec(uint32_t self, const ROp *op) { cmd_set(self, render_rec(cmd(self), op)); }

/* float registers reg.. (vec4s x, y, z, w) */
static void rec_floats(uint32_t self, int reg, const float *v, int count) {
    ROp op = op_new(ROP_VS_FLOAT);
    op.unit = (uint8_t)count;
    op.u.vsf.reg = (uint8_t)reg;
    memcpy(op.u.vsf.v, v, (size_t)count * 16);
    rec(self, &op);
}

/* program block of the mode (+4/+8 or +0x54/+0x58) + the primitive program, wvp, user */
static void program(uint32_t self, int lines) {
    uint32_t blk = G32(self, lines ? 0x54 : 0x04), words = G32(self, lines ? 0x58 : 0x08);
    uint32_t *p = cmd(self);
    if (blk && words) memcpy(p, (const void *)GA(blk), (size_t)words * 4); /* the block's markers */
    cmd_set(self, p + words);
    ROp op = op_new(ROP_PROGRAM);
    op.u.program.id = RPROG_PRIMITIVE;
    op.u.program.key = 0;
    rec(self, &op);
    float vm[16], wvp[16];
    func_00115234(vm, (const float *)GA(self + 0x4884), data_007A93A8);
    func_00115960(wvp, (const float *)GA(self + 0x48B4), vm);
    uint32_t loc = lines ? 0x5C : 0x0C;
    rec_floats(self, G8(self, loc + 2), wvp, 4);
    rec_floats(self, G8(self, loc + 0xA), data_007A9860, 4);
}

/* USA 004979CC  PrimitiveRenderer mode (this, mode 0 untextured / 1 textured / 2 lines, texture
 * or NULL). On a program change (from / to lines): the program block, wvp, user; lines: the line
 * width (2, w h, h, w) of the display (+0xDC / +0xE0); untextured: texture units +0xAC, combiner
 * +0x1FC, uv_src / uv_size constants; textured: texture unit 0 from the texture object (virtual
 * getters: +0x18 address, +0x10 width, +0x14 height, +0x1C format, +0x20 levels) when it changed,
 * combiner +0x290. High. */
void func_004979CC(int32_t self_, uint32_t mode, int32_t *tex) {
    uint32_t self = (uint32_t)self_;
    uint8_t cur = G8(self, 0x324);
    if (mode < 2) {
        if (cur > 1) {
            W32(self, 0x4878, 0);
            program(self, 0);
        }
    } else if (mode == 2) {
        if (cur != 2) {
            W32(self, 0x4878, 0);
            program(self, 1);
            uint32_t disp = G32(data_00715160, 0);
            float w = (float)G32(disp, 0xDC), h = (float)G32(disp, 0xE0);
            float lw[4] = {2.0f, w * h, h, w};
            rec_floats(self, G8(self, 0xA6), lw, 1);
        }
    }
    if (mode == 0 || mode == 2) {
        if (cur != 0 && cur != 2) {
            cmd_set(self, func_00563710(GPTR_TO(uint8_t, self + 0xAC), cmd(self), 1));
            cmd_set(self, func_00563918(GPTR_TO(uint8_t, self + 0x1FC), cmd(self)));
            rec_floats(self, G8(self, 0x7E), data_007A93F8, 1);
            rec_floats(self, G8(self, 0x86), data_007A93E8, 1);
        }
    } else if (mode == 1) {
        if (GPTR_TO(int32_t, G32(self, 0x328)) != tex && tex) {
            typedef uint32_t (*U32Fn)(int32_t *);
            typedef uint16_t (*U16Fn)(int32_t *);
            typedef uint8_t (*U8Fn)(int32_t *);
            uint32_t vt = (uint32_t)tex[0];
            W32(self, 0x154, GFN(U32Fn, G32(vt, 0x18))(tex));
            uint16_t w = GFN(U16Fn, G32(vt, 0x10))(tex), h = GFN(U16Fn, G32(vt, 0x14))(tex);
            memcpy((void *)GA(self + 0x158), &w, 2);
            memcpy((void *)GA(self + 0x15A), &h, 2);
            *(uint8_t *)GA(self + 0x15C) = GFN(U8Fn, G32(vt, 0x1C))(tex);
            *(uint8_t *)GA(self + 0x169) = GFN(U8Fn, G32(vt, 0x20))(tex);
            cmd_set(self, func_00563710(GPTR_TO(uint8_t, self + 0x154), cmd(self), 1));
        }
        if (cur != 1) cmd_set(self, func_00563918(GPTR_TO(uint8_t, self + 0x290), cmd(self)));
    }
    *(uint8_t *)GA(self + 0x324) = (uint8_t)mode;
    W32(self, 0x328, GPTR_OF(tex));
}

/* one vertex array of a mesh (location +loc: input register at +2) */
static void attrib(uint32_t self, uint32_t loc, uint32_t ptr, int count) {
    ROp op = op_new(ROP_ATTRIB);
    op.unit = G8(self, loc + 2);
    op.u.attrib.ptr = GA(ptr);
    op.u.attrib.type = RATTR_FLOAT;
    op.u.attrib.count = (uint8_t)count;
    op.u.attrib.stride = (uint16_t)(4 * count);
    rec(self, &op);
}

/* USA 004968B4  draw a mesh (this, mesh, draw {index physical address, count, u8 prim}): the
 * mesh's vertex input when it is not the current one (+0x4878), then the indexed draw. Native:
 * ROP_ATTRIB per array (positions, texcoords, colour rates; input registers from the locations of
 * the current program) + ROP_DRAW of the mesh's index buffer (+0x790, u16). High. */
void func_004968B4(int32_t self_, int32_t *mesh_, int32_t *draw) {
    uint32_t self = (uint32_t)self_, mesh = GPTR_OF(mesh_);
    int lines = G8(self, 0x324) == 2;
    uint32_t loc = lines ? 0x8C : 0x3C;
    if (GPTR_TO(int32_t, G32(self, 0x4878)) != mesh_) {
        attrib(self, loc, G32(mesh, 0x7A0), 3);
        attrib(self, loc + 8, G32(mesh, 0x7A4), 2);
        attrib(self, loc + 0x10, G32(mesh, 0x7A8), 1);
    }
    ROp op = op_new(ROP_DRAW);
    op.u.draw.indices = GA(G32(mesh, 0x790));
    op.u.draw.count = (uint32_t)draw[1];
    uint8_t prim = *(const uint8_t *)&draw[2];
    op.u.draw.prim = prim < 3 ? prim : RPRIM_TRIANGLES;
    op.u.draw.index_u16 = 1;
    op.u.draw.indexed = 1;
    rec(self, &op);
    W32(self, 0x4878, mesh);
}

/* user rows 0-2 (Mtx34), color0, color1 of an untextured / textured shape */
static void shape_uniforms(uint32_t self, const float *mtx, const float *c0, const float *c1) {
    rec_floats(self, G8(self, 0x16), mtx, 3);
    rec_floats(self, G8(self, 0x1E), c0, 1);
    rec_floats(self, G8(self, 0x26), c1, 1);
}

/* USA 00496A28  quad (this, const Mtx34 *mtx, const Color4f *c0, const Color4f *c1): untextured
 * mode, user / colours, quad mesh (+0x32C). High. */
void func_00496A28(int32_t self, const float *mtx, const float *c0, const float *c1) {
    func_004979CC(self, 0, NULL);
    shape_uniforms((uint32_t)self, mtx, c0, c1);
    func_004968B4(self, GPTR_TO(int32_t, (uint32_t)self + 0x32C), GPTR_TO(int32_t, (uint32_t)self + 0xAC0));
}

/* USA 00496F50  sphere (this, mtx, c0, c1): as 00496A28 with the sphere mesh (+0x21DC). High. */
void func_00496F50(int32_t self, const float *mtx, const float *c0, const float *c1) {
    func_004979CC(self, 0, NULL);
    shape_uniforms((uint32_t)self, mtx, c0, c1);
    func_004968B4(self, GPTR_TO(int32_t, (uint32_t)self + 0x21DC), GPTR_TO(int32_t, (uint32_t)self + 0x2970));
}

/* USA 00496ABC  textured quad (this, mtx, texture (type-checked against the CTR texture class),
 * c0, c1, const Vec2 *uv_src, const Vec2 *uv_size): textured mode, user / colours, uv_src /
 * uv_size = (x, y, 0, 0), quad mesh. High. */
void func_00496ABC(int32_t self, const float *mtx, int32_t *tex, const float *c0, const float *c1, const float *uv_src,
                   const float *uv_size) {
    if (!(data_007275A0 & 1) && func_00100174(&data_007275A0)) data_007275A4 = 0x006F66D4;
    typedef int32_t (*IsA)(int32_t *self, uint32_t *type);
    if (tex && !GFN(IsA, G32((uint32_t)tex[0], 0))(tex, &data_007275A4)) tex = NULL;
    func_004979CC(self, 1, tex);
    uint32_t s = (uint32_t)self;
    shape_uniforms(s, mtx, c0, c1);
    float a[4] = {uv_src[0], uv_src[1], 0, 0}, b[4] = {uv_size[0], uv_size[1], 0, 0};
    rec_floats(s, G8(s, 0x2E), a, 1);
    rec_floats(s, G8(s, 0x36), b, 1);
    func_004968B4(self, GPTR_TO(int32_t, s + 0x32C), GPTR_TO(int32_t, s + 0xAC0));
}
