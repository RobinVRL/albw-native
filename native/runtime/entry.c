/* Native entry point: the same sequence as the game's own startup code (USA 0x00100000),
 *     runtime init x4 -> C++ static constructors -> initialiser table -> final init -> game main,
 * with the platform layer brought up first. SDK functions in this chain are replaced natively
 * (native/sdk/); everything else is the decompiled game code. */
#define _GNU_SOURCE
#include <dlfcn.h>
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
void func_00100E60(void);
void func_00100C18(void);
void func_00100C90(void);
void albw_fp_set_3ds_mode(void);   /* native/sdk/os.c */
void albw_sched_main_thread(void); /* native/sdk/os.c */

struct MainArgs { int argc; char **argv; };
static int game_main(void *p);

int main(int argc, char **argv) {
    /* x86-64 low-4GB mode: the game runs on a low stack (game code keeps stack addresses in
     * 32-bit words), same thread; on i386 game_main is called directly (runtime/lowmem.c) */
    struct MainArgs a = {argc, argv};
    return albw_run_on_low_stack(game_main, &a, 16u << 20);
}

static int game_main(void *p) {
    int argc = ((struct MainArgs *)p)->argc;
    char **argv = ((struct MainArgs *)p)->argv;
    runtime_install_crash_handler();
    prof_init();
    PlatConfig cfg = {2, 0, 1};   /* render_scale 0: layout.cfg (Esc menu) decides */
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--scale") && i + 1 < argc) cfg.scale = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--render-scale") && i + 1 < argc) cfg.render_scale = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--no-vsync")) cfg.vsync = 0;
    }
    if (plat_init("The Legend of Zelda: A Link Between Worlds", &cfg)) return 1;
    /* the game's main thread runs with the same VFP mode as its other threads (FZ: the kernel's
     * initial FPSCR is not in the game code; 00106314 sets 0x03000000 on every thread it
     * creates). After plat_init: host libraries (SDL, GL drivers) keep their IEEE mode at init. */
    albw_fp_set_3ds_mode();
    /* this is the game's main thread: it owns the app core from here on (native/sdk/os.md,
     * "App-core scheduling"; ALBW_SCHED=parallel turns the model off) */
    albw_sched_main_thread();

    fprintf(stderr, "startup: runtime init\n");
    func_00100024();  /* zero .bss (decompiled, harmless) */
    /* 00100BC4 / 00100D84: armcc C-library start-up (per-thread library state, stdio). On Linux,
     * libc did all of this before main(); the native replacement is to not run the 3DS version. */
    /* 00100E60: nn startup (nninitStartUp): SetHeapSize(0x60000) (native, sdk/memory.c) and the
     * nn allocator on a 0x40000 MemoryBlock (00100E78). The framework bootstrap 00100F68 puts
     * sead's RootHeapMemory right after it (albw_os_heap_address() + 0x40000). */
    func_00100E60();
    fprintf(stderr, "startup: %u static constructors\n", albw_ctors_count);
    int verbose = getenv("ALBW_TRACE_CTORS") != NULL;
    for (uint32_t i = 0; i < albw_ctors_count; i++) {
        if (verbose || (i & 63) == 0) {
            Dl_info di;
            const char *name = dladdr((void *)albw_ctors[i], &di) && di.dli_sname ? di.dli_sname : "?";
            fprintf(stderr, "ctor %u/%u %s\n", i, albw_ctors_count, name);
        }
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
