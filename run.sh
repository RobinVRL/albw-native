#!/usr/bin/env bash
# Launch the native ALBW port.
#
#   ./run.sh                 run the last built game
#   ./run.sh --link          relink first (after code changes; ~10 s), then run
#   ./run.sh --gdb           run under gdb (shows where it stops)
#   ./run.sh --viewer [model [index]]   asset viewer: draws a model + texture decoded from your ROM
#                            e.g. the title tree (textures in a second file):
#   ALBW_VIEWER_TEXFILE=World/Course/fld_o_Common.bch ./run.sh --viewer 'Archive/FieldLight10.szs#c640797a'
#   ./run.sh --scale 3       window size multiplier (default 2), other args are passed through
#   ./run.sh --qt [--demo | viewer args]   Qt frontend (64-bit) with the asset viewer as content
#                            (or the platform test scene); the game attaches to it once 64-bit
#
# Environment (defaults shown):
#   ALBW_ROM        path to your decrypted .3ds (RomFS is read from it)
#   ALBW_SAVE_DIR   save folder            (~/.local/share/albw-port/save)
#   ALBW_GFX_TRACE=1  print frame/swap counters once a second
#   ALBW_GL_DEBUG=1   OpenGL debug messages
#   ALBW_TRACE_CTORS=1  print every static constructor during startup
#   ALBW_ONESCREEN=1  one-screen mode (default): one window, minimap top right, Start = pause menu
#                   (Items / Gear / Map), Select = the game's Start; ALBW_ONESCREEN=0 turns it off
#   ALBW_WINDOWS=separate|joined   one window per screen (default) or both screens in one window,
#                   for this run (F5 toggles at runtime and saves the choice in layout.cfg)
#
# Controls: arrows = circle pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, Enter = Start,
#           Backspace = Select, IJKL = D-pad, mouse on the bottom screen = touch, Esc = quit.
set -euo pipefail
cd "$(dirname "$0")"

if [[ "${1:-}" == "--qt" ]]; then
    shift   # ALBW_ROM from the environment, else the ROM chosen in File > Open ROM
    native/frontend/qt/build.sh build/frontend-qt >/dev/null
    exec build/frontend-qt/albw-qt "$@"
fi
: "${ALBW_ROM:=$(cat "${XDG_CONFIG_HOME:-$HOME/.config}/albw-port/rom_path" 2>/dev/null || echo rom.3ds)}"
export ALBW_ROM
# prefer native Wayland when available (the 32-bit SDL needs lib32-libxkbcommon + lib32-libdecor);
# fall back to X11 otherwise. On NVIDIA, 32-bit EGL on Wayland also needs the 32-bit egl-wayland
# platform library: without it EGL falls back to Mesa's software rasteriser (llvmpipe, ~25 fps,
# all CPU cores busy), while X11/XWayland gets the GPU through the 32-bit NVIDIA GLX.
# 32-bit library folders: Arch /usr/lib32, Debian/Ubuntu /usr/lib/i386-linux-gnu, Fedora/openSUSE /usr/lib
lib32_has() {
    local d
    local dirs=(/usr/lib32 /usr/lib/i386-linux-gnu /lib/i386-linux-gnu)
    [[ -d /usr/lib64 && ! -d /usr/lib32 ]] && dirs+=(/usr/lib)   # /usr/lib is 64-bit on Arch
    for d in "${dirs[@]}"; do
        compgen -G "$d/$1" >/dev/null && return 0
    done
    return 1
}
WAYLAND_GL_OK=1
if [[ -e /proc/driver/nvidia/version ]] && ! lib32_has "libnvidia-egl-wayland.so*"; then
    WAYLAND_GL_OK=0
fi
# WSL (WSLg): Wayland windows of this 32-bit build are mapped but never show a frame (blank
# taskbar preview, nothing on screen); XWayland works. Use X11 there.
IS_WSL=0
if [[ -z "${ALBW_WSL_WAYLAND:-}" ]] && { [[ -n "${WSL_DISTRO_NAME:-}" || -e /proc/sys/fs/binfmt_misc/WSLInterop ]] || grep -qi microsoft /proc/version 2>/dev/null; }; then
    IS_WSL=1
fi
if [[ $IS_WSL == 1 && -z "${SDL_VIDEO_DRIVER:-}" && -n "${DISPLAY:-}" ]]; then
    export SDL_VIDEO_DRIVER=x11
elif [[ -n "${WAYLAND_DISPLAY:-}" && -z "${SDL_VIDEO_DRIVER:-}" && $WAYLAND_GL_OK == 1 ]] && lib32_has "libxkbcommon.so.0"; then
    export SDL_VIDEO_DRIVER=wayland
fi

LINK=0 GDB=0 ARGS=()
if [[ "${1:-}" == "--viewer" ]]; then
    shift
    : "${ALBW_ROM:=$(cat "${XDG_CONFIG_HOME:-$HOME/.config}/albw-port/rom_path" 2>/dev/null || echo rom.3ds)}"
    export ALBW_ROM
    native/assets/build.sh "$PWD/build/assets" >/dev/null   # (the script cd's into native/assets)
    exec build/assets/viewer64 "$@"
fi
for a in "$@"; do
    case "$a" in
        --link) LINK=1 ;;
        --gdb) GDB=1 ;;
        *) ARGS+=("$a") ;;
    esac
done

if [[ ! -f "$ALBW_ROM" ]]; then
    echo "ROM not found: $ALBW_ROM"
    echo "Set ALBW_ROM=/path/to/your/decrypted.3ds"
    exit 1
fi
if [[ $LINK -eq 1 || ! -x build/albw ]]; then
    if [[ ! -f build/decomp/report.json ]]; then
        echo "No build yet. Full build (about 20-30 min):"
        echo "  python3 tools/build_decomp.py && python3 tools/resolve_names.py && ./run.sh --link"
        exit 1
    fi
    echo "== linking"
    tools/link.sh
fi

echo "== running build/albw (ROM: $ALBW_ROM)"
if [[ $GDB -eq 1 ]]; then
    exec gdb -q -ex run -ex bt --args ./build/albw "${ARGS[@]+"${ARGS[@]}"}"
fi
exec ./build/albw "${ARGS[@]+"${ARGS[@]}"}"
