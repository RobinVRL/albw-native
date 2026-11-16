/* Test viewer for the asset pipeline (not game code).
 *
 * Top screen: one BCH model from the RomFS (default: Link, Archive/ActorCommon.szs#c2692a4c),
 * turning slowly, drawn with a plain GLSL 330 shader (position / normal / texcoord0 / vertex
 * colour, texture unit 0, Lambert term) and the material state decoded by bch.c (blend factors,
 * alpha test, depth test/write, cull mode, sampler state, texture matrix 0).
 * Bottom screen: one layout texture (BFLIM) from the RomFS, drawn on a checkerboard.
 *
 *   viewer [model [index [frames [screenshot.png [texture]]]]]
 *     model:   RomFS path of a .bch, or "<archive>#<hash>" for a BCH inside a .szs/.arc
 *     index:   model index inside the BCH (default 0)
 *     frames:  run that many frames then exit (0 = until closed)
 *     texture: "<archive>#<file name>" or RomFS path of a .bflim/.bclim, or "bch:<name>" for a
 *              texture of the model's BCH
 * Skinning is applied once on the CPU in the bind pose (rigid: bone world matrix of the
 * palette entry; smooth: the vertices are already in model space). */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL3/SDL.h>
#include "../platform/platform.h"
#include "romfs.h"
#include "yaz0.h"
#include "sarc.h"
#include "texture.h"
#include "bch.h"
#include "png.h"

/* GL entry points not in platform/gl.h */
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_FUNC_ADD 0x8006
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_ALWAYS 0x0207
static void (*pglReadPixels)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
static void (*pglCullFace)(GLenum);
static void (*pglFrontFace)(GLenum);
static void (*pglBlendFuncSeparate)(GLenum, GLenum, GLenum, GLenum);
static void (*pglBlendEquationSeparate)(GLenum, GLenum);
static void (*pglBlendColor)(GLfloat, GLfloat, GLfloat, GLfloat);

/* ------------------------------------------------------------------ loading */
static uint8_t *load_file(const char *spec, size_t *out_n, uint8_t **owner) {
    char path[512];
    snprintf(path, sizeof path, "%s", spec);
    char *hash = strchr(path, '#');
    if (hash) *hash++ = 0;
    size_t n;
    uint8_t *b = romfs_read(path, &n);
    if (!b) { fprintf(stderr, "viewer: '%s' not in the RomFS\n", path); return NULL; }
    if (!hash) { *owner = b; *out_n = n; return b; }
    size_t dn = 0;
    uint8_t *d = yaz0_decompress_alloc(b, n, &dn);
    if (d) { free(b); b = d; n = dn; }
    Sarc s;
    if (sarc_open(&s, b, n)) { fprintf(stderr, "viewer: '%s' is not an archive\n", path); free(b); return NULL; }
    const SarcFile *f = sarc_find(&s, hash);
    if (!f) {
        uint32_t h = (uint32_t)strtoul(hash, NULL, 16);
        for (size_t i = 0; i < s.count; i++) if (s.files[i].hash == h) f = &s.files[i];
    }
    uint8_t *r = NULL;
    if (f) {
        r = malloc(f->size + 1);
        memcpy(r, f->data, f->size);
        *out_n = f->size;
    } else {
        fprintf(stderr, "viewer: '%s' not found in '%s'\n", hash, path);
    }
    sarc_close(&s);
    free(b);
    *owner = r;
    return r;
}

