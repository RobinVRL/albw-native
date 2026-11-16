#!/usr/bin/env python3
"""Ghidra stage-2 texts generated before an EU<->USA map correction: the file for USA X holds
the body of the OLD EU function (header "// USA X <- EU Y" with Y != the map's current EU).

usage: tools/stale_map_scan.py
For each such function prints the USA address, header EU, current map EU, and what the build
links for it: a native override (native/*/func_X.c, safe), the stale Ghidra text (WRONG BODY),
or another source. A stale Ghidra text that is linked runs the wrong function under that name.
"""
import glob, json, os, re

m = json.load(open("../albw-decomp-ai/shared/eu_usa_map.json"))
GH = "build/decomp/ghidra_fallback/ghidra_analyzed5_v4"
native = {}
for d in ("native/game", "native/compilefix", "native/hot", "native/robust", "native/gameplay",
          "native/framework", "native/core", "native/route"):
    for f in glob.glob(d + "/func_*.c"):
        native[os.path.basename(f)[5:13].upper()] = f
linked = {}
for o in json.load(open("build/decomp/report.json"))["objects"]:
    rel = o.split("/build/decomp/obj/", 1)[-1][: -len(".final.o")]
    b = os.path.basename(rel)
    if b.startswith("func_"):
        linked.setdefault(b[5:13].upper(), rel)
rows = []
for f in glob.glob(GH + "/*/func_*.c"):
    usa = os.path.basename(f)[5:13].upper()
    head = open(f, errors="replace").read(2000)
    mm = re.search(r"// USA ([0-9A-F]{8}) <- EU ([0-9A-F]{8})", head)
    if not mm or usa not in m:
        continue
    cur = m[usa]["eu"].upper()
    if mm.group(2) == cur:
        continue
    if usa in native:
        what = "native override " + native[usa]
    elif linked.get(usa, "").startswith("ghidra_fallback/"):
        what = "WRONG BODY (stale Ghidra text linked)"
    elif usa in linked:
        what = "linked from " + linked[usa]
    else:
        what = "not linked"
    rows.append((usa, mm.group(2), cur, what))
for r in sorted(rows):
    print("%s  ghidra EU %s  map EU %s  %s" % r)
print("%d stale texts, %d linked with the wrong body" % (len(rows), sum("WRONG" in r[3] for r in rows)))
