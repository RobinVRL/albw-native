# Ghidra headless postScript (Jython): parameter counts from the ARM live-in analysis (round 2).
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_params.py <params.json> <log.json>
# <params.json> comes from tools/systemic_prep2.py (native/robust/tools/livein2.py verdicts):
#   {USA: {"eu", "r": n, "s": n, "keep_r": n, "keep_s": n, "proven": bool}}
#     r / s        the function really reads r0..r(n-1) / s0..s(n-1) at entry (positional: a
#                  register below the highest one read is a parameter too); missing ones are
#                  added (custom storage, pinned to the register), so callers re-decompile
#                  passing what is in that register at the call (BOOT_LOG: lost implicit
#                  register arguments, `in_rN` in the function itself)
#     keep_r/keep_s  upper bound of what any path can read (indirect calls / unknown code count
#                  as reading r0-r3). With "proven" (every path seen), register parameters at or
#                  above it are Ghidra's invention and are removed: callers then stop passing
#                  `in_rN` / `extraout_rN` for them (the bulk of the in_rN in the dump).
# Existing parameters keep their name, type and storage; only parameters entirely in removable
# registers are dropped; stack parameters are never touched. Thunks and varargs functions are
# skipped. Idempotent (a second run changes nothing). Every change goes to <log.json>.
import json
from ghidra.program.model.data import FloatDataType, Undefined4DataType
from ghidra.program.model.listing import Function, ParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType

args = list(getScriptArgs())
want = json.load(open(args[0]))
log_path = args[1]
fm = currentProgram.getFunctionManager()
lang = currentProgram.getLanguage()
log = {"raised": [], "dropped": [], "unchanged": 0, "skipped": [], "failed": []}

RN = ["r0", "r1", "r2", "r3"]


def reg_storage(name):
    r = lang.getRegister(name)
    return VariableStorage(currentProgram, r.getAddress(), 4)


def regs_of(p):
    """Names of the 32-bit argument registers a parameter occupies (d regs -> s pairs);
    None if any part is on the stack / elsewhere."""
    out = []
    st = p.getVariableStorage()
    for vn in st.getVarnodes():
        if not vn.isRegister():
            return None
        r = lang.getRegister(vn.getAddress(), vn.getSize())
        if r is None:
            return None
        n = r.getName()
        if n in RN:
            out.append(n)
        elif n.startswith("s") and n[1:].isdigit():
            out.append(n)
        elif n.startswith("d") and n[1:].isdigit() and int(n[1:]) < 8:
            k = int(n[1:])
            out += ["s%d" % (2 * k), "s%d" % (2 * k + 1)]
        else:
            return None
    return out


def key(p):
    """Order: integer registers r0..r3, then stack parameters (by offset), then VFP registers."""
    rg = regs_of(p)
    if rg:
        r = [x for x in rg if x[0] == "r"]
        if r:
            return (0, min(RN.index(x) for x in r))
        return (2, min(int(x[1:]) for x in rg))
    st = p.getVariableStorage()
    return (1, st.getStackOffset() if st.isStackStorage() else 0)


n_seen = 0
for usa in sorted(want):
    v = want[usa]
    f = fm.getFunctionAt(toAddr(int(v["eu"], 16)))
    if f is None:
        log["skipped"].append([usa, "no function"])
        continue
    if f.isThunk() or f.hasVarArgs():
        log["skipped"].append([usa, "thunk" if f.isThunk() else "varargs"])
        continue
    n_seen += 1
    cur = list(f.getParameters())
    covered = set()
    for p in cur:
        rg = regs_of(p)
        if rg:
            covered |= set(rg)
    keep, gone = [], []
    for p in cur:
        rg = regs_of(p)
        drop = False
        if v.get("proven") and rg:
            drop = all((x[0] == "r" and RN.index(x) >= v["keep_r"]) or
                       (x[0] == "s" and int(x[1:]) >= v["keep_s"]) for x in rg)
        if drop:
            gone.append("%s %s" % (p.getName(), "/".join(rg)))
        else:
            keep.append(ParameterImpl(p.getName(), p.getDataType(), p.getVariableStorage(), currentProgram))
    names = set(p.getName() for p in keep)
    added = []
    for k in range(v["r"]):
        r = "r%d" % k
        if r in covered:
            continue
        nm = "param_%d" % (k + 1)
        while nm in names:
            nm += "_"
        keep.append(ParameterImpl(nm, Undefined4DataType.dataType, reg_storage(r), currentProgram))
        names.add(nm)
        added.append(r)
    for k in range(v["s"]):
        s = "s%d" % k
        if s in covered:
            continue
        nm = "fparam_%d" % k
        while nm in names:
            nm += "_"
        keep.append(ParameterImpl(nm, FloatDataType.dataType, reg_storage(s), currentProgram))
        names.add(nm)
        added.append(s)
    if not added and not gone:
        log["unchanged"] += 1
        continue
    keep.sort(key=key)
    before = str(f.getSignature())
    try:
        f.replaceParameters(keep, Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.USER_DEFINED)
        if added:
            log["raised"].append([usa, added, before, str(f.getSignature())])
        if gone:
            log["dropped"].append([usa, gone, before, str(f.getSignature())])
    except Exception as e:
        log["failed"].append([usa, str(e)])
json.dump(log, open(log_path, "w"), indent=1, sort_keys=True)
print("albw_fix_params: %d functions looked at: %d given missing register parameters, %d phantom parameters "
      "removed, %d unchanged, %d skipped, %d failed"
      % (n_seen, len(log["raised"]), len(log["dropped"]), log["unchanged"], len(log["skipped"]), len(log["failed"])))
