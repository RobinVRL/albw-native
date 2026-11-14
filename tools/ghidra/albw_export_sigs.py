# Ghidra headless postScript (Jython): export every function's signature with its storage.
# @runtime Jython
#   -process ALBW_EU_FULL -noanalysis -readOnly -postScript albw_export_sigs.py <out.json>
# {EU hex: {"name", "ret": [type, storage], "params": [[name, type, storage, size]], "custom": bool,
#           "cc": calling convention, "varargs": bool, "noreturn": bool}}
# Read-only; used by tools/systemic_prep2.py to decide which parameters to add.
import json

out = {}
for f in currentProgram.getFunctionManager().getFunctions(True):
    ps = []
    for p in f.getParameters():
        ps.append([p.getName(), p.getDataType().getDisplayName(), str(p.getVariableStorage()), p.getLength()])
    r = f.getReturn()
    out["%08X" % f.getEntryPoint().getOffset()] = {
        "name": f.getName(), "params": ps,
        "ret": [r.getDataType().getDisplayName(), str(r.getVariableStorage())],
        "custom": f.hasCustomVariableStorage(), "cc": f.getCallingConventionName(),
        "varargs": f.hasVarArgs(), "noreturn": f.hasNoReturn(), "thunk": f.isThunk()}
json.dump(out, open(getScriptArgs()[0], "w"), indent=0, sort_keys=True)
print("albw_export_sigs: %d functions" % len(out))
