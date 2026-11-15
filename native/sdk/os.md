# native/sdk/os.c: threads, synchronisation and time

These are native replacements for the SDK `nn::os` / `nn::svc` thread, sync and tick layer.
Each function is reimplemented by what it does at the API level, on pthreads and libc. Nothing
emulates the kernel. Each `func_<USA>` in os.c has a comment with its evidence and a confidence
level.

## Design

- **Handles.** A handle is a 32-bit `((gen & 0x3FFF) << 16) | slot` that indexes a native
  object table (thread / mutex / event / semaphore / arbiter). It fits the game's 4-byte handle
  fields on both -m32 and -m64. 0 is never valid. `0xFFFF8000` is the current-thread
  pseudo-handle. Its object is created lazily for threads that the game did not start through
  CreateThread, such as the main thread.
- **Waiting on handles** (WaitSynchronization1/N meaning). All handle waits share one global
  mutex and one CLOCK_MONOTONIC condvar, which is broadcast on every state change. Acquire
  side effects match the 3DS:
  - mutex: recursive, owned by the waiter;
  - ONESHOT event: cleared by the waiter;
  - semaphore: count decremented;
  - thread: signaled once it has finished.
- **Light primitives** (CriticalSection lock word, LightEvent, LightSemaphore). The state words
  stay in game memory with the SDK's exact encoding and are updated with C11 atomics. Threads
  that would have called ArbitrateAddress block in a native per-address FIFO wait queue: 64
  hashed buckets, one condvar per waiter, targeted wake-ups, so there are no spurious returns.
- **CriticalSection owner.** The SDK stores the TLS pointer in the owner field. Here the field
  holds a native 32-bit thread id (non-zero, unique per thread) so that it stays 64-bit clean.
  Every function that writes or compares the field is replaced: 0010C0C0/0010C0B8,
  0010C160, 003CD8E8/003CD8E0.
- **Threads.**
  - 00104248 (nn::os::Thread::TryInitializeAndStartImpl, which had no source) is rewritten
    from the disassembly. It still copies the parameter and the trampoline start block onto
    the game-provided stack, then calls CreateThread (00103C80) with the SDK trampoline
    0010994C, which stays decompiled.
  - CreateThread starts a detached pthread with a 1 MiB host stack. The game stack is plain
    memory and is never used as a machine stack.
  - When the thread ends (it returns, or ExitThread calls `pthread_exit`), a pthread-key
    destructor marks it finished and wakes joiners.
- **Priorities and cores** are recorded, so GetThreadPriority returns them, and applied by the
  app-core scheduling (section below), not by the host scheduler (SCHED_OTHER pthreads). The SDK priority to kernel priority
  mapping of 00104248 is kept, and out-of-range priorities fail with an error as before.
- **Time.** GetSystemTick is CLOCK_MONOTONIC scaled to 268,111,856 Hz. Sleep and SleepThread
  use nanosleep; 0 or a negative value yields.
- **Results.** Success is 0. Timeout is 0x09401BFE and invalid handle is 0xD8E007F7. The
  others are approximate. 0010A98C (Result check) and 0010D0EC (svcBreak) call
  `runtime_fatal`.

## App-core scheduling

The 3DS runs an application's threads on the app core one at a time: the highest-priority ready
thread runs (lower number = higher priority), FIFO among equal priorities, no time slicing. The
game relies on that order (boot stop 61: the main thread, priority 0x30, finished destroying a
task's heaps before the prepare thread, 0x31, continued). os.c reproduces the rule at the API
level with an ownership token per core:

- Game threads = the main game thread (`albw_sched_main_thread()`, called by entry.c) and every
  thread created through 00103C80 (nn::os::Thread / sead::Thread). A game thread runs game code
  only while it holds its core's token. Threads created on core 1 (the system core, e.g. the
  0x2F / 0x30 workers) get core 1's token: they ran in parallel on the hardware too.
- The token changes hands at: blocking waits (address waits = CriticalSection / LightEvent /
  LightSemaphore / ArbitrateAddress; WaitSynchronization1/N incl. thread join), sleeps (Sleep,
  TickSpan sleeps), Yield / Sleep(0) (equal or higher priority goes first), a wake-up that
  readies a higher-priority thread (arb_signal: the waker is preempted and stays at the head of
  its priority), creating a higher-priority thread, and thread exit.
- Host threads (SDL audio callback, albw-snd, rendering, input, Qt) have no token and are never
  scheduled; they may signal game primitives, which readies the woken game thread.
