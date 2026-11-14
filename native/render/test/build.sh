#!/usr/bin/env bash
# Build the standalone render tests (64- and 32-bit): native/render/test/build.sh [outdir]
#   render_test{64,32} <screenshot dir>  nngx / gr / renderer path (any GL 3.3 driver, no ROM)
#   font_test{64,32} <screenshot dir>    nw::font / nw::lyt RectDrawer path with ROM data (ALBW_ROM)
#   prim_test{64,32} <screenshot dir>    sead PrimitiveRenderer path (sdk/prim.c, render/prim.c GLSL)
#   eft_test{64,32} <screenshot dir>     nw::eft particle GLSL (render/effects.c) with the game's registers
set -euo pipefail
cd "$(dirname "$0")/../.."
OUT="${1:-../build/render_test}"
mkdir -p "$OUT"
SRC=(platform/platform.c sdk/gfx.c sdk/gr.c render/render.c render/fraglight.c render/prim.c render/effects.c render/font.c render/texdecode.c render/test/render_test.c)
FSRC=(platform/platform.c sdk/lyt.c render/render.c render/fraglight.c render/prim.c render/effects.c render/font.c render/texdecode.c render/test/font_test.c
      assets/romfs.c assets/yaz0.c assets/sarc.c assets/texture.c assets/png.c assets/dvlb.c)
PSRC=(platform/platform.c sdk/gr.c sdk/prim.c render/render.c render/fraglight.c render/prim.c render/effects.c render/font.c
      render/texdecode.c assets/png.c render/test/prim_test.c)
ESRC=(platform/platform.c render/render.c render/fraglight.c render/prim.c render/effects.c render/font.c
      render/texdecode.c assets/png.c render/test/eft_test.c)
CF=(-std=gnu11 -O1 -g -Wall -Wextra -Wno-unused-parameter -fno-strict-aliasing -fms-extensions)
for m in 64 32; do
    PC=""; [[ $m == 32 ]] && PC=/usr/lib32/pkgconfig
    clang -m$m "${CF[@]}" $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${SRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/render_test$m"
    clang -m$m "${CF[@]}" $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${FSRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/font_test$m"
    clang -m$m "${CF[@]}" $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${PSRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/prim_test$m"
    clang -m$m "${CF[@]}" $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${ESRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/eft_test$m"
done
echo "built $OUT/{render,font,prim,eft}_test{64,32}"
