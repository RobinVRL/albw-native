# Wall merging: how Link (and Yuga) become a painting

How the wall painting works, from the button press to the picture on the wall. USA addresses
(EU in brackets where the ARM was read). Fixed in BOOT_LOG 160aw.

On the 3DS: face a wall, press A. Link sinks into the wall and moves left / right along it as a
flat painting; he wraps around corners and steps out with A. Yuga, the Eastern Palace boss, uses the
same code to travel along the walls of his room.

## The pieces

| Piece | What it does | Code |
|---|---|---|
| Speed | Link's speed for the frame; in a wall: + right / - left (stick x) | `002D5ADC` (`native/compilefix/func_002D5ADC.c`) |
| Owner step | Fills the walker input each frame (position, facing, step along the wall) | Link `00342C24`; Yuga `0015D6F4` |
| Wall walker | Moves along the wall, decides free / merged / leaving, builds the strip | `001EA96C` (`native/compilefix/func_001EA96C.c`) |
| Painting component | Owns the painting model and the render texture | `003441F0` -> `002D34B4`; setup `002D175C` |
| Flat texture | Link's sprite parts drawn into a 128x128 texture each frame | render-texture pass `002C30E8` |
| Painting model | The quad strip on the wall; class `002C2D00`, mesh setup `002C1754` | component +8 |
| Strip buffers | Two buffers (vertices, indices, GPU command block): one drawn, one being filled | model +0x17C (2 x 0x28), current +0x1CC, count *(+0x178) |
| Draw item | Material, model matrix, CALL of the strip's command block | `00171510` (`native/game/func_00171510.c`) |

## One frame, merged

1. **Speed.** `002D5ADC` reads the stick. In a wall its x picks the direction: right = +speed,
   left = -speed, centred = no change.
2. **Owner step.** `00342C24` copies that into the walker input: +0x30 = step along the wall,
   +0x34 = step up / down. It calls the walker; if the walker says "leaving" (mode 2) while moving,
   it calls it again with no step (Link stops at the end of a wall instead of falling out).
3. **Walker.** `001EA96C` (markers `WALKER:` in the file). Mode byte at walker +0x3BAE:
   0 = free, 1 = merged, 2 = leaving. While merged it cuts the wall Link covers into segments
   (walker +0xA4 count, 0x9C bytes each, start +0x70 / end +0x74 along the wall): the segment under
   Link, extended across neighbouring wall faces by `0064CB28`. Segments with no length are dropped
   (`WALK_SEG_HAS_LENGTH`).
4. **Strip.** `002C1658` swaps the two strip buffers; the walker turns each segment into quads
   (`00570D00`, `004324A4`) and `0043285C` finishes the block (triangle count at *(model+0x178)).
5. **Texture.** `002C30E8` draws Link's flat sprite into the 128x128 render texture.
6. **Draw.** `00171510`: material (`001708A0`), model matrix (model +0x1F0) to uniforms, patch the
   vertex count into the strip's command block, CALL the block.

## How the port draws it

The port's renderer does not run raw GPU words; it runs recorded ops (decoded model blocks, live-
translated effect blocks, native producers). The painting needed three things for that:

- **The strip's command block** is built in the heap every frame, so it was never decoded.
  `h3d_translate_call` (`native/sdk/h3d.c`) translates such a block when the renderer's CALL finds
  no decode: blocks with their own vertex arrays and draw, and no markers. Not cached (the contents
  change every frame); its vertex layouts are marked dynamic (re-uploaded at each draw).
- **Three vertex buffers.** The strip keeps position, texture coordinate and a third attribute in
  separate buffers; the renderer used only the first. Vertex layouts now keep up to four buffers
  (`H3dVtx` baddr / bstride, `native/render/h3d.h`), uploaded one after the other into one GL buffer.
  The new fields sit at the end of the struct, behind a marker word: save states restore layouts
  byte for byte, and older states have the shorter struct.
- **The texture bound after load.** `002D175C` points the material's texture words at the render
  texture after the model was decoded. `h3d_texture_word_check` (called by `00171510` with the word
  at model +0x1E8) re-decodes that block's texture unit when the word changes.

## Yuga

Yuga's driver `0015D6F4` fills his walker input (header comment in that file). His states (table at
his object +0x8D4 / +0x8D8 / +0x8DC): 5 picks the nearest wall, 6 flies in, 7 waits in the wall
(`0015C114`), 10 travels along the wall path (+0x9B4, the room's octagon), 11 leaves the wall when
Link is farther than 7.0. In state 7 the walker is not run (his painting stays still); `0015FF78`
starts the travel (state 10) when Link comes near the wall point closest to Yuga. (State 7 also has
a forced start after 100 frames, gated by `0015B650`; with Link standing still at the south edge it
did not fire in testing.) So he moves along the walls as the player moves around. The camera is the room's top-down view: his painting on the
north wall is cut off at the top of the screen in the reference video too.

## Port bugs fixed here (BOOT_LOG 160aw)

- `001EA96C`, four sites: a segment is kept when start - end is beyond +/-2^-23 (ARM: bit test of the
  difference). The text cast the float's value to an int, so every short segment was dropped and
  the strip stayed empty. Now `WALK_SEG_HAS_LENGTH`.
- `001EA96C` (EU 1EEA3C): the strip reset clears the rebuild flag (+0x3DC0) and the segment count
  with the same zero register; the text stored 1 in the flag.
- `00171510`: the model matrix was written as raw GPU words, which the renderer ignores: recorded as
  a uniform op now.
- `002D5ADC`: the left / right test came out as `NAN(x) || NAN(0)` (always false): Link moved the
  same way for both directions and could not walk back from the end of a wall.
- Renderer: runtime CALL blocks, several vertex buffers, texture bound after load (above).

Earlier fixes in the walker: stale stack x / y reads (`sp_x`), the wall slice crossing test (EU
1EC620..1EC6EC), doubles through a bit cast (`ALBW_AS_U32`), and the painting resource's bounding
spheres (`0016DAD0`, 160av).

## Debugging

- `ALBW_WALK_TRACE=1`: wall faces tested, merged position / step per frame (`seglist`, `stay`),
  segment copies.
- `ALBW_CALLX_TRACE=1`: runtime CALL blocks and whether they were translated.
- `ALBW_TEXWORD_TRACE=1`: the painting's texture word and the re-decode.
- `ALBW_H3D_CALL_TRACE=<lo>-<hi>`: blob CALLs in an address range.
- Test route (castle save fixture + Hyrule save): `ALBW_PRESS='1800:START,2200:A,2700:A'`,
  `ALBW_ROUTE="at 3300;scene DungeonEast 1 0;wait 300;goto -6 -4.0 0.3;hold CUP 60;wait 10;press A 6"`
  merges Link into an Eastern Palace wall; then `hold CLEFT n` / `hold CRIGHT n` walks him.
