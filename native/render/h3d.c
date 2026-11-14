/* nw::h3d model draw backend: see h3d.h.
 *
 * ---------------------------------------------------------------- RENDER_VS_H3D
 * Hand-written GLSL 330 for Shader/nwh3d_DefaultShader.bch (EU/RegionBoot.szs). The program was
 * READ (DVLE symbol tables + a disassembly listing, as a reading aid) and rewritten by hand; no
 * bytecode is translated. Interface = the game's: input registers v0..v11 (aPosition, aNormal,
 * aTangent, aColor, aTexCoord0..2, aBoneIndex, aBoneWeight, aUserAttribute0..2), float registers
 * c0..c95, bool registers b0..b15 (bit n of `b`), int register i0 (LightCt):
 *   c0-c2 WrldMtx (not read by the program)  c3-c5 NormMtx   c6 PosOffs   c7-c8 IrScale
 *   c10 TexcMap   c11-c13 TexMtx0  c14-c16 TexMtx1  c17-c18 TexMtx2  c19 TexTran  c20 MatAmbi
 *   c21 MatDiff  c22 HslGCol  c23 HslSCol  c24 HslSDir  c25-c84 UnivReg  c86-c89 ProjMtx
 *   c90-c92 ViewMtx  (c93-c95: program constants (0,1,2,3) (1/8,1/256,1/2,1/4) (3,4,5,6))
 *   b1 IsSmoSk  b2 IsRgdSk  b3 IsQuate  b5 IsHemiL  b6 IsHemiO  b7 IsVertA  b8 IsBoneW
 *   b9-b11 UvMap0-2  b12 IsVertL  b13 IsTex1  b14 IsTex2
 * What it computes (per vertex):
 *   - p = v0 * c7.x + c6 (w = 1), n = v1 * c7.y, t = v2 * c7.z; a normal / tangent exists when
 *     its scale (c7.y / c7.z) is non-zero.
 *   - skinning with the UnivReg palette (3 registers per bone, a0 = 3 * bone index):
 *       smooth: sum of w_k * (bone_k * p) over bones x, y, z (if aBoneWeight.z != 0) and
 *               w (if b8 and aBoneWeight.w != 0), w_k = aBoneWeight_k * c8.w; same for n, t;
 *       rigid (b2): bone aBoneIndex.x; neither: UnivReg[0] = the model (world) matrix.
 *     The result is world space; view space = ViewMtx * world, NormMtx * normal (both 3x4 / 3x3),
 *     clip = ProjMtx * view. The view vector output is -view position.
 *   - colour: MatDiff, or with a vertex colour (c7.w != 0): rgb = MatAmbi.w * colour * c7.w,
 *     alpha = MatDiff.a (* vertex alpha if b7); lit programs add per-vertex lights (b12, i0+1
 *     lights stored downward from c79, 6 registers each) and hemisphere lighting (b5,
 *     mix(HslGCol, HslSCol, dot(HslSDir.xyz, n) * HslSDir.w + HslSDir.w) * MatDiff).
 *   - texcoord 0..2 (programs 0..3 output 3, 2, 1, 0 of them): attribute uv (b9..b11; TexcMap
 *     selects aTexCoord0/1/2) through the 2x3 texture matrix rows (x, y, translation in z);
 *     otherwise generated: TexcMap 3 = cube reflection vector, 4 = sphere map (n * 0.5 + 0.5),
 *     else projection of the world position (texture 0: + TexTran.xy * q; texture 1: / q +
 *     TexTran.zw), texture 1/2 generation only when b13/b14.
 * Variants (compile-time, like the 15 DVLBs): H3D_SKIN 0 any (b1 smooth 4 bones / rigid / none),
 * 1 -rs (rigid / none only), 2 -ss (smooth 4 always), 3 -s2 (smooth 2 always), 4 -u2 (b1 smooth 2
 * / rigid / none); H3D_LIGHT 0 any (b12 vertex lights, b5 hemisphere), 1 -nl (none), 2 -hs
 * (hemisphere always); H3D_PROG 0..3 (texcoord outputs 3..0).
 * Not reproduced: the normal / tangent quaternion output (o1, consumed only by fragment
 * lighting): the view-space normal, tangent and view vector are passed instead (v_normal,
 * v_tangent, v_view; render/fraglight.c rebuilds the tangent frame per fragment).
 * PICA clip space (z in [-w, 0]) -> GL as in render.c (pica_out).
 */
