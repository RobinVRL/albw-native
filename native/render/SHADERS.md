# Vertex shader catalogue (USA addresses)

The port never translates PICA shader bytecode. Each game vertex program gets a **hand-written
GLSL 330 program** in `render.c` (`VS_SRC[RPROG_*]`). That program keeps the game's uniform
interface: float registers `c[0..95]`, the bool mask `b` and input registers `v0..v11`. A replaced
producer then only has to name the program and pass the uniform values the game computed
(`ROP_PROGRAM`, `ROP_VS_FLOAT`, `ROP_ATTRIB`, `ROP_DRAW`).

The fragment side is shared by all programs: one GLSL program implements the PICA fixed-function
fragment pipeline from uniforms (6 combiner stages, combiner buffer, alpha test). The game state
reaches it through `sdk/gr.c`.

## How uniforms are written

- Per draw, uniforms are written as `[0x80000000|reg, hdr 0x000F02C0]` (select float register,
  32-bit mode), followed by a burst to register 0x2C1. Each vec4 is sent in w,z,y,x order.
  - A 3x4 matrix is 3 registers (its rows); a 4x4 matrix is 4 registers.
  - The GLSL helpers `m3(r, v)` and `m4(r, v)` take the same row layout.
- **Uniform locations:** the game looks them up by name in the DVLE uniform table:
  - functions: 00562DFC (ShaderLite), 005616A0 (Shader);
  - each location is an 8-byte struct `{u8 useGS, u8 kind (1 input, 2 float, 3 int, 4 bool), u8 startReg, u8 endReg, char *name}`;
  - draw code reads `startReg` at loc+2.
- **Register numbers:** they come from each shader file's DVLE table, not from the code. Before
  writing each GLSL body, dump the DVLE tables from the four shader resources below (data, not
  code) to fix the register numbers.

## Bind sites (nn::gr, replaced in `sdk/gr.c` -> `ROP_PROGRAM`)

| USA | what | object |
|---|---|---|
| 00562B24 | ShaderLite full bind: code upload 0x2CB/0x2CC, opdescs, setup blocks, bools 0x2B0 | ShaderLite: `[0]` VS idx, `[1]` GS idx (-1 none), `[3+i]` DVLE pointers |
| 00562F64 | ShaderLite bind, no code upload | same |
| 005613D4 | Shader full bind (+ GS: 0x29B/0x28F/0x280) | Shader: DVLE pointers at `[4+i]` |
| 00561808 | Shader bind-only | same |
| 003CC530 -> 003CC61C, 003CA380 -> 003CA75C | Shader::Init: parses the DVLE into setup blocks (output map 0x50-0x56, entry 0x2BA, attribute permutation 0x2BB/0x2BC) | not replaced: init-time data only |
| 00113388 | vertex-input setup: attribute buffers 0x200+, 0x232-0x235, 0x242, 0x2B9, 0x2BB | not replaced yet (draw producers) |

`ROP_PROGRAM.key` is the DVLE address. All binds currently map to `RPROG_GR_DEFAULT` (the generic
`VS_MVP` body). The planned mapping: each loader below records its DVLE addresses ->
`RPROG_*`.

## Programs

### 1. `Shader/gr_default_shader.shbin` -> `RPROG_GR_DEFAULT`

- **Loader:** 002C2610 (high). It creates three ShaderLite programs: object+0x14 (VS0), +0x128FC
  (VS1), +0x251E4 (VS2). Bind blocks are built with 00562B24 and with 00562F64 ×3. The pass is
  002C30E8.
- **VS1 uniforms:** `user`, `proj`, `view` (float); locations at object+0x37ADC / +0x37AE4 / +0x37AEC.
  This is a world-space mesh: `pos = proj · view · user · v`.
- **VS2 inputs:** `Position`, `Color`, `TexCoord0`, looked up in 002C02C4 (the field "slit"
  transition: Layout/Field.ctpk, SlitS/SlitL.tga). This is a position/colour/uv quad shader. Medium.
