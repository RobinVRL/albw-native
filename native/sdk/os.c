/* Native replacements for the Nintendo 3DS SDK threads / synchronisation / time layer
 * (areas "os-threads/sync" and "time" of native/SDK_AREAS.md), on pthreads and libc.
 *
 * Every func_<USA ADDR> below is a STRONG definition that replaces the weak decompiled one.
 * Nothing here emulates the 3DS kernel: each function is reimplemented by what it means at
 * the API level (create a thread -> pthread_create, sleep -> nanosleep, wait on an address ->
 * a native wait queue keyed by address, tick -> CLOCK_MONOTONIC scaled to 268,111,856 Hz).
 * Notes, design and the list of what stays decompiled: native/sdk/os.md.
 *
 * Design summary
 * - Kernel handles. Game objects keep a 4-byte handle field (nn::os::Thread +0, the mutex
 *   object +0x10, ...). A host pointer does not fit there on 64-bit, so a handle is a small
 *   integer: ((generation & 0x3FFF) << 16) | slot, an index into a native object table
 *   (threads, mutexes, events, semaphores, address arbiters). 0 is never a valid handle;
 *   0xFFFF8000 is the "current thread" pseudo-handle, as on the 3DS.
 * - Light primitives (nn::os::CriticalSection / LightEvent / LightSemaphore) keep their
 *   state word in game memory with the SDK's exact protocol (so any decompiled code that
 *   reads the word still sees the same values). The word is updated with C11 atomics and
 *   threads block in a native per-address wait queue (arb_wait / arb_signal below).
 * - Thread owner field of a CriticalSection: the SDK stores the TLS pointer there. A host TLS
 *   pointer does not fit 4 bytes on 64-bit, so the owner is a native 32-bit thread id
 *   (non-zero, unique per thread). Every function that writes or compares that field is
 *   replaced here (0010C0C0, 0010C160, 003CD8E8 and their +0x10 entry points).
 * - Thread priorities and cores: game threads run one per core at a time in priority order
 *   (app-core scheduling below, native/sdk/os.md); ALBW_SCHED=parallel turns that off.
 */
#define _GNU_SOURCE
#include <errno.h>
#include <pthread.h>
#include <sched.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <xmmintrin.h>

/* the 3DS game threads' VFP mode (FPSCR 0x03000000) on the host SSE unit: FTZ | DAZ */
void albw_fp_set_3ds_mode(void) { _mm_setcsr(_mm_getcsr() | 0x8040u); }

#include "../runtime/runtime.h"
#include "../include/gptr.h" /* ALBW_GP: game pointer words (x86-64 low-4GB build) */

/* ================================================================== results */
#define RES_OK              0x00000000u
#define RES_TIMEOUT         0x09401BFEu /* WaitSynchronization / ArbitrateAddress timeout */
#define RES_INVALID_HANDLE  0xD8E007F7u /* invalid handle */
#define RES_OUT_OF_HANDLES  0xD8600413u /* handle table full (code approximate) */
#define RES_OUT_OF_RANGE    0xE0E01BFDu /* priority / argument out of range */
#define RES_NOT_SUPPORTED   0xF8C007F4u /* operation not supported on this object */

#define PSEUDO_CURRENT_THREAD 0xFFFF8000u
#define DEFAULT_PRIORITY      0x30       /* main-thread priority of a typical 3DS title */

/* ================================================================== time */
#define TICKS_PER_SECOND 268111856LL /* 3DS ARM11 system tick rate */

static void monotonic_now(struct timespec *ts) { clock_gettime(CLOCK_MONOTONIC, ts); }

static uint64_t system_tick(void) {
    struct timespec ts;
    monotonic_now(&ts);
    return (uint64_t)ts.tv_sec * (uint64_t)TICKS_PER_SECOND +
           (uint64_t)ts.tv_nsec * (uint64_t)TICKS_PER_SECOND / 1000000000ull;
}

/* absolute CLOCK_MONOTONIC deadline ns from now */
static struct timespec deadline_after(int64_t ns) {
    struct timespec ts;
    monotonic_now(&ts);
    ts.tv_sec += (time_t)(ns / 1000000000);
    ts.tv_nsec += (long)(ns % 1000000000);
    if (ts.tv_nsec >= 1000000000L) { ts.tv_sec++; ts.tv_nsec -= 1000000000L; }
    return ts;
}

static void sched_yield_turn(void);
static void sched_release(void);
static void sched_acquire(void);

static void sleep_ns(int64_t ns) {
    if (ns <= 0) { sched_yield_turn(); return; }
    struct timespec req = { (time_t)(ns / 1000000000), (long)(ns % 1000000000) }, rem;
    sched_release();
    while (nanosleep(&req, &rem) != 0 && errno == EINTR) req = rem;
    sched_acquire();
}

static void cond_init_monotonic(pthread_cond_t *cv) {
    pthread_condattr_t a;
    pthread_condattr_init(&a);
    pthread_condattr_setclock(&a, CLOCK_MONOTONIC);
    pthread_cond_init(cv, &a);
    pthread_condattr_destroy(&a);
}

/* ================================================================== thread identity */
typedef struct OsObject OsObject;

static atomic_uint g_next_thread_id = 1;
static _Thread_local uint32_t t_id;          /* native thread id, 0 = not assigned yet */
static _Thread_local OsObject *t_self;       /* this thread's object (lazily for foreign threads) */

static uint32_t current_thread_id(void) {
    if (!t_id) t_id = atomic_fetch_add(&g_next_thread_id, 1);
    return t_id;
}

/* ================================================================== app-core scheduling
 * The 3DS runs an application's threads on its app core one at a time: the highest-priority
 * ready thread runs (lower number = higher priority), FIFO among equal priorities, no time
 * slicing. A running thread gives the CPU away only when it blocks (waits, sleeps, joins),
 * yields, or wakes / starts a higher-priority thread. The game relies on that ordering (stop 61:
 * the main thread finished destroying a task's heaps before the lower-priority prepare thread
 * could run). Native: the same rule as an ownership token per core ("running"), handed over at
 * exactly those API calls; game threads hold it while executing game code. Threads created on
 * core 1 (the system core) get their own token, as they ran in parallel on the hardware.
 * Host threads (SDL audio, rendering, input) have no SchedRec and are never scheduled here;
 * they may signal game primitives (that makes the woken game thread ready).
 * ALBW_SCHED=parallel: off (every thread runs freely, the old behaviour) for A/B tests. */
typedef struct SchedRec {
    struct SchedRec *next;   /* ready list link */
    int32_t prio;
    int core;                /* 0 app core, 1 system core */
    bool queued;             /* in the ready list */
    pthread_cond_t cv;
    uint32_t id;
} SchedRec;

static pthread_mutex_t g_sched_m = PTHREAD_MUTEX_INITIALIZER;
static struct { SchedRec *running; SchedRec *ready; } g_core[2];
static _Thread_local SchedRec *t_sched;
static int g_sched_mode = -1;  /* -1 unknown, 0 parallel, 1 priority */

static bool sched_on(void) {
    if (g_sched_mode < 0) {
        const char *e = getenv("ALBW_SCHED");
        g_sched_mode = (e && !strcmp(e, "parallel")) ? 0 : 1;
    }
    return g_sched_mode == 1;
}

/* g_sched_m held: insert r into its core's ready list, behind (or, front = true, in front of)
 * the threads of its own priority */
static void ready_insert_locked(SchedRec *r, bool front) {
    SchedRec **pp = &g_core[r->core].ready;
    while (*pp && ((*pp)->prio < r->prio || (!front && (*pp)->prio == r->prio))) pp = &(*pp)->next;
    r->next = *pp;
    *pp = r;
    r->queued = true;
}

/* g_sched_m held: give a free core to its best ready thread */
static void dispatch_locked(int core) {
    if (g_core[core].running || !g_core[core].ready) return;
    SchedRec *r = g_core[core].ready;
    g_core[core].ready = r->next;
    r->next = NULL;
    r->queued = false;
    g_core[core].running = r;
    pthread_cond_signal(&r->cv);
}

/* g_sched_m held: block until this thread owns its core */
static void wait_turn_locked(SchedRec *r) {
    while (g_core[r->core].running != r) pthread_cond_wait(&r->cv, &g_sched_m);
}

static SchedRec *sched_new(int32_t prio, int core, uint32_t id) {
    SchedRec *r = calloc(1, sizeof *r);
    if (!r) runtime_fatal("os: out of memory");
    pthread_cond_init(&r->cv, NULL);
    r->prio = prio;
    r->core = core == 1 ? 1 : 0;
    r->id = id;
    return r;
}

/* give up the core before blocking (no-op for host threads / parallel mode) */
static void sched_release(void) {
    SchedRec *r = t_sched;
    if (!r) return;
    pthread_mutex_lock(&g_sched_m);
    if (g_core[r->core].running == r) {
        g_core[r->core].running = NULL;
        dispatch_locked(r->core);
    }
    pthread_mutex_unlock(&g_sched_m);
}

