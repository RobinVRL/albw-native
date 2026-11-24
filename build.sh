#!/usr/bin/env bash
# Build the native port from source.
#
#   ./build.sh /path/to/your/game.3ds     first build (asks for sudo to install packages)
#   ./build.sh                            rebuild (uses the ROM path saved by the first build)
#   ./build.sh --no-deps ...              skip the package install step
#
# Steam Deck / SteamOS: the system is read-only and has no compiler, so build.sh builds inside a
# distrobox container (Arch, created once as "albw-build"; distrobox + podman come with SteamOS 3.5+)
# and packs the result as build/ALBW-native-x86_64.AppImage, which runs on SteamOS itself.
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
ROM_SAVE=$ROM   # the path remembered for the game (outside build.sh's SteamOS container)
# in the SteamOS container the host's files outside $HOME (SD card: /run/media/...) are under /run/host
if [[ ! -f "$ROM" && -n ${ALBW_IN_BOX:-} && -f "/run/host$ROM" ]]; then ROM="/run/host$ROM"; fi
[[ -f "$ROM" ]] || { echo "Usage: ./build.sh /path/to/your/decrypted.3ds"; exit 1; }
ROM=$(realpath "$ROM")
[[ -n ${ALBW_IN_BOX:-} ]] || ROM_SAVE=$ROM
JOBS=${ALBW_JOBS:-$(nproc)}
say() { printf '\n== %s\n' "$*"; }

# ---------------------------------------------------------------- 0. SteamOS: build in a container
OS_ID=$(. /etc/os-release && echo "${ID:-}")
if [[ $OS_ID == steamos && -z ${ALBW_IN_BOX:-} ]]; then
    BOX=${ALBW_BOX:-albw-build}
    if ! command -v distrobox >/dev/null || ! command -v podman >/dev/null; then
        echo "SteamOS: building needs distrobox and podman (included since SteamOS 3.5)."
        echo "Update SteamOS, or build on another Linux PC and copy the AppImage over"
        echo "(./build.sh there, then tools/make_appimage.sh)."
        exit 1
    fi
    if ! distrobox list 2>/dev/null | grep -qw "$BOX"; then
        say "SteamOS: creating the build container '$BOX' (Arch Linux, once; packages go there, not on SteamOS)"
        distrobox create --yes --name "$BOX" --image docker.io/library/archlinux:latest
    fi
    flags=(); [[ $DEPS == 0 ]] && flags+=(--no-deps)
    say "SteamOS: building inside '$BOX'"
    distrobox enter "$BOX" -- env ALBW_IN_BOX=1 ALBW_JOBS="$JOBS" bash -c 'cd "$1" && shift && ./build.sh "$@" && tools/make_appimage.sh' \
        _ "$ROOT" "${flags[@]+"${flags[@]}"}" "$ROM"
    say "done. Start the game with ./build/ALBW-native-x86_64.AppImage
   Game Mode: Steam (desktop mode) > Games > Add a Non-Steam Game > Browse > choose the AppImage.
   Controls: Steam Input's gamepad layout; menu = both sticks clicked (L3+R3); the touchscreen is the
   3DS bottom screen."
    exit 0
fi

