/* Native input: keyboard + game controllers (SDL3 gamepad API) -> the 3DS inputs of PlatInput.
 *
 * Not game code. platform.c feeds SDL events in and calls input_update() once per frame; a
 * frontend (the Qt "Controllers..." dialog) edits the configuration through the API below.
 *
 * ================================================================== devices
 * - Every device SDL knows as a gamepad is used: Xbox 360/One/Series, PlayStation 3/4/5,
 *   Switch Pro / Joy-Cons, 8BitDo, Steam, GameCube adapters and the generic USB pads covered by
 *   SDL's built-in mapping database.
 * - Extra SDL mappings are loaded at start-up from (first found wins, all are tried):
 *       $XDG_CONFIG_HOME/albw-port/gamecontrollerdb.txt   (default ~/.config/albw-port/...)
 *       ./gamecontrollerdb.txt
 *   (the community file https://github.com/mdqinc/SDL_GameControllerDB works as is; SDL itself
 *   also honours the SDL_GAMECONTROLLERCONFIG / SDL_GAMECONTROLLERCONFIG_FILE env variables).
 * - A joystick SDL has no gamepad mapping for gets a best-effort generic one (the
 *   "fallback_mapping" setting, SDL mapping syntax) so it works like any gamepad.
 * - Hotplug: controllers can be connected/disconnected at any time. With "controllers = active"
 *   the controller that last pressed a button (or moved a stick/trigger past half way) drives
 *   the game; the first connected one does until then. With "controllers = any" all connected
 *   controllers are merged (buttons OR-ed, the largest stick deflection wins).
 * - Motion: controllers with an accelerometer/gyro (DualShock 4, DualSense, Switch Pro,
 *   Joy-Cons, Steam...) have their sensors enabled ("motion = on") and fill PlatInput.accel /
 *   PlatInput.gyro; otherwise those report a controller lying still (see platform.h).
 *
 * ================================================================== config file
 * Path: $ALBW_INPUT_CFG if set, else $XDG_CONFIG_HOME/albw-port/input.cfg (default
 * ~/.config/albw-port/input.cfg). Missing file = built-in defaults (input_save() writes one).
 * The file is re-read automatically when its modification time changes (checked about once a
 * second) and on input_reload().
 *
 * Plain text, one "key = value" per line. Lines whose first non-blank character is '#' are
 * comments. Keys, section names and setting values are case-insensitive. Unknown keys are
 * reported (input_last_error()) and skipped. Numbers are integers (percentages), so the file
 * does not depend on the locale.
 *
 *   [general]
 *   controllers = active | any          which controller drives the game (see above)
 *   motion = on | off                   use controller accelerometer/gyro
 *   fallback = on | off                 generic mapping for joysticks SDL does not know
 *   fallback_mapping = <SDL mapping>    e.g. a:b2,b:b1,x:b3,y:b0,leftx:a0,lefty:a1,...
 *                                       (empty = built-in guess from the button/axis count)
 *
 *   [keyboard]
 *   <ACTION> = <binding>                see "actions" and "bindings"
 *
 *   [gamepad]                           defaults for every controller
 *   layout = positional | labels        what "auto" means for A/B/X/Y:
 *                                         positional (default): Nintendo positions, east = A,
 *                                           south = B, north = X, west = Y on every controller
 *                                         labels: the button printed A/B/X/Y is the 3DS A/B/X/Y
 *                                           (Xbox A = south = 3DS A); controllers without
 *                                           letters (PlayStation) use the Xbox positions
 *   circle_pad = left | right | none    stick that is the analog circle pad
 *   c_stick = right | left | none       stick that is the New 3DS C-stick (PlatInput.cstick_*)
 *   stick_deadzone = 0..99              circle-pad stick inner deadzone, % of full deflection
 *                                       (circular: applied to the stick vector length)
 *   cstick_deadzone = 0..99             same for the C-stick
 *   stick_outer = 1..100                deflection (%) that already counts as full (156)
 *   trigger_threshold = 1..100          analog trigger travel (%) that presses ZL/ZR (or any
 *                                       action bound to a trigger)
 *   <ACTION> = <binding>
 *
 *   [gamepad <GUID>]                    per-controller override (GUID = 32 hex digits as shown
 *   name = <text>                       by input_controllers(); "name" is informational)
 *   any [gamepad] key                   keys left out (or an empty <ACTION> =) inherit from
 *                                       [gamepad]; "<ACTION> = none" unbinds
 *
 * Actions (one per 3DS input, plus two frontend ones that never reach the game):
 *   A B X Y L R ZL ZR START SELECT DUP DDOWN DLEFT DRIGHT
 *   CPAD_UP CPAD_DOWN CPAD_LEFT CPAD_RIGHT      digital circle pad (full deflection)
 *   CSTICK_UP CSTICK_DOWN CSTICK_LEFT CSTICK_RIGHT
 *   MENU                                         frontend menu (PlatInput.menu)
 *   QUIT                                         leave the game (plat_poll() returns 0)
 *
 * Bindings: "none", or a comma-separated list of alternatives (any one triggers the action);
 * an alternative may be a combination of up to 3 elements joined with '&' (all held).
 * Elements of a combination bound to MENU or QUIT are hidden from the game while the
 * combination is held.
 *   keyboard elements: SDL scancode names (positional keys): X, Z, Return, Right Shift,
 *     Backspace, Up, Left Ctrl, F1, Keypad 8, ... ("Comma" for the ',' key)
 *   gamepad elements:
 *     south east west north            face buttons by position
 *     label_a label_b label_x label_y  the face button printed A/B/X/Y (Xbox positions if none)
 *     auto                             only for A/B/X/Y: per "layout"
 *     back start guide leftstick rightstick leftshoulder rightshoulder
 *     dpup dpdown dpleft dpright misc1..misc6 paddle1..paddle4 touchpad
 *     lefttrigger righttrigger         analog, pressed past trigger_threshold
 *     +leftx -leftx +lefty -lefty +rightx -rightx +righty -righty
 *                                      stick half-axis past 50% (+x = right, +y = DOWN)
 *
 * Built-in defaults (what input_defaults() returns):
 *   [keyboard]  A=X B=Z X=S Y=A L=Q R=W START=Return SELECT=Right Shift,Backspace
 *               DUP=I DDOWN=K DLEFT=J DRIGHT=L CPAD_*=arrow keys MENU=F1 QUIT=Escape
 *   [gamepad]   layout=positional A/B/X/Y=auto L=leftshoulder R=rightshoulder ZL=lefttrigger
 *               ZR=righttrigger START=start SELECT=back D*=dpad circle_pad=left c_stick=right
 *               MENU=guide,leftstick&rightstick (stick clicks: the 3DS has none)
 *               stick_deadzone=15 cstick_deadzone=15 stick_outer=95 trigger_threshold=50
 *
 * Threading: every function may be called from any thread (one internal lock). Functions that
 * touch controllers need SDL initialised with SDL_INIT_GAMEPAD (plat_init() does that); the
 * config functions work without SDL. */
