#!/usr/bin/env bash
# Build the standalone render test (64- and 32-bit): native/render/test/build.sh [outdir]
# Run: <outdir>/render_test64 <screenshot dir>   (needs a display; any GL 3.3 driver)
set -euo pipefail
cd "$(dirname "$0")/../.."
OUT="${1:-../build/render_test}"
mkdir -p "$OUT"
SRC=(platform/platform.c sdk/gfx.c sdk/gr.c render/render.c render/texdecode.c render/test/render_test.c)
for m in 64 32; do
    PC=""; [[ $m == 32 ]] && PC=/usr/lib32/pkgconfig
    clang -m$m -std=gnu11 -O1 -g -Wall -Wextra -Wno-unused-parameter -fno-strict-aliasing \
        $(PKG_CONFIG_PATH=$PC pkg-config --cflags sdl3) "${SRC[@]}" \
        $(PKG_CONFIG_PATH=$PC pkg-config --libs sdl3) -lm -lpthread -no-pie -o "$OUT/render_test$m"
done
echo "built $OUT/render_test64 $OUT/render_test32"