/* ------------------------------------------------------------------ math (column-major 4x4) */
static void m4_mul(const float a[16], const float b[16], float o[16]) {
    float r[16];
    for (int c = 0; c < 4; c++)
        for (int rr = 0; rr < 4; rr++)
            r[c * 4 + rr] = a[rr] * b[c * 4] + a[4 + rr] * b[c * 4 + 1] + a[8 + rr] * b[c * 4 + 2] + a[12 + rr] * b[c * 4 + 3];
    memcpy(o, r, sizeof r);
}
static void m4_persp(float o[16], float fovy, float aspect, float zn, float zf) {
    float f = 1.0f / tanf(fovy / 2);
    memset(o, 0, 64);
    o[0] = f / aspect; o[5] = f; o[10] = (zf + zn) / (zn - zf); o[11] = -1; o[14] = 2 * zf * zn / (zn - zf);
}
static void m4_lookat(float o[16], const float e[3], const float c[3]) {
    float f[3] = {c[0] - e[0], c[1] - e[1], c[2] - e[2]}, up[3] = {0, 1, 0};
    float l = sqrtf(f[0] * f[0] + f[1] * f[1] + f[2] * f[2]);
    for (int i = 0; i < 3; i++) f[i] /= l;
    float s[3] = {f[1] * up[2] - f[2] * up[1], f[2] * up[0] - f[0] * up[2], f[0] * up[1] - f[1] * up[0]};
    l = sqrtf(s[0] * s[0] + s[1] * s[1] + s[2] * s[2]);
    for (int i = 0; i < 3; i++) s[i] /= l;
    float u[3] = {s[1] * f[2] - s[2] * f[1], s[2] * f[0] - s[0] * f[2], s[0] * f[1] - s[1] * f[0]};
    float m[16] = {s[0], u[0], -f[0], 0, s[1], u[1], -f[1], 0, s[2], u[2], -f[2], 0,
                   -(s[0] * e[0] + s[1] * e[1] + s[2] * e[2]), -(u[0] * e[0] + u[1] * e[1] + u[2] * e[2]),
                   f[0] * e[0] + f[1] * e[1] + f[2] * e[2], 1};
    memcpy(o, m, 64);
}
static void m34_apply(const float m[12], const float v[3], float w, float o[3]) {
    for (int r = 0; r < 3; r++) o[r] = m[r * 4] * v[0] + m[r * 4 + 1] * v[1] + m[r * 4 + 2] * v[2] + m[r * 4 + 3] * w;
}

/* ------------------------------------------------------------------ GPU-side model */
typedef struct { float pos[3], nrm[3], uv[2], col[4]; } Vtx;
typedef struct {
    GLuint vao, vbo, tex;
    int count, layer;
    const BchMaterial *mat;
    float texmtx[2][4];
} Draw;

static GLenum gl_blend_factor(int f) {
    static const GLenum t[15] = {0 /*ZERO*/, 1 /*ONE*/, 0x0300, 0x0301, 0x0306, 0x0307, 0x0302, 0x0303,
                                 0x0304, 0x0305, 0x8001, 0x8002, 0x8003, 0x8004, 0x0308};
    return f >= 0 && f < 15 ? t[f] : 1;
}
static GLenum gl_blend_eq(int e) {
    static const GLenum t[5] = {GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX};
    return e >= 0 && e < 5 ? t[e] : GL_FUNC_ADD;
}

static const char *VS =
    "#version 330 core\n"
    "layout(location=0) in vec3 aPos; layout(location=1) in vec3 aNrm;\n"
    "layout(location=2) in vec2 aUv; layout(location=3) in vec4 aCol;\n"
    "uniform mat4 uMvp; uniform mat4 uModel; uniform vec4 uTex0; uniform vec4 uTex1;\n"
    "out vec3 vNrm; out vec2 vUv; out vec4 vCol;\n"
    "void main(){ gl_Position = uMvp * vec4(aPos,1);\n"
    "  vNrm = mat3(uModel) * aNrm; vec4 t = vec4(aUv, 0, 1);\n"
    "  vUv = vec2(dot(uTex0, t), dot(uTex1, t)); vCol = aCol; }\n";
