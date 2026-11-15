#!/usr/bin/env bash
# Run the original game in the Azahar 3DS emulator, as a visual/behaviour reference for the port.
# Development aid only: the emulator is never part of the port, and nothing from it is linked or copied.
# Install once:  flatpak install --user flathub org.azahar_emu.Azahar
: "${ALBW_ROM:=/path/to/your/game.3ds}"
exec flatpak run --filesystem="$(dirname "$ALBW_ROM")":ro org.azahar_emu.Azahar "$ALBW_ROM" "$@"
