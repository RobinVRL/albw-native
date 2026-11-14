/* HLE of the 3DS kernel (svc) for the recompiled game.
 * Guest threads are host threads; guest code runs under one big lock, released
 * while a thread sleeps or waits. Sync objects are real (events, mutexes,
 * semaphores, timers, threads); services are in ipc.c. */
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "runtime.h"

pthread_mutex_t g_big = PTHREAD_MUTEX_INITIALIZER;
int g_trace_svc;
volatile int g_quit;
static __thread CPU *t_cpu;

void guest_unlock(void) { pthread_mutex_unlock(&g_big); }
void guest_lock(void) { pthread_mutex_lock(&g_big); }

/* ------------------------------------------------------------ objects */
enum { OBJ_FREE, OBJ_EVENT, OBJ_MUTEX, OBJ_SEMA, OBJ_TIMER, OBJ_THREAD, OBJ_SESSION, OBJ_PORT,
       OBJ_MEMBLOCK, OBJ_ARBITER, OBJ_PROCESS, OBJ_OTHER };
typedef struct {
    int type;
    int signaled;       /* event/timer/thread: 1 when set; semaphore: count */
    int oneshot;        /* event/timer reset type: 0 = oneshot, 1 = sticky, 2 = pulse */
    int owner;          /* mutex owner thread id (0 = free) */
    int lockcount;
    int max;            /* semaphore max */
    uint64_t fire_ns, period_ns; /* timer */
    char name[16];      /* service / port name */
    uint32_t addr, size; /* memory block */
} Obj;

#define MAX_OBJ 4096
#define HANDLE_BASE 0x1000u
static Obj objs[MAX_OBJ];

static uint32_t obj_new(int type, const char *name) {
    for (int i = 1; i < MAX_OBJ; i++)
        if (objs[i].type == OBJ_FREE) {
            memset(&objs[i], 0, sizeof objs[i]);
            objs[i].type = type;
            if (name) snprintf(objs[i].name, sizeof objs[i].name, "%s", name);
            return HANDLE_BASE + i;
        }
    LOG("FATAL: out of kernel objects");
    abort();
}

static Obj *obj_get(uint32_t h) {
    if (h == 0xFFFF8000u) return NULL;  /* current thread pseudo-handle */
    if (h == 0xFFFF8001u) return NULL;  /* current process */
    uint32_t i = h - HANDLE_BASE;
    return i < MAX_OBJ && objs[i].type != OBJ_FREE ? &objs[i] : NULL;
}

uint32_t handle_new_session(const char *service) { return obj_new(OBJ_SESSION, service); }

const char *handle_name(uint32_t h) {
    Obj *o = obj_get(h);
    return o ? o->name : "?";
}

static uint64_t now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + ts.tv_nsec;
}

/* ------------------------------------------------------------ waiting */
static int obj_ready(Obj *o, int tid) {
    switch (o->type) {
    case OBJ_EVENT: case OBJ_THREAD: return o->signaled;
    case OBJ_TIMER:
        if (!o->signaled && o->fire_ns && now_ns() >= o->fire_ns) {
            o->signaled = 1;
            o->fire_ns = o->period_ns ? now_ns() + o->period_ns : 0;
        }
        return o->signaled;
    case OBJ_MUTEX: return o->owner == 0 || o->owner == tid;
    case OBJ_SEMA: return o->signaled > 0;
    case OBJ_SESSION: case OBJ_PORT: case OBJ_PROCESS: return 0;
    default: return 1;
    }
}

static void obj_acquire(Obj *o, int tid) {
    switch (o->type) {
    case OBJ_EVENT: case OBJ_TIMER: if (o->oneshot != 1) o->signaled = 0; break;
    case OBJ_MUTEX: o->owner = tid; o->lockcount++; break;
    case OBJ_SEMA: o->signaled--; break;
    default: break;
    }
}

