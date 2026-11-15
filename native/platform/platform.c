/* SDL3 + OpenGL 3.3 platform layer. */
#include "platform.h"
void albw_sched_block_begin(void);  /* native/sdk/os.c */
void albw_sched_block_end(void);
#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

/* Screen layout engine (presets, custom layout, touch mapping), shared with the Qt frontend.
 * Compiled into this translation unit so the build scripts that compile platform.c alone
 * (tools/link.sh, native/assets/build.sh, native/render/test/build.sh) need no change.
 * A build that compiles layout.c separately defines PLAT_LAYOUT_SEPARATE. */
#ifndef PLAT_LAYOUT_SEPARATE
#include "layout.c"
#else
#include "layout.h"
#endif

/* Keyboard + game controller input (input.h), compiled in the same way as layout.c; a build
 * that compiles input.c separately defines PLAT_INPUT_SEPARATE. */
#ifndef PLAT_INPUT_SEPARATE
#include "input.c"
#else
#include "input.h"
#endif

#define GL_DEFINE(ret, name, args) ret (*name) args;
GL_FUNCS(GL_DEFINE)
#undef GL_DEFINE

int gl_load(void *(*get_proc)(const char *)) {
    int missing = 0;
#define GL_LOAD(ret, name, args) \
    name = (ret(*) args)get_proc(#name); \
    if (!name) { fprintf(stderr, "GL: missing %s\n", #name); missing++; }
    GL_FUNCS(GL_LOAD)
#undef GL_LOAD
    return missing;
}

/* KHR_debug (core in 4.3, extension on most 3.3 drivers): optional, never required */
typedef void (*GLDebugProc)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *, const void *);
static void debug_cb(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei len, const GLchar *msg,
                     const void *user) {
    if (severity == 0x826B) return;  /* GL_DEBUG_SEVERITY_NOTIFICATION */
    fprintf(stderr, "GL debug [type %#x sev %#x]: %s\n", type, severity, msg);
}

void gl_enable_debug(void *(*get_proc)(const char *)) {
    void (*cb)(GLDebugProc, const void *) = (void (*)(GLDebugProc, const void *))get_proc("glDebugMessageCallback");
    if (!cb) {
        fprintf(stderr, "GL: KHR_debug not available, ALBW_GL_DEBUG ignored\n");
        return;
    }
    glEnable(0x92E0);  /* GL_DEBUG_OUTPUT */
    glEnable(0x8242);  /* GL_DEBUG_OUTPUT_SYNCHRONOUS */
    cb(debug_cb, NULL);
    fprintf(stderr, "GL: debug output enabled\n");
}

static GLuint shader(GLenum type, const char *src) {
    GLuint s = glCreateShader(type);
    glShaderSource(s, 1, &src, NULL);
    glCompileShader(s);
    GLint ok;
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        glGetShaderInfoLog(s, sizeof log, NULL, log);
        fprintf(stderr, "shader compile failed:\n%s\n", log);
        abort();
    }
    return s;
}

GLuint gl_program(const char *vs, const char *fs) {
    GLuint p = glCreateProgram(), v = shader(GL_VERTEX_SHADER, vs), f = shader(GL_FRAGMENT_SHADER, fs);
    glAttachShader(p, v);
    glAttachShader(p, f);
    glLinkProgram(p);
    GLint ok;
    glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if (!ok) {
        char log[1024];
        glGetProgramInfoLog(p, sizeof log, NULL, log);
        fprintf(stderr, "program link failed:\n%s\n", log);
        abort();
    }
    glDeleteShader(v);
    glDeleteShader(f);
    return p;
}

/* ------------------------------------------------------------------ state */
static SDL_Window *win;
static SDL_GLContext ctx;
static PlatConfig cfg;
static PlatInput in;
static uint64_t next_frame_ns;
/* screen layout state (see the layout section below) */
static LayoutConfig g_layout_cfg;
static Layout g_layout;
static LayoutEdit g_layout_edit;
static int g_layout_editing;
static char g_layout_base_title[256];
static SDL_Cursor *g_layout_cursor[4];   /* default, move, nwse, nesw */
static void plat_layout_title(void);

typedef struct { GLuint fbo, color, depth; int w, h; } Target;
static Target screens[2];
static GLuint blit_prog, blit_vao;

static void target_init(Target *t, int w, int h) {
    t->w = w;
    t->h = h;
    glGenTextures(1, &t->color);
    glBindTexture(GL_TEXTURE_2D, t->color);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glGenRenderbuffers(1, &t->depth);
    glBindRenderbuffer(GL_RENDERBUFFER, t->depth);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, w, h);
    glGenFramebuffers(1, &t->fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, t->fbo);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, t->color, 0);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, t->depth);
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        fprintf(stderr, "screen render target incomplete\n");
        abort();
    }
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