/* after blocking: become ready (unless a waker already queued us) and wait for the core */
static void sched_acquire(void) {
    SchedRec *r = t_sched;
    if (!r) return;
    pthread_mutex_lock(&g_sched_m);
    if (g_core[r->core].running != r && !r->queued) ready_insert_locked(r, false);
    dispatch_locked(r->core);
    wait_turn_locked(r);
    pthread_mutex_unlock(&g_sched_m);
}

/* a waker makes a sleeping game thread ready at once (so the preemption check below sees it) */
static void sched_make_ready(SchedRec *r) {
    if (!r) return;
    pthread_mutex_lock(&g_sched_m);
    if (g_core[r->core].running != r && !r->queued) ready_insert_locked(r, false);
    dispatch_locked(r->core);
    pthread_mutex_unlock(&g_sched_m);
}

/* at an API call that may have readied a higher-priority thread: let it run first (the
 * preempted thread stays at the head of its priority) */
static void sched_preempt_check(void) {
    SchedRec *r = t_sched;
    if (!r) return;
    pthread_mutex_lock(&g_sched_m);
    SchedRec *best = g_core[r->core].ready;
    if (g_core[r->core].running == r && best && best->prio < r->prio) {
        g_core[r->core].running = NULL;
        ready_insert_locked(r, true);
        dispatch_locked(r->core);
        wait_turn_locked(r);
    }
    pthread_mutex_unlock(&g_sched_m);
}

/* Thread::Yield / Sleep(0): run the ready threads of the same or higher priority first */
static void sched_yield_turn(void) {
    SchedRec *r = t_sched;
    if (!r) { sched_yield(); return; }
    pthread_mutex_lock(&g_sched_m);
    SchedRec *best = g_core[r->core].ready;
    if (g_core[r->core].running == r && best && best->prio <= r->prio) {
        g_core[r->core].running = NULL;
        ready_insert_locked(r, false);
        dispatch_locked(r->core);
        wait_turn_locked(r);
    }
    pthread_mutex_unlock(&g_sched_m);
}

/* the main game thread joins the scheduler (native/runtime/entry.c, before game main) */
void albw_sched_main_thread(void) {
    if (!sched_on() || t_sched) return;
    SchedRec *r = sched_new(DEFAULT_PRIORITY, 0, current_thread_id());
    pthread_mutex_lock(&g_sched_m);
    t_sched = r;
    ready_insert_locked(r, false);
    dispatch_locked(0);
    wait_turn_locked(r);
    pthread_mutex_unlock(&g_sched_m);
}

/* for other native areas: wrap a host blocking call made on a game thread (vblank sleeps,
 * present), so the other game threads run meanwhile (as they would while the 3DS thread
 * waits). Nesting is not supported. */
void albw_sched_block_begin(void) { sched_release(); }
void albw_sched_block_end(void) { sched_acquire(); }

/* ================================================================== address wait queues
 * The meaning of ArbitrateAddress: "sleep while *addr < value" and "wake N sleepers of addr".
 * Native: hashed buckets, each a mutex + a FIFO of waiters; a waiter sleeps on its own condvar
 * until a signal for its address picks it (no spurious returns, as with the kernel). The
 * check of *addr and the enqueue happen under the bucket mutex, and signalers take the same
 * mutex after changing the word, so no wake-up can be lost. */
typedef struct Waiter {
    struct Waiter *next;
    const void *addr;
    SchedRec *sched;   /* the waiting game thread (NULL: host thread) */
    bool woken;
    bool cv_ready;
    pthread_cond_t cv;
} Waiter;

#define PARK_BUCKETS 64
static struct { pthread_mutex_t m; Waiter *head; } g_park[PARK_BUCKETS] = {
    [0 ... PARK_BUCKETS - 1] = { PTHREAD_MUTEX_INITIALIZER, NULL },
};
static _Thread_local Waiter t_waiter;

static unsigned park_bucket(const void *addr) {
    uintptr_t a = (uintptr_t)addr >> 2;
    return (unsigned)((a ^ (a >> 6) ^ (a >> 12)) % PARK_BUCKETS);
}

enum { ARB_SIGNAL = 0, ARB_WAIT_LT = 1, ARB_DEC_WAIT_LT = 2, ARB_WAIT_LT_TIMEOUT = 3,
       ARB_DEC_WAIT_LT_TIMEOUT = 4 };

/* sleep while *addr < value (optionally decrementing it first), until a signal for addr.
 * ns < 0: no timeout. */
static uint32_t arb_wait(_Atomic int32_t *addr, int32_t value, bool decrement, int64_t ns) {
    unsigned b = park_bucket((const void *)addr);
    Waiter *w = &t_waiter;
    if (!w->cv_ready) { cond_init_monotonic(&w->cv); w->cv_ready = true; }
    pthread_mutex_lock(&g_park[b].m);
    int32_t v = atomic_load(addr);
    if (v >= value) { pthread_mutex_unlock(&g_park[b].m); return RES_OK; }
    if (decrement) atomic_fetch_sub(addr, 1);
    w->addr = (const void *)addr;
    w->sched = t_sched;
    w->woken = false;
    w->next = NULL;
    Waiter **pp = &g_park[b].head;
    while (*pp) pp = &(*pp)->next;
    *pp = w;
    uint32_t res = RES_OK;
    struct timespec dl;
    if (ns >= 0) dl = deadline_after(ns);
    sched_release();   /* blocking: the next ready game thread runs (bucket -> sched lock order) */
    while (!w->woken) {
        if (ns < 0) {
            pthread_cond_wait(&w->cv, &g_park[b].m);
        } else if (pthread_cond_timedwait(&w->cv, &g_park[b].m, &dl) == ETIMEDOUT && !w->woken) {
            for (pp = &g_park[b].head; *pp; pp = &(*pp)->next)
                if (*pp == w) { *pp = w->next; break; }
            res = RES_TIMEOUT;
            break;
        }
    }
    pthread_mutex_unlock(&g_park[b].m);
    sched_acquire();   /* a waker queued us already; a timeout queues here */
    return res;
}

/* wake up to count waiters of addr in FIFO order (count < 0: all) */
static void arb_signal(_Atomic int32_t *addr, int32_t count) {
    unsigned b = park_bucket((const void *)addr);
    pthread_mutex_lock(&g_park[b].m);
    for (Waiter **pp = &g_park[b].head; *pp && count != 0;) {
        Waiter *w = *pp;
        if (w->addr == (const void *)addr) {
            *pp = w->next;
            w->woken = true;
            sched_make_ready(w->sched);
            pthread_cond_signal(&w->cv);
            if (count > 0) count--;
        } else {
            pp = &w->next;
        }
    }
    pthread_mutex_unlock(&g_park[b].m);
    sched_preempt_check();   /* a woken higher-priority game thread runs now */
}

static uint32_t arbitrate(_Atomic int32_t *addr, int32_t type, int32_t value, int64_t ns) {
    switch (type) {
    case ARB_SIGNAL:              arb_signal(addr, value); return RES_OK;
    case ARB_WAIT_LT:             return arb_wait(addr, value, false, -1);
    case ARB_DEC_WAIT_LT:         return arb_wait(addr, value, true, -1);
    case ARB_WAIT_LT_TIMEOUT:     return arb_wait(addr, value, false, ns < 0 ? 0 : ns);
    case ARB_DEC_WAIT_LT_TIMEOUT: return arb_wait(addr, value, true, ns < 0 ? 0 : ns);
    }
    return RES_OUT_OF_RANGE;
}

/* ================================================================== kernel object table */
enum { K_THREAD = 1, K_MUTEX, K_EVENT, K_SEMAPHORE, K_ARBITER };
enum { RESET_ONESHOT = 0, RESET_STICKY = 1, RESET_PULSE = 2 };

struct OsObject {
    int kind;
    int refs; /* handles + (for threads) the running thread itself */
    union {
        struct { bool done; int32_t prio; int32_t core; uint32_t id;
                 void (*entry)(void *); uintptr_t arg; SchedRec *sched; } th;
        struct { uint32_t owner; uint32_t count; } mtx;
        struct { bool signaled; int32_t reset; } ev;
        struct { int32_t count, max; } sem;
    } u;
};

#define MAX_HANDLES 4096
static pthread_mutex_t g_obj_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t g_obj_cv;   /* broadcast on every state change of any object */
static pthread_once_t g_obj_once = PTHREAD_ONCE_INIT;
static OsObject *g_slot[MAX_HANDLES];
static uint16_t g_gen[MAX_HANDLES];
static unsigned g_next_slot = 1;

static void obj_init_once(void) { cond_init_monotonic(&g_obj_cv); }
static void obj_lock(void) { pthread_once(&g_obj_once, obj_init_once); pthread_mutex_lock(&g_obj_lock); }
static void obj_unlock(void) { pthread_mutex_unlock(&g_obj_lock); }

/* g_obj_lock held */
static void obj_release_locked(OsObject *o) {
    if (--o->refs == 0) free(o);
}

