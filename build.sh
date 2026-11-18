#!/usr/bin/env bash
# Build the native port from source.
#
#   ./build.sh /path/to/your/game.3ds     first build (asks for sudo to install packages)
#   ./build.sh                            rebuild (uses the ROM path saved by the first build)
#   ./build.sh --no-deps ...              skip the package install step
#
# You need your own decrypted European ROM dump. Nothing from it is stored in this repository;
# the build reads the game code from it and keeps the result in build/ only.
set -euo pipefail
cd "$(dirname "$0")"
ROOT=$PWD
CFG="${XDG_CONFIG_HOME:-$HOME/.config}/albw-port"
DEPS=1 ROM=""
for a in "$@"; do
    case "$a" in
        --no-deps) DEPS=0 ;;
        -h|--help) sed -n 2,10p "$0"; exit 0 ;;
        *) ROM="$a" ;;
    esac
done
[[ -n "$ROM" ]] || ROM="${ALBW_ROM:-$(cat "$CFG/rom_path" 2>/dev/null || true)}"
[[ -f "$ROM" ]] || { echo "Usage: ./build.sh /path/to/your/decrypted.3ds"; exit 1; }
ROM=$(realpath "$ROM")
JOBS=${ALBW_JOBS:-$(nproc)}
say() { printf '\n== %s\n' "$*"; }

# ---------------------------------------------------------------- 1. packages
install_deps() {
    . /etc/os-release
    local id=" ${ID:-} ${ID_LIKE:-} "
    if [[ $id == *" arch "* ]]; then
        sudo pacman -S --needed --noconfirm clang lld llvm python cmake ninja git pkgconf \
            lib32-glibc lib32-gcc-libs lib32-zlib lib32-sdl3 lib32-mesa
    elif [[ $id == *" fedora "* || $id == *" rhel "* ]]; then
        sudo dnf install -y clang lld llvm python3 cmake ninja-build git pkgconf-pkg-config \
            glibc-devel.i686 libgcc.i686 zlib-devel.i686 mesa-libGL.i686 mesa-libEGL.i686 \
            libX11.i686 libXext.i686 libXcursor.i686 libXi.i686 libXrandr.i686 libxkbcommon.i686 \
            wayland-devel libX11-devel libXext-devel libxkbcommon-devel pipewire-libs.i686 \
            pulseaudio-libs.i686 alsa-lib.i686
        sudo dnf install -y SDL3-devel.i686 || true     # else built from source below
    elif [[ $id == *" debian "* || $id == *" ubuntu "* ]]; then
        sudo dpkg --add-architecture i386
        sudo apt-get update
        sudo apt-get install -y clang lld llvm python3 cmake ninja-build git pkg-config \
            gcc-multilib lib32z1-dev libx11-dev libxext-dev libwayland-dev libxkbcommon-dev \
            libegl-dev libgl-dev libpulse-dev libasound2-dev \
            libgl1:i386 libegl1:i386 libx11-6:i386 libxext6:i386 libxcursor1:i386 libxi6:i386 \
            libxrandr2:i386 libxkbcommon0:i386 libwayland-client0:i386 libwayland-egl1:i386 \
            libwayland-cursor0:i386 libpulse0:i386 libasound2:i386 || \
        sudo apt-get install -y libasound2t64:i386     # newer Ubuntu renamed it
    elif [[ $id == *" suse "* || $id == *" opensuse "* ]]; then
        sudo zypper install -y clang lld llvm python3 cmake ninja git pkgconf-pkg-config \
            gcc-32bit glibc-devel-32bit zlib-devel-32bit Mesa-libGL1-32bit Mesa-libEGL1-32bit \
            libX11-6-32bit libXext6-32bit libxkbcommon0-32bit libwayland-client0-32bit \
            libpulse0-32bit alsa-32bit libX11-devel wayland-devel libxkbcommon-devel
    else
        echo "Unknown distribution ($ID). Install: clang, lld, llvm, python3, cmake, ninja, git,"
        echo "pkg-config, 32-bit glibc + zlib development files, 32-bit OpenGL/EGL, then rerun"
        echo "with --no-deps."
        exit 1
    fi
}
if [[ $DEPS == 1 ]]; then say "installing packages"; install_deps; fi
for t in clang ld.lld llvm-nm llvm-objcopy llvm-objdump python3 pkg-config; do
    command -v $t >/dev/null || { echo "missing tool: $t"; exit 1; }
done

# ---------------------------------------------------------------- 2. 32-bit SDL3
PCP=$ROOT/build/deps/sdl3-i686/lib/pkgconfig:/usr/lib32/pkgconfig:/usr/lib/i386-linux-gnu/pkgconfig:/usr/lib/pkgconfig
if ! PKG_CONFIG_LIBDIR=$PCP pkg-config --exists sdl3 2>/dev/null; then
    say "building 32-bit SDL3 (once)"
    mkdir -p build/deps
    [[ -d build/deps/SDL ]] || git clone --depth 1 --branch release-3.4.20 https://github.com/libsdl-org/SDL build/deps/SDL
    cmake -S build/deps/SDL -B build/deps/SDL/build-i686 -G Ninja -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_C_FLAGS=-m32 -DCMAKE_CXX_FLAGS=-m32 -DCMAKE_SHARED_LINKER_FLAGS=-m32 \
        -DCMAKE_INSTALL_PREFIX="$ROOT/build/deps/sdl3-i686" -DCMAKE_INSTALL_LIBDIR=lib \
        -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF -DSDL_STATIC=OFF
    cmake --build build/deps/SDL/build-i686
    cmake --install build/deps/SDL/build-i686
fi

# ---------------------------------------------------------------- 3. game code from your ROM
say "reading the game code from your ROM"
python3 tools/extract_code.py "$ROM" -o build/rom/eu_code.bin
mkdir -p "$CFG"
printf '%s\n' "$ROM" > "$CFG/rom_path"

# ---------------------------------------------------------------- 4. compile + link
say "compiling the decompiled game code ($JOBS jobs; the first build takes a while)"
ALBW_CODE_BIN=build/rom/eu_code.bin python3 tools/build_decomp.py --snapshot decomp --jobs "$JOBS"
say "linking"
ALBW_FCONV_INTERIM=0 ALBW_CODE_BIN=build/rom/eu_code.bin tools/link.sh

say "done. Start the game with ./run.sh"
