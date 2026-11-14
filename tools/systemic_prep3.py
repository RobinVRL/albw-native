#!/usr/bin/env python3
"""Inputs for the round-3 systemic fixes (tools/systemic_rebuild3.sh), decided from the EU ARM code.

  ../albw-decomp-ai/.venv/bin/python tools/systemic_prep3.py <ghidra_sigs.json> [dump_dir]

<ghidra_sigs.json>: the project's current signatures (tools/ghidra/albw_export_sigs.py; the
project already has rounds 1 and 2 applied, so everything here is a delta on top of them).
[dump_dir]: the current Ghidra dump (default build/ghidra_analyzed4), for the &stack0x objects.
Needs native/robust/tools/livein3.json (tools/livein3.py) and native/robust/systemic3/
retclass.json (tools/retclass3.py).

Writes native/robust/systemic3/:
  params.json    (defect 2) tools/systemic_prep2.py's parameter verdicts recomputed with
                 livein3 (livein2 + the vpush {d0} / d-register float arguments), for
                 tools/ghidra/albw_fix_params.py: what the project still misses
  retfix.json    (defect 1) {func_<USA>: {"ret": "void"|"undefined4", "s0": class, "why"}}: functions the
                 project types float whose ARM code never produces s0 (s0 passes through,
                 or only indirect callees could write it) or whose s0 nobody consumes (no caller
                 reads it, no function passes it on to a consumer, not reachable through a
                 pointer). "undefined4" when r0 carries a result callers use (read after the
                 call / forwarded by a tail call). For import_ghidra.py ALBW_CONVERT_V4
                 (ALBW_RETFIX=<this file>)
  varargs.json   (defect 4) {USA: {"eu", "fixed": n, "why"}}: variadic functions (armcc spills the
                 argument registers at entry and passes the address after the last fixed
                 argument on as the va_list), for tools/ghidra/albw_fix_varargs.py
  stackobjs.json (defect 7) {USA: {"eu", "objs": [[entry offset, size]], "why"}}: &stack0x
                 objects the ARM code fills with stores Ghidra dropped (no variable covers them),
                 extent from the sp-relative stores, for tools/ghidra/albw_fix_stackobjs.py
  report.json    counts
  returns.json   (class b of the hot agent) {USA: {"eu", "ret": "this", ...}} for
                 albw_fix_returns.py: functions that return their first argument on every path
                 (loops included) that the project types void
and native/returns_this3.json (defect 6): native/returns_this.json + those functions, without
the functions that also return a float in s0 that somebody reads (dropped list with reasons in
native/robust/systemic3/returns_this_dropped.json).
"""
import collections
import glob
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROBUST = os.path.join(ROOT, "native", "robust")
OUT = os.path.join(ROBUST, "systemic3")
sys.path.insert(0, os.path.join(ROBUST, "tools"))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import livein2 as M  # noqa: E402
import livein as L  # noqa: E402

B = 0x100000
md = L.capstone.Cs(L.capstone.CS_ARCH_ARM, L.capstone.CS_MODE_ARM)
md.skipdata = True


def insns(eu, n=None, end=None):
    import bisect
    if end is None:
        i = bisect.bisect_right(L.starts, eu)
        end = L.starts[i] if i < len(L.starts) else eu + 0x1000
        end = min(end, eu + 0x4000)
    out = []
    for ins in md.disasm(L.code[eu - B:end - B], eu):
        out.append(ins)
        if n and len(out) >= n:
            break
    return out


def reglist(op):
    if "{" not in op:
        return []
    out = []
    for nm in op[op.index("{") + 1:op.index("}")].split(","):
        nm = nm.strip()
        if "-" in nm:
            a0, a1 = nm.split("-")
            out += ["%s%d" % (a0[0], k) for k in range(int(a0[1:]), int(a1[1:]) + 1)]
        elif nm:
            out.append(nm)
    return out