/* g_obj_lock held; takes one reference of o for the new handle */
static uint32_t handle_alloc_locked(OsObject *o, uint32_t *out) {
    for (unsigned n = 0; n < MAX_HANDLES - 1; n++) {
        unsigned i = g_next_slot;
        g_next_slot = g_next_slot + 1 >= MAX_HANDLES ? 1 : g_next_slot + 1;
        if (!g_slot[i]) {
            g_slot[i] = o;
            o->refs++;
            g_gen[i] = (uint16_t)((g_gen[i] + 1) & 0x3FFF);
            if (!g_gen[i]) g_gen[i] = 1;
            *out = ((uint32_t)g_gen[i] << 16) | i;
            return RES_OK;
        }
    }
    return RES_OUT_OF_HANDLES;
}

/* g_obj_lock held */
static OsObject *ensure_self_locked(void) {
    if (!t_self) {
        OsObject *o = calloc(1, sizeof *o);
        if (!o) runtime_fatal("os: out of memory");
        o->kind = K_THREAD;
        o->refs = 1; /* the thread itself; never dropped for threads not started here */
        o->u.th.prio = DEFAULT_PRIORITY;
        o->u.th.id = current_thread_id();
        t_self = o;
    }
    return t_self;
}

/* g_obj_lock held */
static OsObject *handle_get_locked(uint32_t h) {
    if (h == PSEUDO_CURRENT_THREAD) return ensure_self_locked();
    unsigned i = h & 0xFFFF;
    if (i == 0 || i >= MAX_HANDLES || !g_slot[i] || g_gen[i] != (h >> 16)) return NULL;
    return g_slot[i];
}

static uint32_t new_object(int kind, uint32_t *out, OsObject **res) {
    OsObject *o = calloc(1, sizeof *o);
    if (!o) return RES_OUT_OF_HANDLES;
    o->kind = kind;
    obj_lock();
    uint32_t r = handle_alloc_locked(o, out);
    if (r != RES_OK) free(o);
    else if (res) *res = o;
    obj_unlock();
    return r;
}

/* g_obj_lock held: can this thread acquire o now? */
static bool obj_ready_locked(OsObject *o) {
    switch (o->kind) {
    case K_THREAD:    return o->u.th.done;
    case K_MUTEX:     return o->u.mtx.owner == 0 || o->u.mtx.owner == current_thread_id();
    case K_EVENT:     return o->u.ev.signaled;
    case K_SEMAPHORE: return o->u.sem.count > 0;
    }
    return false;
}

/* g_obj_lock held: consume the signal of a ready object (WaitSynchronization side effects) */
static void obj_acquire_locked(OsObject *o) {
    switch (o->kind) {
    case K_MUTEX:     o->u.mtx.owner = current_thread_id(); o->u.mtx.count++; break;
    case K_EVENT:     if (o->u.ev.reset == RESET_ONESHOT) o->u.ev.signaled = false; break;
    case K_SEMAPHORE: o->u.sem.count--; break;
    }
}

/* WaitSynchronizationN meaning: wait until one (or all) of the objects is signaled.
 * ns < 0: forever; ns == 0: poll. */
static uint32_t wait_objects(int32_t *out_index, const uint32_t *handles, int32_t count,
                             bool wait_all, int64_t ns) {
    if (count < 0 || count > 64) return RES_OUT_OF_RANGE;
    OsObject *objs[64];
    struct timespec dl;
    if (ns > 0) dl = deadline_after(ns);
    obj_lock();
    for (int32_t i = 0; i < count; i++) {
        objs[i] = handle_get_locked(handles[i]);
        if (!objs[i] || objs[i]->kind == K_ARBITER) { obj_unlock(); return RES_INVALID_HANDLE; }
        objs[i]->refs++; /* keep alive while waiting even if another thread closes the handle */
    }
    uint32_t res = RES_OK;
    bool released = false;
    for (;;) {
        int32_t hit = -1;
        if (wait_all) {
            bool all = count > 0;
            for (int32_t i = 0; i < count; i++) all = all && obj_ready_locked(objs[i]);
            if (all) {
                for (int32_t i = 0; i < count; i++) obj_acquire_locked(objs[i]);
                hit = 0;
            }
        } else {
            for (int32_t i = 0; i < count && hit < 0; i++)
                if (obj_ready_locked(objs[i])) { obj_acquire_locked(objs[i]); hit = i; }
        }
        if (hit >= 0) { if (out_index) *out_index = hit; break; }
        if (ns == 0) { res = RES_TIMEOUT; break; }
        if (!released) { sched_release(); released = true; }  /* obj -> sched lock order */
        if (ns < 0) pthread_cond_wait(&g_obj_cv, &g_obj_lock);
        else if (pthread_cond_timedwait(&g_obj_cv, &g_obj_lock, &dl) == ETIMEDOUT) {
            /* one last check, then time out */
            ns = 0;
        }
    }
    if (res == RES_TIMEOUT && out_index) *out_index = -1;
    for (int32_t i = 0; i < count; i++) obj_release_locked(objs[i]);
    obj_unlock();
    if (released) sched_acquire();
    return res;
}

/* ================================================================== native API for other areas
 * Several SDK functions outside this area (apt / gsp / dsp / snd event loops, srv) contain the
 * svc inline. Their native replacements can call these instead of re-implementing handles.
 * Prototypes are listed in native/sdk/os.md. */
uint64_t albw_os_system_tick(void) { return system_tick(); }

uint32_t albw_os_wait1(uint32_t h, int64_t ns) {   /* svc 0x24 WaitSynchronization1 */
    int32_t idx;
    return wait_objects(&idx, &h, 1, false, ns);
}

uint32_t albw_os_wait_n(int32_t *out_index, const uint32_t *handles, int32_t count, bool wait_all,
                        int64_t ns) {               /* svc 0x25 WaitSynchronizationN */
    return wait_objects(out_index, handles, count, wait_all, ns);
}

uint32_t albw_os_close_handle(uint32_t h) {         /* svc 0x23 CloseHandle */
    if (h == PSEUDO_CURRENT_THREAD || h == 0xFFFF8001u) return RES_OK;
    obj_lock();
    unsigned i = h & 0xFFFF;
    if (i == 0 || i >= MAX_HANDLES || !g_slot[i] || g_gen[i] != (h >> 16)) {
        obj_unlock();
        return RES_INVALID_HANDLE;
    }
    OsObject *o = g_slot[i];
    g_slot[i] = NULL;
    obj_release_locked(o);
    obj_unlock();
    return RES_OK;
}

uint32_t albw_os_duplicate_handle(uint32_t *out, uint32_t h) { /* svc 0x27 DuplicateHandle */
    obj_lock();
    OsObject *o = handle_get_locked(h);
    uint32_t r = o ? handle_alloc_locked(o, out) : RES_INVALID_HANDLE;
    obj_unlock();
    return r;
}

uint32_t albw_os_create_mutex(uint32_t *out, bool locked) {    /* svc 0x13 CreateMutex */
    OsObject *o = NULL;
    uint32_t r = new_object(K_MUTEX, out, &o);
    if (r == RES_OK && locked) {
        obj_lock();
        o->u.mtx.owner = current_thread_id();
        o->u.mtx.count = 1;
        obj_unlock();
    }
    return r;
}

uint32_t albw_os_release_mutex(uint32_t h) {                   /* svc 0x14 ReleaseMutex */
    obj_lock();
    OsObject *o = handle_get_locked(h);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_MUTEX) {
        r = RES_NOT_SUPPORTED;
        if (o->u.mtx.owner == current_thread_id() && o->u.mtx.count > 0) {
            if (--o->u.mtx.count == 0) { o->u.mtx.owner = 0; pthread_cond_broadcast(&g_obj_cv); }
            r = RES_OK;
        }
    }
    obj_unlock();
    return r;
}

uint32_t albw_os_create_event(uint32_t *out, int32_t reset_type) { /* svc 0x17 CreateEvent */
    OsObject *o = NULL;
    uint32_t r = new_object(K_EVENT, out, &o);
    if (r == RES_OK) { obj_lock(); o->u.ev.reset = reset_type; obj_unlock(); }
    return r;
}

uint32_t albw_os_signal_event(uint32_t h) {                    /* svc 0x18 SignalEvent */
    obj_lock();
    OsObject *o = handle_get_locked(h);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_EVENT) {
        o->u.ev.signaled = true;
        pthread_cond_broadcast(&g_obj_cv);
        r = RES_OK;
        /* PULSE: wakes the current waiters only. Waiters re-check under the lock, so give
         * them the chance by leaving it signaled; the first acquirer clears it (as ONESHOT). */
    }
    obj_unlock();
    return r;
}

uint32_t albw_os_clear_event(uint32_t h) {                     /* svc 0x19 ClearEvent */
    obj_lock();
    OsObject *o = handle_get_locked(h);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_EVENT) { o->u.ev.signaled = false; r = RES_OK; }
    obj_unlock();
    return r;
}

