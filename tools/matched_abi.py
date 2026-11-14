#!/usr/bin/env python3
"""ABI checks of the matched (armcc byte-matched) sources against the ARM code they reproduce.

A matched source compiles to the original ARM bytes, but natively (i386 cdecl, C/C++ rules) it
can lose information the ARM calling convention carried implicitly:

  args     a call passes fewer register arguments than the callee reads at entry
           (native/robust/tools/livein2.json "final"): armcc emitted the same code because the
           value was already in r0-r3 / s0-s15 (`FUN_0010c0b8();` with r0 still holding the
           object, the ds_srv / templater / sol families of BOOT_LOG #12/#13/#22). Natively the
           callee reads garbage.
  layout   the source's prototype maps ARM argument locations to different i386 stack slots
           than the prototype the Ghidra-decompiled callers/callees use, e.g. a `long long`
           after one 32-bit argument (ARM: r2:r3, r1 is padding; i386: the next two words,
           BOOT_LOG #30 003C7A80), a `long long` / `double` split between r3 and the stack, or a
           float parameter declared before integer ones (ARM: s0 and r0 independently, i386:
           declaration order). Checked for the definition (vs the Ghidra signature that the
           Ghidra callers use) and for calls into a Ghidra-defined callee.
  sret     the definition returns a struct by value: ARM passes the result pointer in r0,
           i386 passes it as a hidden stack argument the callee pops (`ret $4`), so a Ghidra
           caller (which passes it as an ordinary first argument) loses 4 bytes of stack.

Every check works on clang's LLVM IR of the source (exact argument types after C/C++ rules,
`this` explicit), produced with the build's own flags.

  python3 tools/matched_abi.py [--report build/matched_abi.json]   (report only; ~3-5 min)

build_decomp.py imports check() when ALBW_MATCHED_ARGCHECK=1 (args) and/or
ALBW_MATCHED_ABICHECK=1 (layout + sret) and builds the flagged addresses from their Ghidra
decompilation instead (iterated: a definition that falls back changes what its matched callers
must agree with).
"""
import collections
import concurrent.futures as cf
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(os.path.dirname(ROOT), "albw-decomp-ai")
COMPAT = os.path.join(ROOT, "native", "albw_native.h")
LIVEIN2 = os.path.join(ROOT, "native", "robust", "tools", "livein2.json")

# ------------------------------------------------------------------ IR
def ir_cmd(src, out_dir, cpp):
    cmd = ["clang", "--target=i686-linux-gnu", "-S", "-emit-llvm", "-O0", "-g0", "-w", "-fno-common",
           "-fno-exceptions", "-ferror-limit=3", "-include", COMPAT,
           "-I", os.path.join(out_dir, "shared", "include"), "-I", os.path.dirname(src),
           "-Xclang", "-disable-O0-optnone"]
    if cpp:
        cmd += ["-x", "c++", "-std=gnu++11", "-fno-threadsafe-statics"]
    else:
        cmd += ["-std=gnu11", "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion",
                "-Wno-error=incompatible-pointer-types", "-Wno-error=incompatible-function-pointer-types",
                "-Wno-error=return-type"]
    return cmd


def make_ir(path, out_dir, ir_dir):
    src = os.path.join(out_dir, path)
    ll = os.path.join(ir_dir, path + ".ll")
    if os.path.exists(ll) and os.path.getmtime(ll) >= os.path.getmtime(src):
        return ll
    os.makedirs(os.path.dirname(ll), exist_ok=True)
    r = subprocess.run(ir_cmd(src, out_dir, path.endswith((".cpp", ".cc"))) + ["-o", ll, src],
                       capture_output=True, text=True)
    return ll if r.returncode == 0 else None


RE_DEFINE = re.compile(r"^define\s+(?P<attrs>[^@]*?)(?P<ret>\S+(?: \S+)*?)\s+@(?P<name>\"[^\"]+\"|[\w.$]+)\((?P<params>.*?)\)\s*(?:#\d+\s*)?.*\{$", re.M)
RE_CALL = re.compile(r"\b(?:call|invoke)\s+(?:\w+\s+)*?(?P<ret>[^@]*?)\s*@(?P<name>\"[^\"]+\"|[\w.$]+)\((?P<args>.*)\)")


