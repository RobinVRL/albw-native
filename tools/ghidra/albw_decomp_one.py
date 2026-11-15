# Decompile one function (EU address) with a long timeout; write the C to a file.
# @runtime Jython
# args: <eu hex> <out file> [timeout s]
import os
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
args = getScriptArgs()
addr = toAddr(int(args[0], 16))
out = args[1]
tmo = int(args[2]) if len(args) > 2 else 900
f = getFunctionAt(addr)
if f is None:
    f = createFunction(addr, None)
ifc = DecompInterface()
from ghidra.app.decompiler import DecompileOptions
o = DecompileOptions()
o.grabFromProgram(currentProgram)
o.setMaxPayloadMBytes(2000)
o.setMaxInstructions(1000000)
ifc.setOptions(o)
ifc.openProgram(currentProgram)
res = ifc.decompileFunction(f, tmo, ConsoleTaskMonitor())
if res.decompileCompleted():
    src = res.getDecompiledFunction().getC()
    try:
        import albw_fcast as fcast
        src = fcast.annotate(res)[0]
    except Exception as e:
        print("albw_decomp_one: fcast skipped: %s" % e)
    open(out, "w").write(src)
    print("albw_decomp_one: ok %d bytes" % len(src))
else:
    print("albw_decomp_one: failed: %s" % res.getErrorMessage())
