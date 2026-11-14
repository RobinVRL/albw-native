/* Native OpenGL 3.3 core renderer (see render.h for the model: native ops recorded by the
 * replaced GPU-state producers, executed in nngx request order; no PICA word is ever decoded).
 *
 * ---------------------------------------------------------------- conventions
 * Render targets ("surfaces") are GL textures keyed by the game address of the colour / depth
 * buffer. GL row y = PICA window y (the PICA viewport origin is the bottom-left corner, like GL).
 * In 3DS memory a tiled colour buffer stores the TOP window row first, a DisplayTransfer keeps
 * the memory row order (flip = mirror rows), and the LCD shows linear memory rotated: LCD pixel
 * (x from the left, y from the top) = buffer pixel (column 239 - y, row x) for the 240-wide top
 * buffer (3dbrew "Framebuffers"). Display images are therefore kept in the same GL orientation
 * as surfaces (plain blit for a transfer) and the rotation happens only in render_scanout:
 *     texel(X = W-1 - lcd_y, Y = H-1 - lcd_x)        (W = 240, H = 400 or 320)
 * Textures decoded from memory use the same orientation (texdecode.c, row 0 = bottom = t 0), so
 * render-to-texture surfaces and memory textures are sampled identically.
 * PICA clip space has z in [-w, 0] (0 = near); the hand-written vertex programs output
 * gl_Position.z = -(2 z + w) so GL's [-w, w] range maps onto it, then glDepthRange(near, far)
 * applies the depth-map scale/offset the game programmed (ROP_DEPTHMAP).
 * ALBW_SCANOUT=direct|rot|rotflip overrides the scan-out orientation for debugging.
 */
#define _GNU_SOURCE
#include "render.h"

#include <pthread.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SDL3/SDL.h>

#include "../platform/platform.h"
#include "texdecode.h"

/* ================================================================== GL functions beyond gl.h */

#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_COLOR 0x1800
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_TEST 0x0B90
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_REPEAT 0x2901
#define GL_MIRRORED_REPEAT 0x8370
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_ONE 1
#define GL_ZERO 0
#define GL_TRIANGLE_FAN 0x0006
#define GL_BYTE 0x1400
#define GL_SHORT 0x1402
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_INVERT 0x150A
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_NEVER 0x0200
#define GL_EQUAL 0x0202
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_FUNC_ADD 0x8006
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_CLEAR 0x1500
#define GL_UNSIGNED_INT 0x1405

#define RGL_FUNCS(X) \
    X(void, BlitFramebuffer, (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)) \
    X(void, ColorMask, (GLboolean, GLboolean, GLboolean, GLboolean)) \
    X(void, StencilFunc, (GLenum, GLint, GLuint)) \
    X(void, StencilOp, (GLenum, GLenum, GLenum)) \
    X(void, StencilMask, (GLuint)) \
    X(void, BlendFuncSeparate, (GLenum, GLenum, GLenum, GLenum)) \
    X(void, BlendEquationSeparate, (GLenum, GLenum)) \
    X(void, BlendColor, (GLfloat, GLfloat, GLfloat, GLfloat)) \
    X(void, CullFace, (GLenum)) \
    X(void, FrontFace, (GLenum)) \
    X(void, PolygonOffset, (GLfloat, GLfloat)) \
    X(void, DepthRange, (double, double)) \
    X(void, LogicOp, (GLenum)) \
    X(void, ClearBufferfv, (GLenum, GLint, const GLfloat *)) \
    X(void, ClearBufferfi, (GLenum, GLint, GLfloat, GLint)) \
    X(void, Uniform1iv, (GLint, GLsizei, const GLint *)) \
    X(void, Uniform4iv, (GLint, GLsizei, const GLint *)) \
    X(void, Uniform2i, (GLint, GLint, GLint)) \
    X(void, Uniform4f, (GLint, GLfloat, GLfloat, GLfloat, GLfloat)) \
    X(void, VertexAttrib4f, (GLuint, GLfloat, GLfloat, GLfloat, GLfloat)) \
    X(void, DisableVertexAttribArray, (GLuint)) \
    X(void, TexParameterfv, (GLenum, GLenum, const GLfloat *)) \
    X(void, TexParameterf, (GLenum, GLenum, GLfloat)) \
    X(void, DeleteFramebuffers, (GLsizei, const GLuint *)) \
    X(void, ReadPixels, (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *)) \
    X(void, DrawElementsBaseVertex, (GLenum, GLsizei, GLenum, const void *, GLint)) \
    X(void, BindAttribLocation, (GLuint, GLuint, const GLchar *)) \
    X(void, BindFragDataLocation, (GLuint, GLuint, const GLchar *)) \
    X(void, DrawBuffers, (GLsizei, const GLenum *))

#define RGL_DEFINE(ret, name, args) static ret(*rgl##name) args;
RGL_FUNCS(RGL_DEFINE)
#undef RGL_DEFINE

/* ================================================================== small helpers */

static bool g_trace;
static void rlog(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void rlog(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    fputs("render: ", stderr);
    vfprintf(stderr, fmt, ap);
    fputc('\n', stderr);
    va_end(ap);
}
#define WARN_ONCE(...) do { static bool once_; if (!once_) { once_ = true; rlog(__VA_ARGS__); } } while (0)

static pthread_mutex_t g_lock = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;
static void lock(void) { pthread_mutex_lock(&g_lock); }
static void unlock(void) { pthread_mutex_unlock(&g_lock); }

static void *xrealloc(void *p, size_t n) {
    void *q = realloc(p, n ? n : 1);
    if (!q) { rlog("out of memory"); abort(); }
    return q;
}

#define VEC_PUSH(arr, n, cap) do { if ((n) == (cap)) { (cap) = (cap) ? (cap) * 2 : 16; \
    (arr) = xrealloc((arr), (cap) * sizeof *(arr)); } } while (0)

static int fmt_bytes(int rfmt) {
    switch (rfmt) {
    case RFMT_RGBA8: return 4;
    case RFMT_RGB8: return 3;
    default: return 2;
    }
}
static int depth_bytes(int dfmt) { return dfmt == RDEPTH_D16 ? 2 : dfmt == RDEPTH_D24 ? 3 : 4; }

/* ================================================================== state */

typedef struct {
    uintptr_t addr;
    size_t bytes;
    int w, h, fmt;       /* logical size (3DS pixels) and RFMT_* / RDEPTH_* */
    bool depth;
    GLuint tex;          /* GL_RGBA8 or GL_DEPTH24_STENCIL8 texture, (w*scale) x (h*scale) */
    GLuint fbo;          /* single-attachment FBO (clears, blits) */
} Surface;

typedef struct { GLuint fbo; Surface *c, *d; } FboEnt;

typedef struct {
    uintptr_t mem;
    size_t bytes;
    int w, h, fmt;
    Surface *img;        /* GL image (a colour surface not in the surface list) */
    bool valid;          /* received a transfer */
} Display;

typedef struct { uintptr_t start, end; uint32_t value; int bits; } PendingFill;

typedef struct {
    uintptr_t addr;
    int w, h, fmt, levels;
    bool cube;
    uintptr_t faces[6];
    GLuint tex;
    bool dirty;
    uint64_t hash;
    uint32_t checked_frame, used_frame;
    int p_wrap_s, p_wrap_t, p_min, p_mag; /* last sampler params set */
} TexEnt;

typedef struct {
    GLuint prog;
    GLint c, b, tev_src, tev_cmb, tev_const, tev_buf, tev_bufcol, alpha, texcfg, tex[3], texcube, scale;
} Program;

static struct {
    bool ready, failed;
    int scale;                       /* internal resolution multiplier */
    int scanout_mode;                /* 0 auto, 1 direct, 2 rot, 3 rotflip */

    Surface **surf; size_t nsurf, capsurf;
    FboEnt *fbos; size_t nfbo, capfbo;
    Display *disp; size_t ndisp, capdisp;
    PendingFill pend[16]; unsigned pend_next;
    TexEnt *tex; size_t ntex, captex;

    /* current pipeline state */
    Surface *cur_c, *cur_d;
    GLuint cur_fbo;
    int vp[4];
    bool scissor; int sc[4];
    RFragState frag; bool frag_dirty;
    RTexUnit unit[3]; int tex_enable, tex2_tc1;
    RTev tev; bool tev_dirty;
    int prog_id;
    float vsf[RENDER_VS_FLOATS * 4]; bool vsf_dirty;
    uint16_t vsb;
    struct { uintptr_t ptr; int type, count, stride; bool array; float k[4]; } attr[RENDER_MAX_ATTRIBS];

    Program progs[RPROG_COUNT];
    GLuint scan_prog, vao, vbo, ibo;
    size_t vbo_off, ibo_off;
    GLint scan_rot;

    uint32_t frame;
    RStats st;
} R = {.scale = 1};

#define STREAM_BYTES (8u << 20)

/* ================================================================== GLSL */

/* Common fragment program: PICA fixed-function fragment pipeline as uniforms
 * (6 texture-combiner stages + combiner buffer, alpha test). Fragment lighting is reduced to
 * "not lit" (fragment primary/secondary = 0) until the h3d material path needs it. */
