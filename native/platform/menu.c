/* Esc menu overlay of the SDL backend (#included by platform.c after its layout section).
 *
 * The QUIT binding (Escape by default, input.cfg) opens this menu instead of ending the game;
 * closing the window still quits. While the menu is open the game is paused: plat_end_frame()
 * runs menu_run(), which keeps redrawing the last game frame with the menu on top and handles
 * input until the menu closes (the calling game thread is blocked like during a vblank wait).
 *
 * Items: Resume, Windows (separate / joined), Layout preset, Swap screens, Filter, Integer scale,
 * Resolution (internal render scale 1x..8x, render_set_scale), Fullscreen, Edit layout (the F3 mouse editor), Reload controls (input.cfg), Quit.
 * Keys: Up / Down select, Left / Right / Enter change or activate, Escape / Backspace close.
 * Gamepad: D-pad, A (south) activates, B (east) / Start close. Mouse: hover selects, click
 * activates, a click outside the panel closes. Changes are saved to layout.cfg as with F2-F5.
 *
 * Text: native/platform/menu_font.h (tools/gen_menu_font.py), one textured-quad program. */
#include "menu_font.h"

/* g_menu_open, g_menu_sel, g_quit_req, g_menu_note: declared at the top of platform.c */
static GLuint menu_prog, menu_vao, menu_vbo, menu_tex;
static GLint menu_loc_size;

typedef struct { float x, y, u, v, r, g, b, a; } MenuVtx;
#define MENU_MAX_VTX (6 * 2048)
static MenuVtx menu_vtx[MENU_MAX_VTX];
static int menu_nv;

enum { MI_RESUME, MI_WINDOWS, MI_PRESET, MI_SWAP, MI_FILTER, MI_INTEGER, MI_RES, MI_FULLSCREEN, MI_EDIT,
       MI_CONTROLS, MI_QUIT, MI_COUNT };

static const char *MENU_VS =
    "#version 330 core\n"
    "layout(location=0) in vec2 pos; layout(location=1) in vec2 uv; layout(location=2) in vec4 col;\n"
    "uniform vec4 size; out vec2 v_uv; out vec4 v_col;\n"
    "void main() { gl_Position = vec4(pos.x / size.x * 2.0 - 1.0, 1.0 - pos.y / size.y * 2.0, 0.0, 1.0);\n"
    "  v_uv = uv; v_col = col; }\n";
static const char *MENU_FS =
    "#version 330 core\n"
    "in vec2 v_uv; in vec4 v_col; uniform sampler2D tex; out vec4 o;\n"
    "void main() { o = vec4(v_col.rgb, v_col.a * texture(tex, v_uv).r); }\n";

static void menu_gl_init(void) {
    if (menu_prog) return;
    menu_prog = gl_program(MENU_VS, MENU_FS);
    menu_loc_size = glGetUniformLocation(menu_prog, "size");
    glUseProgram(menu_prog);
    glUniform1i(glGetUniformLocation(menu_prog, "tex"), 0);
    glGenVertexArrays(1, &menu_vao);
    glGenBuffers(1, &menu_vbo);
    glBindVertexArray(menu_vao);
    glBindBuffer(GL_ARRAY_BUFFER, menu_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof menu_vtx, NULL, GL_DYNAMIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(MenuVtx), (void *)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(MenuVtx), (void *)(2 * sizeof(float)));
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(MenuVtx), (void *)(4 * sizeof(float)));
    glBindVertexArray(0);
    glGenTextures(1, &menu_tex);
    glBindTexture(GL_TEXTURE_2D, menu_tex);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, 0x8229 /* GL_R8 */, MENU_FONT_ATLAS_W, MENU_FONT_ATLAS_H, 0, 0x1903 /* GL_RED */,
                 GL_UNSIGNED_BYTE, menu_font_atlas);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
}

