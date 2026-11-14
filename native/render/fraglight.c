/* 3DS fragment lighting: state, LUT texture, hand-written GLSL (see fraglight.h).
 *
 * ---------------------------------------------------------------- RENDER_FS_FRAGLIGHT
 * Hand-written GLSL 330 of the PICA fragment-lighting unit, written from its documented
 * behaviour (inputs, LUT indexing, light loop) - no shader or command word is translated.
 * Interface with the fragment program of render.c (compiled only into programs built with
 * FL = 1, i.e. the nw::h3d DefaultShader variants whose vertex program provides v_tangent):
 *   in  v_normal (view-space normal), v_tangent (view-space tangent, may be 0), v_view (vector
 *       from the fragment to the eye, view space, not normalised), textures t0..t2 (bump map)
 *   out fl_compute(out vec4 primary, out vec4 secondary)
 * Uniforms: fl_cfg   x light count (0 = lighting off), y enabled LUT mask (bit FLI_*: D0 D1 SP FR
 *                    RB RG RR), z Fresnel selector | clamp highlights << 2 | bump mode << 4 |
 *                    bump unit << 6 | renormalise << 8, w absolute-input mask (bit FLI_*)
 *           fl_in    selectors of D0 D1 SP FR / RB RG RR
 *           fl_scale scales of D0 D1 SP FR / RB RG RR
 *           fl_amb   global ambient
 *           fl_l     7 vec4 per light slot: diffuse, ambient, specular 0, specular 1,
 *                    (position | direction, directional), (spot direction, flags: 1 two-sided
 *                    diffuse, 2 geometric factor 0, 4 geometric factor 1, 8 spot, 16 distance
 *                    attenuation), (distance scale, distance bias, light id)
 *           fl_lut   256 x 24 RG32F: row = LUT id, (value, delta to the next entry)
 * Per light (slot k, light id i): L = normalize(directional ? P : P + V), H = normalize(V) + L,
 *   dot = two-sided ? |L.N| : max(L.N, 0); distance attenuation DA_i(clamp(scale |P + V| + bias));
 *   spot SP_i(input); geometric factor min(dot / H.H, 1); D0, D1, RR/RG/RB (RG/RB default to RR),
 *   specular = (D0 spec0 [geo0] + D1 refl spec1 [geo1]) [clamped where L.N <= 0];
 *   diffuse += (diffuse dot + ambient) DA SP; specular += specular DA SP;
 *   the LAST light's Fresnel factor replaces primary / secondary alpha (selector).
 * primary = clamp(diffuse + global ambient), secondary = clamp(specular).
 * LUT indexing: absolute inputs |x| in [0, 1] -> 256 entries; signed inputs x in [-1, 1] ->
 * 8-bit two's complement index (0..127 positive, 128..255 negative); linear interpolation with
 * the stored delta; result times the LUT scale. Shadows (no shadow maps on this path) are not
 * applied.
 */
#define _GNU_SOURCE
#include "fraglight.h"

#include <pthread.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../platform/platform.h"

