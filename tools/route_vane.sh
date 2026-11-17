#!/usr/bin/env bash
# Make a save state of the CURRENT build at the weather-vane save prompt ("Save your progress?"),
# so the save flow can be tested with F7 / ALBW_ROUTE 'load N' right away. States only load in the
# binary that wrote them: run this again after every relink.
#
#   tools/route_vane.sh [slot]        default slot 9 (file slot9.state, F8 to it, F7 to load)
#
# How (no fixed-frame input: ALBW_ROUTE steers Link by his real position, platform.c):
#   - fast path (~1.5 min): a game save made at the vane (ALBW_VANE_SAVE, default
#     ~/.local/share/albw-port/fixtures/vane_save) is copied to a scratch save dir; title -> Begin
#     puts Link below the vane; walk up, A (touch), A (map message) -> the prompt; save the state.
#   - without that save (~5 min): the boot route from tools/overnight/route_press.txt to the yard,
#     Gulley's lines, then the same walk; the save made at the prompt becomes the fixture.
# The state's file handles point at the scratch save dir of that run (fs state is saved by value),
# so answering "Save" after loading writes there, not into your real save.
# Env: ALBW_ROM (required), ALBW_STATE_DIR (where states go), ALBW_ROUTE_SHOTS=1 keeps screenshots.
set -euo pipefail
cd "$(dirname "$0")/.."
SLOT=${1:-9}
IDX=$((SLOT - 1))
: "${ALBW_ROM:?set ALBW_ROM to your decrypted EU .3ds}"
FIX=${ALBW_VANE_SAVE:-$HOME/.local/share/albw-port/fixtures/vane_save}
W=$(mktemp -d "${TMPDIR:-/tmp}/albw-vane.XXXXXX")
mkdir -p "$W/save"
SHOTS=()
[[ "${ALBW_ROUTE_SHOTS:-}" ]] && SHOTS=(ALBW_SHOT_DIR="$W" ALBW_SHOT="$(seq -s, 200 200 20000)")

# the walk from below the vane to the prompt (vane at about x 5.5, z 47.5; touch from the south)
# (first visit: A touches, A closes "A new weather vane has been added to the map"; a save made at
# the vane already has it registered, so there the touch leads straight to the prompt)
WALK="goto 5.55 50.5 0.1;goto 5.55 48.6 0.1;press CUP 3;wait 20;press A;wait 240"

if [[ -d "$FIX/savedata" ]]; then
    cp -r "$FIX"/. "$W/save/"
    PRESS='1800:START,2200:A,2700:A'          # title -> file 1 -> Begin
    ROUTE="at 3200;$WALK;wait 60;save $IDX;wait 5;quit"
else
    echo "route_vane: no vane save at $FIX: full route from a new game (~5 min)"
    PRESS=$(cut -d, -f1-21 tools/overnight/route_press.txt)
    ROUTE='at 10300'
    for _ in $(seq 1 10); do ROUTE="$ROUTE;press A;wait 244"; done
    # at the prompt: save the state, then answer Save so the game save becomes the fixture
    ROUTE="$ROUTE;at 12950;$WALK;press A;wait 200;save $IDX;press A;wait 400;press A;wait 200;quit"
fi
set +e
env SDL_VIDEO_DRIVER=offscreen ALBW_SPEED=0 ALBW_RENDER_SCALE=1 ALBW_SAVE_DIR="$W/save" \
    ALBW_PRESS="$PRESS" ALBW_ROUTE="$ROUTE" "${SHOTS[@]}" timeout 900 ./build/albw > "$W/log.txt" 2>&1
rc=$?
set -e
grep -aE '^route:|^savestate:|ALBW crash' "$W/log.txt" || true
if ! grep -aq "^savestate: Saved state $SLOT" "$W/log.txt"; then
    echo "route_vane: FAILED (exit $rc), log: $W/log.txt"
    exit 1
fi
if [[ ! -d "$FIX/savedata" ]]; then
    mkdir -p "$FIX" && cp -r "$W/save"/. "$FIX/"
    echo "route_vane: vane game save kept in $FIX"
fi
echo "route_vane: state slot $SLOT is at the save prompt (load: F7 on slot $SLOT, or ALBW_ROUTE='at 60;load $IDX')"
echo "route_vane: run dir $W"