static const char *FS =
    "#version 330 core\n"
    "in vec3 vNrm; in vec2 vUv; in vec4 vCol; out vec4 o;\n"
    "uniform sampler2D uTex; uniform int uHasTex; uniform int uAlphaTest; uniform float uAlphaRef;\n"
    "void main(){ vec4 t = uHasTex != 0 ? texture(uTex, vUv) : vec4(0.8,0.8,0.8,1);\n"
    "  vec3 n = normalize(vNrm); float l = 0.45 + 0.55*max(dot(n, normalize(vec3(0.4,0.7,0.6))), 0.0);\n"
    "  vec4 c = vec4(t.rgb * vCol.rgb * l, t.a * vCol.a);\n"
    "  if (uAlphaTest == 6 && !(c.a > uAlphaRef)) discard;\n"
    "  if (uAlphaTest == 7 && !(c.a >= uAlphaRef)) discard;\n"
    "  if (uAlphaTest == 4 && !(c.a < uAlphaRef)) discard;\n"
    "  o = c; }\n";

static BchFile *g_tex_bf; /* second file for textures the model's file lacks (ALBW_VIEWER_TEXFILE) */

static int build_model(const BchFile *bf, const BchModel *m, Draw **out, float bmin[3], float bmax[3]) {
    float (*bw)[12] = calloc((size_t)(m->bone_count ? m->bone_count : 1), sizeof *bw);
    bch_bone_world(m, bw);
    int nd = 0;
    Draw *d = calloc((size_t)(m->mesh_count ? m->mesh_count : 1), sizeof *d);
    for (int i = 0; i < 3; i++) bmin[i] = 1e30f, bmax[i] = -1e30f;
    for (int mi = 0; mi < m->mesh_count; mi++) {
        const BchMesh *me = &m->meshes[mi];
        if (me->material >= m->material_count || !me->vertices) continue;
        const BchMaterial *mat = &m->materials[me->material];
        if (mat->name && strstr(mat->name, "silhouette")) continue;  /* outline pass */
        const BchAttrib *ap = bch_mesh_attr(me, BCH_ATTR_POSITION), *an = bch_mesh_attr(me, BCH_ATTR_NORMAL);
        const BchAttrib *at = bch_mesh_attr(me, BCH_ATTR_TEXCOORD0), *ac = bch_mesh_attr(me, BCH_ATTR_COLOR);
        const BchAttrib *ab = bch_mesh_attr(me, BCH_ATTR_BONE_INDEX);
        if (!ap) continue;
        size_t total = 0;
        for (int s = 0; s < me->submesh_count; s++) total += me->submeshes[s].index_count;
        Vtx *v = malloc(sizeof *v * (total ? total : 1));
        size_t k = 0;
        for (int s = 0; s < me->submesh_count; s++) {
            const BchSubMesh *sm = &me->submeshes[s];
            for (uint32_t q = 0; q < sm->index_count; q++, k++) {
                uint32_t idx = sm->index_16bit ? (uint32_t)(sm->indices[2 * q] | sm->indices[2 * q + 1] << 8) : sm->indices[q];
                float p[4], n[4] = {0, 0, 1, 0}, t[4] = {0, 0, 0, 0}, c[4] = {1, 1, 1, 1}, b[4] = {0, 0, 0, 0};
                bch_vertex_attr(me, ap, idx, p);
                for (int j = 0; j < 3; j++) p[j] += me->position_offset[j];
                if (an) bch_vertex_attr(me, an, idx, n);
                if (at) bch_vertex_attr(me, at, idx, t);
                if (ac) bch_vertex_attr(me, ac, idx, c);
                if (ab) bch_vertex_attr(me, ab, idx, b);
                if (sm->skinning != 1 && sm->bone_count) {  /* rigid or none: bone-local */
                    int bi = (int)b[0];
                    int bone = sm->bones[bi < sm->bone_count ? bi : 0];
                    if (bone < m->bone_count) {
                        float pp[3], nn[3];
                        m34_apply(bw[bone], p, 1, pp);
                        m34_apply(bw[bone], n, 0, nn);
                        memcpy(p, pp, 12);
                        memcpy(n, nn, 12);
                    }
                }
                Vtx *o = &v[k];
                memcpy(o->pos, p, 12);
                memcpy(o->nrm, n, 12);
                memcpy(o->uv, t, 8);
                memcpy(o->col, c, 16);
                for (int j = 0; j < 3; j++) {
                    if (p[j] < bmin[j]) bmin[j] = p[j];
                    if (p[j] > bmax[j]) bmax[j] = p[j];
                }
            }
        }
        Draw *dr = &d[nd++];
        dr->count = (int)total;
        dr->layer = me->layer;
        dr->mat = mat;
        /* texture matrix 0 = material uniforms c11 / c12 (TexMtx0 of the h3d default shader) */
        float t0[4] = {1, 0, 0, 0}, t1[4] = {0, 1, 0, 0};
        for (int u = 0; u < mat->uniform_count; u++) {
            if (mat->uniforms[u].index == 11) memcpy(t0, mat->uniforms[u].v, 16);
            if (mat->uniforms[u].index == 12) memcpy(t1, mat->uniforms[u].v, 16);
        }
        memcpy(dr->texmtx[0], t0, 16);
        memcpy(dr->texmtx[1], t1, 16);
        const BchTexture *tx = bch_find_texture(bf, mat->texture_names[0]);
        if (!tx && g_tex_bf) tx = bch_find_texture(g_tex_bf, mat->texture_names[0]); /* ALBW_VIEWER_TEXFILE */
        if (tx) dr->tex = pica_tex_upload_gl(tx->data, tx->size, tx->format, tx->width, tx->height, tx->levels, &mat->sampler[0]);
        glGenVertexArrays(1, &dr->vao);
        glBindVertexArray(dr->vao);
        glGenBuffers(1, &dr->vbo);
        glBindBuffer(GL_ARRAY_BUFFER, dr->vbo);
        glBufferData(GL_ARRAY_BUFFER, (GLsizeiptr)(sizeof *v * total), v, GL_STATIC_DRAW);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void *)offsetof(Vtx, pos));
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void *)offsetof(Vtx, nrm));
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void *)offsetof(Vtx, uv));
        glVertexAttribPointer(3, 4, GL_FLOAT, GL_FALSE, sizeof(Vtx), (void *)offsetof(Vtx, col));
        for (int a = 0; a < 4; a++) glEnableVertexAttribArray((GLuint)a);
        free(v);
        printf("  mesh %2d: material %-24s layer %d  %5u tris  tex0 %-22s %s %dx%d  blend %d(%d,%d) alpha-test %d/%d depth %d/%d cull %d  %s\n",
               mi, mat->name ? mat->name : "?", me->layer, (unsigned)(total / 3),
               mat->texture_names[0] ? mat->texture_names[0] : "-", tx ? pica_tex_format_name(tx->format) : "",
               tx ? tx->width : 0, tx ? tx->height : 0, mat->blend_enable, mat->blend_src_rgb, mat->blend_dst_rgb,
               mat->alpha_test, mat->alpha_ref, mat->depth_test, mat->depth_write, mat->cull,
               mat->shader_ref ? mat->shader_ref : "");
    }
    free(bw);
    *out = d;
    return nd;
}

