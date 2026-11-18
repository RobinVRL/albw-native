/* Esc menu bar of the SDL backend (#included by platform.c after its layout section).
 *
 * The QUIT binding (Escape by default, input.cfg) opens a menu bar across the top of the window
 * instead of ending the game; closing the window still quits. While it is open the game is paused:
 * plat_end_frame() runs menu_run(), which keeps redrawing the last game frame with the bar on top
 * and handles input until the menu closes (the game thread is blocked like during a vblank wait).
 *
 * Menus:
 *  File   Resume, State slot (1..10), Save state (F6), Load state (F7) - native/runtime/savestate.c,
 *         Reload controls (input.cfg), Quit game
 *  Video  Windows (separate / joined), Layout preset, Swap screens, Filter, Integer scale,
 *         Resolution (internal render scale 1x..8x), Fullscreen, Edit layout (the F3 mouse editor),
 *         Menu style (this menu as a bar across the top or as a centered panel with the same tabs)
 *  Controls  Device (keyboard / controller), one row per input.cfg action (Enter: press the new
 *         key / button, - or Delete: clear), Reset to defaults; saved to input.cfg at once
 *  Debug  Particles, Fog, Show FPS (window title), Speed (25 % .. unlimited). The retail code has
 *         no hidden debug menu to expose (searched: the only developer leftovers are the course
 *         list's E3Field / Test* names, whose course files are not on the ROM, the Dbg:* heaps and
 *         the event flag name cmn_debug_goal_on), so this menu holds the port's own switches.
 *
 * Keys: Left / Right switch menus, Up / Down select, Enter / Space (or +) changes forward, - (or
 * Shift+Enter) backward, Escape / Backspace close. Gamepad: D-pad, A changes, Y backward, B / Start
 * close. Mouse: click a title to open its menu, click an item (right click: backward), click
 * outside closes. Video changes are saved to layout.cfg as with F2-F5.
 *
 * Text: native/platform/menu_font.h (tools/gen_menu_font.py), one textured-quad program. */
#include "menu_font.h"

/* g_menu_open, g_menu_sel, g_quit_req, g_menu_note: declared at the top of platform.c */
static GLuint menu_prog, menu_vao, menu_vbo, menu_tex;
static int g_menu_scroll, g_menu_max_rows = 1000;   /* long menus (Controls) scroll */
static int g_bind_pad;                               /* Controls: 0 keyboard, 1 controller */
static int g_bind_wait = -1;                         /* Controls: action waiting for a key / button */

static const char *bind_action_label(int a) {
    static const char *const L[IN_ACTION_COUNT] = {
        "A", "B", "X", "Y", "L", "R", "ZL", "ZR", "Start", "Select",
        "D-pad up", "D-pad down", "D-pad left", "D-pad right",
        "Circle pad up", "Circle pad down", "Circle pad left", "Circle pad right",
        "C-stick up", "C-stick down", "C-stick left", "C-stick right",
        "Input menu", "Esc menu", "Other screen"};
    return (unsigned)a < IN_ACTION_COUNT ? L[a] : "?";
}

/* set (or clear: name "") the binding of action a for the current device and save input.cfg */
static void bind_set(int a, const char *name) {
    InputConfig c;
    input_get_config(&c);
    char *dst = g_bind_pad ? c.pad.bind[a] : c.key[a];
    snprintf(dst, IN_BIND_LEN, "%s", name);
    if (input_set_config(&c) == 0 && input_save(NULL) == 0)
        snprintf(g_menu_note, sizeof g_menu_note, name[0] ? "%s = %s (saved)" : "%s cleared (saved)", bind_action_label(a), name);
    else
        snprintf(g_menu_note, sizeof g_menu_note, "Cannot save: %s", input_last_error());
}
static GLint menu_loc_size;

typedef struct { float x, y, u, v, r, g, b, a; } MenuVtx;
#define MENU_MAX_VTX (6 * 2048)
static MenuVtx menu_vtx[MENU_MAX_VTX];
static int menu_nv;