static const char FS_TEV[] =
    "#version 330 core\n"
    "in vec4 v_color; in vec4 v_tc0; in vec2 v_tc1; in vec2 v_tc2; in vec3 v_normal; in vec3 v_view;\n"
    "out vec4 o_color;\n"
    "uniform sampler2D tex0, tex1, tex2; uniform samplerCube texcube0;\n"
    "uniform ivec4 tev_src[6]; uniform ivec4 tev_cmb[6]; uniform vec4 tev_const[6];\n"
    "uniform ivec2 tev_buf; uniform vec4 tev_bufcol; uniform ivec4 alpha_test; uniform ivec4 texcfg;\n"
    "vec4 t0 = vec4(0.0), t1 = vec4(0.0), t2 = vec4(0.0), prev = vec4(0.0), buf = vec4(0.0), k = vec4(0.0);\n"
    "vec4 src(int s){\n"
    "  if (s == 0) return clamp(v_color, 0.0, 1.0);\n"
    "  if (s == 3) return t0; if (s == 4) return t1; if (s == 5) return t2;\n"
    "  if (s == 13) return buf; if (s == 14) return k; if (s == 15) return prev;\n"
    "  return vec4(0.0);\n"
    "}\n"
    "vec3 op_rgb(int o, vec4 v){\n"
    "  if (o == 0) return v.rgb; if (o == 1) return 1.0 - v.rgb;\n"
    "  if (o == 2) return vec3(v.a); if (o == 3) return vec3(1.0 - v.a);\n"
    "  if (o == 4) return vec3(v.r); if (o == 5) return vec3(1.0 - v.r);\n"
    "  if (o == 8) return vec3(v.g); if (o == 9) return vec3(1.0 - v.g);\n"
    "  if (o == 12) return vec3(v.b); if (o == 13) return vec3(1.0 - v.b);\n"
    "  return v.rgb;\n"
    "}\n"
    "float op_a(int o, vec4 v){\n"
    "  if (o == 0) return v.a; if (o == 1) return 1.0 - v.a; if (o == 2) return v.r; if (o == 3) return 1.0 - v.r;\n"
    "  if (o == 4) return v.g; if (o == 5) return 1.0 - v.g; if (o == 6) return v.b; if (o == 7) return 1.0 - v.b;\n"
    "  return v.a;\n"
    "}\n"
    "vec3 cmb3(int c, vec3 a, vec3 b, vec3 d){\n"
    "  if (c == 0) return a; if (c == 1) return a * b; if (c == 2) return min(a + b, 1.0);\n"
    "  if (c == 3) return clamp(a + b - 0.5, 0.0, 1.0); if (c == 4) return a * d + b * (1.0 - d);\n"
    "  if (c == 5) return max(a - b, 0.0); if (c == 6 || c == 7) return vec3(clamp(4.0 * dot(a - 0.5, b - 0.5), 0.0, 1.0));\n"
    "  if (c == 8) return min(a * b + d, 1.0); if (c == 9) return min(a + b, 1.0) * d;\n"
    "  return a;\n"
    "}\n"
    "float cmb1(int c, float a, float b, float d){\n"
    "  if (c == 0) return a; if (c == 1) return a * b; if (c == 2) return min(a + b, 1.0);\n"
    "  if (c == 3) return clamp(a + b - 0.5, 0.0, 1.0); if (c == 4) return a * d + b * (1.0 - d);\n"
    "  if (c == 5) return max(a - b, 0.0); if (c == 8) return min(a * b + d, 1.0); if (c == 9) return min(a + b, 1.0) * d;\n"
    "  return a;\n"
    "}\n"
    "bool test(int f, int a, int r){\n"
    "  if (f == 0) return false; if (f == 1) return true; if (f == 2) return a == r; if (f == 3) return a != r;\n"
    "  if (f == 4) return a < r; if (f == 5) return a <= r; if (f == 6) return a > r; return a >= r;\n"
    "}\n"
    "void main(){\n"
    "  t0 = vec4(0.0); t1 = vec4(0.0); t2 = vec4(0.0);\n"
    "  if ((texcfg.x & 1) != 0) {\n"
    "    if (texcfg.z == 1) t0 = texture(texcube0, v_tc0.xyz);\n"
    "    else if (texcfg.z == 2) t0 = textureProj(tex0, v_tc0.xyw);\n"
    "    else t0 = texture(tex0, v_tc0.xy);\n"
    "  }\n"
    "  if ((texcfg.x & 2) != 0) t1 = texture(tex1, v_tc1);\n"
    "  if ((texcfg.x & 4) != 0) t2 = texture(tex2, texcfg.y != 0 ? v_tc1 : v_tc2);\n"
    "  prev = vec4(0.0); buf = vec4(0.0); vec4 next = tev_bufcol;\n"
    "  for (int i = 0; i < 6; i++) {\n"
    "    ivec4 s = tev_src[i]; ivec4 m = tev_cmb[i]; k = tev_const[i];\n"
    "    vec3 a = op_rgb(s.z & 15, src(s.x & 15)), b = op_rgb(s.z >> 4 & 15, src(s.x >> 4 & 15)),\n"
    "         c = op_rgb(s.z >> 8 & 15, src(s.x >> 8 & 15));\n"
    "    float aa = op_a(s.w & 15, src(s.y & 15)), ab = op_a(s.w >> 4 & 15, src(s.y >> 4 & 15)),\n"
    "          ac = op_a(s.w >> 8 & 15, src(s.y >> 8 & 15));\n"
    "    vec3 rgb = min(cmb3(m.x, a, b, c) * float(1 << m.z), 1.0);\n"
    "    float al = (m.x == 7) ? rgb.r : min(cmb1(m.y, aa, ab, ac) * float(1 << m.w), 1.0);\n"
    "    prev = vec4(rgb, al);\n"
    "    buf = next;\n"
    "    if (i < 4 && ((tev_buf.x >> i) & 1) != 0) next.rgb = prev.rgb;\n"
    "    if (i < 4 && ((tev_buf.y >> i) & 1) != 0) next.a = prev.a;\n"
    "  }\n"
    "  if (alpha_test.x != 0 && !test(alpha_test.y, int(prev.a * 255.0 + 0.5), alpha_test.z)) discard;\n"
    "  o_color = prev;\n"
    "}\n";

/* Vertex programs: same interface as the PICA shaders they stand for (see SHADERS.md): float
 * uniform registers c[0..95] (rows of matrices as the game uploads them), bool uniforms b, input
 * registers v0..v11. pica_out() converts PICA clip space (z in [-w, 0]) to GL. */
#define VS_HEAD \
    "#version 330 core\n" \
    "layout(location = 0) in vec4 v0; layout(location = 1) in vec4 v1; layout(location = 2) in vec4 v2;\n" \
    "layout(location = 3) in vec4 v3; layout(location = 4) in vec4 v4; layout(location = 5) in vec4 v5;\n" \
    "layout(location = 6) in vec4 v6; layout(location = 7) in vec4 v7;\n" \
    "uniform vec4 c[96]; uniform int b;\n" \
    "out vec4 v_color; out vec4 v_tc0; out vec2 v_tc1; out vec2 v_tc2; out vec3 v_normal; out vec3 v_view;\n" \
    "vec4 pica_out(vec4 p){ return vec4(p.x, p.y, -(2.0 * p.z + p.w), p.w); }\n" \
    "vec4 m4(int r, vec4 v){ return vec4(dot(c[r], v), dot(c[r + 1], v), dot(c[r + 2], v), dot(c[r + 3], v)); }\n" \
    "vec3 m3(int r, vec4 v){ return vec3(dot(c[r], v), dot(c[r + 1], v), dot(c[r + 2], v)); }\n"

/* RPROG_CLIP: v0 clip position, v1 colour (0..1), v2 uv0 */
static const char VS_CLIP[] = VS_HEAD
    "void main(){ gl_Position = pica_out(v0); v_color = v1; v_tc0 = vec4(v2.xy, 0.0, 1.0);\n"
    "  v_tc1 = v2.xy; v_tc2 = v2.xy; v_normal = vec3(0.0, 0.0, 1.0); v_view = vec3(0.0); }\n";

/* Generic "projection (c0-c3) x modelview (c4-c6, 3x4)" program: provisional body for the game
 * programs until each one is written by hand from SHADERS.md. v0 position, v1 colour (0..255
 * bytes or 0..1 floats: c7.x = colour scale, 0 means 1), v2 uv0, v3 uv1. */
static const char VS_MVP[] = VS_HEAD
    "void main(){ vec4 p = vec4(m3(4, vec4(v0.xyz, 1.0)), 1.0); gl_Position = pica_out(m4(0, p));\n"
    "  float cs = c[7].x != 0.0 ? c[7].x : 1.0; v_color = v1 * cs; v_tc0 = vec4(v2.xy, 0.0, 1.0);\n"
    "  v_tc1 = v3.xy; v_tc2 = v3.xy; v_normal = vec3(0.0, 0.0, 1.0); v_view = -p.xyz; }\n";

