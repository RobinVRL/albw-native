/* Emulated thread-local storage for the Windows build (windows/README.md).
 *
 * The Windows variant compiles the native layer with -femulated-tls: every _Thread_local variable
 * (sdk/os.c, runtime/intrinsics.c) is reached through __emutls_get_address(control) instead of the
 * Linux thread pointer (%gs), which Windows does not provide. The compiler's runtime that normally
 * supplies this function is not part of the link, so here it is: one pthread key holds, per thread,
 * an array of the thread's copies, indexed by a number given to each variable on first use. */
#ifdef ALBW_WINDOWS
#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    size_t size, align;
    uintptr_t index;    /* 0 = no index yet; else index + 1 */
    void *init;         /* initial value, or NULL for zero */
} EmuControl;

static pthread_key_t g_key;
static pthread_once_t g_once = PTHREAD_ONCE_INIT;
static pthread_mutex_t g_lock = PTHREAD_MUTEX_INITIALIZER;
static uintptr_t g_count;

static void make_key(void) { pthread_key_create(&g_key, NULL); }

void *__emutls_get_address(EmuControl *c) {
    pthread_once(&g_once, make_key);
    uintptr_t i = __atomic_load_n(&c->index, __ATOMIC_ACQUIRE);
    if (!i) {
        pthread_mutex_lock(&g_lock);
        if (!(i = c->index)) __atomic_store_n(&c->index, i = ++g_count, __ATOMIC_RELEASE);
        pthread_mutex_unlock(&g_lock);
    }
    void **arr = pthread_getspecific(g_key);
    size_t n = arr ? (size_t)(uintptr_t)arr[0] : 0;
    if (i >= n) {   /* grow this thread's array (slot 0 holds its length) */
        size_t m = i + 16;
        void **na = calloc(m, sizeof *na);
        if (arr) { memcpy(na, arr, n * sizeof *na); free(arr); }
        na[0] = (void *)(uintptr_t)m;
        arr = na;
        pthread_setspecific(g_key, arr);
    }
    if (!arr[i]) {
        size_t al = c->align < sizeof(void *) ? sizeof(void *) : c->align;
        void *p = malloc(c->size ? c->size : 1);   /* 16-byte aligned (the loader's malloc) */
        (void)al;
        if (c->init) memcpy(p, c->init, c->size);
        else memset(p, 0, c->size);
        arr[i] = p;
    }
    return arr[i];
}
#endif