const char RENDER_FS_FRAGLIGHT[] =
    "in vec3 v_tangent;\n"
    "uniform ivec4 fl_cfg; uniform ivec4 fl_in[2]; uniform vec4 fl_scale[2]; uniform vec4 fl_amb;\n"
    "uniform vec4 fl_l[56]; uniform sampler2D fl_lut;\n"
    "int fl_sel(int i){ return i < 4 ? fl_in[0][i] : fl_in[1][i - 4]; }\n"
    "float fl_sc(int i){ return i < 4 ? fl_scale[0][i] : fl_scale[1][i - 4]; }\n"
    "bool fl_on(int i){ return ((fl_cfg.y >> i) & 1) != 0; }\n"
    "float fl_lut_u(int id, float x){\n"
    "  x = clamp(x, 0.0, 1.0) * 256.0; int i = min(int(x), 255);\n"
    "  vec2 e = texelFetch(fl_lut, ivec2(i, id), 0).rg; return e.r + e.g * (x - float(i));\n"
    "}\n"
    "float fl_lut_s(int id, float x){\n"
    "  x = clamp(x, -1.0, 1.0) * 128.0; int i = clamp(int(floor(x)), -128, 127); float d = x - float(i);\n"
    "  if (i < 0) i += 256;\n"
    "  vec2 e = texelFetch(fl_lut, ivec2(i, id), 0).rg; return e.r + e.g * d;\n"
    "}\n"
    /* LUT `i` (FLI_*) of PICA id `id` for the input it selects */
    "float fl_lookup(int i, int id, vec3 N, vec3 V, vec3 L, vec3 H, vec3 T, vec3 S){\n"
    "  int s = fl_sel(i); float x;\n"
    "  vec3 h = normalize(H);\n"
    "  if (s == 0) x = dot(N, h); else if (s == 1) x = dot(V, h); else if (s == 2) x = dot(N, V);\n"
    "  else if (s == 3) x = dot(L, N); else if (s == 4) x = dot(L, S);\n"
    "  else x = dot(h - N * dot(N, h), T);\n"
    "  float r = ((fl_cfg.w >> i) & 1) != 0 ? fl_lut_u(id, abs(x)) : fl_lut_s(id, x);\n"
    "  return r * fl_sc(i);\n"
    "}\n"
    "void fl_compute(vec4 t0, vec4 t1, vec4 t2, out vec4 prim, out vec4 sec){\n"
    "  prim = vec4(0.0); sec = vec4(0.0);\n"
    "  int n = fl_cfg.x; if (n == 0) return;\n"
    "  vec3 N = normalize(v_normal), V = normalize(v_view);\n"
    "  vec3 T = v_tangent - N * dot(N, v_tangent);\n"
    "  if (dot(T, T) < 1e-8) T = abs(N.x) < 0.9 ? cross(N, vec3(1.0, 0.0, 0.0)) : cross(N, vec3(0.0, 1.0, 0.0));\n"
    "  T = normalize(T); vec3 B = cross(N, T);\n"
    "  int bm = (fl_cfg.z >> 4) & 3;\n"
    "  if (bm != 0) {\n"
    "    int bs = (fl_cfg.z >> 6) & 3; vec4 bt = bs == 0 ? t0 : bs == 1 ? t1 : t2;\n"
    "    vec3 p = bt.rgb * 2.0 - 1.0;\n"
    "    if (((fl_cfg.z >> 8) & 1) != 0) p.z = sqrt(max(1.0 - p.x * p.x - p.y * p.y, 0.0));\n"
    "    vec3 q = normalize(T * p.x + B * p.y + N * p.z);\n"
    "    if (bm == 1) N = q; else T = q;\n"
    "  }\n"
    "  int fsel = fl_cfg.z & 3; bool clamp_hl = ((fl_cfg.z >> 2) & 1) != 0;\n"
    "  vec3 dsum = vec3(0.0), ssum = vec3(0.0); float pa = 1.0, sa = 1.0;\n"
    "  for (int k = 0; k < 8; k++) {\n"
    "    if (k >= n) break;\n"
    "    vec4 P = fl_l[k * 7 + 4], S = fl_l[k * 7 + 5], D = fl_l[k * 7 + 6];\n"
    "    int f = int(S.w + 0.5), id = int(D.z + 0.5);\n"
    "    vec3 L = normalize(P.w != 0.0 ? P.xyz : P.xyz + v_view);\n"
    "    vec3 H = V + L;\n"
    "    float ln = dot(L, N);\n"
    "    float dp = (f & 1) != 0 ? abs(ln) : max(ln, 0.0);\n"
    "    float chl = clamp_hl ? sign(dp) : 1.0;\n"
    "    float da = (f & 16) != 0 ? fl_lut_u(16 + id, D.x * length(P.xyz + v_view) + D.y) : 1.0;\n"
    "    float sp = (f & 8) != 0 ? fl_lookup(2, 8 + id, N, V, L, H, T, S.xyz) : 1.0;\n"
    "    float geo = 1.0;\n"
    "    if ((f & 6) != 0) { float hh = dot(H, H); geo = hh == 0.0 ? 0.0 : min(dp / hh, 1.0); }\n"
    "    float d0 = fl_on(0) ? fl_lookup(0, 0, N, V, L, H, T, S.xyz) : 1.0;\n"
    "    vec3 s0 = d0 * fl_l[k * 7 + 2].rgb * ((f & 2) != 0 ? geo : 1.0);\n"
    "    vec3 refl = vec3(1.0);\n"
    "    if (fl_on(6)) refl.r = fl_lookup(6, 6, N, V, L, H, T, S.xyz);\n"
    "    refl.g = fl_on(5) ? fl_lookup(5, 5, N, V, L, H, T, S.xyz) : refl.r;\n"
    "    refl.b = fl_on(4) ? fl_lookup(4, 4, N, V, L, H, T, S.xyz) : refl.r;\n"
    "    float d1 = fl_on(1) ? fl_lookup(1, 1, N, V, L, H, T, S.xyz) : 1.0;\n"
    "    vec3 s1 = d1 * refl * fl_l[k * 7 + 3].rgb * ((f & 4) != 0 ? geo : 1.0);\n"
    "    if (fl_on(3) && k == n - 1 && fsel != 0) {\n"
    "      float fr = fl_lookup(3, 3, N, V, L, H, T, S.xyz);\n"
    "      if ((fsel & 1) != 0) pa = fr;\n"
    "      if ((fsel & 2) != 0) sa = fr;\n"
    "    }\n"
    "    dsum += (fl_l[k * 7].rgb * dp + fl_l[k * 7 + 1].rgb) * da * sp;\n"
    "    ssum += (s0 + s1) * chl * da * sp;\n"
    "  }\n"
    "  dsum += fl_amb.rgb;\n"
    "  prim = clamp(vec4(dsum, pa), 0.0, 1.0); sec = clamp(vec4(ssum, sa), 0.0, 1.0);\n"
    "}\n";

