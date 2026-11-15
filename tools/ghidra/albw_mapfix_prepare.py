# Ghidra headless preScript (Jython), for a PRIVATE COPY of the project opened -readOnly:
# removes the functions (and their func_<USA> labels) that the old EU/USA map put at addresses
# that are not function starts (old map entries the audit moved, albw-decomp-ai
# tools/eu_map_audit.py), so ghidra_dump.py can create the functions at the corrected EU starts
# they overlap, and literal-pool reads at those addresses print as DAT_ instead of `_func_<USA>`.
# Nothing is saved (-readOnly).
# @runtime Jython
#   -preScript albw_mapfix_prepare.py <bogus_eu.json: ["001B3754", ...]>
import json
args = list(getScriptArgs())
fm = currentProgram.getFunctionManager()
st = currentProgram.getSymbolTable()
gone = labels = 0
for a in json.load(open(args[0])):
    addr = toAddr(int(a, 16))
    f = fm.getFunctionAt(addr)
    if f is not None and fm.removeFunction(addr):
        gone += 1
    for s in list(st.getSymbols(addr)):
        if s.getName().startswith("func_") and s.delete():
            labels += 1
print("albw_mapfix_prepare: %d bogus functions, %d func_ labels removed" % (gone, labels))
