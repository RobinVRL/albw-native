/* Qt frontend input glue (C): builds the PlatInput the game reads.
 *   keyboard: Qt key events -> SDL scancodes (keymap.cpp) -> the [keyboard] bindings of input.cfg
 *             (evaluated here: without an SDL window SDL has no keyboard state)
 *   gamepads: native/platform/input.c on SDL3 (SDL_INIT_GAMEPAD only, no SDL window)
 *   touch:    mouse on the bottom screen, mapped through the layout by the view */
#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct PlatInput;
int fein_init(void);                          /* SDL gamepad subsystem + input.c; 0 = ok (keyboard works anyway) */
void fein_shutdown(void);
void fein_pump(void);                         /* SDL events -> input.c (hotplug, capture) */
void fein_key(int scancode, int down);        /* SDL scancode from a Qt key event (no auto-repeat) */
void fein_clear_keys(void);                   /* focus lost */
void fein_touch(int down, int x, int y);      /* native bottom-screen coordinates */
void fein_config_changed(void);               /* re-read the keyboard bindings (after the dialog saved) */
/* Once per frame. Returns flags: 1 = quit requested, 2 = menu binding pressed this frame. */
int fein_update(void);
const struct PlatInput *fein_state(void);
void fein_touch_state(int *touch, int *x, int *y);  /* from the last fein_update() */
int fein_have_gamepads(void);                 /* SDL gamepad subsystem available */

#ifdef __cplusplus
}
#endif
