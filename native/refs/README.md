# native/refs: what the external references gave us

The references are cloned read-only at `../refs/` and treated as untrusted
data. We read them for names, layouts and behaviour only. Nothing was copied, built or run. When
a reference and our ARM code disagree, the binary (`../albw-decomp-ai/rom/eu_code.bin`) decides.

| file | contents |
|---|---|
| README.md | this summary |
| task_factories.txt, tools/task_factories.py | every sead `TTaskFactory<T>` in the binary, with its constructor, converted return type and native override (stop 52) |
| identified.json, identify.md, tools/ | functions identified by name from the references (task 4) |
| lms.md, lms/, identified_lms.json | LibMessageStudio mapping and drop-ins (task 3) |
| tfh_notes.md | Tri Force Heroes (Tricord) engine facts for the route (task 5) |

## What each reference provided

| reference | used for | value |
|---|---|---|
| 3dsdecomp_redpepper Library/sead (SM3DL, 3DS) | Heap/Disposer/HeapPolicies/TaskID/TaskBase/TaskMgr/ListImpl/PtrArray/Random/SafeString headers and sources | high: same armcc ABI, layouts match ours except where listed below |
| 3dsdecomp_redpepper Library/LibMessageStudio, Symbols/LMS | MsgStdBn mapping (lms.md) | high |
| 3dsdecomp_redpepper Symbols/, DataSymbols/ | function names by shape (identify.md) | see identify.md |
| aboood40091_sead (NSMBU, Wii U 2012) | HeapMgr/Heap/FrameHeap/TreeMapImpl sources, static size asserts | high: same era. Heap field order matches; sizes differ (Wii U Heap 0x90, ours 0x74) |
| open-ead_sead (Switch) | cross-check of names only | low: newer API |
| zeldaret_botw | not needed for these tasks | - |
| IcefirePhoenix_Tricord_3DS_Plugin | tfh_notes.md | low: RAM-poking plugin; ideas transfer, addresses don't |

## Task 1: boot-path library checks (native/core, native/sdk/memory.c)

Every native/core function was written from the ARM code. The references serve as a second,
independent reading: the semantics agree everywhere, and the differences below are version
differences in which the ARM code is right and ours already follows it. No code change was
needed, and `native/core/test/run_tests.sh` still passes on -m32 and -m64.

| item | reference | ours / ARM | verdict |
|---|---|---|---|
| ListNode insertFront_/erase_, ListImpl popFront/popBack/clear | redpepper seadListImpl.cpp | identical semantics, including signed `mCount < 1` and zeroing prev/next | agree |
| PtrArrayImpl setBuffer/allocBuffer/checkInsert | redpepper seadPtrArray.cpp | identical guards (max <= 0, buf NULL) | agree |
| TreeMapImpl::insert (LLRB) | NSMBU seadTreeMapImpl.hpp | identical; the "vtable slot +8" core calls on a node replaced by an equal key is `TreeMapNode::erase_()` (virtual) | agree; name added here |
| SafeString max length | redpepper `cMaximumLength = 0x80000` | ARM caps at **0x40000** (0069190C, 00689894, 00691884 `cmp rN, #0x40000`) | reference differs (SM3DL is later); ours = ARM |
| SafeString::compare | sead: both NUL -> 0, a NUL -> -1, b NUL -> 1, then signed char compare | same (signed `ldrsb`) | agree |
| Random::init(seed) / init() | redpepper seadRandom: `x = 0x6C078965 * (s ^ s >> 30) + i` chain | same constants and order | agree |
| HeapMgr::getCurrentHeap / setCurrentHeap_ | NSMBU: `ThreadMgr::instance()->getCurrentThread()->getCurrentHeap()` | memory.c: TLS slot ThreadMgr+0x24, Thread+0x68 | agree |
| HeapMgr::findContainHeap | NSMBU: sRootHeaps, then sIndependentHeaps | ARM (0010E2A4) first tries the **current thread's heap subtree**, then the roots, then the independent heaps | version difference; ours = ARM |
| Heap::findContainHeap_ | NSMBU also takes the heap-tree lock | ARM 0010EF18 takes only the heap's own CS (the tree lock is held by the caller) | ours = ARM |
| Heap layout | redpepper: IDisposer 0x10, INamable(SafeString) 0x8, mStart, mSize, mParent, ... BitFlag16 mFlag + u16 tag | ARM Heap::Heap 0010DF58: **an extra vptr at +0x18** (secondary base; vtable group 006F7418+0x64), mStart +0x1C, mSize +0x20, mParent +0x24, mChildren +0x28 (offset 0x38), mListNode +0x38, mDisposerList +0x40 (offset 8), u8 mDirection +0x50, mCS +0x54, **BitFlag32** mFlag +0x70 (4 = initial, \|1 thread-safe) | redpepper header is wrong for ALBW (missing base, 16-bit flag); NSMBU's BitFlag32 is right; core's offsets = ARM |
| Heap vtable | redpepper: resizeBack commented out, tryRealloc present | ARM: tryAlloc +0x18, free +0x1C, resizeFront +0x20, **resizeBack +0x24**, no tryRealloc; getMaxAllocatableSize +0x3C, isInclude +0x40 (stop 1) | ours = ARM |
| enums (HeapDirection, TaskClassID::Type, TaskBase::Tag/State) | 4-byte enums in the references | armcc packs them into **1 byte** (`strb`/`ldrb`) | matters for every struct with an enum member |
| operator new(size, heap, align) / delete | sead seadNew: NULL heap -> current heap; delete -> findContainHeap -> free | memory.c identical | agree |