- `albw_sched_block_begin()` / `albw_sched_block_end()`: for other areas that block on host
  primitives from a game thread (gfx.c vblank sleep, platform.c swap + 60 Hz pacing).
- `ALBW_SCHED=parallel` turns the model off (every thread runs freely; A/B tests).
  `ALBW_SCHED_TRACE=1` logs each created thread (id, priority, core, entry).
- Lock order: bucket mutex / object lock before the scheduler mutex (never the reverse).
- 32-bit and 64-bit: plain pthread mutex/condvars, no pointer-size assumptions.

## Native API for other areas (non-`func_` symbols exported by os.c)

Several SDK functions outside this area contain the svc inline, for example the apt/gsp/dsp
event loops 00104F90, 00108990, 0010AF4C, 003DF02C and 003E395C. Their replacements can use
these functions instead:

```c
uint64_t albw_os_system_tick(void);                                    /* svc 0x28 */
uint32_t albw_os_wait1(uint32_t h, int64_t ns);                        /* svc 0x24, ns<0 = forever */
uint32_t albw_os_wait_n(int32_t *out_index, const uint32_t *h, int32_t n, bool all, int64_t ns); /* 0x25 */
uint32_t albw_os_close_handle(uint32_t h);                             /* svc 0x23 */
uint32_t albw_os_duplicate_handle(uint32_t *out, uint32_t h);          /* svc 0x27 */
uint32_t albw_os_create_mutex(uint32_t *out, bool locked);             /* svc 0x13 */
uint32_t albw_os_release_mutex(uint32_t h);                            /* svc 0x14 */
uint32_t albw_os_create_event(uint32_t *out, int32_t reset_type);      /* svc 0x17 */
uint32_t albw_os_signal_event(uint32_t h);                             /* svc 0x18 */
uint32_t albw_os_clear_event(uint32_t h);                              /* svc 0x19 */
uint32_t albw_os_create_semaphore(uint32_t *out, int32_t init, int32_t max);   /* svc 0x15 */
uint32_t albw_os_release_semaphore(int32_t *out_count, uint32_t h, int32_t n); /* svc 0x16 */
uint32_t albw_os_arbitrate(volatile int32_t *addr, int32_t type, int32_t value, int64_t ns); /* 0x22 */
uint32_t albw_os_current_thread_id(void);
```

## Replaced (strong definitions in os.c)

| area | USA addresses |
|---|---|
| svc wrappers | 00103C80 CreateThread, 0010998C ExitThread, 00106394 SleepThread, 0010F228 GetThreadPriority, 0010EAE8 GetThreadId, 00115EF8 CreateMutex, 00103C68 CreateEvent, 00101DE8 CreateAddressArbiter, 0010BE9C ArbitrateAddress, 00115ED4 CloseHandle, 0010639C WaitSynchronizationN, 00115F10 DuplicateHandle, 00115F28 GetSystemTick, 0010D0EC Break |
| nn::os::Thread | 00104248 TryInitializeAndStartImpl (had no source), 0010C180 Join, 00104338 Sleep, 00106348 spin delay, 00106314 thread VFP init (no-op) |
| CriticalSection | 0010BFD4 / 0010BFFC lock word acquire, 0010A938 release, 003CD764 try; 0010C0C0 / 0010C0B8 Enter, 0010C160 Leave, 003CD8E8 / 003CD8E0 TryEnter; 0010818C word init |
| LightEvent | 00104164 Initialize, 001080D4 / 001080CC Signal, 0010A7BC Wait, 0010A884 TryWait, 0010A8D4 Clear |
| LightSemaphore | 003CD7B4 Acquire, 003CD868 Release |
| err | 0010A98C Result check (fatal) |
| time | 0010DA24 Tick ctor, 005808BC elapsed ticks, 0049AD40 tick to this+0x150, 0049BCF4 sleep for TickSpan |
| game code with an inline svc, rewritten from the EU disassembly | 0049AD58 / 004966D4 framework main loops, 004960AC / 0049A944 frame functions, 00496238 / 0049ABAC frame pacing, 0025E25C scene init (tick 0x28); 0040EA34 / 0040EAA4 worker stop/dtor, 0049BE50 sead::Thread::waitDone, 0049C008 / 0049C004 sead::Thread dtor, 0049BAF8 mutex-holder dtor (svc 0x23/0x24) |

## Still decompiled on purpose

