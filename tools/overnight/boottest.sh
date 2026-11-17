#!/usr/bin/env bash
# quick boot test: 900 frames offscreen, report crash or OK
S=${TMPDIR:-/tmp}/albw-scratch/96b63aab-0bb4-44a9-bf13-f56921e7bb3b/scratchpad
O=$S/boot; rm -rf $O; mkdir -p $O/save; cd .
ALBW_ROM="/path/to/your/game.3ds" SDL_VIDEO_DRIVER=offscreen ALBW_SPEED=0 ALBW_RENDER_SCALE=1 ALBW_SAVE_DIR=$O/save ALBW_SHOT_DIR=$O ALBW_SHOT=${1:-900} timeout ${2:-120} ./build/albw > $O/log.txt 2>&1
echo "exit=$? $(grep -a -m1 'ALBW crash' $O/log.txt) shots=$(ls $O | grep -c ppm)"
