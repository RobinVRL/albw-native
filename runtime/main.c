/* Native Linux frontend: SDL2 window + OpenGL 3.3, runs the recompiled game. */
#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include <string.h>
#include "runtime.h"

#define TOP_W 400
#define BOT_W 320
#define SCR_H 240

static const char *VS =
    "#version 330 core\n"
    "layout(location=0) in vec2 p; layout(location=1) in vec2 t; out vec2 uv;\n"
    "void main(){ uv=t; gl_Position=vec4(p,0,1); }\n";
static const char *FS =
    "#version 330 core\n"
    "in vec2 uv; out vec4 o; uniform sampler2D tex;\n"
    "void main(){ o=texture(tex,uv); }\n";

static GLuint compile(GLenum type, const char *src) {
    GLuint s = glCreateShader(type);
    glShaderSource(s, 1, &src, NULL);
    glCompileShader(s);
    GLint ok;
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[512];
        glGetShaderInfoLog(s, sizeof log, NULL, log);
        LOG("shader: %s", log);
        exit(1);
    }
    return s;
}

/* 3DS framebuffers are stored rotated: memory column-major, 240 pixels per line */
static void fb_convert(const FbInfo *fb, int w, uint32_t *out) {
    static const int bpp[] = {4, 3, 2, 2, 2};
    int fmt = fb->format & 7;
    if (!fb->addr || fmt > 4) {
        for (int i = 0; i < w * SCR_H; i++) out[i] = 0xFF202020u;
        return;
    }
    const uint8_t *src = GPTR(fb->addr);
    uint32_t stride = fb->stride ? fb->stride : (uint32_t)(SCR_H * bpp[fmt]);
    for (int x = 0; x < w; x++) {
        const uint8_t *col = src + (size_t)x * stride;
        for (int y = 0; y < SCR_H; y++) {
            const uint8_t *p = col + (size_t)(SCR_H - 1 - y) * bpp[fmt];
            uint32_t r, g, b;
            switch (fmt) {
            case 0: r = p[3]; g = p[2]; b = p[1]; break;
            case 1: r = p[2]; g = p[1]; b = p[0]; break;
            case 2: { uint16_t v = p[0] | p[1] << 8; r = (v >> 11) << 3; g = ((v >> 5) & 63) << 2; b = (v & 31) << 3; break; }
            case 3: { uint16_t v = p[0] | p[1] << 8; r = (v >> 11) << 3; g = ((v >> 6) & 31) << 3; b = ((v >> 1) & 31) << 3; break; }
            default: { uint16_t v = p[0] | p[1] << 8; r = (v >> 12) << 4; g = ((v >> 8) & 15) << 4; b = ((v >> 4) & 15) << 4; break; }
            }
            out[y * w + x] = 0xFF000000u | b << 16 | g << 8 | r;
        }
    }
}

int main(int argc, char **argv) {
    const char *code = getenv("ALBW_CODE_BIN");
    int scale = 2;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--trace")) g_trace_svc = 1;
        else if (!strcmp(argv[i], "--scale") && i + 1 < argc) scale = atoi(argv[++i]);
        else code = argv[i];
    }
    if (!code) {
        fprintf(stderr, "usage: %s [--trace] [--scale N] <code.bin>   (or set ALBW_CODE_BIN)\n", argv[0]);
        return 2;
    }
    Layout l = {0x5920F4, 0x6B5F8, 0x289F0, 0x87A44, 0x40000};
    if (mem_init(code, &l)) return 1;
    kernel_init();

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_GAMECONTROLLER)) {
        LOG("SDL_Init: %s", SDL_GetError());
        return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_Window *win = SDL_CreateWindow("ALBW native", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                       TOP_W * scale, SCR_H * 2 * scale, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!win) {
        LOG("SDL_CreateWindow: %s", SDL_GetError());
        return 1;
    }
    SDL_GLContext ctx = SDL_GL_CreateContext(win);
    if (!ctx) {
        LOG("GL context: %s", SDL_GetError());
        return 1;
    }
    SDL_GL_SetSwapInterval(1);
    glewExperimental = GL_TRUE;
    glewInit();
    LOG("GL: %s / %s", glGetString(GL_RENDERER), glGetString(GL_VERSION));

    GLuint prog = glCreateProgram();
    glAttachShader(prog, compile(GL_VERTEX_SHADER, VS));
    glAttachShader(prog, compile(GL_FRAGMENT_SHADER, FS));
    glLinkProgram(prog);

    /* two quads: top screen fills the upper half, bottom screen centred in the lower half */
    float bx = (float)BOT_W / TOP_W;
    float quads[] = {
        -1, 0, 0, 1,   1, 0, 1, 1,   1, 1, 1, 0,   -1, 0, 0, 1,   1, 1, 1, 0,   -1, 1, 0, 0,
        -bx, -1, 0, 1,  bx, -1, 1, 1,  bx, 0, 1, 0,  -bx, -1, 0, 1,  bx, 0, 1, 0,  -bx, 0, 0, 0,
    };
    GLuint vao, vbo, tex[2];
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof quads, quads, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 16, (void *)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 16, (void *)8);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glGenTextures(2, tex);
    for (int i = 0; i < 2; i++) {
        glBindTexture(GL_TEXTURE_2D, tex[i]);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, i ? BOT_W : TOP_W, SCR_H, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    }
    static uint32_t pix_top[TOP_W * SCR_H], pix_bot[BOT_W * SCR_H];

    thread_start_main(TEXT_ADDR);

    uint32_t next = SDL_GetTicks();
    while (!g_quit) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT || (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE)) g_quit = 1;
        }
        guest_lock();
        kernel_vblank();
        fb_convert(&g_fb_top, TOP_W, pix_top);
        fb_convert(&g_fb_bottom, BOT_W, pix_bot);
        guest_unlock();

        int ww, wh;
        SDL_GL_GetDrawableSize(win, &ww, &wh);
        glViewport(0, 0, ww, wh);
        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);
        glUseProgram(prog);
        glBindVertexArray(vao);
        glBindTexture(GL_TEXTURE_2D, tex[0]);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, TOP_W, SCR_H, GL_RGBA, GL_UNSIGNED_BYTE, pix_top);
        glDrawArrays(GL_TRIANGLES, 0, 6);
        glBindTexture(GL_TEXTURE_2D, tex[1]);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, BOT_W, SCR_H, GL_RGBA, GL_UNSIGNED_BYTE, pix_bot);
        glDrawArrays(GL_TRIANGLES, 6, 6);
        SDL_GL_SwapWindow(win);

        next += 16;
        uint32_t now = SDL_GetTicks();
        if (next > now) SDL_Delay(next - now);
        else next = now;
    }
    SDL_GL_DeleteContext(ctx);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
