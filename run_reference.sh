#!/usr/bin/env bash
# Run the original game in the Azahar 3DS emulator, as a visual/behaviour reference for the port.
# Development aid only: the emulator is never part of the port, and nothing from it is linked or copied.
# Install once:  flatpak install --user flathub org.azahar_emu.Azahar
# Decrypted dumps often keep the NCCH "encrypted" flag, which Azahar rejects ("Failed to determine
# system mode (Error 8)"): a copy with the NoCrypto flag set is made once, outside the repo.
set -e
: "${ALBW_ROM:=$(cat "${XDG_CONFIG_HOME:-$HOME/.config}/albw-port/rom_path" 2>/dev/null || echo rom.3ds)}"
REF_DIR="${XDG_DATA_HOME:-$HOME/.local/share}/albw-port/reference"
COPY="$REF_DIR/albw_nocrypto.3ds"
if [[ ! -f "$COPY" || "$ALBW_ROM" -nt "$COPY" ]]; then
    mkdir -p "$REF_DIR"
    cp --reflink=auto "$ALBW_ROM" "$COPY.tmp"
    python3 -I - "$COPY.tmp" <<'PY'
import struct, sys
f = open(sys.argv[1], "r+b")
for i in range(8):
    f.seek(0x120 + i * 8); off, size = struct.unpack("<II", f.read(8))
    if not size: continue
    o = off * 0x200; f.seek(o + 0x100)
    if f.read(4) != b"NCCH": continue
    f.seek(o + 0x188); fl = bytearray(f.read(8))
    fl[3] = 0; fl[7] |= 4            # crypto method 0, NoCrypto
    f.seek(o + 0x188); f.write(fl)
PY
    mv "$COPY.tmp" "$COPY"
fi
# X11 (XWayland) so the window can be screenshotted with `import -window`
exec flatpak run --socket=x11 --nosocket=wayland --env=QT_QPA_PLATFORM=xcb --env=DISPLAY="${DISPLAY:-:0}" \
    --filesystem="$REF_DIR" org.azahar_emu.Azahar "$COPY" "$@"