enum { MI_RESUME, MI_WINDOWS, MI_SINGLE, MI_PRESET, MI_SWAP, MI_FILTER, MI_INTEGER, MI_RES, MI_FULLSCREEN, MI_EDIT,
       MI_CONTROLS, MI_QUIT, MI_STYLE, MI_BIND_DEV, MI_BIND_RESET, MI_SS_SLOT, MI_SS_SAVE, MI_SS_LOAD, MI_DBG_EFT, MI_DBG_FOG, MI_DBG_FPS, MI_DBG_SPEED, MI_COUNT };

typedef struct { const char *title; const int *items; int n; const char *const *notes; } MenuDef;
#define MI_BIND_BASE 200   /* MI_BIND_BASE + InAction: one Controls row per action */
static int menu_controls_items[2 + IN_ACTION_COUNT] = {MI_BIND_DEV, MI_BIND_RESET};   /* rest: menu_gl_init */
static const char *const menu_controls_notes[] = {"Enter: press the new key / button   - or Delete: clear",
                                                  "Several keys: edit input.cfg (\"A, B\" or \"Ctrl&X\")", NULL};
static const int menu_file_items[] = {MI_RESUME, MI_SS_SLOT, MI_SS_SAVE, MI_SS_LOAD, MI_CONTROLS, MI_QUIT};
static const int menu_video_items[] = {MI_WINDOWS, MI_SINGLE, MI_PRESET, MI_SWAP, MI_FILTER, MI_INTEGER, MI_RES, MI_FULLSCREEN, MI_EDIT, MI_STYLE};
static const int menu_debug_items[] = {MI_DBG_EFT, MI_DBG_FOG, MI_DBG_FPS, MI_DBG_SPEED};
static const char *const menu_debug_notes[] = {"Game debug menus: none in the retail code", "(dev courses E3Field / Test*: not on the ROM)",
                                               NULL};
