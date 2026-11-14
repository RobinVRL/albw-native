#!/usr/bin/env python3
"""livein_dregs.py: float argument registers that livein2 misses because they are first read
through a 64-bit (d-register) operation or saved with vpush.

The pattern (main collision sweeps 004A7620 / 004A9F98):
    push {r0, r1, r2, r4-r11, lr}
    vpush {d0}            ; s0/s1 saved on the stack
    vpush {d8, d9}
    vmov.f64 d8, d0       ; s0/s1 -> s16/s17 (the values used later)
native/robust/tools/livein.py (and livein2 on top of it) loses both reads:
  - capstone's regs_access() reports the register list of `vpush`/`push` as WRITTEN (as well as
    read), so after `vpush {d0}` s0/s1 count as defined;
  - push lists are deliberately not counted as reads (callee-saved saves), so the vpush itself
    is no evidence either; the later `vmov.f64 d8, d0` then reads an "already written" d0.
This tool redoes the entry live-in analysis for s0-s15 only, with push/vpush/stmdb-sp! lists
as reads-only (never writes), ldm/vldm/pop/vpop lists as writes, conditional instructions not
killing, and tags every live-in s-register with its first-read evidence:
Classes (a register can have several; the first instruction of each is kept):
  wide   read by a d/q-register operand of a non-push instruction (vmov.f64, vmov rX, rY, dN,
         vstr dN, vstm rN (no writeback to sp), .f64 arithmetic...)
  vpush  only saved by vpush / vstmdb sp! (no other read before the first call): weaker, but
         armcc never pushes d0-d7 for callee-saved reasons
  narrow read by an ordinary single-precision operand (what livein2 already sees)
Calls (`bl`/`blx`) end the argument window (s0-s15 clobbered); tail calls and returns end the
path. Paths are explored with the set of written registers (memoised per address/state).

Compared with
  livein2 'final' (native/robust/tools/livein2.json) and
  the round-2 applied signature: the float parameter count of the definition in
  build/ghidra_analyzed4/func_<USA>.c (round 2 already applied native/robust/systemic2/params.json:
  raise_s / drop_s; functions absent from params.json kept Ghidra's signature).
A function is reported (strong) when one of its live-in s-registers is read wide or saved by vpush (the
pattern) and some live-in sN (any class: after the vpush, livein2 misses the narrow reads too)
read by a real instruction is not covered by the round-2 signature (N >= number of float parameters, AAPCS-VFP: the k-th float argument is s(k)).

Output native/gameplay/tools/livein_dregs.json:
  {"summary": {...}, "functions": {USA: {"eu", "live_s", "evidence": {sN: [class, "EUADDR insn"]},
   "livein2_s", "round2_nfloat", "missing", "callers", "sites"}}}

  ../albw-decomp-ai/.venv/bin/python native/gameplay/tools/livein_dregs.py            (all, ~2 min)
  ../albw-decomp-ai/.venv/bin/python native/gameplay/tools/livein_dregs.py 004A7620   (one, printed)
"""
import bisect, json, os, re, struct, sys
import capstone
from capstone import arm as A

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
DEC = os.path.join(os.path.dirname(PORT), "albw-decomp-ai")
code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
extra = json.load(open(os.path.join(PORT, "native", "extra_functions.json")))
usa2eu = {k: int(v["eu"], 16) for k, v in emap.items()}
usa2eu.update({k: int(v, 16) for k, v in extra.items()})
eu2usa = {v: k for k, v in usa2eu.items()}
starts = sorted(eu2usa)
TEXT_END = 0x693000
SREGS = ["s%d" % i for i in range(16)]
SSET = set(SREGS)
COND = {"eq", "ne", "hs", "lo", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le"}

md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md.detail = True
md.skipdata = True


def norm(name):
    if name.startswith("d") and name[1:].isdigit():
        n = int(name[1:])
        return {"s%d" % (2 * n), "s%d" % (2 * n + 1)} if n < 8 else set()
    if name.startswith("q") and name[1:].isdigit():
        n = int(name[1:])
        return {"s%d" % (4 * n + k) for k in range(4)} if n < 4 else set()
    return {name} & SSET


def reglist(op_str):
    out = set()
    if "{" not in op_str:
        return out
    for nm in op_str[op_str.index("{") + 1:op_str.index("}")].split(","):
        nm = nm.strip()
        if "-" in nm:
            a0, a1 = nm.split("-")
            for k in range(int(a0[1:]), int(a1[1:]) + 1):
                out |= norm("%s%d" % (a0[0], k))
        elif nm:
            out |= norm(nm)
    return out


def decode(eu, end):
    """{addr: (kind, cond, reads{sN: class}, writes, target, text)}"""
    out = {}
    for ins in md.disasm(code[eu - 0x100000:end - 0x100000], eu):
        txt = "%08X %s %s" % (ins.address, ins.mnemonic, ins.op_str)
        if ins.id == 0 or ins.mnemonic == ".byte":
            out[ins.address] = ("stop", False, {}, set(), None, txt)
            continue
        mn = ins.mnemonic
        base = mn.split(".")[0]
        cond = ins.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
        if cond and base[-2:] in COND:
            base = base[:-2]
        reads, writes = {}, set()
        is_push = base in ("push", "vpush") or (base in ("stmdb", "vstmdb", "stm", "vstm", "stmfd")
                                                 and "sp!" in ins.op_str)
        is_load_list = base in ("pop", "vpop", "ldm", "vldm", "ldmia", "vldmia", "ldmdb", "vldmdb")
        if is_push:
            for r in reglist(ins.op_str):
                reads[r] = "vpush"
        elif is_load_list:
            writes |= reglist(ins.op_str)
        else:
            try:
                rr, ww = ins.regs_access()
            except Exception:
                rr, ww = [], []
            wnames = [ins.reg_name(r) for r in ww]
            for r in rr:
                nm = ins.reg_name(r)
                cls = "wide" if nm[0] in "dq" else "narrow"
                for s in norm(nm):
                    if s not in reads or cls == "wide":
                        reads[s] = cls
            for nm in wnames:
                writes |= norm(nm)
            # capstone marks vldr/vldm destinations as read: a load reads only its base
            if base in ("vldr",) or base.startswith("vldm"):
                for s in list(reads):
                    if s in writes:
                        del reads[s]
            # pure writes reported as reads by capstone (vmov.f32 sD, sM: D is not read) are not
            # an issue: regs_access lists the destination only in writes for those.
            # vmla/vmls/vnmla/vnmls read their destination: capstone includes it in reads.
        tgt = None
        if ins.op_str.startswith("#0x"):
            try:
                tgt = int(ins.op_str[1:], 16)
            except ValueError:
                pass
        if base in ("bl", "blx"):
            kind = "call"
        elif base == "b" and tgt is not None:
            kind = "b" if eu <= tgt < end else "tail"
        elif base == "bx" or (base in ("pop", "ldm", "ldmia") and "pc" in ins.op_str) or \
                (ins.op_str.startswith("pc") and base in ("ldr", "add", "mov")):
            kind = "ret"
        else:
            kind = "op"
        out[ins.address] = (kind, cond, reads, writes, tgt, txt)
    return out


def analyse(usa, maxsteps=20000):
    eu = usa2eu[usa]
    if eu < 0x100000 or eu >= TEXT_END:
        return None
    i = bisect.bisect_right(starts, eu)
    end = starts[i] if i < len(starts) else eu + 0x1000
    end = min(end, eu + 0x4000)
    ins = decode(eu, end)
    if eu not in ins:
        return None
    addrs = sorted(ins)
    nxt = {a: addrs[k + 1] if k + 1 < len(addrs) else None for k, a in enumerate(addrs)}
    live = {}
    seen = set()
    work = [(eu, frozenset())]
    steps = 0
    while work and steps < maxsteps:
        a, wr = work.pop()
        while a is not None and steps < maxsteps:
            if (a, wr) in seen:
                break
            seen.add((a, wr))
            steps += 1
            kind, cond, reads, writes, tgt, txt = ins[a]
            if kind == "stop":
                break
            for s, cls in reads.items():
                if s not in wr:
                    live.setdefault(s, {}).setdefault(cls, txt)
            if kind == "call":
                if cond:
                    pass  # a conditional call: the fall-through path keeps the arguments
                else:
                    break  # argument window ends (s0-s15 clobbered)
            elif kind in ("tail", "ret"):
                if not cond:
                    break
            elif kind == "b":
                if cond:
                    work.append((tgt, wr))
                else:
                    a = tgt
                    continue
            if not cond and writes:
                wr = wr | frozenset(writes)
            a = nxt.get(a)
    return {"eu": "%08X" % eu, "live": live, "complete": steps < maxsteps}


def round2_nfloat(usa):
    p = os.path.join(PORT, "build", "ghidra_analyzed4", "func_%s.c" % usa)
    if not os.path.exists(p):
        return None
    m = re.search(r"^[^\n/;#]*\bfunc_%s\s*\(([^)]*)\)\s*\{" % usa, open(p, errors="replace").read(), re.M)
    if not m:
        return None
    params = [x.strip() for x in m.group(1).split(",") if x.strip() not in ("", "void")]
    return sum(1 for x in params if re.match(r"(float|double)\b", x) and "*" not in x)


def main():
    livein2 = json.load(open(os.path.join(PORT, "native", "robust", "tools", "livein2.json")))
    cg = json.load(open(os.path.join(HERE, "callgraph.json")))
    callers, sites = {}, {}
    for f, cs in cg.items():
        for c in (cs if isinstance(cs, list) else list(cs)):
            callers.setdefault(c, set()).add(f)
    targets = sys.argv[1:] or sorted(usa2eu)
    funcs, n_wide, n_vpush, n_any_new = {}, 0, 0, 0
    for usa in targets:
        r = analyse(usa)
        if r is None:
            continue
        live = r["live"]
        # the pattern: some float argument register is read wide or saved by vpush (that is
        # what hides it, and every later narrow read of the same window, from livein2)
        if not any(("wide" in v or "vpush" in v) for v in live.values()):
            continue
        dl = live
        l2 = sorted((x for x in livein2.get(usa, {}).get("final", []) if x in SSET),
                    key=lambda s: int(s[1:]))
        nf = round2_nfloat(usa)
        if nf is None:
            continue
        # strong: read by an instruction (wide or narrow); weak: only inside a vpush list (a
        # `vpush {d0}` saving s0 also saves s1, which may be junk)
        missing = sorted((s for s in dl if int(s[1:]) >= nf and set(dl[s]) != {"vpush"}),
                         key=lambda s: int(s[1:]))
        weak = sorted((s for s in dl if int(s[1:]) >= nf and set(dl[s]) == {"vpush"}),
                      key=lambda s: int(s[1:]))
        new_vs_l2 = sorted((s for s in dl if s not in l2), key=lambda s: int(s[1:]))
        if new_vs_l2:
            n_any_new += 1
        if not missing:
            continue
        if any("wide" in live[s] for s in missing):
            n_wide += 1
        else:
            n_vpush += 1
        funcs[usa] = {
            "eu": r["eu"],
            "live_s": sorted(live, key=lambda s: int(s[1:])),
            "evidence": {s: live[s] for s in sorted(live, key=lambda s: int(s[1:]))},
            "livein2_s": l2,
            "round2_nfloat": nf,
            "missing": missing,
            "missing_weak_vpush_only": weak,
            "complete": r["complete"],
            "callers": len(callers.get(usa, ())),
        }
        if len(targets) <= 5:
            print(usa, json.dumps(funcs[usa], indent=1))
    if len(targets) <= 5:
        return
    out = {
        "summary": {
            "functions_with_d_or_vpush_float_livein_not_in_livein2": n_any_new,
            "reported_missing_from_round2_signature": len(funcs),
            "of_which_a_missing_reg_is_read_wide": n_wide,
            "of_which_vpush_or_narrow_only": n_vpush,
        },
        "functions": funcs,
    }
    json.dump(out, open(os.path.join(HERE, "livein_dregs.json"), "w"), indent=1, sort_keys=True)
    print(json.dumps(out["summary"], indent=1))
    top = sorted(funcs.items(), key=lambda kv: -kv[1]["callers"])[:25]
    for usa, v in top:
        print(usa, v["eu"], "callers", v["callers"], "missing", v["missing"], "round2_nfloat",
              v["round2_nfloat"], v["evidence"][v["missing"][0]], v["livein2_s"])


if __name__ == "__main__":
    main()