uint32_t albw_os_create_semaphore(uint32_t *out, int32_t initial, int32_t max) { /* svc 0x15 */
    if (initial < 0 || max < initial) return RES_OUT_OF_RANGE;
    OsObject *o = NULL;
    uint32_t r = new_object(K_SEMAPHORE, out, &o);
    if (r == RES_OK) { obj_lock(); o->u.sem.count = initial; o->u.sem.max = max; obj_unlock(); }
    return r;
}

uint32_t albw_os_release_semaphore(int32_t *out_count, uint32_t h, int32_t n) { /* svc 0x16 */
    obj_lock();
    OsObject *o = handle_get_locked(h);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_SEMAPHORE) {
        r = RES_OUT_OF_RANGE;
        if (n >= 0 && o->u.sem.count <= o->u.sem.max - n) {
            if (out_count) *out_count = o->u.sem.count;
            o->u.sem.count += n;
            pthread_cond_broadcast(&g_obj_cv);
            r = RES_OK;
        }
    }
    obj_unlock();
    return r;
}

uint32_t albw_os_arbitrate(volatile int32_t *addr, int32_t type, int32_t value, int64_t ns) {
    return arbitrate((_Atomic int32_t *)addr, type, value, ns); /* svc 0x22 ArbitrateAddress */
}

uint32_t albw_os_current_thread_id(void) { return current_thread_id(); }

/* ================================================================== threads */
/* A started thread's end (return from the entry or ExitThread -> pthread_exit) runs this key
 * destructor: mark the thread finished, wake joiners, drop the thread's own reference. */
static pthread_key_t g_thread_key;
static pthread_once_t g_thread_key_once = PTHREAD_ONCE_INIT;

static void thread_finished(void *p) {
    OsObject *o = p;
    sched_release();     /* the next ready game thread runs */
    t_sched = NULL;
    obj_lock();
    o->u.th.done = true;
    pthread_cond_broadcast(&g_obj_cv);
    obj_release_locked(o); /* the running thread's reference */
    obj_unlock();
}

static void thread_key_init(void) {
    if (pthread_key_create(&g_thread_key, thread_finished)) runtime_fatal("os: pthread_key_create");
}

static void *thread_main(void *p) {
    OsObject *o = p;
    t_self = o;
    t_id = o->u.th.id;
    pthread_setspecific(g_thread_key, o);
    if (o->u.th.sched) {   /* queued by the creator: wait for the first turn */
        t_sched = o->u.th.sched;
        pthread_mutex_lock(&g_sched_m);
        wait_turn_locked(t_sched);
        pthread_mutex_unlock(&g_sched_m);
    }
    o->u.th.entry((void *)o->u.th.arg);
    return NULL;
}

/* USA 00103C80  nn::svc::CreateThread(Handle *out, ThreadFunc entry, uintptr_t arg,
 *               uintptr_t stackTop, s32 priority, s32 core) -> Result
 * Evidence: wrapper `push {r0,r4}; ldr r0,[sp,#8]; ldr r4,[sp,#0xc]; svc 8; str r1,[out]`:
 * r0=out, r1=entry, r2=arg, r3=stack top, stack: priority, core. Only caller: 00104248.
 * Native: a detached pthread running entry(arg) on its own host stack (the game stack is not
 * used as a machine stack). Priority/core are recorded, not applied. Confidence: high. */
uint32_t func_00103C80(uint32_t *out, void (*entry)(void *), uintptr_t arg, uintptr_t stack_top,
                       int32_t priority, int32_t core) {
    (void)stack_top;
    if (priority < 0 || priority > 0x3F) return RES_OUT_OF_RANGE;
    OsObject *o = calloc(1, sizeof *o);
    if (!o) return RES_OUT_OF_HANDLES;
    o->kind = K_THREAD;
    o->refs = 1; /* the running thread */
    o->u.th.prio = priority;
    o->u.th.core = core;
    o->u.th.id = atomic_fetch_add(&g_next_thread_id, 1);
    o->u.th.entry = entry;
    o->u.th.arg = arg;
    if (getenv("ALBW_SCHED_TRACE"))
        fprintf(stderr, "os: thread %u created: priority 0x%x core %d entry %p\n",
                o->u.th.id, (unsigned)priority, (int)core, (void *)(uintptr_t)entry);
    if (sched_on()) {      /* a game thread: ready at once, in priority order */
        o->u.th.sched = sched_new(priority, core, o->u.th.id);
        pthread_mutex_lock(&g_sched_m);
        ready_insert_locked(o->u.th.sched, false);
        dispatch_locked(o->u.th.sched->core);
        pthread_mutex_unlock(&g_sched_m);
    }
    obj_lock();
    uint32_t h = 0, r = handle_alloc_locked(o, &h);
    obj_unlock();
    if (r != RES_OK) { free(o); return r; }
    pthread_once(&g_thread_key_once, thread_key_init);
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    pthread_attr_setstacksize(&attr, 1u << 20);
    pthread_t pt;
#if defined(__x86_64__)
    /* low-4GB mode: the stack (game code keeps stack addresses in 32-bit words) and glibc's
     * static TLS of the thread live in low memory (native/runtime/lowmem.c) */
    int err = albw_thread_create_low(&pt, &attr, thread_main, o, 1u << 20);
#else
    int err = pthread_create(&pt, &attr, thread_main, o);
#endif
    pthread_attr_destroy(&attr);
    if (err) {
        if (o->u.th.sched) {        /* never ran: take it off the ready list / the core */
            SchedRec *sr = o->u.th.sched;
            pthread_mutex_lock(&g_sched_m);
            for (SchedRec **pp = &g_core[sr->core].ready; *pp; pp = &(*pp)->next)
                if (*pp == sr) { *pp = sr->next; break; }
            if (g_core[sr->core].running == sr) { g_core[sr->core].running = NULL; dispatch_locked(sr->core); }
            pthread_mutex_unlock(&g_sched_m);
        }
        obj_lock();
        obj_release_locked(o);      /* thread reference */
        obj_unlock();
        albw_os_close_handle(h);    /* handle reference (frees o) */
        return RES_OUT_OF_HANDLES;
    }
    *out = h;
    sched_preempt_check();          /* a higher-priority new thread runs first */
    return RES_OK;
}

/* USA 0010998C  nn::svc::ExitThread() (svc 9), reached at the end of the thread trampoline
 * 0010994C. Native: pthread_exit; the thread key destructor (thread_finished) marks the thread
 * finished and wakes joiners. For a thread not started by CreateThread (main thread) its
 * lazily created object, if any, is marked finished here. Confidence: high. */
_Noreturn void func_0010998C(void) {
    pthread_once(&g_thread_key_once, thread_key_init);
    if (!pthread_getspecific(g_thread_key)) {
        sched_release();
        t_sched = NULL;
        obj_lock();
        if (t_self) { t_self->u.th.done = true; pthread_cond_broadcast(&g_obj_cv); }
        obj_unlock();
    }
    pthread_exit(NULL);
}

/* USA 00106394  nn::svc::SleepThread(s64 ns) (svc 0x0A). 0 (or less) = yield.
 * Evidence: `svc #0xa; bx lr`, ns in r0:r1; matched 00106388 (Yield) calls it with 0, 00104338
 * with the TimeSpan. Confidence: high. */
void func_00106394(int64_t ns) { sleep_ns(ns); }

/* USA 00104338  nn::os::Thread::Sleep(TimeSpan ns): SleepThread(ns) when ns >= 0x3477, else a
 * calibrated busy loop (00106348). Native: always the host sleep (short ones become a yield or
 * a short nanosleep). Evidence: matched src/work7/gpt23/func_00104338.cpp. Confidence: high. */
void func_00104338(int64_t ns) { sleep_ns(ns); }

/* USA 00106348  calibrated spin `subs r0,r0,#2; bgt` used by Sleep for < 13.4 us. No timing
 * meaning on the host; kept as a no-op so the symbol resolves. Confidence: high. */
void func_00106348(int32_t n) { (void)n; }

/* USA 00106314  per-thread VFP init `vmsr fpscr, 0x03000000` (FZ flush-to-zero + DN default
 * NaN, round to nearest) run by the thread trampoline 0010994C on every game thread.
 * Native: the SSE equivalent of FZ, MXCSR FTZ (bit 15: denormal results -> 0) + DAZ (bit 6:
 * denormal inputs read as 0); rounding stays round-to-nearest. DN (default NaN 0x7FC00000) has
 * no x86 equivalent (x86 propagates the NaN operand, its own default is 0xFFC00000).
 * Requires the SSE float model (tools/link.sh / build_decomp FPFLAGS): x87 ignores MXCSR.
 * See native/gameplay/AUDIT.md "Float mode". Confidence: high. */
void func_00106314(void) { albw_fp_set_3ds_mode(); }

/* USA 0010F228  nn::svc::GetThreadPriority(s32 *out, Handle thread) (svc 0x0B).
 * Evidence: `str r0,[sp,#-4]!; svc #0xb; ldr r2,[sp]; str r1,[r2]`. Caller 0010EFDC passes
 * the main thread's handle. Returns the recorded priority. Confidence: high. */
