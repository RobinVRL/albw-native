#!/usr/bin/env bash
# Launch the native ALBW port.
#
#   ./run.sh                 run the last built game
#   ./run.sh --link          relink first (after code changes; ~10 s), then run
#   ./run.sh --gdb           run under gdb (shows where it stops)
#   ./run.sh --viewer [model [index]]   asset viewer: draws a model + texture decoded from your ROM
#   ./run.sh --scale 3       window size multiplier (default 2), other args are passed through
#
# Environment (defaults shown):
#   ALBW_ROM        path to your decrypted .3ds (RomFS is read from it)
#   ALBW_SAVE_DIR   save folder            (~/.local/share/albw-port/save)
#   ALBW_GFX_TRACE=1  print frame/swap counters once a second
#   ALBW_GL_DEBUG=1   OpenGL debug messages
#   ALBW_TRACE_CTORS=1  print every static constructor during startup
#
# Controls: arrows = circle pad, X = A, Z = B, S = X, A = Y, Q/W = L/R, Enter = Start,
#           Backspace = Select, IJKL = D-pad, mouse on the bottom screen = touch, Esc = quit.
set -euo pipefail
cd "$(dirname "$0")"

: "${ALBW_ROM:=/path/to/your/game.3ds}"
export ALBW_ROM
# prefer native Wayland when available (the 32-bit SDL needs lib32-libxkbcommon + lib32-libdecor);
# fall back to X11 otherwise
if [[ -n "${WAYLAND_DISPLAY:-}" && -z "${SDL_VIDEO_DRIVER:-}" && -e /usr/lib32/libxkbcommon.so.0 ]]; then
    export SDL_VIDEO_DRIVER=wayland
fi

LINK=0 GDB=0 ARGS=()
if [[ "${1:-}" == "--viewer" ]]; then
    shift
    : "${ALBW_ROM:=/path/to/your/game.3ds}"
    export ALBW_ROM
    native/assets/build.sh build/assets >/dev/null
    exec build/assets/viewer "$@"
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
