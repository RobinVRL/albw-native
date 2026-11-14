// Qt key event -> SDL scancode (positional, like input.cfg's keyboard bindings).
// Linux (xcb and wayland): nativeScanCode() is the XKB keycode = evdev code + 8, mapped through
// the evdev table below. Elsewhere / unknown codes: fall back to the Qt key (layout dependent).
#include "keymap.h"
#include <QKeyEvent>
#include <SDL3/SDL_keyboard.h>
#include <SDL3/SDL_scancode.h>

static int fromEvdev(unsigned code) {
    static const SDL_Scancode t[] = {
        /*   0 */ SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_ESCAPE, SDL_SCANCODE_1, SDL_SCANCODE_2, SDL_SCANCODE_3,
        /*   5 */ SDL_SCANCODE_4, SDL_SCANCODE_5, SDL_SCANCODE_6, SDL_SCANCODE_7, SDL_SCANCODE_8,
        /*  10 */ SDL_SCANCODE_9, SDL_SCANCODE_0, SDL_SCANCODE_MINUS, SDL_SCANCODE_EQUALS, SDL_SCANCODE_BACKSPACE,
        /*  15 */ SDL_SCANCODE_TAB, SDL_SCANCODE_Q, SDL_SCANCODE_W, SDL_SCANCODE_E, SDL_SCANCODE_R,
        /*  20 */ SDL_SCANCODE_T, SDL_SCANCODE_Y, SDL_SCANCODE_U, SDL_SCANCODE_I, SDL_SCANCODE_O,
        /*  25 */ SDL_SCANCODE_P, SDL_SCANCODE_LEFTBRACKET, SDL_SCANCODE_RIGHTBRACKET, SDL_SCANCODE_RETURN, SDL_SCANCODE_LCTRL,
        /*  30 */ SDL_SCANCODE_A, SDL_SCANCODE_S, SDL_SCANCODE_D, SDL_SCANCODE_F, SDL_SCANCODE_G,
        /*  35 */ SDL_SCANCODE_H, SDL_SCANCODE_J, SDL_SCANCODE_K, SDL_SCANCODE_L, SDL_SCANCODE_SEMICOLON,
        /*  40 */ SDL_SCANCODE_APOSTROPHE, SDL_SCANCODE_GRAVE, SDL_SCANCODE_LSHIFT, SDL_SCANCODE_BACKSLASH, SDL_SCANCODE_Z,
        /*  45 */ SDL_SCANCODE_X, SDL_SCANCODE_C, SDL_SCANCODE_V, SDL_SCANCODE_B, SDL_SCANCODE_N,
        /*  50 */ SDL_SCANCODE_M, SDL_SCANCODE_COMMA, SDL_SCANCODE_PERIOD, SDL_SCANCODE_SLASH, SDL_SCANCODE_RSHIFT,
        /*  55 */ SDL_SCANCODE_KP_MULTIPLY, SDL_SCANCODE_LALT, SDL_SCANCODE_SPACE, SDL_SCANCODE_CAPSLOCK, SDL_SCANCODE_F1,
        /*  60 */ SDL_SCANCODE_F2, SDL_SCANCODE_F3, SDL_SCANCODE_F4, SDL_SCANCODE_F5, SDL_SCANCODE_F6,
        /*  65 */ SDL_SCANCODE_F7, SDL_SCANCODE_F8, SDL_SCANCODE_F9, SDL_SCANCODE_F10, SDL_SCANCODE_NUMLOCKCLEAR,
        /*  70 */ SDL_SCANCODE_SCROLLLOCK, SDL_SCANCODE_KP_7, SDL_SCANCODE_KP_8, SDL_SCANCODE_KP_9, SDL_SCANCODE_KP_MINUS,
        /*  75 */ SDL_SCANCODE_KP_4, SDL_SCANCODE_KP_5, SDL_SCANCODE_KP_6, SDL_SCANCODE_KP_PLUS, SDL_SCANCODE_KP_1,
        /*  80 */ SDL_SCANCODE_KP_2, SDL_SCANCODE_KP_3, SDL_SCANCODE_KP_0, SDL_SCANCODE_KP_PERIOD, SDL_SCANCODE_UNKNOWN,
        /*  85 */ SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_NONUSBACKSLASH, SDL_SCANCODE_F11, SDL_SCANCODE_F12, SDL_SCANCODE_UNKNOWN,
        /*  90 */ SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN,
        /*  95 */ SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_KP_ENTER, SDL_SCANCODE_RCTRL, SDL_SCANCODE_KP_DIVIDE, SDL_SCANCODE_PRINTSCREEN,
        /* 100 */ SDL_SCANCODE_RALT, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_HOME, SDL_SCANCODE_UP, SDL_SCANCODE_PAGEUP,
        /* 105 */ SDL_SCANCODE_LEFT, SDL_SCANCODE_RIGHT, SDL_SCANCODE_END, SDL_SCANCODE_DOWN, SDL_SCANCODE_PAGEDOWN,
        /* 110 */ SDL_SCANCODE_INSERT, SDL_SCANCODE_DELETE, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_MUTE, SDL_SCANCODE_VOLUMEDOWN,
        /* 115 */ SDL_SCANCODE_VOLUMEUP, SDL_SCANCODE_POWER, SDL_SCANCODE_KP_EQUALS, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_PAUSE,
        /* 120 */ SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_KP_COMMA, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN, SDL_SCANCODE_UNKNOWN,
        /* 125 */ SDL_SCANCODE_LGUI, SDL_SCANCODE_RGUI, SDL_SCANCODE_APPLICATION,
    };
    return code < sizeof t / sizeof t[0] ? t[code] : SDL_SCANCODE_UNKNOWN;
}