#define MENU_N(a) ((int)(sizeof(a) / sizeof(a)[0]))
static const MenuDef menu_defs[] = {
    {"File", menu_file_items, MENU_N(menu_file_items), NULL},
    {"Video", menu_video_items, MENU_N(menu_video_items), NULL},
    {"Controls", menu_controls_items, MENU_N(menu_controls_items), menu_controls_notes},
    {"Debug", menu_debug_items, MENU_N(menu_debug_items), menu_debug_notes},
};
#define MENU_COUNT MENU_N(menu_defs)
static const int menu_speeds[] = {25, 50, 100, 200, 0};   /* Debug > Speed, percent (0 = unlimited) */

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
    for (int a = 0; a < IN_ACTION_COUNT; a++) menu_controls_items[2 + a] = MI_BIND_BASE + a;
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
    if (i >= MI_BIND_BASE && i < MI_BIND_BASE + IN_ACTION_COUNT) {
        int a = i - MI_BIND_BASE;
        if (a == g_bind_wait) { snprintf(buf, n, "%-16s ... press a %s (Esc: cancel)", bind_action_label(a), g_bind_pad ? "button" : "key"); return; }
        InputConfig c;
        input_get_config(&c);
        const char *b = g_bind_pad ? c.pad.bind[a] : c.key[a];
        snprintf(buf, n, "%-16s %s", bind_action_label(a), b[0] ? b : "-");
        return;
    }
    switch (i) {
    case MI_RESUME: snprintf(buf, n, "Resume"); break;
    case MI_BIND_DEV: snprintf(buf, n, "Device         < %s >", g_bind_pad ? "Controller" : "Keyboard"); break;
    case MI_BIND_RESET: snprintf(buf, n, "Reset %s controls to defaults", g_bind_pad ? "controller" : "keyboard"); break;
    case MI_WINDOWS: snprintf(buf, n, "Windows        < %s >", g_separate ? "Separate" : "Joined"); break;
    case MI_SINGLE: snprintf(buf, n, "Single screen  < %s >", g_layout_cfg.single_screen ? "On (Tab: other screen)" : "Off"); break;
    case MI_PRESET: snprintf(buf, n, "Layout         < %s >", layout_preset_name(g_layout_cfg.preset)); break;
    case MI_SWAP: snprintf(buf, n, "Swap screens   < %s >", g_layout_cfg.swap ? "On" : "Off"); break;
    case MI_FILTER: snprintf(buf, n, "Filter         < %s >", g_layout_cfg.linear_filter ? "Linear" : "Nearest"); break;
    case MI_INTEGER: snprintf(buf, n, "Integer scale  < %s >", g_layout_cfg.integer_scale ? "On" : "Off"); break;
    case MI_RES: snprintf(buf, n, "Resolution     < %dx (%dx%d) >", render_get_scale(), 400 * render_get_scale(), 240 * render_get_scale()); break;
    case MI_FULLSCREEN: snprintf(buf, n, "Fullscreen     < %s >", menu_fullscreen() ? "On" : "Off"); break;
    case MI_EDIT: snprintf(buf, n, "Edit layout with the mouse (F3)"); break;
    case MI_CONTROLS: snprintf(buf, n, "Reload controls (input.cfg)"); break;
    case MI_QUIT: snprintf(buf, n, "Quit game"); break;
    case MI_STYLE: snprintf(buf, n, "Menu style     < %s >", g_layout_cfg.menu_centered ? "Centered" : "Bar"); break;
    case MI_SS_SLOT: {
        char info[64] = "unavailable";
        if (albw_ss_slot_info) albw_ss_slot_info(g_ss_slot, info, sizeof info);
        snprintf(buf, n, "State slot     < %d: %s >", g_ss_slot + 1, info);
        break;
    }
    case MI_SS_SAVE: snprintf(buf, n, "Save state  (F6)"); break;
    case MI_SS_LOAD: snprintf(buf, n, "Load state  (F7)"); break;
    case MI_DBG_EFT: snprintf(buf, n, "Particles      < %s >", g_dbg_eft_off ? "Off" : "On"); break;
    case MI_DBG_FOG: snprintf(buf, n, "Fog            < %s >", g_dbg_fog_off ? "Off" : "On"); break;
    case MI_DBG_FPS: snprintf(buf, n, "Show FPS       < %s >", g_dbg_show_fps ? "On (title bar)" : "Off"); break;
    case MI_DBG_SPEED:
        if (g_dbg_speed) snprintf(buf, n, "Speed          < %d %% >", g_dbg_speed);
        else snprintf(buf, n, "Speed          < Unlimited >");
        break;
    default: buf[0] = 0;
    }
}

/* geometry for a window of ww x wh pixels. Bar style: the tab bar spans the window's top edge
 * and the open menu drops down under its title. Centered style: one panel in the middle, the
 * same tab bar along its top and the open menu filling the panel (sized for the largest menu, so
 * switching tabs does not resize it). */
typedef struct {
    float s, row, bar_h;           /* text scale, item row height, bar height */
    float bx, by, bw;              /* the tab bar */
    float tx[MENU_COUNT + 1];      /* title x positions (tx[m] .. tx[m + 1]) */
    float dx, dy, dw, dh;          /* dropdown of the current menu (centered: the panel body) */
    int nnotes;
} MenuGeom;

/* width (characters) and height (pixels) of menu m's dropdown */
static void menu_size(int m, float row, size_t *chars, float *h, int *nnotes) {
    const MenuDef *d = &menu_defs[m];
    char buf[96];
    size_t longest = 24;
    for (int k = 0; k < d->n; k++) {
        menu_label(d->items[k], buf, sizeof buf);
        if (strlen(buf) > longest) longest = strlen(buf);
    }
    int nn = 0;
    for (const char *const *t = d->notes; t && *t; t++, nn++)
        if (strlen(*t) * 0.75 > longest) longest = (size_t)(strlen(*t) * 0.75) + 1;
    *chars = longest + 3;
    int rows = d->n < g_menu_max_rows ? d->n : g_menu_max_rows;
    *h = rows * row + row * 0.5f + (nn ? (nn + 0.5f) * row * 0.8f : 0);
    *nnotes = nn;
}

