#!/usr/bin/env bash
# Build the Qt 6 frontend (64-bit): native/frontend/qt/build.sh [build dir, default build/frontend-qt]
# Output: <dir>/albw-qt (test program) and <dir>/libalbw_frontend_qt.a (link the game against it).
set -euo pipefail
cd "$(dirname "$0")/../../.."
OUT="${1:-build/frontend-qt}"
GEN=()
command -v ninja >/dev/null && GEN=(-G Ninja)
cmake -S native/frontend/qt -B "$OUT" "${GEN[@]}" -DCMAKE_BUILD_TYPE="${BUILD_TYPE:-RelWithDebInfo}" \
    -DCMAKE_C_COMPILER="${CC:-clang}" -DCMAKE_CXX_COMPILER="${CXX:-clang++}" >/dev/null
cmake --build "$OUT" -j"$(nproc)"
echo "built $OUT/albw-qt"
