#!/usr/bin/env python3
"""Return class of every game function from the EU ARM code (systemic round 3, defect 1/3/6).

  ../albw-decomp-ai/.venv/bin/python tools/retclass3.py            (~2-4 min, all functions)
  ../albw-decomp-ai/.venv/bin/python tools/retclass3.py 0010F1F8   (one function, printed)

Ghidra decides a function's return type from what its callers appear to use. A register that
merely survives the call (s0 untouched by a list unlink, r0:r1 of a helper typed int) then looks
like a result, or a real result is dropped. Here every return path of the machine code is walked
and the state of r0, r1 and s0 at the return is classified:

  E   entry value, never written on the path (directly or by a callee that preserves it)
  P   restored by pop/vpop/ldm (a saved copy: the entry value in every case seen)
  W   written by the function itself and not read again before the return (armcc keeps no
      dead write: a result)
  R   written (or a callee's result) and read again before the return: a temporary, or a
      result that is also used (ambiguous)
  C:X the result of callee X (bl X), X not preserving the register
  T:X tail call to X (b X): whatever X returns
  U   unknown (indirect call / indirect tail call / unanalysable code)

"preserves(F, reg)" = every return path of F leaves reg as E/P (greatest fixpoint over the call
graph: a callee that preserves a register keeps the caller's state through the call).

Classes written to native/robust/systemic3/retclass.json {USA: {...}}:
  s0      "pass"   s0 is the incoming s0 on every return path (the function never produces a
                   float result: Ghidra's `float f(.., float x) { return x; }` pass-through)
          "nowrite" no path produces s0 (entry value, or an indirect callee's on some paths:
                   state-machine changeState / PMF dispatchers)
          "float"  s0 is written / a float callee's result on every return path
          "mixed"  some paths write s0, some leave it
          "unknown"
  r1      "pair"   r1 is written / a pair callee's result on the return paths AND callers read r1
                   after the call (>= 2 sites, >= 25%): a 64-bit r0:r1 return
          "pass" / "mixed" / "unknown" as for s0
  r0      "pass" (returns its first argument / never touches r0) / "written" / "mixed" / "unknown";
          r0_entry_only: r0 is the untouched incoming r0 on every return path (no pop/ldm restore):
          the function returns its first argument (constructors), loops included (returns_this.py
          gives up on backward branches, e.g. 00407788)
  reads   callers' reads after the call (native/gameplay/tools/retreads.json: sites, r0, r1, s0)
  paths   number of return paths, sure: every path seen (no step limit, no undecodable code)
"""
import collections
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TOOLS = os.path.join(ROOT, "native", "robust", "tools")
sys.path.insert(0, TOOLS)
import livein2 as M  # noqa: E402  (installs the corrected summarize)
import livein as L  # noqa: E402

B = 0x100000
TRACK = ("r0", "r1", "s0")
md = L.capstone.Cs(L.capstone.CS_ARCH_ARM, L.capstone.CS_MODE_ARM)
_mn = {}


def mnem(a):
    if a not in _mn:
        r = list(md.disasm(L.code[a - B:a - B + 4], a))
        _mn[a] = (r[0].mnemonic, r[0].op_str) if r else (None, None)
    return _mn[a]


def summ(u):
    if u not in L.SUMMARY:
        try:
            L.SUMMARY[u] = L.summarize(u)
        except Exception:
            L.SUMMARY[u] = None
    return L.SUMMARY[u]