/* one quad: atlas cell `c` (32..127; 127 = solid) stretched over (x, y, w, h) */
static void menu_quad(float x, float y, float w, float h, int c, float r, float g, float b, float a) {
    if (menu_nv + 6 > MENU_MAX_VTX || c < 32 || c > 127) return;
    int i = c - 32;
    float u0 = (float)((i % 16) * MENU_FONT_W) / MENU_FONT_ATLAS_W, v0 = (float)((i / 16) * MENU_FONT_H) / MENU_FONT_ATLAS_H;
    float u1 = u0 + (float)MENU_FONT_W / MENU_FONT_ATLAS_W, v1 = v0 + (float)MENU_FONT_H / MENU_FONT_ATLAS_H;
    if (c == 127) {   /* sample the middle of the solid cell: no filtering at its edges */
        u0 = u1 = (u0 + u1) * 0.5f;
        v0 = v1 = (v0 + v1) * 0.5f;
    }
    MenuVtx q[4] = {{x, y, u0, v0, r, g, b, a}, {x + w, y, u1, v0, r, g, b, a}, {x, y + h, u0, v1, r, g, b, a},
                    {x + w, y + h, u1, v1, r, g, b, a}};
    static const int idx[6] = {0, 1, 2, 2, 1, 3};
    for (int k = 0; k < 6; k++) menu_vtx[menu_nv++] = q[idx[k]];
}

static void menu_rect(float x, float y, float w, float h, float r, float g, float b, float a) {
    menu_quad(x, y, w, h, 127, r, g, b, a);
}

static void menu_text(float x, float y, float s, const char *t, float r, float g, float b, float a) {
    for (; *t; t++, x += MENU_FONT_W * s)
        if (*t != ' ') menu_quad(x, y, MENU_FONT_W * s, MENU_FONT_H * s, (unsigned char)*t, r, g, b, a);
}

/* the window the menu is drawn in: the top window, or the bottom one when only it is shown */
static SDL_Window *menu_window(void) {
    if (g_separate && !layout_separate_visible(&g_layout_cfg, SCREEN_TOP) && win_bottom) return win_bottom;
    return win;
}

static int menu_fullscreen(void) { return (SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN) != 0; }

static void menu_label(int i, char *buf, size_t n) {
    switch (i) {
    case MI_RESUME: snprintf(buf, n, "Resume"); break;
    case MI_WINDOWS: snprintf(buf, n, "Windows        < %s >", g_separate ? "Separate" : "Joined"); break;
    case MI_PRESET: snprintf(buf, n, "Layout         < %s >", layout_preset_name(g_layout_cfg.preset)); break;
    case MI_SWAP: snprintf(buf, n, "Swap screens   < %s >", g_layout_cfg.swap ? "On" : "Off"); break;
    case MI_FILTER: snprintf(buf, n, "Filter         < %s >", g_layout_cfg.linear_filter ? "Linear" : "Nearest"); break;
    case MI_INTEGER: snprintf(buf, n, "Integer scale  < %s >", g_layout_cfg.integer_scale ? "On" : "Off"); break;
    case MI_RES: snprintf(buf, n, "Resolution     < %dx (%dx%d) >", render_get_scale(), 400 * render_get_scale(), 240 * render_get_scale()); break;
    case MI_FULLSCREEN: snprintf(buf, n, "Fullscreen     < %s >", menu_fullscreen() ? "On" : "Off"); break;
    case MI_EDIT: snprintf(buf, n, "Edit layout with the mouse (F3)"); break;
    case MI_CONTROLS: snprintf(buf, n, "Reload controls (input.cfg)"); break;
    case MI_QUIT: snprintf(buf, n, "Quit game"); break;
    default: buf[0] = 0;
    }
}

/* panel geometry for a window of ww x wh pixels: origin, scale, row height */
static void menu_geom(int ww, int wh, float *px, float *py, float *pw, float *ph, float *s, float *row) {
    float sc = wh / 540.0f;
    if (sc < 0.6f) sc = 0.6f;
    if (sc > 2.0f) sc = 2.0f;
    *s = sc;
    *row = MENU_FONT_H * sc * 1.5f;
    char buf[96];
    size_t longest = 30;
    for (int i = 0; i < MI_COUNT; i++) {
        menu_label(i, buf, sizeof buf);
        if (strlen(buf) > longest) longest = strlen(buf);
    }
    *pw = (longest + 3) * MENU_FONT_W * sc;
    if (*pw > ww - 8) *pw = (float)(ww - 8);
    *ph = (MI_COUNT + 3) * *row;
    *px = (ww - *pw) * 0.5f;
    *py = (wh - *ph) * 0.5f;
}