- **Per-draw writes:**
  - 002C3870 writes a 3x4 SRT matrix to `user` (medium), then draws via 005681C0.
  - 002C1754 (debug mesh) writes c6 = 0 and c7..c8 constants, plus 0x2B0 and attributes via 00113388.
  - 0054391C (from 002C0E38) writes a 3x4 plus RenderState (00561C34) and combiner (00563918).
  - 00130C1C / 00131244 write a 4x4 then a 3x4 (proj, view; low).
- **GLSL to write:** `gl_Position = pica_out(m4(proj, m3view(m3user(v0))))`. The colour/uv
  pass-through follows the DVLE output map.

### 2. sead PrimitiveRenderer `World/Shader/primitive_renderer_ctr.bsm` -> `RPROG_PRIMITIVE`

- **Loader:** 004ECA48 -> 004950E8; init in 004970E8 (high). There are two programs:
  - VS0 (no GS): locations at this+0x0C.. are `wvp`, `user`, `color0`, `color1`, `uv_src`,
    `uv_size`, with inputs `Vertex`, `TexCoord0`, `ColorRate`.
  - VS0 + GS1: the same names, plus `dmp_Line.width` (the standard DMP line geometry shader).
- **Per-draw (004979CC):**
  - `wvp` = 4x4 proj (+0x48B4) × view (+0x4884); `user` = static 4x4.
  - Line mode: `dmp_Line.width` = (2.0, w·h, h, w).
  - `color0` and `color1` are constants. The combiner is set with 00563918 (replaced).
- **Shape draws:** 00496A28 / 00496ABC / 00496F50 write `user` (3x4), the colours (through 004A1828)
  and `uv_src` / `uv_size`.
- **GLSL to write:**
  - `pos = wvp · user · Vertex`
  - `color = mix(color0, color1, ColorRate)`
  - `uv = uv_src + TexCoord0 · uv_size`
  - Lines (GS) need a CPU or VS expansion of each line into a quad, since GL 3.3 core has no wide lines.
- **Use:** debug quads, boxes, spheres and lines. High.
- **Done:** GLSL `RENDER_VS_PRIMITIVE` (render/prim.c; registers from the .bsm DVLE: c0-c3 user,
  c4-c7 wvp, c8 color0, c9 color1, c10 uv_src, c11 uv_size, v0 Vertex, v1 TexCoord0, v2
  ColorRate). Producers replaced in sdk/prim.c: 004979CC (mode / program / wvp / texture /
  combiner), 004968B4 (vertex arrays + indexed draw), 00496A28 (quad), 00496ABC (textured quad),
  00496F50 (sphere). The line program (GS, `dmp_Line.width` c67) has no surviving caller (state
  recorded only). Test: render/test/prim_test.c.

### 3. `Shader/nwfont2_RectDrawerShader.shbin` (nw::font and nw::lyt) -> `RPROG_FONT_RECT` (done)

- **Program:** DVLB in `EU/RegionBoot.szs` (DVLE symbol `nwfont2_rectdrawershader_version_3002`,
  228 words, main at 109). Hand-written GLSL: `RENDER_VS_FONT_RECT` in `font.c` (the header comment
  there has the full register map).
- **Loader:** 00503A8C -> 003FDFF4 -> 00420574 -> 004205A4, replaced in `sdk/lyt.c`: same memory
  layout (block A sized from the shbin, block B, 23 x 6 vertex buffer `vec4(rect, k, corner x,
  corner y)`), block A = pinned markers (program + v0, default blend, alpha test off, combiner
  stages 1-5, buffer updates off) replayed by DrawBegin 00420028 / 00420074.
- **Uniforms** (all uploaded from memory, so every register holds (m3, m2, m1, m0) and the program
  reads `.wzyx`): c0-c3 projection, c4 stereo parallax, c5 DVLE constant (0, 1, 2, 0.5), c6-c8
  per-texture vec4 (00403360), c9-c31 rect records (x modelview index, y geometry index,
  z texcoord index, w alpha or colour index; flag bits as binary fractions), c32-c95 pool
  (modelview rows, geometry (size, pos), texcoord sets, corner colours, glyph italic / scale).
  Writer 0041F3C0 (replaced -> ROP_VS_FLOAT). Bools: b0 glyph path, b1..b6 texcoord rotate / flip,
  b2 also per-draw colours in the glyph path (004018A8, 0041F970). i0 (0x2B1, 004010C8) is not
  read by the program.
