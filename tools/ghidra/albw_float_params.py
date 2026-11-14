# Ghidra headless postScript (Jython): give functions their VFP float parameters.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_float_params.py
# The game passes float arguments in s0..s15 (hard-float). Where auto-analysis left them out, the
# decompiler shows uninitialised inputs in_s0, in_s1, ...; this appends one float parameter per
# register up to the highest one read, so Ghidra's convention places them in s0.. and callers
# pass them. Integer parameters are kept as they are.
from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.data import FloatDataType
from ghidra.program.model.listing import Function, ParameterImpl
from ghidra.program.model.symbol import SourceType
from ghidra.util.task import ConsoleTaskMonitor
import re

ifc = DecompInterface()
ifc.openProgram(currentProgram)
mon = ConsoleTaskMonitor()
fixed = scanned = 0
for f in currentProgram.getFunctionManager().getFunctions(True):
    scanned += 1
    res = ifc.decompileFunction(f, 60, mon)
    if not res.decompileCompleted():
        continue
    regs = [int(n) for n in re.findall(r"\bin_s(\d+)\b", res.getDecompiledFunction().getC())]
    if not regs:
        continue
    have = sum(1 for p in f.getParameters() if p.getDataType().getName() == "float")
    need = max(regs) + 1
    if need <= have:
        continue
    params = [ParameterImpl(p.getName(), p.getDataType(), currentProgram) for p in f.getParameters()]
    for k in range(have, need):
        params.append(ParameterImpl("fparam_%d" % k, FloatDataType.dataType, currentProgram))
    try:
        f.replaceParameters(params, Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, True,
                            SourceType.ANALYSIS)
        fixed += 1
    except Exception as e:
        print("albw_float_params: %s: %s" % (f.getName(), e))
    if scanned % 2000 == 0:
        print("albw_float_params: %d scanned, %d fixed" % (scanned, fixed))
print("albw_float_params: done, %d functions scanned, %d given float parameters" % (scanned, fixed))
