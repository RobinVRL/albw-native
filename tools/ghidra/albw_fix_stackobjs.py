# Ghidra headless postScript (Jython): stack objects whose stores the decompiler dropped (round 3,
# defect 7).
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_stackobjs.py <stackobjs.json> <log.json>
# <stackobjs.json> comes from tools/systemic_prep3.py: {USA: {"eu", "objs": [[off, size]]}} with
# off the entry-sp offset (negative) of an object whose address the C passes as &stack0x<off>
# and size the contiguous run of words the ARM code stores there (sp-relative stores). With no
# frame variable covering those words, the decompiler treats the stores as dead (the callee
# that reads the object through the pointer is invisible to it) and drops them: the native
# object is never filled (004FD464 EnemyBase ctor flag arg, 004C58F0 ActorProfile load arg,
# 004ABA98 0x50-byte create arg). Here one variable `objStack_<off>` (uint[size/4]) is
# defined over the object (uint[n]: a defined type, so the variable is type-locked; an
# undefined4[n] is only a hint the decompiler ignores), replacing the frame variables it
# overlaps; the decompiler then keeps
# every store to it (its address escapes). Idempotent; changes logged to <log.json>.
import json
from ghidra.program.model.data import ArrayDataType, UnsignedIntegerDataType, ByteDataType
from ghidra.program.model.symbol import SourceType

args = list(getScriptArgs())
want = json.load(open(args[0]))
fm = currentProgram.getFunctionManager()
log = {"defined": [], "unchanged": [], "failed": []}
for usa in sorted(want):
    v = want[usa]
    f = fm.getFunctionAt(toAddr(int(v["eu"], 16)))
    if f is None:
        log["failed"].append([usa, "no function"])
        continue
    fr = f.getStackFrame()
    for off, size in v["objs"]:
        name = "objStack_%x" % (-off)
        ex = fr.getVariableContaining(off)
        if ex is not None and ex.getName() == name and ex.getLength() == size:
            log["unchanged"].append([usa, name])
            continue
        try:
            gone = []
            for var in list(fr.getStackVariables()):
                o = var.getStackOffset()
                if o < 0 and o < off + size and o + var.getLength() > off:
                    gone.append("%s@%d:%d" % (var.getName(), o, var.getLength()))
                    fr.clearVariable(o)
            if size % 4 == 0:
                dt = ArrayDataType(UnsignedIntegerDataType.dataType, size // 4, 4)
            else:
                dt = ArrayDataType(ByteDataType.dataType, size, 1)
            fr.createVariable(name, off, dt, SourceType.USER_DEFINED)
            log["defined"].append([usa, name, off, size, gone])
        except Exception as e:
            log["failed"].append([usa, name, str(e)])
json.dump(log, open(args[1], "w"), indent=1, sort_keys=True)
print("albw_fix_stackobjs: %d objects defined, %d unchanged, %d failed"
      % (len(log["defined"]), len(log["unchanged"]), len(log["failed"])))