FrameHeap::create (004A107C): object size 0x7C (mHeadPtr +0x74, mTailPtr +0x78); NSMBU is 0x98
because the Wii U Heap is bigger. ExpHeap, FrameHeap and UnitHeap internals are still the
converted Ghidra C. memory.c replaces only the OS layer and new/delete. The boot has run
through heap creation since stop 44, and no reference check pointed to a bug in them.

## Task 2: task framework

Full layout and contract: `native/framework/README.md`, section "Task factories and the
TaskClassID contract". Short version: TaskClassID, TaskConstructArg, HeapArray, HeapPolicy,
HeapPolicies, CreateArg and the TaskBase fields at +0x24/+0x44/+0x5C/+0x60/+0x61/+0x64 all
match 3DS sead, except that enums are 1 byte. 0057D87C is `TaskClassID::create` (int/string
hooks at data_00716650). The 26 factory instances are all `TTaskFactory<T>`:
`new (ca.heap_array->getPrimaryHeap(), 4) T(ca)`, which returns the constructor's r0.

Stop 52 is factory 00688538 ("CapFader_UraOmote", the 12th of TaskRender's 15 children in
table EU 0x796774, which static init 005A7CEC fills). Its converted C is `void`. native/game
now overrides it, along with the other two `void` factories (0068828C, 00688690). The audit
finds no other factory with that defect. `tools/task_factories.py` repeats the check after
each converter round.

The constructors behind TaskRender's children were also checked with
`native/framework/tools/lostframe.py`. None has a lost stack object: every SafeString name
block on the stack is written.

## Task 3: LibMessageStudio (details in lms.md)

The library sits at USA = EU 0011E668-0011F320. ALBW's build is larger than SM3DL's: it also
has MsgFlwBn (flow) and MsgPrjBn (project) support. 36 functions are named in
`identified_lms.json`, which is merged into identified.json under source "redpepper LMS". The
boot agent's stop-40 overrides 0011F064, 00490988 and 00494104 match the ARM:
- 00490988 starts with GetTextNum (0011EC80).
- 00494104 starts with the flow node count (0011EACC, u16, -4 when the flow block is missing).

Differences from the reference:
- The encoding field is one byte at +8, and the block count is a u16 at +0xA.
- AnalyzeMessageBinary ignores its magic-check result.
- ALBW adds error codes -2, -4, -5, -10 and -11.

`lms/` holds 22 drop-ins (not linked). They take 32-bit words and return r0 where the matched
sources are `void`. `lms/test/run_tests.sh` runs 43 checks and passes on -m32 and -m64. They
are needed for the 64-bit build, where the matched 0011F054 SetMemFuncs drops the free hook and
the first LMS free jumps to 0. On i386 the only fragile spot is 0011EB7C (text index by
SafeString label, `void` in the matched source).

## Task 4: function identification (details in identify.md)

identified.json has 256 entries from the sead/nn/framework pass (92 high, 164 medium
confidence) plus the 36 LMS entries. Method: vtable slot orders from NSMBU sead, anchored on
constructor-stored vptrs and on facts from our ARM code; sead string literals; svc numbers for
the nn::svc wrappers. The redpepper Symbols/ hold only 53 sead/nn/lib names. Without the SM3DL
binary they give names and sizes but no shapes.

Some of these contradict our current labels:
- 00109868 is TaskBase::TaskBase, not a heap function.
- 0049BEAC / 0049C008 are sead::Thread ctor/dtor.
- The BOOT_LOG's "HeapMgr::initialize 0010B47C" is GameFramework::initialize 0010B480; the
  real HeapMgr::initialize overloads are 0010D8FC and 0010D978.

## Task 5: Tricord (details in tfh_notes.md)

It is a RAM-poking plugin with no engine or format code, and no addresses transfer. What
transfers is the scene-change-by-request pattern (same idea as ALBW's 004EF418), the Link
animation names (present in our binary), the six actor categories plus a UNIQ id, and the
RomFS format family. TFH actor offsets differ from ALBW's (ALBW: profile +0x2D0, position
+0x368).

## Recommendations

1. After each converter round, run `tools/task_factories.py`. Any `BAD` row means a `void`
   factory, and that factory crashes like stop 52.
2. Converter: the return-class bugs that recur (`void` factories / ctors, tail calls) are the
   biggest source of boot stops. For constructors, returns_this.json misses functions that
   compute `this` as a sub-object ctor's result minus a constant (0025E6C0, 0029D43C, 0029DC7C,
   0037B310, 003AA5D0). The converted C handles these correctly today, but returns_this.py could
   learn `sub rN, r0, #k` after a proven call.
3. Use NSMBU sead (aboood40091) for vtable slot orders, not redpepper's partial seadHeap.h. Treat
   every enum field as 1 byte (armcc).
4. 64-bit: link `native/refs/lms/` (owner: boot / 64-bit agent; native/sdk and native/game were
   not edited).
5. Next naming pass: the FileDevice / ResourceMgr / ArchiveRes / SZSDecompressor vtables
   (vptrs in tools/vtables.json), following identify.md's procedure.