# ------------------------------------------------------------------ prologue / sp tracking
def prologue(eu):
    """(depth after the prologue, spill) : bytes between entry sp and sp after the pushes/sub,
    and the argument-register spill (list of rN pushed by a push of only r0-r3, or None)."""
    depth, spill = 0, None
    for ins in insns(eu, 12):
        m, op = ins.mnemonic, ins.op_str
        if m == "push" or (m == "stmdb" and op.startswith("sp!")):
            regs = reglist(op)
            if spill is None and depth == 0 and regs and all(r in ("r0", "r1", "r2", "r3") for r in regs):
                spill = regs
            depth += 4 * len(regs)
        elif m == "vpush":
            regs = reglist(op)
            depth += sum(8 if r[0] == "d" else 4 for r in regs)
        elif m == "sub" and re.match(r"sp, sp, #(0x[0-9a-f]+|\d+)$", op):
            depth += int(op.split("#")[1], 0)
            break
        elif re.match(r"(mov|ldr|add|str|cmp)", m) and "sp" not in op and "pc" not in op.split(",")[0]:
            continue  # scheduled into the prologue (mov ip, r2 / ldr r4, =x)
        else:
            break
    return depth, spill


def sp_stores(eu):
    """{entry offset: bytes stored} of the sp-relative stores of the function (sp, or a register
    holding sp + k), offsets relative to the entry sp; None if sp moves after the prologue."""
    depth, _ = prologue(eu)
    spreg = {}
    out = {}
    seen_sub = False
    for ins in insns(eu):
        m, op = ins.mnemonic, ins.op_str
        if (m in ("sub", "add") and op.startswith("sp, sp")):
            if seen_sub or m == "add":
                if m == "add":
                    break  # epilogue
                return None
            seen_sub = True
            continue
        mm = re.match(r"(\w+), sp(?:, #(0x[0-9a-f]+|\d+))?$", op)
        if m in ("add", "mov") and mm:
            spreg[mm.group(1)] = int(mm.group(2), 0) if mm.group(2) else 0
            continue
        size = {"str": 4, "strb": 1, "strh": 2, "strd": 8}.get(re.sub(r"(eq|ne|hs|lo|cs|cc|mi|pl|hi|ls|ge|lt|gt|le)$", "", m))
        if m.startswith("vstr"):
            size = 8 if re.match(r"d\d+", op) else 4
        if size:
            ms = re.match(r"\w+, (?:\w+, )?\[(\w+)(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
            if ms:
                b = 0 if ms.group(1) == "sp" else spreg.get(ms.group(1))
                if b is not None:
                    o = b + (int(ms.group(2), 0) if ms.group(2) else 0) - depth
                    for k in range(size):
                        out[o + k] = True
            continue
        if m.startswith(("stm", "vstm")) and not op.startswith("sp!"):
            ms = re.match(r"(\w+)!?, \{", op)
            if ms:
                b = 0 if ms.group(1) == "sp" else spreg.get(ms.group(1))
                if b is not None:
                    o = b - depth
                    for r in reglist(op):
                        n = 8 if r[0] == "d" else 4
                        for k in range(n):
                            out[o + k] = True
                        o += n
            continue
        md2 = re.match(r"(\w+),", op)
        if md2 and md2.group(1) in spreg and not m.startswith(("str", "stm", "cmp", "tst", "vstr")):
            del spreg[md2.group(1)]
    return out


# ------------------------------------------------------------------ defect 4: variadic functions
def varargs():
    out = {}
    for u, eu in sorted(L.usa2eu.items()):
        if not (B <= eu < L.TEXT_END) or u in M.NOT_ARM:
            continue
        depth, spill = prologue(eu)
        if not spill or spill[-1] != "r3":
            continue
        n = len(spill)
        # the va_list: `add rX, sp, #k` = entry sp + d, with d past the first spilled register
        d = None
        cur = 0
        for ins in insns(eu, 24):
            m, op = ins.mnemonic, ins.op_str
            if m == "push" or (m == "stmdb" and op.startswith("sp!")):
                cur += 4 * len(reglist(op))
                continue
            if m == "vpush":
                cur += sum(8 if r[0] == "d" else 4 for r in reglist(op))
                continue
            if m == "sub" and op.startswith("sp, sp, #"):
                cur += int(op.split("#")[1], 0)
                continue
            mm = re.match(r"(\w+), sp, #(0x[0-9a-f]+|\d+)$", op)
            if m == "add" and mm:
                dd = int(mm.group(2), 0) - cur
                if -4 * n < dd <= 0x40:
                    d = dd
                    break
        if d is None:
            continue
        fixed = (4 - n) + (d + 4 * n) // 4
        if fixed < 1:
            continue
        out[u] = {"eu": "%08X" % eu, "fixed": fixed, "spill": spill,
                  "why": "push {%s} at entry, va_list = entry_sp%+d (after %d fixed argument%s)"
                         % (", ".join(spill), d, fixed, "s" if fixed > 1 else "")}
    return out


# ------------------------------------------------------------------ defect 7: stack objects
OBJ = re.compile(r"&stack0x([0-9a-f]{8})\b")
LOCAL = re.compile(r"\b(?:local|[a-z]*Stack)_([0-9a-f]+)\b")


def stackobjs(dump_dir):
    out = {}
    stats = collections.Counter()
    for f in sorted(glob.glob(os.path.join(dump_dir, "func_*.c"))):
        u = os.path.basename(f)[5:13]
        t = open(f, errors="replace").read()
        offs = sorted(set(int(x, 16) - 0x100000000 for x in OBJ.findall(t) if int(x, 16) >= 0x80000000))
        if not offs or u not in L.usa2eu:
            continue
        stats["functions_with_stack0x_objects"] += 1
        st = sp_stores(L.usa2eu[u])
        if st is None:
            stats["sp_moves_after_prologue"] += 1
            continue
        # offsets C already writes: the named locals (local_XX = entry - 0xXX) assigned in the text
        named = set()
        for m in re.finditer(r"\b((?:local|[a-z]*Stack)_([0-9a-f]+))\s*(?:\[[^\]]*\])?\s*=[^=]", t):
            named.add(-int(m.group(2), 16))
        # named locals read as values somewhere (not only assigned / address-taken): separate
        # variables, an object never extends over them (004ABA98: local_3c after the create arg)
        body = t[t.find("\n{"):]
        readv = set()
        for m in re.finditer(r"(&\s*)?\b(?:local|[a-z]*Stack)_([0-9a-f]+)\b(\s*(?:\[[^\]]*\])?\s*=(?!=))?", body):
            if not m.group(1) and not m.group(3):
                readv.add(-int(m.group(2), 16))
        objs = []
        for k, o in enumerate(offs):
            lim = offs[k + 1] if k + 1 < len(offs) else 0
            lim = min([lim] + [r for r in readv if r > o])
            end, a, gap = o, o, 0
            while a < lim:
                w = any(st.get(a + j) for j in range(4))
                if w:
                    end, gap = a + 4, 0
                else:
                    break  # the object is the contiguous run of stored words
                a += 4
            if end == o:
                stats["objects_no_asm_store"] += 1
                continue
            words = [a for a in range(o, end, 4) if any(st.get(a + j) for j in range(4))]
            lost = [a for a in words if a not in named]
            if not lost:
                stats["objects_already_written_in_c"] += 1
                continue
            objs.append([o, end - o])
            stats["objects_with_dropped_stores"] += 1
            stats["dropped_store_words"] += len(lost)
        if objs:
            out[u] = {"eu": "%08X" % L.usa2eu[u], "objs": objs,
                      "why": "sp-relative stores into the &stack0x object(s) with no C assignment"}
    return out, stats


def main():
    sigs = json.load(open(sys.argv[1]))
    dump_dir = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, "build", "ghidra_analyzed4")
    os.makedirs(OUT, exist_ok=True)
    M.NOT_ARM.update(M.not_arm_code())
    u2e = {u: "%08X" % e for u, e in L.usa2eu.items()}
    rep = {}
    # ---- defect 2: parameters with livein3
    import systemic_prep2 as P2
    lv3 = json.load(open(os.path.join(ROBUST, "tools", "livein3.json")))
    rthis = set(json.load(open(os.path.join(ROOT, "native", "returns_this.json"))))
    retkind = {}
    for u in lv3:
        sig = sigs.get(u2e.get(u))
        g = sig["ret"][0] if sig else "undefined"
        k = "float" if g in ("float", "double") else None if g in ("undefined", "void") else "int"
        if k is None and u in rthis:
            k = "int"
        if k:
            retkind[u] = k
    params, ps = P2.prep_params(lv3, sigs, u2e, retkind)
    dregs = {u for u, v in lv3.items() if v.get("dregs")}
    ps["from_dregs"] = sum(1 for u in params if u in dregs)
    json.dump(params, open(os.path.join(OUT, "params.json"), "w"), indent=1, sort_keys=True)
    rep["params"] = dict(ps)
    print("params: %d functions %s" % (len(params), dict(ps)), file=sys.stderr)
    # ---- defect 1: return classes
    rc = json.load(open(os.path.join(OUT, "retclass.json")))
    retfix = {}
    rs = collections.Counter()
    # native definitions (native/**: hand-written, they replace the converted ones at link): a
    # non-float one whose ARM s0 is not a clean float result decides the class (i386: callers
    # declaring float would pop an empty x87 st(0) per call)
    natdef = {}
    for f in glob.glob(os.path.join(ROOT, "native", "**", "*.c"), recursive=True):
        if os.sep + "test" + os.sep in f:
            continue
        for m in re.finditer(r"^([A-Za-z_][\w \*]*?)\s*\bfunc_([0-9A-F]{8})\s*\([^;{]*\)\s*\{",
                             open(f, errors="replace").read(), re.M):
            natdef.setdefault(m.group(2), (re.sub(r"\b(static|inline)\b", "", m.group(1)).strip(), os.path.relpath(f, ROOT)))
    for u, r in rc.items():
        sig = sigs.get(u2e.get(u))
        if not sig or sig["ret"][0] not in ("float", "double"):
            continue
        rs["declared_float"] += 1
        why = None
        if r["s0"] == "pass":
            why = "s0 is the incoming s0 on every return path (never written)"
        elif r["s0"] == "nowrite":
            why = "no path writes s0 (entry value or an indirect callee's only)"
        elif r["s0"] == "mixed" and not r.get("s0_used") and r["sure"]:
            why = "s0 (%s) is consumed by nobody: no caller reads it, no consumer passes it on, no pointer to it" % r["s0"]
        elif u in natdef and natdef[u][0].split()[0] not in ("float", "double") and r["s0"] != "float":
            why = "native definition %s returns %s and the ARM s0 is no clean float result (%s)" % (
                natdef[u][1], natdef[u][0], r["s0"])
        if why:
            # r0 still carries a result somebody uses (callers read it, or forward it with a
            # call in tail position: 00151148 -> 002C34A4): the class is int, not void
            rd = r["reads"]
            ret = "undefined4" if (rd.get("r0") or rd.get("r0_tail")) and r["r0"] != "unknown" else "void"
            retfix["func_" + u] = {"ret": ret, "s0": r["s0"], "why": why, "reads": rd}
            rs["to_%s" % ret] += 1
            rs["to_void_" + r["s0"]] += 1
        else:
            rs["kept_float_" + r["s0"]] += 1
    # native definitions that return float where the table now says void/int: x87check (link.sh)
    # pops their st(0) on i386; their owners should change them to the ARM class
    rep["native_float_vs_retfix"] = sorted("%s %s" % (k, natdef[k[5:]][1]) for k in retfix if k[5:] in natdef
                                           and natdef[k[5:]][0].split()[0] in ("float", "double"))
    json.dump(retfix, open(os.path.join(OUT, "retfix.json"), "w"), indent=1, sort_keys=True)
    rep["retfix"] = dict(rs)
    print("retfix: %d float-typed functions made void %s" % (len(retfix), dict(rs)), file=sys.stderr)
    # ---- defect 3: 64-bit returns (informational: the converter keeps Ghidra's 64-bit types)
    r3 = collections.Counter()
    for u, r in rc.items():
        sig = sigs.get(u2e.get(u))
        g = sig["ret"][0] if sig else None
        if g in ("undefined8", "longlong", "ulonglong", "qword"):
            r3["ghidra_64bit_returns"] += 1
        elif r["r1"] == "pair":
            r3["arm_pair_not_64bit_in_ghidra"] += 1
            r3.setdefault("examples", [])
    rep["returns64"] = {k: v for k, v in r3.items() if k != "examples"}
    # ---- defect 4
    va = varargs()
    json.dump(va, open(os.path.join(OUT, "varargs.json"), "w"), indent=1, sort_keys=True)
    rep["varargs"] = {"functions": len(va), "already_varargs_in_project":
                      sum(1 for u, v in va.items() if (sigs.get(v["eu"]) or {}).get("varargs"))}
    print("varargs: %d variadic functions" % len(va), file=sys.stderr)
    # ---- defect 7
    so, sst = stackobjs(dump_dir)
    json.dump(so, open(os.path.join(OUT, "stackobjs.json"), "w"), indent=1, sort_keys=True)
    rep["stackobjs"] = dict(sst, functions=len(so))
    print("stackobjs: %d functions %s" % (len(so), dict(sst)), file=sys.stderr)
    # ---- defect 6: returns_this entries that are float functions
    rt = json.load(open(os.path.join(ROOT, "native", "returns_this.json")))
    # additions: r0 is the untouched incoming r0 on every return path (retclass3, loops
    # included: tools/returns_this.py gives up on backward branches, e.g. the ctor 00407788) and
    # r0 is a parameter; the project types them void -> returns3.json "this" for
    # albw_fix_returns.py, so the definition returns param_1 and callers use it
    li = json.load(open(os.path.join(ROBUST, "tools", "livein3.json")))
    have = set(rt)
    returns3 = {}
    added = []
    for u, r in sorted(rc.items()):
        if u in have or not r.get("r0_entry_only") or "r0" not in li.get(u, {}).get("final", []):
            continue
        if r["s0"] in ("float", "mixed") and (r["reads"].get("s0") or r.get("s0_used")):
            continue
        added.append(u)
        sig = sigs.get(u2e.get(u))
        if sig and sig["ret"][0] in ("undefined", "void"):
            returns3[u] = {"eu": u2e[u], "ret": "this", "conf": "high", "ghidra": sig["ret"][0],
                           "why": "r0 is the incoming r0 on every return path (retclass3); callers read r0 at %d of %d sites"
                                  % (r["reads"].get("r0", 0), r["reads"].get("sites", 0))}
    json.dump(returns3, open(os.path.join(OUT, "returns.json"), "w"), indent=1, sort_keys=True)
    rt = sorted(set(rt) | set(added))
    keep, drop = [], {}
    for u in rt:
        r = rc.get(u)
        if r and r["s0"] in ("float", "mixed") and (r["reads"].get("s0") or r.get("s0_used")) and r["s0"] != "pass":
            drop[u] = {"s0": r["s0"], "reads": r["reads"],
                       "why": "returns r0 = this AND writes s0, which callers read: a float function"}
        else:
            keep.append(u)
    json.dump(keep, open(os.path.join(ROOT, "native", "returns_this3.json"), "w"), indent=0)
    json.dump(drop, open(os.path.join(OUT, "returns_this_dropped.json"), "w"), indent=1, sort_keys=True)
    rep["returns_this"] = {"before": len(have), "added_loops_etc": len(added), "kept": len(keep),
                           "dropped_float": len(drop), "project_void_to_this": len(returns3)}
    print("returns_this: %d -> %d (%d float returners dropped)" % (len(rt), len(keep), len(drop)), file=sys.stderr)
    json.dump(rep, open(os.path.join(OUT, "report.json"), "w"), indent=1, sort_keys=True)


if __name__ == "__main__":
    main()