static const char *VS_SRC[RPROG_COUNT] = {
    [RPROG_CLIP] = VS_CLIP,
    [RPROG_GR_DEFAULT] = VS_MVP,
    [RPROG_FONT_RECT] = VS_MVP,
    [RPROG_H3D_DEFAULT] = VS_MVP,
    [RPROG_PRIMITIVE] = VS_MVP,
};

/* ================================================================== GL setup */

static void program_build(int id) {
    Program *p = &R.progs[id];
    /* gl_program aborts with the log on a compile error: these sources are fixed */
    p->prog = gl_program(VS_SRC[id], FS_TEV);
    GLuint g = p->prog;
    glUseProgram(g);
    p->c = glGetUniformLocation(g, "c");
    p->b = glGetUniformLocation(g, "b");
    p->tev_src = glGetUniformLocation(g, "tev_src");
    p->tev_cmb = glGetUniformLocation(g, "tev_cmb");
    p->tev_const = glGetUniformLocation(g, "tev_const");
    p->tev_buf = glGetUniformLocation(g, "tev_buf");
    p->tev_bufcol = glGetUniformLocation(g, "tev_bufcol");
    p->alpha = glGetUniformLocation(g, "alpha_test");
    p->texcfg = glGetUniformLocation(g, "texcfg");
    p->scale = glGetUniformLocation(g, "res_scale");
    static const char *tn[3] = {"tex0", "tex1", "tex2"};
    for (int i = 0; i < 3; i++) {
        p->tex[i] = glGetUniformLocation(g, tn[i]);
        glUniform1i(p->tex[i], i);
    }
    p->texcube = glGetUniformLocation(g, "texcube0");
    glUniform1i(p->texcube, 3);
}

static const char *SCAN_VS =
    "#version 330 core\n"
    "out vec2 uv;\n"
    "void main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1); uv = p;\n"
    "  gl_Position = vec4(p * 2.0 - 1.0, 0.0, 1.0); }\n";
static const char *SCAN_FS =
    "#version 330 core\n"
    "in vec2 uv; out vec4 o; uniform sampler2D img; uniform int rot;\n"
    "void main(){ vec2 t = rot == 0 ? uv : rot == 1 ? vec2(uv.y, 1.0 - uv.x) : vec2(uv.y, uv.x);\n"
    "  o = vec4(texture(img, t).rgb, 1.0); }\n";

static void reset_state(void);

int render_ready(void) {
    if (R.ready) return 1;
    if (R.failed || !SDL_GL_GetCurrentContext()) return 0;
    lock();
    if (R.ready) { unlock(); return 1; }
    g_trace = getenv("ALBW_RENDER_TRACE") != NULL;
    int missing = 0;
#define RGL_LOAD(ret, name, args) \
    rgl##name = (ret(*) args)SDL_GL_GetProcAddress("gl" #name); \
    if (!rgl##name) { rlog("GL: missing gl%s", #name); missing++; }
    RGL_FUNCS(RGL_LOAD)
#undef RGL_LOAD
    if (missing) {
        R.failed = true;
        unlock();
        return 0;
    }
    const char *s = getenv("ALBW_RENDER_SCALE");
    if (s && atoi(s) >= 1 && atoi(s) <= 8) R.scale = atoi(s);
    s = getenv("ALBW_SCANOUT");
    R.scanout_mode = !s ? 0 : !strcmp(s, "direct") ? 1 : !strcmp(s, "rot") ? 2 : !strcmp(s, "rotflip") ? 3 : 0;
    for (int i = 0; i < RPROG_COUNT; i++) program_build(i);
    R.scan_prog = gl_program(SCAN_VS, SCAN_FS);
    glUseProgram(R.scan_prog);
    glUniform1i(glGetUniformLocation(R.scan_prog, "img"), 0);
    R.scan_rot = glGetUniformLocation(R.scan_prog, "rot");
    glGenVertexArrays(1, &R.vao);
    glGenBuffers(1, &R.vbo);
    glGenBuffers(1, &R.ibo);
    glBindVertexArray(R.vao);
    glBindBuffer(GL_ARRAY_BUFFER, R.vbo);
    glBufferData(GL_ARRAY_BUFFER, STREAM_BYTES, NULL, GL_STREAM_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, R.ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, STREAM_BYTES / 4, NULL, GL_STREAM_DRAW);
    glBindVertexArray(0);
    reset_state();
    R.ready = true;
    rlog("OpenGL renderer ready (internal scale %d)", R.scale);
    unlock();
    return 1;
}

/* ================================================================== surfaces */

static void surface_alloc(Surface *s) {
    int W = s->w * R.scale, H = s->h * R.scale;
    glGenTextures(1, &s->tex);
    glBindTexture(GL_TEXTURE_2D, s->tex);
    if (s->depth) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH24_STENCIL8, W, H, 0, GL_DEPTH_STENCIL, GL_UNSIGNED_INT_24_8, NULL);
    } else {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, W, H, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
        /* framebuffer formats without alpha read back alpha = 1 when sampled */
        if (s->fmt == RFMT_RGB8 || s->fmt == RFMT_RGB565) glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_A, GL_ONE);
    }
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glGenFramebuffers(1, &s->fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, s->fbo);
    if (s->depth) {
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_TEXTURE_2D, s->tex, 0);
        GLenum none = 0;
        rglDrawBuffers(1, &none);
    } else {
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, s->tex, 0);
    }
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        rlog("surface %#lx (%dx%d %s) FBO incomplete", (unsigned long)s->addr, s->w, s->h, s->depth ? "depth" : "colour");
    glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
    R.st.surfaces++;
}

static void surface_free(Surface *s) {
    if (s->fbo) rglDeleteFramebuffers(1, &s->fbo);
    if (s->tex) glDeleteTextures(1, &s->tex);
    s->fbo = s->tex = 0;
}

static void fbo_forget(Surface *s) {
    for (size_t i = 0; i < R.nfbo;) {
        if (R.fbos[i].c == s || R.fbos[i].d == s) {
            if (R.fbos[i].fbo == R.cur_fbo) R.cur_fbo = 0;
            rglDeleteFramebuffers(1, &R.fbos[i].fbo);
            R.fbos[i] = R.fbos[--R.nfbo];
        } else {
            i++;
        }
    }
    if (R.cur_c == s) R.cur_c = NULL;
    if (R.cur_d == s) R.cur_d = NULL;
}

/* surface whose memory range contains addr (exact start preferred) */
static Surface *surface_at(uintptr_t addr, int depth) {
    Surface *best = NULL;
    for (size_t i = 0; i < R.nsurf; i++) {
        Surface *s = R.surf[i];
        if (depth >= 0 && s->depth != (depth != 0)) continue;
        if (s->addr == addr) return s;
        if (!best && addr > s->addr && addr < s->addr + s->bytes) best = s;
    }
    return best;
}

static void clear_surface(Surface *s, uint32_t value, int bits);

/* surface at addr with this size/format, (re)created as needed */
static Surface *surface_get(uintptr_t addr, int w, int h, int fmt, bool depth) {
    if (!addr || w <= 0 || h <= 0 || w > 4096 || h > 4096) return NULL;
    for (size_t i = 0; i < R.nsurf; i++) {
        Surface *s = R.surf[i];
        if (s->addr != addr || s->depth != depth) continue;
        if (s->w == w && s->h == h && s->fmt == fmt) return s;
        /* same memory, new shape: recreate */
        fbo_forget(s);
        surface_free(s);
        s->w = w; s->h = h; s->fmt = fmt;
        s->bytes = (size_t)w * h * (depth ? depth_bytes(fmt) : fmt_bytes(fmt));
        surface_alloc(s);
        return s;
    }
    Surface *s = calloc(1, sizeof *s);
    if (!s) abort();
    s->addr = addr; s->w = w; s->h = h; s->fmt = fmt; s->depth = depth;
    s->bytes = (size_t)w * h * (depth ? depth_bytes(fmt) : fmt_bytes(fmt));
    surface_alloc(s);
    VEC_PUSH(R.surf, R.nsurf, R.capsurf);
    R.surf[R.nsurf++] = s;
    if (g_trace) rlog("new %s surface %#lx %dx%d fmt %d", depth ? "depth" : "colour", (unsigned long)addr, w, h, fmt);
    /* a fill that happened before the surface existed, else a defined start (black / far) */
    unsigned k = 1;
    for (; k <= 16; k++) {
        const PendingFill *f = &R.pend[(R.pend_next - k) % 16];
        if (f->end && addr >= f->start && addr < f->end) { clear_surface(s, f->value, f->bits); break; }
    }
    if (k > 16) {
        clear_surface(s, depth ? 0x00FFFFFFu : 0x000000FFu, 32);
        R.st.fills--; /* not a game fill */
    }
    return s;
}

