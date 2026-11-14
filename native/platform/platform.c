/* SDL3 + OpenGL 3.3 platform layer. */
#include "platform.h"
#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

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
static SDL_Gamepad *pad;
static PlatConfig cfg;
static PlatInput in;
static uint64_t next_frame_ns;

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
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    win = SDL_CreateWindow(title, TOP_W * cfg.scale, SCREEN_H * 2 * cfg.scale, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!win) {
        fprintf(stderr, "SDL_CreateWindow: %s\n", SDL_GetError());
        return -1;
    }
    ctx = SDL_GL_CreateContext(win);
    if (!ctx) {
        fprintf(stderr, "OpenGL 3.3 context: %s\n", SDL_GetError());
        return -1;
    }
    SDL_GL_SetSwapInterval(cfg.vsync ? 1 : 0);
    if (gl_load((void *(*)(const char *))SDL_GL_GetProcAddress)) return -1;
    fprintf(stderr, "GL: %s / %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));

    target_init(&screens[SCREEN_TOP], TOP_W * cfg.render_scale, SCREEN_H * cfg.render_scale);
    target_init(&screens[SCREEN_BOTTOM], BOTTOM_W * cfg.render_scale, SCREEN_H * cfg.render_scale);
    blit_prog = gl_program(BLIT_VS, BLIT_FS);
    glGenVertexArrays(1, &blit_vao);
    next_frame_ns = plat_ticks_ns();
    return 0;
}

void plat_shutdown(void) {
    if (pad) SDL_CloseGamepad(pad);
    if (ctx) SDL_GL_DestroyContext(ctx);
    if (win) SDL_DestroyWindow(win);
    SDL_Quit();
}

uint64_t plat_ticks_ns(void) { return SDL_GetTicksNS(); }

/* layout: top screen above, bottom screen centred below, both scaled to fit the window */
static void layout(int ww, int wh, float rect[2][4], int px[2][4]) {
    float s = (float)ww / TOP_W;
    if (SCREEN_H * 2 * s > wh) s = (float)wh / (SCREEN_H * 2);
    float tw = TOP_W * s, bw = BOTTOM_W * s, h = SCREEN_H * s;
    float x0 = (ww - tw) / 2, y0 = (wh - 2 * h) / 2;
    float r[2][4] = {{x0, y0, tw, h}, {(ww - bw) / 2, y0 + h, bw, h}};  /* pixels, top-left origin */
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 4; k++) px[i][k] = (int)r[i][k];
        rect[i][0] = r[i][0] / ww * 2 - 1;
        rect[i][1] = 1 - (r[i][1] + r[i][3]) / wh * 2;
        rect[i][2] = r[i][2] / ww * 2;
        rect[i][3] = r[i][3] / wh * 2;
    }
}

static uint32_t key_bit(SDL_Keycode k) {
    switch (k) {
    case SDLK_X: return KEY_A;
    case SDLK_Z: return KEY_B;
    case SDLK_S: return KEY_X;
    case SDLK_A: return KEY_Y;
    case SDLK_Q: return KEY_L;
    case SDLK_W: return KEY_R;
    case SDLK_RETURN: return KEY_START;
    case SDLK_RSHIFT: case SDLK_BACKSPACE: return KEY_SELECT;
    case SDLK_I: return KEY_DUP;
    case SDLK_K: return KEY_DDOWN;
    case SDLK_J: return KEY_DLEFT;
    case SDLK_L: return KEY_DRIGHT;
    default: return 0;
    }
}

static uint32_t pad_bit(int b) {
    switch (b) {
    case SDL_GAMEPAD_BUTTON_EAST: return KEY_A;   /* Nintendo layout: A on the right */
    case SDL_GAMEPAD_BUTTON_SOUTH: return KEY_B;
    case SDL_GAMEPAD_BUTTON_NORTH: return KEY_X;
    case SDL_GAMEPAD_BUTTON_WEST: return KEY_Y;
    case SDL_GAMEPAD_BUTTON_LEFT_SHOULDER: return KEY_L;
    case SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER: return KEY_R;
    case SDL_GAMEPAD_BUTTON_START: return KEY_START;
    case SDL_GAMEPAD_BUTTON_BACK: return KEY_SELECT;
    case SDL_GAMEPAD_BUTTON_DPAD_UP: return KEY_DUP;
    case SDL_GAMEPAD_BUTTON_DPAD_DOWN: return KEY_DDOWN;
    case SDL_GAMEPAD_BUTTON_DPAD_LEFT: return KEY_DLEFT;
    case SDL_GAMEPAD_BUTTON_DPAD_RIGHT: return KEY_DRIGHT;
    default: return 0;
    }
}

