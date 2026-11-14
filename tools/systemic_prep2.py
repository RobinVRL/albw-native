#!/usr/bin/env python3
"""Inputs for the round-2 systemic Ghidra-project fixes, decided from the EU ARM code.

  ../albw-decomp-ai/.venv/bin/python tools/systemic_prep2.py <ghidra_sigs.json>   (~1 min)

<ghidra_sigs.json>: the project's current signatures (tools/ghidra/albw_export_sigs.py).
Needs native/robust/tools/livein2.json (native/robust/tools/livein2.py, ~3 min).

Writes native/robust/systemic2/:
  params.json   {USA: {"eu", "r", "s", "keep_r", "keep_s", "proven", "ghidra": [...], "why"}}
                for tools/ghidra/albw_fix_params.py: functions whose Ghidra parameter list misses
                registers the code reads at entry (r/s = positional counts from livein2 "final"),
                or holds register parameters no path can read (above keep_r/keep_s, from
                livein2 "may", applied only when "proven").
  returns.json  {USA: {"eu", "ret": "int"|"float", "conf": "high", "why"}} in the format of
                tools/ghidra/albw_fix_returns.py: Ghidra `void`/undefined functions that return a
                value, round 2:
                  own-code evidence: on some path the function writes r0 (s0) after its last
                    call and nothing reads it before the return (armcc keeps no dead write: it is
                    the return value), and on every other return path r0 (s0) is such a write or
                    a callee's result (never the incoming value / a temp read again). Then every
                    return path returns r0, including the paths that end with a call inside an
                    if-block (the "result lost" class).
                  callers (1 calling function, round 1's "medium"), when the function's own code
                    does not contradict it (no path returns with r0 holding the incoming r0 only).
                Functions already fixed in round 1 (native/robust/systemic/returns.json high) and
                the proven returns-this ones are not repeated.
  report.json   counts.
"""
import collections
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ROBUST = os.path.join(ROOT, "native", "robust")
OUT = os.path.join(ROBUST, "systemic2")
sys.path.insert(0, os.path.join(ROBUST, "tools"))
import livein2 as M  # noqa: E402  (installs the corrected summarize)
import livein as L  # noqa: E402

B = 0x100000
md = L.capstone.Cs(L.capstone.CS_ARCH_ARM, L.capstone.CS_MODE_ARM)


def cnt(regs, k):
    return max([int(x[1:]) + 1 for x in regs if x[0] == k] + [0])


def ghidra_regs(sig):
    g = set()
    for p in sig["params"]:
        g |= set(re.findall(r"\b([rs]\d+):", p[2]))
        for d in re.findall(r"\bd(\d+):", p[2]):
            g |= {"s%d" % (2 * int(d)), "s%d" % (2 * int(d) + 1)}
    return g


def prep_params(lv, sigs, u2e, retkind=None):
    """Parameter verdicts. Functions outside the EU/USA table (native/extra_functions.json) are
    only raised when something calls them (bl / tail b from another function) or a pointer
    word refers to them: many are loop heads / mid-function labels Ghidra made functions, whose
    'live-in' registers are the enclosing function's temporaries."""
    out = {}
    stats = collections.Counter()
    emap = json.load(open(os.path.join(os.path.dirname(ROOT), "albw-decomp-ai", "shared", "eu_usa_map.json")))
    ev = json.load(open(os.path.join(ROBUST, "tools", "callsite_evidence.json")))
    pt = os.path.join(ROOT, "build", "ptr_targets.json")
    ptrs = set(json.load(open(pt))) if os.path.exists(pt) else set()
    for u, v in lv.items():
        e = u2e.get(u)
        sig = sigs.get(e)
        if sig is None or sig.get("thunk") or sig.get("varargs"):
            continue
        # a branch from the enclosing function into a mid-function label counts as a tail
        # "call site": only bl calls and pointers prove an extra start is a function
        referenced = u in emap or ev.get(u, {}).get("calls") or int(e, 16) in ptrs
        g = ghidra_regs(sig)
        gr, gs = cnt(g, "r"), cnt(g, "s")
        fr, fs = cnt(v["final"], "r"), cnt(v["final"], "s")
        kr, ks = max(fr, cnt(v["may"], "r")), max(fs, cnt(v["may"], "s"))
        rk = (retkind or {}).get(u)
        if rk and (fr < 1 or kr < 1 or (rk == "float" and (fs < 1 or ks < 1))):
            # the return value is the incoming r0 (s0) on some path (returns-this leaves such as
            # an empty constructor `bx lr`): the caller reads it, so it is a parameter
            st = return_states(u) or []
            if rk != "float" and any(r0 == "entry" for r0, s0 in st):
                fr, kr = max(fr, 1), max(kr, 1)
                stats["r0_returned_unchanged"] += 1
            if rk == "float" and any(s0 == "entry" for r0, s0 in st):
                fs, ks = max(fs, 1), max(ks, 1)
                stats["s0_returned_unchanged"] += 1
        missing = [r for r in ["r%d" % k for k in range(fr)] + ["s%d" % k for k in range(fs)] if r not in g]
        if missing and not referenced:
            stats["unreferenced_extra_not_raised"] += 1
            fr, fs, missing = gr, gs, []
        phantom = v["proven"] and (gr > kr or gs > ks)
        if not missing and not phantom:
            continue
        rec = {"eu": e, "r": fr, "s": fs, "keep_r": kr, "keep_s": ks, "proven": v["proven"],
               "ghidra": [p[2] for p in sig["params"]], "final": v["final"], "may": v["may"]}
        if v.get("why"):
            rec["why"] = v["why"]
        out[u] = rec
        if any(x[0] == "r" for x in missing):
            stats["raise_r"] += 1
        if any(x[0] == "s" for x in missing):
            stats["raise_s"] += 1
        if v["proven"] and gr > kr:
            stats["drop_r"] += 1
        if v["proven"] and gs > ks:
            stats["drop_s"] += 1
    return out, stats


