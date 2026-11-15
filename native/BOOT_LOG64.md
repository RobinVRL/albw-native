# Boot log, x86-64 (low-4GB mode)

The 64-bit counterpart of native/BOOT_LOG.md: one entry per stop of `build/albw64`
(tools/link64.sh). USA addresses. "shared" = a decomp/native defect that the 32-bit build has too.

Run: `SDL_VIDEO_DRIVER=offscreen ALBW_SAVE_DIR=$PWD/build/x64/save ALBW_TRACE_TASKS=1 timeout -s KILL 40 build/albw64`

| # | stop | cause | fix | scope |
|---|------|-------|-----|-------|
| 1 | link64.sh links less than link.sh: no native/compilefix, framework, core, route, hot; 0051E5F8 skipped; no -DALBW_LINK_GAME_003E6AA8 / include paths; no weak `data_` definitions or `&DAT_` pool for gen_data (32-bit stop 69); no bool adapters (32-bit stop 50) | link script drift | link64.sh mirrors link.sh: same directories (route without alt/, hot top-level tracked .c), all of them through ptr32 --native; native/refs/lms linked (64-bit clean LMS; matched 0011F054 takes one `long long` = rdi only on x86-64, the free hook was lost) and replaces native/game/func_0011F064.c; tools/boolret.py x86-64 adapters (System V, 16 stack words copied, 523 functions); fconv_interim.py --arch x86_64 (run only for a V4 decomp64). x87 pop adapters: not needed (float returns in xmm0, nothing leaks). Tripwire stubs 928 -> 310 functions | 64-bit only |
| 2 | compile error: compilefix/003E23F4 `ppfVar4 = &param_6` into a `float * ALBW_GP *` | ptr32 makes the inner pointer 4 bytes; the value is only passed on as a word | explicit cast | 64-bit only (no change on i386) |
| 3 | link64.sh exited silently on a compile error | `syms=$(grep ...)` under `set -o pipefail` | `|| true` | 64-bit only |
| 4 | BLOCKED: SIGSEGV in createTask_ 0049D3D8 (framework) on the Prepare thread (004ECA48 -> 0048E670 -> 0048E718 -> 0049D4A8): class id = {0x114b51c, heap ptr}, factory returns 0 | build/decomp64 is round 2 from before rebuild #3 (14:52): 004ECA48 calls the CreateArg ctor 001031B4 with one argument (32-bit stop 43); the 32-bit build runs round 3 stage 1 (ghidra_analyzed5_v4) | needs `ALBW_V4_STAGE=1 tools/build_decomp64_v4.sh` (full 64-bit decomp rebuild, ~26k sources) then tools/link64.sh | rebuild |

Scheduler (native/sdk/os.c app-core model) on 64-bit: main -> Prepare thread (0x31) token hand-over
works; stop 4 is identical with `ALBW_SCHED=parallel`. Not exercised further (blocked at stop 4).
