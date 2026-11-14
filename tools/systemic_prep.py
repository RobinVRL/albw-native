#!/usr/bin/env python3
"""Inputs for the systemic Ghidra-project fixes, decided from the EU ARM code (capstone).

  ../albw-decomp-ai/.venv/bin/python tools/systemic_prep.py      (~5-10 min, one core)

Writes native/robust/systemic/:
  noreturn.json  {USA: {"eu", "returns": bool, "how": evidence}} for the functions of
                 native/robust/tools/false_noreturn.json (+ the SDK panic 0010C1B8, kept
                 no-return). "returns" is proven by a reachable return instruction
                 (bx lr / pop {..pc} / ldm ..{..pc}), an indirect tail call, or a tail call / fall
                 through into a function that itself returns.
  returns.json   {USA: {"eu", "ret": "int"|"float"|"this", "conf": "high"|"medium",
                  "r0_callers": n, "s0_callers": n, "ghidra": <current Ghidra return type>}}
                 functions whose callers use r0 / s0 after the call although Ghidra types the
                 callee void (or non-float for s0), and the proven "returns this" functions
                 (native/returns_this.json) that Ghidra types void.
  bodies.json    the empty-bodied functions (native/robust/tools/empty_bodies.json) and bogus
                 starts, each with a verdict and the action the Ghidra script takes:
                   "signature": set return (s0 float / r0 int) + parameters from live-in
                   "not_a_function": a table start inside another function (an epilogue
                       fragment reached by fall-through / branch, or a start after a push):
                       delete the function; ghidra_dump.py (ALBW_DUMP_V2=1) then writes a
                       placeholder instead of recreating it
                   "disassemble": the start was never disassembled
                   "manual": anything else (listed, not changed)

Caller evidence ("uses r0 after the call"): from the instruction after an unconditional
`bl F`, every path of the caller is followed until r0 (s0) is written; a read before that
(including passing it to a call whose callee reads r0, live-in analysis) is a use. armcc never
reads r0/s0 after a call to a function it compiled as void, so a use proves a return value.
Conditional calls, indirect calls and data words end the search (no evidence). The nop
`mov r0, r0` is not a read. "high" = at least 2 distinct calling functions use it, or the
function provably returns its first argument; "medium" = 1 caller (not applied by default).
"""
import bisect
import collections
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(os.path.dirname(ROOT), "albw-decomp-ai")
ROBUST = os.path.join(ROOT, "native", "robust")
OUT = os.path.join(ROBUST, "systemic")
sys.path.insert(0, os.path.join(ROBUST, "tools"))
import livein as L  # noqa: E402  (capstone summaries, usa2eu, live-in fixpoint data)
import capstone  # noqa: E402

GHIDRA_DIRS = [os.environ.get("ALBW_GHIDRA_DIR", os.path.join(ROOT, "build", "ghidra_analyzed2")),
               os.environ.get("ALBW_GHIDRA_EXTRA_DIR", os.path.join(ROOT, "build", "ghidra_extra"))]
code = L.code
B = 0x100000
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
NOP = 0xE1A00000  # mov r0, r0
PANIC = "0010C1B8"  # the SDK panic: really does not return


def word(a):
    return struct.unpack_from("<I", code, a - B)[0]


def insn(a):
    r = list(md.disasm(code[a - B:a - B + 4], a))
    return r[0] if r else None


def region(usa):
    eu = L.usa2eu[usa]
    i = bisect.bisect_right(L.starts, eu)
    return eu, (L.starts[i] if i < len(L.starts) else eu + 0x1000)


def ghidra_rets():
    """USA -> Ghidra's printed return type of the definition (current dumps)."""
    sig = re.compile(r"\n\n([^\n{;]*?)\b(func_[0-9A-F]{8})\s*\(")
    out = {}
    for d in GHIDRA_DIRS:
        if not os.path.isdir(d):
            continue
        for n in os.listdir(d):
            if not n.startswith("func_") or n[5:13] in out:
                continue
            m = sig.search(open(os.path.join(d, n), errors="replace").read())
            if m and m.group(2) == "func_" + n[5:13]:
                out[n[5:13]] = re.sub(r"\s+", " ", m.group(1).replace("__stdcall", "")).strip()
    return out


