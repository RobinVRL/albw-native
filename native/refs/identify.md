# Function identification from the references (task 4)

Output: `native/refs/identified.json`, `{usa_addr: {name, source, confidence, evidence[, existing_label]}}`.
It has 256 entries: 92 high and 164 medium confidence. 18 of them already had a label in our project; those
labels are copied into `existing_label`. LMS functions are not included; a separate pass covers them.

| group | entries |
|---|---|
| sead heaps (ExpHeap / FrameHeap / UnitHeap vtables, Heap ctor, ExpHeap::create x2) | 50 |
| sead task / thread / framework (TaskBase, CalculateTask, ControllerMgr, FaderTaskBase, Thread, MainThread, Framework::initialize/run, GameFramework, TaskMgr, ThreadMgr) | 78 |
| game task classes: virtual-slot roles (TaskRender, TaskRoot, TaskMainGame, TaskStage, faders ...) | 107 |
| nn::svc wrappers (+1 nn::os wait) | 21 |

## What the references could and could not give

- **redpepper `Symbols/`** has only 53 sead/nn/lib symbols. Most are SM3DL's `al`/`Game` code. The SM3DL
  binary is not in the clone, so the symbols only supply names and byte sizes. Two kinds were usable:
  - **nn::svc wrappers.** They are matched by svc number. 16 of 17 have the same byte size as in SM3DL
    (ControlMemory 36, CreateThread 36, WaitSynchronizationN 36, CreateMemoryBlock 28, the rest 24 or 8).
  - **A few library functions.** strlen (96 bytes) matches. PtrArrayImpl::setBuffer (32) and
    ListNode::insertFront_ (28) have the same sizes as our 0010B3EC and 0010F1DC, which confirms the
    existing names.

  The armlib printf/str* family did not carry over. In ALBW the C library is mostly Thumb (0x1000xx),
  so sizes and shapes differ.
- **NSMBU sead (aboood40091)** was the most useful reference. Its virtual declaration orders for Heap,
  TaskBase, CalculateTask, Thread and Framework/GameFramework match ALBW slot for slot. Its source
  literals also match ours: `ExpHeap::create(0, "sead::ThreadMgr", ...)`, `"sead::SystemManagers"`,
  `"sead::ResourceMgr"`, `"sead::FileDeviceMgr"`, `"sead::MethodTreeMgr"` and `"sead::ControllerMgr"`.
- **redpepper's sead headers** only partly decompile the 3DS headers. Their `seadHeap.h` order is
  **wrong for ALBW**: it has tryRealloc and isEmpty and comments out resizeBack. ALBW follows the
  NSMBU order: resizeBack at +0x24 and isInclude at +0x40, with no tryRealloc and no isEmpty. Do not
  use that header for slot offsets.

## Method (scripts in `native/refs/tools/`, run with `../albw-decomp-ai/.venv/bin/python3 -I`)

1. `known.py` collects every name the project already has into `known.json`: symbols.jsonl,
   sdk_areas, symbol_aliases (`_ZN` names only), the core/framework README tables and the headers of
   the native files.
2. `vtables.py` finds every rodata address that code loads from a literal pool and whose words are
   function starts or zeros. The result is in `vtables.json`. **armcc removes unused virtual
   functions (VFE), so unused slots are 0.** Slot indexes are still exact. Vtables are packed back to
   back, so only use a vptr that a constructor or destructor actually stores.
3. Slots are named from the NSMBU header order. Each class is anchored on a vptr that a
   constructor or destructor stores, and the order is cross-checked against facts in our ARM code:
   - createTaskSync calls `vt+0x28`, which is prepare.
   - enterCommon (0049F7D4) calls `+0x3C` and `+0x40`, which are attachCalcImpl and attachDrawImpl.
   - ExpHeap destroy calls `parent->vt+0x44` (isFreeable) and then `+0x1C` (free).
   - Thread::start is at +0x14 (boot stop 14).
   - createSystemTasks (0048E670) calls `+0x38..+0x48`, the five `create*` methods.
   - waitStartDisplayLoop_ is 0048E7E4, the main-thread poll seen in the boot log.

   A function used by many task vtables at the same slot is named as the base class's method.
   Task class names come from the name literal each constructor passes. `showvt.py VPTR` prints a
   vtable with the names we already have.