- Game logic above the primitives: 0010994C (thread trampoline), 00106320 (frees the auto
  stack), 0010EE40 / 0010EEE0 (CS leave wrappers), 0010C0F8 (list remove plus Leave),
  0010DEB0 (CS init), 00106388 (Yield, which calls 00106394(0)), 0049BAA8 (mutex ctor, which
  calls 00115EF8), 0049BD40 / 0049BD4C (sead::Thread::start, which calls 00104248 and
  0010EAE8), and 0010C1B8 (panic, which ends in 0010D0EC).
- TLS access: 0010E294 / 0010EDBC (TLS slot get/set), 0010CF70, 00104198, 001041E4 and
  001013F8 are matched sources. build_decomp.py rewrites their `mrc p15` reads to `albw_tls()`,
  which is a per-pthread block, so they already work natively. They are not replaced because
  other code may address the same TLS words directly.

## Not yet handled (still contain an svc or need decompilation)

- **Game code with svc 0x28 that remains:**
  - 0019AF4C and 004C4268: RNG seeding with the tick after the Tick ctor.
  - 00418588: a profiler. It makes a virtual call with a float argument in s0, which needs a
    real decompilation.
  - The SDK-internal tick sites 003C8DAC, 003D4220, 003DB398, 003DD194, 003DD4A4, 003E4B34
    and 00105960, which belong to the fs / hid / snd / gsp / apt owners.
  - In each case the decompiled code drops the r0:r1 result of `software_interrupt(0x28)`.
    Use `albw_os_system_tick()`.
- **Inline WaitSync / Signal / Clear / ReleaseMutex in other areas:** 00102820, 00104F90,
  00108990, 00108DF8, 00108F4C, 0010AF4C, 003CE91C, 003DD098, 003DE7C8, 003DF02C, 003DF9E0,
  003DFA68 and 003E395C (apt, srv, dsp, gsp, cecd). Use the `albw_os_*` API above.
- `coproc_movefrom_User_R_Thread_and_Process_ID` (the TLS read in Ghidra fallback text) is
  not declared in ghidra_types.h. Its only users here, the Ghidra versions of 0010C0C0 and
  003CD8E8, are overridden.

## Risks

- **Preemption is only at API calls.** The app-core model (section "App-core scheduling")
  hands the core over at blocking calls, yields, wake-ups of higher-priority threads and thread
  creation. The 3DS kernel also preempts on timer/interrupt wake-ups at any instruction; here a
  higher-priority thread whose sleep ended waits for the running thread's next os.c call. A
  game thread that computes for a long time without any os call (or spins on a value another
  game thread sets) therefore delays (or with a spin: deadlocks) the others. None found yet;
  add a `sched_yield_turn()` at such a spin point and list it here. Kernel-object signals
  (svc events/semaphores/mutexes) do not preempt at the signal (the woken thread queues itself).
  Host blocking on a game thread (vblank sleeps in gfx.c, swap/pacing in platform.c) releases
  the core through `albw_sched_block_begin/end`.
- **The light primitives mix with other decompiled code.** Other decompiled code that touches
  the same words with the ldrex/strex intrinsics (`hasExclusiveAccess`, or `__ldrex` /
  `__strex` in albw_native.h, which are currently not atomic) is not atomic with respect to
  os.c. All known users of these words are replaced here.
- **WaitSynchronizationN timeout.** 0010639C reads `ns` as an s64 (the ARM ABI). The Ghidra
  caller 00104F90 passes only one 32-bit word, so the high half is garbage. That caller has to
  be replaced by its owner (apt).
- **ArbitrateAddress callers.** Ghidra-derived callers of 0010BE9C pass no arguments. All
  known ones are replaced here; any new one would pass garbage.
- **Game-side rewrites keep the 32-bit object layout** (offsets as in the ROM), like the rest
  of the decomp. On 64-bit they are only as correct as the surrounding game structures. The
  SDK part (handles, owner ids, wait queues) is 64-bit clean.
- **TLS slots** (0010E294 / 0010EDBC) store u32 values, and sead stores a `Thread*` there.
  That truncates on 64-bit and needs a pointer-sized slot design together with whoever owns
  the TLS block.
- **Flush-to-zero.** 00106314 is a no-op, so x86 keeps denormals where the 3DS set
  flush-to-zero. Tiny float differences are possible.
- **Symbol ownership.** 00104248, 00106314 and 00106348 were unresolved, with no source.
  They are defined here, so another file must not define them too.