#define _GNU_SOURCE
#include "h3d.h"

#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../platform/platform.h"

const char RENDER_VS_H3D[] =
    "layout(location = 0) in vec4 v0; layout(location = 1) in vec4 v1; layout(location = 2) in vec4 v2;\n"
    "layout(location = 3) in vec4 v3; layout(location = 4) in vec4 v4; layout(location = 5) in vec4 v5;\n"
    "layout(location = 6) in vec4 v6; layout(location = 7) in vec4 v7; layout(location = 8) in vec4 v8;\n"
    "uniform vec4 c[96]; uniform int b; uniform ivec4 i0;\n"
    "out vec4 v_color; out vec4 v_tc0; out vec2 v_tc1; out vec2 v_tc2; out vec3 v_normal; out vec3 v_view;\n"
    "out vec3 v_tangent;\n"
    "bool B(int n){ return ((b >> n) & 1) != 0; }\n"
    "vec4 pica_out(vec4 p){ return vec4(p.x, p.y, -(2.0 * p.z + p.w), p.w); }\n"
    "vec4 p = vec4(0.0), r10 = vec4(0.0), r15 = vec4(0.0);\n"
    "vec3 n = vec3(0.0), t = vec3(0.0), r12 = vec3(0.0), r11 = vec3(0.0), r14 = vec3(0.0), r13 = vec3(0.0);\n"
    "bool hasN = false, hasT = false;\n"
    /* one bone of a smooth skin: a0 = idx (3 * bone), weight w */
    "void bone_add(float idx, float w){\n"
    "  int a = clamp(int(idx), 0, 57);\n"
    "  vec4 R0 = c[25 + a], R1 = c[26 + a], R2 = c[27 + a];\n"
    "  r10.xyz += w * vec3(dot(R0, p), dot(R1, p), dot(R2, p));\n"
    "  if (hasN) r12 += w * vec3(dot(R0.xyz, n), dot(R1.xyz, n), dot(R2.xyz, n));\n"
    "  if (hasN && hasT) r11 += w * vec3(dot(R0.xyz, t), dot(R1.xyz, t), dot(R2.xyz, t));\n"
    "}\n"
    "void skin_smooth(bool four){\n"
    "  r10 = vec4(0.0); r12 = vec3(0.0); r11 = vec3(0.0);\n"
    "  vec4 idx = v7 * 3.0; float s = c[8].w;\n"
    "  bone_add(idx.x, s * v8.x); bone_add(idx.y, s * v8.y);\n"
    "  if (four) {\n"
    "    if (v8.z != 0.0) bone_add(idx.z, s * v8.z);\n"
    "    if (B(8) && v8.w != 0.0) bone_add(idx.w, s * v8.w);\n"
    "  }\n"
    "  r10.w = 1.0;\n"
    "}\n"
    "void skin_rigid(){\n"
    "  int a = B(2) ? clamp(int(3.0 * v7.x), 0, 57) : 0;\n"
    "  vec4 R0 = c[25 + a], R1 = c[26 + a], R2 = c[27 + a];\n"
    "  r10 = vec4(dot(R0, p), dot(R1, p), dot(R2, p), 1.0);\n"
    "  r12 = vec3(dot(R0.xyz, n), dot(R1.xyz, n), dot(R2.xyz, n));\n"
    "  r11 = vec3(dot(R0.xyz, t), dot(R1.xyz, t), dot(R2.xyz, t));\n"
    "}\n"
    "vec3 nrm3(vec3 v){ return vec3(dot(c[3].xyz, v), dot(c[4].xyz, v), dot(c[5].xyz, v)); }\n"
    "vec4 r9 = vec4(0.0); bool lit = false;\n"
    "void hemi(){\n"
    "  float k = dot(c[24].xyz, r14) * c[24].w + c[24].w;\n"
    "  vec4 h = (c[23] - c[22]) * k + c[22];\n"
    "  if (B(6)) h *= r9.w;\n"
    "  r9.xyz = h.xyz * c[21].xyz + r9.xyz;\n"
    "  lit = true;\n"
    "}\n"
    "void vertex_lights(){\n"
    "  int a = 0;\n"
    "  for (int k = 0; k <= min(i0.x, 7); k++, a -= 6) {\n"
    "    vec4 L = c[81 + a]; float ndl, att = 1.0;\n"
    "    bool dirl = L.w == 0.0, att_on = c[83 + a].w == 1.0;\n"
    "    if (dirl && !att_on) {\n"
    "      ndl = dot(L.xyz, r14);\n"
    "    } else {\n"
    "      vec3 d = L.xyz - r15.xyz;\n"
    "      if (att_on) { float d2 = dot(d, d); att = 1.0 / dot(c[83 + a].xyz, vec3(1.0, d2 * d2, d2)); }\n"
    "      vec4 sp = c[82 + a];\n"
    "      d = normalize(d);\n"
    "      if (sp.w == 1.0) {\n"
    "        float cs = dot(sp.xyz, -d);\n"
    "        att *= cs < c[84 + a].y ? 0.0 : exp2(c[84 + a].x * log2(cs));\n"
    "      }\n"
    "      ndl = dot(r14, d);\n"
    "    }\n"
    "    if (att > 0.0) {\n"
    "      vec4 ld = c[80 + a] * c[21];\n"
    "      r9.xyz += c[20].xyz * c[79 + a].xyz + max(ndl, 0.0) * ld.xyz * att;\n"
    "      r9.w += ld.w;\n"
    "    }\n"
    "  }\n"
    "  lit = true;\n"
    "}\n"
    "vec2 uv_src(float map){\n"
    "  if (map != 1.0 && map != 2.0) return c[8].x * v4.xy;\n"
    "  if (map == 1.0) return c[8].y * v5.xy;\n"
    "  return c[8].z * v6.xy;\n"
    "}\n"
    "vec4 sphere(){ return vec4(r14.xy * 0.5 + 0.5, 0.0, 1.0); }\n"
    "vec4 reflection(){ vec3 e = normalize(-r15.xyz); return vec4(2.0 * dot(e, r14) * r14 - e, 0.0); }\n"
    "void main(){\n"
    "  p = vec4(v0.xyz * c[7].x + c[6].xyz, 1.0); n = v1.xyz * c[7].y; t = v2.xyz * c[7].z;\n"
    "  hasN = c[7].y != 0.0; hasT = c[7].z != 0.0;\n"
    "#if H3D_SKIN == 0\n"
    "  if (B(1)) skin_smooth(true); else skin_rigid();\n"
    "#elif H3D_SKIN == 1\n"
    "  skin_rigid();\n"
    "#elif H3D_SKIN == 2\n"
    "  skin_smooth(true);\n"
    "#elif H3D_SKIN == 3\n"
    "  skin_smooth(false);\n"
    "#else\n"
    "  if (B(1)) skin_smooth(false); else skin_rigid();\n"
    "#endif\n"
    "  r15 = vec4(dot(c[90], r10), dot(c[91], r10), dot(c[92], r10), 1.0);\n"
    "  r14 = hasN ? normalize(nrm3(r12)) : n;\n"
    "  r13 = (hasN && hasT) ? normalize(nrm3(r11)) : t;\n"
    "  gl_Position = pica_out(vec4(dot(c[86], r15), dot(c[87], r15), dot(c[88], r15), dot(c[89], r15)));\n"
    "  v_view = -r15.xyz;\n"
    "  v_normal = hasN ? r14 : vec3(0.0, 0.0, 1.0);\n"
    "  v_tangent = (hasN && hasT) ? r13 : vec3(0.0);\n"
    /* colour */
    "  bool hasC = c[7].w != 0.0; vec4 vc = c[7].w * v3; lit = false;\n"
    "#if H3D_LIGHT == 1\n"
    "  r9 = c[21];\n"
    "  if (hasC) { if (B(7)) r9.w *= vc.w; r9.xyz = c[20].w * vc.xyz; }\n"
    "#else\n"
    "  r9 = vec4(0.0, 0.0, 0.0, c[21].w);\n"
    "  if (hasC) { if (B(7)) r9.w *= vc.w; r9.xyz = c[20].w * vc.xyz; lit = true; }\n"
    "#if H3D_LIGHT == 2\n"
    "  hemi();\n"
    "#else\n"
    "  if (B(12)) vertex_lights();\n"
    "  if (B(5)) hemi();\n"
    "  if (!lit) r9 = c[21];\n"
    "#endif\n"
    "#endif\n"
    "  v_color = max(r9, 0.0);\n"
    /* texture coordinates */
    "  v_tc0 = vec4(0.0); v_tc1 = vec2(0.0); v_tc2 = vec2(0.0);\n"
    "#if H3D_PROG <= 2\n"
    "  {\n"
    "    float map = c[10].x; vec4 o;\n"
    "    if (B(9)) {\n"
    "      vec4 r6 = vec4(uv_src(map), 0.0, 1.0);\n"
    "      o = vec4(dot(c[11].xywz, r6), dot(c[12].xywz, r6), 0.0, 0.0);\n"
    "    } else if (map != 3.0 && map != 4.0) {\n"
    "      vec3 q = vec3(dot(c[11], r10), dot(c[12], r10), dot(c[13], r10));\n"
    "      o = vec4(q.xy + c[19].xy * q.z, q.z, 0.0);\n"
    "    } else if (map == 3.0) {\n"
    "      vec3 r6 = reflection().xyz;\n"
    "      o = vec4(dot(c[11].xyz, r6), dot(c[12].xyz, r6), dot(c[13].xyz, r6), 0.0);\n"
    "    } else {\n"
    "      vec4 r6 = sphere();\n"
    "      o = vec4(dot(c[11], r6), dot(c[12], r6), 0.0, 0.0);\n"
    "    }\n"
    "    v_tc0 = vec4(o.xy, o.z, o.z);\n"
    "  }\n"
    "#endif\n"
    "#if H3D_PROG <= 1\n"
    "  {\n"
    "    float map = c[10].y;\n"
    "    if (B(10)) {\n"
    "      vec4 r6 = vec4(uv_src(map), 0.0, 1.0);\n"
    "      v_tc1 = vec2(dot(c[14].xywz, r6), dot(c[15].xywz, r6));\n"
    "    } else if (B(13)) {\n"
    "      if (map != 3.0 && map != 4.0) {\n"
    "        vec3 q = vec3(dot(c[14], r10), dot(c[15], r10), dot(c[16], r10));\n"
    "        v_tc1 = q.xy / q.z + c[19].zw;\n"
    "      } else {\n"
    "        vec4 r6 = sphere();\n"
    "        v_tc1 = vec2(dot(c[14], r6), dot(c[15], r6));\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "#endif\n"
    "#if H3D_PROG == 0\n"
    "  {\n"
    "    float map = c[10].z;\n"
    "    if (B(11)) {\n"
    "      vec4 r6 = vec4(uv_src(map), 0.0, 1.0);\n"
    "      v_tc2 = vec2(dot(c[17].xywz, r6), dot(c[18].xywz, r6));\n"
    "    } else if (B(14)) {\n"
    "      vec4 r6 = sphere();\n"
    "      v_tc2 = vec2(dot(c[17], r6), dot(c[18], r6));\n"
    "    }\n"
    "  }\n"
    "#endif\n"
    "}\n";