- **Paths:** pane (b0 = 0): geometry x modelview, stereo offset, white x alpha or bilinear corner
  colours, three texcoords (corner set, texture window / fit flags, 2x4 matrix or projection);
  glyph (b0 = 1): scale / offset / italic, (u0, v0, u1, v1) corners, top / bottom colour.
- **Draw:** 0041F54C / 0041F43C -> ROP_DRAW (6 vertices per rect).
- **Use:** every UI glyph and layout pane quad. Test: `render/test/font_test.c` (real MessageFont,
  real BFLIM). High.

### 4. `Shader/nwh3d_DefaultShader.bch` and shaders embedded in any `.bch` (nw::h3d) -> `RPROG_H3D_DEFAULT`

- **Bind:** 003FCCF8 -> 003FC8DC -> 003CA380 init, then blocks built with 005613D4 (full) and
  00561808 ×2 (bind-only), all replaced.
- **Material uniforms (looked up by 005616A0):** `TexMtx0..2`, `TexTran`, `TexcMap`, `MatAmbi`,
  `MatDiff` (shader+0xCC..+0xFC).
- **Model uniforms (0050525C):** `WrldMtx`, `NormMtx`, `UnivReg`, `HslGCol`, `HslSCol`, `HslSDir`,
  `MatAmbi`, `MatDiff`.
- **Per-draw writes:**
  - 00565204 is the material uniform writer (called through 001708A0), not a combiner. It writes
    the texture matrices, `MatAmbi` = (k, ambient rgb/255) and `MatDiff`.
  - 00170378 and 00518694 write `NormMtx` and the hemisphere lighting (`HslGCol` / `HslSCol` / `HslSDir`).
  - 00170558 and 00387E58 write the model matrix to `UnivReg` (unskinned), or identity to `WrldMtx`.
  - 005683D0 writes the bone palette as N × 3x4 from `UnivReg` (bit 0: × inverse bind).
  - 00568224 writes one 3x4 + bools + draw registers; 00568798 writes bools + draw registers.
- **Not found yet:** where projection and view are written.
- **GLSL to write:**
  - skinning: up to N bone 3x4 matrices from `UnivReg`, indexed by bone attributes;
  - normal transform; hemisphere lighting `mix(HslGCol, HslSCol, dot(N, HslSDir))` into the colour output;
  - texture-coordinate generation from `TexMtx*` and `TexcMap`.
- **Use:** every 3D model. Names and registers: high.

### 5. nw::eft particles (`%s.ptcl`, 002E32DC / 002E3494) -> `RPROG_EFT` (GLSL done, producers not yet)

- **The programs are not DVLB files:** JackAll.ptcl (EU/RegionBoot.szs, SPBD v3) stores 23
  vertex programs as baked command streams (code 0x2CB/0x2CC, opdescs 0x2D5/0x2D6, entry 0x2BA,
  output map 0x4F-0x56: o0 position, o1 colour, o2 texcoord 0, o3 texcoord 1; constants c0 =
  (0, 0.5, 1, 2), c81 = (pi, 2 pi, 1, 256), c93-c95 sin/cos polynomial) in the section at file
  offset 0x3A03A0. **Bind site:** 003F0080 copies the emitter's program stream (emitter +0x254
  / +0x25C words) into the command list. Families (read by hand): billboard, Y billboard,
  polygon XY, polygon XZ, directional (view z or emitter y axis), each with / without particle
  rotation and instancing; stripe (entry 0x79, 3 programs) not written.
- **Per-particle block** (003EF31C...): c1 colour, c2 (scale xy, texture rotation 0/1), c3 / c4
  texture 0 / 1 offset + flip terms, c5 position, c6 velocity, c7 rotation, c8-c10 emitter rows;
  c82 emitter colour, c83 texture repeat, c84 (pivot xy, depth offset). Vertex buffer (003F3854):
  8 particles x 4 corners (x, y, 10 n). Draw kick: the draw-type function table called after
  each particle in 003F5734 / 003F43DC / 003F4D34 / 003F5498, flush 003EF244.
