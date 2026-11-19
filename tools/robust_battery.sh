#!/usr/bin/env bash
# robustness battery: boot a fixture save, walk / fight / use items, report crashes
# usage: robust.sh <fixture dir> <tag>
# tools/robust_battery.sh <fixture save dir> <tag>: boot a game save (title -> file 1 -> Begin), walk
# all four directions (room / area changes), sword slash + spin attack, Y / X items, shield, A; prints
# crash reports and positions (BOOT_LOG 160ae). Fixture saves: ~/.local/share/albw-port/fixtures.
set -u
FIX=$1; TAG=$2
cd .
export ALBW_ROM="$(cat ~/.config/albw-port/rom_path)"
mkdir -p build/dbgtmp; W=$(mktemp -d -p build/dbgtmp rb.XXXX); mkdir -p $W/save $W/shots
if [ -d "$FIX/savedata" ]; then cp -r "$FIX"/. $W/save/
else mkdir -p $W/save/savedata; cp "$FIX"/*.bin $W/save/savedata/; C=~/.local/share/albw-port/fixtures/castle_save; cp $C/savedata.format $W/save/; cp -r $C/sharedext $W/save/; fi
R="at 3300;log"
for i in 1 2; do
  R="$R;hold CLEFT 90;press B 6;wait 20;hold CUP 90;press Y 6;wait 40;hold CRIGHT 90;press X 6;wait 40;hold CDOWN 90;hold R 30;press A 6;wait 20;log"
  R="$R;hold B 80;wait 30;hold CUP 150;hold CLEFT 150;hold CDOWN 150;hold CRIGHT 150;log"
done
R="$R;quit"
SDL_VIDEO_DRIVER=offscreen ALBW_RENDER_SCALE=1 ALBW_SAVE_DIR=$W/save ALBW_STATE_DIR=$W/st ALBW_PRESS='1800:START,2200:A,2700:A' \
  ALBW_SHOT_DIR=$W/shots ALBW_SHOT=$(seq -s, 3400 400 7000) ALBW_ROUTE="$R" timeout -s KILL 600 ./build/albw > $W/log.txt 2>&1
rc=$?
echo "== $TAG rc=$rc crash=$(grep -ac 'ALBW crash' $W/log.txt) dir=$W"
grep -a 'route: f' $W/log.txt | head -6
sed -n '/ALBW crash/,/end of crash/p' $W/log.txt | head -12
