# Ghidra headless postScript (Jython): variadic functions from the ARM code (round 3, defect 4).
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_varargs.py <varargs.json> <log.json>
# <varargs.json> comes from tools/systemic_prep3.py: {USA: {"eu", "fixed": n}} - armcc spills the
# argument registers at entry (push {r0-r3}) and passes entry_sp + 4*(fixed - 4) on as the va_list.
# Ghidra had them as fixed-parameter functions, so every call site printed only the fixed
# arguments (all calls to the bounded snprintf 003E6AA8 lost their format arguments). Here the
# function keeps its first max(<fixed>, register parameters) parameters (missing fixed ones added
# as undefined4) and is
# marked varargs: the decompiler then recovers the extra arguments at each call site from the
# registers / outgoing stack words the caller sets. Idempotent; changes logged to <log.json>.
import json
from ghidra.program.model.data import Undefined4DataType
from ghidra.program.model.listing import Function, ParameterImpl
from ghidra.program.model.symbol import SourceType

args = list(getScriptArgs())
want = json.load(open(args[0]))
fm = currentProgram.getFunctionManager()
log = {"fixed": [], "unchanged": [], "failed": []}
for usa in sorted(want):
    v = want[usa]
    f = fm.getFunctionAt(toAddr(int(v["eu"], 16)))
    if f is None:
        log["failed"].append([usa, "no function"])
        continue
    cur = list(f.getParameters())
    # keep every register parameter Ghidra already has: with a variadic prototype the decompiler
    # recovers only the *stack* arguments beyond the listed ones, so register arguments past the
    # fixed ones (r2/r3 of a 2-fixed-argument function) must stay listed (004994B0 lost them)
    nreg = len([p for p in cur if p.getVariableStorage().isRegisterStorage()])
    n = max(v["fixed"], min(nreg, 4))
    if f.hasVarArgs() and len(cur) == n:
        log["unchanged"].append(usa)
        continue
    before = str(f.getSignature())
    try:
        keep = [ParameterImpl(p.getName(), p.getDataType(), currentProgram) for p in cur[:n]]
        names = set(p.getName() for p in keep)
        k = len(keep)
        while len(keep) < n:
            nm = "param_%d" % (k + 1)
            while nm in names:
                nm += "_"
            keep.append(ParameterImpl(nm, Undefined4DataType.dataType, currentProgram))
            names.add(nm)
            k += 1
        if f.hasCustomVariableStorage():
            f.setCustomVariableStorage(False)
        f.replaceParameters(keep, Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, True,
                            SourceType.USER_DEFINED)
        f.setVarArgs(True)
        log["fixed"].append([usa, before, str(f.getSignature())])
    except Exception as e:
        log["failed"].append([usa, str(e)])
json.dump(log, open(args[1], "w"), indent=1, sort_keys=True)
print("albw_fix_varargs: %d made variadic, %d unchanged, %d failed"
      % (len(log["fixed"]), len(log["unchanged"]), len(log["failed"])))