static const char *BLIT_VS =
    "#version 330 core\n"
    "uniform vec4 rect; out vec2 uv;\n"
    "void main(){ vec2 p = vec2(gl_VertexID & 1, gl_VertexID >> 1); uv = p;\n"
    "  gl_Position = vec4(rect.xy + p * rect.zw, 0, 1); }\n";
static const char *BLIT_FS =
    "#version 330 core\n"
    "in vec2 uv; out vec4 o; uniform sampler2D tex;\n"
    "void main(){ o = texture(tex, uv); }\n";

int plat_init(const char *title, const PlatConfig *c) {
    cfg = *c;
    if (cfg.scale < 1) cfg.scale = 2;
    if (cfg.render_scale < 1) cfg.render_scale = 1;
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) {
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return -1;
    }
    input_init();  /* keyboard + controllers: config, mapping DB, already connected pads */
    int debug = getenv("ALBW_GL_DEBUG") != NULL;
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG |
                                              (debug ? SDL_GL_CONTEXT_DEBUG_FLAG : 0));
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    /* the window needs no depth/stencil: the game renders into the screen targets */
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 0);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 0);
    win = SDL_CreateWindow(title, TOP_W * cfg.scale, SCREEN_H * 2 * cfg.scale,
                           SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY);
    if (!win) {
        fprintf(stderr, "SDL_CreateWindow: %s\n", SDL_GetError());
        return -1;
    }
    snprintf(g_layout_base_title, sizeof g_layout_base_title, "%s", title);
    layout_load(&g_layout_cfg, NULL);  /* defaults if there is no layout.cfg yet */
    plat_layout_title();
    ctx = SDL_GL_CreateContext(win);
    if (!ctx) {
        fprintf(stderr, "Could not create an OpenGL 3.3 core context (%s).\n"
                "This port needs OpenGL 3.3: any Intel GPU since 2011 (HD 2000+), AMD since 2009 (HD 5000+)\n"
                "or NVIDIA since 2008 (GeForce 400+), with Mesa or the vendor driver.\n", SDL_GetError());
        return -1;
    }
    /* vsync: adaptive if the driver has it, else on, else off */
    if (cfg.vsync) {
        if (!SDL_GL_SetSwapInterval(-1) && !SDL_GL_SetSwapInterval(1)) SDL_GL_SetSwapInterval(0);
    } else {
        SDL_GL_SetSwapInterval(0);
    }
    if (gl_load((void *(*)(const char *))SDL_GL_GetProcAddress)) return -1;
    GLint major = 0, minor = 0;
    glGetIntegerv(GL_MAJOR_VERSION, &major);
    glGetIntegerv(GL_MINOR_VERSION, &minor);
    fprintf(stderr, "GL: %s | %s | %s (context %d.%d)\n", glGetString(GL_VENDOR), glGetString(GL_RENDERER),
            glGetString(GL_VERSION), major, minor);
    if (major * 10 + minor < 33) {
        fprintf(stderr, "OpenGL %d.%d is too old: 3.3 is required.\n", major, minor);
        return -1;
    }
    if (debug) gl_enable_debug((void *(*)(const char *))SDL_GL_GetProcAddress);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);

    target_init(&screens[SCREEN_TOP], TOP_W * cfg.render_scale, SCREEN_H * cfg.render_scale);
    target_init(&screens[SCREEN_BOTTOM], BOTTOM_W * cfg.render_scale, SCREEN_H * cfg.render_scale);
    blit_prog = gl_program(BLIT_VS, BLIT_FS);
    glGenVertexArrays(1, &blit_vao);
    next_frame_ns = plat_ticks_ns();
    return 0;
}

