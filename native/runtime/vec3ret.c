/* s0..s2 of a Vec3 returned in VFP registers (ARM hard-float homogeneous aggregate, BOOT_LOG 160l).
 * Natively such functions return x and publish the whole vector here; their converted callers read
 * y / z from it right after the call.
 * Per thread (BOOT_LOG 160s): the sound thread and the system-core threads run game code in
 * parallel with the main thread, so one shared vector could be overwritten between a return and the
 * read. Not _Thread_local: a new TLS variable shifts the TLS layout, and save states restore thread
 * stacks that address TLS by the saving build's offsets (states would no longer load). A small
 * table keyed by pthread_self() instead (claimed once per thread with a CAS, never released). */
#include <pthread.h>
#include <stdatomic.h>
#include <stdint.h>

#define SLOTS 64
static _Atomic uintptr_t g_owner[SLOTS];
static float g_vec[SLOTS][3];
static float g_spare[3];   /* more than SLOTS threads: shared (never seen: the game has < 16) */

float *albw_s012_get(void) {
    uintptr_t me = (uintptr_t)pthread_self();
    unsigned h = (unsigned)((me >> 4) * 2654435761u) % SLOTS;
    for (unsigned i = 0; i < SLOTS; i++) {
        unsigned k = (h + i) % SLOTS;
        uintptr_t o = atomic_load_explicit(&g_owner[k], memory_order_acquire);
        if (o == me) return g_vec[k];
        if (o == 0) {
            uintptr_t z = 0;
            if (atomic_compare_exchange_strong(&g_owner[k], &z, me)) return g_vec[k];
            if (z == me) return g_vec[k];
        }
    }
    return g_spare;
}