- **Done:** hand-written GLSL `RENDER_VS_EFT` (render/effects.c, variant in `b`), test
  render/test/eft_test.c (synthetic particles through the game's register interface).

- **Per pass, 003EF0F8** (from 002E39E8 and 0012E7EC) writes fixed registers:
  - c85 = eye position;
  - c86..c89 = 4x4 (projection?);
  - c90..c92 = 3x4 (view?).
- **Per particle:** 003EF31C / 003EF924 / 003F0080 / 003F06D8..003F31AC (one per emitter type)
  write blocks of 10 vec4 at c(1 + 10n).
- **Bind site:** not found (low). 005647D4 (replaced) sets the constant colours of the eft combiner.
- **GLSL to write:** a billboard expansion from the per-particle vec4 blocks.

### 6. GL driver default state

- 00592430 (sead init -> nngxInitialize path) writes 0x24A, 0x251..0x254 and 0x2BF. It is
  reached only from the replaced nngxInitialize, so it never runs natively.

## Status

| program | GLSL | producer replaced |
|---|---|---|
| RPROG_CLIP (renderer tests / blits) | final | n/a |
| RPROG_GR_DEFAULT | generic placeholder (`VS_MVP`) | binds yes (00562B24/00562F64); uniforms and draws no |
| RPROG_PRIMITIVE | final (prim.c) | yes (sdk/prim.c): 004979CC, 004968B4, 00496A28, 00496ABC, 00496F50. Test: render/test/prim_test.c |
| RPROG_FONT_RECT | final (font.c) | yes: loader 004205A4, uniforms 0041F3C0, draws 0041F54C/0041F43C, text 0041E948/0041F970, lyt materials 00401160.. (sdk/lyt.c) |
| RPROG_H3D_DEFAULT | final, 15 DVLB variants x 4 programs as #defines (render/h3d.c `RENDER_VS_H3D`) | yes (sdk/h3d.c): model command blobs decoded once at ResFile setup (003FCCF8) and run on ROP_CALL; camera 00130C1C/00131244, element 00170558, meshes 005683D0/00568224/00568798, material uniforms 00565204, NormMtx 00170378; DVLE binds aliased. Fragment lighting: render/fraglight.c (hand-written GLSL, LUTs decoded at load) + sdk/light.c producers. Not yet: fog, 00387E58/00518694/00171510/002C3870. Test: render/test/h3d_test.c |
| RPROG_EFT | final for 20 of 23 programs (effects.c; stripe family missing) | no: 003F0080 bind (program stream copy), per-particle writers 003EF31C / 003EF924 / 003F06D8.. and draw-kick table not replaced yet. Test: render/test/eft_test.c |

## Fragment lighting (render/fraglight.c, sdk/light.c)

Not a vertex program, but part of the fragment side of the nw::h3d programs: the materials take
their colour from the 3DS fragment-lighting unit (combiner sources fragment primary / secondary).
- **State** (ROP_FL ops): light environment (enable, light count / permutation, LUT config,
  Fresnel selector, bump mode / texture / renormalise, clamp highlights, per-light spot /
  distance-attenuation enables, global ambient), lights (colours, directional, two-sided,
  geometric factors, view-space position, spot direction, distance attenuation scale / bias),
  LUT input abs / selector / scale, LUT bindings (ids 0 D0, 1 D1, 3 FR, 4 RB, 5 RG, 6 RR, 8+i
  SP, 16+i DA).
- **LUTs:** BCH LUT sections (e.g. the boot's Lut_Jack in EU/RegionBoot.szs) are decoded when the
  file is set up (sdk/h3d.c: 256 entries of value + delta) and referenced by sampler blob
  address; the GL side keeps one 256 x 24 RG32F texture (row = LUT id).
- **Producers replaced (sdk/light.c):** 005626C0, 00562930, 00562978, 00562A88, 003CBC1C,
  0056497C, 00565A10, 00565904, 005655D0, 00564C14, 00565B8C, 003FC2F8, 00567734, 00567904,
  00567AFC. Material LUT input words (params +0xA8) are decoded at load.
- **GLSL:** `RENDER_FS_FRAGLIGHT`, compiled into the h3d programs only (they output v_tangent).
  Shadows are not applied (no shadow maps on this path).