def split_top(s):
    out, d, cur = [], 0, []
    for ch in s:
        if ch in "([{<":
            d += 1
        elif ch in ")]}>":
            d -= 1
        if ch == "," and d == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        out.append("".join(cur).strip())
    return out


def arg_kind(a):
    """'i' (32-bit or smaller integer / pointer), 'l' (i64), 'f' (float), 'd' (double),
    'b:<bytes>' (byval aggregate), 's' (sret), '?' other."""
    if " sret" in a or a.startswith("ptr sret"):
        return "s"
    m = re.match(r"ptr\s+(?:noundef\s+)?byval\((.*?)\)\s+align\s+(\d+)", a)
    if m or " byval(" in a:
        return "b"
    t = a.split()[0] if a.split() else ""
    if t in ("i1", "i8", "i16", "i32", "ptr") or t.endswith("*"):
        return "i"
    if t == "i64":
        return "l"
    if t == "float":
        return "f"
    if t == "double":
        return "d"
    if t == "x86_fp80":
        return "d"
    return "?"


def parse_ir(ll):
    """({name: [kinds] of defined functions}, [(caller, callee, [kinds])])"""
    text = open(ll, errors="replace").read()
    defs, calls = {}, []
    cur = None
    for line in text.splitlines():
        if line.startswith("define "):
            m = RE_DEFINE.match(line)
            if not m:
                cur = None
                continue
            name = m.group("name").strip('"')
            params = split_top(m.group("params"))
            kinds = [arg_kind(p) for p in params if p and p != "..."]
            sret = any(k == "s" for k in kinds)
            internal = " internal " in (" " + m.group("attrs") + " ") or " private " in (" " + m.group("attrs") + " ")
            defs[name] = {"kinds": [k for k in kinds if k != "s"], "sret": sret, "internal": internal}
            cur = name
            continue
        if line.startswith("}"):
            cur = None
            continue
        if cur and ("call " in line or "invoke " in line):
            m = RE_CALL.search(line)
            if not m:
                continue
            name = m.group("name").strip('"')
            if name.startswith("llvm."):
                continue
            args = split_top(m.group("args").rsplit(")", 1)[0] if m.group("args").count(")") > m.group("args").count("(") else m.group("args"))
            kinds = [arg_kind(x) for x in args]
            calls.append((cur, name, [k for k in kinds if k != "s"], any(k == "s" for k in kinds)))
    return defs, calls


# ------------------------------------------------------------------ ARM / i386 layouts
def arm_locs(kinds):
    """ARM location words per parameter (AAPCS, hard-float VFP with back-filling):
    ['r0'], ['r2','r3'], ['s0'], ['s2','s3'] (d1), ['stk0'] ... ; None for an unknown kind."""
    nr, sp, sfree = 0, 0, set(range(16))
    out = []
    vfp_done = False
    for k in kinds:
        if k in ("i", "b"):
            if k == "b":  # by-value aggregate: words unknown here
                return None
            if nr < 4:
                out.append(["r%d" % nr])
                nr += 1
            else:
                out.append(["stk%d" % sp])
                sp += 4
        elif k == "l":
            if nr % 2:
                nr += 1
            if nr <= 2:
                out.append(["r%d" % nr, "r%d" % (nr + 1)])
                nr += 2
            else:
                nr = 4
                sp = (sp + 7) & ~7
                out.append(["stk%d" % sp, "stk%d" % (sp + 4)])
                sp += 8
        elif k == "f":
            s = min(sfree) if sfree and not vfp_done else None
            if s is not None:
                sfree.discard(s)
                out.append(["s%d" % s])
            else:
                vfp_done = True
                out.append(["stk%d" % sp])
                sp += 4
        elif k == "d":
            pair = next((d for d in range(8) if 2 * d in sfree and 2 * d + 1 in sfree), None) if not vfp_done else None
            if pair is not None:
                sfree -= {2 * pair, 2 * pair + 1}
                out.append(["s%d" % (2 * pair), "s%d" % (2 * pair + 1)])
            else:
                vfp_done = True
                sp = (sp + 7) & ~7
                out.append(["stk%d" % sp, "stk%d" % (sp + 4)])
                sp += 8
        else:
            return None
    return out


def i386_slots(kinds):
    """i386 cdecl word offset of every word of every parameter."""
    off, out = 0, []
    for k in kinds:
        if k in ("l", "d"):
            out.append([off, off + 4])
            off += 8
        else:
            out.append([off])
            off += 4
    return out


