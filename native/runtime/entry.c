/* Native entry point: the same sequence as the game's own startup code (USA 0x00100000),
 *     runtime init x4 -> C++ static constructors -> initialiser table -> final init -> game main,
 * with the platform layer brought up first. SDK functions in this chain are replaced natively
 * (native/sdk/); everything else is the decompiled game code. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../platform/platform.h"
#include "runtime.h"

typedef void (*InitFn)(void);
extern const InitFn albw_ctors[];
extern const uint32_t albw_ctors_count;
extern const InitFn albw_inits[];
extern const uint32_t albw_inits_count;

/* startup chain, in the order the game calls it */
void func_00100024(void);
void func_00100C18(void);
void func_00100C90(void);

int main(int argc, char **argv) {
    PlatConfig cfg = {2, 1, 1};
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--scale") && i + 1 < argc) cfg.scale = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--render-scale") && i + 1 < argc) cfg.render_scale = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--no-vsync")) cfg.vsync = 0;
    }
    if (plat_init("The Legend of Zelda: A Link Between Worlds", &cfg)) return 1;

    fprintf(stderr, "startup: runtime init\n");
    func_00100024();  /* zero .bss (decompiled, harmless) */
    /* 00100BC4 / 00100D84 / 00100E60: armcc C-library start-up (per-thread library state, heap,
     * stdio). On Linux, libc did all of this before main(); the native replacement is to not run
     * the 3DS version. */
    fprintf(stderr, "startup: %u static constructors\n", albw_ctors_count);
    int verbose = getenv("ALBW_TRACE_CTORS") != NULL;
    for (uint32_t i = 0; i < albw_ctors_count; i++) {
        if (verbose || (i & 63) == 0) fprintf(stderr, "ctor %u/%u\n", i, albw_ctors_count);
        albw_ctors[i]();
    }
    for (uint32_t i = 0; i < albw_inits_count; i++) albw_inits[i]();
    fprintf(stderr, "startup: game main\n");
    func_00100C18();
    func_00100C90();
    fprintf(stderr, "game returned\n");
    plat_shutdown();
    return 0;
}