uint32_t func_0010F228(int32_t *out, uint32_t thread) {
    obj_lock();
    OsObject *o = handle_get_locked(thread);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_THREAD) { *out = o->u.th.prio; r = RES_OK; }
    obj_unlock();
    return r;
}

/* USA 0010EAE8  nn::svc::GetThreadId(u32 *out, Handle thread) (svc 0x37).
 * Evidence: same out-pointer wrapper shape; callers 0010E1C8 (with 0xFFFF8000) and 0049BD4C
 * (with the new thread's handle, stored into sead::Thread +0x74). Confidence: high. */
uint32_t func_0010EAE8(uint32_t *out, uint32_t thread) {
    obj_lock();
    OsObject *o = handle_get_locked(thread);
    uint32_t r = RES_INVALID_HANDLE;
    if (o && o->kind == K_THREAD) { *out = o->u.th.id; r = RES_OK; }
    obj_unlock();
    return r;
}

/* USA 00115EF8  nn::svc::CreateMutex(Handle *out, bool initiallyLocked) (svc 0x13).
 * Caller 0049BAA8 (mutex object ctor, stores the handle at +0x10). Confidence: high. */
uint32_t func_00115EF8(uint32_t *out, uint32_t initially_locked) {
    return albw_os_create_mutex(out, initially_locked != 0);
}

/* USA 00103C68  nn::svc::CreateEvent(Handle *out, ResetType type) (svc 0x17).
 * Callers 00102C40 / 003DE544 / 003E376C (apt, dsp, gsp event objects). Confidence: high. */
uint32_t func_00103C68(uint32_t *out, int32_t reset_type) {
    return albw_os_create_event(out, reset_type);
}

/* USA 00101DE8  nn::svc::CreateAddressArbiter(Handle *out) (svc 0x21). The address waits do
 * not need an object natively (wait queues are global, keyed by address); a handle is still
 * created so the game's arbiter global (0x00716130) holds a valid value. Confidence: high. */
uint32_t func_00101DE8(uint32_t *out) {
    return new_object(K_ARBITER, out, NULL);
}

/* USA 0010BE9C  nn::svc::ArbitrateAddress(Handle arbiter, uintptr_t addr, s32 type, s32 value,
 * s64 ns) (svc 0x22; `push {r4,r5}; ldr r4,[sp,#8]; ldr r5,[sp,#0xc]` = ns on the stack).
 * NOTE: the Ghidra-derived callers declare it void(void) and pass no arguments; all of them
 * (the light primitives below) are replaced here, so this definition is for any future native
 * caller. Confidence: high. */
uint32_t func_0010BE9C(uint32_t arbiter, int32_t *addr, int32_t type, int32_t value, int64_t ns) {
    (void)arbiter;
    return arbitrate((_Atomic int32_t *)addr, type, value, ns);
}

/* USA 00115ED4  nn::svc::CloseHandle(Handle) (svc 0x23). Confidence: high. */
uint32_t func_00115ED4(uint32_t h) { return albw_os_close_handle(h); }

/* USA 0010639C  nn::svc::WaitSynchronizationN(s32 *outIndex, const Handle *handles, s32 count,
 * bool waitAll, s64 ns) (svc 0x25; ns is the 8-byte stack argument). The Ghidra caller 00104F90
 * (apt) passes only the low word of ns; see os.md. Confidence: high. */
uint32_t func_0010639C(int32_t *out_index, const uint32_t *handles, int32_t count, int32_t wait_all,
                       int64_t ns) {
    return wait_objects(out_index, handles, count, wait_all != 0, ns);
}

/* USA 00115F10  nn::svc::DuplicateHandle(Handle *out, Handle src) (svc 0x27). Caller 005A39C8
 * duplicates 0xFFFF8000 into the main nn::os::Thread object. Confidence: high. */
uint32_t func_00115F10(uint32_t *out, uint32_t h) { return albw_os_duplicate_handle(out, h); }

/* USA 0010D0EC  nn::svc::Break(reason) (svc 0x3C), reached from the panic path 0010C1B8 after
 * the registered fatal handler ran. Native: fatal error with backtrace. Confidence: high. */
_Noreturn void func_0010D0EC(uint32_t reason) {
    runtime_fatal("svcBreak(%u): SDK panic (caller %p)", reason, __builtin_return_address(0));
}

/* USA 0010A98C  nn::Result check: called only when a Result is a failure; in a retail unit it
 * always ends in the panic 0010C1B8 (the decompiled version reads the kernel config page at
 * 0x1FF80000, which does not exist natively). Native: report the Result and abort.
 * Confidence: high. */
_Noreturn void func_0010A98C(uint32_t result) {
    runtime_fatal("nn::Result failure 0x%08X (level %d, module %u, description %u), caller %p",
                  result, (int32_t)result >> 27, (result >> 10) & 0xFF, result & 0x3FF,
                  __builtin_return_address(0));
}

/* ------------------------------------------------------------------ nn::os::Thread */
/* Thread object in game memory: { u32 handle; u8 joined (+4); u8 (+5) } (stores in 00104248,
 * reads in 0010C180 / 0040EA34 / 0049C008). */
#define NNTHREAD_HANDLE(t) (*(uint32_t *)((uint8_t *)(t) + 0))
#define NNTHREAD_JOINED(t) (*(uint8_t *)((uint8_t *)(t) + 4))

/* parameter type descriptor built by the caller (0049BD4C: {4, 00676254, 00676270, 00676264}) */
typedef struct {
    uint32_t size;   /* size of the parameter copy */
    gptr_t copy;     /* void (*)(const void *src, void *dst): placement-copy the parameter */
    gptr_t destroy;  /* void (*)(void *param): destroy the copy after the run */
    gptr_t invoke;   /* void (*)(void *entry, void *param): call entry with the copy */
} NnThreadTypeInfo;  /* game memory: 4-byte words (gptr.h) */
typedef void (*NnThreadCopyFn)(const void *src, void *dst);

/* start block read by the trampoline 0010994C (matched: {done, run, first, second, optional}) */
typedef struct {
    gptr_t done;               /* void (*)(void *param) */
    gptr_t invoke;             /* void (*)(void *entry, void *param) */
    void *ALBW_GP entry;
    void *ALBW_GP param;
    void *ALBW_GP auto_stack;  /* freed by 00106320 at thread end when the SDK allocated the stack */
} NnThreadStart;  /* read by the decompiled trampoline 0010994C: 4-byte words (gptr.h) */

extern void func_0010994C(void *start); /* SDK thread trampoline (decompiled) */

static void result_check(uint32_t r) {
    if ((int32_t)r < 0) func_0010A98C(r);
}

/* USA 00104248  nn::os::Thread::TryInitializeAndStartImpl(Thread *this, const TypeInfo *ti,
 *               void *entry, const void *param, uintptr_t stackTop, s32 priority, s32 core,
 *               bool autoStack) -> Result. No decompiled source exists (Ghidra merged it into
 * the noreturn 00104244); written from the EU disassembly 0x00104248-0x00104328:
 *   copy = (stackTop - ti->size) & ~7; ti->copy(param, copy);
 *   start = (copy - sizeof start) & ~7: {ti->destroy, ti->invoke, entry, copy, auto ? top : 0}
 *   kernel priority: p <= 0x20 -> p + 0x20; p - 0x5109D500 <= 0x27 -> that + 0x18;
 *                    p - 0x6C8DA500 <= 0x40 -> that; else -1 (invalid)
 *   CreateThread(&h, 0010994C, start, start, kprio, core); this->handle = h; flags = 0.
 * The parameter copy and start block stay on the game-provided stack exactly as before (it is
 * plain memory natively); the code runs on a host pthread stack. Confidence: high. */
uint32_t func_00104248(void *thread, const NnThreadTypeInfo *ti, void *entry, const void *param,
                       uintptr_t stack_top, int32_t priority, int32_t core, int32_t auto_stack) {
    uintptr_t copy = (stack_top - ti->size) & ~(uintptr_t)7;
    GFN(NnThreadCopyFn, ti->copy)(param, (void *)copy);
    NnThreadStart *s = (NnThreadStart *)((copy - sizeof(NnThreadStart)) & ~(uintptr_t)7);
    s->done = ti->destroy;
    s->invoke = ti->invoke;
    s->entry = entry;
    s->param = (void *)copy;
    s->auto_stack = auto_stack ? (void *)stack_top : NULL;
    uint32_t p = (uint32_t)priority, kprio;
    if (p <= 0x20) kprio = p + 0x20;
    else if (p - 0x5109D500u <= 0x27) kprio = p - 0x5109D500u + 0x18;
    else if (p - 0x6C8DA500u <= 0x40) kprio = p - 0x6C8DA500u;
    else kprio = 0xFFFFFFFFu;
    uint32_t h = 0;
    uint32_t r = func_00103C80(&h, func_0010994C, (uintptr_t)s, (uintptr_t)s,
                               (int32_t)kprio, core);
    if ((int32_t)r < 0) return r;
    NNTHREAD_HANDLE(thread) = h;
    NNTHREAD_JOINED(thread) = 0;
    *((uint8_t *)thread + 5) = 0;
    return RES_OK;
}

