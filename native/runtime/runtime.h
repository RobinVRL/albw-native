/* Native runtime shared by the platform layer, SDK replacements and intrinsics. */
#pragma once
#include <stdint.h>

/* print "FATAL: ...", the native backtrace, and abort */
_Noreturn void runtime_fatal(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

/* thread-local SDK block (see intrinsics.c) */
uintptr_t albw_tls(void);
