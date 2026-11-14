# Ghidra headless preScript (Jython): prepare the EU program before auto-analysis.
# @runtime Jython
#   -preScript albw_prepare.py <funcs.json> <eu_usa_map.json>
# - creates every function from the decomp's table at its EU address, named func_<USA ADDR>,
#   so analysis builds on the known function starts instead of guessing them;
# - enables the analyzers that recover what the native port needs most: real parameter
#   counts/types (Decompiler Parameter ID), switch tables, strings.
import json

args = list(getScriptArgs())
starts = json.load(open(args[0]))["starts"]
emap = json.load(open(args[1]))

for name, value in (
        ("Decompiler Parameter ID", "true"),
        ("Decompiler Switch Analysis", "true"),
        ("ASCII Strings", "true"),
        ("ARM Aggressive Instruction Finder", "false"),  # we already know every function start
        ("Shared Return Calls", "true")):
    try:
        setAnalysisOption(currentProgram, name, value)
    except Exception as e:
        print("albw_prepare: option %s not set (%s)" % (name, e))

made = 0
for s in starts:
    e = emap.get("%08X" % s)
    if not e:
        continue
    a = toAddr(int(e["eu"], 16))
    disassemble(a)
    if getFunctionAt(a) is None and createFunction(a, "func_%08X" % s) is not None:
        made += 1
print("albw_prepare: %d functions created" % made)