def walk(u, pres):
    """[(r0, r1, s0) at every reachable return], sure, callees. pres: {callee: set(regs preserved)}"""
    sm = summ(u)
    if not sm or u in M.NOT_ARM:
        return None, False, set()
    eu, insns = sm
    res = []
    seen = set()
    sure = True
    callees = set()
    work = [(eu, ("E", "E", "E"))]
    steps = 0
    while work:
        steps += 1
        if steps > 40000:
            sure = False
            break
        a, st = work.pop()
        if (a, st) in seen:
            continue
        seen.add((a, st))
        ins = insns.get(a)
        if ins is None:
            # fall-through / branch outside the region: follow into foreign code like livein2
            ins = M.ins_at(a) if B <= a < L.TEXT_END else None
            if ins is None:
                sure = False
                continue
        kind, cond, rd_, wr_, target, callee, cc, flags = ins
        if kind == "ret":
            m, op = mnem(a)
            if m is None:  # literal-pool word
                continue
            res.append(st)
            if cond:
                work.append((a + 4, st))
            continue
        if kind == "call":
            callees.add(callee)
            p = pres.get(callee, set()) if callee else set()
            nst = tuple(s if r in p else "C:%s" % callee for r, s in zip(TRACK, st)) if callee else ("U",) * 3
            work.append((a + 4, nst))
            if cond:
                work.append((a + 4, st))
            continue
        if kind == "icall":
            work.append((a + 4, ("U", "U", "U")))
            if cond:
                work.append((a + 4, st))
            continue
        if kind == "tail":
            if target:
                callees.add(target)
                p = pres.get(target, set())
                res.append(tuple(s if r in p else "T:%s" % target for r, s in zip(TRACK, st)))
            else:  # into foreign code that is no start: follow it
                t = int(mnem(a)[1][1:], 16)
                work.append((t, st))
            if cond:
                work.append((a + 4, st))
            continue
        if kind == "itail":
            res.append(("U", "U", "U"))
            if cond:
                work.append((a + 4, st))
            continue
        # a value read after it was produced: not a clean (dead) result write any more
        nst = tuple("R" if (r in rd_ and (s == "W" or s[:2] == "C:")) else s for r, s in zip(TRACK, st))
        st0 = st
        st = nst
        tw = [r for r in TRACK if r in wr_]
        if tw:
            m, op = mnem(a)
            if m is None:
                sure = False
                continue
            if struct.unpack_from("<I", L.code, a - B)[0] == 0xE1A00000:  # nop
                tw = []
            elif m.startswith(("push", "vpush")) or (m.startswith(("stm", "vstm")) and "sp!" in op):
                tw = []  # capstone lists pushed registers as written
            if tw:
                restore = m.startswith(("pop", "vpop")) or (m.startswith(("ldm", "vldm")) and op.startswith("sp"))
                nst = tuple(("P" if restore else "W") if r in tw else s for r, s in zip(TRACK, st))
        if kind == "b":
            work.append((target, nst))
            if cond:
                work.append((a + 4, st))
            continue
        if kind == "table":
            for t in target:
                work.append((t, nst))
            work.append((a + 4, nst))
            continue
        work.append((a + 4, nst))
        if cond and nst != st:
            work.append((a + 4, st))  # the condition may fail: the write may not happen
    return res, sure, callees


def preserved(res):
    if not res:
        return set()
    return {r for k, r in enumerate(TRACK) if all(s[k] in ("E", "P") for s in res)}


def classify(states, k, good):
    """'pass' / 'nowrite' / 'value' / 'mixed' / 'unknown' for register index k; good(token) ->
    the token is a produced value (a dead write of the function, or a value callee's result)."""
    toks = [s[k] for s in states]
    if not toks:
        return "unknown"
    if all(t in ("E", "P") for t in toks):
        return "pass"
    if all(good(t) for t in toks):
        return "value"
    if all(t in ("E", "P", "U") for t in toks):
        # nothing on any path produces the register: entry value or an indirect callee's
        # (state handlers / PMF calls): the function itself returns no value in it
        return "nowrite" if any(t in ("E", "P") for t in toks) else "unknown"
    return "mixed"