# ---------------------------------------------------------------- 1. packages
install_deps() {
    . /etc/os-release
    # root (containers, minimal installs without sudo) runs the package manager directly
    local sudo=sudo
    [[ $(id -u) == 0 ]] && sudo=""
    local id=" ${ID:-} ${ID_LIKE:-} "
    if [[ $id == *" arch "* ]]; then
        if [[ -n ${ALBW_IN_BOX:-} ]] && ! grep -q '^\[multilib\]' /etc/pacman.conf; then
            # build.sh's own SteamOS container: enable [multilib] there (never on a real system)
            printf '\n[multilib]\nInclude = /etc/pacman.d/mirrorlist\n' | $sudo tee -a /etc/pacman.conf >/dev/null
        fi
        if ! grep -q '^\[multilib\]' /etc/pacman.conf; then
            echo "The 32-bit libraries come from Arch's [multilib] repository, which is not enabled."
            echo "Uncomment the [multilib] section (both lines) in /etc/pacman.conf, run"
            echo "'sudo pacman -Sy', then rerun this script."
            exit 1
        fi
        $sudo pacman -Sy --needed --noconfirm clang lld llvm python cmake ninja git pkgconf \
            lib32-glibc lib32-gcc-libs lib32-zlib lib32-sdl3 lib32-mesa lib32-libglvnd \
            lib32-alsa-lib lib32-libpulse
    elif [[ $id == *" fedora "* || $id == *" rhel "* ]]; then
        # Fedora 40+ ships zlib as zlib-ng-compat; older releases and RHEL as zlib
        local zlib=zlib-ng-compat-devel.i686
        dnf -q repoquery $zlib 2>/dev/null | grep -q . || zlib=zlib-devel.i686
        $sudo dnf install -y clang lld llvm python3 cmake ninja-build git pkgconf-pkg-config \
            glibc-devel.i686 libgcc.i686 $zlib mesa-libGL.i686 mesa-libEGL.i686 \
            libX11.i686 libXext.i686 libXcursor.i686 libXi.i686 libXrandr.i686 libxkbcommon.i686 \
            wayland-devel libX11-devel libXext-devel libxkbcommon-devel pipewire-libs.i686 \
            pulseaudio-libs.i686 alsa-lib.i686
        $sudo dnf install -y SDL3-devel.i686 || true     # else built from source below
    elif [[ $id == *" debian "* || $id == *" ubuntu "* ]]; then
        $sudo dpkg --add-architecture i386
        $sudo apt-get update
        # Ubuntu 24.04+ / Debian 13+ renamed libasound2 to libasound2t64 (64-bit time_t)
        local asound=libasound2:i386
        apt-cache show libasound2t64 >/dev/null 2>&1 && asound=libasound2t64:i386
        # the distribution's default clang can be too old (Ubuntu 24.04: 18, whose build crashed at
        # the first frame): take the newest versioned clang (19+), found in /usr/lib/llvm-N/bin
        local llvm_n
        llvm_n=$(apt-cache search --names-only '^clang-[0-9]+$' | sed -E 's/^clang-([0-9]+).*/\1/' | sort -n | tail -1)
        [[ -n $llvm_n ]] || { echo "no clang-N package found"; exit 1; }
        # gcc-multilib conflicts with installed ARM cross compilers (gcc-arm-linux-gnueabihf);
        # libc6-dev-i386 + lib32gcc-N-dev give the same 32-bit headers / crt files without it
        local multilib=gcc-multilib gcc_n
        if ! apt-get -s install gcc-multilib >/dev/null 2>&1; then
            gcc_n=$(gcc -dumpversion 2>/dev/null | cut -d. -f1)
            [[ -n $gcc_n ]] && multilib="libc6-dev-i386 lib32gcc-$gcc_n-dev"
        fi
        $sudo apt-get install -y clang-$llvm_n lld-$llvm_n llvm-$llvm_n python3 cmake ninja-build git pkg-config \
            $multilib lib32z1-dev libx11-dev libxext-dev libwayland-dev libxkbcommon-dev \
            libegl-dev libgl-dev libpulse-dev libasound2-dev \
            libgl1:i386 libegl1:i386 libx11-6:i386 libxext6:i386 libxcursor1:i386 libxi6:i386 \
            libxrandr2:i386 libxkbcommon0:i386 libwayland-client0:i386 libwayland-egl1:i386 \
            libwayland-cursor0:i386 libpulse0:i386 $asound
        # gcc-multilib also provides /usr/include/asm for -m32 (x86's asm headers are shared by
        # 32 and 64 bit); without it, point it at the 64-bit ones
        if [[ $multilib != gcc-multilib && ! -e /usr/include/asm && -d /usr/include/x86_64-linux-gnu/asm ]]; then
            $sudo ln -s x86_64-linux-gnu/asm /usr/include/asm
        fi
    elif [[ $id == *" suse "* || $id == *" opensuse "* ]]; then
        $sudo zypper install -y clang lld llvm python3 cmake ninja git pkgconf-pkg-config \
            gcc-32bit glibc-devel-32bit libglvnd-32bit zlib-devel-32bit Mesa-libGL1-32bit Mesa-libEGL1-32bit \
            libX11-6-32bit libXext6-32bit libxkbcommon0-32bit libwayland-client0-32bit \
            libpulse0-32bit libasound2-32bit libX11-devel wayland-devel libxkbcommon-devel
    else
        echo "Unknown distribution ($ID). Install: clang, lld, llvm, python3, cmake, ninja, git,"
        echo "pkg-config, 32-bit glibc + zlib development files, 32-bit OpenGL/EGL, then rerun"
        echo "with --no-deps."
        exit 1
    fi
}
if [[ $DEPS == 1 ]]; then say "installing packages"; install_deps; fi

# ---------------------------------------------------------------- LLVM toolchain
# clang 19 or newer: decompiled code is full of spots where compilers may differ, and the game built
# with clang 18 (Ubuntu 24.04's default) crashed at the first frame. Debian/Ubuntu keep each version's
# unversioned tools in /usr/lib/llvm-N/bin: the newest one goes first in PATH, and build/llvm_bin
# remembers it for tools/link.sh run on its own.
clang_major() { "$1" --version 2>/dev/null | sed -nE 's/.*clang version ([0-9]+).*/\1/p' | head -1; }
best=$(command -v clang || true); best_v=$( [[ -n $best ]] && clang_major "$best" || echo 0)
for d in $(ls -d /usr/lib/llvm-[0-9]*/bin 2>/dev/null); do
    v=$(clang_major "$d/clang"); [[ -n $v && $v -gt ${best_v:-0} ]] && { best=$d/clang; best_v=$v; }
done
if [[ -z $best || ${best_v:-0} -lt 19 ]]; then
    echo "clang ${best_v:-?} found; the game needs clang 19 or newer (with lld and llvm tools)."
    echo "Debian/Ubuntu: sudo apt install clang-19 lld-19 llvm-19 (or newer), then rerun."
    exit 1
fi
mkdir -p build
if [[ $best == /usr/lib/llvm-* ]]; then
    export PATH="$(dirname "$best"):$PATH"
    dirname "$best" > build/llvm_bin
else
    rm -f build/llvm_bin
fi
say "using clang $best_v ($best)"
for t in clang ld.lld llvm-nm llvm-objcopy llvm-objdump llvm-readelf python3 pkg-config; do
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
printf '%s\n' "$ROM_SAVE" > "$CFG/rom_path"

# ---------------------------------------------------------------- 4. compile + link
say "compiling the decompiled game code ($JOBS jobs; the first build takes a while)"
ALBW_CODE_BIN=build/rom/eu_code.bin python3 tools/build_decomp.py --snapshot decomp --jobs "$JOBS"
say "linking"
ALBW_FCONV_INTERIM=0 ALBW_CODE_BIN=build/rom/eu_code.bin tools/link.sh

say "done. Start the game with ./run.sh"