#pragma once
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum InAction {
    IN_A, IN_B, IN_X, IN_Y, IN_L, IN_R, IN_ZL, IN_ZR, IN_START, IN_SELECT,
    IN_DUP, IN_DDOWN, IN_DLEFT, IN_DRIGHT,
    IN_CPAD_UP, IN_CPAD_DOWN, IN_CPAD_LEFT, IN_CPAD_RIGHT,
    IN_CSTICK_UP, IN_CSTICK_DOWN, IN_CSTICK_LEFT, IN_CSTICK_RIGHT,
    IN_MENU, IN_QUIT,
    IN_ACTION_COUNT
} InAction;

enum { IN_UNSET = -1 };                                      /* per-controller: inherit */
enum { IN_LAYOUT_POSITIONAL = 0, IN_LAYOUT_LABELS = 1 };
enum { IN_STICK_NONE = 0, IN_STICK_LEFT = 1, IN_STICK_RIGHT = 2 };
enum { IN_MULTI_ACTIVE = 0, IN_MULTI_ANY = 1 };

#define IN_BIND_LEN 96          /* one binding string, e.g. "guide, leftstick&rightstick" */
#define IN_MAX_OVERRIDES 16

typedef struct InputPadProfile {
    char guid[33];              /* "" in the [gamepad] profile */
    char name[64];              /* informational */
    int layout;                 /* IN_LAYOUT_*; IN_UNSET = inherit (overrides only) */
    int circle_pad, c_stick;    /* IN_STICK_*; IN_UNSET = inherit */
    int stick_deadzone, cstick_deadzone, stick_outer, trigger_threshold;  /* %; IN_UNSET = inherit */
    char bind[IN_ACTION_COUNT][IN_BIND_LEN];   /* "" = unbound ([gamepad]) / inherit (override) */
} InputPadProfile;

