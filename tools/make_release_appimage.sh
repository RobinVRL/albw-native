#!/usr/bin/env bash
# Portable release AppImage: packs the current build (build/albw, from ./build.sh) inside an Ubuntu
# 22.04 container, so the bundled SDL3 and fallback libraries need glibc <= 2.35 and the AppImage
# runs on Ubuntu 22.04 / 24.04, Debian 12+, Fedora, Arch, SteamOS, ... (the game binary itself needs
# glibc <= 2.34: native/runtime/glibc_compat.c). Needs podman or docker.
#
#   tools/make_release_appimage.sh [output]      default: build/release/ALBW-native-x86_64.AppImage
#
# The plain tools/make_appimage.sh packs with this machine's libraries: fine for this machine,
# not portable to systems with an older glibc.
set -euo pipefail
cd "$(dirname "$0")/.."
OUT=${1:-build/release/ALBW-native-x86_64.AppImage}
[[ -x build/albw ]] || { echo "build/albw not found: run ./build.sh first"; exit 1; }
CT=$(command -v podman || command -v docker || true)
[[ -n $CT ]] || { echo "needs podman or docker"; exit 1; }
WORK=$(mktemp -d -p build appimage-release.XXXX)
trap 'rm -rf "${WORK:?}"' EXIT
mkdir -p "$(dirname "$OUT")"
cat > "$WORK/pack.sh" <<'EOF'
#!/usr/bin/env bash
set -e
export DEBIAN_FRONTEND=noninteractive
cd /src
source <(sed -n '/^install_deps() {/,/^}/p' build.sh); ID=ubuntu
install_deps >/dev/null 2>&1 || true
apt-get install -y -qq curl file ca-certificates git cmake ninja-build gcc-multilib g++-multilib \
    libdecor-0-0:i386 libxss1:i386 libxinerama1:i386 libdbus-1-3:i386 >/dev/null 2>&1
mkdir -p /work/build/deps && cd /work
echo "== building 32-bit SDL3 (Ubuntu 22.04)"
git clone -q --depth 1 --branch release-3.4.20 https://github.com/libsdl-org/SDL build/deps/SDL 2>/dev/null
CC=gcc CXX=g++ cmake -S build/deps/SDL -B build/deps/SDL/b -G Ninja -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_FLAGS=-m32 -DCMAKE_CXX_FLAGS=-m32 -DCMAKE_SHARED_LINKER_FLAGS=-m32 \
    -DCMAKE_INSTALL_PREFIX=/work/build/deps/sdl3-i686 -DCMAKE_INSTALL_LIBDIR=lib \
    -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF -DSDL_STATIC=OFF >/dev/null
cmake --build build/deps/SDL/b >/dev/null && cmake --install build/deps/SDL/b >/dev/null
cp -r /src/tools /src/packaging /work/
cp /src/build/albw /work/build/
[[ -f /src/build/albw.ssmap ]] && cp /src/build/albw.ssmap /work/build/
export LD_LIBRARY_PATH=/work/build/deps/sdl3-i686/lib
tools/make_appimage.sh /out/ALBW-native-x86_64.AppImage | grep -E '^==|not bundled'
EOF
"$CT" run --rm -v "$PWD":/src:ro,z -v "$PWD/$WORK":/out:Z docker.io/library/ubuntu:22.04 bash /out/pack.sh
mv "$WORK/ALBW-native-x86_64.AppImage" "$OUT"
echo "== release AppImage: $OUT"
