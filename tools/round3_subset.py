#!/usr/bin/env python3
"""Round-3 numbers on a subset of functions (the boot path's direct-call closure by default):

  python3 tools/round3_subset.py V3DIR V4DIR [ROOT,...]

V3DIR / V4DIR: tools/systemic_dryrun3.py outputs (<OUT>/v3, <OUT>/v4). Roots default to the boot
path 004ECA48 0048E670 0048E718 0014BDE0 0014B610; the subset is every function reachable from
them through direct calls (native/gameplay/tools/callgraph.json, the ARM call graph)."""
import json, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
v3d, v4d = sys.argv[1], sys.argv[2]
roots = sys.argv[3].split(",") if len(sys.argv) > 3 else ["004ECA48", "0048E670", "0048E718", "0014BDE0", "0014B610"]
cg = json.load(open(os.path.join(ROOT, "native", "gameplay", "tools", "callgraph.json")))
seen, fr = set(roots), list(roots)
while fr:
    nx = []
    for f in fr:
        for c in cg.get(f, []):
            if c not in seen:
                seen.add(c)
                nx.append(c)
    fr = nx
fx = json.load(open(os.path.join(ROOT, "native", "robust", "systemic3", "retfix.json")))
rt = set(json.load(open(os.path.join(ROOT, "native", "returns_this.json"))))
rt3 = set(json.load(open(os.path.join(ROOT, "native", "returns_this3.json"))))
so = json.load(open(os.path.join(ROOT, "native", "robust", "systemic3", "stackobjs.json")))
m = dict(functions=len(seen), ghidra_sourced=0, retfix_callees_in_set=0, files_changed_by_retfix=0,
         assign_sites_void_callee_v3=0, assign_sites_void_callee_v4=0, in_stack_locals_v3=0, in_stack_locals_v4=0,
         files_undeclared_callee_v3=0, files_undeclared_callee_v4=0, returns_this_added=0, returns_this_dropped=0,
         stackobj_functions=0, stackobj_words=0)


def undeclared(t, a):
    head = t[:t.find("\n{")] if "\n{" in t else ""
    body = t[t.find("\n{"):] if "\n{" in t else t
    return bool(set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", body)) - set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", head)) - {"func_" + a})


for a in sorted(seen):
    m["retfix_callees_in_set"] += ("func_" + a) in fx
    m["returns_this_added"] += a in rt3 and a not in rt
    m["returns_this_dropped"] += a in rt and a not in rt3
    if a in so:
        m["stackobj_functions"] += 1
        m["stackobj_words"] += sum(n // 4 for _, n in so[a]["objs"])
    p3, p4 = os.path.join(v3d, a + ".c"), os.path.join(v4d, a + ".c")
    if not (os.path.exists(p3) and os.path.exists(p4)):
        continue
    m["ghidra_sourced"] += 1
    t3, t4 = open(p3).read(), open(p4).read()
    for tag, t in (("v3", t3), ("v4", t4)):
        body = t[t.find("\n{"):] if "\n{" in t else t
        m["assign_sites_void_callee_" + tag] += sum(len(re.findall(r"=\s*(?:\([\w ]+\)\s*)?%s\s*\(" % f, body)) for f in fx if fx[f]["ret"] == "void" and f in body)
        m["in_stack_locals_" + tag] += len(re.findall(r"^\s+\w[\w \*]*\bin_stack_[0-9a-f]{8};", t, re.M))
        m["files_undeclared_callee_" + tag] += undeclared(t, a)
    m["files_changed_by_retfix"] += any(f in t3 for f in fx) and t3 != t4
print(json.dumps(m, indent=1))
