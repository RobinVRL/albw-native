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