/* USA 0010C180  nn::os::Thread::Join(Thread *this): if !joined { WaitSynchronization1(handle,
 * forever); joined = 1 } (inline svc 0x24 in the original). Confidence: high. */
void func_0010C180(void *thread) {
    if (NNTHREAD_JOINED(thread)) return;
    result_check(albw_os_wait1(NNTHREAD_HANDLE(thread), -1));
    NNTHREAD_JOINED(thread) = 1;
}

/* Thread finalize, inlined in the game code below: Join(), then CloseHandle + clear */
static void nnthread_finalize(void *thread) {
    func_0010C180(thread);
    if (NNTHREAD_HANDLE(thread)) {
        albw_os_close_handle(NNTHREAD_HANDLE(thread));
        NNTHREAD_HANDLE(thread) = 0;
    }
}

/* ------------------------------------------------------------------ lock word (CriticalSection)
 * s32 word: > 0 free (1 when nobody waits), -1 locked, -(1+n) locked with n waiters. */
static void lightlock_lock(int32_t *word) {
    _Atomic int32_t *w = (_Atomic int32_t *)word;
    for (;;) {
        int32_t v = atomic_load(w);
        if (v > 0) {
            if (atomic_compare_exchange_weak(w, &v, -v)) return;
        } else if (v < 0) {
            if (!atomic_compare_exchange_weak(w, &v, v - 1)) continue;
            /* registered as a waiter: sleep until released, then take it as 1 - v */
            for (;;) {
                arb_wait(w, 0, false, -1);
                int32_t u = atomic_load(w);
                while (u > 0)
                    if (atomic_compare_exchange_weak(w, &u, 1 - u)) return;
            }
        } else {
            sched_yield_turn(); /* 0: uninitialised word; the SDK spins here too */
        }
    }
}

static bool lightlock_trylock(int32_t *word) {
    _Atomic int32_t *w = (_Atomic int32_t *)word;
    int32_t v = atomic_load(w);
    while (v > 0)
        if (atomic_compare_exchange_weak(w, &v, -v)) return true;
    return false;
}

static void lightlock_unlock(int32_t *word) {
    _Atomic int32_t *w = (_Atomic int32_t *)word;
    int32_t v = atomic_load(w);
    while (!atomic_compare_exchange_weak(w, &v, -v)) {}
    if (-v > 1) arb_signal(w, 1); /* somebody waits: wake one */
}

/* USA 0010BFD4  CriticalSection lock word: acquire (fast path, falls through into 0010BFFC).
 * Evidence: EU disassembly 0010BFD4-0010C0B0 (ldrex/strex + ArbitrateAddress(arb, word,
 * WAIT_IF_LESS_THAN, 0)). Callers: 0010C0C0, 001080D4, 0010A8D4. Confidence: high. */
void func_0010BFD4(int32_t *word) { lightlock_lock(word); }

/* USA 0010BFFC  same, slow-path entry (waiter registration + ArbitrateAddress loop). */
void func_0010BFFC(int32_t *word) { lightlock_lock(word); }

/* USA 0010A938  CriticalSection lock word: release (v = -v; if v > 1 signal one waiter).
 * Evidence: EU disassembly 0010A938-0010A984. Confidence: high. */
void func_0010A938(int32_t *word) { lightlock_unlock(word); }

/* USA 003CD764 (EU 003CD740)  lock word try-acquire: v > 0 -> v = -v, return 1; else 0.
 * Confidence: high. */
int32_t func_003CD764(int32_t *word) { return lightlock_trylock(word); }

/* ------------------------------------------------------------------ recursive CriticalSection
 * { s32 word; u32 owner (+4); s32 count (+8) }. The SDK's owner value is the TLS pointer; here
 * it is the native thread id (see header). */
typedef struct { int32_t word; _Atomic uint32_t owner; int32_t count; } NnCriticalSection;

static void cs_enter(NnCriticalSection *cs) {
    uint32_t me = current_thread_id();
    if (atomic_load_explicit(&cs->owner, memory_order_relaxed) != me) {
        lightlock_lock(&cs->word);
        atomic_store_explicit(&cs->owner, me, memory_order_relaxed);
    }
    cs->count++;
}

static void cs_leave(NnCriticalSection *cs) {
    if (--cs->count == 0) {
        atomic_store_explicit(&cs->owner, 0, memory_order_relaxed);
        lightlock_unlock(&cs->word);
    }
}

static int32_t cs_try_enter(NnCriticalSection *cs) {
    uint32_t me = current_thread_id();
    if (atomic_load_explicit(&cs->owner, memory_order_relaxed) != me) {
        if (!lightlock_trylock(&cs->word)) return 0;
        atomic_store_explicit(&cs->owner, me, memory_order_relaxed);
    }
    cs->count++;
    return 1;
}

/* USA 0010C0C0  nn::os::CriticalSection::Enter(cs): recursive lock, owner = current thread.
 * Evidence: matched src/work7/gpt23/func_0010C0C0.cpp + EU disassembly. Confidence: high. */
void func_0010C0C0(void *cs) { cs_enter(cs); }

/* USA 0010C0B8  same for a CriticalSection embedded at +0x10 (`add r0,r0,#0x10` then falls into
 * 0010C0C0). Matched src/work5/templater/gen/func_0010C0B8.cpp. Confidence: high. */
void func_0010C0B8(void *obj) { cs_enter((NnCriticalSection *)((uint8_t *)obj + 0x10)); }

/* USA 0010C160  nn::os::CriticalSection::Leave(cs): if --count == 0 { owner = 0; release }.
 * Matched src/work7/gpt15/variants/0010C160/v0.cpp. Confidence: high. */
void func_0010C160(void *cs) { cs_leave(cs); }

/* USA 003CD8E8 (EU 003CD8C4)  nn::os::CriticalSection::TryEnter(cs) -> bool.
 * Matched src/work7/ds4/f_3CD8E8.cpp. Confidence: high. */
int32_t func_003CD8E8(void *cs) { return cs_try_enter(cs); }

/* USA 003CD8E0 (EU 003CD8BC)  TryEnter for a CriticalSection at +0x10. Confidence: high. */
int32_t func_003CD8E0(void *obj) { return cs_try_enter((NnCriticalSection *)((uint8_t *)obj + 0x10)); }

/* ------------------------------------------------------------------ nn::os::LightEvent
 * { s32 state; s32 lock word (+4) }. state: -1 auto-reset clear, 0 auto-reset signaled,
 * -2 manual-reset clear, 1 manual-reset signaled. */
#define LEV_STATE(e) ((_Atomic int32_t *)(e))
#define LEV_LOCK(e)  ((int32_t *)((uint8_t *)(e) + 4))

/* USA 0010818C  lock word init: word = 1 (atomic store). Confidence: high. */
void func_0010818C(int32_t *word) { atomic_store((_Atomic int32_t *)word, 1); }

/* USA 00104164  LightEvent::Initialize(ev, bool manualReset): lock = 1; state = manual ? -2 : -1.
 * Evidence: EU disassembly 00104164-00104194. Confidence: high. */
void func_00104164(void *ev, int32_t manual_reset) {
    atomic_store((_Atomic int32_t *)LEV_LOCK(ev), 1);
    atomic_store(LEV_STATE(ev), manual_reset ? -2 : -1);
}

/* USA 001080D4  LightEvent::Signal(ev). Evidence: EU disassembly 001080D4-00108184:
 *   state -1 -> state = 0, wake one;  state -2 -> under the lock: state = 1, wake all.
 * Confidence: high. */
void func_001080D4(void *ev) {
    int32_t s = atomic_load(LEV_STATE(ev));
    if (s == -1) {
        atomic_store(LEV_STATE(ev), 0);
        arb_signal(LEV_STATE(ev), 1);
    } else if (s == -2) {
        lightlock_lock(LEV_LOCK(ev));
        atomic_store(LEV_STATE(ev), 1);
        arb_signal(LEV_STATE(ev), -1);
        lightlock_unlock(LEV_LOCK(ev));
    }
}

/* USA 001080CC  Signal for a LightEvent at +4 (`add r0,r0,#4` falls into 001080D4). */
void func_001080CC(void *obj) { func_001080D4((uint8_t *)obj + 4); }

/* USA 0010A7BC  LightEvent::Wait(ev). Evidence: EU disassembly 0010A7BC-0010A87C:
 *   1 -> return; 0 -> CAS to -1 and return; -2 -> wait once (manual); -1/other -> wait, retry.
 * Confidence: high. */
void func_0010A7BC(void *ev) {
    _Atomic int32_t *st = LEV_STATE(ev);
    for (;;) {
        int32_t s = atomic_load(st);
        if (s == 1) return;
        if (s == -2) { arb_wait(st, 0, false, -1); return; }
        if (s == 0) {
            int32_t z = 0;
            if (atomic_compare_exchange_strong(st, &z, -1)) return;
        }
        arb_wait(st, 0, false, -1);
    }
}

