#!/bin/sh
# Builds the standalone audio test (native/sdk/snd.c + native/audio + RomFS reader) for x86-64
# and 32-bit x86 into OUT (default $TMPDIR/albw-audio).
#   OUT/audio_test64 [romfs .bcstm path] [seconds] [out.wav]
# The game build compiles native/audio/{mixer,fx,output}.c next to native/sdk/snd.c (tools/link.sh).
set -e
cd "$(dirname "$0")"
OUT=${1:-${TMPDIR:-/tmp}/albw-audio}
mkdir -p "$OUT"
CF="-std=gnu11 -O2 -g -Wall -Wextra -Wno-unused-parameter"
SRC="audio_test.c bcstm.c mixer.c fx.c output.c ../sdk/snd.c ../assets/romfs.c"
clang -m64 $CF $SRC $(pkg-config --cflags --libs sdl3) -lm -lpthread -o "$OUT/audio_test64"
clang -m32 $CF $SRC $(PKG_CONFIG_PATH=/usr/lib32/pkgconfig pkg-config --cflags --libs sdl3) -lm -lpthread -o "$OUT/audio_test32"
echo "built into $OUT"
