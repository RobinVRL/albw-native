# LibMessageStudio (LMS) in ALBW

Reference: `refs/3dsdecomp_redpepper/Library/LibMessageStudio` + `Symbols/LMS` (SM3DL). That
LMS is an older, smaller build: only InitMessage / GetTextNum / CloseMessage, the memory hooks
and SearchBlockByName are written out, and GetText / GetTextIndexByLabel / GetTextByLabel are
declared. ALBW links a larger LMS that also handles flow files (`MsgFlwBn`) and project files
(`MsgPrjBn`). The whole library sits at EU 0011E668-0011F320; USA addresses are the same.
Everything below was checked against the EU ARM code (armdis.py). Names that are not in
redpepper are marked medium or low confidence.

## Layouts (ARM, 32-bit words)

| struct | offsets |
|---|---|
| LMS_BinaryBlock (16 bytes) | +0 data (= file + off + 0x10), +4 type[4], +8 u32 size, +0xC u16 (header word at off+8) |
| LMS_Binary (0x10, common) | +0 file, +4 u32 fileSize (file+0x12, unaligned), **+8 u8 encoding** (file+0xC; 0 UTF-8, 1 UTF-16, 2 UTF-32), +0xA u16 numBlocks (file+0xE), +0xC blocks |
| LMS_MessageBinary (0x20) | +0x10 LBL1, +0x14 TXT2, +0x18 ATR1, +0x1C TSY1 (block index, -1 = absent) |
| LMS_FlowBinary (0x1C) | +0x10 FLW3, +0x14 FEN1, +0x18 REF1 |
| LMS_ProjectBinary (0x40) | +0x10 CLB1, +0x14 CLR1, +0x18 ALB1, +0x1C ATI2, +0x20 ALI2, +0x24 TGG2, +0x28 TAG2, +0x2C TGP2, +0x30 TGL2, +0x34 SYL3, +0x38 SLB1, +0x3C CTI1 |
| hooks | data_007166D8 = {u32 alloc(size), u32 free(ptr)} |
| label block | u32 numSlots; {u32 count, u32 offset}[numSlots]; entries: u8 len, name[len], u32 value |
| hash | h = h * 0x492 + (signed char)c, slot = h % numSlots |

### Differences from redpepper