/* USA 0010A884  LightEvent::TryWait(ev) -> bool: 1 if signaled (auto-reset ones are consumed).
 * Confidence: high. */
int32_t func_0010A884(void *ev) {
    _Atomic int32_t *st = LEV_STATE(ev);
    if (atomic_load(st) == 1) return 1;
    int32_t z = 0;
    return atomic_compare_exchange_strong(st, &z, -1) ? 1 : 0;
}

/* USA 0010A8D4  LightEvent::Clear(ev): 1 -> under the lock state = -2; 0 -> state = -1.
 * Confidence: high. */
void func_0010A8D4(void *ev) {
    _Atomic int32_t *st = LEV_STATE(ev);
    int32_t s = atomic_load(st);
    if (s == 1) {
        lightlock_lock(LEV_LOCK(ev));
        atomic_store(st, -2);
        lightlock_unlock(LEV_LOCK(ev));
    } else if (s == 0) {
        atomic_store(st, -1);
    }
}

/* ------------------------------------------------------------------ nn::os::LightSemaphore
 * { s32 count; s16 waiters (+4); s16 max (+6) } */
/* USA 003CD7B4 (EU 003CD790)  LightSemaphore::Acquire(sem): count > 0 -> count--; else
 * waiters++, wait while count < 1, waiters--, retry. Confidence: high. */
void func_003CD7B4(void *sem) {
    _Atomic int32_t *cnt = (_Atomic int32_t *)sem;
    _Atomic int16_t *waiters = (_Atomic int16_t *)((uint8_t *)sem + 4);
    for (;;) {
        int32_t v = atomic_load(cnt);
        while (v > 0)
            if (atomic_compare_exchange_weak(cnt, &v, v - 1)) return;
        atomic_fetch_add(waiters, 1);
        arb_wait(cnt, 1, false, -1);
        atomic_fetch_sub(waiters, 1);
    }
}

/* USA 003CD868 (EU 003CD844)  LightSemaphore::Release(sem, n) -> previous count:
 * count = min(count + n, max); wake n waiters if count was <= 0 or somebody waits.
 * Confidence: high. */
int32_t func_003CD868(void *sem, int32_t n) {
    _Atomic int32_t *cnt = (_Atomic int32_t *)sem;
    int16_t max = *(volatile int16_t *)((uint8_t *)sem + 6);
    int32_t old = atomic_load(cnt), nv;
    do {
        nv = (max - n < old) ? max : old + n;
    } while (!atomic_compare_exchange_weak(cnt, &old, nv));
    if (old <= 0 || atomic_load((_Atomic int16_t *)((uint8_t *)sem + 4)) > 0) arb_signal(cnt, n);
    return old;
}

/* ================================================================== time */

/* USA 00115F28  nn::svc::GetSystemTick() -> u64 (svc 0x28, r0:r1). Confidence: high. */
uint64_t func_00115F28(void) { return system_tick(); }

/* USA 0010DA24  nn::os::Tick ctor: *this = GetSystemTick(); return this.
 * Matched src/work7/gpt15/func_0010DA24.cpp. Confidence: high. */
void *func_0010DA24(void *tick) {
    uint64_t t = system_tick();
    memcpy(tick, &t, 8);
    return tick;
}

/* USA 005808BC (EU 00580894)  TickSpan since start: *out = GetSystemTick() - *start.
 * Evidence: `svc 0x28; ldrd r2,r3,[r1]; subs/sbc; strd [r0]`. Confidence: high. */
void func_005808BC(int64_t *out, const int64_t *start) {
    int64_t s, d;
    memcpy(&s, start, 8);
    d = (int64_t)system_tick() - s;
    memcpy(out, &d, 8);
}

/* USA 0049AD40 (EU 0049AD18)  store the current tick at this+0x150. Matched
 * src/work7/gpt20/func_0049AD40.cpp. Confidence: high. */
void func_0049AD40(void *self) {
    uint64_t t = system_tick();
    memcpy((uint8_t *)self + 0x150, &t, 8);
}

/* USA 0049BCF4 (EU 0049BCCC)  sleep for a TickSpan: ns = ticks * 0x3BAD34AEE >> 32 (=1e9 /
 * 268111856), then nn::os::Thread::Sleep. Confidence: high. */
void func_0049BCF4(int64_t ticks) {
    int64_t ns = ticks / TICKS_PER_SECOND * 1000000000LL +
                 ticks % TICKS_PER_SECOND * 1000000000LL / TICKS_PER_SECOND;
    sleep_ns(ns);
}

/* ================================================================== game-side code with an inline
 * svc. These are framework (sead) functions whose machine code contains svc 0x23/0x24/0x28; the
 * Ghidra output loses the svc results, so they are rewritten here from the EU disassembly with
 * the same calls, keeping the game's 32-bit object layout (offsets as in the original). */
#define U8(p, o)  (*(uint8_t *)((uint8_t *)(p) + (o)))
#define U32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define S32(p, o) (*(int32_t *)((uint8_t *)(p) + (o)))
#define PTR(p, o) (*(void * ALBW_GP *)((uint8_t *)(p) + (o)))
#define VCALL(obj, off) ((void (*)(void *))((*(void * ALBW_GP * ALBW_GP *)(obj))[(off) / 4]))(obj)

static void store_tick(void *self, int off) {
    uint64_t t = system_tick();
    memcpy((uint8_t *)self + off, &t, 8);
}

extern void func_0010E0E0(void *cs); /* sead CriticalSection lock (on *data_00715160) */
extern void func_0010E15C(void *cs); /* ... unlock */
extern int32_t func_005FF6E4(int32_t display);
extern void func_00601658(int32_t display);
extern void func_00601390(void);
extern void func_005FF418(void *obj);
extern void func_00104914(void);
extern void * ALBW_GP data_00715160[];        /* graphics/display context object pointer */
extern uint32_t data_00715458[];     /* u64 frame period (ticks) */

/* USA 0049AD58 (EU 0049AD30)  framework main loop (noreturn): this+0xA0 = vcount(0x402);
 * this+0xB0 = this+0xB8 = tick; for (;;) this->vtbl[0x64](this). Matched
 * src/work7/gpt20/func_0049AD58.cpp. Confidence: high. */
_Noreturn void func_0049AD58(void *self) {
    S32(self, 0xA0) = func_005FF6E4(0x402);
    store_tick(self, 0xB0);
    store_tick(self, 0xB8);
    for (;;) VCALL(self, 0x64);
}

/* USA 004966D4 (EU 004966AC)  framework main loop variant: as 0049AD58 plus one
 * vtbl[0x6C] call under the display lock before looping. Confidence: high. */
_Noreturn void func_004966D4(void *self) {
    S32(self, 0xA0) = func_005FF6E4(0x402);
    store_tick(self, 0xB0);
    store_tick(self, 0xB8);
    func_0010E0E0(data_00715160[0]);
    VCALL(self, 0x6C);
    func_0010E15C(data_00715160[0]);
    for (;;) VCALL(self, 0x64);
}

/* USA 004960AC (EU 00496084)  framework frame: lock; 00601390; vtbl 68/6C/34/78; unlock;
 * this+0xA8 = tick - this+0xB0; this+0xB0 = tick; vtbl 7C; if this+0x28 == 1: 00104914,
 * this+0x28 = 2. Matched src/work8/lead/matched_1020/004960AC.c. Confidence: high. */
void func_004960AC(void *self) {
    func_0010E0E0(data_00715160[0]);
    func_00601390();
    VCALL(self, 0x68);
    VCALL(self, 0x6C);
    VCALL(self, 0x34);
    VCALL(self, 0x78);
    func_0010E15C(data_00715160[0]);
    int64_t span;
    func_005808BC(&span, (const int64_t *)((uint8_t *)self + 0xB0));
    memcpy((uint8_t *)self + 0xA8, &span, 8);
    store_tick(self, 0xB0);
    VCALL(self, 0x7C);
    if (U8(self, 0x28) == 1) {
        func_00104914();
        U8(self, 0x28) = 2;
    }
}

/* USA 0049A944 (EU 0049A91C)  framework frame, double-buffered variant (EU disassembly
 * 0049A91C-0049AA5C). Confidence: high. */
void func_0049A944(void *self) {
    void *ctx = data_00715160[0];
    func_0010E0E0(ctx);
    func_005FF418(PTR(self, 0x128 + 4 * S32(self, 0x148)));
    VCALL(self, 0x6C);
    VCALL(self, 0x68);
    VCALL(self, 0x78);
    func_0010E15C(data_00715160[0]);
    if (U8(self, 0x158)) U8(self, 0x158) = 0;
    int64_t span;
    func_005808BC(&span, (const int64_t *)((uint8_t *)self + 0xB0));
    memcpy((uint8_t *)self + 0xA8, &span, 8);
    store_tick(self, 0xB0);
    VCALL(self, 0x7C);
    func_0010E0E0(data_00715160[0]);
    if (!U8(self, 0x158)) U8(self, 0x158) = 1;
    func_005FF418(PTR(self, 0x128 + 4 * S32(self, 0x148)));
    func_00601390();
    S32(self, 0x148) = 1 - S32(self, 0x148);
    func_005FF418(PTR(self, 0x128 + 4 * S32(self, 0x148)));
    S32(self, 0x124) = (S32(self, 0x124) + 1) % 3;
    func_0010E15C(data_00715160[0]);
    if (U8(self, 0x28) == 1 && S32(self, 0x14C) == 2) {
        func_00104914();
        U8(self, 0x28) = 2;
    }
    if (S32(self, 0x14C) <= 2) S32(self, 0x14C) += 1;
}