void h3d_variant_defines(int variant, char *buf, size_t n) {
    snprintf(buf, n, "#define H3D_SKIN %d\n#define H3D_LIGHT %d\n#define H3D_PROG %d\n", variant & 7,
             (variant >> 3) & 3, (variant >> 5) & 3);
}

int h3d_variant_of_name(const char *name) {
    if (!name || name[0] < '0' || name[0] > '3' || name[1] != '@' || strncmp(name + 2, "DefaultShader", 13))
        return -1;
    int prog = name[0] - '0', skin = H3D_SKIN_ANY, light = H3D_LIGHT_ANY;
    for (const char *s = name + 15; *s == '-'; s += 3) {
        if (!strncmp(s, "-rs", 3)) skin = H3D_SKIN_RS;
        else if (!strncmp(s, "-ss", 3)) skin = H3D_SKIN_SS;
        else if (!strncmp(s, "-s2", 3)) skin = H3D_SKIN_S2;
        else if (!strncmp(s, "-u2", 3)) skin = H3D_SKIN_U2;
        else if (!strncmp(s, "-nl", 3)) light = H3D_LIGHT_NL;
        else if (!strncmp(s, "-hs", 3)) light = H3D_LIGHT_HS;
        else return -1;
    }
    return H3D_VARIANT(skin, light, prog);
}