4. String anchors: `seadstr.py` lists every function that references a `sead::` literal.
5. svc wrappers: `svcscan.py`.

## Notable finds

- **Labels that contradict ours:**
  - 00109868 is `sead::TaskBase::TaskBase(arg, name)`. sdk_areas says "heap: create child heap object
    in memory block". It stores the TaskBase vtable 006F78DC, and the CalculateTask, FaderTaskBase and
    TaskRoot base constructors call it.
  - 0049BEAC is `sead::Thread::Thread`. sdk_areas says "heap create (ExpHeap/FrameHeap)". It stores the
    Thread vtable, allocates the stack and links into ThreadMgr 00715430.
  - 0049C008 (symbols.jsonl "Base48A::~Base48A ... threadlike") is `sead::Thread::~Thread`.
  - BOOT_LOG stop 1 calls 0010B47C "HeapMgr::initialize". The function is 0010B480
    `sead::GameFramework::initialize`, which builds the SystemManagers, ResourceMgr and FileDeviceMgr
    heaps. 0010CDB8 is `sead::Framework::initialize`, and the HeapMgr::initialize overloads are
    0010D8FC and 0010D978 (`"RootHeap"`).
- **The sead framework spine is named:**

  | function | address |
  |---|---|
  | Framework::initialize | 0010CDB8 |
  | GameFramework::initialize | 0010B480 |
  | ExpHeap::create(size, name, parent, ...) | 0010B954 |
  | ExpHeap::create(addr, size, name) | 0010CC7C |
  | Heap::Heap | 0010DF58 |
  | ThreadMgr::createInstance | 0010DB24 |
  | ThreadMgr::initialize | 0010E1C8 |
  | Framework::run | 004A12E0 |
  | TaskMgr::initialize | 0049CE98 |
  | TaskMgr::TaskMgr | 0049E510 |
  | GameFrameworkCtr vtable | 006F6D28 |
  | procFrame_ | 004960AC |

  The vtable at 006F6D28 is stored by the framework constructor 0010B880.
- **Task slot roles on the boot path:**

  | method | address |
  |---|---|
  | TaskRoot::prepare | 004ECA48 |
  | TaskRender::prepare | 0014BDE0 |
  | TaskRender::calc | 0014B610 |
  | ControllerMgr ctor | 0048D41C |
  | AudioTask ctor | 004A08BC |
  | TaskStage ctor | 00518CCC |
  | FaderTaskBase ctor | 0048E140 |
  | CalculateTask ctor | 0048D088 |

  TaskRender::prepare (0014BDE0) calls 0014A168, which creates the 15 fader children. The
  FaderTaskBase constructor (0048E140) is the base of every TaskRender child.
- **Heap layout (ExpHeap, FrameHeap and UnitHeap code):**

  | field | offset |
  |---|---|
  | mStart | +0x1C |
  | mSize | +0x20 |
  | mParent | +0x24 |
  | direction (s8) | +0x50 |
  | CriticalSection | +0x54 |
  | flags (bit 0 = lock enabled) | +0x70 |
  | UnitHeap unit size | +0x74 |
  | ExpHeap block header | 0x98 bytes |

  A failed UnitHeap::tryAlloc calls a global alloc-failed callback.
- TaskClassID::mType is one byte (`ldrb`/`strb`; armcc packs enums), not the 4-byte enum in the
  headers. TaskClassID::create (0057D87C) matches sead: 1 is the int hook, 2 is the factory, 3 is
  the string hook.
- 0010E1C8 / 0010E1CC: the EU/USA map splits ThreadMgr::initialize into two functions after a 4-byte
  `mov r0, r0`. The Ghidra C treats it as one function, so there is no port impact.

## Not done

- UnitHeap is medium confidence. FaderTaskBase is a medium-confidence inferred name: no reference
  has its header.
- The FileDevice, ResourceMgr, ArchiveRes and SZSDecompressor vtables were not named. The NSMBU
  slot lists are in its `filedevice/` and `resource/` headers, and `vtables.json` has the vptrs:
  006F5080 (ResourceMgr), 006F55B8 (FileDeviceMgr), and the 006F52FC block up to +0x1C0, which
  holds FileDevice methods (00499C60 open ...). The same procedure applies to them.
