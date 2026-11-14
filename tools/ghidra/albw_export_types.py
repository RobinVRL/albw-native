# Ghidra headless postScript (Jython): export every labelled data item with its C type.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -postScript albw_export_types.py <out.json>
# Output: {"<label>": "<C type>"} for the labels the decompiler prints (DAT_*, PTR_*, s_*, ...),
# so the Ghidra-derived sources can declare globals with the type Ghidra used.
import json

out = {}
listing = currentProgram.getListing()
st = currentProgram.getSymbolTable()
it = st.getAllSymbols(True)
while it.hasNext():
    sym = it.next()
    data = listing.getDataAt(sym.getAddress())
    if data is None:
        continue
    dt = data.getDataType()
    name = sym.getName()
    try:
        out[name] = dt.getDisplayName()
    except Exception:
        pass
json.dump(out, open(getScriptArgs()[0], "w"))
print("albw_export_types: %d labels" % len(out))