static void apply_material(const BchMaterial *m, GLuint prog) {
    if (m->blend_enable) {
        glEnable(GL_BLEND);
        pglBlendFuncSeparate(gl_blend_factor(m->blend_src_rgb), gl_blend_factor(m->blend_dst_rgb),
                             gl_blend_factor(m->blend_src_a), gl_blend_factor(m->blend_dst_a));
        pglBlendEquationSeparate(gl_blend_eq(m->blend_eq_rgb), gl_blend_eq(m->blend_eq_a));
        uint32_t bc = m->blend_color;
        pglBlendColor((bc & 255) / 255.f, (bc >> 8 & 255) / 255.f, (bc >> 16 & 255) / 255.f, (bc >> 24) / 255.f);
    } else {
        glDisable(GL_BLEND);
    }
    if (m->depth_test) {
        glEnable(GL_DEPTH_TEST);
        static const GLenum f[8] = {0x0200, 0x0207, 0x0202, 0x0205, 0x0201, 0x0203, 0x0204, 0x0206};
        glDepthFunc(f[m->depth_func & 7]);
    } else {
        glDisable(GL_DEPTH_TEST);
    }
    glDepthMask(m->depth_write ? GL_TRUE : GL_FALSE);
    if (m->cull == 0) glDisable(GL_CULL_FACE);
    else { glEnable(GL_CULL_FACE); pglCullFace(m->cull == 1 ? GL_FRONT : GL_BACK); }
    glUniform1i(glGetUniformLocation(prog, "uAlphaTest"), m->alpha_test ? m->alpha_func : 0);
    glUniform1f(glGetUniformLocation(prog, "uAlphaRef"), m->alpha_ref / 255.f);
}