# ------------------------------------------------------------------ 1. no-return
def classify(i):
    """(kind, conditional, branch target) of one instruction: ret / call / b / itail / op."""
    m, op = i.mnemonic, i.op_str
    base = m[:-2] if len(m) > 2 and m[-2:] in L.COND_SUFFIX else m
    cond = base != m
    regs = op[op.find("{") + 1:op.find("}")] if "{" in op else ""
    if (base == "bx" and op == "lr") or (base in ("mov", "movs") and op.replace(" ", "") == "pc,lr") \
            or (base.startswith(("pop", "ldm")) and re.search(r"\bpc\b", regs)) \
            or (base == "ldr" and op.startswith("pc, [sp]")):
        return "ret", cond, None
    if base in ("bl", "blx") and op.startswith("#"):
        return "call", cond, int(op[1:], 16)
    if base == "b" and op.startswith("#"):
        return "b", cond, int(op[1:], 16)
    if base == "bx" or (base.startswith(("mov", "ldr", "add")) and op.startswith("pc")):
        return "itail", cond, None
    return "op", cond, None


def returns(usa, memo, stack=()):
    """(bool, evidence) from the ARM code: some path from the entry reaches a return."""
    if usa in memo:
        return memo[usa]
    if usa == PANIC:
        return False, "SDK panic (kept no-return)"
    if usa in stack or usa not in L.usa2eu:
        return False, "unknown"
    eu, end = region(usa)
    seen, work, found = set(), [eu], None
    tails = []
    while work and found is None and len(seen) < 4000:
        a = work.pop()
        if a in seen or not (B <= a < 0x693000):
            continue
        seen.add(a)
        if a >= end:  # falls through into the next function
            nxt = L.eu2usa.get(a)
            if nxt:
                tails.append((nxt, "falls through into %s" % nxt))
            continue
        i = insn(a)
        if i is None:
            continue
        kind, cond, t = classify(i)
        if kind == "ret":
            found = "EU %08X %s %s" % (a, i.mnemonic, i.op_str)
            break
        if kind == "itail":
            found = "EU %08X %s %s (indirect tail call)" % (a, i.mnemonic, i.op_str)
            break
        if kind == "b":
            if eu <= t < end:
                work.append(t)
            elif t in L.eu2usa:
                tails.append((L.eu2usa[t], "EU %08X tail call to %s" % (a, L.eu2usa[t])))
            if cond:
                work.append(a + 4)
            continue
        if kind == "call" and not cond and L.eu2usa.get(t) == PANIC:
            continue
        work.append(a + 4)
    if found:
        memo[usa] = (True, found)
        return memo[usa]
    for t, why in tails:
        r, ev = returns(t, memo, stack + (usa,))
        if r:
            memo[usa] = (True, "%s, which returns (%s)" % (why, ev))
            return memo[usa]
    memo[usa] = (False, "no return instruction reachable")
    return memo[usa]


def prep_noreturn():
    fn = json.load(open(os.path.join(ROBUST, "tools", "false_noreturn.json")))
    memo = {}
    out = {}
    for usa in sorted(set(fn) | {PANIC}):
        r, ev = returns(usa, memo)
        out[usa] = {"eu": "%08X" % L.usa2eu[usa], "returns": r, "how": ev,
                    "agrees_with_false_noreturn_json": r == fn.get(usa, {}).get("returns", False)}
    return out


# ------------------------------------------------------------------ 2. return values
def summaries():
    S = {}
    for u in L.usa2eu:
        try:
            S[u] = L.summarize(u)
        except Exception:
            S[u] = None
    return S


def use_after(insns, start, reg, livein, noret):
    """True if `reg` (holding a callee's result at `start`) is read before written."""
    work, seen = [start], set()
    while work and len(seen) < 3000:
        a = work.pop()
        if a in seen:
            continue
        seen.add(a)
        ins = insns.get(a)
        if ins is None:
            continue
        kind, cond, rd, wr, target, callee, cc, flags = ins
        if word(a) == NOP:
            work.append(a + 4)
            continue
        if kind == "call":
            if callee and reg in livein.get(callee, []):
                return True
            if cond:
                work.append(a + 4)
            continue  # unconditional call clobbers r0-r3/s0-s15 (or does not return)
        if kind == "icall":
            continue
        if reg in rd:
            return True
        if kind == "tail":
            if target and reg in livein.get(target, []):
                return True
            if cond:
                work.append(a + 4)
            continue
        if kind in ("ret", "itail"):
            if cond:
                work.append(a + 4)
            continue
        if reg in wr and not cond:
            continue
        if kind == "b":
            work.append(target)
            if cond:
                work.append(a + 4)
            continue
        if kind == "table":
            work.extend(target)
            work.append(a + 4)
            continue
        work.append(a + 4)
    return False


