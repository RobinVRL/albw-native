/* Test helpers for native/hot: game objects below 4 GiB (lowmem.h from native/gameplay/test)
 * and a low stack (the game runs its threads on MAP_32BIT stacks on x86-64, and several
 * functions pass stack addresses through 32-bit game words, e.g. 004F5588's probe vectors). */
#ifndef ALBW_HOT_TEST_H
#define ALBW_HOT_TEST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ucontext.h>
#include "../../gameplay/test/lowmem.h"
#include "../hot.h"

static int g_fail, g_checks;
#define CHECK(c, ...) do { g_checks++; if (!(c)) { g_fail++; printf("FAIL %s:%d: ", __FILE__, __LINE__); \
    printf(__VA_ARGS__); printf("\n"); } } while (0)
#define CHECK_U(a, b) CHECK((uint32_t)(a) == (uint32_t)(b), "%s = 0x%08X, want 0x%08X", #a, (uint32_t)(a), (uint32_t)(b))
#define CHECK_F(a, b) CHECK(gp_f2u(a) == gp_f2u(b), "%s = %g (0x%08X), want %g (0x%08X)", #a, (double)(a), gp_f2u(a), (double)(b), gp_f2u(b))

static inline char *obj(size_t n) { return (char *)lowalloc(n); }
static inline uint32_t w(void *p) { return gp_u32(p); }

static ucontext_t lowstack_main, lowstack_ctx;
static void (*lowstack_fn)(void);
static void lowstack_tramp(void) { lowstack_fn(); }
/* run fn on a 1 MiB stack below 4 GiB */
static inline void run_low(void (*fn)(void))
{
    size_t sz = 1 << 20;
    char *stk = (char *)lowalloc(sz);
    lowstack_fn = fn;
    getcontext(&lowstack_ctx);
    lowstack_ctx.uc_stack.ss_sp = stk;
    lowstack_ctx.uc_stack.ss_size = sz;
    lowstack_ctx.uc_link = &lowstack_main;
    makecontext(&lowstack_ctx, lowstack_tramp, 0);
    swapcontext(&lowstack_main, &lowstack_ctx);
}
static inline int report(const char *name)
{
    printf("%s: %d checks, %d failed (%d-bit)\n", name, g_checks, g_fail, (int)(sizeof(void *) * 8));
    return g_fail != 0;
}
#endif