# ------------------------------------------------------------------ return values
def word(a):
    return struct.unpack_from("<I", L.code, a - B)[0]


def mnem(a):
    r = list(md.disasm(L.code[a - B:a - B + 4], a))
    return (r[0].mnemonic, r[0].op_str) if r else (None, None)


def return_states(usa):
    """[(r0 state, s0 state)] at every reachable return of the function. A state is
    'entry' (incoming value, never written), 'call' (a callee's result), 'dead' (written after the
    last call and not read before the return), 'live' (written and read again), 'other'."""
    sm = L.SUMMARY.get(usa) or L.summarize(usa)
    L.SUMMARY[usa] = sm
    if not sm:
        return None
    eu, insns = sm
    res = []
    seen = set()
    work = [(eu, ("entry", "entry"))]
    while work and len(seen) < 20000:
        a, st = work.pop()
        if (a, st) in seen:
            continue
        seen.add((a, st))
        ins = insns.get(a)
        if ins is None:
            continue
        kind, cond, rd_, wr_, target, callee, cc, flags = ins
        r0, s0 = st
        if kind == "ret":
            m, op = mnem(a)
            if m is None:  # literal-pool word: not code
                continue
            res.append((r0, s0))
            if cond:
                work.append((a + 4, st))
            continue
        if kind in ("call", "icall"):
            work.append((a + 4, ("call", "call") if not cond else ("other", "other")))
            continue
        if kind in ("tail", "itail"):
            if cond:
                work.append((a + 4, st))
            continue
        w = word(a)

        def upd(cur, reg):
            if reg in rd_ and cur == "dead":
                cur = "live"
            if reg in wr_:
                m, op = mnem(a)
                if w == 0xE1A00000:  # mov r0, r0
                    return cur
                if m and m.startswith(("ldm", "pop", "vldm", "vpop")):
                    return "other"
                return "dead"
            return cur
        nst = (upd(r0, "r0"), upd(s0, "s0"))
        if kind == "b":
            work.append((target, nst))
            if cond:
                work.append((a + 4, nst))
            continue
        if kind == "table":
            for t in target:
                work.append((t, nst))
            work.append((a + 4, nst))
            continue
        work.append((a + 4, nst))
    return res


