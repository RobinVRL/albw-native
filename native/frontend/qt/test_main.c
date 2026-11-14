/* Test content for the Qt frontend until the game builds as 64-bit (not game code).
 *   albw-qt [viewer args...]   asset viewer (native/assets/viewer.c, unmodified) if a ROM is set
 *                              ($ALBW_ROM or File > Open ROM), else the platform test scene
 *   albw-qt --demo [frames]    the platform test scene (native/platform/demo.c, unmodified)
 * Both programs only use platform.h, which this frontend implements (fe_plat.c): the same
 * mechanism the game will use. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "frontend.h"

int albw_viewer_main(int argc, char **argv);  /* viewer.c, built with -Dmain=albw_viewer_main */
int albw_demo_main(int argc, char **argv);    /* demo.c, built with -Dmain=albw_demo_main */

int main(int argc, char **argv) {
    fe_prepare(&argc, argv);
    int demo = argc > 1 && !strcmp(argv[1], "--demo");
    const char *rom = getenv("ALBW_ROM");
    if (!demo && rom && *rom && access(rom, R_OK) == 0) return albw_viewer_main(argc, argv);
    if (!demo) {
        char msg[1200];
        if (rom && *rom) snprintf(msg, sizeof msg, "ROM not found:\n%s\n\nFile > Open ROM... (Esc shows the menu)", rom);
        else snprintf(msg, sizeof msg, "No ROM loaded.\nFile > Open ROM... (Esc shows the menu)");
        fe_set_status(msg);
        fprintf(stderr, "albw-qt: %s\n", msg);
    }
    if (demo) {
        argv[1] = argv[0];
        return albw_demo_main(argc - 1, argv + 1);
    }
    return albw_demo_main(argc, argv);
}
