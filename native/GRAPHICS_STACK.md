# ALBW graphics stack (USA addresses)

Static analysis of the Ghidra pseudocode (`build/ghidra_analyzed`), the EU binary
(literal pools read with capstone) and the decompiled call graph. Machine-readable
per-function table: `native/graphics_functions.json` (171 entries, each with a
confidence and the evidence for it).

Confidence words used below:
- **high**: confirmed by an IPC header, a string reference or an unambiguous body.
- **medium**: the function's behaviour fits a known SDK API, but the SDK name is my inference.
- **low**: guessed from where it is called or from the PICA registers it writes.

**Caveat:** the call graph only contains direct `func_XXXXXXXX` calls. Most engine
draw code is reached through virtual calls (`(**(code **)(*obj + 0x10))(...)`), so
"0 callers" usually means "called through a vtable", not "dead code".

---

## 1. Layer summary (top -> bottom)

```
L5  Game actors / scenes               (virtual Draw(), mostly not traced)
L4  Zelda render manager + passes      0x0012D000-0x00133000, 0x0014A000-0x0014D000,
                                       0x002C0000-0x002FF000, 0x00322000-0x00324000
L3  sead framework (CTR)               0x00494000-0x0049B000  (GameFrameworkCtr, MethodTree
                                       Top/Btm/Right*Draw, DisplayBuffer, PrimitiveRenderer)
L2  Command-word producers:
      nn::gr::CTR MakeCommand          ~0x00561000-0x00569000
      nw::h3d (BCH models/materials)   location not pinned (BCH files + Shader/nwh3d_DefaultShader.bch)
      nw::lyt / nw::font / nw::eft     bflyt/bclim layouts, bffnt + RectDrawer shader, eft System
      engine cmd-buffer helpers        0x003CC054-0x003CC260
      game code writing raw PICA       many functions (see JSON layer L4b/L4d)
L1  nngx (libnngx, statically linked)  0x005FE800-0x00602A00  (+ GL state backend 0x00591B0C-0x00593000)
L0  GSP client                         0x003E31E4-0x003E3F20 (+ IPC stubs 0x0010AE3C-0x0010AED0)
    -> svc 0x32 to gsp::Gpu, GX command ring in GSP shared memory, framebuffer info in shared memory
```

Two important facts drive the recommendation:

1. **The game does not use the GL-like draw API.** Only nngx's own internals use the
   `dmp_*` GL uniform table (0x6B2DD4, used by 00591B0C, which is called only from
   nngxInitialize). Game and engine code call about 45 nngx command-list,
   display-buffer and transfer functions. They also write **raw PICA200 register
   words** straight into the command buffer. Confidence: high.
2. **The raw PICA writing has a narrow, recognisable idiom**:
   ```
   nngxGetCmdlistParameteri(0x208 /*CURRENT_BUFADDR*/, &p);   // 006003D8
   p = SomeMakeCommand(state, p);   // nn::gr MakeCommand or hand-written words
   nngxMoveCommandbufferPointer(p - start);                    // 00601378
   ```
   - 40 direct callers of 006003D8.
   - 25 direct callers of 00601378.
   - Prebuilt command blocks are memcpy'd in, or called as a PICA subroutine through
     003CC090/003CC230, which writes the CMDBUF jump registers with physical
     addresses.

   Command words carry **physical addresses**, produced by 001139F8 (GetPhysicalAddr):
   - FCRAM: +0x0C000000
   - VRAM: -0x07000000

---

## 2. L0: GSP client (0x003E3xxx). Confidence: high.

IPC stubs. The headers were read from the EU literal pools:

