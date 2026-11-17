#!/usr/bin/env python3
"""Caller-side lost-float audit: compare every prototype a linked source declares for a game
function (func_XXXXXXXX) with that function's linked DEFINITION, and report the float mismatches:

  ARG  a parameter position that is float/double on one side and an integer/pointer on the other:
       the caller converts the value (float -> int or int -> float) instead of passing the bits,
       or reads the wrong stack slot after a float/double size difference;
  RET  the definition returns float/double and the caller's prototype does not (or the reverse):
       on i386 a float comes back in st(0), an int in eax, so the caller reads garbage
       (CLASS float return typed void / int, BOOT_LOG 89f);
  DBL  float vs double at the same position (stack layout differs: 4 vs 8 bytes).

The definition is the native override (native/{game,compilefix,hot,robust,...}) when one exists,
else the source the decomp object was built from (build/decomp/report.json). Callers: the same
set of linked sources plus the native overrides. Mismatches where the caller's side is a
native file are reported too (those are hand-written prototypes).

usage: tools/proto_mismatch_scan.py [out]     (summary on stderr)
"""
import glob, json, os, re, sys

out = open(sys.argv[1], "w") if len(sys.argv) > 1 else sys.stdout
NATIVE_DIRS = ["native/game", "native/compilefix", "native/hot", "native/robust", "native/gameplay",
               "native/framework", "native/core", "native/route", "native/sdk", "native/render"]

# --- linked sources
linked = {}
for o in json.load(open("build/decomp/report.json"))["objects"]:
    rel = o.split("/build/decomp/obj/", 1)[-1][: -len(".final.o")]
    name = os.path.basename(rel)
    m = re.match(r"func_([0-9A-Fa-f]{8})", name)
    if not m:
        continue
    path = ("build/decomp/" + rel) if rel.startswith("ghidra_fallback/") else ("../albw-decomp-ai/" + rel)
    linked.setdefault(m.group(1).upper(), path)
native_files = []
for d in NATIVE_DIRS:
    native_files += glob.glob(d + "/*.c")
native_def = {}

FLOATS = {"float": "f", "f32": "f", "double": "d", "f64": "d"}

def strip_comments(t):
    t = re.sub(r"/\*.*?\*/", " ", t, flags=re.S)
    return re.sub(r"//[^\n]*", " ", t)

def kind(tp):
    """'f' float, 'd' double, 'i' anything else (int / pointer / struct by value), None = void"""
    tp = tp.strip()
    if not tp or tp == "void":
        return None
    if "*" in tp or "[" in tp:
        return "i"
    toks = re.findall(r"[A-Za-z_]\w*", tp)
    for t in toks:
        if t in FLOATS:
            return FLOATS[t]
    return "i"

def param_kinds(params):
    params = params.strip()
    if params in ("", "void"):
        return []
    if "..." in params:
        params = params.split("...")[0]
    out = []
    depth = 0; cur = ""
    for ch in params:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur); cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    res = []
    for p in out:
        p = p.strip()
        if "(" in p:          # function pointer parameter
            res.append("i"); continue
        # drop the parameter name (last identifier) when there is a type before it
        m = re.match(r"^(.*?)([A-Za-z_]\w*)\s*$", p)
        tp = m.group(1) if m and m.group(1).strip() and m.group(1).strip() not in ("const", "unsigned", "signed") else p
        res.append(kind(tp) or "i")
    return res

KEYWORDS = {"return", "else", "do", "goto", "case", "sizeof", "if", "while", "for", "switch"}
SIG = re.compile(r"(?:^|[;}\n])\s*((?:extern\s+|static\s+|inline\s+)*)([A-Za-z_][\w\s\*:<>,]*?)\s*\b(func_([0-9A-Fa-f]{8}))\s*\(([^()]*(?:\([^()]*\)[^()]*)*)\)\s*([;{])")

