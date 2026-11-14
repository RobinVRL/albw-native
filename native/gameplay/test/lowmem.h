/* Test helper: game objects must live below 4 GiB (game pointers are 32-bit words; on the
 * x86-64 build the runtime maps the game arena low). lowalloc() returns zeroed memory below
 * 2 GiB on -m64 (mmap MAP_32BIT) and plain calloc memory on -m32. */
#ifndef ALBW_TEST_LOWMEM_H
#define ALBW_TEST_LOWMEM_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#if defined(__x86_64__)
#include <sys/mman.h>
static inline void *lowalloc(size_t n) {
    void *p = mmap(NULL, n, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_32BIT, -1, 0);
    if (p == MAP_FAILED || (uintptr_t)p + n > 0x100000000ull) { perror("lowalloc"); exit(2); }
    return p;
}
#else
static inline void *lowalloc(size_t n) { return calloc(1, n); }
#endif
#endif