| USA | gsp::Gpu command | header |
|---|---|---|
| 003E3D2C | WriteHWRegs | 0x00010082 |
| 003E3E00 | WriteHWRegsWithMask | 0x00020084 |
| 003E3CB0 | ReadHWRegs | 0x00040080 |
| 003E3D74 | FlushDataCache | 0x00080082 |
| 003E3DD8 | TriggerCmdReqQueue | 0x000C0000 |
| 003E3EB0 | RegisterInterruptRelayQueue | 0x00130042 |
| 003E3E60 | ImportDisplayCaptureInfo | 0x00180000 |
| 003E3DB0 | SaveVramSysArea | 0x00190000 |
| 0010AE3C / 0010AE80 / 0010AEA8 / 0010AED0 | probably AcquireRight / ReleaseRight / RestoreVramSysArea / UnregisterInterruptRelayQueue (medium) | 0x160042 / 0x170000 / 0x1A0000 / 0x140000 |

**SetBufferSwap (0x00050200) is never called.** Presentation goes through the
shared-memory framebuffer-info block instead.

GX command queue (shared memory):
- 003E33E0 enqueues an 8-word command into the 15-entry ring (using ldrex/strex). If
  the queue was empty, it calls TriggerCmdReqQueue.
- The command builders are:

| USA | GX cmd |
|---|---|
| 003E32EC | 0 RequestDma |
| 003E3610 | 5 FlushCacheRegions, then 1 ProcessCommandList |
| 003E356C | 2 MemoryFill |
| 003E3AFC | 3 DisplayTransfer |
| 003E36E0 | 4 TextureCopy |

- 003E34D8 writes the per-screen framebuffer info into shared memory and sets the
  update flag (0x100). This is the actual "swap".
- 003E35DC is the FlushDataCache wrapper. About 17 game functions also call it
  directly, for texture and vertex data.

## 3. L1: nngx (0x005FE800-0x00602A00). Function behaviour: high. SDK names: mostly medium.

**This range is not in `sdk_map.json` `sdk_blocks_usa`.** The SDK map misses nngx,
the nngx GL-state backend (0x00591B0C-0x00593000) and nn::gr. As a result, the
`api_surface` list does not include any of the graphics API.

Global state: `*(DAT+0x9c)` is the bound command list, and `DAT+0xa0` is the running
one. Each command list holds:
- a raw PICA word buffer, and
- a request array of 0x1C-byte entries, with type 0 DMA, 1 3D command buffer,
  2 MemoryFill, 3 DisplayTransfer (B2L) and 4 TextureCopy (BlockImageCopy).

The dispatcher 0060226C turns each request into a GX command. It is re-entered from
the GSP interrupt thread when a request completes.

| group | functions |
|---|---|
| init | 006006B0 nngxInitialize(alloc, free). Its only caller is sead 004966A4. |
| command lists | 00600148 GenCmdlists, 005FF418 BindCmdlist, 005FF850 CmdlistStorage, 005FF9AC DeleteCmdlists, 005FF760 ClearCmdlist, 00601390 RunCmdlist, 00601600 StopCmdlist, 006017F0 WaitCmdlistDone, 006003D8 GetCmdlistParameteri, 00601378 MoveCommandbufferPointer, 005FFDC0 SplitDrawCmdlist, 005FFF7C / 005FFC18 Flush3DCommand variants (low), 005FEF5C Add3DCommand (low), 005FF104 jump/subroutine (low), 005FFBDC EnableCmdlistCallback (low) |
| copies | 005FF314 AddVramDmaCommand, 005FF2C8 AddMemoryFillCommand, 005FF018 AddB2LTransferCommand (11 args), 005FF064 AddBlockImageCopyCommand, 005FF2A8 AddL2BTransfer (low) |
| display | 0060027C GenDisplaybuffers, 005FF5DC BindDisplaybuffer, 005FFAF0 DisplaybufferStorage, 005FEF2C ActiveDisplay, 00601658 SwapBuffers, 005FF6E4 CheckVSync, 0060188C WaitVSync, 006005BC GetDisplaybufferParameteri, 00600660 GetVramStart/End (0x20000 = VRAM-A, 0x30000 = VRAM-B) |