typedef struct InputConfig {
    int multi;                  /* IN_MULTI_* */
    int motion;                 /* 1 = enable controller sensors */
    int fallback;               /* 1 = generic mapping for unknown joysticks */
    char fallback_mapping[256]; /* "" = built-in guess */
    char key[IN_ACTION_COUNT][IN_BIND_LEN];
    InputPadProfile pad;        /* [gamepad] */
    int n_overrides;
    InputPadProfile overrides[IN_MAX_OVERRIDES];
} InputConfig;

typedef struct InputControllerInfo {
    uint32_t id;                /* SDL joystick instance id (valid while connected) */
    char name[128];
    char guid[33];              /* key of a [gamepad <GUID>] section */
    char type[24];              /* SDL type string: xbox360 xboxone ps3 ps4 ps5 switchpro
                                   joyconleft joyconright joyconpair gamecube steam standard
                                   unknown */
    uint16_t vendor, product;
    int fallback;               /* 1 = no SDL mapping: running on the generic fallback mapping */
    int has_accel, has_gyro;    /* sensors present (enabled when motion = on) */
    int active;                 /* currently drives the game */
    int has_override;           /* a [gamepad <GUID>] section applies */
} InputControllerInfo;

/* ---- used by platform.c */
union SDL_Event;
int input_init(void);                                   /* after SDL_Init(SDL_INIT_GAMEPAD) */
void input_shutdown(void);
void input_handle_event(const union SDL_Event *e);      /* every event plat_poll() receives */
/* Once per frame: fills in->cpad_*, cstick_*, menu, motion, accel, gyro, controllers and
 * returns the 3DS button bits from the keyboard (*kb), controllers (*gp) and the circle-pad
 * direction bits (*cp). Returns 0 when QUIT was pressed. */
struct PlatInput;
int input_update(struct PlatInput *in, uint32_t *kb, uint32_t *gp, uint32_t *cp);

/* ---- configuration */
const char *input_config_path(void);                    /* the file used when path == NULL */
void input_defaults(InputConfig *c);
/* Load and apply a config file (NULL = input_config_path()). Returns 0 = loaded,
 * 1 = file missing (defaults applied), 2 = loaded but some lines were bad and skipped
 * (input_last_error() lists them), -1 = unreadable (config unchanged). */
int input_load(const char *path);
int input_reload(void);                                 /* input_load(path of the last load) */
int input_save(const char *path);                       /* current config; 0 = ok (creates dirs) */
void input_get_config(InputConfig *out);                /* copy of the current config */
/* Validate and apply (not saved). Returns 0, or -1 if a binding does not parse (nothing applied;
 * input_last_error() says which). */
int input_set_config(const InputConfig *c);
const char *input_last_error(void);                     /* "" if none; valid until next call */

/* ---- introspection for a configuration UI */
const char *input_action_name(InAction a);              /* "A", "CPAD_UP", "MENU", ... */
/* Check a binding string: keyboard != 0 -> keyboard elements, else gamepad elements.
 * Returns 0 if valid, else -1 with the reason in err. */
int input_check_binding(const char *binding, int keyboard, InAction a, char *err, size_t errlen);
int input_controllers(InputControllerInfo *out, int max);   /* fills <= max; returns how many are connected */
/* The binding in effect for a connected controller (overrides, layout and "auto" resolved:
 * e.g. A -> "east"). id 0 = keyboard. Returns 0, or -1 if no such controller. */
int input_effective_binding(uint32_t id, InAction a, char *out, size_t n);
/* "Press a key/button" capture: returns 1 and the element name of the newest key, button,
 * trigger or stick half-axis pressed since the previous call (or since input_capture_reset()),
 * with *id = 0 for the keyboard or the controller's id; 0 if nothing new. */
int input_capture(char *out, size_t n, uint32_t *id);
void input_capture_reset(void);

#ifdef __cplusplus
}
#endif