def prep_returns(S, gret, livein, rthis, noret):
    def writes_s0(usa):
        sm = S.get(usa)
        return bool(sm) and any("s0" in v[3] for v in sm[1].values())

    users = {"r0": collections.defaultdict(set), "s0": collections.defaultdict(set)}
    ncall = collections.Counter()
    for caller, sm in S.items():
        if not sm:
            continue
        eu, insns = sm
        for a, ins in insns.items():
            kind, cond, rd, wr, target, callee, cc, flags = ins
            if kind != "call" or cond or not callee:
                continue
            ncall[callee] += 1
            if callee in noret:
                continue
            for reg in ("r0", "s0"):
                if use_after(insns, a + 4, reg, livein, noret):
                    users[reg][callee].add(caller)
    out = {}
    for usa in L.usa2eu:
        g = gret.get(usa)
        if g is None:
            continue
        isvoid = g in ("void", "undefined")
        isfloat = g in ("float", "double")
        r0u, s0u = len(users["r0"].get(usa, ())), len(users["s0"].get(usa, ()))
        rec = None
        if s0u and not r0u and not isfloat:  # s0 first: returns_this also "proves" float leaves
            rec = {"ret": "float", "conf": "high" if s0u >= 2 else "medium"}  # that never touch r0
        elif isvoid and usa in rthis and not writes_s0(usa):
            rec = {"ret": "this", "conf": "high"}
        elif s0u and not r0u and not isfloat:
            rec = {"ret": "float", "conf": "high" if s0u >= 2 else "medium"}
        elif isvoid and r0u and not s0u:
            rec = {"ret": "int", "conf": "high" if r0u >= 2 else "medium"}
        elif isvoid and r0u and s0u:
            rec = {"ret": "int", "conf": "conflict"}
        if rec:
            rec.update({"eu": "%08X" % L.usa2eu[usa], "ghidra": g, "r0_callers": r0u, "s0_callers": s0u,
                        "calls": ncall[usa]})
            out[usa] = rec
    return out


# ------------------------------------------------------------------ 3. bodies / bogus starts
def stack_fragment(usa):
    """'pop-before-push' if some path from the start restores callee-saved state (pop / ldm sp!
    including pc, vpop / vldm sp!, ldr pc,[sp]) before anything was pushed: an epilogue, or the
    rest of a function whose prologue lies before this start. A leaf's `sub sp` / `add sp`
    without a push is legitimate and does not count."""
    eu, end = region(usa)
    work, seen = [(eu, False)], set()
    while work and len(seen) < 3000:
        a, pushed = work.pop()
        if (a, pushed) in seen or not (eu <= a < end):
            continue
        seen.add((a, pushed))
        i = insn(a)
        if i is None:
            continue
        m, op = i.mnemonic, i.op_str
        if m.startswith(("push", "vpush")) or (m.startswith(("stmdb", "stmfd", "vstmdb")) and op.startswith("sp!")) \
                or (m.startswith("str") and "[sp, #-" in op and op.endswith("]!")):
            work.append((a + 4, True))
            continue
        restores = m.startswith(("pop", "vpop")) or (m.startswith(("ldm", "vldm")) and op.startswith("sp!")) \
            or (m.startswith("ldr") and op.startswith("pc, [sp]"))
        if restores and not pushed:
            return "pop-before-push (EU %08X %s %s)" % (a, m, op)
        k, cond, t = classify(i)
        if k in ("ret", "itail"):
            if cond:
                work.append((a + 4, pushed))
            continue
        if k == "b":
            work.append((t, pushed))
            if cond:
                work.append((a + 4, pushed))
            continue
        if k == "call" and not cond and L.eu2usa.get(t) == PANIC:
            continue
        work.append((a + 4, pushed))
    return None