static int fromQtKey(int key, bool keypad) {
    if (key >= Qt::Key_A && key <= Qt::Key_Z) return SDL_SCANCODE_A + (key - Qt::Key_A);
    if (key >= Qt::Key_1 && key <= Qt::Key_9) return (keypad ? SDL_SCANCODE_KP_1 : SDL_SCANCODE_1) + (key - Qt::Key_1);
    if (key == Qt::Key_0) return keypad ? SDL_SCANCODE_KP_0 : SDL_SCANCODE_0;
    if (key >= Qt::Key_F1 && key <= Qt::Key_F12) return SDL_SCANCODE_F1 + (key - Qt::Key_F1);
    switch (key) {
    case Qt::Key_Return: return SDL_SCANCODE_RETURN;
    case Qt::Key_Enter: return keypad ? SDL_SCANCODE_KP_ENTER : SDL_SCANCODE_RETURN;
    case Qt::Key_Escape: return SDL_SCANCODE_ESCAPE;
    case Qt::Key_Backspace: return SDL_SCANCODE_BACKSPACE;
    case Qt::Key_Tab: return SDL_SCANCODE_TAB;
    case Qt::Key_Space: return SDL_SCANCODE_SPACE;
    case Qt::Key_Up: return SDL_SCANCODE_UP;
    case Qt::Key_Down: return SDL_SCANCODE_DOWN;
    case Qt::Key_Left: return SDL_SCANCODE_LEFT;
    case Qt::Key_Right: return SDL_SCANCODE_RIGHT;
    case Qt::Key_Shift: return SDL_SCANCODE_LSHIFT;
    case Qt::Key_Control: return SDL_SCANCODE_LCTRL;
    case Qt::Key_Alt: return SDL_SCANCODE_LALT;
    case Qt::Key_AltGr: return SDL_SCANCODE_RALT;
    case Qt::Key_Home: return SDL_SCANCODE_HOME;
    case Qt::Key_End: return SDL_SCANCODE_END;
    case Qt::Key_PageUp: return SDL_SCANCODE_PAGEUP;
    case Qt::Key_PageDown: return SDL_SCANCODE_PAGEDOWN;
    case Qt::Key_Insert: return SDL_SCANCODE_INSERT;
    case Qt::Key_Delete: return SDL_SCANCODE_DELETE;
    case Qt::Key_Comma: return SDL_SCANCODE_COMMA;
    case Qt::Key_Period: return keypad ? SDL_SCANCODE_KP_PERIOD : SDL_SCANCODE_PERIOD;
    case Qt::Key_Minus: return keypad ? SDL_SCANCODE_KP_MINUS : SDL_SCANCODE_MINUS;
    case Qt::Key_Plus: return SDL_SCANCODE_KP_PLUS;
    case Qt::Key_Asterisk: return SDL_SCANCODE_KP_MULTIPLY;
    case Qt::Key_Slash: return keypad ? SDL_SCANCODE_KP_DIVIDE : SDL_SCANCODE_SLASH;
    case Qt::Key_Semicolon: return SDL_SCANCODE_SEMICOLON;
    case Qt::Key_Apostrophe: return SDL_SCANCODE_APOSTROPHE;
    case Qt::Key_BracketLeft: return SDL_SCANCODE_LEFTBRACKET;
    case Qt::Key_BracketRight: return SDL_SCANCODE_RIGHTBRACKET;
    case Qt::Key_Backslash: return SDL_SCANCODE_BACKSLASH;
    case Qt::Key_Equal: return SDL_SCANCODE_EQUALS;
    case Qt::Key_QuoteLeft: return SDL_SCANCODE_GRAVE;
    case Qt::Key_CapsLock: return SDL_SCANCODE_CAPSLOCK;
    default: return SDL_SCANCODE_UNKNOWN;
    }
}

int qtKeyToSdlScancode(const QKeyEvent *e) {
#ifdef Q_OS_LINUX
    quint32 n = e->nativeScanCode();
    if (n >= 8) {
        int sc = fromEvdev(n - 8);
        if (sc != SDL_SCANCODE_UNKNOWN) return sc;
    }
#endif
    return fromQtKey(e->key(), e->modifiers() & Qt::KeypadModifier);
}

QString sdlScancodeName(int sc) {
    if (sc == SDL_SCANCODE_COMMA) return QStringLiteral("Comma");  // ',' separates alternatives
    const char *n = SDL_GetScancodeName((SDL_Scancode)sc);
    return n && *n ? QString::fromUtf8(n) : QString();
}