/* wait for one (any=1) or all of handles; returns result code, *idx = index */
static uint32_t wait_objs(CPU *c, const uint32_t *hs, int n, int any, int64_t timeout, int *idx) {
    uint64_t deadline = timeout < 0 ? UINT64_MAX : now_ns() + (uint64_t)timeout;
    for (;;) {
        int ready = 0, first = -1;
        for (int i = 0; i < n; i++) {
            Obj *o = obj_get(hs[i]);
            if (!o || obj_ready(o, c->thread_id)) {
                ready++;
                if (first < 0) first = i;
            }
        }
        if ((any && ready) || (!any && ready == n)) {
            for (int i = 0; i < n; i++) {
                Obj *o = obj_get(hs[i]);
                if (o && (!any || i == first)) obj_acquire(o, c->thread_id);
            }
            *idx = any ? first : 0;
            return 0;
        }
        if (now_ns() >= deadline) {
            *idx = -1;
            return 0x09401BFEu;  /* timeout */
        }
        guest_unlock();
        usleep(200);
        guest_lock();
        if (g_quit) pthread_exit(NULL);
    }
}

/* ------------------------------------------------------------ threads */
typedef struct { CPU cpu; uint32_t entry; uint32_t handle; } ThreadStart;
static int next_tid = 1;

static void *thread_main(void *arg) {
    ThreadStart *ts = arg;
    t_cpu = &ts->cpu;
    guest_lock();
    GuestFn f = lookup_fn(ts->entry);
    if (!f) {
        LOG("FATAL: thread entry %08x not recompiled", ts->entry);
        abort();
    }
    f(&ts->cpu);
    Obj *o = obj_get(ts->handle);
    if (o) o->signaled = 1;
    LOG("thread %d returned", ts->cpu.thread_id);
    guest_unlock();
    return NULL;
}

static uint32_t thread_create(uint32_t entry, uint32_t arg, uint32_t stack_top, int prio) {
    ThreadStart *ts = calloc(1, sizeof *ts);
    ts->entry = entry;
    ts->cpu.thread_id = next_tid++;
    ts->cpu.r[0] = arg;
    ts->cpu.r[13] = stack_top & ~7u;
    ts->cpu.r[14] = 0;  /* return from the entry function ends the thread */
    ts->cpu.tls = TLS_BASE + 0x200u * (uint32_t)ts->cpu.thread_id;
    ts->handle = obj_new(OBJ_THREAD, "thread");
    pthread_t th;
    pthread_attr_t at;
    pthread_attr_init(&at);
    pthread_attr_setstacksize(&at, 64u << 20);  /* deep guest call chains run on the host stack */
    pthread_create(&th, &at, thread_main, ts);
    pthread_detach(th);
    LOG("thread %d created: entry %08x arg %08x stack %08x prio %d", ts->cpu.thread_id, entry, arg, stack_top, prio);
    return ts->handle;
}

int thread_start_main(uint32_t entry) {
    thread_create(entry, 0, STACK_TOP, 0x30);
    return 0;
}

/* ------------------------------------------------------------ vblank */
static uint32_t linear_next = LINEAR_ADDR;

void kernel_vblank(void) {
    /* GSP/vblank events are signalled from ipc.c's gsp state */
    extern void gsp_vblank(void);
    gsp_vblank();
}

void kernel_signal_event(uint32_t h) {
    Obj *o = obj_get(h);
    if (o && o->type == OBJ_EVENT) o->signaled = 1;
}