Display ids seen (taken from the code, not from SDK headers):
- 0x400: top (left eye)
- 0x410: top right eye
- 0x401: bottom
- 0x402: both

Formats seen: 0x8051 GL_RGB8, 0x8056 GL_RGBA4, and others behind a literal constant.

## 4. L2: who produces PICA words

- **nn::gr::CTR MakeCommand** (medium):
  - 00561B30 RenderTarget (regs 0x111/0x116/0x117/0x11C-0x11E)
  - 00561C34 FragmentOperation (0x100-0x107)
  - 00563170 Scissor
  - 00563A5C Viewport (float24)
  - 005632B0 Texture (0x81-0x8E)
  - 005647D4 / 00565204 Combiner (0xC0-0xFF)
  - 005613D4 / 00562B24 ShaderProgram (0x280-0x2CB)
  - 00562DFC uniform lookup by name
  - 00568224 / 00568798 shape draw with bone matrices (0x2C0 uniforms, 0x228/0x231/0x245/0x25E). These two may be nw::h3d rather than gr (low).
- **Engine state wrappers** (virtual methods): 0048AD08 / 0048AD94 / 0048AE70 / 0048ADE4..0048AFEC and 0057EAC0. Each calls a gr MakeCommand at CURRENT_BUFADDR.
- **nw::h3d**: assets are `.bch` files (Actor/*.bch, MapActor/*.bch, Course/*.bch). 00505094 loads `Shader/nwh3d_DefaultShader.bch` and `LUT/common_lut.bch`.
  - BCH materials and shapes carry **prebuilt PICA command blocks**. These get relocated (physical addresses) and are called as subroutines (003CC090 / 003CC230).
  - The h3d code is not located precisely. Likely candidates (all low): 003F3668 / 003F8674 / 003F9AA4 (VRAM DMA + cache flush), 003F3854 (draw regs) and 0041E948 (texture regs).
- **Other NW libraries**:
  - nw::font: 00503A8C loads `nwfont2_RectDrawerShader.shbin`; 0013B020 loads `MessageFont.bffnt`.
  - nw::lyt: `%s.bflyt` at 00404360 / 00404500; 004C870C sets up LayoutTop / LayoutBtm.
  - nw::eft: string `nw::eft::System` at 0x2E328C, init around 002E2F78; per-frame pass 002E39E8 (low).
  - sead PrimitiveRenderer: 004970E8 (`dmp_Line.width`), 00497DBC.
  - gr default shader: 002C2610 loads `Shader/gr_default_shader.shbin`; the pass is 002C30E8.
- **Hand-written PICA in game code**: the literal-pool scan finds PICA headers in about 150 functions across the binary. Examples are post-effects, fog/lighting tables and filters (`Environment/*Filter.bch`). The list is noisy; see the `n`/`regs` heuristics if you re-run the scan.

## 5. How a frame flows (medium)

1. sead `procFrame` (004960AC) runs the previous command list (nngxRunCmdlist), then calls the calc/draw virtuals. The method tree has Top/Btm/Right × Root/Sys/App/AppFinal draw nodes (0049A188, 0049546C).
2. The render manager (0x0014Bxxx; 0014B788 / 0014C108 / 0014C804 are draw variants) calls the passes. Passes include 0014A40C, 0012D9A8..0012EC04, 00130C1C, 001321B8, 00132784, 002C30E8 and 002E39E8. Each pass:
   - starts with `nngxSplitDrawCmdlist`,
   - memcpys a prebuilt environment block into the buffer,
   - then calls each object's virtual Draw, which appends PICA words.
3. Render targets are cleared with MemoryFill (003CB588 / 003CB5F0). Off-screen buffers are copied with BlockImageCopy (005FF064).
4. Finally `nngxAddB2LTransferCommand` (005FF018) resolves the render target to the display buffer, with tiled→linear conversion, format conversion and AA downscale. This happens in 0014B788 / 0014C108 / 0014C804 and in sead 004964F8.
5. Present happens in game 0032259C:
   - WaitCmdlistDone → StopCmdlist → ClearCmdlist.
   - Rotate **3 display buffers** for each of 0x400 / 0x410 / 0x401: ActiveDisplay + BindDisplaybuffer.
   - nngxSwapBuffers(both) → 003E34D8 writes the shared-memory framebuffer info.
   - Kick the next frame's lists (00322944 / 0032274C).
   - Then the HOME-menu / applet check.
6. Vsync: sead 00496238 loops on nngxCheckVSync until the configured interval has passed (+0x70), then calls nngxSwapBuffers. 0060188C (WaitVSync) is also used through 0048AE64.

Textures and meshes reach the GPU like this:
- **Data** is written by the CPU into FCRAM or VRAM-allocated memory:
  - VRAM allocator: 00499738 and 00600660.
  - Uploads: VRAM DMA (005FF314) after FlushDataCache, in 0023387C, 00233F4C, 003F3668 and 003F9AA4.
- **The GPU is told about the data** only through command words that hold physical addresses: texture regs 0x85-0x8x, attribute buffer regs 0x200+, and CMDBUF jumps.
- **Shaders** are `.shbin` files (gr default, nwfont RectDrawer) and the shader inside `nwh3d_DefaultShader.bch`. They are loaded through gr ShaderProgram (PICA VS code/uniform registers 0x2B0-0x2FF).

## 6. Recommended replacement boundary

Hard rules: no PICA/GSP emulation and a 64-bit build. In this game, the PICA
command buffer is *the* interface between the engine and the GPU, so **the boundary
cannot be "replace nngx"**. Stubbing nngx alone would leave every draw as unreadable
PICA words. The recommendation has three tiers.

### Tier A: replace L0 and L1 outright (mechanical, high confidence)

Reimplement all of the GSP client and the nngx functions above natively. Do not port
them.

| nngx function(s) | Native semantics |
|---|---|
| Initialize, Gen/Bind/Storage/Delete/ClearCmdlist | Bookkeeping only. Keep a CPU scratch buffer per list so CURRENT_BUFADDR / MoveCommandbufferPointer stay valid for any producer you haven't replaced yet. The words are written and then **discarded**, never interpreted. |
| RunCmdlist / WaitCmdlistDone / StopCmdlist / GetCmdlistParameteri / Split / Flush | Run = execute the recorded *high-level* GL draw list (Tier B). Wait = no-op or glFinish/fence. Parameteri returns the scratch-buffer values. |
| MemoryFill | glClear of the GL render target that owns that address range. |
| B2LTransfer | Blit the render-target FBO into the platform screen target (400x240 top, 320x240 bottom). The AA downscale becomes a filtered glBlitFramebuffer. |
| BlockImageCopy / VramDma / L2B | memcpy into the shadow allocation, then mark the GL texture or buffer that aliases the destination as dirty. |
| Display buffers / ActiveDisplay / SwapBuffers / CheckVSync / WaitVSync | Map onto platform.h: SwapBuffers = present both targets and SDL swap. The vsync counter is a host 60 Hz counter, so sead's interval logic works unchanged. Ignore 0x410 (right eye) or alias it to 0x400. |
| GetVramStart/End, 001139F8 GetPhysicalAddr | Give "VRAM" as a host heap. GetPhysicalAddr must return a value that maps back to a host pointer. On 64-bit, use a 32-bit handle/offset table. |

GSP: drop entirely. HOME/applet checks are outside graphics.

### Tier B: replace the command producers with GL-recording equivalents (the real boundary)

Hook every function that writes PICA words. Each replacement records a structured
draw/state record into the native command list instead.

1. **nn::gr::CTR MakeCommand family** (about 13 functions, §4). These are pure
   value-object → word serializers, so the GL equivalent is direct: viewport,
   scissor, blend/depth/stencil, texture-unit setup, combiner → generated GLSL,
   ShaderProgram + uniforms. This is the cleanest seam in the binary. Priority 1.
2. **Engine render-state wrappers** 0048AD08..0048AFEC and 0057EAC0. Once the gr
   functions are replaced, these work unchanged.
3. **nw::h3d model / material / shape draw**. Replace at the level of "draw this
   shape with this material and these matrices", i.e. the virtual Draw that ends in
   003CC090 subroutine calls and 00568224 / 00568798. **This needs a native BCH
   loader** that builds GL VAOs, textures and material state.
   - BCH materials store much of their state *only* as PICA command blobs.
   - Decoding those blobs once at load time into a material struct is asset
     conversion, not runtime GPU emulation, but it touches PICA register semantics.
   - **Decision needed from you:** is load-time decoding of BCH material command
     blobs acceptable? If not, all material state has to be rebuilt from the
     structured BCH fields plus per-shader conventions.
4. **nw::lyt, nw::font RectDrawer, nw::eft, sead PrimitiveRenderer**: replace their
   draw entry points with a 2D/particle renderer on GL.
5. **Hand-written PICA in game passes / filters** (JSON layer L4b/L4d + scan hits):
   replace them one by one. Many are fullscreen filters or fog/light LUT uploads.

### Tier C: keep as decompiled C (no change)

- sead framework (L3) and the game framework / render manager (L4) orchestration:
  frame loop, pass order, display-buffer rotation, method trees.
- These only call nngx and virtual Draws, so they run on top of Tier A and B.
- Exception: the passes' memcpy of prebuilt env blocks (e.g. 0012D9A8 copying
  `+0x183c` / `+0x1840` words). Those blocks were built at init by gr/h3d producers;
  with Tier B in place they become recorded native state blocks.

Suggested order:
1. Tier A, with words discarded: boots to a black screen with correct frame pacing.
2. gr MakeCommand + MemoryFill + B2L: clears and 2D.
3. nw::font / nw::lyt: UI.
4. BCH / h3d.
5. Effects and hand-written passes.

## 7. Open questions / what is guessed

- **SDK names**: exact names for 005FFF7C / 005FFC18 / 005FEF5C / 005FF104 / 005FF2A8 / 005FFBDC / 00601450 are guesses. The behaviour notes in the JSON are more reliable than the names.
- **Location of nw::h3d**: its code range is not pinned. Next step: find the BCH header parser (magic "BCH") and the relocation routine that patches physical addresses into command blobs.
- **nn::gr range**: only the functions listed are confirmed by register content. 00568224 / 00568798 may belong to h3d.
- **0x0049A944..0x0049AD90 vs 0x00322xxx**: the second set of framework present paths looks like a duplicate (possibly a stereo or alternate framework, or sead base vs Zelda override). Which one is live at runtime is not determined.
- **Hand-written PICA scan**: the per-function PICA-header scan (literal-pool heuristic) has false positives (e.g. 00237DA8, 00506068, which repeat 0x100). Treat the scan as hints only.
- **Indirect calls**: the call graph lacks indirect calls, so render-object Draw implementations (vtable +0x10) are not enumerated. A vtable scan is needed to list all PICA writers completely.
- **GetPhysicalAddr inlining**: 001139F8 may also be inlined elsewhere (constants 0x0C000000 / 0x07000000). Any producer that keeps physical addresses will need a handle scheme on 64-bit.
- **Interrupt thread**: the GSP interrupt / event thread (003E376C relay queue) re-enters the 0060226C dispatcher on PSC0/PSC1/PPF/P3D completion. The native backend should run requests synchronously instead.
- **GSP framebuffer path**: SetBufferSwap and WriteHWRegs have no direct callers. They are probably unused, or used via pointers during LCD init.