/* ================================================================== registry */

typedef struct {
    uintptr_t addr;
    uint32_t bytes;
    int n;
    ROp *ops;
} Blob;

typedef struct {
    uintptr_t addr;
    uint32_t count;
    uint8_t u16;
    unsigned ibo;
    uint32_t max_index;
    int dirty;
} Ibuf;

static pthread_mutex_t g_mx = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
static Blob *g_blob; static size_t g_nblob, g_capblob;     /* open addressing on addr */
static H3dVtx **g_vtx; static size_t g_nvtx, g_capvtx;
static Ibuf **g_ib; static size_t g_nib, g_capib;   /* all index buffers */
static Ibuf **g_ibh; static size_t g_capibh;         /* open-addressing index on (addr, count) */
static H3dVtx *g_cur;
static int g_mat_variant = H3D_VARIANT(H3D_SKIN_ANY, H3D_LIGHT_NL, 0); /* last material's shader */
static H3dStats g_st;

static void *xrealloc(void *p, size_t n) {
    void *q = realloc(p, n ? n : 1);
    if (!q) { fprintf(stderr, "h3d: out of memory\n"); abort(); }
    return q;
}

static size_t bhash(uintptr_t a, size_t cap) { return (size_t)((a >> 2) * 2654435761u) & (cap - 1); }