def scan(path):
    """-> (definition (ret, params) or None for its own address, {callee: (ret, params)} prototypes)"""
    try:
        t = strip_comments(open(path, errors="replace").read())
    except OSError:
        return None, {}
    defs, protos = {}, {}
    calls = set(a.upper() for a in re.findall(r"func_([0-9A-Fa-f]{8})\s*\(", t))
    for m in SIG.finditer(t):
        quals, ret, _, addr, params, end = m.groups()
        ret = re.sub(r"\b(extern|static|inline|__attribute__)\b", "", ret).strip()
        if ret.endswith("::") or "=" in ret or set(ret.split()) & KEYWORDS:
            continue
        if end == ";" and re.search(r"(^|[^\w.])(\d|0x)|[+\-/%]|->|\.\w", params):
            continue                       # a call statement, not a prototype
        ret_k = kind(ret)
        if ret and not re.search(r"[A-Za-z_]", ret):
            continue
        sig = (ret_k, param_kinds(params))
        addr = addr.upper()
        if end == "{":
            defs[addr] = sig
        else:
            protos.setdefault(addr, sig)
    # keep the prototypes of functions the file calls: more `func_X(` than declarations
    ndecl = {}
    for m in SIG.finditer(t):
        ndecl[m.group(4).upper()] = ndecl.get(m.group(4).upper(), 0) + 1
    cnt = {}
    for a in re.findall(r"func_([0-9A-Fa-f]{8})\s*\(", t):
        cnt[a.upper()] = cnt.get(a.upper(), 0) + 1
    protos = {a: s for a, s in protos.items() if cnt.get(a, 0) > ndecl.get(a, 0)}
    return defs, protos

definition = {}
callers = []
for usa, path in linked.items():
    d, p = scan(path)
    if d and usa in d:
        definition[usa] = (d[usa], path)
    callers.append((usa, path, p))
for f in native_files:
    d, p = scan(f)
    for a, s in (d or {}).items():
        definition[a] = (s, f)          # native definitions win
    callers.append((os.path.basename(f), f, p))
native_override = {a for a, (s, f) in definition.items() if f.startswith("native/")}

# a linked source whose function a native file overrides is not what runs: skip it as a caller
callers = [c for c in callers if c[1].startswith("native/") or c[0] not in native_override]
n = 0
by_kind = {"ARG": 0, "RET": 0, "DBL": 0}
for who, path, protos in callers:
    for callee, (r, ps) in sorted(protos.items()):
        if callee not in definition:
            continue
        (dr, dps), dpath = definition[callee]
        if dpath == path:
            continue
        problems = []
        if (dr in ("f", "d")) != (r in ("f", "d")):
            if not (dr is None or r is None) or dr in ("f", "d"):   # void caller of a float fn: harmless
                if dr in ("f", "d") and r is None:
                    pass                                              # result unused
                else:
                    problems.append("RET def %s decl %s" % (dr, r))
        elif dr in ("f", "d") and r in ("f", "d") and dr != r:
            problems.append("DBL ret def %s decl %s" % (dr, r))
        for i in range(min(len(ps), len(dps))):
            a, b = dps[i], ps[i]
            if a == b:
                continue
            if "i" in (a, b):
                problems.append("ARG %d def %s decl %s" % (i + 1, a, b))
            else:
                problems.append("DBL %d def %s decl %s" % (i + 1, a, b))
        for i in range(len(ps), len(dps)):
            if dps[i] in ("f", "d"):
                problems.append("ARG %d def %s decl missing" % (i + 1, dps[i]))
        if problems:
            n += 1
            for p in problems:
                by_kind[p.split()[0]] += 1
            out.write("%s calls %s: %s   [caller %s | def %s%s]\n" % (who, callee, "; ".join(problems), path, dpath,
                      " (native)" if callee in native_override else ""))
sys.stderr.write("%d mismatching prototypes (ARG %d, RET %d, DBL %d) over %d callers, %d definitions\n" %
                 (n, by_kind["ARG"], by_kind["RET"], by_kind["DBL"], len(callers), len(definition)))
