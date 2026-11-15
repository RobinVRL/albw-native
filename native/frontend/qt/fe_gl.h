/* Qt frontend, GL side (plain C so it can use native/platform/gl.h, whose function-pointer names
 * clash with Qt's GL headers): GL loader, the two screen render targets and the compositor. */
#pragma once
#include <stdint.h>
#include "../../platform/layout.h"

#ifdef __cplusplus
extern "C" {
#endif

int fegl_init(void *(*get_proc)(const char *), int render_scale, int debug);  /* 0 = ok */
int fegl_ready(void);
void fegl_set_render_scale(int render_scale);   /* recreates the targets (contents cleared) */
int fegl_render_scale(void);
void fegl_begin_screen(int screen);             /* bind target FBO + viewport */
void fegl_rebind(void);                          /* re-bind the last begun target (after Qt painted) */
void fegl_screen_size(int screen, int *w, int *h);
/* Composite into `fbo` (the widget's framebuffer) of size l->ww x l->wh. GL state the game may
 * rely on (program, VAO, texture/sampler of unit 0, viewport, enables, clear colour, colour mask)
 * is saved and restored. */
void fegl_composite(unsigned fbo, const Layout *l, int linear);
/* The same from another (shared) context, e.g. the separate bottom-screen window's widget:
 * textures and programs are shared between contexts, vertex arrays are not, so that context
 * draws with its own `vao` (from fegl_new_vao, created while it is current). */
void fegl_composite_vao(unsigned fbo, unsigned vao, const Layout *l, int linear);
unsigned fegl_new_vao(void);
/* Read one screen target as top-down RGBA8 (w*h*4 bytes, see fegl_screen_size). */
void fegl_read_screen(int screen, uint8_t *rgba);
const char *fegl_renderer_string(void);

#ifdef __cplusplus
}
#endif
