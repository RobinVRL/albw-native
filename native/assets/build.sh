#!/bin/sh
# Builds the asset pipeline test tools (64-bit and 32-bit) into OUT (default $TMPDIR/albw-assets).
#   asset_test{64,32}: RomFS/archive/BCH/texture survey + shader catalogue (no GL)
#   viewer{64,32}:     SDL3 + OpenGL 3.3 viewer for one model and one texture
# Usage: native/assets/build.sh [OUT]
set -e
cd "$(dirname "$0")"
OUT=${1:-${TMPDIR:-/tmp}/albw-assets}
mkdir -p "$OUT"
CF="-O2 -g -Wall -Wextra"
CORE="romfs.c yaz0.c sarc.c texture.c bch.c dvlb.c png.c"
VIEW="viewer.c romfs.c yaz0.c sarc.c texture.c texture_gl.c bch.c png.c ../platform/platform.c"
clang -m64 $CF asset_test.c $CORE -lm -o "$OUT/asset_test64"
clang -m32 $CF asset_test.c $CORE -lm -o "$OUT/asset_test32"
clang -m64 $CF $VIEW $(pkg-config --cflags --libs sdl3) -lm -o "$OUT/viewer64"
clang -m32 $CF $VIEW -L/usr/lib32 -lSDL3 -lm -o "$OUT/viewer32"
echo "built into $OUT"