static void menu_geom(int ww, int wh, MenuGeom *g) {
    float sc = wh / 540.0f;
    if (sc < 0.6f) sc = 0.6f;
    if (sc > 2.0f) sc = 2.0f;
    g->s = sc;
    g->row = MENU_FONT_H * sc * 1.5f;
    g->bar_h = MENU_FONT_H * sc * 1.7f;
    g_menu_max_rows = (int)((wh - g->bar_h - g->row * 4.5f) / g->row);   /* room for the notes */
    if (g_menu_max_rows < 4) g_menu_max_rows = 4;
    float cw = MENU_FONT_W * sc;
    size_t chars;
    float h;
    menu_size(g_menu_cur, g->row, &chars, &h, &g->nnotes);
    if (!g_layout_cfg.menu_centered) {
        g->bx = 0, g->by = 0, g->bw = (float)ww;
        g->dw = chars * cw;
        g->dh = h;
    } else {
        size_t mc = 0;
        float mh = 0;
        for (int m = 0; m < MENU_COUNT; m++) {
            size_t c; float hh; int nn;
            menu_size(m, g->row, &c, &hh, &nn);
            if (c > mc) mc = c;
            if (hh > mh) mh = hh;
        }
        g->bw = mc * cw;
        if (g->bw > ww - 8) g->bw = (float)(ww - 8);
        g->dh = mh;
        g->bx = (ww - g->bw) * 0.5f;
        g->by = (wh - g->bar_h - mh) * 0.5f;
        if (g->by < 0) g->by = 0;
        g->dw = g->bw;
    }
    float x = g->bx + cw;
    for (int m = 0; m < MENU_COUNT; m++) {
        g->tx[m] = x;
        x += (strlen(menu_defs[m].title) + 3) * cw;
    }
    g->tx[MENU_COUNT] = x;
    if (!g_layout_cfg.menu_centered) {
        if (g->dw > ww - 8) g->dw = (float)(ww - 8);
        g->dx = g->tx[g_menu_cur] - cw * 0.5f;
        if (g->dx + g->dw > ww - 4) g->dx = ww - 4 - g->dw;
        if (g->dx < 4) g->dx = 4;
    } else g->dx = g->bx;
    g->dy = g->by + g->bar_h;
}