static GLuint fbo_for(Surface *c, Surface *d) {
    if (c && !d) return c->fbo;
    if (d && !c) return d->fbo;
    if (!c) return 0;
    for (size_t i = 0; i < R.nfbo; i++)
        if (R.fbos[i].c == c && R.fbos[i].d == d) return R.fbos[i].fbo;
    if (c->w != d->w || c->h != d->h) {
        WARN_ONCE("colour %dx%d and depth %dx%d buffers differ in size: depth ignored", c->w, c->h, d->w, d->h);
        return c->fbo;
    }
    FboEnt e = {0, c, d};
    glGenFramebuffers(1, &e.fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, e.fbo);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, c->tex, 0);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_TEXTURE_2D, d->tex, 0);
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) rlog("combined FBO incomplete");
    VEC_PUSH(R.fbos, R.nfbo, R.capfbo);
    R.fbos[R.nfbo++] = e;
    return e.fbo;
}

/* ================================================================== fills */

/* fill pattern -> colour, as packed by the game's clear code (003CB588 / 003CB5F0) */
static void fill_color(int fmt, uint32_t v, int bits, float c[4]) {
    if (fmt < 0) fmt = bits == 32 ? RFMT_RGBA8 : bits == 24 ? RFMT_RGB8 : RFMT_RGB565;
    switch (fmt) {
    case RFMT_RGBA8: c[0] = (v >> 24 & 255) / 255.f; c[1] = (v >> 16 & 255) / 255.f; c[2] = (v >> 8 & 255) / 255.f; c[3] = (v & 255) / 255.f; break;
    case RFMT_RGB8: c[0] = (v >> 16 & 255) / 255.f; c[1] = (v >> 8 & 255) / 255.f; c[2] = (v & 255) / 255.f; c[3] = 1; break;
    case RFMT_RGB565: c[0] = (v >> 11 & 31) / 31.f; c[1] = (v >> 5 & 63) / 63.f; c[2] = (v & 31) / 31.f; c[3] = 1; break;
    case RFMT_RGB5A1: c[0] = (v >> 11 & 31) / 31.f; c[1] = (v >> 6 & 31) / 31.f; c[2] = (v >> 1 & 31) / 31.f; c[3] = (float)(v & 1); break;
    default: c[0] = (v >> 12 & 15) / 15.f; c[1] = (v >> 8 & 15) / 15.f; c[2] = (v >> 4 & 15) / 15.f; c[3] = (v & 15) / 15.f; break;
    }
}

static void clear_surface(Surface *s, uint32_t value, int bits) {
    glBindFramebuffer(GL_FRAMEBUFFER, s->fbo);
    glDisable(GL_SCISSOR_TEST);
    if (s->depth) {
        float depth;
        int stencil = 0;
        if (s->fmt == RDEPTH_D16) depth = (value & 0xFFFF) / 65535.f;
        else depth = (value & 0xFFFFFF) / 16777215.f;
        if (s->fmt == RDEPTH_D24S8) stencil = (int)(value >> 24);
        glDepthMask(GL_TRUE);
        rglStencilMask(0xFF);
        rglClearBufferfi(GL_DEPTH_STENCIL, 0, depth, stencil);
    } else {
        float c[4];
        fill_color(s->fmt, value, bits, c);
        rglColorMask(1, 1, 1, 1);
        rglClearBufferfv(GL_COLOR, 0, c);
    }
    glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
    R.frag_dirty = true; /* masks / scissor changed */
    R.st.fills++;
}

int render_fill(const void *start, uint32_t size, uint32_t value, int bits) {
    if (!start || !size || !render_ready()) return 0;
    lock();
    uintptr_t a = (uintptr_t)start;
    int done = 0;
    for (size_t i = 0; i < R.nsurf; i++) {
        Surface *s = R.surf[i];
        if (s->addr >= a && s->addr < a + size) { clear_surface(s, value, bits); done = 1; }
    }
    if (!done) {
        Surface *s = surface_at(a, -1);
        if (s) { clear_surface(s, value, bits); done = 1; }
    }
    if (!done) {
        PendingFill *f = &R.pend[R.pend_next++ % 16];
        f->start = a; f->end = a + size; f->value = value; f->bits = bits;
    }
    unlock();
    return done;
}

/* ================================================================== display images / transfers */

static Display *display_at(uintptr_t a) {
    for (size_t i = 0; i < R.ndisp; i++)
        if (a >= R.disp[i].mem && a < R.disp[i].mem + R.disp[i].bytes) return &R.disp[i];
    return NULL;
}

void render_display_register(const void *mem, size_t bytes, int w, int h, int fmt) {
    lock();
    Display *d = display_at((uintptr_t)mem);
    if (!d) {
        VEC_PUSH(R.disp, R.ndisp, R.capdisp);
        d = &R.disp[R.ndisp++];
        memset(d, 0, sizeof *d);
    }
    d->mem = (uintptr_t)mem; d->bytes = bytes; d->w = w; d->h = h; d->fmt = fmt; d->valid = false;
    unlock();
}

void render_display_unregister(const void *mem) {
    lock();
    for (size_t i = 0; i < R.ndisp; i++)
        if (R.disp[i].mem == (uintptr_t)mem) {
            if (R.disp[i].img && render_ready()) { surface_free(R.disp[i].img); free(R.disp[i].img); }
            R.disp[i] = R.disp[--R.ndisp];
            break;
        }
    unlock();
}

static Surface *display_image(Display *d, int w, int h, int fmt) {
    if (d->img && (d->img->w != w || d->img->h != h)) { surface_free(d->img); free(d->img); d->img = NULL; }
    if (!d->img) {
        d->img = calloc(1, sizeof *d->img);
        if (!d->img) abort();
        d->img->addr = d->mem; d->img->w = w; d->img->h = h; d->img->fmt = fmt;
        d->img->bytes = d->bytes;
        surface_alloc(d->img);
    }
    return d->img;
}

int render_transfer(const void *src, int sw, int sh, int sfmt, void *dst, int dw, int dh, int dfmt, int flip) {
    if (!src || !dst || sw <= 0 || sh <= 0 || dw <= 0 || dh <= 0 || !render_ready()) return 0;
    lock();
    Surface *s = surface_at((uintptr_t)src, 0);
    if (!s || s->addr != (uintptr_t)src) s = surface_get((uintptr_t)src, sw, sh, sfmt, false);
    Display *d = display_at((uintptr_t)dst);
    Surface *t = d ? display_image(d, dw, dh, dfmt) : surface_get((uintptr_t)dst, dw, dh, dfmt, false);
    int ok = 0;
    if (s && t && s != t) {
        int S = R.scale;
        int bw = sw < s->w ? sw : s->w, bh = sh < s->h ? sh : s->h;
        glDisable(GL_SCISSOR_TEST);
        rglColorMask(1, 1, 1, 1);
        glBindFramebuffer(GL_READ_FRAMEBUFFER, s->fbo);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, t->fbo);
        /* memory row order is kept (flip mirrors it); GL rows follow memory rows bottom-up, so a
         * plain blit keeps orientation. AA downscale = linear filter on the size ratio. */
        int y0 = flip ? dh * S : 0, y1 = flip ? 0 : dh * S;
        rglBlitFramebuffer(0, 0, bw * S, bh * S, 0, y0, dw * S, y1, GL_COLOR_BUFFER_BIT,
                           (bw != dw || bh != dh) ? GL_LINEAR : GL_NEAREST);
        glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
        R.frag_dirty = true;
        if (d) d->valid = true;
        ok = 1;
        R.st.transfers++;
        if (g_trace) rlog("transfer %#lx %dx%d -> %s %#lx %dx%d flip %d", (unsigned long)(uintptr_t)src, sw, sh,
                          d ? "display" : "surface", (unsigned long)(uintptr_t)dst, dw, dh, flip);
    }
    unlock();
    return ok;
}

void render_block_copy(const void *src, void *dst, uint32_t size) {
    render_mem_written(dst, size);
    if (!render_ready()) return;
    lock();
    Surface *s = surface_at((uintptr_t)src, 0);
    if (s && s->addr == (uintptr_t)src && size >= s->bytes / 2) {
        Display *d = display_at((uintptr_t)dst);
        Surface *t = d ? display_image(d, s->w, s->h, s->fmt) : surface_get((uintptr_t)dst, s->w, s->h, s->fmt, false);
        if (t && t != s) {
            glDisable(GL_SCISSOR_TEST);
            rglColorMask(1, 1, 1, 1);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, s->fbo);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, t->fbo);
            rglBlitFramebuffer(0, 0, s->w * R.scale, s->h * R.scale, 0, 0, t->w * R.scale, t->h * R.scale,
                               GL_COLOR_BUFFER_BIT, GL_NEAREST);
            glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
            R.frag_dirty = true;
            if (d) d->valid = true;
        }
    }
    unlock();
}

