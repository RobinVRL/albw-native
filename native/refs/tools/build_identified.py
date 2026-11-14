#!/usr/bin/env python3
"""Build native/refs/identified.json from:
  1. vtable slot naming: vptrs proven by the ctor/dtor that stores them, slot order from the
     NSMBU (Wii U, 2012) sead headers, cross-checked against facts in our ARM code;
  2. anchors by sead's own name strings (NSMBU source uses the same literals);
  3. nn::svc wrappers (svc number + size vs. redpepper Symbols/nn/svc sizes).
Run: ../albw-decomp-ai/.venv/bin/python3 -I native/refs/tools/build_identified.py  (needs vtables.json,
known.json from vtables.py / known.py)."""
import json, os, sys
D = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, D)
from reflib import u2e, fend
vt = json.load(open(D + "/vtables.json"))
known = json.load(open(D + "/known.json"))
OUT = {}

def add(usa, name, source, conf, evidence):
    usa = usa.upper()
    if usa in OUT:
        return
    e = {"name": name, "source": source, "confidence": conf, "evidence": evidence}
    if usa in known:
        e["existing_label"] = known[usa][0][:140]
    OUT[usa] = e

HEAP = {0: "~{C}", 4: "destroy", 5: "adjust", 6: "tryAlloc", 7: "free", 8: "resizeFront",
        9: "resizeBack", 10: "freeAll", 11: "getStartAddress", 12: "getEndAddress", 13: "getSize",
        14: "getFreeSize", 15: "getMaxAllocatableSize", 16: "isInclude", 17: "isFreeable",
        18: "isResizable", 19: "isAdjustable"}
TASK = {0: "~{C}", 2: "checkDerivedRuntimeTypeInfo", 3: "getRuntimeTypeInfo", 4: "pauseCalc",
        5: "pauseDraw", 6: "pauseCalcRec", 7: "pauseDrawRec", 8: "pauseCalcChild",
        9: "pauseDrawChild", 10: "prepare", 11: "enterCommon", 12: "enter", 13: "exit",
        14: "onEvent", 15: "attachCalcImpl", 16: "attachDrawImpl", 17: "detachCalcImpl",
        18: "detachDrawImpl", 19: "getCorrespondingMethodTreeMgrTypeInfo",
        20: "getMethodTreeNode", 21: "onDestroy", 22: "calc"}
THREAD = {0: "~{C}", 2: "destroy", 3: "sendMessage", 4: "recvMessage", 5: "start", 6: "quit",
          7: "waitDone", 8: "quitAndDestroySingleThread", 9: "quitAndWaitDoneSingleThread",
          10: "setPriority", 11: "getPriority", 12: "getBlockType", 13: "getStackSize",
          14: "calcStackUsedSizePeak", 15: "calc_", 16: "getStackCheckStartAddress_"}
FRAMEWORK = {0: "~{C}", 2: "checkDerivedRuntimeTypeInfo", 3: "getRuntimeTypeInfo", 4: "run",
             5: "createSystemTasks", 6: "getMethodFrameBuffer", 7: "getMethodLogicalFrameBuffer",
             8: "setProcessPriority", 9: "reserveReset", 10: "initRun_", 11: "runImpl_",
             12: "createMethodTreeMgr_", 13: "procReset_", 14: "createControllerMgr",
             15: "createHostIOMgr", 16: "createProcessMeter", 17: "createSeadMenuMgr",
             18: "createInfLoopChecker", 19: "calcFps", 20: "saveScreenShot",
             21: "isScreenShotBusy", 22: "waitStartDisplayLoop_", 25: "procFrame_"}

def name_vtable(V, cls, slots, conf, why, nslots=None, only=None):
    e = vt[V]
    for i, f in enumerate(e["slots"]):
        if nslots and i >= nslots: break
        if f is None or i not in slots: continue
        if only is not None and i not in only: continue
        nm = slots[i].replace("{C}", cls.split("::")[-1].split("(")[0].split("[")[0])
        add(f, "%s::%s" % (cls, nm), "vtable %s slot %d (+0x%X); order: NSMBU sead header" % (V, i, i * 4),
            conf, why)

