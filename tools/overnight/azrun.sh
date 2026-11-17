#!/usr/bin/env bash
# usage: azrun.sh <seconds> <tracefile> [ENV=VAL ...]: headless Azahar (own build) under Xvfb :99
S=${TMPDIR:-/tmp}/albw-scratch/96b63aab-0bb4-44a9-bf13-f56921e7bb3b/scratchpad
H=$S/azhome; SECS=$1; TF=$2; shift 2
if ! [ -e /tmp/.X11-unix/X99 ]; then Xvfb :99 -screen 0 1280x800x24 >/dev/null 2>&1 & sleep 2; fi
env DISPLAY=:99 QT_QPA_PLATFORM=xcb XDG_CONFIG_HOME=$H/config XDG_DATA_HOME=$H/data AZ_TRACE_FILE=$TF "$@" \
    timeout -k 5 $SECS ${AZAHAR_DIR:-$HOME/azahar}/build-dbg/bin/RelWithDebInfo/azahar \
    "$HOME/.local/share/albw-port/reference/albw_nocrypto.3ds" > $S/az_run.log 2>&1
echo "azahar exit=$?"