void plat_shutdown(void) {
    input_shutdown();
    if (ctx) SDL_GL_DestroyContext(ctx);
    if (win) SDL_DestroyWindow(win);
    SDL_Quit();
}

uint64_t plat_ticks_ns(void) { return SDL_GetTicksNS(); }

/* ------------------------------------------------------------------ screen layout (layout.c)
 * Where the two screens go in the window: presets or a custom layout, saved in layout.cfg.
 *   F2 / Shift+F2   next / previous preset
 *   F3              custom layout editor on/off (Esc also leaves it). In the editor:
 *                   left drag = move a screen, drag a corner or right drag = resize,
 *                   wheel = scale, Shift = free aspect, Alt = no snapping
 *   F4              swap the screens (presets) / bring the other screen to the front (custom)
 *   Ctrl + left/right drag   move/resize a screen without entering the editor (-> custom) */

#define LAYOUT_HANDLE 10.0f      /* corner handle size, window points */

static void plat_layout_update(void) {
    int ww, wh;
    SDL_GetWindowSizeInPixels(win, &ww, &wh);
    layout_compute(&g_layout_cfg, ww, wh, &g_layout);
}

static void plat_layout_title(void) {
    char t[512];
    if (!g_layout_editing && g_layout_cfg.preset == LAYOUT_DEFAULT && !g_layout_cfg.swap) snprintf(t, sizeof t, "%s", g_layout_base_title);
    else snprintf(t, sizeof t, "%s  [%s%s]%s", g_layout_base_title, layout_preset_name(g_layout_cfg.preset),
                  g_layout_cfg.swap && g_layout_cfg.preset != LAYOUT_CUSTOM ? ", swapped" : "",
                  g_layout_editing ? "  LAYOUT EDITOR: drag = move, corner/right-drag = resize, wheel = scale, "
                               "Shift = free aspect, Alt = no snap, F3 = done" : "");
    SDL_SetWindowTitle(win, t);
}

static void plat_layout_changed(void) {
    plat_layout_update();
    plat_layout_title();
    if (layout_save(&g_layout_cfg, NULL)) fprintf(stderr, "layout: cannot save %s\n", layout_default_path());
}

static void plat_layout_cursor(int which) {
    static const SDL_SystemCursor ids[4] = {SDL_SYSTEM_CURSOR_DEFAULT, SDL_SYSTEM_CURSOR_MOVE,
                                            SDL_SYSTEM_CURSOR_NWSE_RESIZE, SDL_SYSTEM_CURSOR_NESW_RESIZE};
    if (!g_layout_cursor[which]) g_layout_cursor[which] = SDL_CreateSystemCursor(ids[which]);
    if (g_layout_cursor[which]) SDL_SetCursor(g_layout_cursor[which]);
}