# ---- heaps (vptr stored by the dtor / create; order = NSMBU seadHeap.h, which matches here:
#      resizeBack at +0x24 and isInclude at +0x40 are known from boot stop 1, destroy (+0x10)
#      calls parent->vt[+0x44] (isFreeable) then parent->vt[+0x1C] (free)).
HEAPWHY = ("vtable stored by {d}; slots consistent: resizeFront/resizeBack at +0x20/+0x24 (boot stop 1), "
           "isInclude +0x40 (range check on [+0x1C,+0x1C+0x20)), destroy calls parent vt+0x44/+0x1C; "
           "Heap fields: mStart +0x1C, mSize +0x20, mParent +0x24, direction s8 +0x50, CS +0x54, flags +0x70")
name_vtable("006F7584", "sead::ExpHeap", HEAP, "high", HEAPWHY.format(d="dtor 0049CE64 and ctor 0010CD0C"), 18)
name_vtable("006F7D40", "sead::FrameHeap", HEAP, "high",
            HEAPWHY.format(d="dtor 004A1240 (FrameHeap::create 004A107C inlines the ctor)") +
            "; free = bx lr, resizeFront/Back return 0, isFreeable returns 0 (FrameHeap semantics)", 18)
name_vtable("006F79B0", "sead::UnitHeap", HEAP, "medium",
            HEAPWHY.format(d="dtor 004A0570 and create 004A0038") +
            "; tryAlloc fails when size > unit size at +0x74 (UnitHeap semantics)", 18)

# ---- tasks
TW = ("TaskBase slot order from NSMBU seadTaskBase.h; confirmed: createTaskSync 0049D4A8 calls vt+0x28 "
      "as prepare; enterCommon 0049F7D4 calls vt+0x3C/+0x40 (attachCalcImpl/attachDrawImpl); "
      "0049F7D4/0049FA70 shared by all 33 task vtables")
# base TaskBase defaults (inherited unchanged by CalculateTask in the NSMBU header)
name_vtable("006F52FC", "sead::TaskBase", TASK, "high", TW + "; vtable of CalculateTask ctor 0048D088, slots it does not override", 23, only={10, 11, 12, 13, 14})
name_vtable("006F78DC", "sead::TaskBase", TASK, "high", TW + "; vtable stored by TaskBase ctor 00109868", 3)
name_vtable("006F52FC", "sead::CalculateTask", TASK, "high", TW + "; stored by ctor 0048D088 (calls TaskBase ctor 00109868, sets up MethodTreeNode with Delegate vtable 006F7830)", 23)
name_vtable("006F5360", "sead::ControllerMgr", TASK, "high", TW + "; stored by ctor 0048D41C ('sead::ControllerMgr' name, as NSMBU seadControllerMgr.cpp)", 23)
name_vtable("006F554C", "sead::FaderTaskBase", TASK, "medium", TW + "; stored by ctor 0048E140 (base of NullFaderTask and all TaskRender fader children; class name inferred, no header in the references)", 25)
name_vtable("006F7488", "TaskRootBase(ctor 00105C7C)", TASK, "medium", TW + "; base of TaskRoot (vtable 006ED7DC); factory 00103C10 calls ctor 00105C7C then stores TaskRoot's vtable", 23)
name_vtable("006D6B1C", "GameTaskBase(ctor 0025D9E8)", TASK, "medium", TW + "; the game's CalculateTask-derived task base", 23)
name_vtable("006F7A30", "AudioTask", TASK, "medium", TW + "; ctor 004A08BC names it 'AudioTask' (factory 006887E0)", 23)
# class names passed by the ctors that store these vtables (string literal in the ctor)
TASKNAMES = {"006C7C44": "TaskCourse", "006C7CA8": "TaskRender", "006D1DB4": "TaskMainGame",
             "006D6AA0": "FaderNone", "006D6B90": "TaskStaffroll", "006DAA14": "TaskFileSelect",
             "006DAA8C": "TaskPlayRecord", "006E0AA8": "LoadingFader", "006E3194": "BootLoadFader",
             "006E5AC4": "TaskCircleWipe", "006E5B40": "TaskFileFormatCheck", "006E80B0": "LoadingFader",
             "006E8994": "LoadingFader", "006E904C": "MosaicFader", "006E9EC4": "LoadingFaderBattleOut",
             "006E9F50": "TaskCircleWipe", "006EAA90": "MosaicFader", "006EAB8C": "SimpleWhite",
             "006EAD94": "MosaicFader", "006EB0CC": "MosaicFader", "006ED7DC": "TaskRoot",
             "006EF524": "TaskStage", "006F5654": "NullFaderTask"}
