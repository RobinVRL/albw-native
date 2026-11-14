# Ghidra headless postScript (Jython): return types from the ARM code.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_returns.py <returns.json> <fparams.json> <log.json> [medium]
# <returns.json> comes from tools/systemic_prep.py:
#   "this"   the function provably returns its first argument (native/returns_this.json: r0 at
#            every return == incoming r0; constructors, factories' init, chainable setters) and
#            Ghidra types it void -> returns param_1's pointer type (void * if param_1 is not a
#            pointer).
#   "int"    callers read r0 after calling it (>= 2 calling functions for "high"), Ghidra types it
#            void -> undefined4 in r0.
#   "float"  callers read s0 after calling it and never r0, Ghidra's return is not float ->
#            float in s0 (custom storage if the calling convention would not put it there).
# <fparams.json>: float parameters fparam_N (pinned to sN by albw_float_params.py from an in_sN
# read) whose sN is not live-in at the entry: they were the lost float result of a callee typed
# void (fixed above), not parameters; they are removed (other parameters keep their storage).
# Only "high" confidence is applied unless the third argument is "medium". A function whose
# return type is no longer void/non-float (already fixed, or a later analysis) is left alone.
# Idempotent. Every change goes to <log.json>.
import json
from ghidra.program.model.data import FloatDataType, Undefined4DataType, PointerDataType, VoidDataType, Pointer
from ghidra.program.model.listing import Function, ParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType

args = list(getScriptArgs())
recs = json.load(open(args[0]))
fparams = json.load(open(args[1]))
log_path = args[2]
levels = ("high", "medium") if len(args) > 3 and args[3] == "medium" else ("high",)
fm = currentProgram.getFunctionManager()
lang = currentProgram.getLanguage()
log = {"this": [], "int": [], "float": [], "unchanged": [], "failed": [], "fparams_dropped": [], "fparams_failed": []}


def is_void(dt):
    return dt is None or dt.getLength() <= 0 or dt.getName() in ("void", "undefined")


for usa in sorted(recs):
    v = recs[usa]
    if v["conf"] not in levels:
        continue
    f = fm.getFunctionAt(toAddr(int(v["eu"], 16)))
    if f is None:
        log["failed"].append([usa, "no function"])
        continue
    cur = f.getReturnType()
    kind = v["ret"]
    try:
        if kind in ("this", "int"):
            if not is_void(cur):
                log["unchanged"].append([usa, "returns %s already" % cur.getName()])
                continue
            if kind == "this":
                p = f.getParameter(0) if f.getParameterCount() else None
                dt = p.getDataType() if p is not None and isinstance(p.getDataType(), Pointer) else PointerDataType(VoidDataType.dataType)
            else:
                dt = Undefined4DataType.dataType
            f.setReturnType(dt, SourceType.USER_DEFINED)
            st = f.getReturn().getVariableStorage()
            if st.getRegister() is None or st.getRegister().getName() != "r0":
                if not f.hasCustomVariableStorage():
                    f.setCustomVariableStorage(True)
                r0 = lang.getRegister("r0")
                f.setReturn(dt, VariableStorage(currentProgram, r0.getAddress(), 4), SourceType.USER_DEFINED)
            log[kind].append([usa, str(f.getSignature())])
        elif kind == "float":
            if cur.getName() in ("float", "double"):
                log["unchanged"].append([usa, "returns %s already" % cur.getName()])
                continue
            f.setReturnType(FloatDataType.dataType, SourceType.USER_DEFINED)
            st = f.getReturn().getVariableStorage()
            if st.getRegister() is None or st.getRegister().getName() != "s0":
                if not f.hasCustomVariableStorage():
                    f.setCustomVariableStorage(True)
                s0 = lang.getRegister("s0")
                f.setReturn(FloatDataType.dataType, VariableStorage(currentProgram, s0.getAddress(), 4), SourceType.USER_DEFINED)
            log["float"].append([usa, str(f.getSignature())])
    except Exception as e:
        log["failed"].append([usa, str(e)])
for usa in sorted(fparams):
    v = fparams[usa]
    f = fm.getFunctionAt(toAddr(int(v["eu"], 16)))
    if f is None:
        log["fparams_failed"].append([usa, "no function"])
        continue
    drop = set(v["drop"])
    keep, gone = [], []
    for p in f.getParameters():
        rg = p.getRegister()
        if p.getName().startswith("fparam_") and rg is not None and rg.getName() in drop:
            gone.append(rg.getName())
            continue
        keep.append(ParameterImpl(p.getName(), p.getDataType(), p.getVariableStorage(), currentProgram))
    if not gone:
        continue
    try:
        f.replaceParameters(keep, Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.USER_DEFINED)
        log["fparams_dropped"].append([usa, gone])
    except Exception as e:
        log["fparams_failed"].append([usa, str(e)])
json.dump(log, open(log_path, "w"), indent=1, sort_keys=True)
print("albw_fix_returns: this %d, int %d, float %d, unchanged %d, failed %d; phantom float parameters removed from %d "
      "functions (%d failed)" % (len(log["this"]), len(log["int"]), len(log["float"]), len(log["unchanged"]),
                                 len(log["failed"]), len(log["fparams_dropped"]), len(log["fparams_failed"])))