/* ================================================================== GL functions */

#define GL_RG32F_ 0x8230
#define GL_RG_ 0x8227
static void (*pUniform4iv)(GLint, GLsizei, const GLint *);

/* ================================================================== LUT registry (load time) */

typedef struct { uintptr_t blob; float e[256][2]; } Lut;

static pthread_mutex_t g_mx = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
static Lut *g_lut; static uint32_t g_nlut, g_caplut;
typedef struct { uintptr_t key; FLLutCfg cfg; } MatCfg;
static MatCfg *g_mat; static size_t g_nmat, g_capmat;

static void *xrealloc(void *p, size_t n) {
    void *q = realloc(p, n ? n : 1);
    if (!q) { fprintf(stderr, "fraglight: out of memory\n"); abort(); }
    return q;
}

/* LUT tables changed (a re-registered address): rows of bound ids are re-uploaded */
static uint32_t g_lut_gen;

void fraglight_lut_set(uintptr_t blob, const float e[256][2]) {
    pthread_mutex_lock(&g_mx);
    uint32_t i = 0;
    for (; i < g_nlut; i++)
        if (g_lut[i].blob == blob) break;
    if (i == g_nlut) {
        if (g_nlut == g_caplut) { g_caplut = g_caplut ? g_caplut * 2 : 64; g_lut = xrealloc(g_lut, g_caplut * sizeof *g_lut); }
        g_nlut++;
    }
    g_lut[i].blob = blob;
    memcpy(g_lut[i].e, e, sizeof g_lut[i].e);
    g_lut_gen++;
    pthread_mutex_unlock(&g_mx);
}

uint32_t fraglight_lut_find(uintptr_t blob) {
    if (!blob) return 0;
    pthread_mutex_lock(&g_mx);
    uint32_t r = 0;
    for (uint32_t i = g_nlut; i-- > 0;)
        if (g_lut[i].blob == blob) { r = i + 1; break; }
    pthread_mutex_unlock(&g_mx);
    return r;
}

void fraglight_material_set(uintptr_t key, const FLLutCfg *cfg) {
    pthread_mutex_lock(&g_mx);
    size_t i = 0;
    for (; i < g_nmat; i++)
        if (g_mat[i].key == key) break;
    if (i == g_nmat) {
        if (g_nmat == g_capmat) { g_capmat = g_capmat ? g_capmat * 2 : 256; g_mat = xrealloc(g_mat, g_capmat * sizeof *g_mat); }
        g_nmat++;
    }
    g_mat[i].key = key;
    g_mat[i].cfg = *cfg;
    pthread_mutex_unlock(&g_mx);
}

int fraglight_material_get(uintptr_t key, FLLutCfg *cfg) {
    pthread_mutex_lock(&g_mx);
    int ok = 0;
    for (size_t i = g_nmat; i-- > 0;)
        if (g_mat[i].key == key) { *cfg = g_mat[i].cfg; ok = 1; break; }
    pthread_mutex_unlock(&g_mx);
    return ok;
}

ROp fraglight_op(int kind, const void *payload, size_t n) {
    ROp op;
    memset(&op, 0, sizeof op);
    op.type = ROP_FL;
    op.u.fl.kind = (uint8_t)kind;
    if (n > sizeof op.u.fl.data) n = sizeof op.u.fl.data;
    memcpy(op.u.fl.data, payload, n);
    return op;
}

/* ================================================================== execution state */

typedef struct {
    uint8_t diffuse[3], ambient[3], spec0[3], spec1[3];
    uint8_t directional, two_sided, geo0, geo1;
    float pos[3], spot[3], da_scale, da_bias;
} LightState;