# FaderTaskBase implementations: the slot functions shared by the fader-family vtables
# (pauseCalcRec = 0048D8CC marks the family; 006F554C itself is cut short by a non-code word).
from collections import Counter
fam = [e["slots"] for V, e in vt.items() if len(e["slots"]) > 11 and e["slots"][11] == "0049F7D4"
       and len(e["slots"]) > 6 and e["slots"][6] == "0048D8CC"]
for i in range(4, 25):
    c = Counter(s[i] for s in fam if i < len(s) and s[i])
    for f, n in c.items():
        if n >= max(3, len(fam) // 2) and i in TASK:
            add(f, "sead::FaderTaskBase::" + TASK[i], "vtable slot %d (+0x%X), shared by %d of %d fader-family task vtables" % (i, i * 4, n, len(fam)),
                "medium", TW + "; family = vtables derived from FaderTaskBase ctor 0048E140")
for V, e in sorted(vt.items()):
    s = e["slots"]
    if len(s) > 11 and s[11] == "0049F7D4":
        nm = TASKNAMES.get(V)
        cls = ("%s[vt %s]" % (nm, V)) if nm else ("Task[vt %s]" % V)
        name_vtable(V, cls, TASK, "medium", TW + "; class vtable referenced by " + " ".join(e["refs"][:4]), 23)

# ---- threads
THW = ("Thread slot order from NSMBU seadThread.h (no RTTI): start at +0x14 = 0049BD4C (boot stop 14 "
       "'sead::Thread::start'), waitDone +0x1C = 0049BE50 (svc 0x24 WaitSynchronization1)")
name_vtable("006F751C", "sead::Thread", THREAD, "high", THW + "; vtable stored by Thread ctor 0049BEAC and dtor 0049C008, used by MainThread ctor 0010EFDC", 17)
name_vtable("006F4EB8", "sead::MainThread", THREAD, "medium", THW + "; stored by ThreadMgr::initialize (0010E1C8/0010E1CC) right after the main-thread Thread ctor 0010EFDC; dtor 0048A2A0", 17)

# ---- framework
FW = ("Framework/GameFramework order from NSMBU headers; confirmed: +0x14 0048E670 calls vt+0x38/+0x3C/"
      "+0x40/+0x44/+0x48 (createSystemTasks -> createControllerMgr..createInfLoopChecker), +0x38 0048E718 "
      "creates the ControllerMgr task (factory 006887A8 -> ctor 0048D41C 'sead::ControllerMgr'), +0x10 "
      "004A12E0 creates ExpHeap 'sead::MethodTreeMgr' then calls TaskMgr::initialize (= Framework::run in "
      "NSMBU seadFramework.cpp), +0x58 0048E7E4 polls until the prepare task finishes")
name_vtable("006F6D28", "sead::GameFrameworkCtr", FRAMEWORK, "medium", FW + "; vtable stored by framework ctor 0010B880", 26)
for f, nm, slot in [("004A12E0", "sead::Framework::run", 4), ("0048E670", "sead::GameFramework::createSystemTasks", 5),
                    ("0048E718", "sead::GameFramework::createControllerMgr", 14),
                    ("0048E7E4", "sead::GameFramework::waitStartDisplayLoop_", 22)]:
    OUT[f]["name"] = nm; OUT[f]["confidence"] = "high"

# ---- string / call-structure anchors (NSMBU source literals)
A = [
 ("0010B954", "sead::ExpHeap::create(size_t size, const SafeString& name, Heap* parent, HeapDirection, bool)", "high",
  "called with the NSMBU literals 'sead::ThreadMgr', 'sead::SystemManagers', 'sead::ResourceMgr', 'sead::FileDeviceMgr', 'sead::MethodTreeMgr' exactly where seadFramework.cpp / seadGameFramework.cpp call ExpHeap::create; calls ExpHeap ctor 0010CD0C"),
 ("0010CC7C", "sead::ExpHeap::create(void* address, size_t size, const SafeString& name, bool)", "medium",
  "creates 'RootHeap' for HeapMgr (0010D8FC/0010D978) from a raw block; calls ExpHeap ctor 0010CD0C"),
 ("0010CD0C", "sead::ExpHeap::ExpHeap(...)", "high", "calls Heap ctor 0010DF58 then stores ExpHeap vtable 006F7584"),
 ("0049CE64", "sead::ExpHeap::~ExpHeap()", "high", "stores ExpHeap vtable 006F7584 (+0x18 secondary), destruct_/dispose, tail-calls Heap dtor; slot 0"),
 ("0010DF58", "sead::Heap::Heap(const SafeString& name, Heap* parent, void* address, size_t size, HeapDirection, bool)", "high",
  "base ctor called by ExpHeap ctor 0010CD0C, FrameHeap::create 004A107C and UnitHeap::create 004A0038"),
 ("004A0038", "sead::UnitHeap::create(...)", "medium", "calls Heap ctor 0010DF58, stores UnitHeap vtable 006F79B0"),
 ("0010CDB8", "sead::Framework::initialize(const InitializeArg&)", "high",
  "HeapMgr::initialize (0010D8FC/0010D978, 'RootHeap'), ExpHeap::create(0, 'sead::ThreadMgr', root), ThreadMgr::createInstance 0010DB24, ThreadMgr::initialize 0010E1C8 on 00715430, heap->adjust: NSMBU seadFramework.cpp Framework::initialize order"),
 ("0010B480", "sead::GameFramework::initialize(const InitializeArg&)", "high",
  "calls Framework::initialize 0010CDB8 then ExpHeap::create 'sead::SystemManagers', 'sead::ResourceMgr' + ResourceMgr::createInstance 0010C894 under CurrentHeapSetter (0010983C), 'sead::FileDeviceMgr' + FileDeviceMgr::createInstance 0010C930 (NSMBU seadGameFramework.cpp order). Boot log stop 1 calls this 'HeapMgr::initialize 0010B47C'"),
 ("0010D8FC", "sead::HeapMgr::initialize (one of the arena/size overloads; creates 'RootHeap')", "medium", "creates ExpHeap 'RootHeap' via 0010CC7C on HeapMgr 00715210; called first by Framework::initialize"),
 ("0010D978", "sead::HeapMgr::initialize / createRootHeap (other overload; 'RootHeap', locked)", "medium", "same pattern under the HeapMgr CS 0079E064, called by Framework::initialize"),
 ("0010DB24", "sead::ThreadMgr::createInstance(Heap*)", "medium", "called right after ExpHeap::create('sead::ThreadMgr'); stores singleton-disposer vtable 006F7E10"),
 ("0010E1C8", "sead::ThreadMgr::initialize(Heap*)", "medium", "this = ThreadMgr instance 00715430 (also used by Thread ctor 0049BEAC); new MainThread (0010CF28, ctor 0010EFDC, vtable 006F4EB8), GetThreadId 0010EAE8. Note: the map splits this function: 0010E1C8 is a 4-byte `mov r0, r0` that falls into 0010E1CC (same function; called at 0010E1C8)"),
 ("0010C894", "sead::ResourceMgr::createInstance(Heap*)", "medium", "GameFramework::initialize step after 'sead::ResourceMgr' heap; references the ResourceMgr vtable 006F5080"),
 ("0010C930", "sead::FileDeviceMgr::createInstance(Heap*)", "medium", "GameFramework::initialize step after 'sead::FileDeviceMgr' heap"),
 ("0049CE98", "sead::TaskMgr::initialize(const InitializeArg&)", "medium", "called by Framework::run 004A12E0 after createMethodTreeMgr_ (NSMBU order); allocates the 0x180-byte TaskMgr"),
 ("0049E510", "sead::TaskMgr::TaskMgr(const InitializeArg&)", "medium", "uses name 'sead::TaskMgr', CriticalSection ctor 0010B830 (TaskMgr CS at +4, locked by createTask_ 0049D3D8), vtable 006F7610"),
 ("0010B830", "sead::CriticalSection::CriticalSection()", "medium", "IDisposer-derived ctor with the lock word; used for TaskMgr's CS at +4"),
 ("00109868", "sead::TaskBase::TaskBase(const TaskConstructArg&, const char* name)", "high",
  "TTreeNode init 0010BA60, IDisposer ctor 0010CE7C, stores TaskBase vtable 006F78DC; base ctor called by CalculateTask 0048D088, FaderTaskBase 0048E140 and the root task 00105C7C (boot stop 15 crashed here via NullFaderTask)"),
 ("0049FAD8", "sead::TaskBase::~TaskBase()", "high", "slot 0 of TaskBase vtable 006F78DC; called by 18 task dtors"),
 ("0048D088", "sead::CalculateTask::CalculateTask(const TaskConstructArg&, const char* name)", "high",
  "calls TaskBase ctor 00109868, stores 006F52FC, builds the calc MethodTreeNode (001096AC-like, DelegateCalc vtable 006F7830); called by ControllerMgr 0048D41C and game TaskBase 0025D9E8"),
 ("0048D1B0", "sead::CalculateTask::~CalculateTask()", "high", "slot 0 of 006F52FC, called by 9 task dtors"),
 ("001096AC", "sead::MethodTreeNode::MethodTreeNode(...)", "medium", "TTreeNode init + IDisposer + vtable 006F5930, Delegate vtable 006F7830; used twice by the root task ctor"),
 ("0048D41C", "sead::ControllerMgr::ControllerMgr(const TaskConstructArg&)", "high", "CalculateTask(arg, 'sead::ControllerMgr') exactly as NSMBU seadControllerMgr.cpp; created by factory 006887A8 from createControllerMgr 0048E718"),
 ("0048E140", "sead::FaderTaskBase::FaderTaskBase(const TaskConstructArg&, ...)", "medium", "TaskBase ctor 00109868 + vtable 006F554C; base of NullFaderTask (0048E8DC) and the TaskRender fader children (CapFader, SimpleWhite, FaderNone, LoadingFader)"),
 ("004A08BC", "AudioTask::AudioTask(const TaskConstructArg&)", "medium", "name 'AudioTask'; CalculateTask-derived (vtable 006F7A30); factory 006887E0 (boot stop 19)"),
 ("00518CCC", "TaskStage::TaskStage(const TaskConstructArg&)", "medium", "name 'TaskStage'; factory 00688770"),
 ("00105C7C", "TaskRootBase::TaskRootBase(const TaskConstructArg&) (sead-side base of TaskRoot)", "medium", "TaskBase ctor + vtable 006F7488 + two MethodTreeNodes; created by factory 00103C10 (root class id {2, 00103C10})"),
 ("0049BEAC", "sead::Thread::Thread(const SafeString& name, Heap*, s32 priority, MessageQueue::BlockType, ...)", "high",
  "IDisposer ctor, stores Thread vtable 006F751C, allocates the stack with operator new (0010CEE0/0010CF28), inserts into ThreadMgr 00715430 list"),
 ("0049C008", "sead::Thread::~Thread()", "high", "slot 0 of Thread vtable 006F751C"),
 ("0010EFDC", "sead::Thread::Thread(Heap*, ...) main-thread variant (base part of MainThread ctor)", "high", "name 'sead::MainThread', stores Thread vtable 006F751C, wraps the running thread: svc GetThreadPriority 0010F228; caller 0010E1C8 then stores the MainThread vtable 006F4EB8"),
 ("0049A188", "sead::MethodTreeMgr (top/bottom screen) ctor / initialize", "medium", "names 'sead::RootCalc', 'sead::SysCalc', 'sead::AppCalc', 'sead::TopRootDraw'... 'sead::BtmAppDrawFinal' = CTR dual-screen method tree nodes (cf. NSMBU seadDualScreenMethodTreeMgr)"),
 ("0049546C", "sead::MethodTreeMgr right-eye (stereo) node set-up", "medium", "names 'sead::RightRootDraw', 'sead::RightSysDraw', 'sead::RightAppDraw', 'sead::RightAppDrawFinal'"),
 ("00103CBC", "strlen", "Symbols/lib/armlib/c_4.l/strlen.sym", "high", "same size (96 bytes) as SM3DL armlib strlen; already labelled strlen"),
]
for a in A:
    if len(a) == 4:
        add(a[0], a[1], "string/call-structure anchor (NSMBU sead source)", a[2], a[3])
    else:
        add(a[0], a[1], a[2], a[3], a[4])

# ---- nn::svc wrappers
SVC = [("00101DC4", 0x01, "ControlMemory", 36), ("00100B88", 0x03, "ExitProcess", 8),
       ("00103C80", 0x08, "CreateThread", 36), ("0010998C", 0x09, "ExitThread", None),
       ("00106394", 0x0A, "SleepThread", 8), ("0010F228", 0x0B, "GetThreadPriority", 24),
       ("00115EF8", 0x13, "CreateMutex", 24), ("00103C68", 0x17, "CreateEvent", 24),
       ("00115EDC", 0x1E, "CreateMemoryBlock", 28), ("00101DE8", 0x21, "CreateAddressArbiter", 24),
       ("0010BE9C", 0x22, "ArbitrateAddress", 8), ("00115ED4", 0x23, "CloseHandle", 8),
       ("0010639C", 0x25, "WaitSynchronizationN", 36), ("00115F10", 0x27, "DuplicateHandle", 24),
       ("00115F28", 0x28, "GetSystemTick", None), ("00106358", 0x2D, "ConnectToPort", 24),
       ("00106370", 0x35, "GetProcessId", 24), ("0010EAE8", 0x37, "GetThreadId", 24),
       ("00103CA4", 0x38, "GetResourceLimit", 24), ("0010D0EC", 0x3C, "Break", 8)]
for usa, n, nm, rsz in SVC:
    sz = fend(u2e[usa]) - u2e[usa]
    if rsz is None:
        conf, ev = "high", "body is `svc #0x%X; bx lr`-style wrapper (%d bytes); no SM3DL symbol" % (n, sz)
    elif rsz == sz:
        conf, ev = "high", "svc #0x%X wrapper, %d bytes = size of the SM3DL symbol (redpepper Symbols/nn/svc/svc_Api.sym)" % (n, sz)
    else:
        conf, ev = "high", "svc #0x%X wrapper (%d bytes; SM3DL symbol %d bytes: different stack-arg handling)" % (n, sz, rsz)
    add(usa, "nn::svc::" + nm, "Symbols/nn/svc + 3DS svc table", conf, ev)
add("0010C180", "nn::os wait (WaitSynchronization1 with infinite timeout, svc 0x24) on a handle object", "svc scan", "medium",
    "svc #0x24 with r2:r3 = -1; skips when the object's +4 byte flag is set")

json.dump(OUT, open(os.path.join(D, "..", "identified.json"), "w"), indent=1, sort_keys=True)
from collections import Counter
print(len(OUT), Counter(e["confidence"] for e in OUT.values()))
print("with existing label:", sum("existing_label" in e for e in OUT.values()))