def loc_map(kinds):
    """{ARM location word: i386 offset} or None."""
    a = arm_locs(kinds)
    if a is None:
        return None
    m = {}
    for locs, slots in zip(a, i386_slots(kinds)):
        for l, s in zip(locs, slots):
            m[l] = s
    return m


def regs_passed(kinds):
    a = arm_locs(kinds)
    if a is None:
        return None
    return {l for locs in a for l in locs if not l.startswith("stk")}


# Ghidra prototypes (build_decomp's sigs: 'ret func_X(type name, ...)') -> kinds
def ghidra_kinds(sig):
    m = re.search(r"\((.*)\)\s*$", sig)
    if not m:
        return None
    ps = [p.strip() for p in split_top(m.group(1))]
    if ps in ([], ["void"]):
        return []
    out = []
    for p in ps:
        if p == "...":
            continue
        t = re.sub(r"\s*\b\w+$", "", p).strip() if not p.endswith("*") else p
        if "*" in p:
            out.append("i")
        elif re.match(r"^(float)$", t):
            out.append("f")
        elif re.match(r"^(double)$", t):
            out.append("d")
        elif re.match(r"^(longlong|ulonglong|undefined8|qword|int8|uint8|long long|unsigned long long|ulong long)$", t):
            out.append("l")
        else:
            out.append("i")
    return out


# ------------------------------------------------------------------ check
def default_resolver():
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import build_decomp as BD
    aliases = {}
    for f in ("symbol_aliases.txt", "symbol_aliases_manual.txt"):
        p = os.path.join(ROOT, "native", f)
        if os.path.exists(p):
            for l in open(p):
                if l.strip() and not l.startswith("#"):
                    a, b = l.split()[:2]
                    aliases[a] = b

    def resolve(name):
        if name in aliases:
            return aliases[name][5:]
        c = BD.canon_ref(name)
        if c and c.startswith("func_"):
            return c[5:]
        return None
    return resolve, BD.pick_primary


