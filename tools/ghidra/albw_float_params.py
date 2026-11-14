# Ghidra headless postScript (Jython): give functions their VFP float parameters.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_float_params.py
# The game passes float arguments in s0..s15 (hard-float). Where auto-analysis left them out, the
# decompiler shows uninitialised inputs in_s0, in_s1, ...; this gives the function one float
# parameter per such register, pinned to that register (custom storage), after its existing
# integer parameters. Earlier attempts (fparam_* with dynamic storage) are replaced.
from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.data import FloatDataType
from ghidra.program.model.listing import Function, ParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType
from ghidra.util.task import ConsoleTaskMonitor
import re

ifc = DecompInterface()
ifc.openProgram(currentProgram)
mon = ConsoleTaskMonitor()
lang = currentProgram.getLanguage()
fixed = scanned = 0
for f in currentProgram.getFunctionManager().getFunctions(True):
    scanned += 1
    keep = [p for p in f.getParameters() if not p.getName().startswith("fparam_")]
    had_fparams = len(keep) != f.getParameterCount()
    res = ifc.decompileFunction(f, 60, mon)
    if not res.decompileCompleted():
        continue
    regs = sorted(set(int(n) for n in re.findall(r"\bin_s(\d+)\b", res.getDecompiledFunction().getC())))
    if not regs and not had_fparams:
        continue
    if had_fparams:  # the earlier dynamic-storage params: find which s registers they meant
        regs = sorted(set(regs) | set(range(f.getParameterCount() - len(keep))))
    missing = [k for k in range((max(regs) + 1) if regs else 0) if lang.getRegister("s%d" % k) is None]
    if missing:
        print("albw_float_params: %s: no register s%d in this language" % (f.getName(), missing[0]))
        continue
    params = []
    for p in keep:
        params.append(ParameterImpl(p.getName(), p.getDataType(), p.getVariableStorage(), currentProgram))
    for k in range(max(regs) + 1 if regs else 0):
        reg = lang.getRegister("s%d" % k)
        params.append(ParameterImpl("fparam_%d" % k, FloatDataType.dataType,
                                    VariableStorage(currentProgram, reg.getAddress(), 4), currentProgram))
    try:
        f.replaceParameters(params, Function.FunctionUpdateType.CUSTOM_STORAGE, True, SourceType.ANALYSIS)
        fixed += 1
    except Exception as e:
        print("albw_float_params: %s: %s" % (f.getName(), e))
    if scanned % 5000 == 0:
        print("albw_float_params: %d scanned, %d fixed" % (scanned, fixed))
print("albw_float_params: done, %d functions scanned, %d given float parameters in s0.." % (scanned, fixed))
