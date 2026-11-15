/* ALBW native port: Qt 6 frontend, C ABI (64-bit only: Qt is installed as 64-bit).
 *
 * The frontend mirrors native/platform/platform.h so the game can switch backends at link time:
 *   - libalbw_frontend_qt also DEFINES the platform.h functions (plat_init, plat_poll, plat_input,
 *     plat_begin_screen, plat_screen_size, plat_end_frame, plat_ticks_ns, plat_shutdown) and the
 *     gl.h loader symbols (gl*, gl_load, gl_program, gl_enable_debug) on top of the fe_* calls
 *     below. Link it INSTEAD of native/platform/platform.c and the game runs unchanged in the Qt
 *     window (menus, layouts, dialogs). Do not link both.
 *   - Code that wants frontend features (pause state, ROM chosen in the menu, audio settings,
 *     status text) calls the fe_* functions directly.
 *
 * Threading / main loop: the game keeps its own loop on the main thread, exactly as with SDL:
 *     fe_init(); while (fe_poll()) { fe_begin_screen(0); draw; fe_begin_screen(1); draw; fe_end_frame(); }
 * fe_poll() pumps the Qt event loop (menus, dialogs, resizing) and the SDL gamepad events. While
 * the game is paused (Game > Pause), fe_poll() does not return: the window stays responsive and
 * shows the last frame. All fe_* functions must be called on the thread that called fe_init().
 * The game's OpenGL context is the frontend's QOpenGLWidget context (3.3 core); it is current
 * whenever fe_poll(), fe_begin_screen() or fe_end_frame() returns.
 *
 * Environment the frontend applies before the game reads it (fe_prepare):
 *   ALBW_ROM       if unset: the ROM chosen with File > Open ROM (remembered)
 *   ALBW_SAVE_DIR  if unset: Options > Paths > save folder (if set there)
 * Windows: by default the top screen is in the main window (with the menu bar) and the bottom
 * screen in a second window; View > Screen Layout > Separate Windows (F5) joins them into one
 * (saved in layout.cfg "windows"; ALBW_WINDOWS=separate|joined overrides it for one run).
 * Settings: QSettings ~/.config/albw-port/qt-frontend.conf; screen layout: layout.cfg (shared with
 * the SDL backend, native/platform/layout.h); controls: input.cfg (native/platform/input.h). */
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct PlatInput;   /* native/platform/platform.h */

enum { FE_SCREEN_TOP = 0, FE_SCREEN_BOTTOM = 1 };

typedef struct FeConfig {
    int scale;          /* initial window size = default layout * scale (saved geometry wins) */
    int render_scale;   /* internal resolution multiplier (Options/View override it) */
    int vsync;
} FeConfig;

/* Optional, first thing in main(): creates the QApplication with the real command line and
 * applies the saved ROM/save paths to the environment. fe_init() calls it if needed. */
void fe_prepare(int *argc, char **argv);

int fe_init(const char *title, const FeConfig *cfg);   /* window + GL context + screen targets; 0 = ok */
void fe_shutdown(void);
int fe_poll(void);                                     /* 0 = quit requested */
const struct PlatInput *fe_input(void);                /* valid after fe_poll() */
void fe_begin_screen(int screen);                      /* bind that screen's render target + viewport */
void fe_screen_size(int screen, int *w, int *h);       /* render-target size in pixels */
void fe_end_frame(void);                               /* composite (layout), present, pace 60 Hz */
uint64_t fe_ticks_ns(void);
void *fe_gl_get_proc(const char *name);                /* GL entry points of the frontend context */

/* frontend state */
int fe_paused(void);
void fe_set_paused(int paused);
const char *fe_rom_path(void);                         /* "" if none chosen */
void fe_set_status(const char *text);                  /* centred message over the view; NULL/"" = none */
void fe_audio_settings(int *volume_percent, int *muted, int *latency_ms);
/* Game > Reset: default re-executes the process (same arguments, current ALBW_ROM). A game that
 * can reset itself in place installs a handler instead. */
typedef void (*FeResetFn)(void *user);
void fe_set_reset_handler(FeResetFn fn, void *user);

#ifdef __cplusplus
}
#endif