- `LMS_MessageEncoding` takes **1 byte** at +8 (armcc's packed enums), with numBlocks at +0xA.
  The reference C has a 4-byte enum and does not say so; its offsets only match under armcc.
- The reference `LMS_BinaryBlock` has `u16 unk` at +0xC. In ALBW that field is the u16 at
  block header +8.
- `LMSi_AnalyzeMessageBinary` (0011F064): the magic compare is an 8-iteration loop whose result
  is thrown away, so a wrong magic is never rejected.
- `LMSi_SearchBlockByName` matches the reference exactly, including the u16 counter and the
  `nop` before `beq`.
- ALBW-only API: flow (FLW3/FEN1/REF1), project (colours CLR1, attribute info ATI2, styles
  SYL3, CTI1), the label hash and GetLabelByIndex, GetTextSize (tag-aware: 0x0E tag with a
  u16 param size, 0x0F tag end = 6 bytes), and error codes -2 (no LBL1), -4 (no FLW3), -5 (no
  CLR1), -10 (no FEN1), -11 (style value -1).

## Function map (36 entries, also in `identified_lms.json`)

| USA | name | conf | source the build uses (i386) | verdict |
|---|---|---|---|---|
| 0011F054 | LMS_SetMemFuncs | high | matched gpt15 (`long long` param) | i386 OK; **x86-64 broken** (stores rdi only, so the free hook is lost) |
| 0011F1D8 | LMSi_Malloc | high | matched gpt15 (`void`) | i386 OK only through clang's tail `jmp`; 64-bit Ghidra calls the hook with no arguments (works only because rdi is never touched) |
| 0011F188 | LMSi_Free | high | matched | OK (32-bit struct of FPs; wrong size on 64-bit) |
| 0011F064 | LMSi_AnalyzeMessageBinary | high | native/game (stop 40) | OK on i386 (int-to-pointer casts) |
| 0011F2BC | LMSi_SearchBlockByName | high | matched ds1 | OK |
| 0011F1E8 | LMSi_MemCmp | high | matched ds1 | OK |
| 0011F278 | LMSi_MemCopy | medium | matched | OK |
| 0011F198 | LMSi_GetHashTableIndex | medium | matched v2 | OK; /0 traps on x86 (ARM: remainder = h) |
| 0011EE2C / 0011EDA4 / 0011EED0 | LMS_InitMessage / InitFlow / InitProject | high | matched ds1 | OK on i386 (`(u32)ptr` stores) |
| 0011E674 / 0011F168 | LMS_CloseMessage / CloseFlow | high/med | matched | OK on i386 |
| 0011EC80 | LMS_GetTextNum | high | matched | OK on i386 (struct with a pointer member: wrong offsets on 64-bit) |
| 0011EB40 | LMS_GetText | high | matched | OK |
| 0011EBA8 | LMS_GetTextIndexByLabel | high | matched sol1 | OK |
| 0011E9EC | LMS_GetLabelByIndex | medium | Ghidra v4 | OK |
| 0011EC9C | LMS_GetTextSize | medium | Ghidra v4 | OK |
| 0011EACC / 0011EAA4 / 0011E770 / 0011E898 / 0011E974 | flow: node num / node / branch table / entry by label / raw byte | med/low | matched + v4 | OK on i386 |
| 0011E824 / 0011E7CC | project: GetColorNum / GetColor (RGBA) | medium | matched / v4 | OK |
| 0011E694 / 0011E6EC / 0011E6B0 | project ATI2: num / type / offset | medium | matched | OK |
| 0011EB24 / 0011EAE8 / 0011EA68 / 0011E9A4 / 0011E728 | project SYL3: num / region width / line num / font / base colour | medium | matched | OK |
| 0011E87C / 0011E840 | project CTI1: num / string | low | matched | OK |
| 0011EB7C | game: holder->getTextIndexByLabel(SafeString&) | high | matched gpt23 (`void`) | **returns the index on ARM** (falls through into 0011EBA8). The i386 caller gets eax only by luck |

Not LMS: 0011E4B4, 0011E55C, 0011E5E0 and 0011E668 (resource tables with 32-byte entries
and a u16 count at +6; 0011E55C uses hash 005FEE34 and bsearch 006019B8) sit just before
the library. 0011F324 / 0011F3A4 are game singletons.

Game-side holders (MsgStdBn kinds, stop 40):

| USA | role |
|---|---|
| 00490988 | message holder init: SetMemFuncs(00490A04, 00490A00), m4 = InitMessage, m8 = GetTextNum; if m8 < 0, CloseMessage |
| 00494104 | flow holder init: InitFlow, m8 = FlowNodeNum; if m8 < 0, CloseFlow |
| 00494194 | flow holder close |
| 00490724 | project holder: InitProject and the colour, ATI2, SYL3 and CTI1 queries |
| 005826A4 / 00582858 / 0057E9F4 / 0057EA10 | message text queries (index by label / text / size / label by index) |
| 0030A0A4 / 0030A5B4 / 0030BCD4 / 0030BE08 / 0030CC80 | flow (event) interpreter |

The boot agent's stop-40 overrides were checked against the ARM: 0011F064, 00490988 and
00494104 are correct. 00490988's "first section value" is the TXT2 text count, and 00494104's
is the FLW3 node count (u16), not a section accessor.

## Written (not linked): `native/refs/lms/`

`lms.h` holds the layouts and the shared hash-label lookup. There are 22 `func_<USA>.c` files:
0011F054, 0011F1D8, 0011F188, 0011F064, 0011F2BC, 0011F1E8, 0011F278, 0011F198, 0011EE2C,
0011EDA4, 0011EED0, 0011E674, 0011F168, 0011EC80, 0011EB40, 0011EBA8, 0011E9EC, 0011EC9C,
0011EACC, 0011EAA4, 0011E898, 0011EB7C. All take and return 32-bit game words (gp-style,
low-4GB), use no int-to-pointer casts, and return the ARM's r0 where the matched sources are
`void`. `test/run_tests.sh` compiles each with `-Werror` for -m32 and -m64 and runs
`lms_test.c`, which builds synthetic MsgStdBn (UTF-16 with tags), MsgFlwBn and empty MsgPrjBn
files in low memory. It checks the hash (incl. signed chars and /0), parsing, label lookup,
text, size per encoding, label by index, the wrapper, and alloc/free counts. 43 checks pass on
both targets.

## For the boot agent

1. **i386 boot path: nothing blocks.** The LMS sources the i386 build links are correct. The
   one fragile spot is 0011EB7C, which is `void` but returns the 0011EBA8 result in eax by
   luck. If text-by-label lookups (005826A4) misbehave, link `native/refs/lms/func_0011EB7C.c`.
2. **64-bit build: link the whole `native/refs/lms/` set.** Matched 0011F054 drops the free
   hook on x86-64, so the first LMSi_Free (for example 00490988's failure path, or any
   CloseMessage) jumps to 0. The 64-bit build (`build/decomp64/report.json`) takes 0011EC80,
   0011EACC, 0011E674, 0011F168, 0011F1D8, 0011F188, 0011F2BC, 0011F064 and 0011EB7C from
   Ghidra text (ghidra_analyzed4), which uses int-to-pointer casts. The matched gpt15 variants
   that 64-bit still links (0011E694 etc.) declare structs with real pointer members, so their
   offsets are wrong on 64-bit.
3. Optional: 0011F198 on x86 traps for numSlots == 0 (ARM gives h). That only happens with a
   malformed LBL1/FEN1.
