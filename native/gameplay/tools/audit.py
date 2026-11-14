#!/usr/bin/env python3
"""audit.py: per-function decompilation-defect audit for the gameplay systems.

  python3 native/gameplay/tools/audit.py ADDR [ADDR...]      (USA addresses, or @file with one per line)
  python3 native/gameplay/tools/audit.py --json out.json ADDR...

For each function, from the current Ghidra C (build/ghidra_analyzed4 = round 2, fallback
ghidra_extra4, ghidra_analyzed3, ghidra_analyzed2)
compared with ARM-derived facts (native/robust/tools/livein2.json: real argument registers;
native/gameplay/tools/retreads.json: return registers the callers read):

  sig        Ghidra signature: return type, #int params, #float params
  miss_args  argument registers live-in on ARM (livein2 'final') but absent from the signature
             (r-regs beyond the int params, s-regs beyond the float params)  -> lost implicit args
  extra_args params in the signature that are not live-in (harmless, but callers pass junk)
  ret_lost   callers read r0 / s0 after the call but Ghidra returns void / a non-float
             (s0 read sites counted) -> lost return value (incl. float returned in s0)
  regs       in_rN / in_sN / in_dN / unaff_* / extraout_* reads (uninitialised natively)
  stack0x    &stack0x... (lost stack objects)
  ujt        UNRECOVERED_JUMPTABLE (indirect tail call), with/without arguments
  fcast      float<->int bit reinterpretations printed as value casts (float_casts.scan_text),
             printed as raw/converted: in the Ghidra text / still in the compiled conversion
  f2i        (int)/(uint) conversions of float values (x86 cvttss2si: out-of-range/NaN give
             0x80000000, ARM vcvt saturates and NaN -> 0)
  sqrt       SQRT() (double __builtin_sqrt: fine when stored to float, a hazard inside expressions)
  dbl        double arithmetic in the C (excess precision unless the ARM does it too)
  callers    static direct callers (ARM call graph)
  native     already overridden in native/{game,robust,sdk,gameplay}
"""
import glob, json, os, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(PORT, "native", "robust", "tools"))
import float_casts  # noqa: E402

LIVEIN = json.load(open(os.path.join(PORT, "native", "robust", "tools", "livein2.json")))
RET = json.load(open(os.path.join(HERE, "retreads.json")))
_callers = None


def native_defs():
    out = {}
    for d in ("game", "sdk", "robust", "runtime", "gameplay"):
        for f in glob.glob(os.path.join(PORT, "native", d, "*.c")):
            for m in re.finditer(r"^[^\n;#/]*?\bfunc_([0-9A-F]{8})\s*\([^;{]*\)\s*\{",
                                 open(f, errors="replace").read(), re.M):
                out.setdefault(m.group(1), d)
    return out


def src(a):
    for d in ("ghidra_analyzed4", "ghidra_extra4", "ghidra_analyzed3", "ghidra_analyzed2", "ghidra_extra3", "ghidra_extra"):
        p = os.path.join(PORT, "build", d, "func_%s.c" % a)
        if os.path.exists(p):
            return open(p, errors="replace").read(), d
    return None, None


_conv = None


def converted_path(a):
    converted_ret(a)
    return _conv.get(a)


def converted_ret(a):
    """return type of the converted (compiled) Ghidra source, if any"""
    global _conv
    if _conv is None:
        _conv = {}
        # the active conversion (round-1 systemic fixes) wins over the older one
        for pat in (("*", "func_*.c"), ("ghidra_analyzed3", "*", "func_*.c"), ("ghidra_analyzed4", "*", "func_*.c")):
            for f in glob.glob(os.path.join(PORT, "build", "decomp", "ghidra_fallback", *pat)):
                _conv[os.path.basename(f)[5:13]] = f
    f = _conv.get(a)
    if not f:
        return None
    m = re.search(r"^([A-Za-z_][\w \*]*?)\s*\bfunc_%s\s*\(" % a, open(f, errors="replace").read(), re.M)
    return m.group(1).strip() if m else None


SIG = re.compile(r"^([A-Za-z_][\w \*]*?)\s*\*?\s*\b(?:func_|FUN_)([0-9A-Fa-f]{8})\s*\(([^)]*)\)\s*$", re.M)


def parse_sig(text, a):
    for m in SIG.finditer(text):
        if m.group(2).upper() == a:
            line = text[m.start():m.end()]
            ret = line.split("func_")[0].strip()
            params = [p.strip() for p in m.group(3).split(",") if p.strip() and p.strip() != "void"]
            nf = sum(1 for p in params if re.match(r"^float\s+\w+$", p))
            nd = sum(1 for p in params if re.match(r"^double\s+\w+$", p))
            return ret, len(params) - nf - nd, nf, nd
    return None, 0, 0, 0