def is_push(i):
    if i is None:
        return False
    m, op = i.mnemonic, i.op_str
    return m.startswith(("push", "vpush")) or (m.startswith(("stmdb", "stmfd", "vstmdb")) and op.startswith("sp!")) \
        or (m.startswith("str") and "[sp, #-" in op and op.endswith("]!"))


MATCHED = json.load(open(os.path.join(DEC, "functions.json")))
EMAP = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
L.extra_only = set(L.usa2eu) - set(EMAP)


def falls_into(eu):
    """The instruction before eu can fall through into it (not an unconditional terminator)."""
    p = insn(eu - 4)
    if p is None:
        return False
    k, cond, t = classify(p)
    if cond:
        return True
    return k in ("op", "call") and not (p.mnemonic.startswith("b") and not p.mnemonic.startswith("bl"))


def prep_bodies(S, gret, livein, returns_rec):
    empty = [x[0] for x in json.load(open(os.path.join(ROBUST, "tools", "empty_bodies.json")))]
    cand = set(empty) | {"0050B78C", "00164284", "00100C90", "00100C94", "0050B788"}
    # every table/extra start: epilogue fragments and starts after a push
    frag = {}
    for usa in L.usa2eu:
        k = stack_fragment(usa)
        if k:
            frag[usa] = k
    cand |= set(frag)
    out = {}
    for usa in sorted(cand):
        eu, end = region(usa)
        rec = {"eu": "%08X" % eu, "bytes": end - eu, "ghidra": gret.get(usa), "empty_body": usa in empty}
        first = insn(eu)
        sm = S.get(usa)
        if usa in frag:
            how = frag[usa] + (", reached by fall-through" if falls_into(eu) else ", reached by a branch")
            push_at = next((eu - 4 * k for k in (1, 2, 3) if is_push(insn(eu - 4 * k))), None)
            status = MATCHED.get(usa, {}).get("status")
            sure = EMAP.get(usa, {}).get("sure")
            if push_at is not None and push_at not in L.eu2usa:
                # the prologue just before has no function: the EU map entry is off by a few
                # instructions (the USA function starts with that push)
                rec["verdict"] = "map_shift"
                rec["eu_should_be"] = "%08X" % push_at
                rec["why"] = how + "; prologue at EU %08X has no function: EU map entry off by %d" % (push_at, eu - push_at)
            elif usa in L.extra_only or (sure is False and status is None) or push_at is not None:
                rec["verdict"] = "not_a_function"
                rec["why"] = how + ("; start right after the prologue of func_%s" % L.eu2usa[push_at] if push_at else "")
            else:
                rec["verdict"] = "manual"
                rec["why"] = how + "; kept: table start (sure=%s, decomp status %s)" % (sure, status)
        elif first is None or sm is None:
            rec["verdict"] = "manual"
            rec["why"] = "cannot decode the start"
        elif usa in ("00164284", "00100C94", "0050B788"):
            rec["verdict"] = "ok"
            rec["why"] = "start verified (prologue at the EU address)" if usa != "00100C94" else \
                "real function; 00100C90 (mov r0,r0) falls through into it"
        elif usa in empty:
            regs = livein.get(usa, [])
            ret = returns_rec.get(usa, {}).get("ret")
            writes_s0 = any("s0" in v[3] for v in sm[1].values())
            writes_r0 = any("r0" in v[3] for v in sm[1].values())
            if writes_s0 and ret != "int":
                ret = "float"
            elif ret is None:
                ret = "int" if writes_r0 else None
            rec["verdict"] = "signature" if ret else "manual"
            rec["ret"] = ret
            rec["params"] = regs
            rec["why"] = "Ghidra type %s; result in %s; live-in %s" % (gret.get(usa), {"float": "s0", "int": "r0", "this": "r0"}.get(ret, "?"), regs)
            rec["needs_disassembly"] = first is not None and not S.get(usa)
        elif usa == "00100C90":
            rec["verdict"] = "signature"
            rec["ret"] = "int"
            rec["params"] = livein.get(usa, [])
            rec["why"] = "mov r0,r0 then falls through into 00100C94: same parameters as it"
        else:
            rec["verdict"] = "manual"
            rec["why"] = "listed by the robustness agent; no rule"
        out[usa] = rec
    return out


