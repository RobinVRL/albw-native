# Ghidra headless postScript (Jython): empty bodies and bogus function starts.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_bodies.py <bodies.json> <livein.json> <log.json>
# <bodies.json> comes from tools/systemic_prep.py (verdicts decided on the EU ARM code):
#   not_a_function  an epilogue fragment / the rest of a function after its prologue that the
#                   table or analysis made a function (it restores registers nothing pushed). The
#                   function is removed, so the function it belongs to (the one falling or branching
#                   into it) is decompiled whole; neighbouring bodies are re-derived. Kept (and
#                   logged) if anything calls it (bl) or data points at it.
#   signature       a function decompiled as `void f(void) { return; }` because Ghidra typed it
#                   `undefined f(void)` while it returns in s0 (float) / r0 and reads registers:
#                   gets its return (s0 float, r0 int, r0 = this) and its parameters (live-in
#                   registers, positional from r0 / s0, pinned with custom storage). Code that was
#                   never disassembled at its entry is disassembled first.
#   map_shift / manual / ok   only logged.
# Idempotent. Every change goes to <log.json>.
import json
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.program.model.data import FloatDataType, Undefined4DataType, PointerDataType, VoidDataType
from ghidra.program.model.listing import Function, ParameterImpl, ReturnParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType
from ghidra.util.task import ConsoleTaskMonitor

args = list(getScriptArgs())
verdicts = json.load(open(args[0]))
livein = json.load(open(args[1]))
log_path = args[2]
listing = currentProgram.getListing()
fm = currentProgram.getFunctionManager()
lang = currentProgram.getLanguage()
mon = ConsoleTaskMonitor()
log = {"removed": [], "removal_refused": [], "signatures": [], "disassembled": [], "unchanged": [],
       "bodies_fixed": 0}


def reg(name):
    return lang.getRegister(name)


def storage(name):
    r = reg(name)
    return VariableStorage(currentProgram, r.getAddress(), 4)


fix = set()
owners = []
for usa in sorted(verdicts):
    v = verdicts[usa]
    a = toAddr(int(v["eu"], 16))
    f = fm.getFunctionAt(a)
    verdict = v["verdict"]
    if verdict == "not_a_function":
        if f is None:
            log["unchanged"].append([usa, "already not a function"])
            continue
        bad = []
        for r in getReferencesTo(a):
            t = r.getReferenceType()
            if t.isData() or (t.isCall() and listing.getInstructionAt(r.getFromAddress()) is not None
                              and listing.getInstructionAt(r.getFromAddress()).getMnemonicString().lower().startswith("bl")):
                bad.append("%s %s" % (r.getFromAddress(), t))
        if bad:
            log["removal_refused"].append([usa, bad[:4]])
            continue
        before = fm.getFunctionContaining(a.subtract(4))
        removeFunction(f)
        log["removed"].append([usa, v["eu"], v.get("why", "")])
        if v.get("owner"):
            owners.append(v)
        if before is not None:
            fix.add(before.getEntryPoint())
        for r in getReferencesTo(a):  # functions branching into the fragment
            cf = fm.getFunctionContaining(r.getFromAddress())
            if cf is not None:
                fix.add(cf.getEntryPoint())
    elif verdict == "signature":
        if f is None:
            log["unchanged"].append([usa, "no function"])
            continue
        if listing.getInstructionAt(a) is None:
            disassemble(a)
            CreateFunctionCmd.fixupFunctionBody(currentProgram, f, mon)
            log["disassembled"].append(usa)
        regs = livein.get(usa, v.get("params", []))
        nr = max([int(x[1:]) + 1 for x in regs if x.startswith("r")] + [0])
        ns = max([int(x[1:]) + 1 for x in regs if x.startswith("s")] + [0])
        ret = v.get("ret")
        cur_ret = f.getReturnType()
        if f.getParameterCount() >= nr + ns and cur_ret.getLength() > 0 and \
                (ret != "float" or cur_ret.getName() == "float"):
            log["unchanged"].append([usa, "already typed"])
            continue
        params = []
        for k in range(nr):
            params.append(ParameterImpl("param_%d" % (k + 1), Undefined4DataType.dataType, storage("r%d" % k), currentProgram))
        for k in range(ns):
            params.append(ParameterImpl("fparam_%d" % k, FloatDataType.dataType, storage("s%d" % k), currentProgram))
        if ret == "float":
            rp = ReturnParameterImpl(FloatDataType.dataType, storage("s0"), currentProgram)
        elif ret == "this":
            rp = ReturnParameterImpl(PointerDataType(VoidDataType.dataType), storage("r0"), currentProgram)
        elif ret == "int":
            rp = ReturnParameterImpl(Undefined4DataType.dataType, storage("r0"), currentProgram)
        else:
            rp = ReturnParameterImpl(VoidDataType.dataType, VariableStorage.VOID_STORAGE, currentProgram)
        try:
            f.updateFunction(f.getCallingConventionName(), rp, params,
                             Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.USER_DEFINED)
            log["signatures"].append([usa, str(f.getSignature())])
        except Exception as e:
            log["unchanged"].append([usa, "updateFunction failed: %s" % e])
    else:
        log["unchanged"].append([usa, verdict + ": " + v.get("why", "")])
for e in sorted(fix):
    f = fm.getFunctionAt(e)
    if f is not None and CreateFunctionCmd.fixupFunctionBody(currentProgram, f, mon):
        log["bodies_fixed"] += 1

# the function a removed start belonged to: its parameters were derived on the truncated body;
# give it its live-in integer registers (positional r0..rN), keeping the parameters it has
log["owner_params"] = []
log["owner_params_skipped"] = []
for v in owners:
    cand = getGlobalFunctions("func_" + v["owner"])
    f = cand[0] if cand else None
    if f is None:
        log["owner_params_skipped"].append([v["owner"], "no function"])
        continue
    nr = max([int(x[1:]) + 1 for x in v.get("owner_livein", []) if x.startswith("r")] + [0])
    cur = list(f.getParameters())
    in_regs = {}
    for p in cur:
        rg = p.getRegister()
        if rg is None or not rg.getName() in ("r0", "r1", "r2", "r3"):
            in_regs = None
            break
        in_regs[rg.getName()] = p
    if in_regs is None:
        log["owner_params_skipped"].append([v["owner"], "has stack/VFP parameters: by hand"])
        continue
    if len(cur) >= nr:
        continue
    params = []
    for k in range(nr):
        old = in_regs.get("r%d" % k)
        if old is not None:
            params.append(ParameterImpl(old.getName(), old.getDataType(), storage("r%d" % k), currentProgram))
        else:
            params.append(ParameterImpl("param_%d" % (k + 1), Undefined4DataType.dataType, storage("r%d" % k), currentProgram))
    try:
        f.replaceParameters(params, Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.USER_DEFINED)
        log["owner_params"].append([v["owner"], str(f.getSignature())])
    except Exception as e:
        log["owner_params_skipped"].append([v["owner"], str(e)])
json.dump(log, open(log_path, "w"), indent=1, sort_keys=True)
print("albw_fix_bodies: removed %d bogus starts (%d refused), %d signatures set, %d disassembled, %d bodies re-derived, "
      "%d owners given their live-in parameters"
      % (len(log["removed"]), len(log["removal_refused"]), len(log["signatures"]), len(log["disassembled"]),
         log["bodies_fixed"], len(log["owner_params"])))