static void blob_rehash(size_t cap) {
    Blob *old = g_blob;
    size_t oldcap = g_capblob;
    g_blob = calloc(cap, sizeof *g_blob);
    if (!g_blob) abort();
    g_capblob = cap;
    for (size_t i = 0; i < oldcap; i++) {
        if (!old[i].addr) continue;
        size_t h = bhash(old[i].addr, cap);
        while (g_blob[h].addr) h = (h + 1) & (cap - 1);
        g_blob[h] = old[i];
    }
    free(old);
}

static Blob *blob_find(uintptr_t addr) {
    if (!g_capblob || !addr) return NULL;
    for (size_t h = bhash(addr, g_capblob);; h = (h + 1) & (g_capblob - 1)) {
        if (!g_blob[h].addr) return NULL;
        if (g_blob[h].addr == addr) return &g_blob[h];
    }
}

void h3d_blob_set(uintptr_t addr, uint32_t bytes, const ROp *ops, int n) {
    if (!addr) return;
    h3d_init();
    pthread_mutex_lock(&g_mx);
    if ((g_nblob + 1) * 2 > g_capblob) blob_rehash(g_capblob ? g_capblob * 2 : 4096);
    Blob *b = blob_find(addr);
    if (!b) {
        size_t h = bhash(addr, g_capblob);
        while (g_blob[h].addr) h = (h + 1) & (g_capblob - 1);
        b = &g_blob[h];
        b->addr = addr;
        g_nblob++;
        g_st.blobs++;
    } else {
        free(b->ops);
    }
    b->bytes = bytes;
    b->n = n;
    b->ops = n ? xrealloc(NULL, sizeof *ops * (size_t)n) : NULL;
    if (n) memcpy(b->ops, ops, sizeof *ops * (size_t)n);
    pthread_mutex_unlock(&g_mx);
}

