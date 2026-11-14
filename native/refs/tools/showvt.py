import sys, json, os
D = os.path.dirname(os.path.abspath(__file__))
vt = json.load(open(D + "/vtables.json")); kn = json.load(open(D + "/known.json"))
def k(a): return (" | " + kn[a][0][:90]) if a in kn else ""
for V in sys.argv[1:]:
    e = vt[V.upper().zfill(8)]
    print("vtable %s refs: %s" % (V, " ".join(r + k(r)[:50] for r in e["refs"])))
    for i, s in enumerate(e["slots"]):
        print("  [%2d] +0x%03X %s%s" % (i, i * 4, s or "-", k(s) if s else ""))