def main():
    M.NOT_ARM.update(M.not_arm_code())
    funcs = sorted(L.usa2eu, key=lambda u: L.usa2eu[u])
    pres = {u: set(TRACK) for u in funcs}  # optimistic start (greatest fixpoint)
    for u in M.NOT_ARM:
        pres[u] = set()  # Thumb C library: unknown, assume clobbered
    out = {}
    callers = collections.defaultdict(set)
    todo = list(funcs)
    inq = set(todo)
    rounds = 0
    while todo:
        rounds += 1
        nxt = []
        for u in todo:
            inq.discard(u)
            if u in M.NOT_ARM:
                continue
            res, sure, cs = walk(u, pres)
            for c in cs:
                callers[c].add(u)
            if res is None:
                newp = set()
            else:
                newp = preserved(res) if sure else set()
            out[u] = (res, sure)
            if newp != pres[u]:
                pres[u] = newp
                for c in callers[u]:
                    if c not in inq:
                        inq.add(c)
                        nxt.append(c)
        print("round %d: %d functions, %d to redo" % (rounds, len(todo), len(nxt)), file=sys.stderr)
        todo = nxt
    # value classes: s0 float / r1 pair, fixpoint over callee results
    reads = json.load(open(os.path.join(ROOT, "native", "gameplay", "tools", "retreads.json")))
    fl = {u: True for u in out}
    pr = {u: True for u in out}
    for it in range(30):
        ch = 0
        for u, (res, sure) in out.items():
            if not res:
                f = p = False
            else:
                def good(t, d):
                    if t in ("W",):
                        return True
                    if t[:2] in ("C:", "T:"):
                        return d.get(t[2:], False)
                    return False
                f = sure and all(good(s[2], fl) for s in res)
                p = sure and all(good(s[1], pr) for s in res)
            if f != fl[u] or p != pr[u]:
                ch += 1
                fl[u], pr[u] = f, p
        print("value iteration %d: %d changed" % (it, ch), file=sys.stderr)
        if not ch:
            break
    # may_produce(F): some return path holds an s0 value F itself wrote (W/R) or a callee's that
    # may produce one (least fixpoint; indirect callees U do not count: state handlers / PMF)
    mayp = {u: False for u in out}
    for it in range(50):
        ch = 0
        for u, (res, sure) in out.items():
            if mayp[u] or not res:
                continue
            for s in res:
                t = s[2]
                if t in ("W", "R") or (t[:2] in ("C:", "T:") and mayp.get(t[2:], True)):
                    mayp[u] = True
                    ch += 1
                    break
        if not ch:
            break
    rec = {}
    for u, (res, sure) in out.items():
        if res is None:
            continue

        def good_f(t):
            return t == "W" or (t[:2] in ("C:", "T:") and fl.get(t[2:], False))

        def good_p(t):
            return t == "W" or (t[:2] in ("C:", "T:") and pr.get(t[2:], False))
        s0 = classify(res, 2, good_f) if sure else "unknown"
        r1 = classify(res, 1, good_p) if sure else "unknown"
        r0 = classify(res, 0, lambda t: t != "U" and t not in ("E", "P")) if sure else "unknown"
        if sure and s0 in ("mixed", "unknown") and not mayp[u]:
            s0 = "nowrite"
        rd = reads.get(u, {})
        r = {"s0": {"value": "float"}.get(s0, s0), "r1": {"value": "pair"}.get(r1, r1),
             "r0": {"value": "written"}.get(r0, r0), "paths": len(res), "sure": sure,
             "r0_entry_only": bool(sure and res and all(x[0] == "E" for x in res)),
             "reads": {k: v for k, v in rd.items() if k in ("sites", "r0", "r1", "s0", "s0_tail", "r0_tail")}}
        # r1 is a scratch register: a dead write alone is weak evidence. A 64-bit result needs
        # the callers too (they read r1 after the call at >= 2 sites and >= 25% of them)
        n1, ns = rd.get("r1", 0), rd.get("sites", 0)
        if r["r1"] in ("pair", "mixed") and n1 >= 2 and 4 * n1 >= ns:
            r["r1"] = "pair"
            r["r1_why"] = "callers read r1 at %d of %d sites" % (n1, ns)
        elif r["r1"] == "pair":
            r["r1"] = "mixed"
        rec[u] = r
    # s0 consumed by anybody: a direct caller reads s0 after the call, or a function returns
    # with s0 still holding this one's result (call in tail position / tail call) and that
    # function's s0 is consumed, or the function is reachable through a pointer (vtables, PMF
    # tables, callbacks: indirect callers are not seen) - least fixpoint
    pt = os.path.join(ROOT, "build", "ptr_targets.json")
    ptrs = {L.eu2usa[e] for e in json.load(open(pt)) if e in L.eu2usa} if os.path.exists(pt) else set()
    passers = collections.defaultdict(set)  # X -> functions returning X's s0
    for u, (res, sure) in out.items():
        for s in res or ():
            if s[2][:2] in ("C:", "T:"):
                passers[s[2][2:]].add(u)
    used = {u for u in rec if reads.get(u, {}).get("s0") or u in ptrs}
    used |= {u for u in rec if u not in out or not out[u][1]}  # unanalysable: assume used
    rev = collections.defaultdict(set)  # u -> X such that u returns X's s0
    for x, fs in passers.items():
        for f in fs:
            rev[f].add(x)
    work = list(used)
    while work:
        u = work.pop()
        for x in rev.get(u, ()):
            if x not in used:
                used.add(x)
                work.append(x)
    for u, r in rec.items():
        r["s0_used"] = u in used
        r["ptr"] = u in ptrs
    od = os.path.join(ROOT, "native", "robust", "systemic3")
    os.makedirs(od, exist_ok=True)
    json.dump(rec, open(os.path.join(od, "retclass.json"), "w"), indent=0, sort_keys=True)
    c = collections.Counter((v["s0"], v["r1"]) for v in rec.values())
    print("wrote native/robust/systemic3/retclass.json: %d functions; (s0, r1) classes %s"
          % (len(rec), dict(c.most_common())), file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) > 1:
        M.NOT_ARM.update(M.not_arm_code())
        p = os.path.join(ROOT, "native", "robust", "systemic3", "retclass.json")
        rc = json.load(open(p)) if os.path.exists(p) else {}
        pres = {u: {r for r, k in (("r0", "r0"), ("r1", "r1"), ("s0", "s0")) if v.get(k) == "pass"}
                for u, v in rc.items()}
        for u in sys.argv[1:]:
            u = u.upper()
            res, sure, cs = walk(u, pres)
            print(u, "sure" if sure else "NOT SURE", sorted(set(res or [])), rc.get(u))
    else:
        main()