def check(matched, out_dir, ir_dir, sigs, args=True, abi=True, jobs=None, livein=None, log=print):
    """matched: {addr: path} of the matched sources the build would use; sigs: {func_X: Ghidra
    prototype}. Returns ({addr: [reasons]} to build from Ghidra instead, stats)."""
    resolve, _ = default_resolver()
    lv = livein or {u: v["final"] for u, v in json.load(open(LIVEIN2)).items()}
    paths = sorted(set(matched.values()))
    with cf.ThreadPoolExecutor(jobs or os.cpu_count()) as ex:
        lls = dict(zip(paths, ex.map(lambda p: make_ir(p, out_dir, ir_dir), paths)))
    by_path = collections.defaultdict(list)
    for a, p in matched.items():
        by_path[p].append(a)
    info = {}  # path -> (defs, calls)
    for p, ll in lls.items():
        if ll:
            try:
                info[p] = parse_ir(ll)
            except Exception as e:  # noqa: BLE001
                log("matched_abi: %s: %s" % (p, e))
    stats = collections.Counter(ir_failed=sum(1 for v in lls.values() if not v))
    # the definition of each matched address
    mdef = {}
    for p, (defs, calls) in info.items():
        for a in by_path[p]:
            ext = {n: d for n, d in defs.items() if not d["internal"]}
            cand = [n for n in ext if resolve(n) == a] or [n for n in ext if a.upper() in n.upper()]
            if not cand and len(ext) == 1:
                cand = list(ext)
            if cand:
                mdef[a] = ext[sorted(cand, key=len)[0]]
    flagged = collections.defaultdict(list)
    # 1. definitions vs the Ghidra prototype (what Ghidra callers pass) + sret
    if abi:
        for a, d in mdef.items():
            if d["sret"]:
                flagged[a].append("sret: struct returned by value (i386 hidden pointer popped by the callee)")
                stats["def_sret"] += 1
            g = sigs.get("func_" + a)
            gk = ghidra_kinds(g) if g else None
            if gk is None:
                continue
            mm, gm = loc_map(d["kinds"]), loc_map(gk)
            if mm is None or gm is None:
                if "b" in d["kinds"]:
                    flagged[a].append("layout: by-value aggregate parameter")
                    stats["def_byval"] += 1
                continue
            bad = sorted(l for l in set(mm) & set(gm) if mm[l] != gm[l])
            if bad:
                why = "l" if "l" in d["kinds"] else ("d" if "d" in d["kinds"] else "f")
                flagged[a].append("layout: definition %s vs Ghidra %s differ at %s" % (
                    "".join(d["kinds"]), "".join(gk), ",".join(bad)))
                stats["def_layout_" + {"l": "i64", "d": "double", "f": "float_order"}[why]] += 1
    # 2. calls: too few register arguments (args), layout vs the callee's definition (abi);
    # iterated because a fallback changes which definition a callee has
    for it in range(8):
        before = len(flagged)
        for p, (defs, calls) in info.items():
            owners = [a for a in by_path[p]]
            if all(a in flagged for a in owners):
                continue
            for caller, callee, kinds, sret in calls:
                x = resolve(callee)
                if not x:
                    continue
                if args and x in lv:
                    passed = regs_passed(kinds)
                    if passed is not None:
                        need = set(lv[x])
                        miss = sorted(need - passed, key=lambda r: (r[0], int(r[1:])))
                        if miss:
                            for a in owners:
                                if a not in flagged or not any(r.startswith("args") for r in flagged[a]):
                                    stats["call_args"] += 1
                                flagged[a].append("args: %s -> func_%s passes %s, callee reads %s" % (
                                    callee, x, "".join(kinds) or "nothing", ",".join(miss)))
                if abi:
                    cdef = mdef.get(x) if x in mdef and x not in flagged else None
                    ck = cdef["kinds"] if cdef else (ghidra_kinds(sigs["func_" + x]) if "func_" + x in sigs else None)
                    if ck is None:
                        continue
                    mm, cm = loc_map(kinds), loc_map(ck)
                    if mm is None or cm is None:
                        continue
                    bad = sorted(l for l in set(mm) & set(cm) if mm[l] != cm[l])
                    if bad:
                        for a in owners:
                            if not any(r.startswith("layout: call") for r in flagged[a]):
                                stats["call_layout"] += 1
                            flagged[a].append("layout: call %s -> func_%s %s vs %s definition %s" % (
                                callee, x, "".join(kinds), "matched" if cdef else "Ghidra", "".join(ck)))
        if len(flagged) == before:
            break
    for a in flagged:  # dedupe
        flagged[a] = sorted(set(flagged[a]))
    stats["flagged"] = len(flagged)
    stats["flagged_args"] = sum(1 for v in flagged.values() if any(r.startswith("args") for r in v))
    stats["flagged_layout_or_sret"] = sum(1 for v in flagged.values() if any(not r.startswith("args") for r in v))
    stats["matched_checked"] = len(mdef)
    return dict(flagged), stats


def matched_sources():
    """{addr: mirrored path} exactly as build_decomp selects matched sources."""
    m = json.load(open(os.path.join(DEC, "functions.json")))
    users = collections.Counter(e["path"] for e in m.values() if e["status"] in ("honest", "hack"))
    return {a: e["path"] for a, e in m.items() if e["status"] in ("honest", "hack") and users[e["path"]] == 1}


def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", default=os.path.join(ROOT, "build", "matched_abi.json"))
    ap.add_argument("--ir-dir", default=os.path.join(ROOT, "build", "matched_ir"))
    ap.add_argument("--decomp-out", default=os.path.join(ROOT, "build", "decomp"))
    ap.add_argument("--ghidra-dir", default=os.environ.get("ALBW_GHIDRA_DIR", os.path.join(ROOT, "build", "ghidra_analyzed3")))
    a = ap.parse_args()
    sys.path.insert(0, os.path.join(DEC, "tools"))
    import import_ghidra
    sigs = import_ghidra.signatures(a.ghidra_dir)
    flagged, stats = check(matched_sources(), a.decomp_out, a.ir_dir, sigs)
    fam = collections.Counter()
    m = matched_sources()
    for x, rs in flagged.items():
        fam["/".join(m[x].split("/")[1:3])] += 1
    json.dump({"stats": stats, "families": fam.most_common(), "flagged": flagged}, open(a.report, "w"), indent=1, sort_keys=True)
    print(json.dumps(stats, indent=1, sort_keys=True))
    print("families:", fam.most_common(15))


if __name__ == "__main__":
    main()