int render_scanout(int screen, const void *mem) {
    if (!mem || !render_ready()) return 0;
    lock();
    Display *d = display_at((uintptr_t)mem);
    int ok = 0;
    if (d && d->valid && d->img) {
        GLint fbo = 0;
        glGetIntegerv(0x8CA6 /* GL_DRAW_FRAMEBUFFER_BINDING */, &fbo);
        int sw, sh;
        plat_screen_size(screen, &sw, &sh);
        glViewport(0, 0, sw, sh);
        glDisable(GL_SCISSOR_TEST);
        glDisable(GL_DEPTH_TEST);
        glDisable(GL_BLEND);
        glDisable(GL_CULL_FACE);
        glDisable(GL_COLOR_LOGIC_OP);
        glDisable(GL_STENCIL_TEST);
        rglColorMask(1, 1, 1, 1);
        glUseProgram(R.scan_prog);
        int rot = R.scanout_mode == 1 ? 0 : R.scanout_mode == 2 ? 1 : R.scanout_mode == 3 ? 2
                : d->img->w < d->img->h ? 1 : 0; /* portrait buffer = rotated LCD */
        glUniform1i(R.scan_rot, rot);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, d->img->tex);
        glBindVertexArray(R.vao);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        glBindVertexArray(0);
        R.frag_dirty = true;
        R.tev_dirty = true;
        ok = 1;
    }
    unlock();
    return ok;
}

