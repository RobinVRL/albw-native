/* C++ runtime pieces the game calls, with the ARM C++ ABI semantics its data expects.
 *
 * Static-local guards: the game's guard variables are 4-byte ARM-ABI guards (bit 0 = done)
 * sitting right before the guarded object in its data. The x86 Itanium ABI uses 8-byte guards,
 * so libstdc++'s versions would overwrite the object: these replace them. Thread-safe. */
#define _GNU_SOURCE
#include <pthread.h>
#include <stdint.h>
#include "runtime.h"

static pthread_mutex_t guard_lock = PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP;

int __cxa_guard_acquire(uint32_t *g) {
    if (__atomic_load_n(g, __ATOMIC_ACQUIRE) & 1) return 0;
    pthread_mutex_lock(&guard_lock);
    if (*g & 1) {
        pthread_mutex_unlock(&guard_lock);
        return 0;
    }
    return 1;  /* caller initialises, then calls release (lock stays held, recursive) */
}

void __cxa_guard_release(uint32_t *g) {
    __atomic_store_n(g, 1, __ATOMIC_RELEASE);
    pthread_mutex_unlock(&guard_lock);
}

void __cxa_guard_abort(uint32_t *g) {
    (void)g;
    pthread_mutex_unlock(&guard_lock);
}

void __cxa_pure_virtual(void) {
    runtime_fatal("pure virtual function called from %p", __builtin_return_address(0));
}

/* ARM C++ ABI array construction (USA 0x00100118, Thumb in the game's C library):
 * construct `count` elements of `size` bytes with `ctor`, return the array. */
typedef void *(*VecCtor)(void *);

void *__aeabi_vec_ctor_nocookie_nodtor(void *array, VecCtor ctor, uint32_t size, uint32_t count) {
    if (ctor) {
        char *p = array;
        for (uint32_t i = 0; i < count; i++, p += size) ctor(p);
    }
    return array;
}
void *func_00100118(void *, VecCtor, uint32_t, uint32_t) __attribute__((alias("__aeabi_vec_ctor_nocookie_nodtor")));
/* USA 0x00100110: ARM->Thumb interworking stub (add ip, pc, #1; bx ip) to the same helper */
void *func_00100110(void *, VecCtor, uint32_t, uint32_t) __attribute__((alias("__aeabi_vec_ctor_nocookie_nodtor")));

/* USA 0x00100174 (Thumb, the game's C++ runtime): static-local guard as the game implements it:
 * claim the 4-byte guard at acquire time (its release is a no-op the compiler removed).
 * Made thread-safe with compare-and-swap. Returns 1 if the caller must run the initialiser. */
int func_00100174(uint32_t *g) {
    uint32_t expected = 0;
    return __atomic_compare_exchange_n(g, &expected, 1, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
}