def owners_livein(bb, livein):
    """For every removed start: the function it belongs to (nearest earlier start that stays) and
    that function's live-in registers recomputed over its whole body (the bogus start had cut
    the region the live-in pass looked at)."""
    gone = {L.usa2eu[u] for u, v in bb.items() if v["verdict"] == "not_a_function"}
    keep = [e for e in L.starts if e not in gone]
    L.starts[:] = keep
    for e in gone:
        L.eu2usa.pop(e, None)
    for u, v in bb.items():
        if v["verdict"] != "not_a_function":
            continue
        i = bisect.bisect_left(keep, L.usa2eu[u]) - 1
        if i < 0:
            continue
        owner = L.eu2usa[keep[i]]
        L.SUMMARY.pop(owner, None)
        r = L.analyse(owner, livein)
        v["owner"] = owner
        v["owner_livein"] = r if r is not None else []
        v["owner_livein_before"] = livein.get(owner, [])


def prep_fparams(livein):
    """Float parameters an earlier pass (albw_float_params.py) created from in_sN reads that were
    really a callee's lost float result: fparam_N pinned to sN although sN is not live-in at the
    entry (never read before written on any path). {USA: {"eu", "drop": [sN..], "livein": [...]}}"""
    sig = re.compile(r"\n\n[^\n{;]*?\b(func_[0-9A-F]{8})\s*\(((?:[^()]|\n)*?)\)\s*\n\{")
    out = {}
    for d in GHIDRA_DIRS:
        if not os.path.isdir(d):
            continue
        for n in os.listdir(d):
            u = n[5:13]
            if not n.startswith("func_") or u in out or u not in livein or u not in L.usa2eu:
                continue
            m = sig.search(open(os.path.join(d, n), errors="replace").read())
            if not m or m.group(1) != "func_" + u:
                continue
            regs = ["s" + k for k in re.findall(r"\bfloat\s+fparam_(\d+)\b", m.group(2))]
            drop = [r for r in regs if r not in livein[u]]
            if drop:
                out[u] = {"eu": "%08X" % L.usa2eu[u], "drop": drop, "livein": livein[u]}
    return out


def main():
    os.makedirs(OUT, exist_ok=True)
    livein = json.load(open(os.path.join(ROBUST, "tools", "livein.json")))
    rthis = set(json.load(open(os.path.join(ROOT, "native", "returns_this.json"))))
    gret = ghidra_rets()
    print("Ghidra return types read: %d" % len(gret), file=sys.stderr)
    nr = prep_noreturn()
    json.dump(nr, open(os.path.join(OUT, "noreturn.json"), "w"), indent=1, sort_keys=True)
    print("noreturn: %d returns, %d no-return" % (sum(v["returns"] for v in nr.values()),
                                                  sum(not v["returns"] for v in nr.values())), file=sys.stderr)
    noret = {u for u, v in nr.items() if not v["returns"]}
    S = summaries()
    print("summaries: %d" % len(S), file=sys.stderr)
    rr = prep_returns(S, gret, livein, rthis, noret)
    bb = prep_bodies(S, gret, livein, rr)
    fp = prep_fparams(livein)
    json.dump(fp, open(os.path.join(OUT, "fparams.json"), "w"), indent=1, sort_keys=True)
    print("phantom float parameters: %d functions, %d parameters" % (len(fp), sum(len(v["drop"]) for v in fp.values())),
          file=sys.stderr)
    for u, v in bb.items():  # removed starts / functions the body fix types: not here
        if v["verdict"] in ("not_a_function", "signature") and u in rr:
            del rr[u]
    json.dump(rr, open(os.path.join(OUT, "returns.json"), "w"), indent=1, sort_keys=True)
    print("returns:", collections.Counter((v["ret"], v["conf"]) for v in rr.values()), file=sys.stderr)
    owners_livein(bb, livein)  # last: it edits the start list
    owners = {v["owner"] for v in bb.values() if v.get("owner")}
    for u in owners & set(fp):  # their live-in was computed on a truncated region
        del fp[u]
    json.dump(fp, open(os.path.join(OUT, "fparams.json"), "w"), indent=1, sort_keys=True)
    json.dump(bb, open(os.path.join(OUT, "bodies.json"), "w"), indent=1, sort_keys=True)
    print("bodies:", collections.Counter(v["verdict"] for v in bb.values()), file=sys.stderr)


if __name__ == "__main__":
    main()