static struct {
    FLEnv env;
    LightState light[8];
    FLLutCfg in;
    uint32_t bound[24];      /* LUT id -> registry handle */
    uint32_t gen;            /* state generation (uniform upload) */
    uint32_t lut_gen_up;     /* g_lut_gen at the last texture upload */
    uint32_t tex_bound[24];  /* handles in the texture rows */
    bool rows_dirty;
    GLuint tex;
} S;

void fraglight_reset(void) {
    uint32_t g = S.gen;
    GLuint tex = S.tex;
    uint32_t tb[24];
    memcpy(tb, S.tex_bound, sizeof tb);
    memset(&S, 0, sizeof S);
    S.gen = g + 1;
    S.tex = tex;
    memcpy(S.tex_bound, tb, sizeof tb);
    for (int i = 0; i < FLI_COUNT; i++) S.in.abs |= (uint8_t)(1u << i);
}

const FLEnv *fraglight_env(void) { return &S.env; }

void fraglight_exec(const ROp *op) {
    const void *d = op->u.fl.data;
    switch (op->u.fl.kind) {
    case FL_ENV: memcpy(&S.env, d, sizeof S.env); break;
    case FL_LIGHT: {
        FLLight l;
        memcpy(&l, d, sizeof l);
        LightState *s = &S.light[l.id & 7];
        if (l.parts & FLL_COLOR) {
            memcpy(s->diffuse, l.diffuse, 3); memcpy(s->ambient, l.ambient, 3);
            memcpy(s->spec0, l.spec0, 3); memcpy(s->spec1, l.spec1, 3);
        }
        if (l.parts & FLL_CONFIG) {
            s->directional = l.directional; s->two_sided = l.two_sided; s->geo0 = l.geo0; s->geo1 = l.geo1;
        }
        if (l.parts & FLL_DIST) { s->da_scale = l.da_scale; s->da_bias = l.da_bias; }
        break;
    }
    case FL_POS: {
        FLPos p;
        memcpy(&p, d, sizeof p);
        for (int i = 0; i < p.n && i < 8; i++) {
            LightState *s = &S.light[p.l[i].id & 7];
            memcpy(s->pos, p.l[i].pos, sizeof s->pos);
            memcpy(s->spot, p.l[i].spot, sizeof s->spot);
            s->directional = p.l[i].directional;
        }
        break;
    }
    case FL_LUTCFG: {
        FLLutCfg c;
        memcpy(&c, d, sizeof c);
        S.in.abs = c.abs;
        for (int i = 0; i < FLI_COUNT; i++)
            if (c.set >> i & 1) { S.in.sel[i] = c.sel[i]; S.in.scale[i] = c.scale[i]; }
        break;
    }
    case FL_LUT: {
        FLLutBind b;
        memcpy(&b, d, sizeof b);
        if (b.id < 24 && S.bound[b.id] != b.lut) { S.bound[b.id] = b.lut; S.rows_dirty = true; }
        break;
    }
    case FL_POLYOFFSET: {
        FLPoly p;
        memcpy(&p, d, sizeof p);
        RFragState *f = render_frag_state();
        f->poly_offset_enable = p.enable;
        f->poly_offset_units = p.units;
        render_frag_dirty();
        break;
    }
    default: return;
    }
    S.gen++;
}

/* ================================================================== uniforms */

void fraglight_locations(unsigned prog, FLLoc *loc) {
    if (!pUniform4iv) pUniform4iv = (void (*)(GLint, GLsizei, const GLint *))SDL_GL_GetProcAddress("glUniform4iv");
    loc->cfg = glGetUniformLocation(prog, "fl_cfg");
    loc->in0 = glGetUniformLocation(prog, "fl_in");
    loc->scale = glGetUniformLocation(prog, "fl_scale");
    loc->amb = glGetUniformLocation(prog, "fl_amb");
    loc->light = glGetUniformLocation(prog, "fl_l");
    loc->lut = glGetUniformLocation(prog, "fl_lut");
    loc->gen = 0;
}

static float scale_of(int code) {
    static const float k[8] = {1, 2, 4, 8, 1, 1, 0.25f, 0.5f};
    return k[code & 7];
}

/* LUTs a config provides (bit FLI_*) */
static int config_luts(int c) {
    enum { D0 = 1 << FLI_D0, D1 = 1 << FLI_D1, SP = 1 << FLI_SP, FR = 1 << FLI_FR, RB = 1 << FLI_RB,
           RG = 1 << FLI_RG, RR = 1 << FLI_RR };
    switch (c) {
    case 0: return D0 | RR | SP;
    case 1: return RR | FR | SP;
    case 2: return RR | D0 | D1;
    case 3: return D0 | D1 | FR;
    case 4: return RR | RG | RB | D0 | D1 | SP;
    case 5: return RR | RG | RB | D0 | FR | SP;
    case 6: return RR | D0 | D1 | FR | SP;
    default: return 0x7F;
    }
}