/* ------------------------------------------------------------ svc */
void svc(CPU *c, uint32_t num) {
    uint32_t *r = c->r;
    if (g_trace_svc) LOG("[t%d] svc %02x r0=%08x r1=%08x r2=%08x r3=%08x", c->thread_id, num, r[0], r[1], r[2], r[3]);
    switch (num) {
    case 0x01: { /* ControlMemory(op, addr0, addr1, size, perm) */
        uint32_t op = r[0], addr = r[1], size = r[3];
        if ((op & 0xFF) == 3) {          /* COMMIT */
            if (op & 0x10000) {          /* LINEAR */
                addr = linear_next;
                linear_next += (size + 0xFFF) & ~0xFFFu;
            } else if (!addr) {
                addr = HEAP_ADDR;
            }
        }
        r[0] = 0; r[1] = addr;
        break;
    }
    case 0x02: /* QueryMemory(addr) */
        r[0] = 0; r[1] = r[2] & ~0xFFFu; r[2] = 0x1000; r[3] = 3; r[4] = 5; r[5] = 0;
        break;
    case 0x03: LOG("guest ExitProcess"); exit(0);
    case 0x08: { /* CreateThread(prio, entry, arg, stacktop, cpu) */
        uint32_t h = thread_create(r[1], r[2], r[3], (int)r[0]);
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x09: LOG("thread %d exits", c->thread_id); guest_unlock(); pthread_exit(NULL);
    case 0x0A: { /* SleepThread(ns lo, hi) */
        int64_t ns = (int64_t)(((uint64_t)r[1] << 32) | r[0]);
        guest_unlock();
        if (ns > 0) { struct timespec ts = {ns / 1000000000, ns % 1000000000}; nanosleep(&ts, NULL); }
        else sched_yield();
        guest_lock();
        break;
    }
    case 0x0B: r[0] = 0; r[1] = 0x30; break;            /* GetThreadPriority */
    case 0x0C: r[0] = 0; break;                          /* SetThreadPriority */
    case 0x13: { /* CreateMutex(locked) */
        uint32_t h = obj_new(OBJ_MUTEX, NULL);
        if (r[1]) { obj_get(h)->owner = c->thread_id; obj_get(h)->lockcount = 1; }
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x14: { /* ReleaseMutex */
        Obj *o = obj_get(r[0]);
        if (o && o->owner == c->thread_id && --o->lockcount <= 0) { o->owner = 0; o->lockcount = 0; }
        r[0] = 0;
        break;
    }
    case 0x15: { /* CreateSemaphore(initial, max) */
        uint32_t h = obj_new(OBJ_SEMA, NULL);
        obj_get(h)->signaled = (int)r[1]; obj_get(h)->max = (int)r[2];
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x16: { /* ReleaseSemaphore(h, count) -> previous */
        Obj *o = obj_get(r[1]);
        uint32_t prev = o ? (uint32_t)o->signaled : 0;
        if (o) o->signaled += (int)r[2];
        r[0] = 0; r[1] = prev;
        break;
    }
    case 0x17: { /* CreateEvent(resettype) */
        uint32_t h = obj_new(OBJ_EVENT, NULL);
        obj_get(h)->oneshot = (int)r[1];
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x18: kernel_signal_event(r[0]); r[0] = 0; break;               /* SignalEvent */
    case 0x19: { Obj *o = obj_get(r[0]); if (o) o->signaled = 0; r[0] = 0; break; } /* ClearEvent */
    case 0x1A: { /* CreateTimer(resettype) */
        uint32_t h = obj_new(OBJ_TIMER, NULL);
        obj_get(h)->oneshot = (int)r[1];
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x1B: { /* SetTimer(h, initial lo/hi in r2:r3? , interval in r1:r4) */
        Obj *o = obj_get(r[0]);
        int64_t initial = (int64_t)(((uint64_t)r[3] << 32) | r[2]);
        int64_t interval = (int64_t)(((uint64_t)r[4] << 32) | r[1]);
        if (o) { o->signaled = 0; o->fire_ns = now_ns() + (uint64_t)(initial > 0 ? initial : 0); o->period_ns = (uint64_t)(interval > 0 ? interval : 0); }
        r[0] = 0;
        break;
    }
    case 0x1C: { Obj *o = obj_get(r[0]); if (o) o->fire_ns = 0; r[0] = 0; break; } /* CancelTimer */
    case 0x1D: { Obj *o = obj_get(r[0]); if (o) o->signaled = 0; r[0] = 0; break; } /* ClearTimer */
    case 0x1E: { /* CreateMemoryBlock(addr, size, myperm, otherperm) */
        uint32_t h = obj_new(OBJ_MEMBLOCK, NULL);
        obj_get(h)->addr = r[1]; obj_get(h)->size = r[2];
        r[0] = 0; r[1] = h;
        break;
    }
    case 0x1F: { /* MapMemoryBlock(h, addr, myperm, otherperm) */
        extern void gsp_set_shmem_addr(uint32_t h, uint32_t addr);
        static uint32_t shmem_next = 0x10100000u;
        Obj *o = obj_get(r[0]);
        uint32_t addr = r[1];
        if (!addr) { addr = shmem_next; shmem_next += 0x10000; }
        if (o && o->type == OBJ_MEMBLOCK) { o->addr = addr; gsp_set_shmem_addr(r[0], addr); }
        if (g_trace_svc) LOG("MapMemoryBlock %08x at %08x", r[0], addr);
        r[0] = 0;
        break;
    }
    case 0x20: r[0] = 0; break;                          /* UnmapMemoryBlock */
    case 0x21: r[0] = 0; r[1] = obj_new(OBJ_ARBITER, NULL); break;
    case 0x22: { /* ArbitrateAddress(arbiter, addr, type, value, timeout) */
        uint32_t addr = r[1], type = r[2];
        int32_t value = (int32_t)r[3];
        if (type == 1 || type == 2 || type == 3 || type == 4) {
            /* WAIT_IF_LESS_THAN (and decrement variants): spin politely until not less */
            uint64_t deadline = type >= 3 ? now_ns() + (((uint64_t)r[5] << 32) | r[4]) : UINT64_MAX;
            while ((int32_t)M32(addr) < value && now_ns() < deadline) {
                guest_unlock(); usleep(100); guest_lock();
                if (g_quit) pthread_exit(NULL);
            }
            if (type == 2 || type == 4) M32(addr) -= 1;
        }
        r[0] = 0;
        break;
    }
    case 0x23: { Obj *o = obj_get(r[0]); if (o && o->type != OBJ_THREAD) o->type = OBJ_FREE; r[0] = 0; break; }
    case 0x24: { /* WaitSynchronization1(h, ns lo, hi) */
        int idx;
        uint32_t h = r[0];
        r[0] = wait_objs(c, &h, 1, 1, (int64_t)(((uint64_t)r[3] << 32) | r[2]), &idx);
        break;
    }
    case 0x25: { /* WaitSynchronizationN(out, handles*, count, waitall, ns lo, hi) */
        int idx, n = (int)r[2];
        uint32_t hs[64];
        for (int i = 0; i < n && i < 64; i++) hs[i] = M32(r[1] + 4 * i);
        int64_t to = (int64_t)(((uint64_t)r[4] << 32) | r[0]);
        r[0] = wait_objs(c, hs, n, !r[3], to, &idx);
        r[1] = (uint32_t)idx;
        break;
    }
    case 0x27: r[0] = 0; break;                          /* DuplicateHandle: same handle in r1 */
    case 0x28: { /* GetSystemTick */
        uint64_t t = now_ns() * 268111856ull / 1000000000ull;
        r[0] = (uint32_t)t; r[1] = (uint32_t)(t >> 32);
        break;
    }
    case 0x2A: case 0x2B: r[0] = 0; r[1] = 0; r[2] = 0; break;  /* Get{System,Process}Info */
    case 0x2D: { /* ConnectToPort(name) */
        char name[16] = {0};
        strncpy(name, (char *)GPTR(r[1]), 11);
        r[0] = 0; r[1] = obj_new(OBJ_SESSION, name);
        if (g_trace_svc) LOG("ConnectToPort %s -> %08x", name, r[1]);
        break;
    }
    case 0x32: ipc_request(c, r[0]); break;              /* SendSyncRequest */
    case 0x35: r[0] = 0; r[1] = 0x28; break;             /* GetProcessId */
    case 0x37: r[0] = 0; r[1] = (uint32_t)c->thread_id; break; /* GetThreadId */
    case 0x38: r[0] = 0; r[1] = obj_new(OBJ_OTHER, "reslimit"); break;
    case 0x39: case 0x3A: { /* GetResourceLimit{Limit,Current}Values(out, h, names, count) */
        for (uint32_t i = 0; i < r[3]; i++) M64(r[0] + 8 * i) = (num == 0x39) ? 0x04000000ull : 0;
        r[0] = 0;
        break;
    }
    case 0x3C: LOG("guest svcBreak(%08x)", r[0]); abort();
    case 0x3D: LOG("[debug] %.*s", (int)r[1], (char *)GPTR(r[0])); r[0] = 0; break;
    default:
        LOG("svc %02x not implemented (thread %d, pc %08x, lr %08x) -> returning success", num, c->thread_id, c->r[15], c->r[14]);
        r[0] = 0;
        break;
    }
}

uint32_t kernel_new_memblock(uint32_t size) {
    uint32_t h = obj_new(OBJ_MEMBLOCK, "shmem");
    obj_get(h)->size = size;
    return h;
}

void kernel_init(void) {
    memset(objs, 0, sizeof objs);
}
