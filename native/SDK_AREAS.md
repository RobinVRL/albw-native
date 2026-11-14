# SDK API surface by area (USA addresses)

Source data: `sdk_map.json` (641 `api_surface` entries, 228 `system_functions`) and the Ghidra full-analysis dumps
(`build/ghidra_analyzed`). The per-function result is in `sdk_areas.json`. Each entry has area, role, confidence,
evidence, the svc/IPC calls it reaches inside the SDK blocks (`reaches_svc_ipc`), a `native_action` hint, and
the number of game call sites.

## How the areas were assigned
- IPC command headers were read from the literal pools in `eu_code.bin` (the Ghidra `DAT_` addresses are EU addresses).
  The value written to TLS+0x80 gives the command. The handle global named in the literal pool gives the service:
  0x715878=APT:U, 0x71618C=srv:, 0x715968=hid:USER, 0x722AB8=ndm:u (confirmed by the "ndm:u" string),
  0x716784/0x716788=cecd:u/cecd:s (confirmed by "cecd:u"), 0x71613C=ptm:u (pedometer cmds 0x0B/0x0C),
  0x716798=cfg:u (SecureInfoGetRegion 0x00020000). For fs, dsp, gsp and err:f, the session handle is passed in as a
  parameter, so the command range identifies the service (0x08xxxxxx fs; 0x0011/0x0012/0x0013 dsp
  Load/UnloadComponent and FlushDataCache; 0x0008/0x000C/0x0013/0x0016 gsp; 0x00010800 err:f ThrowFatalErr).
- Each api_surface function's call graph was followed down (depth 8, only inside the SDK blocks) to collect the
  svc/IPC it reaches. The pseudocode was then read to name the role. CRT and math functions were identified by what
  they do.
- Confidence: high=92, medium=115, low=434. Most low-confidence entries are 1-2 call-site functions whose area comes
  from the surrounding address region (for example "snd region 003DB-003E1"), not from their own code.

## Summary per area

| area | functions | game call sites | high/med/low | key functions (USA addr, role, call sites) |
|---|---|---|---|---|
| math | 77 | 4044 | 29/18/30 | 00115C70 Vec3 sub (844); 00115C54 Vec3 add (720); 00111A64 Random::getU32 (505); 00115D70 Vec3 scale (356) |
| os-memory/heap | 26 | 2327 | 7/11/8 | 0010BAB4 operator new(size) via current heap (1072); 0010CEE0 operator new(size, heap, align) (499); 0010BA78 operator new[](size) via current heap (379); 0010983C heap: setCurrentHeap (152) |
| framework | 130 | 1465 | 8/16/106 | 0010A794 state machine ctor (375); 0010BEC4 copy string into fixed-size string table entry (222); 0010F1F8 intrusive doubly-linked list: erase (140); 0010F1DC intrusive doubly-linked list: insert (97) |
| crt/libc | 24 | 869 | 15/6/3 | 0010E3C4 memcpy (334); 00114608 float -> int64 conversion (182); 00110D44 memcpy (94); 00110490 memclr / bzero (56) |
| gfx-middleware | 90 | 700 | 0/4/86 | 0010BEB4 model: play/bind animation by name (370); 00110848 model/anim: mark dirty (98); 0010C7F8 animation frame control: set frame/rate (16); 004929B8 scene object dtor (12) |
| os-threads/sync | 28 | 225 | 7/12/9 | 0010C0B8 CriticalSection::lock (59); 0010C0C0 CriticalSection::lock (30); 0010EEE0 CriticalSection::unlock (29); 0010C160 CriticalSection::unlock (20) |
| gsp/graphics | 57 | 212 | 4/16/37 | 001139F8 GPU: virtual->physical address (21); 003CC230 GPU command buffer: write split command-list jum (18); 003CC1E4 GPU command buffer: pad to 16-byte alignment (18); 003E3F00 gsp: lock GX critical section (17) |
| game | 36 | 75 | 6/3/27 | 003C5604 game/engine code (5); 003C30DC game/engine code (5); 003C2D00 game/engine code (5); 003C29D8 game/engine code (5) |
| snd/dsp | 50 | 73 | 1/2/47 | 003DE188 snd: command (6); 003E0AF0 snd: command (4); 003E16D4 snd: voice set state (3); 003DE244 snd: object init (3) |
| other/unknown | 24 | 72 | 3/1/20 | 003E19E8 empty function (15); 0010AC24 err: ThrowFatalErr (11); 001022F4 getter: returns global+4 (8); 003E1A24 empty function (6) |
| fs | 30 | 55 | 2/8/20 | 003C8BD8 fs: file/dir object Close/Finalize (9); 003C9DCC fs: file write loop (4); 003C7D28 fs: build UTF-16 path and open/create (4); 003C8184 fs: read via cached buffer (3) |
| system-other | 25 | 38 | 0/8/17 | 003CE91C cecd (6); 003D2210 cecd/ngword object ctor (5); 003CEBD8 cecd: make message id (3); 003D213C cecd: get size fields (2) |
| apt | 17 | 27 | 1/3/13 | 00102A2C apt: set applet flag (4); 0010585C apt: get applet flag byte (3); 00104A80 apt: get applet state byte (3); 0010173C apt: set sleep/home-button policy flag, then app (3) |
| hid | 13 | 13 | 2/1/10 | 003D5684 hid: Pad/Touch reader ctor (1); 003D566C hid: accel calibration/convert (1); 003D55A8 hid: stub (1); 003D52C4 hid: Accelerometer reader ctor (1) |
| time | 6 | 8 | 3/2/1 | 00115F28 GetSystemTick (2); 0010DA24 Tick capture (2); 005808BC elapsed ticks since start (1); 0049AD40 Tick capture into object (1) |
| cfg | 8 | 8 | 4/4/0 | 003E22D4 cfg: Initialize / read config variant (1); 003E22CC cfg: Initialize / read config (1); 003D25A0 cfg: get region (1); 003D252C cfg: parental controls flag (1) |