/* vblank count elapsed since this+0xA0, with the 0x7FFFFFFE wrap of the game's counter */
static uint32_t vcount_elapsed(void *self, int32_t now) {
    int32_t prev = S32(self, 0xA0);
    return prev > now ? (uint32_t)(0x7FFFFFFE - prev + now) : (uint32_t)(now - prev);
}

static int64_t frame_sleep_ticks(void) {
    int64_t period;
    memcpy(&period, data_00715458, 8);
    return period * 10 / 1000; /* 0011624C = signed 64-bit divide */
}

/* wait until this+0x70 vblanks passed since this+0xA0 (shared by 00496238 / 0049ABAC) */
static void wait_frame_vblanks(void *self, int64_t nap) {
    for (;;) {
        int32_t now = func_005FF6E4(0x402);
        uint32_t el = vcount_elapsed(self, now);
        uint32_t want = U32(self, 0x70);
        if (want <= el) {
            func_0010E0E0(data_00715160[0]);
            func_00601658(0x402);
            func_0010E15C(data_00715160[0]);
            S32(self, 0xA0) = now;
            return;
        }
        if (want == el + 1) {
            func_0010E0E0(data_00715160[0]);
            func_00601658(0x402);
            func_0010E15C(data_00715160[0]);
            VCALL(data_00715160[0], 0x4C);
        } else {
            func_0049BCF4(nap);
        }
    }
}

/* USA 00496238 (EU 00496210)  frame pacing: ctx->vtbl[0x4C](ctx); wait for this+0x70 vblanks;
 * this+0xB8 = tick. Confidence: high. */
void func_00496238(void *self) {
    VCALL(data_00715160[0], 0x4C);
    wait_frame_vblanks(self, frame_sleep_ticks());
    store_tick(self, 0xB8);
}

/* USA 0049ABAC (EU 0049AB84)  frame pacing, with the "no sleep" mode used while
 * this+0x14C < 1 (first frames). Confidence: high. */
void func_0049ABAC(void *self) {
    int64_t nap = frame_sleep_ticks();
    if (S32(self, 0x14C) > 0) {
        wait_frame_vblanks(self, nap);
    } else {
        uint32_t el = vcount_elapsed(self, func_005FF6E4(0x402));
        while (U32(self, 0x70) > el) {
            VCALL(data_00715160[0], 0x4C);
            el++;
        }
        S32(self, 0xA0) = func_005FF6E4(0x402);
    }
    store_tick(self, 0xB8);
}

/* USA 0025E25C (EU 0025E284)  scene init: this+0x140 = tick; this+0x148 = 0; build a
 * sead::SafeString {vtbl 006F5988, *data_00712FA8} and pass it to 00297138(*data_00711F50, &s);
 * then 0029E230(*data_007143B8). Confidence: high. */
extern uint32_t data_006F5988[];
extern void * ALBW_GP data_00712FA8[];
extern void * ALBW_GP data_00711F50[];
extern void * ALBW_GP data_007143B8[];
extern void func_00297138(void *obj, void *safe_string);
extern void func_0029E230(void *obj);
void func_0025E25C(void *self) {
    store_tick(self, 0x140);
    U32(self, 0x148) = 0;
    struct { const void *ALBW_GP vtbl; const void *ALBW_GP str; } s = { ALBW_LAUNDER(data_006F5988), data_00712FA8[0] };
    func_00297138(data_00711F50[0], &s);
    func_0029E230(data_007143B8[0]);
}

/* ------------------------------------------------------------------ game-side thread code */

extern void *func_0040F2E4(void);
extern void func_006765F8(void *obj);

/* USA 0040EA34 (EU 0040EA14)  worker thread stop: if running (+0x15): +0x14 = 1 (quit request);
 * wake it (006765F8(0040F2E4())); join (inline WaitSynchronization1); +4 = 1; finalize
 * (0010C180 + CloseHandle); +0x10 = -1; +0x15 = 0. Confidence: high. */
void func_0040EA34(void *w) {
    if (!U8(w, 0x15)) return;
    U8(w, 0x14) = 1;
    func_006765F8(func_0040F2E4());
    result_check(albw_os_wait1(U32(w, 0), -1));
    U8(w, 4) = 1;
    nnthread_finalize(w);
    S32(w, 0x10) = -1;
    U8(w, 0x15) = 0;
}

/* USA 0040EAA4 (EU 0040EA84)  worker dtor: stop if running, finalize the thread, return this.
 * Matched src/work7/ds5/func_0040EAA4.cpp (uses a __svc(0x23) declaration). Confidence: high. */
void *func_0040EAA4(void *w) {
    if (U8(w, 0x15)) func_0040EA34(w);
    nnthread_finalize(w);
    return w;
}

/* USA 0049BE50 (EU 0049BE28)  sead::Thread::waitDone: if state (+0x78) is not 0/4, join the
 * nn::os::Thread at +0x7C (inline WaitSynchronization1, joined = 1) and set state 4.
 * Returns the state. Confidence: high. */
int32_t func_0049BE50(void *self) {
    int32_t st = S32(self, 0x78);
    if (st != 0 && st != 4) {
        void *t = PTR(self, 0x7C);
        result_check(albw_os_wait1(NNTHREAD_HANDLE(t), -1));
        NNTHREAD_JOINED(t) = 1;
        S32(self, 0x78) = 4;
        st = 4;
    }
    return st;
}

extern void *func_004A1520(void *self); /* IDisposer dtor (EU 004A14F8) */

/* USA 0049BAF8 (EU 0049BAD0)  kernel-mutex holder dtor: vtbl = 006F74F0; CloseHandle(+0x10);
 * then the IDisposer base dtor. Matched src/work7/gpt20/func_0049BAF8.cpp. Confidence: high. */
extern uint32_t data_006F74F0[];
void *func_0049BAF8(void *self) {
    PTR(self, 0) = data_006F74F0;
    if (U32(self, 0x10)) {
        albw_os_close_handle(U32(self, 0x10));
        U32(self, 0x10) = 0;
    }
    return func_004A1520(self);
}

extern uint32_t data_006F751C[];     /* sead::Thread vtable (secondary at +0x4C) */
extern void * ALBW_GP data_00715430[];        /* sead::ThreadMgr instance */
extern void func_0010F1F8(void *node);
extern void func_0049BC44(void *self);
extern void func_0058FA5C(void *p);  /* operator delete */
extern void func_0058FA08(void *p);  /* operator delete[] */
extern void func_0048C0C0(void *q);
extern void *func_0048C144(void *q);

/* USA 0049C008 (EU 0049BFE0)  sead::Thread::~Thread. EU disassembly 0049BFE0-0049C120:
 * vtables; unless it is the manager's main thread: unlink from the manager list, quit/join
 * (state 1 -> 0049BC44; 2/3 -> inline join), finalize + delete the nn::os::Thread (+0x7C),
 * delete[] the stack (+0x80), destroy the message queue (+0x1C); base dtor. Confidence: high. */
void *func_0049C008(void *self) {
    PTR(self, 0) = data_006F751C;
    PTR(self, 0x18) = (uint8_t *)data_006F751C + 0x4C;
    void *mgr = data_00715430[0];
    if (mgr) {
        if (PTR(mgr, 0x20) != self) {
            if (U32(self, 0x64)) {
                U32(self, 0x64) = 0;
                func_0010F1F8((uint8_t *)self + 0x58);
                S32(mgr, 0x1C) -= 1;
            }
            int32_t st = S32(self, 0x78);
            if (st == 1) {
                func_0049BC44(self);
            } else if (st == 2 || st == 3) {
                void *t = PTR(self, 0x7C);
                result_check(albw_os_wait1(NNTHREAD_HANDLE(t), -1));
                NNTHREAD_JOINED(t) = 1;
                S32(self, 0x78) = 4;
            }
            nnthread_finalize(PTR(self, 0x7C));
            void *t = PTR(self, 0x7C);
            if (t) {
                nnthread_finalize(t);
                func_0058FA5C(t);
            }
            func_0058FA08(PTR(self, 0x80));
        }
        func_0048C0C0((uint8_t *)self + 0x1C);
    }
    return func_004A1520((uint8_t *)func_0048C144((uint8_t *)self + 0x1C) - 0x1C);
}

/* USA 0049C004 (EU 0049BFDC)  alias entry of the same destructor (a `mov r0,r0` before it). */
void *func_0049C004(void *self) { return func_0049C008(self); }
