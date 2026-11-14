#!/usr/bin/env bash
# Build the standalone nw::h3d model-path test (64- and 32-bit): native/render/test/build_h3d.sh [outdir]
#   h3d_test{64,32} <screenshot dir>   ROM data (ALBW_ROM): Link + a dungeon room through
#                                      sdk/h3d.c + render/h3d.c (hand-written DefaultShader GLSL)
set -euo pipefail
cd "$(dirname "$0")/../.."
OUT="${1:-../build/render_test}"
mkdir -p "$OUT"
SRC=(platform/platform.c sdk/gr.c sdk/h3d.c render/render.c render/h3d.c render/font.c render/texdecode.c
     render/test/h3d_test.c assets/romfs.c assets/yaz0.c assets/sarc.c assets/bch.c assets/texture.c assets/png.c)
CF=(-std=gnu11 -O1 -g -Wall -Wextra -Wno-unused-parameter -fno-strict-aliasing -fms-extensions)
for m in 64 32; do
    PC=""; [[ $m == 32 ]] && PC=/usr/lib32/pkgconfig
    clang -m$m "${CF[@]}" $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${SRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/h3d_test$m"
done
echo "built $OUT/h3d_test{64,32}"