H3dVtx *h3d_vtx_new(void) {
    H3dVtx *v = calloc(1, sizeof *v);
    if (!v) abort();
    pthread_mutex_lock(&g_mx);
    if (g_nvtx == g_capvtx) { g_capvtx = g_capvtx ? g_capvtx * 2 : 256; g_vtx = xrealloc(g_vtx, g_capvtx * sizeof *g_vtx); }
    g_vtx[g_nvtx++] = v;
    pthread_mutex_unlock(&g_mx);
    return v;
}

void h3d_forget_range(uintptr_t lo, uintptr_t hi) {
    pthread_mutex_lock(&g_mx);
    size_t keep = 0;
    for (size_t i = 0; i < g_capblob; i++)
        if (g_blob[i].addr >= lo && g_blob[i].addr < hi) { free(g_blob[i].ops); g_blob[i].ops = NULL; g_blob[i].addr = 0; }
        else if (g_blob[i].addr) keep++;
    g_nblob = keep;
    if (g_capblob) blob_rehash(g_capblob);
    /* vertex layouts and GL buffers of that memory are re-uploaded on their next use (they may be
       referenced by pooled ops, so the objects themselves stay) */
    for (size_t i = 0; i < g_nvtx; i++)
        if (g_vtx[i]->addr >= lo && g_vtx[i]->addr < hi) g_vtx[i]->dirty = 1;
    for (size_t i = 0; i < g_nib; i++)
        if (g_ib[i]->addr >= lo && g_ib[i]->addr < hi) g_ib[i]->dirty = 1;
    pthread_mutex_unlock(&g_mx);
}

H3dStats h3d_stats(void) { return g_st; }

/* ================================================================== GL side */

#define GL_TRIANGLE_FAN_ 0x0006
#define GL_BYTE_ 0x1400
#define GL_SHORT_ 0x1402
static void (*pVertexAttrib4f)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
static void (*pDisableVertexAttribArray)(GLuint);

static int gl_ok(void) {
    if (pVertexAttrib4f) return 1;
    pVertexAttrib4f = (void (*)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat))SDL_GL_GetProcAddress("glVertexAttrib4f");
    pDisableVertexAttribArray = (void (*)(GLuint))SDL_GL_GetProcAddress("glDisableVertexAttribArray");
    return pVertexAttrib4f && pDisableVertexAttribArray;
}

static const GLenum ATYPE[4] = {GL_BYTE_, GL_UNSIGNED_BYTE, GL_SHORT_, GL_FLOAT};
static const GLenum PRIM[3] = {GL_TRIANGLES, GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN_};

static size_t ihash(uintptr_t a, uint32_t n, size_t cap) { return (size_t)(((a >> 1) ^ n * 0x9E3779B1u) * 2654435761u) & (cap - 1); }

static void ib_index(Ibuf *b) {
    size_t h = ihash(b->addr, b->count, g_capibh);
    while (g_ibh[h]) h = (h + 1) & (g_capibh - 1);
    g_ibh[h] = b;
}

static Ibuf *ibuf_get(uintptr_t addr, uint32_t count, int u16) {
    if (g_capibh)
        for (size_t h = ihash(addr, count, g_capibh); g_ibh[h]; h = (h + 1) & (g_capibh - 1))
            if (g_ibh[h]->addr == addr && g_ibh[h]->count == count && g_ibh[h]->u16 == u16) return g_ibh[h];
    if (g_nib == g_capib) { g_capib = g_capib ? g_capib * 2 : 1024; g_ib = xrealloc(g_ib, g_capib * sizeof *g_ib); }
    Ibuf *b = calloc(1, sizeof *b);
    if (!b) abort();
    b->addr = addr; b->count = count; b->u16 = (uint8_t)u16; b->dirty = 1;
    g_ib[g_nib++] = b;
    if (g_nib * 2 > g_capibh) {
        free(g_ibh);
        g_capibh = g_capibh ? g_capibh * 2 : 2048;
        g_ibh = calloc(g_capibh, sizeof *g_ibh);
        if (!g_ibh) abort();
        for (size_t i = 0; i < g_nib; i++) ib_index(g_ib[i]);
    } else {
        ib_index(b);
    }
    return b;
}