int plat_poll(void) {
    static uint32_t kb, gp;
    uint32_t prev = in.held;
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        switch (e.type) {
        case SDL_EVENT_QUIT: return 0;
        case SDL_EVENT_KEY_DOWN:
            if (e.key.key == SDLK_ESCAPE) return 0;
            kb |= key_bit(e.key.key);
            break;
        case SDL_EVENT_KEY_UP: kb &= ~key_bit(e.key.key); break;
        case SDL_EVENT_GAMEPAD_ADDED: if (!pad) pad = SDL_OpenGamepad(e.gdevice.which); break;
        case SDL_EVENT_GAMEPAD_BUTTON_DOWN: gp |= pad_bit(e.gbutton.button); break;
        case SDL_EVENT_GAMEPAD_BUTTON_UP: gp &= ~pad_bit(e.gbutton.button); break;
        default: break;
        }
    }
    /* circle pad: arrow keys or left stick */
    const bool *ks = SDL_GetKeyboardState(NULL);
    int x = (ks[SDL_SCANCODE_RIGHT] - ks[SDL_SCANCODE_LEFT]) * 156;
    int y = (ks[SDL_SCANCODE_UP] - ks[SDL_SCANCODE_DOWN]) * 156;
    if (pad) {
        int ax = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX), ay = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY);
        if (abs(ax) > 4000 || abs(ay) > 4000) { x = ax * 156 / 32767; y = -ay * 156 / 32767; }
        if (SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) > 16000) gp |= KEY_ZL; else gp &= ~KEY_ZL;
        if (SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) > 16000) gp |= KEY_ZR; else gp &= ~KEY_ZR;
    }
    in.cpad_x = (int16_t)x;
    in.cpad_y = (int16_t)y;
    uint32_t cp = (x > 40 ? KEY_CPAD_RIGHT : 0) | (x < -40 ? KEY_CPAD_LEFT : 0) |
                  (y > 40 ? KEY_CPAD_UP : 0) | (y < -40 ? KEY_CPAD_DOWN : 0);

    /* touch: left mouse button on the bottom screen */
    float mx, my;
    int ww, wh;
    float rect[2][4];
    int px[2][4];
    SDL_MouseButtonFlags mb = SDL_GetMouseState(&mx, &my);
    SDL_GetWindowSizeInPixels(win, &ww, &wh);
    float pd = SDL_GetWindowPixelDensity(win);
    mx *= pd;
    my *= pd;
    layout(ww, wh, rect, px);
    int *b = px[SCREEN_BOTTOM];
    in.touch = (mb & SDL_BUTTON_LMASK) && mx >= b[0] && mx < b[0] + b[2] && my >= b[1] && my < b[1] + b[3];
    if (in.touch) {
        in.touch_x = (int)((mx - b[0]) * BOTTOM_W / b[2]);
        in.touch_y = (int)((my - b[1]) * SCREEN_H / b[3]);
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
    int ww, wh;
    float rect[2][4];
    int px[2][4];
    SDL_GetWindowSizeInPixels(win, &ww, &wh);
    layout(ww, wh, rect, px);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glViewport(0, 0, ww, wh);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(blit_prog);
    glBindVertexArray(blit_vao);
    GLint loc = glGetUniformLocation(blit_prog, "rect");
    for (int i = 0; i < 2; i++) {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, screens[i].color);
        glUniform4fv(loc, 1, rect[i]);
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    }
    SDL_GL_SwapWindow(win);

    /* 60 Hz pacing (on top of vsync, which may run at a different refresh rate) */
    next_frame_ns += 16666667ull;
    uint64_t now = plat_ticks_ns();
    if (next_frame_ns > now) SDL_DelayNS(next_frame_ns - now);
    else if (now - next_frame_ns > 100000000ull) next_frame_ns = now;
}