static void upload_rows(void) {
    if (!S.tex) {
        glGenTextures(1, &S.tex);
        glBindTexture(GL_TEXTURE_2D, S.tex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RG32F_, 256, 24, 0, GL_RG_, GL_FLOAT, NULL);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        for (int i = 0; i < 24; i++) S.tex_bound[i] = 0xFFFFFFFFu;
    } else {
        glBindTexture(GL_TEXTURE_2D, S.tex);
    }
    static float zero[256][2];
    bool all = S.lut_gen_up != g_lut_gen;
    pthread_mutex_lock(&g_mx);
    for (int i = 0; i < 24; i++) {
        uint32_t h = S.bound[i];
        if (!all && S.tex_bound[i] == h) continue;
        const float(*src)[2] = h && h <= g_nlut ? (const float(*)[2])g_lut[h - 1].e : (const float(*)[2])zero;
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, i, 256, 1, GL_RG_, GL_FLOAT, src);
        S.tex_bound[i] = h;
    }
    S.lut_gen_up = g_lut_gen;
    pthread_mutex_unlock(&g_mx);
    S.rows_dirty = false;
}

void fraglight_upload(FLLoc *loc, int unit) {
    if (loc->cfg < 0) return;
    glActiveTexture(GL_TEXTURE0 + (GLenum)unit);
    if (S.rows_dirty || !S.tex || S.lut_gen_up != g_lut_gen) upload_rows();
    else glBindTexture(GL_TEXTURE_2D, S.tex);
    glActiveTexture(GL_TEXTURE0);
    if (loc->gen == S.gen && loc->gen) return;
    loc->gen = S.gen;
    const FLEnv *e = &S.env;
    int n = e->enable ? (e->nlights ? e->nlights : 1) : 0;
    if (n > 8) n = 8;
    int luts = config_luts(e->config);
    /* environment disables (D0 D1 FR RR/RG/RB); SP is per light */
    static const int off_bit[6] = {FLI_D0, FLI_D1, FLI_FR, FLI_RR, FLI_RG, FLI_RB};
    for (int i = 0; i < 6; i++)
        if (e->lut_off >> i & 1) luts &= ~(1 << off_bit[i]);
    GLint cfg[4] = {n, luts,
                    (e->fresnel_sel & 3) | (e->clamp_highlights ? 4 : 0) | (e->bump_mode & 3) << 4 |
                        (e->bump_sel & 3) << 6 | (e->bump_renorm ? 1 << 8 : 0),
                    S.in.abs};
    pUniform4iv(loc->cfg, 1, cfg);
    GLint in[8] = {0};
    float sc[8] = {0};
    for (int i = 0; i < FLI_COUNT; i++) { in[i] = S.in.sel[i] & 7; sc[i] = scale_of(S.in.scale[i]); }
    pUniform4iv(loc->in0, 2, in);
    glUniform4fv(loc->scale, 2, sc);
    float amb[4] = {e->ambient[0] / 255.f, e->ambient[1] / 255.f, e->ambient[2] / 255.f, 0};
    glUniform4fv(loc->amb, 1, amb);
    float l[56 * 4];
    memset(l, 0, sizeof l);
    for (int k = 0; k < n; k++) {
        int id = e->perm[k] & 7;
        const LightState *s = &S.light[id];
        float *v = l + k * 28;
        for (int c = 0; c < 3; c++) {
            v[0 + c] = s->diffuse[c] / 255.f;
            v[4 + c] = s->ambient[c] / 255.f;
            v[8 + c] = s->spec0[c] / 255.f;
            v[12 + c] = s->spec1[c] / 255.f;
            v[16 + c] = s->pos[c];
            v[20 + c] = s->spot[c];
        }
        v[19] = s->directional ? 1.0f : 0.0f;
        int f = (s->two_sided ? 1 : 0) | (s->geo0 ? 2 : 0) | (s->geo1 ? 4 : 0) |
                ((e->spot_mask >> id & 1) && (luts >> FLI_SP & 1) ? 8 : 0) | (e->da_mask >> id & 1 ? 16 : 0);
        v[23] = (float)f;
        v[24] = s->da_scale;
        v[25] = s->da_bias;
        v[26] = (float)id;
    }
    glUniform4fv(loc->light, 56, l);
}