static void ibuf_upload(Ibuf *b) {
    const uint8_t *src = (const uint8_t *)b->addr;
    uint32_t mx = 0;
    for (uint32_t i = 0; i < b->count; i++) {
        uint32_t v = b->u16 ? (uint32_t)(src[2 * i] | src[2 * i + 1] << 8) : src[i];
        if (v > mx) mx = v;
    }
    b->max_index = mx;
    if (!b->ibo) glGenBuffers(1, &b->ibo);
    glBindVertexArray(0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, b->ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, (GLsizeiptr)b->count << b->u16, src, GL_STATIC_DRAW);
    b->dirty = 0;
    g_st.ibo_uploads++;
}

static void vtx_upload(H3dVtx *v, uint32_t verts) {
    if (!v->vao) glGenVertexArrays(1, &v->vao);
    if (!v->vbo) glGenBuffers(1, &v->vbo);
    glBindVertexArray(v->vao);
    glBindBuffer(GL_ARRAY_BUFFER, v->vbo);
    glBufferData(GL_ARRAY_BUFFER, (GLsizeiptr)verts * v->stride, (const void *)(uintptr_t)v->addr, GL_STATIC_DRAW);
    for (GLuint r = 0; r < 12; r++) pDisableVertexAttribArray(r);
    for (int i = 0; i < v->nattr; i++) {
        const H3dAttr *a = &v->attr[i];
        if (a->fixed || a->reg >= 12) continue;
        /* PICA attributes are converted to float without normalisation; the program applies the
           IrScale factors (c7 / c8) itself */
        glVertexAttribPointer(a->reg, a->comps, ATYPE[a->type & 3], GL_FALSE, v->stride,
                              (const void *)(uintptr_t)a->offset);
        glEnableVertexAttribArray(a->reg);
    }
    glBindVertexArray(0);
    v->verts = verts;
    v->dirty = 0;
    g_st.vbo_uploads++;
}

static void draw(const ROp *op) {
    H3dVtx *v = g_cur;
    if (!v || !v->addr || !v->stride || !op->u.ext.b) { g_st.dropped++; return; }
    uintptr_t ia = (uintptr_t)(uint32_t)(v->base + (op->u.ext.a & 0x0FFFFFFFu));
    int u16 = (int)(op->u.ext.a >> 31);
    pthread_mutex_lock(&g_mx);
    Ibuf *ib = ibuf_get(ia, op->u.ext.b, u16);
    if (ib->dirty) ibuf_upload(ib);
    if (v->dirty || v->verts < ib->max_index + 1)
        vtx_upload(v, v->verts > ib->max_index + 1 && !v->dirty ? v->verts : ib->max_index + 1);
    /* the model's own program: the material's DefaultShader variant, unless a shader bind of an
       h3d program (ROP_PROGRAM with a registered DVLE) selected one since */
    if (render_current_program(NULL) != RPROG_H3D_DEFAULT) render_set_program_variant(RPROG_H3D_DEFAULT, g_mat_variant);
    if (!render_draw_bind()) { pthread_mutex_unlock(&g_mx); g_st.dropped++; return; }
    glBindVertexArray(v->vao);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ib->ibo);
    /* constant attributes, and (0, 0, 0, 1) for inputs the mesh does not provide */
    uint16_t have = 0;
    for (int i = 0; i < v->nattr; i++)
        if (!v->attr[i].fixed && v->attr[i].reg < 12) have |= (uint16_t)(1u << v->attr[i].reg);
    for (GLuint r = 0; r < 12; r++)
        if (!(have >> r & 1)) pVertexAttrib4f(r, 0, 0, 0, 1);
    for (int i = 0; i < v->nattr; i++) {
        const H3dAttr *a = &v->attr[i];
        if (a->fixed && a->reg < 12) pVertexAttrib4f(a->reg, a->value[0], a->value[1], a->value[2], a->value[3]);
    }
    glDrawElements(PRIM[op->u.ext.c % 3], (GLsizei)op->u.ext.b, u16 ? GL_UNSIGNED_SHORT : GL_UNSIGNED_BYTE, 0);
    render_draw_done();
    pthread_mutex_unlock(&g_mx);
    g_st.draws++;
}

