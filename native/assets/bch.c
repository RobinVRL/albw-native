/* nw::h3d BCH loader (see bch.h).
 *
 * ---------------------------------------------------------------------------------------------
 * FILE LAYOUT (little endian; all layouts below were checked against the game's files)
 *
 * Header: "BCH\0", u8 backward compat, u8 forward compat, u16 converter version, then
 *   v0x21: u32 contents, strings, commands, raw data, raw ext, relocation offsets; the same six
 *          lengths; u32 uninit data len, uninit commands len; u16 flags, u16 address count (0x44)
 *   v0x20: the same without raw ext (5 offsets, 5 lengths ...; 0x3C bytes)
 * Relocation table: u32 per entry: bits 0-24 location (in words, in bytes for string targets),
 *   bits 25-28 target section, bits 29-31 source section.  The word at source+location gets the
 *   target section's base added.  Sections: 0 contents, 1 strings, 2 commands, 3 commands (src
 *   copy), 4 raw, 5 raw/texture, 6 raw/vertex, 7 raw/index16 (sets bit 31), 8 raw/index8,
 *   9-13 the same five in raw ext (v0x21) or raw (v0x20), 14 raw base address (reg 0x200).
 *   Here bases are FILE OFFSETS, so after relocation every pointer is an offset in the buffer.
 * Contents: 15 x {u32 pointer table, u32 count, u32 name tree}: models, materials, shaders,
 *   textures, LUTs, lights, cameras, fogs, skeletal/material/visibility/light/camera/fog
 *   animations, scenes.  A pointer table is count x u32 object pointers.
 *
 * Model (0x98): u8 flags, u8 bone scaling, u16 silhouette count, f32 world[12],
 *   +0x34 materials {inline array ptr, count, tree}, +0x40 meshes {inline array ptr, count},
 *   +0x48 4 x {begin, end} pointers into the mesh array = the meshes of render layer 0..3,
 *   +0x68 sub-mesh culling {ptr, count} (one 0x1C entry per mesh: {node ptr, count} (8 bytes
 *   each), {bounding boxes ptr, count} (centre+size, 24 bytes), {index buffers ptr, count}
 *   (u32 relocated address, bit 31 = 16-bit, u32 index count), u32 flags: bits 16-31 bone or
 *   0xFFFF; 9132 room/field meshes have no sub-mesh and are drawn from these lists),
 *   +0x70 skeleton {inline array ptr, count, tree},
 *   +0x7C mesh node visibility {ptr, count}, +0x84 name.
 * Material: v0x21 0x2C bytes: +0 params ptr, +0x10 texture command blob {ptr, words},
 *   +0x18 texture mapper ptr, +0x1C texture 0/1/2 names, +0x28 name.
 *   v0x20 0x58 bytes: same, but the 0x30-byte mapper is inline at +0x18, names at +0x48..+0x54.
 * Texture mapper: 3 x 16 bytes: u8 sampler type, u8 wrap u, u8 wrap v, u8 mag filter,
 *   u32 min filter, f32 LOD bias, u32 border colour.
 * Material params: +0 unique id, +4 flags, +0xC 3 x texture coord (u8 flags, u8 transform type,
 *   u8 mapping type, s8 camera, f32 scale[2], rotation, translation[2]), +0x54 u16 light set,
 *   u16 fog, +0x58 12 colours (emission ambient diffuse spec0 spec1 const0..5 blend),
 *   +0x88 f32 colour scale, +0xC8 fragment command blob {ptr, words}, +0xD4..+0xF4 LUT names,
 *   +0x104 shader reference ("2@DefaultShader-rs-nl"), +0x108 model reference.
 * Mesh (0x38): u16 material, u8 flags, u8 pad, u16 node index, u8 key, u8 priority,
 *   +8 enable command blob {ptr, words}, +0x10 sub-meshes {ptr, count}, +0x18 disable blob,
 *   +0x20 f32 centre[3], +0x2C parent model, +0x34 metadata.
 * Sub-mesh (0x34): u8 skinning (0 none, 1 smooth, 2 rigid), u8 pad, u16 bone count, u16 bones[20], +0x2C command blob.
 * Bone (0x64): u32 flags, s16 parent, u16 pad, f32 scale[3] rotation[3] translation[3],
 *   f32 inverse bind 3x4, +0x5C name, +0x60 metadata.
 * Texture (0x20): 3 x command blob {ptr, words} (one per texture unit), u8 format, u8 mip
 *   levels, u16 pad, +0x1C name.
 * Shader (0x30): +0 DVLB ptr, +4 DVLB size, +0x20 u16 program (DVLE) index, u16 0xFFFF, +0x28 name.
 *
 * ---------------------------------------------------------------------------------------------
 * PICA COMMAND BLOBS: decoded here, once.  Word pairs [param0][header], header = reg | byte
 * mask << 16 | extra count << 20 | consecutive << 31, then the extra params, padded to 8 bytes.
 * Registers decoded (anything else is only recorded in BchMaterial.regs_seen):
 *   mesh enable blob
 *     0x201/0x202  attribute formats (4 bits each: type bits 0-1, components-1 bits 2-3),
 *                  0x202 bits 16-27 fixed-attribute mask, bits 28-31 attribute count - 1
 *     0x203+3k     vertex buffer k: address (relocated -> file offset), 0x204/0x205 component
 *                  list (nibbles: attribute index, 0xC-0xF = 4..16 padding bytes),
 *                  0x205 bits 16-23 stride, 28-31 component count
 *     0x232..0x235 fixed attribute index + value (4 x float24 packed in 3 words)
 *     0x2BB/0x2BC  attribute -> vertex shader input register (= semantic)
 *     0x2C0..0x2C8 vertex shader float uniforms: c6 position offset, c7 scales (position,
 *                  normal, tangent, colour), c8 scales (texcoord 0/1/2, bone weight)
 *   sub-mesh blob
 *     0x227 index buffer address (bit 31: 16-bit indices), 0x228 index count,
 *     0x25E bits 8-9 primitive mode (when byte 1 is written)
 *   texture blob: 0x82 size (height bits 0-10, width bits 16-26), 0x85 address, 0x8E format
 *   material texture blob: 0x80 unit enables (bits 0-2) + bit 13 texture 2 uses texcoord 1,
 *     0x83/0x93/0x9B sampler (mag bit 1, min bit 2, wrap t bits 8-10, wrap s bits 12-14;
 *     only used when the material has no mapper), 0x81/0x91/0x99 border colour
 *   material fragment blob: 0xC0/0xC8/0xD0/0xD8/0xF0/0xF8 + 0..4 combiner stages (sources,
 *     operands, functions, constant, scale), 0xE0 combiner buffer config, 0xFD buffer colour,
 *     0x100 bit 8 blend enable, 0x101 blend equations/factors, 0x102 logic op, 0x103 blend
 *     colour, 0x104 alpha test, 0x105/0x106 stencil, 0x107 depth test/func/colour+depth
 *     write mask, 0x040 cull mode, 0x08F fragment lighting enable, 0x2C0.. material uniforms.
 */