static void menu_activate(int i, int dir) {
    g_menu_note[0] = 0;
    if (i >= MI_BIND_BASE && i < MI_BIND_BASE + IN_ACTION_COUNT) {
        if (dir < 0) bind_set(i - MI_BIND_BASE, "");
        else { g_bind_wait = i - MI_BIND_BASE; input_capture_reset(); }
        return;
    }
    switch (i) {
    case MI_BIND_DEV: g_bind_pad ^= 1; break;
    case MI_BIND_RESET: {
        InputConfig c, d;
        input_get_config(&c);
        input_defaults(&d);
        for (int a = 0; a < IN_ACTION_COUNT; a++) {
            if (g_bind_pad) memcpy(c.pad.bind[a], d.pad.bind[a], IN_BIND_LEN);
            else memcpy(c.key[a], d.key[a], IN_BIND_LEN);
        }
        if (input_set_config(&c) == 0 && input_save(NULL) == 0) snprintf(g_menu_note, sizeof g_menu_note, "Defaults restored (saved)");
        else snprintf(g_menu_note, sizeof g_menu_note, "Cannot save: %s", input_last_error());
        break;
    }
    case MI_RESUME: g_menu_open = 0; break;
    case MI_WINDOWS: plat_set_windows(!g_separate, 1); break;
    case MI_PRESET: {
        if (g_separate) { plat_separate_cycle(dir < 0); break; }   /* as F2: both / top only / bottom only */
        int n = LAYOUT_PRESET_COUNT;
        g_layout_cfg.preset = (g_layout_cfg.preset + (dir < 0 ? n - 1 : 1)) % n;
        plat_layout_changed();
        break;
    }
    case MI_SINGLE: plat_single_screen_set(!g_layout_cfg.single_screen); break;
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
    case MI_STYLE: g_layout_cfg.menu_centered ^= 1; plat_layout_changed(); break;
    case MI_SS_SLOT: g_ss_slot = (g_ss_slot + (dir < 0 ? SS_SLOTS_UI - 1 : 1)) % SS_SLOTS_UI; break;
    case MI_SS_SAVE:
    case MI_SS_LOAD:   /* runs at the next frame end (the game continues from here) */
        if (!albw_ss_request) { snprintf(g_menu_note, sizeof g_menu_note, "Save states are not available here"); break; }
        albw_ss_request(i == MI_SS_SAVE ? 1 : 2, g_ss_slot);
        g_menu_open = 0;
        break;
    case MI_DBG_EFT:
        g_dbg_eft_off ^= 1;
        snprintf(g_menu_note, sizeof g_menu_note, "Particles %s from the next frame", g_dbg_eft_off ? "off" : "on");
        break;
    case MI_DBG_FOG: g_dbg_fog_off ^= 1; break;
    case MI_DBG_FPS: g_dbg_show_fps ^= 1; break;
    case MI_DBG_SPEED: {
        int n = MENU_N(menu_speeds), k = 0;
        while (k < n && menu_speeds[k] != g_dbg_speed) k++;
        if (k == n) k = 2;
        g_dbg_speed = menu_speeds[(k + (dir < 0 ? n - 1 : 1)) % n];
        break;
    }
    }
}

static void menu_move(int d) {
    int n = menu_defs[g_menu_cur].n;
    g_menu_sel = (g_menu_sel + d + n) % n;
}
static void menu_switch(int d) {
    g_menu_cur = (g_menu_cur + d + MENU_COUNT) % MENU_COUNT;
    g_menu_sel = 0;
    g_menu_scroll = 0;
    g_menu_note[0] = 0;
}
static void menu_do(int dir) { menu_activate(menu_defs[g_menu_cur].items[g_menu_sel], dir); }

/* mouse position (window pixels of the menu window) -> 0..n-1 item of the open menu, 1000 + m the
 * title of menu m, -1 on the bar / dropdown but not on an item, -2 outside both */
static int menu_hit(float mx, float my) {
    SDL_Window *mw = menu_window();
    float pd = SDL_GetWindowPixelDensity(mw);
    int ww, wh;
    SDL_GetWindowSizeInPixels(mw, &ww, &wh);
    MenuGeom g;
    menu_geom(ww, wh, &g);
    mx *= pd, my *= pd;
    if (my >= g.by && my < g.by + g.bar_h && mx >= g.bx && mx < g.bx + g.bw) {
        for (int m = 0; m < MENU_COUNT; m++)
            if (mx >= g.tx[m] - MENU_FONT_W * g.s * 0.5f && mx < g.tx[m + 1] - MENU_FONT_W * g.s * 0.5f) return 1000 + m;
        return -1;
    }
    if (mx < g.dx || mx > g.dx + g.dw || my < g.dy || my > g.dy + g.dh) return -2;
    int i = (int)((my - (g.dy + g.row * 0.25f)) / g.row);
    if (i < 0 || i >= g_menu_max_rows) return -1;
    i += g_menu_scroll;
    return i < menu_defs[g_menu_cur].n ? i : -1;
}

