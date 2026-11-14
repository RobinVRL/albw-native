# Ghidra headless postScript (Jython): clear false "does not return" flags.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_fix_noreturn.py <noreturn.json> <log.json>
# <noreturn.json> comes from tools/systemic_prep.py (each function's verdict from the EU ARM
# code: a reachable return instruction, or a tail call / fall-through into a returning function).
# For every function verified to return:
#   - the no-return flag is cleared;
#   - every `bl`/`blx` to it that analysis marked CALL_RETURN (call that never comes back, so
#     the caller's flow stopped) gets its flow override removed (plain `b` tail calls keep it);
#   - the code after such a call is disassembled if it was left undefined, and the calling
#     function's body is re-derived (CreateFunctionCmd.fixupFunctionBody).
# The SDK panic 0010C1B8 (verdict "returns": false) is set/kept no-return.
# Idempotent: a second run finds nothing to change. Every change is written to <log.json>.
import json
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.program.model.listing import FlowOverride
from ghidra.util.task import ConsoleTaskMonitor

args = list(getScriptArgs())
verdicts = json.load(open(args[0]))
log_path = args[1]
listing = currentProgram.getListing()
fm = currentProgram.getFunctionManager()
mon = ConsoleTaskMonitor()
log = {"cleared_noreturn": [], "kept_noreturn": [], "call_overrides_removed": 0, "disassembled_after_call": 0,
       "bodies_fixed": 0, "callers": {}, "skipped": []}
to_fix = set()
for usa in sorted(verdicts):
    v = verdicts[usa]
    a = toAddr(int(v["eu"], 16))
    f = fm.getFunctionAt(a)
    if f is None:
        log["skipped"].append([usa, "no function at EU %s" % v["eu"]])
        continue
    if not v["returns"]:
        if not f.hasNoReturn():
            f.setNoReturn(True)
        log["kept_noreturn"].append(usa)
        continue
    if f.hasNoReturn():
        f.setNoReturn(False)
        log["cleared_noreturn"].append(usa)
    n = 0
    for r in getReferencesTo(a):
        ins = listing.getInstructionAt(r.getFromAddress())
        if ins is None or not ins.getMnemonicString().lower().startswith("bl"):
            continue  # b / bx tail calls stay tail calls
        if ins.getFlowOverride() == FlowOverride.CALL_RETURN:
            ins.setFlowOverride(FlowOverride.NONE)
            n += 1
        if ins.isFallThroughOverridden():
            ins.clearFallThroughOverride()
        nxt = ins.getAddress().add(ins.getLength())
        if listing.getInstructionAt(nxt) is None and listing.getDefinedDataAt(nxt) is None:
            if disassemble(nxt):
                log["disassembled_after_call"] += 1
        cf = fm.getFunctionContaining(ins.getAddress())
        if cf is not None:
            to_fix.add(cf.getEntryPoint())
    log["call_overrides_removed"] += n
    log["callers"][usa] = n
for e in sorted(to_fix):
    f = fm.getFunctionAt(e)
    if f is not None and CreateFunctionCmd.fixupFunctionBody(currentProgram, f, mon):
        log["bodies_fixed"] += 1
json.dump(log, open(log_path, "w"), indent=1, sort_keys=True)
print("albw_fix_noreturn: cleared %d, kept %d no-return, %d call overrides removed, %d disassembled, %d bodies re-derived"
      % (len(log["cleared_noreturn"]), len(log["kept_noreturn"]), log["call_overrides_removed"],
         log["disassembled_after_call"], log["bodies_fixed"]))