#include "bch.h"
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *const attr_names[BCH_ATTR_MAX] = {
    "position", "normal", "tangent", "color", "texcoord0", "texcoord1", "texcoord2",
    "bone_index", "bone_weight", "user0", "user1", "user2", "user3", "user4", "user5", "user6"};
const char *bch_attr_name(int s) { return s >= 0 && s < BCH_ATTR_MAX ? attr_names[s] : "?"; }

/* ------------------------------------------------------------------ helpers */
typedef struct {
    BchFile *f;
    uint32_t cont, str, cmd, raw, ext, rel;
    uint32_t contL, strL, cmdL, rawL, extL, relL;
} Ctx;

static uint32_t rd32(const uint8_t *p) {
    return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}
static uint16_t rd16(const uint8_t *p) { return (uint16_t)(p[0] | p[1] << 8); }
static float rdf(const uint8_t *p) {
    uint32_t u = rd32(p);
    float f;
    memcpy(&f, &u, 4);
    return f;
}
static float u2f(uint32_t u) {
    float f;
    memcpy(&f, &u, 4);
    return f;
}

static int fail(BchFile *f, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
static int fail(BchFile *f, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(f->error, sizeof f->error, fmt, ap);
    va_end(ap);
    return -1;
}

/* bounds-checked view of [off, off+len) */
static const uint8_t *at(const BchFile *f, uint32_t off, size_t len) {
    if ((size_t)off > f->size || len > f->size - off) return NULL;
    return f->data + off;
}
static uint32_t w32(const BchFile *f, uint32_t off) {
    const uint8_t *p = at(f, off, 4);
    return p ? rd32(p) : 0;
}
static const char *str_at(const BchFile *f, uint32_t off) {
    if (!off || off >= f->size) return NULL;
    if (!memchr(f->data + off, 0, f->size - off)) return NULL;
    return (const char *)f->data + off;
}

/* float24 (1.7.16) -> float */
static float f24(uint32_t v) {
    v &= 0xFFFFFF;
    if ((v & 0x7FFFFF) == 0) return (v >> 23) ? -0.0f : 0.0f;
    uint32_t sign = v >> 23, exp = (v >> 16) & 0x7F, mant = v & 0xFFFF;
    uint32_t bits;
    if (exp == 0x7F) bits = sign << 31 | 0xFFu << 23 | mant << 7;
    else bits = sign << 31 | (exp + 64) << 23 | mant << 7;
    return u2f(bits);
}
static void f24x4(const uint32_t w[3], float out[4]) {
    out[3] = f24(w[0] >> 8);
    out[2] = f24((w[0] & 0xFF) << 16 | w[1] >> 16);
    out[1] = f24((w[1] & 0xFFFF) << 8 | w[2] >> 24);
    out[0] = f24(w[2] & 0xFFFFFF);
}

/* ------------------------------------------------------------------ PICA blob walker */
typedef void (*RegFn)(void *user, uint32_t reg, uint32_t value, uint32_t mask);

static int pica_walk(const BchFile *f, uint32_t off, uint32_t words, RegFn fn, void *user) {
    const uint8_t *p = at(f, off, (size_t)words * 4);
    if (!p) return -1;
    uint32_t i = 0;
    while (i + 1 < words) {
        uint32_t p0 = rd32(p + 4 * i), h = rd32(p + 4 * i + 4);
        uint32_t reg = h & 0xFFFF, mask = (h >> 16) & 0xF, n = (h >> 20) & 0xFF, cons = h >> 31;
        if (i + 2 + n > words) return -1;
        fn(user, reg, p0, mask);
        for (uint32_t k = 0; k < n; k++) fn(user, cons ? reg + k + 1 : reg, rd32(p + 4 * (i + 2 + k)), mask);
        i += 2 + n;
        if (i & 1) i++;
    }
    return 0;
}

/* vertex-shader float uniform writes (0x2C0 index, 0x2C1..0x2C8 data) */
typedef struct {
    uint32_t index, f32, nbuf, buf[4];
    float c[96][4];
    uint8_t set[96];
} Uniforms;

static void uniform_reg(Uniforms *u, uint32_t reg, uint32_t v) {
    if (reg == 0x2C0) {
        u->index = v & 0xFF;
        u->f32 = v >> 31;
        u->nbuf = 0;
        return;
    }
    u->buf[u->nbuf++] = v;
    uint32_t need = u->f32 ? 4 : 3;
    if (u->nbuf < need) return;
    u->nbuf = 0;
    if (u->index < 96) {
        if (u->f32) for (int k = 0; k < 4; k++) u->c[u->index][3 - k] = u2f(u->buf[k]);
        else f24x4(u->buf, u->c[u->index]);
        u->set[u->index] = 1;
    }
    u->index++;
}

/* ------------------------------------------------------------------ relocation */
static int relocate(Ctx *c) {
    BchFile *f = c->f;
    uint32_t base[16] = {c->cont, c->str, c->cmd, c->cmd, c->raw, c->raw, c->raw, c->raw, c->raw,
                         c->ext, c->ext, c->ext, c->ext, c->ext, c->raw, c->raw};
    uint32_t srcb[8] = {c->cont, c->str, c->cmd, c->cmd, c->raw, c->raw, c->raw, c->raw};
    const uint8_t *r = at(f, c->rel, c->relL);
    if (!r) return fail(f, "relocation table out of range");
    for (uint32_t o = 0; o + 4 <= c->relL; o += 4) {
        uint32_t v = rd32(r + o), loc = v & 0x1FFFFFF, tgt = (v >> 25) & 0xF, src = v >> 29;
        if (tgt != 1) loc <<= 2;
        uint32_t a = srcb[src] + loc;
        if ((size_t)a + 4 > f->size) return fail(f, "relocation %u outside the file", o / 4);
        uint32_t w = rd32(f->data + a) + base[tgt];
        if (tgt == 7 || tgt == 12) w |= 0x80000000u;
        f->data[a] = (uint8_t)w;
        f->data[a + 1] = (uint8_t)(w >> 8);
        f->data[a + 2] = (uint8_t)(w >> 16);
        f->data[a + 3] = (uint8_t)(w >> 24);
    }
    return 0;
}

/* ------------------------------------------------------------------ meshes */
typedef struct {
    uint32_t fmt_lo, fmt_hi, map_lo, map_hi;
    uint32_t buf_addr[12], buf_lo[12], buf_hi[12];
    int buf_seen[12];
    int fixed_idx, fixed_n;
    uint32_t fixed_w[3];
    float fixed_val[12][4];
    uint16_t fixed_set;
    Uniforms u;
} MeshRegs;

static void mesh_reg(void *user, uint32_t reg, uint32_t v, uint32_t mask) {
    MeshRegs *m = user;
    (void)mask;
    if (reg == 0x201) m->fmt_lo = v;
    else if (reg == 0x202) m->fmt_hi = v;
    else if (reg >= 0x203 && reg < 0x203 + 36) {
        int k = (int)(reg - 0x203) / 3, s = (int)(reg - 0x203) % 3;
        if (s == 0) m->buf_addr[k] = v, m->buf_seen[k] = 1;
        else if (s == 1) m->buf_lo[k] = v;
        else m->buf_hi[k] = v;
    } else if (reg == 0x232) {
        m->fixed_idx = (int)(v & 0xF);
        m->fixed_n = 0;
    } else if (reg >= 0x233 && reg <= 0x235) {
        if (m->fixed_n < 3) m->fixed_w[m->fixed_n++] = v;
        if (m->fixed_n == 3 && m->fixed_idx < 12) {
            f24x4(m->fixed_w, m->fixed_val[m->fixed_idx]);
            m->fixed_set |= (uint16_t)(1u << m->fixed_idx);
            m->fixed_idx++;
            m->fixed_n = 0;
        }
    } else if (reg == 0x2BB) m->map_lo = v;
    else if (reg == 0x2BC) m->map_hi = v;
    else if (reg >= 0x2C0 && reg <= 0x2C8) uniform_reg(&m->u, reg, v);
}

typedef struct {
    uint32_t idx_addr, idx_count;
    int prim;
} SubRegs;

static void sub_reg(void *user, uint32_t reg, uint32_t v, uint32_t mask) {
    SubRegs *s = user;
    if (reg == 0x227) s->idx_addr = v;
    else if (reg == 0x228) s->idx_count = v;
    else if (reg == 0x25E && (mask & 2)) s->prim = (int)((v >> 8) & 3);
}

static int attr_size(int type) { return type == BCH_TYPE_F32 ? 4 : type == BCH_TYPE_S16 ? 2 : 1; }

static int parse_mesh(Ctx *c, uint32_t off, BchMesh *m, const uint32_t layers[8], const uint8_t *cull) {
    BchFile *f = c->f;
    const uint8_t *p = at(f, off, 0x38);
    if (!p) return fail(f, "mesh out of range");
    m->material = rd16(p);
    m->flags = p[2];
    m->node = rd16(p + 4);
    m->priority = p[7];
    for (int k = 0; k < 3; k++) m->center[k] = rdf(p + 0x20 + 4 * k);
    m->layer = 0;
    for (int l = 0; l < 4; l++)
        if (off >= layers[2 * l] && off < layers[2 * l + 1]) m->layer = (uint8_t)l;

    MeshRegs r;
    memset(&r, 0, sizeof r);
    if (pica_walk(f, rd32(p + 8), rd32(p + 12), mesh_reg, &r)) return fail(f, "bad mesh command blob");
    int count = (int)(r.fmt_hi >> 28) + 1;
    uint32_t fixed_mask = (r.fmt_hi >> 16) & 0xFFF;
    uint64_t fmts = (uint64_t)r.fmt_lo | (uint64_t)(r.fmt_hi & 0xFFFF) << 32;
    uint64_t map = (uint64_t)r.map_lo | (uint64_t)(r.map_hi & 0xFFFF) << 32;
    float *s0 = r.u.c[7], *s1 = r.u.c[8];
    float scales[BCH_ATTR_MAX] = {s0[0], s0[1], s0[2], s0[3], s1[0], s1[1], s1[2], 1.0f, s1[3],
                                  1, 1, 1, 1, 1, 1, 1};
    memcpy(m->position_offset, r.u.c[6], sizeof m->position_offset);
    m->attr_count = 0;
    int index_of[12];
    for (int i = 0; i < count && i < 12; i++) {
        BchAttrib *a = &m->attrs[m->attr_count];
        memset(a, 0, sizeof *a);
        int fm = (int)((fmts >> (4 * i)) & 0xF);
        a->semantic = (uint8_t)((map >> (4 * i)) & 0xF);
        a->type = (uint8_t)(fm & 3);
        a->components = (uint8_t)((fm >> 2) + 1);
        a->fixed = (uint8_t)((fixed_mask >> i) & 1);
        a->scale = scales[a->semantic];
        if (a->fixed) {
            memcpy(a->fixed_value, r.fixed_val[i], sizeof a->fixed_value);
            a->components = 4;
            a->type = BCH_TYPE_F32;
            a->scale = 1.0f;
        }
        if (!a->fixed && a->scale == 0.0f) a->scale = 1.0f;
        index_of[i] = m->attr_count++;
    }
    /* vertex buffers: the h3d converter interleaves everything into one buffer */
    m->buffer_count = 0;
    for (int k = 0; k < 12; k++) {
        if (!r.buf_seen[k] || !(r.buf_hi[k] >> 28)) continue;
        int ncomp = (int)(r.buf_hi[k] >> 28);
        uint64_t comps = (uint64_t)r.buf_lo[k] | (uint64_t)(r.buf_hi[k] & 0xFFFF) << 32;
        uint32_t o = 0;
        for (int j = 0; j < ncomp; j++) {
            int ci = (int)((comps >> (4 * j)) & 0xF);
            if (ci >= 12) { o += 4u * (uint32_t)(ci - 11); continue; }
            if (ci >= count) continue;
            BchAttrib *a = &m->attrs[index_of[ci]];
            int es = attr_size(a->type);
            o = (o + (uint32_t)es - 1) & ~(uint32_t)(es - 1);
            if (m->buffer_count == 0) a->offset = (uint16_t)o;
            o += (uint32_t)(es * a->components);
        }
        if (m->buffer_count == 0) {
            m->stride = (r.buf_hi[k] >> 16) & 0xFF;
            m->vertices = at(f, r.buf_addr[k] & 0x0FFFFFFF, 1);
        }
        m->buffer_count++;
    }

    /* sub-meshes */
    uint32_t so = rd32(p + 0x10), sn = rd32(p + 0x14);
    if (sn > 4096 || !at(f, so, (size_t)sn * 0x34)) return fail(f, "sub-mesh table out of range");
    uint32_t cn = 0, co = 0, cflag = 0;
    if (sn == 0 && cull) {
        /* sub-mesh culling entry: index buffers are listed directly, no command blob */
        co = rd32(cull + 16);
        cn = rd32(cull + 20);
        cflag = rd32(cull + 24);
        if (cn > 4096 || !at(f, co, (size_t)cn * 8)) return fail(f, "culling index list out of range");
    }
    m->submeshes = calloc(sn + cn ? sn + cn : 1, sizeof *m->submeshes);
    if (!m->submeshes) return fail(f, "out of memory");
    m->submesh_count = (int)(sn + cn);
    uint32_t max_index = 0;
    int any = 0;
    for (uint32_t i = 0; i < cn; i++) {
        BchSubMesh *s = &m->submeshes[i];
        uint32_t a = rd32(f->data + co + 8 * i);
        s->index_16bit = (uint8_t)(a >> 31);
        s->index_count = rd32(f->data + co + 8 * i + 4);
        s->indices = at(f, a & 0x0FFFFFFF, (size_t)s->index_count << s->index_16bit);
        if (!s->indices) return fail(f, "culling index buffer out of range");
        if ((cflag >> 16) != 0xFFFF) {  /* bound to one bone (flag bit 2 set) */
            s->skinning = 2; /* rigid */
            s->bone_count = 1;
            s->bones[0] = (uint16_t)(cflag >> 16);
        }
        for (uint32_t k = 0; k < s->index_count; k++) {
            uint32_t v = s->index_16bit ? rd16(s->indices + 2 * k) : s->indices[k];
            if (v > max_index) max_index = v;
            any = 1;
        }
    }
    for (uint32_t i = 0; i < sn; i++) {
        const uint8_t *q = f->data + so + i * 0x34;
        BchSubMesh *s = &m->submeshes[i];
        s->skinning = q[0];
        s->bone_count = rd16(q + 2);
        if (s->bone_count > 20) s->bone_count = 20;
        for (int b = 0; b < 20; b++) s->bones[b] = rd16(q + 4 + 2 * b);
        SubRegs sr = {0, 0, 0};
        if (pica_walk(f, rd32(q + 0x2C), rd32(q + 0x30), sub_reg, &sr))
            return fail(f, "bad sub-mesh command blob");
        s->primitive = (uint8_t)sr.prim;
        s->index_16bit = (uint8_t)(sr.idx_addr >> 31);
        s->index_count = sr.idx_count;
        s->indices = at(f, sr.idx_addr & 0x0FFFFFFF, (size_t)sr.idx_count << s->index_16bit);
        if (!s->indices) return fail(f, "index buffer out of range");
        for (uint32_t k = 0; k < s->index_count; k++) {
            uint32_t v = s->index_16bit ? rd16(s->indices + 2 * k) : s->indices[k];
            if (v > max_index) max_index = v;
            any = 1;
        }
    }
    m->vertex_count = any ? max_index + 1 : 0;
    if (m->vertices && m->vertex_count &&
        !at(f, (uint32_t)(m->vertices - f->data), (size_t)m->vertex_count * m->stride))
        return fail(f, "vertex buffer out of range");
    return 0;
}

/* ------------------------------------------------------------------ materials */
typedef struct {
    BchMaterial *m;
    Uniforms u;
    uint32_t tex_param[3], border[3];
    int tex_param_seen[3];
} MatRegs;

static void mat_reg(void *user, uint32_t reg, uint32_t v, uint32_t mask) {
    MatRegs *r = user;
    BchMaterial *m = r->m;
    (void)mask;
    if (reg < 0x200) m->regs_seen[reg >> 5] |= 1u << (reg & 31);
    static const uint32_t stage_base[6] = {0xC0, 0xC8, 0xD0, 0xD8, 0xF0, 0xF8};
    for (int s = 0; s < 6; s++) {
        if (reg < stage_base[s] || reg > stage_base[s] + 4) continue;
        BchCombiner *c = &m->combiner[s];
        switch (reg - stage_base[s]) {
        case 0:
            for (int k = 0; k < 3; k++) {
                c->src_rgb[k] = (uint8_t)((v >> (4 * k)) & 0xF);
                c->src_a[k] = (uint8_t)((v >> (16 + 4 * k)) & 0xF);
            }
            break;
        case 1:
            for (int k = 0; k < 3; k++) {
                c->op_rgb[k] = (uint8_t)((v >> (4 * k)) & 0xF);
                c->op_a[k] = (uint8_t)((v >> (12 + 4 * k)) & 0x7);
            }
            break;
        case 2:
            c->func_rgb = (uint8_t)(v & 0xF);
            c->func_a = (uint8_t)((v >> 16) & 0xF);
            break;
        case 3: c->constant = v; break;
        case 4:
            c->scale_rgb = (uint8_t)(1u << (v & 3));
            c->scale_a = (uint8_t)(1u << ((v >> 16) & 3));
            break;
        }
        return;
    }
    switch (reg) {
    case 0x040: m->cull = (uint8_t)(v & 3); break;
    case 0x080:
        m->texture_enable = (uint8_t)(v & 7);
        m->tex2_uses_coord1 = (uint8_t)((v >> 13) & 1);
        break;
    case 0x081: r->border[0] = v; break;
    case 0x091: r->border[1] = v; break;
    case 0x099: r->border[2] = v; break;
    case 0x083: r->tex_param[0] = v; r->tex_param_seen[0] = 1; break;
    case 0x093: r->tex_param[1] = v; r->tex_param_seen[1] = 1; break;
    case 0x09B: r->tex_param[2] = v; r->tex_param_seen[2] = 1; break;
    case 0x08F: m->fragment_lighting = (uint8_t)(v & 1); break;
    case 0x0E0: m->combiner_buffer_cfg = v; break;
    case 0x0FD: m->combiner_buffer_color = v; break;
    case 0x100: m->blend_enable = (uint8_t)((v >> 8) & 1); break;
    case 0x101:
        m->blend_eq_rgb = (uint8_t)(v & 7);
        m->blend_eq_a = (uint8_t)((v >> 8) & 7);
        m->blend_src_rgb = (uint8_t)((v >> 16) & 0xF);
        m->blend_dst_rgb = (uint8_t)((v >> 20) & 0xF);
        m->blend_src_a = (uint8_t)((v >> 24) & 0xF);
        m->blend_dst_a = (uint8_t)((v >> 28) & 0xF);
        break;
    case 0x102: m->logic_op = (uint8_t)(v & 0xF); break;
    case 0x103: m->blend_color = v; break;
    case 0x104:
        m->alpha_test = (uint8_t)(v & 1);
        m->alpha_func = (uint8_t)((v >> 4) & 7);
        m->alpha_ref = (uint8_t)(v >> 8);
        break;
    case 0x105:
        m->stencil_test = (uint8_t)(v & 1);
        m->stencil_func = (uint8_t)((v >> 4) & 7);
        m->stencil_write_mask = (uint8_t)(v >> 8);
        m->stencil_ref = (uint8_t)(v >> 16);
        m->stencil_mask = (uint8_t)(v >> 24);
        break;
    case 0x106:
        m->stencil_fail = (uint8_t)(v & 7);
        m->stencil_zfail = (uint8_t)((v >> 4) & 7);
        m->stencil_zpass = (uint8_t)((v >> 8) & 7);
        break;
    case 0x107:
        m->depth_test = (uint8_t)(v & 1);
        m->depth_func = (uint8_t)((v >> 4) & 7);
        m->color_write_mask = (uint8_t)((v >> 8) & 0xF);
        m->depth_write = (uint8_t)((v >> 12) & 1);
        break;
    default:
        if (reg >= 0x2C0 && reg <= 0x2C8) uniform_reg(&r->u, reg, v);
        break;
    }
}

static void sampler_from_mapper(PicaSampler *s, const uint8_t *p) {
    s->wrap_s = p[1];
    s->wrap_t = p[2];
    s->mag_linear = p[3];
    s->min_filter = (uint8_t)rd32(p + 4);
    s->lod_bias = rdf(p + 8);
    s->border_rgba = rd32(p + 12);
}

static int parse_material(Ctx *c, uint32_t off, BchMaterial *m) {
    BchFile *f = c->f;
    int v21 = f->version >= 0x21;
    const uint8_t *p = at(f, off, v21 ? 0x2C : 0x58);
    if (!p) return fail(f, "material out of range");
    uint32_t names = v21 ? 0x1C : 0x48;
    for (int k = 0; k < 3; k++) m->texture_names[k] = str_at(f, rd32(p + names + 4 * k));
    m->name = str_at(f, rd32(p + names + 12));
    const uint8_t *mapper = v21 ? at(f, rd32(p + 0x18), 0x30) : p + 0x18;

    MatRegs r;
    memset(&r, 0, sizeof r);
    r.m = m;
    m->color_write_mask = 0xF;
    m->depth_test = 1;
    m->depth_write = 1;
    m->depth_func = 4;
    m->cull = 2;
    for (int s = 0; s < 6; s++) {
        BchCombiner *cb = &m->combiner[s];
        cb->src_rgb[0] = cb->src_a[0] = 0xF;
        cb->scale_rgb = cb->scale_a = 1;
    }
    if (pica_walk(f, rd32(p + 0x10), rd32(p + 0x14), mat_reg, &r))
        return fail(f, "bad material texture blob");

    const uint8_t *pp = at(f, rd32(p), 0x10C);
    if (pp) {
        for (int k = 0; k < 3; k++) {
            const uint8_t *t = pp + 0x0C + 24 * k;
            m->texcoord[k].flags = t[0];
            m->texcoord[k].transform_type = t[1];
            m->texcoord[k].mapping = t[2];
            m->texcoord[k].ref_camera = t[3];
            m->texcoord[k].scale[0] = rdf(t + 4);
            m->texcoord[k].scale[1] = rdf(t + 8);
            m->texcoord[k].rotation = rdf(t + 12);
            m->texcoord[k].translation[0] = rdf(t + 16);
            m->texcoord[k].translation[1] = rdf(t + 20);
        }
        m->light_set = rd16(pp + 0x54);
        m->fog = rd16(pp + 0x56);
        for (int k = 0; k < 12; k++) m->colors[k] = rd32(pp + 0x58 + 4 * k);
        m->color_scale = rdf(pp + 0x88);
        for (int k = 0; k < 8; k++) m->lut_names[k] = str_at(f, rd32(pp + 0xD4 + 4 * k));
        m->shader_ref = str_at(f, rd32(pp + 0x104));
        if (pica_walk(f, rd32(pp + 0xC8), rd32(pp + 0xCC), mat_reg, &r))
            return fail(f, "bad material fragment blob");
    }
    for (int k = 0; k < 3; k++) {
        PicaSampler *s = &m->sampler[k];
        if (mapper) {
            sampler_from_mapper(s, mapper + 16 * k);
        } else {
            uint32_t t = r.tex_param[k];
            s->mag_linear = (uint8_t)((t >> 1) & 1);
            s->min_filter = (t >> 2) & 1 ? 3 : 0;
            s->wrap_t = (uint8_t)((t >> 8) & 7);
            s->wrap_s = (uint8_t)((t >> 12) & 7);
            s->border_rgba = r.border[k];
        }
    }
    for (int i = 0; i < 96 && m->uniform_count < 24; i++)
        if (r.u.set[i]) {
            m->uniforms[m->uniform_count].index = (uint8_t)i;
            memcpy(m->uniforms[m->uniform_count].v, r.u.c[i], 16);
            m->uniform_count++;
        }
    return 0;
}

/* ------------------------------------------------------------------ textures */
typedef struct { uint32_t dim, addr, fmt; } TexRegs;
static void tex_reg(void *user, uint32_t reg, uint32_t v, uint32_t mask) {
    TexRegs *t = user;
    (void)mask;
    if (reg == 0x82) t->dim = v;
    else if (reg == 0x85) t->addr = v;
    else if (reg == 0x8E) t->fmt = v;
}

static int parse_texture(Ctx *c, uint32_t off, BchTexture *t) {
    BchFile *f = c->f;
    const uint8_t *p = at(f, off, 0x20);
    if (!p) return fail(f, "texture out of range");
    TexRegs r = {0, 0, 0};
    if (pica_walk(f, rd32(p), rd32(p + 4), tex_reg, &r)) return fail(f, "bad texture blob");
    t->name = str_at(f, rd32(p + 0x1C));
    t->format = p[0x18];
    t->levels = p[0x19] ? p[0x19] : 1;
    t->width = (int)((r.dim >> 16) & 0x7FF);
    t->height = (int)(r.dim & 0x7FF);
    if (t->format >= PICA_TEX_FORMAT_COUNT) t->format = (int)(r.fmt & 0xF);
    t->size = pica_tex_size_mips(t->format, t->width, t->height, t->levels);
    t->data = at(f, r.addr & 0x0FFFFFFF, t->size);
    if (!t->data) return fail(f, "texture '%s' data out of range", t->name ? t->name : "?");
    return 0;
}

/* ------------------------------------------------------------------ models */
static int parse_model(Ctx *c, uint32_t off, BchModel *md) {
    BchFile *f = c->f;
    const uint8_t *p = at(f, off, 0x98);
    if (!p) return fail(f, "model out of range");
    md->name = str_at(f, rd32(p + 0x84));
    for (int k = 0; k < 12; k++) md->world[k] = rdf(p + 4 + 4 * k);
    uint32_t layers[8];
    for (int k = 0; k < 8; k++) layers[k] = rd32(p + 0x48 + 4 * k);

    uint32_t mo = rd32(p + 0x34), mn = rd32(p + 0x38);
    uint32_t msz = f->version >= 0x21 ? 0x2C : 0x58;
    if (mn > 4096 || !at(f, mo, (size_t)mn * msz)) return fail(f, "material table out of range");
    md->materials = calloc(mn ? mn : 1, sizeof *md->materials);
    if (!md->materials) return fail(f, "out of memory");
    md->material_count = (int)mn;
    for (uint32_t i = 0; i < mn; i++)
        if (parse_material(c, mo + i * msz, &md->materials[i])) return -1;

    uint32_t so = rd32(p + 0x40), sn = rd32(p + 0x44);
    if (sn > 65536 || !at(f, so, (size_t)sn * 0x38)) return fail(f, "mesh table out of range");
    uint32_t co = rd32(p + 0x68), cn = rd32(p + 0x6C);
    if (cn > 65536 || !at(f, co, (size_t)cn * 0x1C)) cn = 0;
    md->meshes = calloc(sn ? sn : 1, sizeof *md->meshes);
    if (!md->meshes) return fail(f, "out of memory");
    md->mesh_count = (int)sn;
    for (uint32_t i = 0; i < sn; i++)
        if (parse_mesh(c, so + i * 0x38, &md->meshes[i], layers, i < cn ? f->data + co + i * 0x1C : NULL))
            return -1;

    uint32_t bo = rd32(p + 0x70), bn = rd32(p + 0x74);
    if (bn > 4096 || !at(f, bo, (size_t)bn * 0x64)) return fail(f, "skeleton out of range");
    md->bones = calloc(bn ? bn : 1, sizeof *md->bones);
    if (!md->bones) return fail(f, "out of memory");
    md->bone_count = (int)bn;
    for (uint32_t i = 0; i < bn; i++) {
        const uint8_t *b = f->data + bo + i * 0x64;
        BchBone *bb = &md->bones[i];
        bb->flags = rd32(b);
        bb->parent = (int16_t)rd16(b + 4);
        for (int k = 0; k < 3; k++) {
            bb->scale[k] = rdf(b + 8 + 4 * k);
            bb->rotation[k] = rdf(b + 0x14 + 4 * k);
            bb->translation[k] = rdf(b + 0x20 + 4 * k);
        }
        for (int k = 0; k < 12; k++) bb->inverse_bind[k] = rdf(b + 0x2C + 4 * k);
        bb->name = str_at(f, rd32(b + 0x5C));
    }
    return 0;
}

static int parse_shader(Ctx *c, uint32_t off, BchShader *s) {
    BchFile *f = c->f;
    const uint8_t *p = at(f, off, 0x30);
    if (!p) return fail(f, "shader out of range");
    s->name = str_at(f, rd32(p + 0x28));
    s->program_index = rd16(p + 0x20);
    s->dvlb_size = rd32(p + 4);
    s->dvlb = at(f, rd32(p), s->dvlb_size);
    return 0;
}

/* ------------------------------------------------------------------ public */
int bch_is(const uint8_t *b, size_t n) { return n >= 0x44 && !memcmp(b, "BCH", 4); }

int bch_load(BchFile *f, const uint8_t *buf, size_t n) {
    memset(f, 0, sizeof *f);
    if (!bch_is(buf, n)) return fail(f, "not a BCH file");
    f->version = buf[4];
    if (f->version != 0x20 && f->version != 0x21)
        return fail(f, "unsupported BCH version 0x%02x", f->version);
    f->data = malloc(n);
    if (!f->data) return fail(f, "out of memory");
    memcpy(f->data, buf, n);
    f->size = n;
    Ctx c;
    memset(&c, 0, sizeof c);
    c.f = f;
    const uint8_t *h = f->data + 8;
    if (f->version >= 0x21) {
        c.cont = rd32(h); c.str = rd32(h + 4); c.cmd = rd32(h + 8); c.raw = rd32(h + 12);
        c.ext = rd32(h + 16); c.rel = rd32(h + 20);
        c.contL = rd32(h + 24); c.strL = rd32(h + 28); c.cmdL = rd32(h + 32); c.rawL = rd32(h + 36);
        c.extL = rd32(h + 40); c.relL = rd32(h + 44);
    } else {
        c.cont = rd32(h); c.str = rd32(h + 4); c.cmd = rd32(h + 8); c.raw = rd32(h + 12);
        c.rel = rd32(h + 16); c.ext = c.raw;
        c.contL = rd32(h + 20); c.strL = rd32(h + 24); c.cmdL = rd32(h + 28); c.rawL = rd32(h + 32);
        c.relL = rd32(h + 36);
    }
    if (relocate(&c)) return -1;

    uint32_t tbl[15], cnt[15];
    for (int i = 0; i < 15; i++) {
        tbl[i] = w32(f, c.cont + 12 * i);
        cnt[i] = w32(f, c.cont + 12 * i + 4);
        if (cnt[i] > 65536 || (cnt[i] && !at(f, tbl[i], (size_t)cnt[i] * 4)))
            return fail(f, "content section %d out of range", i);
        f->counts[i] = (int)cnt[i];
    }
    f->models = calloc(cnt[0] ? cnt[0] : 1, sizeof *f->models);
    f->shaders = calloc(cnt[2] ? cnt[2] : 1, sizeof *f->shaders);
    f->textures = calloc(cnt[3] ? cnt[3] : 1, sizeof *f->textures);
    if (!f->models || !f->shaders || !f->textures) return fail(f, "out of memory");
    for (uint32_t i = 0; i < cnt[0]; i++, f->model_count++)
        if (parse_model(&c, w32(f, tbl[0] + 4 * i), &f->models[i])) { f->model_count++; return -1; }
    for (uint32_t i = 0; i < cnt[2]; i++, f->shader_count++)
        if (parse_shader(&c, w32(f, tbl[2] + 4 * i), &f->shaders[i])) return -1;
    for (uint32_t i = 0; i < cnt[3]; i++, f->texture_count++)
        if (parse_texture(&c, w32(f, tbl[3] + 4 * i), &f->textures[i])) return -1;
    return 0;
}

void bch_free(BchFile *f) {
    for (int i = 0; i < f->model_count; i++) {
        BchModel *m = &f->models[i];
        for (int k = 0; k < m->mesh_count; k++) free(m->meshes[k].submeshes);
        free(m->meshes);
        free(m->materials);
        free(m->bones);
    }
    free(f->models);
    free(f->textures);
    free(f->shaders);
    free(f->data);
    memset(f, 0, sizeof *f);
}

const BchTexture *bch_find_texture(const BchFile *f, const char *name) {
    if (!name) return NULL;
    for (int i = 0; i < f->texture_count; i++)
        if (f->textures[i].name && !strcmp(f->textures[i].name, name)) return &f->textures[i];
    return NULL;
}

const BchAttrib *bch_mesh_attr(const BchMesh *m, int semantic) {
    for (int i = 0; i < m->attr_count; i++)
        if (m->attrs[i].semantic == semantic) return &m->attrs[i];
    return NULL;
}

void bch_vertex_attr(const BchMesh *m, const BchAttrib *a, uint32_t i, float out[4]) {
    out[0] = out[1] = out[2] = 0;
    out[3] = 1;
    if (a->fixed) {
        memcpy(out, a->fixed_value, 16);
        return;
    }
    if (!m->vertices || i >= m->vertex_count) return;
    const uint8_t *p = m->vertices + (size_t)i * m->stride + a->offset;
    for (int k = 0; k < a->components && k < 4; k++) {
        float v;
        switch (a->type) {
        case BCH_TYPE_S8: v = (float)(int8_t)p[k]; break;
        case BCH_TYPE_U8: v = (float)p[k]; break;
        case BCH_TYPE_S16: v = (float)(int16_t)rd16(p + 2 * k); break;
        default: v = rdf(p + 4 * k); break;
        }
        out[k] = v * a->scale;
    }
}

/* 3x4 row-major helpers */
static void mat34_mul(const float a[12], const float b[12], float o[12]) {
    float r[12];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++)
            r[i * 4 + j] = a[i * 4] * b[j] + a[i * 4 + 1] * b[4 + j] + a[i * 4 + 2] * b[8 + j];
        r[i * 4 + 3] += a[i * 4 + 3];
    }
    memcpy(o, r, sizeof r);
}

void bch_bone_world(const BchModel *m, float (*out)[12]) {
    for (int i = 0; i < m->bone_count; i++) {
        const BchBone *b = &m->bones[i];
        float cx = cosf(b->rotation[0]), sx = sinf(b->rotation[0]);
        float cy = cosf(b->rotation[1]), sy = sinf(b->rotation[1]);
        float cz = cosf(b->rotation[2]), sz = sinf(b->rotation[2]);
        /* R = Rz * Ry * Rx, then scale columns, then translate */
        float r[9] = {cy * cz, sx * sy * cz - cx * sz, cx * sy * cz + sx * sz,
                      cy * sz, sx * sy * sz + cx * cz, cx * sy * sz - sx * cz,
                      -sy,     sx * cy,                cx * cy};
        float l[12];
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) l[row * 4 + col] = r[row * 3 + col] * b->scale[col];
            l[row * 4 + 3] = b->translation[row];
        }
        if (b->parent >= 0 && b->parent < i) mat34_mul(out[b->parent], l, out[i]);
        else memcpy(out[i], l, sizeof l);
    }
}
