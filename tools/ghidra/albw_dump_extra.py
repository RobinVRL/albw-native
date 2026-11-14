# Ghidra headless postScript (Jython): decompile the functions the decomp's table does not list.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_dump_extra.py <eu_usa_map.json> <out_dir> <map_out.json>
# Full analysis found functions that are only reached through pointers (callbacks, comparators,
# vtable entries) and are missing from funcs.json. Each gets a USA address (EU address shifted by
# the delta of the nearest table function before it), is renamed func_<USA>, and its C is written
# to <out_dir>/func_<USA>.c. <map_out.json> = {USA: EU} for the build and the data generator.
import json, os, bisect
from ghidra.app.decompiler import DecompInterface
from ghidra.program.model.symbol import SourceType
from ghidra.util.task import ConsoleTaskMonitor

args = list(getScriptArgs())
emap = json.load(open(args[0]))
out_dir, map_out = args[1], args[2]
if not os.path.isdir(out_dir):
    os.makedirs(out_dir)
eu_to_usa = {}
for usa, e in emap.items():
    eu_to_usa[int(e["eu"], 16)] = int(usa, 16)
eu_starts = sorted(eu_to_usa)
TEXT_END = 0x100000 + 0x5920F4

# optional: code addresses stored as pointers somewhere in the image; create functions at those
# that are not inside any known function body (callbacks only referenced through data)
if len(args) > 3:
    made = 0
    for eu in json.load(open(args[3])):
        a = toAddr(eu)
        if getFunctionContaining(a) is not None:
            continue
        disassemble(a)
        if createFunction(a, None) is not None:
            made += 1
    print("albw_dump_extra: %d functions created at pointer targets" % made)

extra = []
for f in currentProgram.getFunctionManager().getFunctions(True):
    eu = f.getEntryPoint().getOffset()
    if eu in eu_to_usa or not (0x100000 <= eu < TEXT_END):
        continue
    i = bisect.bisect_right(eu_starts, eu) - 1
    if i < 0:
        continue
    usa = eu + (eu_to_usa[eu_starts[i]] - eu_starts[i])
    extra.append((f, eu, usa))

# rename first so calls between extra functions print USA names too
for f, eu, usa in extra:
    try:
        f.setName("func_%08X" % usa, SourceType.ANALYSIS)
    except Exception:
        pass

ifc = DecompInterface()
ifc.openProgram(currentProgram)
mon = ConsoleTaskMonitor()
mp = {}
for f, eu, usa in extra:
    res = ifc.decompileFunction(f, 30, mon)
    if not res.decompileCompleted():
        continue
    src = res.getDecompiledFunction().getC()
    hf = res.getHighFunction()
    gl = []
    if hf is not None:
        for hs in hf.getGlobalSymbolMap().getSymbols():
            try:
                gl.append("// GLOBAL %s %s" % (hs.getName(), hs.getDataType().getDisplayName()))
            except Exception:
                pass
    head = "\n".join(sorted(gl)) + ("\n" if gl else "")
    head += "// USA %08X <- EU %08X (Ghidra, function missing from the decomp table)\n" % (usa, eu)
    open(os.path.join(out_dir, "func_%08X.c" % usa), "w").write(head + src)
    mp["%08X" % usa] = "%08X" % eu
json.dump(mp, open(map_out, "w"), indent=0, sort_keys=True)
print("albw_dump_extra: %d functions outside the table, %d dumped" % (len(extra), len(mp)))