/* ------------------------------------------------------------------ 2D texture page */
static const char *VS2 =
    "#version 330 core\n"
    "uniform vec4 rect; out vec2 uv;\n"
    "void main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1); uv = vec2(p.x, p.y);\n"
    "  gl_Position = vec4(rect.xy + p * rect.zw, 0, 1); }\n";
static const char *FS2 =
    "#version 330 core\n"
    "in vec2 uv; out vec4 o; uniform sampler2D tex; uniform vec4 crop;\n"
    "void main(){ vec2 c = floor(gl_FragCoord.xy / 8.0); float k = mod(c.x + c.y, 2.0) * 0.15 + 0.35;\n"
    "  vec4 t = texture(tex, vec2(uv.x * crop.x, 1.0 - (1.0 - uv.y) * crop.y));\n"
    "  o = vec4(mix(vec3(k), t.rgb, t.a), 1); }\n";

static void screenshot(const char *path) {
    int tw, th, bw, bh;
    plat_screen_size(SCREEN_TOP, &tw, &th);
    plat_screen_size(SCREEN_BOTTOM, &bw, &bh);
    int W = tw, H = th + bh;
    uint8_t *img = calloc((size_t)W * H * 4, 1), *row = malloc((size_t)W * H * 4);
    plat_begin_screen(SCREEN_TOP);
    pglReadPixels(0, 0, tw, th, GL_RGBA, GL_UNSIGNED_BYTE, row);
    for (int y = 0; y < th; y++) memcpy(img + (size_t)y * W * 4, row + (size_t)(th - 1 - y) * tw * 4, (size_t)tw * 4);
    plat_begin_screen(SCREEN_BOTTOM);
    pglReadPixels(0, 0, bw, bh, GL_RGBA, GL_UNSIGNED_BYTE, row);
    int x0 = (W - bw) / 2;
    for (int y = 0; y < bh; y++)
        memcpy(img + ((size_t)(th + y) * W + x0) * 4, row + (size_t)(bh - 1 - y) * bw * 4, (size_t)bw * 4);
    for (size_t i = 0; i < (size_t)W * H; i++) img[i * 4 + 3] = 255;
    if (png_write_rgba(path, img, W, H) == 0) printf("screenshot: %s (%dx%d)\n", path, W, H);
    free(img);
    free(row);
}