def audit(a, callers=None):
    text, where = src(a)
    r = {"addr": a, "src": where}
    if text is None:
        return r
    ret, ni, nf, nd = parse_sig(text, a)
    r["sig"] = "%s (%d int, %d float%s)" % (ret, ni, nf, ", %d double" % nd if nd else "")
    li = LIVEIN.get(a, {}).get("final", [])
    lr = [x for x in li if x.startswith("r")]
    ls = [x for x in li if x.startswith("s")]
    miss = [x for x in lr if int(x[1:]) >= min(ni, 4)] + [x for x in ls if int(x[1:]) >= nf + 2 * nd]
    r["miss_args"] = miss
    r["extra_args"] = max(0, min(ni, 4) - len(lr)) + max(0, nf - len(ls))
    rr = RET.get(a, {})
    lost = []
    if ret is not None:
        n = max(1, rr.get("sites", 1))
        if ret.startswith("void") and "*" not in ret and rr.get("r0", 0) >= max(1, 0.05 * n):
            lost.append("r0 x%d" % rr["r0"])
        if not ret.startswith("float") and rr.get("s0", 0) >= max(2, 0.05 * n):
            lost.append("s0 x%d" % rr["s0"])
    if lost and ret is not None and ret.startswith("void"):
        conv = converted_ret(a)
        if conv and not conv.startswith("void"):
            lost = [l + " (converter returns %s)" % conv if l.startswith("r0") else l for l in lost]
    r["ret_lost"] = lost
    r["regs"] = sorted(set(re.findall(r"\b(in_[rsdlp]\w*|unaff_\w+|extraout_\w+)\b", text)) - {"in_fpscr"})
    r["stack0x"] = len(re.findall(r"&stack0x", text))
    ujt = re.findall(r"\(\*UNRECOVERED_JUMPTABLE[^)]*\)\s*\(([^;]*)\)", text)
    r["ujt"] = "%d (%d no-arg)" % (len(ujt), sum(1 for u in ujt if not u.strip())) if ujt else ""
    try:
        sites = float_casts.scan_text(text)
    except Exception:
        sites = []
    r["fcast"] = len(sites)
    # residual bit-casts in the CONVERTED source (after the round-1 converter fix)
    cp = converted_path(a)
    if cp:
        try:
            ct = open(cp, errors="replace").read()
            r["fcast_conv"] = len(float_casts.scan_text(ct))
        except Exception:
            r["fcast_conv"] = None
    r["f2i"] = len(re.findall(r"\((?:int|uint)\)\s*\(?f(?:Var|param)", text)) + len(re.findall(r"VectorFloatTo", text))
    r["sqrt"] = text.count("SQRT(")
    r["dbl"] = len(re.findall(r"\bdouble\b", text))
    r["ninsn_c"] = text.count(";")
    if callers is not None:
        r["callers"] = len(callers.get(a, ()))
    return r


def load_callers():
    import pickle
    p = os.path.join(HERE, "callgraph.json")
    if os.path.exists(p):
        cg = json.load(open(p))
        out = {}
        for u, l in cg.items():
            for t in l:
                out.setdefault(t, set()).add(u)
        return out
    return None


def score(r):
    s = 0
    s += 5 * len(r.get("miss_args", []))
    s += 6 * len([l for l in r.get("ret_lost", []) if "converter returns" not in l])
    s += 3 * len(r.get("regs", []))
    s += 4 * r.get("stack0x", 0)
    s += 4 * (1 if r.get("ujt") else 0)
    s += 2 * (r["fcast_conv"] if r.get("fcast_conv") is not None else r.get("fcast", 0))
    s += 1 * r.get("f2i", 0)
    return s


def main(argv):
    out = None
    if argv and argv[0] == "--json":
        out, argv = argv[1], argv[2:]
    addrs = []
    for x in argv:
        if x.startswith("@"):
            addrs += [l.split()[0] for l in open(x[1:]) if l.strip() and not l.startswith("#")]
        else:
            addrs.append(x.upper())
    callers = load_callers()
    nat = native_defs()
    rows = []
    for a in addrs:
        r = audit(a, callers)
        r["native"] = nat.get(a, "")
        r["score"] = score(r)
        rows.append(r)
    if out:
        json.dump(rows, open(out, "w"), indent=1)
    for r in rows:
        print("%s %-8s score=%-3d callers=%-4s sig=%s miss=%s ret=%s regs=%s stk=%s ujt=%s fcast=%s/%s f2i=%s sqrt=%s dbl=%s %s" % (
            r["addr"], r.get("native", ""), r["score"], r.get("callers", "?"), r.get("sig"), r.get("miss_args"),
            r.get("ret_lost"), r.get("regs"), r.get("stack0x"), r.get("ujt"), r.get("fcast"), r.get("fcast_conv"), r.get("f2i"),
            r.get("sqrt"), r.get("dbl"), r.get("src")))


if __name__ == "__main__":
    main(sys.argv[1:])
