#!/usr/bin/env python3
"""Rank class A (uninitialised register inputs) / class B (unrecovered computed jumps)
Ghidra-sourced functions by BFS depth from the boot entry points."""
import collections, glob, json, os, re, struct, sys

PORT = "."
DEC = "../albw-decomp-ai"
sys.path.insert(0, os.path.join(PORT, "tools"))
import gen_data

code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
rd = lambda a: struct.unpack_from("<I", code, a - 0x100000)[0]
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
extra = json.load(open(os.path.join(PORT, "native", "extra_functions.json")))
usa2eu = {k: v["eu"].upper() for k, v in emap.items()}
usa2eu.update({k: v.upper() for k, v in extra.items()})
fn_of = {int(v, 16): "func_" + k for k, v in usa2eu.items()}
ctors, inits = gen_data.init_tables(code, rd, fn_of)

rep = json.load(open(os.path.join(PORT, "build", "decomp", "report.json")))
ghidra_src = {}
for o in rep["objects"]:
    if "/ghidra_fallback/" in o:
        m = re.search(r"func_([0-9A-F]{8})\.c\.final\.o$", o)
        if m:
            ghidra_src[m.group(1)] = os.path.join(PORT, "build", "decomp", o.split("/obj/")[1][:-len(".final.o")])

# native overrides
native = set()
for f in glob.glob(os.path.join(PORT, "native", "*", "*.c")):
    if "/robust/" in f:
        continue
    for m in re.finditer(r"^[^\n;#/]*?\bfunc_([0-9A-F]{8})\s*\([^;{]*\)\s*\{", open(f, errors="replace").read(), re.M):
        native.add(m.group(1))

# call graph: raw Ghidra (all functions) + native overrides
CALL = re.compile(r"\bfunc_([0-9A-F]{8})\b")
eu2usa = {v.lower(): k for k, v in usa2eu.items()}
def body_calls(text, self_addr):
    text = re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", lambda m: "func_" + eu2usa.get(m.group(1), m.group(1).upper()), text)
    return {c for c in CALL.findall(text) if c != self_addr}
edges = collections.defaultdict(set)
texts = {}
for d in ("ghidra_analyzed2", "ghidra_extra"):
    for f in glob.glob(os.path.join(PORT, "build", d, "func_*.c")):
        a = os.path.basename(f)[5:13]
        if a in texts:
            continue
        t = open(f, errors="replace").read()
        texts[a] = t
for a, t in texts.items():
    # only the body after the signature line counts (comment lines name the function itself)
    edges[a] |= body_calls(t, a)
for f in glob.glob(os.path.join(PORT, "native", "*", "*.c")):
    if "/robust/" in f:
        continue
    t = open(f, errors="replace").read()
    for m in re.finditer(r"^[^\n;#/]*?\bfunc_([0-9A-F]{8})\s*\([^;{]*\)\s*\{", t, re.M):
        edges[m.group(1)] |= body_calls(t, m.group(1))
callers = collections.defaultdict(set)
for a, cs in edges.items():
    for c in cs:
        callers[c].add(a)

# entry points
sead = set(re.findall(r"\b(0049[0-9A-F]{4})\b", open(os.path.join(PORT, "native", "GRAPHICS_STACK.md")).read()))
sead = {s for s in sead if 0x494000 <= int(s, 16) < 0x49B000}
roots = [c[5:] for c in ctors] + [i[5:] for i in inits] + ["00100C18", "00100C90", "00100F68",
         "004960AC", "0049A944", "00496238"] + sorted(sead)
depth = {}
q = collections.deque()
for r in roots:
    if r not in depth:
        depth[r] = 0
        q.append(r)
while q:
    a = q.popleft()
    for c in sorted(edges.get(a, ())):
        if c not in depth:
            depth[c] = depth[a] + 1
            q.append(c)

REGA = re.compile(r"\b((?:in|unaff|extraout)_(?:r\d+|lr|s\d+|d\d+|q\d+))(?:_[0-9a-f]+)?\b")
results = []
cnt = collections.Counter()
for a, path in ghidra_src.items():
    if a in native:
        cnt["skipped_native"] += 1
        continue
    t = open(path, errors="replace").read()
    body = t[t.find("{"):] if "{" in t else t
    regs = sorted(set(m.group(1) for m in REGA.finditer(body)))
    jt = "UNRECOVERED_JUMPTABLE" in body
    if not regs and not jt:
        continue
    cls = ("A" if regs else "") + ("B" if jt else "")
    results.append((a, cls, depth.get(a), len(callers.get(a, ())), regs, jt))