int render_read_surface(uintptr_t color_addr, uint8_t *rgba, int *w, int *h) {
    if (!render_ready()) return 0;
    lock();
    Surface *s = surface_at(color_addr, 0);
    Display *d = s ? NULL : display_at(color_addr);
    if (!s && d && d->img) s = d->img;
    int ok = 0;
    if (s) {
        *w = s->w * R.scale;
        *h = s->h * R.scale;
        if (rgba) {
            glBindFramebuffer(GL_READ_FRAMEBUFFER, s->fbo);
            rglReadPixels(0, 0, *w, *h, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
            glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
        }
        ok = 1;
    }
    unlock();
    return ok;
}

/* ================================================================== textures */

static uint64_t hash_bytes(const void *p, size_t n) {
    const uint64_t *q = p;
    uint64_t h = 0xcbf29ce484222325ull ^ n;
    size_t i = 0;
    for (; i + 8 <= n; i += 8) h = (h ^ q[i / 8]) * 0x100000001b3ull;
    for (; i < n; i++) h = (h ^ ((const uint8_t *)p)[i]) * 0x100000001b3ull;
    return h;
}

void render_mem_written(const void *addr, size_t size) {
    if (!addr || !size) return;
    uintptr_t a = (uintptr_t)addr, e = a + size;
    lock();
    for (size_t i = 0; i < R.ntex; i++) {
        TexEnt *t = &R.tex[i];
        size_t bytes = texfmt_size(t->fmt, t->w, t->h) * (t->cube ? 1 : 2); /* + mip chain bound */
        if (t->cube) {
            for (int f = 0; f < 6; f++)
                if (t->faces[f] < e && t->faces[f] + bytes > a) t->dirty = true;
        } else if (t->addr < e && t->addr + bytes > a) {
            t->dirty = true;
        }
    }
    unlock();
}

static size_t level_bytes(int fmt, int w, int h, int levels) {
    size_t n = 0;
    for (int l = 0; l < levels; l++) {
        int lw = w >> l, lh = h >> l;
        if (lw < 8 || lh < 8) break;
        n += texfmt_size(fmt, lw, lh);
    }
    return n;
}

static void tex_upload(TexEnt *t) {
    static uint8_t *buf;
    static size_t cap;
    size_t need = (size_t)t->w * t->h * 4;
    if (need > cap) { buf = xrealloc(buf, need); cap = need; }
    GLenum target = t->cube ? GL_TEXTURE_CUBE_MAP : GL_TEXTURE_2D;
    glBindTexture(target, t->tex);
    int nfaces = t->cube ? 6 : 1;
    int levels = 0;
    for (int f = 0; f < nfaces; f++) {
        const uint8_t *src = (const uint8_t *)(t->cube ? t->faces[f] : t->addr);
        if (!src) continue;
        int l = 0;
        for (; l < t->levels; l++) {
            int lw = t->w >> l, lh = t->h >> l;
            if (lw < 8 || lh < 8) break;
            if (tex_decode(t->fmt, src, lw, lh, buf)) break;
            glTexImage2D(t->cube ? (GLenum)(GL_TEXTURE_CUBE_MAP_POSITIVE_X + f) : GL_TEXTURE_2D, l, GL_RGBA8, lw, lh, 0,
                         GL_RGBA, GL_UNSIGNED_BYTE, buf);
            src += texfmt_size(t->fmt, lw, lh);
        }
        levels = l;
    }
    glTexParameteri(target, GL_TEXTURE_BASE_LEVEL, 0);
    glTexParameteri(target, GL_TEXTURE_MAX_LEVEL, levels > 0 ? levels - 1 : 0);
    t->dirty = false;
    R.st.tex_uploads++;
}

static TexEnt *tex_lookup(const RTexUnit *u) {
    bool cube = u->type == 1 || u->type == 4;
    int levels = (u->min == 0 || u->min == 3) ? 1 : u->max_level + 1;
    if (levels < 1) levels = 1;
    for (size_t i = 0; i < R.ntex; i++) {
        TexEnt *t = &R.tex[i];
        if (t->addr == u->addr && t->w == u->w && t->h == u->h && t->fmt == u->fmt && t->cube == cube &&
            (!cube || !memcmp(t->faces, u->cube, sizeof t->faces))) {
            if (t->levels < levels) { t->levels = levels; t->dirty = true; }
            return t;
        }
    }
    VEC_PUSH(R.tex, R.ntex, R.captex);
    TexEnt *t = &R.tex[R.ntex++];
    memset(t, 0, sizeof *t);
    t->addr = u->addr; t->w = u->w; t->h = u->h; t->fmt = u->fmt; t->cube = cube; t->levels = levels;
    memcpy(t->faces, u->cube, sizeof t->faces);
    t->p_wrap_s = t->p_wrap_t = t->p_min = t->p_mag = -1;
    glGenTextures(1, &t->tex);
    t->dirty = true;
    return t;
}

static const GLenum WRAP[4] = {GL_CLAMP_TO_EDGE, GL_CLAMP_TO_BORDER, GL_REPEAT, GL_MIRRORED_REPEAT};
static const GLenum MINF[6] = {GL_NEAREST, GL_NEAREST_MIPMAP_NEAREST, GL_NEAREST_MIPMAP_LINEAR, GL_LINEAR,
                               GL_LINEAR_MIPMAP_NEAREST, GL_LINEAR_MIPMAP_LINEAR};

static void sampler_params(GLenum target, const RTexUnit *u, int *ws, int *wt, int *mi, int *ma, int levels) {
    int s = u->wrap_s & 3, t = u->wrap_t & 3, m = u->min < 6 ? u->min : 3, g = u->mag & 1;
    if (levels <= 1) m = (m >= 3) ? 3 : 0; /* no mip chain: drop the mip part */
    if (*ws != s) { glTexParameteri(target, GL_TEXTURE_WRAP_S, (GLint)WRAP[s]); *ws = s; }
    if (*wt != t) { glTexParameteri(target, GL_TEXTURE_WRAP_T, (GLint)WRAP[t]); *wt = t; }
    if (*mi != m) { glTexParameteri(target, GL_TEXTURE_MIN_FILTER, (GLint)MINF[m]); *mi = m; }
    if (*ma != g) { glTexParameteri(target, GL_TEXTURE_MAG_FILTER, g ? GL_LINEAR : GL_NEAREST); *ma = g; }
    float bc[4] = {u->border[0] / 255.f, u->border[1] / 255.f, u->border[2] / 255.f, u->border[3] / 255.f};
    if (s == 1 || t == 1) rglTexParameterfv(target, GL_TEXTURE_BORDER_COLOR, bc);
    rglTexParameterf(target, GL_TEXTURE_LOD_BIAS, u->lod_bias);
}

/* bind texture unit i for the next draw */
static void bind_unit(int i) {
    const RTexUnit *u = &R.unit[i];
    glActiveTexture(GL_TEXTURE0 + (GLenum)i);
    if (!(R.tex_enable >> i & 1) || !u->addr || u->type == 5 || !u->w || !u->h) {
        glBindTexture(GL_TEXTURE_2D, 0);
        return;
    }
    bool cube = u->type == 1 || u->type == 4;
    if (!cube) {
        Surface *s = surface_at(u->addr, 0); /* render-to-texture */
        if (!s) s = surface_at(u->addr, 1);
        if (s && s->addr == u->addr) {
            glBindTexture(GL_TEXTURE_2D, s->tex);
            int a = -1, b = -1, c = -1, d = -1;
            sampler_params(GL_TEXTURE_2D, u, &a, &b, &c, &d, 1);
            return;
        }
    }
    TexEnt *t = tex_lookup(u);
    t->used_frame = R.frame;
    if (!t->dirty && t->checked_frame != R.frame) {
        /* CPU-written textures (font sheets...) are not announced: re-hash small ones once a frame */
        size_t n = level_bytes(t->fmt, t->w, t->h, 1);
        if (!cube && n <= 256 * 1024) {
            uint64_t h = hash_bytes((const void *)t->addr, n);
            if (h != t->hash) { t->hash = h; t->dirty = true; }
        }
        t->checked_frame = R.frame;
    }
    if (t->dirty) {
        if (!cube) t->hash = hash_bytes((const void *)t->addr, level_bytes(t->fmt, t->w, t->h, 1));
        tex_upload(t);
        t->checked_frame = R.frame;
        t->p_wrap_s = t->p_wrap_t = t->p_min = t->p_mag = -1;
    }
    GLenum target = cube ? GL_TEXTURE_CUBE_MAP : GL_TEXTURE_2D;
    if (cube) {
        glActiveTexture(GL_TEXTURE0 + 3);
        glBindTexture(GL_TEXTURE_CUBE_MAP, t->tex);
    } else {
        glBindTexture(GL_TEXTURE_2D, t->tex);
    }
    sampler_params(target, u, &t->p_wrap_s, &t->p_wrap_t, &t->p_min, &t->p_mag, t->levels);
}

/* ================================================================== pipeline state */

static void reset_state(void) {
    memset(&R.frag, 0, sizeof R.frag);
    R.frag.color_mask = 15;
    R.frag.depth_func = 1;
    R.frag.alpha_func = 1;
    R.frag.stencil_func = 1;
    R.frag.src_rgb = R.frag.src_a = 1;
    R.frag.depth_near = 0.f;
    R.frag.depth_far = 1.f;
    R.frag_dirty = true;
    memset(&R.tev, 0, sizeof R.tev);
    for (int i = 0; i < 6; i++) {
        RTevStage *s = &R.tev.stage[i];
        /* default combiner: stage 0 = primary colour, others pass the previous result */
        s->src_rgb[0] = s->src_a[0] = i == 0 ? 0 : 15;
    }
    R.tev_dirty = true;
    R.tex_enable = 0;
    R.prog_id = RPROG_CLIP;
    for (int i = 0; i < RENDER_MAX_ATTRIBS; i++) {
        memset(&R.attr[i], 0, sizeof R.attr[i]);
        R.attr[i].k[3] = 1;
    }
    R.vsf_dirty = true;
}

static const GLenum TESTF[8] = {GL_NEVER, GL_ALWAYS, GL_EQUAL, GL_NOTEQUAL, GL_LESS, GL_LEQUAL, GL_GREATER, GL_GEQUAL};
static const GLenum BEQ[5] = {GL_FUNC_ADD, GL_FUNC_SUBTRACT, GL_FUNC_REVERSE_SUBTRACT, GL_MIN, GL_MAX};
static const GLenum BF[15] = {GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR, GL_DST_COLOR,
                              GL_ONE_MINUS_DST_COLOR, GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA,
                              GL_ONE_MINUS_DST_ALPHA, GL_CONSTANT_COLOR, GL_ONE_MINUS_CONSTANT_COLOR,
                              GL_CONSTANT_ALPHA, GL_ONE_MINUS_CONSTANT_ALPHA, GL_SRC_ALPHA_SATURATE};
static const GLenum SOP[8] = {GL_KEEP, GL_ZERO, GL_REPLACE, GL_INCR, GL_DECR, GL_INVERT, GL_INCR_WRAP, GL_DECR_WRAP};
/* PICA logic op order -> GL (GL_CLEAR + n) */
static const uint8_t LOGIC[16] = {0x0, 0x1, 0x2, 0x3, 0xF, 0xC, 0x5, 0xA, 0xE, 0x7, 0x8, 0x6, 0x9, 0x4, 0xB, 0xD};

static void apply_frag(void) {
    const RFragState *f = &R.frag;
    if (f->logic_enable) {
        glDisable(GL_BLEND);
        glEnable(GL_COLOR_LOGIC_OP);
        rglLogicOp(GL_CLEAR + LOGIC[f->logic_op & 15]);
    } else {
        glDisable(GL_COLOR_LOGIC_OP);
        if (f->blend_enable) {
            glEnable(GL_BLEND);
            rglBlendEquationSeparate(BEQ[f->eq_rgb < 5 ? f->eq_rgb : 0], BEQ[f->eq_a < 5 ? f->eq_a : 0]);
            rglBlendFuncSeparate(BF[f->src_rgb % 15], BF[f->dst_rgb % 15], BF[f->src_a % 15], BF[f->dst_a % 15]);
            rglBlendColor(f->blend_color[0] / 255.f, f->blend_color[1] / 255.f, f->blend_color[2] / 255.f,
                          f->blend_color[3] / 255.f);
        } else {
            glDisable(GL_BLEND);
        }
    }
    /* PICA writes depth whenever depth writes are on, even with the test off */
    if (f->depth_test || f->depth_write) {
        glEnable(GL_DEPTH_TEST);
        glDepthFunc(f->depth_test ? TESTF[f->depth_func & 7] : GL_ALWAYS);
    } else {
        glDisable(GL_DEPTH_TEST);
    }
    glDepthMask(f->depth_write ? GL_TRUE : GL_FALSE);
    rglColorMask(f->color_mask & 1, f->color_mask >> 1 & 1, f->color_mask >> 2 & 1, f->color_mask >> 3 & 1);
    if (f->stencil_test) {
        glEnable(GL_STENCIL_TEST);
        rglStencilFunc(TESTF[f->stencil_func & 7], f->stencil_ref, f->stencil_mask);
        rglStencilOp(SOP[f->stencil_fail & 7], SOP[f->stencil_zfail & 7], SOP[f->stencil_zpass & 7]);
        rglStencilMask(f->stencil_write);
    } else {
        glDisable(GL_STENCIL_TEST);
    }
    if (f->cull) {
        glEnable(GL_CULL_FACE);
        rglFrontFace(GL_CCW);
        rglCullFace(f->cull == 1 ? GL_FRONT : GL_BACK);
    } else {
        glDisable(GL_CULL_FACE);
    }
    float n = f->depth_near, fa = f->depth_far;
    if (n == fa) { n = 0; fa = 1; }
    rglDepthRange(n < 0 ? 0 : n > 1 ? 1 : n, fa < 0 ? 0 : fa > 1 ? 1 : fa);
    if (f->poly_offset_enable) {
        glEnable(GL_POLYGON_OFFSET_FILL);
        rglPolygonOffset(0.f, f->poly_offset_units);
    } else {
        glDisable(GL_POLYGON_OFFSET_FILL);
    }
    if (R.scissor) {
        glEnable(GL_SCISSOR_TEST);
        glScissor(R.sc[0] * R.scale, R.sc[1] * R.scale, R.sc[2] * R.scale, R.sc[3] * R.scale);
    } else {
        glDisable(GL_SCISSOR_TEST);
    }
    glViewport(R.vp[0] * R.scale, R.vp[1] * R.scale, R.vp[2] * R.scale, R.vp[3] * R.scale);
    R.frag_dirty = false;
}

/* ================================================================== immediate API */

void render_set_target(uintptr_t color, int cfmt, uintptr_t depth, int dfmt, int w, int h) {
    if (!render_ready()) return;
    lock();
    Surface *c = color ? surface_get(color, w, h, cfmt, false) : R.cur_c;
    Surface *d = depth ? surface_get(depth, w, h, dfmt, true) : R.cur_d;
    if (color) R.cur_c = c;
    if (depth) R.cur_d = d;
    R.cur_fbo = fbo_for(R.cur_c, R.cur_d);
    glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
    R.frag_dirty = true;
    unlock();
}

void render_set_viewport(int x, int y, int w, int h) {
    R.vp[0] = x; R.vp[1] = y; R.vp[2] = w; R.vp[3] = h;
    R.frag_dirty = true;
}

void render_set_scissor(int enable, int x, int y, int w, int h) {
    R.scissor = enable != 0;
    R.sc[0] = x; R.sc[1] = y; R.sc[2] = w > 0 ? w : 0; R.sc[3] = h > 0 ? h : 0;
    R.frag_dirty = true;
}

RFragState *render_frag_state(void) { return &R.frag; }
void render_frag_dirty(void) { R.frag_dirty = true; }

void render_set_texunit(int unit, const RTexUnit *t) {
    if (unit < 0 || unit > 2) return;
    R.unit[unit] = *t;
}
void render_set_texconfig(int enable_mask, int tex2_from_tc1) {
    R.tex_enable = enable_mask & 7;
    R.tex2_tc1 = tex2_from_tc1 != 0;
}
void render_set_tev(const RTev *t) { R.tev = *t; R.tev_dirty = true; }
void render_set_tev_const(int mask, const uint8_t rgba[4]) {
    for (int i = 0; i < 6; i++)
        if (mask >> i & 1) memcpy(R.tev.stage[i].konst, rgba, 4);
    R.tev_dirty = true;
}
void render_set_program(int prog) {
    if (prog < 0 || prog >= RPROG_COUNT) prog = RPROG_CLIP;
    if (prog != R.prog_id) { R.prog_id = prog; R.tev_dirty = R.vsf_dirty = true; }
}
void render_set_vs_float(int reg, const float *v, int count) {
    if (reg < 0 || reg >= RENDER_VS_FLOATS) return;
    if (reg + count > RENDER_VS_FLOATS) count = RENDER_VS_FLOATS - reg;
    memcpy(&R.vsf[reg * 4], v, (size_t)count * 4 * sizeof(float));
    R.vsf_dirty = true;
}
void render_set_vs_bool(uint16_t mask) { R.vsb = mask; R.vsf_dirty = true; }
void render_set_attrib(int reg, const void *ptr, int type, int count, int stride) {
    if (reg < 0 || reg >= RENDER_MAX_ATTRIBS) return;
    R.attr[reg].ptr = (uintptr_t)ptr;
    R.attr[reg].type = type & 3;
    R.attr[reg].count = count < 1 ? 1 : count > 4 ? 4 : count;
    R.attr[reg].stride = stride;
    R.attr[reg].array = ptr != NULL;
}
void render_set_attrib_const(int reg, const float v[4]) {
    if (reg < 0 || reg >= RENDER_MAX_ATTRIBS) return;
    R.attr[reg].array = false;
    memcpy(R.attr[reg].k, v, sizeof R.attr[reg].k);
}
void render_disable_attribs(void) {
    for (int i = 0; i < RENDER_MAX_ATTRIBS; i++) R.attr[i].array = false;
}

static void upload_uniforms(Program *p) {
    if (R.vsf_dirty || R.tev_dirty) {
        glUniform4fv(p->c, RENDER_VS_FLOATS, R.vsf);
        glUniform1i(p->b, R.vsb);
    }
    if (R.tev_dirty) {
        GLint src[24], cmb[24];
        float k[24];
        for (int i = 0; i < 6; i++) {
            const RTevStage *s = &R.tev.stage[i];
            src[i * 4 + 0] = s->src_rgb[0] | s->src_rgb[1] << 4 | s->src_rgb[2] << 8;
            src[i * 4 + 1] = s->src_a[0] | s->src_a[1] << 4 | s->src_a[2] << 8;
            src[i * 4 + 2] = s->op_rgb[0] | s->op_rgb[1] << 4 | s->op_rgb[2] << 8;
            src[i * 4 + 3] = s->op_a[0] | s->op_a[1] << 4 | s->op_a[2] << 8;
            cmb[i * 4 + 0] = s->combine_rgb;
            cmb[i * 4 + 1] = s->combine_a;
            cmb[i * 4 + 2] = s->scale_rgb;
            cmb[i * 4 + 3] = s->scale_a;
            for (int c = 0; c < 4; c++) k[i * 4 + c] = s->konst[c] / 255.f;
        }
        rglUniform4iv(p->tev_src, 6, src);
        rglUniform4iv(p->tev_cmb, 6, cmb);
        glUniform4fv(p->tev_const, 6, k);
        rglUniform2i(p->tev_buf, R.tev.buf_update_rgb, R.tev.buf_update_a);
        rglUniform4f(p->tev_bufcol, R.tev.buf_color[0] / 255.f, R.tev.buf_color[1] / 255.f,
                     R.tev.buf_color[2] / 255.f, R.tev.buf_color[3] / 255.f);
    }
    GLint at[4] = {R.frag.alpha_test, R.frag.alpha_func, R.frag.alpha_ref, 0};
    rglUniform4iv(p->alpha, 1, at);
    GLint tc[4] = {R.tex_enable, R.tex2_tc1, (R.unit[0].type == 1 || R.unit[0].type == 4) ? 1 : R.unit[0].type == 3 ? 2 : 0, 0};
    rglUniform4iv(p->texcfg, 1, tc);
    R.vsf_dirty = R.tev_dirty = false;
}

/* append to a streaming buffer, orphaning it when full; returns the offset */
static size_t stream(GLenum target, GLuint buf, size_t *off, size_t cap, const void *data, size_t n) {
    glBindBuffer(target, buf);
    size_t o = (*off + 15) & ~(size_t)15;
    if (o + n > cap) {
        glBufferData(target, (GLsizeiptr)cap, NULL, GL_STREAM_DRAW);
        o = 0;
    }
    glBufferSubData(target, (GLintptr)o, (GLsizeiptr)n, data);
    *off = o + n;
    return o;
}

static const int ATTR_SIZE[4] = {1, 1, 2, 4};
static const GLenum ATTR_GL[4] = {GL_BYTE, GL_UNSIGNED_BYTE, GL_SHORT, GL_FLOAT};
static const GLenum PRIM_GL[3] = {GL_TRIANGLES, GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN};

static bool draw_setup(uint32_t vmin, uint32_t vmax) {
    if (!R.cur_fbo) { WARN_ONCE("draw without a render target (dropped)"); return false; }
    /* the platform layer / scan-out rebind other framebuffers and state between frames */
    glBindFramebuffer(GL_FRAMEBUFFER, R.cur_fbo);
    if (R.frag_dirty) apply_frag();
    Program *p = &R.progs[R.prog_id];
    glUseProgram(p->prog);
    R.tev_dirty = R.tev_dirty || true; /* uniforms are per program: always refresh (cheap) */
    R.vsf_dirty = true;
    upload_uniforms(p);
    for (int i = 0; i < 3; i++) bind_unit(i);
    glBindVertexArray(R.vao);
    uint32_t nv = vmax - vmin + 1;
    for (int i = 0; i < RENDER_MAX_ATTRIBS; i++) {
        if (!R.attr[i].array) {
            rglDisableVertexAttribArray((GLuint)i);
            rglVertexAttrib4f((GLuint)i, R.attr[i].k[0], R.attr[i].k[1], R.attr[i].k[2], R.attr[i].k[3]);
            continue;
        }
        int esz = ATTR_SIZE[R.attr[i].type] * R.attr[i].count;
        int stride = R.attr[i].stride ? R.attr[i].stride : esz;
        size_t n = (size_t)(nv - 1) * (size_t)stride + (size_t)esz;
        if (n > STREAM_BYTES / 2) { WARN_ONCE("vertex range too large (%zu bytes)", n); return false; }
        size_t o = stream(GL_ARRAY_BUFFER, R.vbo, &R.vbo_off, STREAM_BYTES,
                          (const uint8_t *)R.attr[i].ptr + (size_t)vmin * (size_t)stride, n);
        glVertexAttribPointer((GLuint)i, R.attr[i].count, ATTR_GL[R.attr[i].type], GL_FALSE, stride,
                              (const void *)(uintptr_t)o);
        glEnableVertexAttribArray((GLuint)i);
    }
    return true;
}

void render_draw(int prim, uint32_t first, uint32_t count) {
    if (!count || !render_ready()) return;
    lock();
    if (draw_setup(first, first + count - 1)) {
        glDrawArrays(PRIM_GL[prim % 3], 0, (GLsizei)count);
        R.st.draws++;
    }
    glBindVertexArray(0);
    unlock();
}

void render_draw_indexed(int prim, const void *indices, int index_u16, uint32_t count) {
    if (!count || !indices || !render_ready()) return;
    lock();
    uint32_t mn = 0xFFFFFFFFu, mx = 0;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t v = index_u16 ? ((const uint16_t *)indices)[i] : ((const uint8_t *)indices)[i];
        if (v < mn) mn = v;
        if (v > mx) mx = v;
    }
    if (draw_setup(mn, mx)) {
        size_t isz = (size_t)count * (index_u16 ? 2 : 1);
        size_t o = stream(GL_ELEMENT_ARRAY_BUFFER, R.ibo, &R.ibo_off, STREAM_BYTES / 4, indices, isz);
        rglDrawElementsBaseVertex(PRIM_GL[prim % 3], (GLsizei)count, index_u16 ? GL_UNSIGNED_SHORT : GL_UNSIGNED_BYTE,
                                  (const void *)(uintptr_t)o, -(GLint)mn);
        R.st.draws++;
    }
    glBindVertexArray(0);
    unlock();
}

