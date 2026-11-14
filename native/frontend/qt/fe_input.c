/* Qt frontend input glue (see fe_input.h). */
#include "fe_input.h"
#include "../../platform/input.h"
#include "../../platform/platform.h"
#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define MAX_ALT 6
#define MAX_COMBO 3
typedef struct { int n; SDL_Scancode sc[MAX_COMBO]; } Combo;
typedef struct { int n; Combo alt[MAX_ALT]; } KeyBind;

static PlatInput in;
static bool keys[SDL_SCANCODE_COUNT];
static KeyBind kbind[IN_ACTION_COUNT];
static int have_pads, frames, touching, touch_x, touch_y;

static const uint32_t ACTION_BITS[IN_DRIGHT + 1] = {
    KEY_A, KEY_B, KEY_X, KEY_Y, KEY_L, KEY_R, KEY_ZL, KEY_ZR, KEY_START, KEY_SELECT,
    KEY_DUP, KEY_DDOWN, KEY_DLEFT, KEY_DRIGHT};

static char *trim(char *s) {
    while (*s == ' ' || *s == '\t') s++;
    char *e = s + strlen(s);
    while (e > s && (e[-1] == ' ' || e[-1] == '\t')) *--e = 0;
    return s;
}

/* "Right Shift, Backspace", "Left Ctrl&Q", "none" */
static void parse_keys(const char *text, KeyBind *b) {
    char buf[IN_BIND_LEN];
    snprintf(buf, sizeof buf, "%s", text);
    memset(b, 0, sizeof *b);
    char *save = NULL;
    for (char *alt = strtok_r(buf, ",", &save); alt && b->n < MAX_ALT; alt = strtok_r(NULL, ",", &save)) {
        Combo c = {0};
        char *s2 = NULL;
        int bad = 0;
        for (char *el = strtok_r(alt, "&", &s2); el && c.n < MAX_COMBO; el = strtok_r(NULL, "&", &s2)) {
            el = trim(el);
            if (!*el || !strcasecmp(el, "none")) { bad = 1; break; }
            SDL_Scancode sc = !strcasecmp(el, "Comma") ? SDL_SCANCODE_COMMA : SDL_GetScancodeFromName(el);
            if (sc == SDL_SCANCODE_UNKNOWN) { bad = 1; break; }
            c.sc[c.n++] = sc;
        }
        if (!bad && c.n) b->alt[b->n++] = c;
    }
}

void fein_config_changed(void) {
    InputConfig *c = malloc(sizeof *c);
    input_get_config(c);
    for (int a = 0; a < IN_ACTION_COUNT; a++) parse_keys(c->key[a], &kbind[a]);
    free(c);
}

int fein_init(void) {
    have_pads = SDL_Init(SDL_INIT_GAMEPAD);
    if (!have_pads) fprintf(stderr, "input: SDL gamepad subsystem unavailable (%s): keyboard only\n", SDL_GetError());
    if (have_pads) input_init();
    else input_load(NULL);
    fein_config_changed();
    return have_pads ? 0 : -1;
}

void fein_shutdown(void) {
    if (have_pads) {
        input_shutdown();
        SDL_Quit();
    }
}

int fein_have_gamepads(void) { return have_pads; }

void fein_pump(void) {
    if (!have_pads) return;
    SDL_Event e;
    while (SDL_PollEvent(&e)) input_handle_event(&e);
}

void fein_key(int sc, int down) {
    if (sc <= 0 || sc >= SDL_SCANCODE_COUNT) return;
    if (down && !keys[sc]) {
        /* input.c sees the key press too: MENU/QUIT key bindings and "press a key" capture */
        SDL_Event e;
        memset(&e, 0, sizeof e);
        e.type = SDL_EVENT_KEY_DOWN;
        e.key.scancode = (SDL_Scancode)sc;
        e.key.down = true;
        input_handle_event(&e);
    }
    keys[sc] = down != 0;
}

void fein_clear_keys(void) { memset(keys, 0, sizeof keys); }

void fein_touch(int down, int x, int y) {
    touching = down;
    touch_x = x;
    touch_y = y;
}

static int combo_held(const Combo *c) {
    for (int i = 0; i < c->n; i++)
        if (!keys[c->sc[i]]) return 0;
    return c->n > 0;
}
static int bind_held(const KeyBind *b) {
    for (int i = 0; i < b->n; i++)
        if (combo_held(&b->alt[i])) return 1;
    return 0;
}

int fein_update(void) {
    if (++frames % 60 == 0) fein_config_changed();  /* input.cfg edited elsewhere (input.c reloads it too) */
    uint32_t prev = in.held, kb_sdl = 0, gp = 0, cp = 0;
    int ok = input_update(&in, &kb_sdl, &gp, &cp);   /* controllers (+ MENU/QUIT edges) */

    uint32_t kb = 0;
    for (int a = 0; a <= IN_DRIGHT; a++)
        if (bind_held(&kbind[a])) kb |= ACTION_BITS[a];
    int dx = bind_held(&kbind[IN_CPAD_RIGHT]) - bind_held(&kbind[IN_CPAD_LEFT]);
    int dy = bind_held(&kbind[IN_CPAD_UP]) - bind_held(&kbind[IN_CPAD_DOWN]);
    if (dx) in.cpad_x = (int16_t)(dx * 156);
    if (dy) in.cpad_y = (int16_t)(dy * 156);
    dx = bind_held(&kbind[IN_CSTICK_RIGHT]) - bind_held(&kbind[IN_CSTICK_LEFT]);
    dy = bind_held(&kbind[IN_CSTICK_UP]) - bind_held(&kbind[IN_CSTICK_DOWN]);
    if (dx) in.cstick_x = (int16_t)(dx * 156);
    if (dy) in.cstick_y = (int16_t)(dy * 156);
    cp = (in.cpad_x > 40 ? KEY_CPAD_RIGHT : 0) | (in.cpad_x < -40 ? KEY_CPAD_LEFT : 0) |
         (in.cpad_y > 40 ? KEY_CPAD_UP : 0) | (in.cpad_y < -40 ? KEY_CPAD_DOWN : 0);

    in.touch = touching;
    if (touching) {
        in.touch_x = touch_x;
        in.touch_y = touch_y;
    }
    in.held = kb | kb_sdl | gp | cp | (in.touch ? KEY_TOUCH : 0);
    in.down = in.held & ~prev;
    in.up = prev & ~in.held;
    return (ok ? 0 : 1) | (in.menu ? 2 : 0);
}

const struct PlatInput *fein_state(void) { return &in; }

void fein_touch_state(int *t, int *x, int *y) {
    *t = in.touch;
    *x = in.touch_x;
    *y = in.touch_y;
}