results.sort(key=lambda r: (r[2] if r[2] is not None else 10**6, -r[3], r[0]))
json.dump({"results": results, "roots": len(roots), "ctors": len(ctors), "inits": len(inits),
           "sead": sorted(sead), "native": sorted(native), "counts": cnt},
          open(os.path.join(os.path.dirname(__file__), "ranked.json"), "w"), indent=0)
c = collections.Counter(r[1] for r in results)
print("ghidra-sourced:", len(ghidra_src), "native overrides:", len(native), cnt)
print("classes:", c, "reachable:", sum(r[2] is not None for r in results))
for r in results[:80]:
    print(r[0], r[1], r[2], r[3], ",".join(r[4]), "JT" if r[5] else "")

# ---- annotations for PRIORITY.md ----
areas = json.load(open(os.path.join(PORT, "native", "sdk_areas.json")))
sysf = json.load(open(os.path.join(PORT, "native", "sdk_map.json")))["system_functions"]
OSAREAS = {"hid", "apt", "fs", "snd/dsp", "gsp/graphics", "os-threads/sync", "time", "system-other", "other/unknown"}
def tag(a):
    if a in sysf:
        return "SDK-os(svc)"
    if a in areas:
        ar = areas[a]["area"]
        return ("SDK-os(%s)" if ar in OSAREAS else "SDK(%s)") % ar
    v = int(a, 16)
    if 0x100000 <= v < 0x110000:
        return "SDK-os(nn)"
    if 0x3C0000 <= v < 0x3F0000:
        return "SDK-os(nn)"
    return ""

def reason(a, regs, jt):
    path = ghidra_src[a]
    t = open(path, errors="replace").read()
    body = t[t.find("{"):]
    parts = []
    for r in regs:
        first = re.search(r"\b%s(?:_[0-9a-f]+)?\b(?!;)" % r, body[body.find("\n\n") if "\n\n" in body else 0:])
        pre = body[:body.find(r)] if r in body else ""
        # first use that is not the declaration
        uses = [m.start() for m in re.finditer(r"\b%s(?:_[0-9a-f]+)?\b" % r, body)]
        decl_end = uses[0] if uses else 0
        use = uses[1] if len(uses) > 1 else decl_end
        before = body[:use]
        calls = CALL.findall(before) + re.findall(r"\(\*\*?\(code \*\*?\)", before)
        kind, reg = r.split("_", 1)
        if kind == "extraout":
            parts.append("%s: callee's extra return register (%s) read after a call" % (r, reg))
        elif kind == "unaff":
            parts.append("%s: callee-saved register read without being set (value from caller/across call)" % r)
        else:
            if calls:
                parts.append("%s: read after a call (likely the callee's %s return / or an unmodelled param)" % (r, "float" if reg[0] in "sd" else "register"))
            else:
                parts.append("%s: unmodelled %s parameter" % (r, "float" if reg[0] in "sd" else "register"))
    if jt:
        n = body.count("(*UNRECOVERED_JUMPTABLE)")
        sw = "switch" if re.search(r"UNRECOVERED_JUMPTABLE\s*=\s*\(code \*\)\s*\(?\s*\w+\s*[+]", body) is None else "computed"
        parts.append("UNRECOVERED_JUMPTABLE: indirect jump called with no arguments (%d site(s))" % n)
    return "; ".join(parts)

ann = []
for r in results:
    a, cls, d, nc, regs, jt = r
    ann.append((a, cls, d, nc, tag(a), regs, reason(a, regs, jt), usa2eu.get(a, "?")))
json.dump(ann, open(os.path.join(os.path.dirname(__file__), "annotated.json"), "w"), indent=0)
# Ghidra bodies that are empty but the EU code is not a bare return
starts_eu = sorted(int(v, 16) for v in usa2eu.values())
import bisect
empty = []
for a, path in ghidra_src.items():
    if a in native:
        continue
    t = open(path, errors="replace").read()
    m = re.search(r"\n\{\s*(?:return;)?\s*\}\s*$", t)
    if m and a in usa2eu:
        eu = int(usa2eu[a], 16)
        i = bisect.bisect_right(starts_eu, eu)
        size = (starts_eu[i] - eu) if i < len(starts_eu) else 0
        if size > 8 and rd(eu) != 0xE12FFF1E:
            empty.append((a, size, depth.get(a)))
json.dump(empty, open(os.path.join(os.path.dirname(__file__), "empty_bodies.json"), "w"))
print("empty Ghidra bodies over real code:", len(empty))