/* ================================================================== op pool + markers */

#define POOL_MAX ((1u << 20) - 2)
#define POOL_GC_HIGH 200000u
#define POOL_GC_AGE 600u

typedef struct {
    ROp op;
    uint64_t hash;
    uint32_t last_frame;
    uint8_t gen, live;
} PoolEnt;

static PoolEnt *g_pool;
static uint32_t g_npool, g_cappool, g_live;
static uint32_t *g_free; static uint32_t g_nfree, g_capfree;
static uint32_t *g_htab; static uint32_t g_hcap; /* open addressing: slot+1, 0 empty */

static uint64_t op_hash(const ROp *op) { return hash_bytes(op, sizeof *op) | 1; }

/* marker token: slot + 1 (never 0) | generation << 20 | 4-bit check << 28 */
static uint32_t token_of(uint32_t slot, uint8_t gen) {
    uint32_t chk = (slot * 2654435761u >> 28 ^ gen) & 15;
    return (slot + 1) | (uint32_t)gen << 20 | chk << 28;
}

static void htab_rebuild(uint32_t cap) {
    free(g_htab);
    g_hcap = cap;
    g_htab = calloc(cap, sizeof *g_htab);
    if (!g_htab) abort();
    for (uint32_t s = 0; s < g_npool; s++) {
        if (!g_pool[s].live) continue;
        uint32_t h = (uint32_t)g_pool[s].hash & (cap - 1);
        while (g_htab[h]) h = (h + 1) & (cap - 1);
        g_htab[h] = s + 1;
    }
}

