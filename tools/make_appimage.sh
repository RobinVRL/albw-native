#!/usr/bin/env bash
# Package the current build (build/albw, from ./build.sh) as an AppImage.
#
#   tools/make_appimage.sh [output.AppImage]      default: build/ALBW-native-x86_64.AppImage
#
# Contents: the game (32-bit), its save-state map (albw.ssmap), the 32-bit SDL3 and zlib it was
# linked with (+ libgcc_s), a launcher (packaging/appimage/AppRun), desktop file and icon.
# Not inside, by design:
#   - the game itself: the player supplies their own decrypted .3ds (--rom PATH, ALBW_ROM, or a file
#     dialog on first start; remembered in ~/.config/albw-port/rom_path);
#   - 32-bit glibc and the OpenGL driver: they must match the system (the launcher says what to
#     install when they are missing).
# The AppImage holds compiled game code: share it only as far as you would share the build.
#
# appimagetool is downloaded once into build/appimage-tools/ (from github.com/AppImage/appimagetool).
# Running the AppImage needs FUSE (libfuse2 or fuse3); without it:
#   ./ALBW-native-x86_64.AppImage --appimage-extract-and-run [--rom ...]
set -euo pipefail
cd "$(dirname "$0")/.."
ROOT=$PWD
OUT=${1:-build/ALBW-native-x86_64.AppImage}
[[ $OUT == /* ]] || OUT=$ROOT/$OUT

[[ -x build/albw ]] || { echo "build/albw not found: run ./build.sh first"; exit 1; }
[[ -f build/albw.ssmap ]] || echo "warning: build/albw.ssmap missing (save states will not load)"

# appimagetool (x86_64 runtime: the launcher runs natively, then starts the 32-bit game)
TOOLS=build/appimage-tools
TOOL=$TOOLS/appimagetool-x86_64.AppImage
if [[ ! -x $TOOL ]]; then
    mkdir -p $TOOLS
    echo "== downloading appimagetool"
    curl -fL --retry 3 -o $TOOL.part \
        https://github.com/AppImage/appimagetool/releases/download/continuous/appimagetool-x86_64.AppImage
    chmod +x $TOOL.part && mv $TOOL.part $TOOL
fi

# AppDir
APPDIR=build/AppDir
rm -rf "${APPDIR:?}"
mkdir -p $APPDIR/usr/bin $APPDIR/usr/lib
cp build/albw $APPDIR/usr/bin/albw
[[ -f build/albw.ssmap ]] && cp build/albw.ssmap $APPDIR/usr/bin/albw.ssmap

# bundled libraries: the exact files the build resolves (ldd), minus what must come from the system
bundle=(libSDL3.so.0 libz.so.1 libgcc_s.so.1)
for lib in "${bundle[@]}"; do
    path=$(ldd build/albw | awk -v l="$lib" '$1 == l {print $3}')
    if [[ -z $path || ! -f $path ]]; then
        echo "warning: $lib not resolved by ldd, not bundled"
        continue
    fi
    cp -L "$path" $APPDIR/usr/lib/$lib
done
# libraries SDL3 itself needs at load time (not dlopen'ed), except system ones
if [[ -f $APPDIR/usr/lib/libSDL3.so.0 ]]; then
    ldd $APPDIR/usr/lib/libSDL3.so.0 | awk '$3 ~ /^\// {print $1, $3}' | while read -r name path; do
        case $name in
            libc.so*|libm.so*|libdl.so*|libpthread.so*|librt.so*|ld-linux*|libgcc_s.so*) ;;
            *) [[ -f $APPDIR/usr/lib/$name ]] || cp -L "$path" $APPDIR/usr/lib/$name ;;
        esac
    done
fi

cp packaging/appimage/AppRun $APPDIR/AppRun
chmod +x $APPDIR/AppRun
cp packaging/appimage/albw-port.desktop $APPDIR/albw-port.desktop
cp packaging/appimage/albw-port.svg $APPDIR/albw-port.svg
ln -sf albw-port.svg $APPDIR/.DirIcon
mkdir -p $APPDIR/usr/share/applications $APPDIR/usr/share/icons/hicolor/scalable/apps
cp packaging/appimage/albw-port.desktop $APPDIR/usr/share/applications/
cp packaging/appimage/albw-port.svg $APPDIR/usr/share/icons/hicolor/scalable/apps/

echo "== bundled:"; ls -la $APPDIR/usr/bin $APPDIR/usr/lib | awk 'NF>=9 {print "   ", $5, $9}'

# appimagetool itself is an AppImage: extract-and-run works without FUSE (containers, CI)
mkdir -p "$(dirname "$OUT")"
ARCH=x86_64 APPIMAGE_EXTRACT_AND_RUN=1 $TOOL --no-appstream $APPDIR "$OUT"
echo "== done: $OUT"
echo "   run: $OUT --rom /path/to/your/game.3ds   (the path is remembered afterwards)"