def prep_returns(lv, sigs, u2e, round1, rthis):
    users = json.load(open(os.path.join(ROBUST, "systemic", "returns.json")))  # round 1 incl. medium
    # native/gameplay/tools/retreads.py (gameplay agent): per callee, call sites whose caller
    # reads r0 / s0 after the call (linear walk, conditional bl included). Same armcc argument
    # as round 1: a caller never reads r0/s0 after a call to a function compiled as void.
    rp = os.path.join(ROOT, "native", "gameplay", "tools", "retreads.json")
    rr = json.load(open(rp)) if os.path.exists(rp) else {}
    out = {}
    stats = collections.Counter()
    for u in sorted(lv):
        e = u2e.get(u)
        sig = sigs.get(e)
        if sig is None or sig.get("thunk") or u in M.NOT_ARM:
            continue
        ret = sig["ret"][0]
        isvoid = ret in ("undefined", "void")
        isfloat = ret in ("float", "double")
        t = rr.get(u, {})
        st0 = None
        if not isfloat and t.get("s0") and t.get("r0"):
            # callers read both: a float leaf that leaves r0 untouched (every return has the
            # incoming r0, e.g. Vec3 normalize 00115DC8 returns the length in s0 and callers
            # keep using the vector in r0) returns the float
            st0 = return_states(u) or []
            if st0 and all(r0 == "entry" and s0 in ("dead", "live") for r0, s0 in st0):
                out[u] = {"eu": e, "ret": "float", "conf": "high", "ghidra": ret,
                          "why": "callers read s0 (%d sites) and r0 (%d); r0 is the untouched argument on every "
                                 "return path, s0 is written on every one" % (t["s0"], t["r0"])}
                stats["retreads_float_leaf"] += 1
                continue
        if not isfloat and t.get("s0") and not t.get("r0") and u not in round1:
            # lost float return: callers read s0, Ghidra says void / int (silent: a stale
            # variable is reloaded instead, no in_s0 marker; x87 class mismatch on i386)
            out[u] = {"eu": e, "ret": "float", "conf": "high", "ghidra": ret,
                      "why": "callers read s0 after the call at %d of %d sites (retreads.json)" % (t["s0"], t["sites"])}
            stats["retreads_float"] += 1
            continue
        if not isvoid:
            continue
        if u in round1 or u in rthis:
            continue
        st = return_states(u)
        if not st:
            continue
        r0d = sum(1 for r0, s0 in st if r0 == "dead")
        s0d = sum(1 for r0, s0 in st if s0 == "dead")
        r0entry = sum(1 for r0, s0 in st if r0 == "entry")
        # every return path must agree: r0 (s0) is a dead write or a callee's result there; a
        # path returning with r0 unwritten / read after its write means a scheduling temp
        # (armcc hoists `mov r0, #0` loop counters above an early exit), not a result
        r0ok = all(r0 in ("dead", "call") for r0, s0 in st)
        s0ok = all(s0 in ("dead", "call") for r0, s0 in st)
        if r0d and not r0ok:
            stats["own_int_rejected_mixed_paths"] += 1
            r0d = 0
        if s0d and not s0ok:
            stats["own_float_rejected_mixed_paths"] += 1
            s0d = 0
        rec = None
        if r0d and not s0d:
            rec = {"ret": "int", "why": "r0 written after the last call and returned unread on %d of %d return paths" % (r0d, len(st))}
            stats["own_int"] += 1
        elif s0d and not r0d:
            rec = {"ret": "float", "why": "s0 written after the last call and returned unread on %d of %d return paths" % (s0d, len(st))}
            stats["own_float"] += 1
        elif r0d and s0d:
            stats["own_conflict"] += 1
        elif t.get("r0") and not t.get("s0") and not r0entry:
            rec = {"ret": "int", "why": "callers read r0 after the call at %d of %d sites (retreads.json)" % (t["r0"], t["sites"])}
            stats["retreads_int"] += 1
        else:
            c = users.get(u)
            if c and c["conf"] == "medium" and c["ret"] in ("int", "float"):
                if c["ret"] == "int" and r0entry:
                    stats["callers_contradicted"] += 1
                else:
                    rec = {"ret": c["ret"], "why": "1 calling function uses %s after the call (round-1 medium), no "
                                                  "contradiction in the code" % ("r0" if c["ret"] == "int" else "s0")}
                    stats["callers_%s" % c["ret"]] += 1
        if rec:
            rec.update({"eu": e, "conf": "high", "ghidra": ret, "paths": len(st)})
            out[u] = rec
    return out, stats


def main():
    sigs = json.load(open(sys.argv[1]))
    os.makedirs(OUT, exist_ok=True)
    lv = json.load(open(os.path.join(ROBUST, "tools", "livein2.json")))
    M.NOT_ARM.update(M.not_arm_code())
    u2e = {u: "%08X" % e for u, e in L.usa2eu.items()}
    r1 = json.load(open(os.path.join(ROBUST, "systemic", "returns.json")))
    round1 = {u for u, v in r1.items() if v["conf"] == "high"}
    rthis = set(json.load(open(os.path.join(ROOT, "native", "returns_this.json"))))
    rets, rs = prep_returns(lv, sigs, u2e, round1, rthis)
    # what each function returns after both rounds (Ghidra's type, or the fix), for prep_params
    retkind = {}
    for u in lv:
        sig = sigs.get(u2e.get(u))
        g = sig["ret"][0] if sig else "undefined"
        k = rets.get(u, {}).get("ret") or ("float" if g in ("float", "double") else
                                           None if g in ("undefined", "void") else "int")
        if k is None and u in rthis:
            k = "int"
        if k:
            retkind[u] = k
    params, ps = prep_params(lv, sigs, u2e, retkind)
    json.dump(params, open(os.path.join(OUT, "params.json"), "w"), indent=1, sort_keys=True)
    print("params: %d functions %s" % (len(params), dict(ps)), file=sys.stderr)
    json.dump(rets, open(os.path.join(OUT, "returns.json"), "w"), indent=1, sort_keys=True)
    json.dump({}, open(os.path.join(OUT, "fparams_none.json"), "w"))
    print("returns: %d functions %s" % (len(rets), dict(rs)), file=sys.stderr)
    json.dump({"params": ps, "returns": rs}, open(os.path.join(OUT, "report.json"), "w"), indent=1)


if __name__ == "__main__":
    main()