static uint32_t pool_put(const ROp *op) {
    uint64_t h = op_hash(op);
    if (g_hcap && g_htab) {
        for (uint32_t i = (uint32_t)h & (g_hcap - 1);; i = (i + 1) & (g_hcap - 1)) {
            uint32_t e = g_htab[i];
            if (!e) break;
            PoolEnt *p = &g_pool[e - 1];
            if (p->live && p->hash == h && !memcmp(&p->op, op, sizeof *op)) {
                p->last_frame = R.frame;
                return token_of(e - 1, p->gen);
            }
        }
    }
    uint32_t slot;
    if (g_nfree) {
        slot = g_free[--g_nfree];
    } else {
        if (g_npool >= POOL_MAX) {
            WARN_ONCE("op pool full (%u ops): op dropped", POOL_MAX);
            return 0;
        }
        if (g_npool == g_cappool) {
            g_cappool = g_cappool ? g_cappool * 2 : 4096;
            g_pool = xrealloc(g_pool, g_cappool * sizeof *g_pool);
        }
        slot = g_npool++;
        g_pool[slot].gen = 0;
    }
    PoolEnt *p = &g_pool[slot];
    p->op = *op;
    p->hash = h;
    p->last_frame = R.frame;
    p->live = 1;
    g_live++;
    if (!g_htab || g_live * 2 > g_hcap) {
        htab_rebuild(g_hcap ? g_hcap * 2 : 8192);
    } else {
        uint32_t i = (uint32_t)h & (g_hcap - 1);
        while (g_htab[i]) i = (i + 1) & (g_hcap - 1);
        g_htab[i] = slot + 1;
    }
    R.st.ops_pooled = g_live;
    return token_of(slot, p->gen);
}

static const ROp *pool_get(uint32_t token) {
    uint32_t slot = (token & 0xFFFFF) - 1;
    uint8_t gen = (uint8_t)(token >> 20);
    if ((token & 0xFFFFF) == 0 || slot >= g_npool || token_of(slot, gen) != token) return NULL;
    PoolEnt *p = &g_pool[slot];
    if (!p->live || p->gen != gen) return NULL;
    p->last_frame = R.frame;
    return &p->op;
}

uint32_t *render_rec(uint32_t *p, const ROp *op) {
    lock();
    uint32_t tok = pool_put(op);
    R.st.ops_recorded++;
    unlock();
    if (!p) return NULL;
    p[0] = tok;
    p[1] = tok ? RENDER_MARK : 0;
    return p + RENDER_MARK_WORDS;
}

void render_frame_end(void) {
    lock();
    R.frame++;
    R.frag_dirty = R.tev_dirty = R.vsf_dirty = true; /* plat_end_frame changed GL state */
    if (g_live > POOL_GC_HIGH) {
        uint32_t freed = 0;
        for (uint32_t s = 0; s < g_npool; s++) {
            PoolEnt *p = &g_pool[s];
            if (p->live && R.frame - p->last_frame > POOL_GC_AGE) {
                p->live = 0;
                p->gen++;
                g_live--;
                VEC_PUSH(g_free, g_nfree, g_capfree);
                g_free[g_nfree++] = s;
                freed++;
            }
        }
        htab_rebuild(g_hcap);
        if (g_trace) rlog("op pool: freed %u, %u live", freed, g_live);
    }
    R.st.ops_pooled = g_live;
    unlock();
}

static int exec_depth;

void render_exec_op(const ROp *op) {
    switch (op->type) {
    case ROP_TARGET:
        render_set_target(op->u.target.has_color ? op->u.target.color : 0, op->u.target.cfmt,
                          op->u.target.has_depth ? op->u.target.depth : 0, op->u.target.dfmt, op->u.target.w,
                          op->u.target.h);
        break;
    case ROP_VIEWPORT: render_set_viewport(op->u.rect.x, op->u.rect.y, op->u.rect.w, op->u.rect.h); break;
    case ROP_SCISSOR: render_set_scissor(op->u.rect.enable, op->u.rect.x, op->u.rect.y, op->u.rect.w, op->u.rect.h); break;
    case ROP_FRAG: {
        R.frag = op->u.frag;
        R.frag_dirty = true;
        break;
    }
    case ROP_BLEND: {
        const RFragState *f = &op->u.frag;
        R.frag.blend_enable = f->blend_enable;
        R.frag.eq_rgb = f->eq_rgb; R.frag.eq_a = f->eq_a;
        R.frag.src_rgb = f->src_rgb; R.frag.dst_rgb = f->dst_rgb;
        R.frag.src_a = f->src_a; R.frag.dst_a = f->dst_a;
        memcpy(R.frag.blend_color, f->blend_color, 4);
        R.frag.logic_enable = 0; /* Blend::MakeCommand selects blend mode (0x100 byte 1) */
        R.frag_dirty = true;
        break;
    }
    case ROP_LOGICOP:
        R.frag.logic_enable = op->u.frag.logic_enable;
        R.frag.logic_op = op->u.frag.logic_op;
        R.frag_dirty = true;
        break;
    case ROP_ALPHATEST:
        R.frag.alpha_test = op->u.frag.alpha_test;
        R.frag.alpha_func = op->u.frag.alpha_func;
        R.frag.alpha_ref = op->u.frag.alpha_ref;
        break;
    case ROP_STENCIL: {
        const RFragState *f = &op->u.frag;
        R.frag.stencil_test = f->stencil_test; R.frag.stencil_func = f->stencil_func;
        R.frag.stencil_ref = f->stencil_ref; R.frag.stencil_mask = f->stencil_mask;
        R.frag.stencil_write = f->stencil_write; R.frag.stencil_fail = f->stencil_fail;
        R.frag.stencil_zfail = f->stencil_zfail; R.frag.stencil_zpass = f->stencil_zpass;
        R.frag_dirty = true;
        break;
    }
    case ROP_DEPTH:
        R.frag.depth_test = op->u.frag.depth_test;
        R.frag.depth_func = op->u.frag.depth_func;
        R.frag.depth_write = op->u.frag.depth_write;
        R.frag.color_mask = op->u.frag.color_mask;
        R.frag_dirty = true;
        break;
    case ROP_COLORMASK:
        R.frag.color_mask = op->u.frag.color_mask;
        R.frag_dirty = true;
        break;
    case ROP_CULL:
        R.frag.cull = op->u.frag.cull;
        R.frag_dirty = true;
        break;
    case ROP_DEPTHMAP:
        R.frag.depth_near = op->u.frag.depth_near;
        R.frag.depth_far = op->u.frag.depth_far;
        R.frag.poly_offset_enable = op->u.frag.poly_offset_enable;
        R.frag.poly_offset_units = op->u.frag.poly_offset_units;
        R.frag.wbuffer = op->u.frag.wbuffer;
        R.frag_dirty = true;
        break;
    case ROP_TEXUNIT: render_set_texunit(op->unit, &op->u.tex); break;
    case ROP_TEXCONFIG: render_set_texconfig(op->u.texcfg.enable_mask, op->u.texcfg.tex2_from_tc1); break;
    case ROP_TEV: render_set_tev(&op->u.tev); break;
    case ROP_TEV_CONST: render_set_tev_const(op->u.tev_const.stage_mask, op->u.tev_const.rgba); break;
    case ROP_PROGRAM: render_set_program((int)op->u.program.id); break;
    case ROP_VS_FLOAT: render_set_vs_float(op->u.vsf.reg, op->u.vsf.v, op->unit); break;
    case ROP_VS_BOOL: render_set_vs_bool(op->u.vsb.mask); break;
    case ROP_ATTRIB:
        if (op->u.attrib.ptr)
            render_set_attrib(op->unit, (const void *)op->u.attrib.ptr, op->u.attrib.type, op->u.attrib.count,
                              op->u.attrib.stride);
        else
            render_set_attrib_const(op->unit, op->u.attrib.konst);
        break;
    case ROP_DRAW:
        if (op->u.draw.indexed)
            render_draw_indexed(op->u.draw.prim, (const void *)op->u.draw.indices, op->u.draw.index_u16, op->u.draw.count);
        else
            render_draw(op->u.draw.prim, op->u.draw.first, op->u.draw.count);
        break;
    case ROP_CALL:
        if (exec_depth < 8) {
            exec_depth++;
            render_exec_cmds((const void *)op->u.call.addr, op->u.call.size);
            exec_depth--;
        }
        break;
    default: break;
    }
}

int render_exec_cmds(const void *addr, uint32_t size) {
    if (!addr || size < 8 || !render_ready()) return 0;
    uintptr_t a = ((uintptr_t)addr + 3) & ~(uintptr_t)3, e = (uintptr_t)addr + size;
    int n = 0;
    lock();
    /* only our own 2-word markers are looked for; nothing else in the range is interpreted */
    for (; a + 8 <= e; a += 4) {
        const uint32_t *w = (const uint32_t *)a;
        if (w[1] != RENDER_MARK) continue;
        const ROp *op = pool_get(w[0]);
        if (!op) continue;
        ROp copy = *op; /* the pool may grow (realloc) while the op runs */
        render_exec_op(&copy);
        n++;
        a += 4;
    }
    R.st.ops_run += (uint64_t)n;
    unlock();
    return n;
}

RStats render_stats(void) { return R.st; }
