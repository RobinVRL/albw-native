#!/usr/bin/env python3
"""sigcheck.py: ABI check of every native/gameplay/func_<USA>.c definition against the
prototypes the round-2 converted callers declare
(build/decomp/ghidra_fallback/ghidra_analyzed4/*/func_*.c, `extern R func_X(...)`).

  python3 native/gameplay/tools/sigcheck.py [--all]

Per function: classes of the return value and of every parameter (F float, D double,
P pointer, I 32-bit integer, L 64-bit integer, V void / none) for the definition and for each
distinct caller declaration, then the verdict:
  OK        same number and order of float/integer arguments, same return class
  RET       float vs non-float return (i386: x87 stack leak / empty pop)  -> must not link
  ARGS      different count/order of float vs integer arguments           -> must not link
  M64PTR    the definition takes a pointer where callers pass a 32-bit integer: fine on -m32,
            on -m64 the callee reads a full 64-bit register whose upper half the caller never
            set (take uint32_t + gp_ptr instead)
  VOIDRET   definition void, callers declare int (they read eax garbage, harmless only if
            no caller uses the value: see retreads.json r0)
Without --all only non-OK lines are printed."""
import glob, os, re, sys, collections

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
CONV = os.path.join(PORT, "build", "decomp", "ghidra_fallback", "ghidra_analyzed4")


def split_params(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip()); cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return [p for p in out if p not in ("void", "")]


def cls(t):
    t = re.sub(r"\b(const|volatile|struct|unsigned|signed|static|extern|inline)\b", " ", t)
    if "(*" in t or "*" in t:
        return "P"
    if re.search(r"\bdouble\b", t):
        return "D"
    if re.search(r"\bfloat\b", t):
        return "F"
    if re.search(r"\bvoid\b", t):
        return "V"
    if re.search(r"\b(undefined8|longlong|ulonglong|int64_t|uint64_t|long long|uintptr_t|size_t)\b", t):
        return "L"
    return "I"


def ptype(p):
    # drop the parameter name
    p = re.sub(r"\[[^\]]*\]$", "*", p)
    m = re.match(r"(.*?)([A-Za-z_]\w*)\s*$", p)
    if m and m.group(1).strip() and not p.endswith("*"):
        return m.group(1)
    return p


def sig(ret, params):
    return cls(ret), tuple(cls(ptype(p)) for p in split_params(params))


def abi(s):
    """float-vs-int argument sequence (pointer == integer for the i386/x86-64 slot class)"""
    return tuple("F" if c in "FD" else "I" for c in s[1])


DEF_RE = re.compile(r"^(?!static)([A-Za-z_][\w \*]*?)\s*\bfunc_([0-9A-F]{8})\s*\(([^;{]*)\)\s*\{", re.M)


def defs():
    out = {}
    for f in sorted(glob.glob(os.path.join(PORT, "native", "gameplay", "func_*.c"))):
        txt = re.sub(r"/\*.*?\*/", "", open(f).read(), flags=re.S)
        for m in DEF_RE.finditer(txt):
            out[m.group(2)] = (sig(m.group(1), m.group(3)), os.path.basename(f))
    return out


def caller_decls(addrs):
    want = set(addrs)
    out = collections.defaultdict(collections.Counter)
    rx = re.compile(r"^extern\s+([\w \*]+?)\s*\bfunc_([0-9A-F]{8})\s*\(([^;]*)\)\s*;", re.M)
    for f in glob.glob(os.path.join(CONV, "*", "func_*.c")):
        txt = open(f, errors="replace").read()
        for m in rx.finditer(txt):
            if m.group(2) in want:
                out[m.group(2)][sig(m.group(1), m.group(3))] += 1
    return out


def verdicts(d, c):
    v = []
    if (d[0] == "F") != (c[0] == "F"):
        v.append("RET")
    elif d[0] == "V" and c[0] != "V":
        v.append("VOIDRET")
    if abi(d) != abi(c):
        v.append("ARGS")
    elif any(a == "P" and b in "I" for a, b in zip(d[1], c[1])):
        v.append("M64PTR")
    return v or ["OK"]


def main():
    show_all = "--all" in sys.argv
    D = defs()
    C = caller_decls(D)
    for a in sorted(D):
        (ds, fn) = D[a]
        if not C.get(a):
            if show_all:
                print("%s %-22s def %s%s  callers: none (vtable/indirect or no converted caller)" % (a, fn, ds[0], "".join(ds[1])))
            continue
        for cs, n in C[a].most_common():
            v = verdicts(ds, cs)
            if show_all or v != ["OK"]:
                print("%s %-22s def %s(%s)  callers x%d %s(%s)  %s" % (
                    a, fn, ds[0], "".join(ds[1]), n, cs[0], "".join(cs[1]), " ".join(v)))


if __name__ == "__main__":
    main()
