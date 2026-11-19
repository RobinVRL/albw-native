/* Native platform layer: window, OpenGL context, the two 3DS screens, input, frame pacing.
 * The game's graphics/input SDK calls are reimplemented on top of this (no emulation). */
#pragma once
#include <stdint.h>
#include "gl.h"

enum { SCREEN_TOP = 0, SCREEN_BOTTOM = 1 };
int layout_top_w(void);
#define TOP_W (layout_top_w())   /* 400, or 427 in widescreen (layout.c) */
#define BOTTOM_W 320
#define SCREEN_H 240

/* 3DS button bits, as the game's input code expects them */
enum {
    KEY_A = 1u << 0, KEY_B = 1u << 1, KEY_SELECT = 1u << 2, KEY_START = 1u << 3,
    KEY_DRIGHT = 1u << 4, KEY_DLEFT = 1u << 5, KEY_DUP = 1u << 6, KEY_DDOWN = 1u << 7,
    KEY_R = 1u << 8, KEY_L = 1u << 9, KEY_X = 1u << 10, KEY_Y = 1u << 11,
    KEY_ZL = 1u << 14, KEY_ZR = 1u << 15, KEY_TOUCH = 1u << 20,
    KEY_CPAD_RIGHT = 1u << 28, KEY_CPAD_LEFT = 1u << 29, KEY_CPAD_UP = 1u << 30, KEY_CPAD_DOWN = 1u << 31,
};

typedef struct PlatInput {
    uint32_t held, down, up;   /* down/up: changed this frame */
    int16_t cpad_x, cpad_y;    /* circle pad, -156..156 like the hardware */
    int touch;                 /* bottom screen touched */
    int touch_x, touch_y;      /* 0..319, 0..239 */
    /* from input.c (keyboard + controllers, configured in input.cfg: see input.h) */
    int16_t cstick_x, cstick_y;  /* New 3DS C-stick (right stick by default), -156..156, +y = up;
                                    not in held (the game does not read it) */
    int menu;                  /* frontend menu binding pressed this frame (never seen by the game) */
    int screen;                /* SCREEN binding pressed this frame: single-screen mode toggle (frontend) */
    int controllers;           /* game controllers connected */
    int motion;                /* 1 = accel/gyro come from a controller's sensors this frame */
    float accel[3];            /* G, SDL axes (controller held in front of you: +x right, +y up,
                                  +z toward you); no sensor = lying still: 0, 1, 0 */
    float gyro[3];             /* deg/s around those axes (pitch, yaw, roll); no sensor = 0 */
} PlatInput;

typedef struct {
    int scale;                 /* window size = native size * scale */
    int render_scale;          /* internal resolution multiplier for the screen render targets */
    int vsync;
} PlatConfig;

int plat_init(const char *title, const PlatConfig *cfg);
void plat_shutdown(void);
int plat_poll(void);                        /* process events; 0 = quit requested */
const PlatInput *plat_input(void);
void plat_begin_screen(int screen);         /* bind that screen's render target + viewport */
void plat_screen_size(int screen, int *w, int *h);   /* render-target size in pixels */
void plat_end_frame(void);                  /* composite both screens into the window, present, pace 60 Hz */
uint64_t plat_ticks_ns(void);
