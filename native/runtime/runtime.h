/* Native runtime shared by the platform layer, SDK replacements and intrinsics. */
#pragma once
#include <stdint.h>

/* print "FATAL: ...", the native backtrace, and abort */
_Noreturn void runtime_fatal(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
/* native/runtime/crash.c: crash reports (signal, pc, frame, backtrace) to stderr + crash.log */
void runtime_install_crash_handler(void);
void prof_init(void);    /* ALBW_PROFILE=<file>: sampling CPU profiler (prof.c) */
void prof_frame(void);   /* once per presented frame: periodic dump */

/* thread-local SDK block (see intrinsics.c) */
uintptr_t albw_tls(void);

/* low memory for the x86-64 low-4GB mode (lowmem.c; plain allocations on i386) */
#include <stddef.h>
#include <pthread.h>
void *albw_low_map(size_t size, int prot, int extra_flags);
void albw_check_low(const void *p, const char *what);
int albw_thread_create_low(pthread_t *out, const pthread_attr_t *attr, void *(*fn)(void *), void *arg,
                           size_t stack_size);
int albw_run_on_low_stack(int (*fn)(void *), void *arg, size_t stack_size);
