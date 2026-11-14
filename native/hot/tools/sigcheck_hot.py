#!/usr/bin/env python3
"""sigcheck_hot.py: ABI checks for native/hot/func_<USA>.c.

  python3 native/hot/tools/sigcheck_hot.py [--all]

1. definitions vs the prototypes the round-2 converted callers declare
   (build/decomp/ghidra_fallback/ghidra_analyzed4/*/func_*.c `extern R func_X(...)`), verdicts as
   native/gameplay/tools/sigcheck.py (RET, ARGS, M64PTR, VOIDRET);
2. CALLEE declarations in native/hot (`R func_X(...);` prototypes) vs the definition that wins
   at link: a native definition (native/{sdk,runtime,game,robust,gameplay,route,...}) if any,
   else the converted Ghidra definition. Verdicts: RET / ARGS as above, PTRARG (we pass a
   32-bit integer where the definition takes a pointer: upper half undefined on x86-64)."""
import glob, os, re, sys, collections

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(PORT, "native", "gameplay", "tools"))
import sigcheck as sc  # noqa: E402

HOT = os.path.join(PORT, "native", "hot")
CONV = sc.CONV
PROTO_RE = re.compile(r"^(?!static|extern\s+char)(?:extern\s+)?([A-Za-z_][\w \*]*?)\s*\bfunc_([0-9A-F]{8})\s*\(([^;{]*)\)\s*;", re.M)


def strip(t):
    return re.sub(r"/\*.*?\*/", "", t, flags=re.S)


def hot_defs():
    out = {}
    for f in sorted(glob.glob(os.path.join(HOT, "func_*.c"))):
        txt = strip(open(f).read())
        for m in sc.DEF_RE.finditer(txt):
            out[m.group(2)] = (sc.sig(m.group(1), m.group(3)), os.path.basename(f))
    return out


def hot_protos():
    out = collections.defaultdict(set)
    for f in sorted(glob.glob(os.path.join(HOT, "*.c")) + glob.glob(os.path.join(HOT, "*.h"))):
        txt = strip(open(f).read())
        for m in PROTO_RE.finditer(txt):
            out[m.group(2)].add((sc.sig(m.group(1), m.group(3)), os.path.basename(f)))
    return out


def native_def(addr):
    rx = re.compile(r"^(?!static|extern)([A-Za-z_][\w \*]*?)\s*\bfunc_%s\s*\(([^;{]*)\)\s*(?:\{|__attribute__)" % addr, re.M)
    for d in ("sdk", "runtime", "game", "robust", "gameplay", "route", "render", "core", "framework"):
        for f in glob.glob(os.path.join(PORT, "native", d, "**", "*.c"), recursive=True):
            if "/test/" in f:
                continue
            txt = open(f, errors="replace").read()
            if ("func_" + addr) not in txt:
                continue
            m = rx.search(strip(txt))
            if m:
                return sc.sig(m.group(1), m.group(2)), os.path.relpath(f, PORT)
    return None


def conv_def(addr):
    fs = glob.glob(os.path.join(CONV, "*", "func_%s.c" % addr))
    if not fs:
        return None
    txt = strip(open(fs[0], errors="replace").read())
    m = re.search(r"^([A-Za-z_][\w \*]*?)\s*\bfunc_%s\s*\(([^;{]*)\)\s*\{" % addr, txt, re.M)
    if m:
        return sc.sig(m.group(1), m.group(2)), os.path.relpath(fs[0], PORT)
    return None


def main():
    show_all = "--all" in sys.argv
    D = hot_defs()
    C = sc.caller_decls(D)
    print("== definitions vs converted callers")
    for a in sorted(D):
        ds, fn = D[a]
        if not C.get(a):
            print("%s %-18s def %s(%s)  callers: none" % (a, fn, ds[0], "".join(ds[1])))
            continue
        for cs, n in C[a].most_common():
            v = sc.verdicts(ds, cs)
            if show_all or v != ["OK"]:
                print("%s %-18s def %s(%s)  callers x%d %s(%s)  %s" % (
                    a, fn, ds[0], "".join(ds[1]), n, cs[0], "".join(cs[1]), " ".join(v)))
    print("== callee declarations vs the winning definition")
    for a, decls in sorted(hot_protos().items()):
        if a in D:
            d = (D[a][0], "native/hot/" + D[a][1])
        else:
            d = native_def(a) or conv_def(a)
        if not d:
            objs = [l.strip() for l in open(os.path.join(PORT, "build", "objs.txt")) if a in l]
            where = os.path.relpath(objs[0], PORT) if objs else "NO DEFINITION"
            if show_all or not objs:
                print("%s matched/other source: %s (%s)" % (a, where, ",".join(sorted(f for _, f in decls))))
            continue
        for s, f in sorted(decls):
            v = []
            if (s[0] == "F") != (d[0][0] == "F"):
                v.append("RET")
            if sc.abi(s) != sc.abi(d[0]):
                v.append("ARGS")
            elif any(b == "P" and x == "I" for x, b in zip(s[1], d[0][1])):
                v.append("PTRARG")
            if v or show_all:
                print("%s %-18s decl %s(%s)  def %s(%s) [%s]  %s" % (
                    a, f, s[0], "".join(s[1]), d[0][0], "".join(d[0][1]), d[1], " ".join(v) or "OK"))


if __name__ == "__main__":
    main()


def native_callers():
    """prototypes of our functions declared by OTHER native code (native/*/ except hot)"""
    D = hot_defs()
    rx = re.compile(r"^(?:extern\s+)?([A-Za-z_][\w \*]*?)\s*\bfunc_([0-9A-F]{8})\s*\(([^;{]*)\)\s*;", re.M)
    out = []
    for f in glob.glob(os.path.join(PORT, "native", "**", "*.c"), recursive=True):
        if "/hot/" in f or "/test/" in f:
            continue
        txt = strip(open(f, errors="replace").read())
        for m in rx.finditer(txt):
            a = m.group(2)
            if a not in D or m.group(1).strip() in ("return",):
                continue
            s = sc.sig(m.group(1), m.group(3))
            ds = D[a][0]
            v = []
            if (s[0] == "F") != (ds[0] == "F"):
                v.append("RET")
            if sc.abi(s) != sc.abi(ds):
                v.append("ARGS")
            elif any(x == "P" and y == "I" for x, y in zip(ds[1], s[1])):
                v.append("M64PTR")
            out.append((a, os.path.relpath(f, PORT), s, ds, v))
    return out


if __name__ == "__main__" and "--native" in sys.argv:
    print("== other native code declaring native/hot functions")
    for a, f, s, ds, v in sorted(native_callers()):
        if v or "--all" in sys.argv:
            print("%s %-40s decl %s(%s)  def %s(%s)  %s" % (a, f, s[0], "".join(s[1]), ds[0], "".join(ds[1]), " ".join(v) or "OK"))