static void menu_activate(int i, int dir) {
    g_menu_note[0] = 0;
    switch (i) {
    case MI_RESUME: g_menu_open = 0; break;
    case MI_WINDOWS: plat_set_windows(!g_separate, 1); break;
    case MI_PRESET: {
        if (g_separate) { plat_separate_cycle(dir < 0); break; }   /* as F2: both / top only / bottom only */
        int n = LAYOUT_PRESET_COUNT;
        g_layout_cfg.preset = (g_layout_cfg.preset + (dir < 0 ? n - 1 : 1)) % n;
        plat_layout_changed();
        break;
    }
    case MI_SWAP: g_layout_cfg.swap ^= 1; plat_layout_changed(); break;
    case MI_FILTER: g_layout_cfg.linear_filter ^= 1; plat_layout_changed(); break;
    case MI_INTEGER: g_layout_cfg.integer_scale ^= 1; plat_layout_changed(); break;
    case MI_RES: {
        int r = render_get_scale() + (dir < 0 ? -1 : 1);
        if (r < 1) r = 8;
        if (r > 8) r = 1;
        plat_apply_render_scale(r);   /* renderer surfaces and the screen targets */
        g_layout_cfg.render_scale = render_get_scale();
        plat_layout_changed();
        break;
    }
    case MI_FULLSCREEN: SDL_SetWindowFullscreen(win, !menu_fullscreen()); break;
    case MI_EDIT:   /* as F3: the editor arranges the joined window */
        if (g_separate) plat_set_windows(0, 1);
        g_layout_editing = 1;
        plat_layout_update();
        layout_make_custom(&g_layout_cfg, &g_layout);
        layout_edit_end(&g_layout_edit);
        plat_layout_cursor(0);
        plat_layout_changed();
        g_menu_open = 0;
        break;
    case MI_CONTROLS:
        snprintf(g_menu_note, sizeof g_menu_note, input_reload() == 0 ? "Reloaded %s" : "Cannot read %s (defaults kept)",
                 input_config_path());
        break;
    case MI_QUIT: g_quit_req = 1; g_menu_open = 0; break;
    }
}

static void menu_move(int d) { g_menu_sel = (g_menu_sel + d + MI_COUNT) % MI_COUNT; }

/* mouse position (window pixels of the menu window) -> item, -1 outside the items, -2 outside the panel */
static int menu_hit(float mx, float my) {
    SDL_Window *mw = menu_window();
    float pd = SDL_GetWindowPixelDensity(mw), px, py, pw, ph, s, row;
    int ww, wh;
    SDL_GetWindowSizeInPixels(mw, &ww, &wh);
    menu_geom(ww, wh, &px, &py, &pw, &ph, &s, &row);
    mx *= pd, my *= pd;
    if (mx < px || mx > px + pw || my < py || my > py + ph) return -2;
    int i = (int)((my - (py + 2 * row)) / row);
    return i >= 0 && i < MI_COUNT ? i : -1;
}

