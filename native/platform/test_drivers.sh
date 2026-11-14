#!/usr/bin/env bash
# Run the platform demo on every OpenGL driver stack available on this machine, with GL debug
# output on. Mesa llvmpipe shares the GL/GLSL front-end with Intel (iris/crocus) and AMD
# (radeonsi), so it catches most "works on NVIDIA only" bugs without that hardware.
#   native/platform/test_drivers.sh [path/to/demo] [frames]
set -u
DEMO="${1:-build/platform/demo64}"
FRAMES="${2:-90}"
MESA_EGL=/usr/share/glvnd/egl_vendor.d/50_mesa.json
run() {
    local name="$1"; shift
    printf '=== %-14s ' "$name"
    out=$(env ALBW_GL_DEBUG=1 "$@" "$DEMO" "$FRAMES" 2>&1)
    status=$?
    gl=$(grep -m1 '^GL:' <<<"$out" | cut -d'|' -f2 | xargs)
    fps=$(grep -o '[0-9.]* fps' <<<"$out")
    errs=$(grep -c 'GL debug' <<<"$out")
    [[ $status -eq 0 && $errs -eq 0 ]] && echo "OK   $fps  ($gl)" || { echo "FAIL (exit $status, $errs GL messages)"; echo "$out" | tail -5; }
}
run default
run mesa-llvmpipe __EGL_VENDOR_LIBRARY_FILENAMES=$MESA_EGL __GLX_VENDOR_LIBRARY_NAME=mesa LIBGL_ALWAYS_SOFTWARE=1 GALLIUM_DRIVER=llvmpipe
run mesa-zink __EGL_VENDOR_LIBRARY_FILENAMES=$MESA_EGL __GLX_VENDOR_LIBRARY_NAME=mesa MESA_LOADER_DRIVER_OVERRIDE=zink GALLIUM_DRIVER=zink
run x11-llvmpipe SDL_VIDEO_DRIVER=x11 __EGL_VENDOR_LIBRARY_FILENAMES=$MESA_EGL __GLX_VENDOR_LIBRARY_NAME=mesa LIBGL_ALWAYS_SOFTWARE=1 GALLIUM_DRIVER=llvmpipe