static void menu_event(const SDL_Event *e) {
    if (g_bind_wait >= 0) {   /* Controls: waiting for the new key / button */
        if (e->type == SDL_EVENT_QUIT || e->type == SDL_EVENT_WINDOW_CLOSE_REQUESTED) { g_bind_wait = -1; g_quit_req = 1; g_menu_open = 0; return; }
        if (e->type == SDL_EVENT_KEY_DOWN && !e->key.repeat && e->key.key == SDLK_ESCAPE) { g_bind_wait = -1; return; }
        if (e->type == SDL_EVENT_KEY_DOWN && !e->key.repeat && e->key.key == SDLK_DELETE) { bind_set(g_bind_wait, ""); g_bind_wait = -1; return; }
        input_handle_event(e);
        char nm[48];
        uint32_t id;
        if (input_capture(nm, sizeof nm, &id)) {
            char err[160];
            if (input_check_binding(nm, !g_bind_pad, (InAction)g_bind_wait, err, sizeof err) == 0) {
                bind_set(g_bind_wait, nm);
                g_bind_wait = -1;
            }   /* a key while binding the controller (or the reverse): keep waiting */
        }
        return;
    }
    switch (e->type) {
    case SDL_EVENT_QUIT:
    case SDL_EVENT_WINDOW_CLOSE_REQUESTED: g_quit_req = 1; g_menu_open = 0; return;
    case SDL_EVENT_KEY_DOWN: {
        SDL_Keycode k = e->key.key;
        int back = (e->key.mod & SDL_KMOD_SHIFT) != 0;
        if (k == SDLK_ESCAPE || k == SDLK_BACKSPACE) { if (!e->key.repeat) g_menu_open = 0; }
        else if (k == SDLK_UP) menu_move(-1);
        else if (k == SDLK_DOWN) menu_move(1);
        else if (k == SDLK_LEFT) menu_switch(-1);
        else if (k == SDLK_RIGHT || k == SDLK_TAB) menu_switch(back ? -1 : 1);
        else if (k == SDLK_MINUS || k == SDLK_KP_MINUS || k == SDLK_DELETE) menu_do(-1);
        else if (k == SDLK_PLUS || k == SDLK_EQUALS || k == SDLK_KP_PLUS) menu_do(1);
        else if ((k == SDLK_RETURN || k == SDLK_KP_ENTER || k == SDLK_SPACE) && !e->key.repeat) menu_do(back ? -1 : 1);
        return;
    }
    case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
        switch (e->gbutton.button) {
        case SDL_GAMEPAD_BUTTON_DPAD_UP: menu_move(-1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_DOWN: menu_move(1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_LEFT:
        case SDL_GAMEPAD_BUTTON_LEFT_SHOULDER: menu_switch(-1); break;
        case SDL_GAMEPAD_BUTTON_DPAD_RIGHT:
        case SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER: menu_switch(1); break;
        case SDL_GAMEPAD_BUTTON_SOUTH: menu_do(1); break;
        case SDL_GAMEPAD_BUTTON_NORTH: menu_do(-1); break;
        case SDL_GAMEPAD_BUTTON_EAST:
        case SDL_GAMEPAD_BUTTON_START: g_menu_open = 0; break;
        default: break;
        }
        return;
    case SDL_EVENT_MOUSE_MOTION:
        if (e->motion.windowID == SDL_GetWindowID(menu_window())) {
            int i = menu_hit(e->motion.x, e->motion.y);
            if (i >= 1000 && i - 1000 != g_menu_cur) { g_menu_cur = i - 1000; g_menu_sel = 0; }   /* hover switches */
            else if (i >= 0 && i < 1000) g_menu_sel = i;
        }
        return;
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
        if ((e->button.button == SDL_BUTTON_LEFT || e->button.button == SDL_BUTTON_RIGHT) &&
            e->button.windowID == SDL_GetWindowID(menu_window())) {
            int i = menu_hit(e->button.x, e->button.y);
            if (i >= 1000) { g_menu_cur = i - 1000; g_menu_sel = 0; }
            else if (i >= 0) { g_menu_sel = i; menu_do(e->button.button == SDL_BUTTON_RIGHT ? -1 : 1); }
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
    MenuGeom g;
    menu_geom(ww, wh, &g);
    float s = g.s, cw = MENU_FONT_W * s, th = MENU_FONT_H * s;
    const MenuDef *d = &menu_defs[g_menu_cur];
    menu_nv = 0;
    menu_rect(0, 0, (float)ww, (float)wh, 0, 0, 0, g_layout_cfg.menu_centered ? 0.45f : 0.30f);   /* dim the game */
    menu_rect(g.bx, g.by, g.bw, g.bar_h, 0.08f, 0.10f, 0.12f, 0.96f);                    /* bar */
    menu_rect(g.bx, g.by + g.bar_h - 2 * s, g.bw, 2 * s, 0.85f, 0.70f, 0.25f, 1);        /* gold rule */
    for (int m = 0; m < MENU_COUNT; m++) {
        if (m == g_menu_cur)
            menu_rect(g.tx[m] - cw * 0.5f, g.by, g.tx[m + 1] - g.tx[m], g.bar_h - 2 * s, 0.85f, 0.70f, 0.25f, 0.35f);
        float c = m == g_menu_cur ? 1.0f : 0.8f;
        menu_text(g.tx[m] + cw, g.by + (g.bar_h - th) * 0.5f, s, menu_defs[m].title, c, c * (m == g_menu_cur ? 0.9f : 1), c * (m == g_menu_cur ? 0.6f : 1), 1);
    }
    {   /* a note from the last action, else the keys: bar style on the bar's right, centered style
         * under the panel */
        const char *hint = g_menu_note[0] ? g_menu_note : "Paused   Left/Right menus   Enter change   Esc resume";
        float hs = s * 0.75f, w = strlen(hint) * MENU_FONT_W * hs;
        if (!g_layout_cfg.menu_centered) {
            float x = ww - w - cw;
            if (x > g.tx[MENU_COUNT] + cw) menu_text(x, (g.bar_h - MENU_FONT_H * hs) * 0.5f, hs, hint, 0.7f, 0.7f, 0.7f, 1);
        } else {
            float y = g.dy + g.dh + g.row * 0.3f;
            menu_rect(g.bx, y - g.row * 0.15f, g.bw, MENU_FONT_H * hs + g.row * 0.3f, 0.08f, 0.10f, 0.12f, 0.85f);
            menu_text(g.bx + (g.bw - w) * 0.5f > g.bx ? g.bx + (g.bw - w) * 0.5f : g.bx, y, hs, hint, 0.7f, 0.7f, 0.7f, 1);
        }
    }
    menu_rect(g.dx, g.dy, g.dw, g.dh, 0.08f, 0.10f, 0.12f, 0.94f);                       /* dropdown */
    char buf[96];
    int rows = d->n < g_menu_max_rows ? d->n : g_menu_max_rows;
    if (g_menu_sel < g_menu_scroll) g_menu_scroll = g_menu_sel;
    if (g_menu_sel >= g_menu_scroll + rows) g_menu_scroll = g_menu_sel - rows + 1;
    if (g_menu_scroll > d->n - rows) g_menu_scroll = d->n - rows;
    if (g_menu_scroll < 0) g_menu_scroll = 0;
    for (int k = g_menu_scroll; k < g_menu_scroll + rows; k++) {
        int i = d->items[k];
        float y = g.dy + g.row * 0.25f + (k - g_menu_scroll) * g.row;
        if (k == g_menu_sel) menu_rect(g.dx + 4 * s, y, g.dw - 8 * s, g.row, 0.85f, 0.70f, 0.25f, 0.25f);
        menu_label(i, buf, sizeof buf);
        float c = i == MI_SWAP && g_separate ? 0.5f : 1.0f;   /* swap only arranges the joined window */
        menu_text(g.dx + cw, y + (g.row - th) * 0.5f, s, buf, c, c, c, 1);
    }
    for (int k = 0; k < g.nnotes; k++) {
        float hs = s * 0.75f;
        float y = g.dy + g.row * 0.25f + rows * g.row + g.row * 0.3f + k * g.row * 0.8f;
        menu_text(g.dx + cw, y, hs, d->notes[k], 0.55f, 0.55f, 0.55f, 1);
    }

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