static void menu_event(const SDL_Event *e) {
    switch (e->type) {
    case SDL_EVENT_QUIT:
    case SDL_EVENT_WINDOW_CLOSE_REQUESTED: g_quit_req = 1; g_menu_open = 0; return;
    case SDL_EVENT_KEY_DOWN: {
        SDL_Keycode k = e->key.key;
        if (k == SDLK_ESCAPE || k == SDLK_BACKSPACE) { if (!e->key.repeat) g_menu_open = 0; }
        else if (k == SDLK_UP) menu_move(-1);
        else if (k == SDLK_DOWN) menu_move(1);
        else if (k == SDLK_LEFT) { if (g_menu_sel != MI_RESUME && g_menu_sel != MI_QUIT) menu_activate(g_menu_sel, -1); }
        else if (k == SDLK_RIGHT) { if (g_menu_sel != MI_RESUME && g_menu_sel != MI_QUIT) menu_activate(g_menu_sel, 1); }
        else if ((k == SDLK_RETURN || k == SDLK_KP_ENTER || k == SDLK_SPACE) && !e->key.repeat) menu_activate(g_menu_sel, 1);
        return;
    }
    case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
        switch (e->gbutton.button) {
        case SDL_GAMEPAD_BUTTON_DPAD_UP: menu_move(-1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_DOWN: menu_move(1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_LEFT: if (g_menu_sel != MI_RESUME && g_menu_sel != MI_QUIT) menu_activate(g_menu_sel, -1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_RIGHT: if (g_menu_sel != MI_RESUME && g_menu_sel != MI_QUIT) menu_activate(g_menu_sel, 1); break;
        case SDL_GAMEPAD_BUTTON_SOUTH: menu_activate(g_menu_sel, 1); break;
        case SDL_GAMEPAD_BUTTON_EAST:
        case SDL_GAMEPAD_BUTTON_START: g_menu_open = 0; break;
        default: break;
        }
        return;
    case SDL_EVENT_MOUSE_MOTION:
        if (e->motion.windowID == SDL_GetWindowID(menu_window())) {
            int i = menu_hit(e->motion.x, e->motion.y);
            if (i >= 0) g_menu_sel = i;
        }
        return;
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
        if (e->button.button == SDL_BUTTON_LEFT && e->button.windowID == SDL_GetWindowID(menu_window())) {
            int i = menu_hit(e->button.x, e->button.y);
            if (i >= 0) { g_menu_sel = i; menu_activate(i, 1); }
            else if (i == -2) g_menu_open = 0;
        }
        return;
    default:
        input_handle_event(e);   /* controller hotplug etc. */
        if (e->type == SDL_EVENT_WINDOW_MOVED || e->type == SDL_EVENT_WINDOW_RESIZED) plat_window_geom_event(e->window.windowID);
        return;
    }
}

static void menu_draw(int ww, int wh) {
    float px, py, pw, ph, s, row;
    menu_geom(ww, wh, &px, &py, &pw, &ph, &s, &row);
    menu_nv = 0;
    menu_rect(0, 0, (float)ww, (float)wh, 0, 0, 0, 0.45f);                         /* dim the game */
    menu_rect(px, py, pw, ph, 0.08f, 0.10f, 0.12f, 0.92f);                           /* panel */
    menu_rect(px, py, pw, 2 * s, 0.85f, 0.70f, 0.25f, 1);                            /* gold rule */
    menu_text(px + row * 0.6f, py + row * 0.45f, s, "Paused", 0.95f, 0.85f, 0.45f, 1);
    char buf[96];
    for (int i = 0; i < MI_COUNT; i++) {
        float y = py + (2 + i) * row;
        if (i == g_menu_sel) menu_rect(px + 4 * s, y, pw - 8 * s, row, 0.85f, 0.70f, 0.25f, 0.25f);
        menu_label(i, buf, sizeof buf);
        int dim = i == MI_SWAP && g_separate;   /* swap only arranges the joined window */
        float c = dim ? 0.5f : 1.0f;
        menu_text(px + row * 0.6f, y + (row - MENU_FONT_H * s) * 0.5f, s, buf, c, c, c, 1);
    }
    const char *hint = g_menu_note[0] ? g_menu_note : "Up/Down select   Left/Right/Enter change   Esc resume";
    float hs = s * 0.75f;
    menu_text(px + row * 0.6f, py + ph - row * 0.9f, hs, hint, 0.7f, 0.7f, 0.7f, 1);

    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glViewport(0, 0, ww, wh);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glUseProgram(menu_prog);
    glUniform4fv(menu_loc_size, 1, (float[4]){(float)ww, (float)wh, 0, 0});
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, menu_tex);
    glBindVertexArray(menu_vao);
    glBindBuffer(GL_ARRAY_BUFFER, menu_vbo);
    glBufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)(menu_nv * sizeof(MenuVtx)), menu_vtx);
    glDrawArrays(GL_TRIANGLES, 0, menu_nv);
    glBindVertexArray(0);
    glDisable(GL_BLEND);
}

/* modal loop: the last game frame + the menu until it closes (game paused) */
static void menu_run(void) {
    menu_gl_init();
    while (g_menu_open) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) menu_event(&e);
        if (!g_menu_open) break;
        if (!g_separate) {
            plat_layout_update();
            SDL_GL_MakeCurrent(win, ctx);
            plat_composite(&g_layout);
            menu_draw(g_layout.ww, g_layout.wh);
            SDL_GL_SwapWindow(win);
        } else {
            SDL_Window *mw = menu_window();
            for (int s = SCREEN_BOTTOM; s >= SCREEN_TOP; s--) {
                if (!layout_separate_visible(&g_layout_cfg, s)) continue;
                Layout l;
                SDL_GL_MakeCurrent(plat_window_of(s), ctx);
                plat_window_layout(s, &l);
                plat_composite(&l);
                if (plat_window_of(s) == mw) menu_draw(l.ww, l.wh);
                SDL_GL_SwapWindow(plat_window_of(s));
            }
            SDL_GL_MakeCurrent(win, ctx);
        }
        SDL_DelayNS(16000000ull);
    }
    next_frame_ns = plat_ticks_ns();   /* no catch-up burst after the pause */
}