int main(int argc, char **argv) {
    const char *model_spec = argc > 1 ? argv[1] : "Archive/ActorCommon.szs#c2692a4c";
    int model_index = argc > 2 ? atoi(argv[2]) : 0;
    int frames = argc > 3 ? atoi(argv[3]) : 0;
    const char *shot = argc > 4 ? argv[4] : NULL;
    const char *tex_spec = argc > 5 ? argv[5] : "Archive/Lyt_Boot.arc#timg/Fairy_00.bflim";

    if (romfs_open(NULL)) return 1;
    size_t n;
    uint8_t *owner = NULL, *buf = load_file(model_spec, &n, &owner);
    if (!buf) return 1;
    BchFile bf;
    if (bch_load(&bf, buf, n)) { fprintf(stderr, "viewer: %s: %s\n", model_spec, bf.error); return 1; }
    if (model_index >= bf.model_count) { fprintf(stderr, "viewer: no model %d (%d models)\n", model_index, bf.model_count); return 1; }
    const BchModel *m = &bf.models[model_index];
    static BchFile tex_bf;
    const char *tex_file = getenv("ALBW_VIEWER_TEXFILE"); /* e.g. World/Course/fld_o_Common.bch */
    if (tex_file && *tex_file) {
        size_t tn;
        uint8_t *town = NULL, *tb = load_file(tex_file, &tn, &town);
        if (tb && !bch_load(&tex_bf, tb, tn)) {
            g_tex_bf = &tex_bf;
            printf("textures also from %s (%d textures)\n", tex_file, tex_bf.texture_count);
        } else {
            fprintf(stderr, "viewer: ALBW_VIEWER_TEXFILE %s: not loaded\n", tex_file);
        }
    }
    printf("model '%s' from %s: %d meshes, %d materials, %d bones, %d textures in file\n",
           m->name ? m->name : "?", model_spec, m->mesh_count, m->material_count, m->bone_count, bf.texture_count);

    PlatConfig cfg = {2, 2, 1};
    if (plat_init("ALBW native: asset viewer", &cfg)) return 1;
    pglReadPixels = (void (*)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *))SDL_GL_GetProcAddress("glReadPixels");
    pglCullFace = (void (*)(GLenum))SDL_GL_GetProcAddress("glCullFace");
    pglFrontFace = (void (*)(GLenum))SDL_GL_GetProcAddress("glFrontFace");
    pglBlendFuncSeparate = (void (*)(GLenum, GLenum, GLenum, GLenum))SDL_GL_GetProcAddress("glBlendFuncSeparate");
    pglBlendEquationSeparate = (void (*)(GLenum, GLenum))SDL_GL_GetProcAddress("glBlendEquationSeparate");
    pglBlendColor = (void (*)(GLfloat, GLfloat, GLfloat, GLfloat))SDL_GL_GetProcAddress("glBlendColor");
    if (!pglReadPixels || !pglCullFace || !pglFrontFace || !pglBlendFuncSeparate || !pglBlendEquationSeparate || !pglBlendColor) {
        fprintf(stderr, "viewer: missing GL functions\n");
        return 1;
    }
    pglFrontFace(GL_CCW);

    GLuint prog = gl_program(VS, FS), prog2 = gl_program(VS2, FS2), vao2;
    glGenVertexArrays(1, &vao2);
    Draw *draws;
    float bmin[3], bmax[3];
    int nd = build_model(&bf, m, &draws, bmin, bmax);
    float ctr[3], rad = 0;
    for (int i = 0; i < 3; i++) {
        ctr[i] = (bmin[i] + bmax[i]) / 2;
        float e = (bmax[i] - bmin[i]) / 2;
        rad += e * e;
    }
    rad = sqrtf(rad);
    if (rad <= 0) rad = 1;
    printf("bounds (%.2f %.2f %.2f) - (%.2f %.2f %.2f)\n", bmin[0], bmin[1], bmin[2], bmax[0], bmax[1], bmax[2]);

    /* bottom screen texture */
    GLuint tex2 = 0;
    float crop[2] = {1, 1};
    int tw2 = 0, th2 = 0;
    if (!strncmp(tex_spec, "bch:", 4)) {
        const BchTexture *t = bch_find_texture(&bf, tex_spec + 4);
        if (t) {
            tex2 = pica_tex_upload_gl(t->data, t->size, t->format, t->width, t->height, 1, NULL);
            tw2 = t->width; th2 = t->height;
            printf("bottom texture: %s %s %dx%d\n", t->name, pica_tex_format_name(t->format), t->width, t->height);
        }
    } else {
        uint8_t *o2 = NULL, *lb = load_file(tex_spec, &n, &o2);
        LimImage li;
        if (lb && !lim_parse(lb, n, &li)) {
            PicaSampler s = {0, 0, 0, 0, 0, 0};
            tex2 = pica_tex_upload_gl(li.data, li.size, li.format, li.stored_w, li.stored_h, 1, &s);
            crop[0] = (float)li.width / li.stored_w;
            crop[1] = (float)li.height / li.stored_h;
            tw2 = li.width; th2 = li.height;
            printf("bottom texture: %s %s %dx%d (stored %dx%d)\n", tex_spec, pica_tex_format_name(li.format),
                   li.width, li.height, li.stored_w, li.stored_h);
        }
        free(o2);
    }

    uint64_t t0 = plat_ticks_ns();
    int frame = 0;
    while (plat_poll() && (!frames || frame < frames)) {
        float t = frames ? (float)frame / 60.0f : (float)(plat_ticks_ns() - t0) / 1e9f;
        float ang = 0.6f + t * 0.5f;
        int w, h;
        plat_begin_screen(SCREEN_TOP);
        plat_screen_size(SCREEN_TOP, &w, &h);
        glClearColor(0.18f, 0.24f, 0.32f, 1);
        glDepthMask(GL_TRUE);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        float proj[16], view[16], mvp[16], ident[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
        m4_persp(proj, 0.75f, (float)w / h, rad * 0.05f, rad * 10);
        float eye[3] = {ctr[0] + sinf(ang) * rad * 2.2f, ctr[1] + rad * 0.35f, ctr[2] + cosf(ang) * rad * 2.2f};
        m4_lookat(view, eye, ctr);
        m4_mul(proj, view, mvp);
        glUseProgram(prog);
        glUniformMatrix4fv(glGetUniformLocation(prog, "uMvp"), 1, GL_FALSE, mvp);
        glUniformMatrix4fv(glGetUniformLocation(prog, "uModel"), 1, GL_FALSE, ident);
        glUniform1i(glGetUniformLocation(prog, "uTex"), 0);
        for (int layer = 0; layer < 4; layer++)
            for (int i = 0; i < nd; i++) {
                if (draws[i].layer != layer) continue;
                apply_material(draws[i].mat, prog);
                glActiveTexture(GL_TEXTURE0);
                glBindTexture(GL_TEXTURE_2D, draws[i].tex);
                glUniform1i(glGetUniformLocation(prog, "uHasTex"), draws[i].tex != 0);
                glUniform4fv(glGetUniformLocation(prog, "uTex0"), 1, draws[i].texmtx[0]);
                glUniform4fv(glGetUniformLocation(prog, "uTex1"), 1, draws[i].texmtx[1]);
                glBindVertexArray(draws[i].vao);
                glDrawArrays(GL_TRIANGLES, 0, draws[i].count);
            }
        glDepthMask(GL_TRUE);
        glDisable(GL_BLEND);
        glDisable(GL_CULL_FACE);
        glDisable(GL_DEPTH_TEST);

        plat_begin_screen(SCREEN_BOTTOM);
        plat_screen_size(SCREEN_BOTTOM, &w, &h);
        glClearColor(0.1f, 0.1f, 0.12f, 1);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        if (tex2) {
            float s = fminf(0.9f * w / tw2, 0.9f * h / th2);
            float rw = tw2 * s / w * 2, rh = th2 * s / h * 2;
            float rect[4] = {-rw / 2, -rh / 2, rw, rh};
            glUseProgram(prog2);
            glUniform4fv(glGetUniformLocation(prog2, "rect"), 1, rect);
            glUniform1i(glGetUniformLocation(prog2, "tex"), 0);
            float c4[4] = {crop[0], crop[1], 0, 0};
            glUniform4fv(glGetUniformLocation(prog2, "crop"), 1, c4);
            glActiveTexture(GL_TEXTURE0);
            glBindTexture(GL_TEXTURE_2D, tex2);
            glBindVertexArray(vao2);
            glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        }
        frame++;
        if (shot && frames && frame == frames) screenshot(shot);
        plat_end_frame();
    }
    plat_shutdown();
    bch_free(&bf);
    free(owner);
    romfs_close();
    return 0;
}
