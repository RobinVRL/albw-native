/* native/platform/platform.h implemented on the Qt frontend, so the game (and the platform demo /
 * asset viewer) link against this library instead of platform.c without source changes. */
#include "frontend.h"
#include "../../platform/platform.h"

_Static_assert(FE_SCREEN_TOP == SCREEN_TOP && FE_SCREEN_BOTTOM == SCREEN_BOTTOM, "screen ids");

int plat_init(const char *title, const PlatConfig *c) {
    FeConfig f = {c ? c->scale : 2, c ? c->render_scale : 1, c ? c->vsync : 1};
    return fe_init(title, &f);
}
void plat_shutdown(void) { fe_shutdown(); }
int plat_poll(void) { return fe_poll(); }
const PlatInput *plat_input(void) { return (const PlatInput *)fe_input(); }
void plat_begin_screen(int screen) { fe_begin_screen(screen); }
void plat_screen_size(int screen, int *w, int *h) { fe_screen_size(screen, w, h); }
void plat_end_frame(void) { fe_end_frame(); }
uint64_t plat_ticks_ns(void) { return fe_ticks_ns(); }