Area meanings: `framework` covers engine/runtime code (state machines, intrusive lists, PtrArray, IDisposer,
resource/BYML readers, string helpers). `gfx-middleware` covers the model/animation/camera library. Neither calls the
OS. `game` covers game code that the 64 KB SDK blocks happen to include.

## Findings that change the plan
1. **Most of the "SDK" surface does not touch the OS.** About 4,000 of roughly 10,200 call sites go to math
   (Vec3/Matrix34/Euler matrices/atan2/Random), about 1,500 to engine framework code, and about 700 to model/animation
   middleware. These are plain C and can be compiled as-is. Check them for 32-bit pointer/`int` assumptions; nothing
   needs to be written against an OS API.
2. **The SDK blocks are coarse 64 KB ranges.** They include game code: 0x003C0000-0x003C5FFF holds
   EnemyShadowLinkState{FireRod,SandRod,HookShot,Boomerang}. They also include middleware. 36 entries are labelled
   `game`. Four api_surface functions sit outside the blocks entirely (0x0019AF4C, 0x0040EA34, 0x004C4268,
   0x005808BC); they appear only because game code inlines svc 0x28 or 0x24.
3. **operator delete is not in api_surface.** The heap allocator API is: operator new / new[]
   (0x0010BAB4/0x0010BA78) → current heap (TLS slot, thread+0x68) → vtable+0x18 alloc. The matching
   `findContainHeap(p)->free(p)` (vtable+0x1C) wrappers are at USA 0x0058FA00-0x0058FAAC, outside the SDK blocks.
   They must be replaced together with new.
4. **The service surface the game calls directly is small:** fs 30, hid 13, apt 17, cfg 8, gsp 57 (mostly
   GPU command-buffer builders), snd/dsp 50 (mostly 1-call-site voice setters), and ptm/cecd/ndm/ngword about 25.
   Every one of these has 13 or fewer call sites; most have 1-3.
5. hid input reading (Pad/Touch/Accel readers at 0x003D3-0x003D5) is called from only a few places. The game
   probably uses a framework input wrapper, so replacing these few readers covers input.

## Recommended native replacement order (to reach boot)
1. **crt/libc** (24 functions, 869 sites): map memcpy/memmove/memset/memclr/strlen/strcmp/memcmp/vsnprintf and
   the `__aeabi_*` division, shift and float-convert helpers to the host libc or compiler.
2. **os-memory/heap** (26 functions, 2,327 sites) plus the delete family at 0x0058FAxx: back sead-style heaps with
   host memory (one big arena per heap is the simplest option). Use a `thread_local` current heap. Keep
   IDisposer/HeapMgr as C, but make findContainHeap work on 64-bit host pointers.
3. **os-threads/sync** (28 functions, 225 sites): CriticalSection lock/unlock (recursive, owner = TLS pointer),
   light mutex/semaphore (LDREX/STREX + ArbitrateAddress; use std::atomic + futex/condvar), TLS slots, sleep,
   thread join, and the panic/Result check (0x0010C1B8/0x0010A98C/0x0010AC24, which should log and abort).
4. **time** (6 functions): GetSystemTick at the 3DS tick rate (268,111,856 Hz), plus the date helpers.
5. **fs** (30 functions): serve RomFS from a host directory, ExtSaveData/SaveData from host files, and the
   UTF-16 path helpers. Mount/unmount by name (0x00102130). Stub ngword (profanity filter).
6. **cfg / apt / ptm / cecd / ndm** (about 50 functions): stubs that return success. cfg should return fixed
   region/language/country; apt should report "no home menu, no sleep"; leave cecd/StreetPass disabled.
7. **hid** (13 functions): SDL → Pad/Touch/Accelerometer reader structs.
8. **gsp/graphics** (57 functions): replace the gsp IPC layer (Initialize, FlushDataCache, TriggerCmdReqQueue
   GX commands, SetLcdForceBlack, VRAM address) with the host renderer. The PICA command-buffer builders
   (0x003CA-0x003CD, 0x00112D70-0x00113388) can stay as C if the backend consumes PICA command lists. Otherwise
   intercept them one level higher. `0x001139F8` (virtual→physical address) needs a native equivalent in either case.
9. **snd/dsp** (50 functions): replace the voice layer (0x003DB-0x003E1) with a host mixer. The DSP
   component load/flush can be dropped.

## Caveats
- Roles for low-call-site functions in the 0x003DA-0x003EF and 0x00490-0x0049F regions are guesses from the
  region and code shape. Treat `low` as "area probably right, role unverified".
- The call-graph reachability over-approximates: APT functions pull in dsp/gsp because of the
  sleep/wake handlers. `reaches_svc_ipc` is evidence, not proof of the function's purpose.
- One handle global, 0x716780 (commands 0x003B/0x003C/0x003D/0x0013, used from 0x001093C0), was not identified.
  It is reached by internal SDK functions only, not by the api_surface.