/* Layout keys and mouse editing. Returns 1 if the event was consumed (not passed to the game). */
static int plat_layout_event(const SDL_Event *e) {
    float pd = SDL_GetWindowPixelDensity(win);
    SDL_Keymod mod = SDL_GetModState();
    switch (e->type) {
    case SDL_EVENT_KEY_DOWN:
        if (e->key.key == SDLK_F2) {
            if (!e->key.repeat) {
                int n = LAYOUT_PRESET_COUNT, step = (mod & SDL_KMOD_SHIFT) ? n - 1 : 1;
                g_layout_cfg.preset = (g_layout_cfg.preset + step) % n;
                plat_layout_changed();
            }
            return 1;
        }
        if (e->key.key == SDLK_F3) {
            if (!e->key.repeat) {
                g_layout_editing = !g_layout_editing;
                plat_layout_update();
                if (g_layout_editing) layout_make_custom(&g_layout_cfg, &g_layout);
                layout_edit_end(&g_layout_edit);
                plat_layout_cursor(0);
                plat_layout_changed();
            }
            return 1;
        }
        if (e->key.key == SDLK_F4) {
            if (!e->key.repeat) {
                if (g_layout_cfg.preset == LAYOUT_CUSTOM) g_layout_cfg.custom_front ^= 1;
                else g_layout_cfg.swap ^= 1;
                plat_layout_changed();
            }
            return 1;
        }
        if (e->key.key == SDLK_ESCAPE && g_layout_editing) {  /* leave the editor instead of quitting */
            g_layout_editing = 0;
            layout_edit_end(&g_layout_edit);
            plat_layout_cursor(0);
            plat_layout_changed();
            return 1;
        }
        return 0;
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
        if (e->button.button != SDL_BUTTON_LEFT && e->button.button != SDL_BUTTON_RIGHT) return g_layout_editing;
        if (!g_layout_editing && !(mod & SDL_KMOD_CTRL)) return 0;
        plat_layout_update();
        if (layout_edit_begin(&g_layout_edit, &g_layout_cfg, &g_layout, e->button.x * pd, e->button.y * pd, LAYOUT_HANDLE * pd,
                              e->button.button == SDL_BUTTON_RIGHT)) {
            plat_layout_title();
            return 1;
        }
        return g_layout_editing;
    case SDL_EVENT_MOUSE_MOTION:
        if (g_layout_edit.mode != LAYOUT_EDIT_NONE) {
            plat_layout_update();
            layout_edit_update(&g_layout_edit, &g_layout_cfg, &g_layout, e->motion.x * pd, e->motion.y * pd, (mod & SDL_KMOD_SHIFT) != 0,
                               (mod & SDL_KMOD_ALT) != 0);
            return 1;
        }
        if (g_layout_editing) {
            int s, c;
            plat_layout_update();
            int m = layout_edit_hit(&g_layout, e->motion.x * pd, e->motion.y * pd, LAYOUT_HANDLE * pd, &s, &c);
            plat_layout_cursor(m == LAYOUT_EDIT_RESIZE ? (c == 0 || c == 3 ? 2 : 3) : m == LAYOUT_EDIT_MOVE ? 1 : 0);
        }
        return 0;
    case SDL_EVENT_MOUSE_BUTTON_UP:
        if (g_layout_edit.mode != LAYOUT_EDIT_NONE) {
            layout_edit_end(&g_layout_edit);
            plat_layout_changed();
            return 1;
        }
        return g_layout_editing;
    case SDL_EVENT_MOUSE_WHEEL:
        if (g_layout_editing && e->wheel.y != 0) {
            plat_layout_update();
            int s = layout_hit(&g_layout, e->wheel.mouse_x * pd, e->wheel.mouse_y * pd);
            if (s >= 0) {
                layout_edit_scale(&g_layout_cfg, &g_layout, s, e->wheel.y > 0 ? 1.1f : 1 / 1.1f);
                plat_layout_changed();
            }
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

/* editor overlay: outlines, corner handles and snap guides, drawn with scissored clears */
static void plat_layout_fill(int x, int y, int w, int h, float r, float g, float b) {
    if (w <= 0 || h <= 0) return;
    glScissor(x, g_layout.wh - (y + h), w, h);
    glClearColor(r, g, b, 1);
    glClear(GL_COLOR_BUFFER_BIT);
}

static void plat_layout_overlay(void) {
    float pd = SDL_GetWindowPixelDensity(win);
    int t = pd > 1.5f ? 3 : 2, hs = (int)(LAYOUT_HANDLE * pd);
    glEnable(GL_SCISSOR_TEST);
    for (int k = 0; k < 2; k++) {
        int s = g_layout.order[k];
        if (!g_layout.visible[s]) continue;
        int x = (int)g_layout.r[s].x, y = (int)g_layout.r[s].y, w = (int)g_layout.r[s].w, h = (int)g_layout.r[s].h;
        float cr = s ? 0.3f : 1.0f, cg = s ? 0.8f : 0.75f, cb = s ? 1.0f : 0.2f;  /* top amber, bottom blue */
        plat_layout_fill(x, y, w, t, cr, cg, cb);
        plat_layout_fill(x, y + h - t, w, t, cr, cg, cb);
        plat_layout_fill(x, y, t, h, cr, cg, cb);
        plat_layout_fill(x + w - t, y, t, h, cr, cg, cb);
        for (int c = 0; c < 4; c++)
            plat_layout_fill((c & 1 ? x + w : x) - hs / 2, (c & 2 ? y + h : y) - hs / 2, hs, hs, 1, 1, 1);
    }
    if (g_layout_edit.guide_x >= 0) plat_layout_fill((int)g_layout_edit.guide_x - 1, 0, 2, g_layout.wh, 1, 0.2f, 0.8f);
    if (g_layout_edit.guide_y >= 0) plat_layout_fill(0, (int)g_layout_edit.guide_y - 1, g_layout.ww, 2, 1, 0.2f, 0.8f);
    glDisable(GL_SCISSOR_TEST);
}

int plat_poll(void) {
    uint32_t prev = in.held;
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (plat_layout_event(&e)) continue;  /* layout keys (F2-F4) and layout editing with the mouse */
        if (e.type == SDL_EVENT_QUIT) return 0;
        input_handle_event(&e);  /* controller hotplug, MENU/QUIT keys, binding capture */
    }
    /* buttons (keyboard kb, controllers gp), circle pad (+ its direction bits cp), C-stick,
     * motion, frontend menu: input.c, mapping from input.cfg */
    uint32_t kb, gp, cp;
    if (!input_update(&in, &kb, &gp, &cp)) return 0;

    /* touch: left mouse button on the bottom screen, wherever the layout draws it. A touch starts
     * inside the screen and, while held, follows the pointer clamped to the screen's edges. */
    static int touching;
    float mx, my;
    SDL_MouseButtonFlags mb = SDL_GetMouseState(&mx, &my);
    float pd = SDL_GetWindowPixelDensity(win);
    int tx, ty;
    plat_layout_update();
    int inside = layout_to_screen(&g_layout, SCREEN_BOTTOM, mx * pd, my * pd, &tx, &ty);
    int pressed = (mb & SDL_BUTTON_LMASK) && !g_layout_editing && g_layout_edit.mode == LAYOUT_EDIT_NONE &&
                  g_layout.visible[SCREEN_BOTTOM];
    touching = pressed && (inside || touching);
    in.touch = touching;
    if (in.touch) {
        in.touch_x = tx;
        in.touch_y = ty;
    }
    in.held = kb | gp | cp | (in.touch ? KEY_TOUCH : 0);
    in.down = in.held & ~prev;
    in.up = prev & ~in.held;
    return 1;
}

const PlatInput *plat_input(void) { return &in; }

void plat_screen_size(int screen, int *w, int *h) {
    *w = screens[screen].w;
    *h = screens[screen].h;
}

void plat_begin_screen(int screen) {
    Target *t = &screens[screen];
    glBindFramebuffer(GL_FRAMEBUFFER, t->fbo);
    glViewport(0, 0, t->w, t->h);
}

void plat_end_frame(void) {
    plat_layout_update();
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glViewport(0, 0, g_layout.ww, g_layout.wh);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glDisable(GL_SCISSOR_TEST);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(blit_prog);
    glBindVertexArray(blit_vao);
    GLint loc = glGetUniformLocation(blit_prog, "rect");
    GLint filter = g_layout_cfg.linear_filter ? GL_LINEAR : GL_NEAREST;
    for (int k = 0; k < 2; k++) {
        int i = g_layout.order[k];
        if (!g_layout.visible[i]) continue;
        float rect[4];
        layout_rect_ndc(&g_layout, i, rect);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, screens[i].color);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
        glUniform4fv(loc, 1, rect);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    }
    if (g_layout_editing || g_layout_edit.mode != LAYOUT_EDIT_NONE) plat_layout_overlay();
    /* swap + pacing block the calling thread; when that is a game thread (os.c app-core
     * scheduling) the other game threads run meanwhile, as during a 3DS vblank wait */
    albw_sched_block_begin();
    SDL_GL_SwapWindow(win);

    /* 60 Hz pacing (on top of vsync, which may run at a different refresh rate) */
    next_frame_ns += 16666667ull;
    uint64_t now = plat_ticks_ns();
    if (next_frame_ns > now) SDL_DelayNS(next_frame_ns - now);
    else if (now - next_frame_ns > 100000000ull) next_frame_ns = now;
    albw_sched_block_end();
}