static void ext_op(const ROp *op) {
    if (!gl_ok()) return;
    const uint32_t a = op->u.ext.a, b = op->u.ext.b, c = op->u.ext.c;
    switch (op->u.ext.kind) {
    case H3D_VTX: g_cur = (H3dVtx *)op->u.ext.ptr; break;
    case H3D_DRAW: draw(op); break;
    case H3D_TEXADDR: {
        RTexUnit *u = render_texunit(op->unit);
        u->addr = (uintptr_t)a;
        u->w = (uint16_t)(b & 0xFFFF);
        u->h = (uint16_t)(b >> 16);
        u->fmt = (uint8_t)(c & 0xFF);
        u->max_level = (uint8_t)((c >> 8) & 0xF);
        break;
    }
    case H3D_TEXPARAM: {
        RTexUnit *u = render_texunit(op->unit);
        u->wrap_s = a & 3;
        u->wrap_t = (a >> 4) & 3;
        u->mag = (a >> 8) & 1;
        u->min = (a >> 12) & 7;
        u->type = (a >> 16) & 7;
        memcpy(u->border, &b, 4);
        u->lod_bias = op->u.ext.f[0];
        break;
    }
    case H3D_TEXCFG: render_set_texconfig((int)a, (int)b); break;
    case H3D_PROGRAM:
        g_mat_variant = (int)a;
        render_set_program_variant(RPROG_H3D_DEFAULT, (int)a);
        break;
    case H3D_BLENDCOLOR: memcpy(render_frag_state()->blend_color, &a, 4); render_frag_dirty(); break;
    case H3D_TEXBORDER: memcpy(render_texunit(op->unit)->border, &a, 4); break;
    default: break;
    }
}

static int ext_call(uintptr_t addr, uint32_t size) {
    pthread_mutex_lock(&g_mx);
    Blob *b = blob_find(addr);
    if (!b) { pthread_mutex_unlock(&g_mx); return 0; }
    int n = b->n;
    ROp *ops = n ? xrealloc(NULL, sizeof *ops * (size_t)n) : NULL; /* the table may change while running */
    if (n) memcpy(ops, b->ops, sizeof *ops * (size_t)n);
    pthread_mutex_unlock(&g_mx);
    g_st.blob_calls++;
    for (int i = 0; i < n; i++) render_exec_op(&ops[i]);
    free(ops);
    (void)size;
    return 1;
}

static void ext_mem(uintptr_t addr, size_t size) {
    uintptr_t e = addr + size;
    pthread_mutex_lock(&g_mx);
    for (size_t i = 0; i < g_nvtx; i++) {
        H3dVtx *v = g_vtx[i];
        if (v->addr < e && (uintptr_t)v->addr + (uintptr_t)v->verts * v->stride > addr) v->dirty = 1;
    }
    for (size_t i = 0; i < g_nib; i++)
        if (g_ib[i]->addr < e && g_ib[i]->addr + ((uintptr_t)g_ib[i]->count << g_ib[i]->u16) > addr) g_ib[i]->dirty = 1;
    pthread_mutex_unlock(&g_mx);
}

static void init_once(void) {
    RenderExt e = {ext_op, ext_call, ext_mem, RENDER_VS_H3D, h3d_variant_defines};
    render_set_ext(&e);
}

void h3d_init(void) {
    static pthread_once_t once = PTHREAD_ONCE_INIT;
    pthread_once(&once, init_once);
}
