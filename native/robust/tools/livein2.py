#!/usr/bin/env python3
"""Precise entry live-in registers (round 2), from the EU ARM code. Extends livein.py.

livein.py over-approximates in one place and under-approximates in others:
  - an indirect call / indirect tail call (`blx rX`, `bx rX`, PMF dispatch, virtual calls) was
    taken to read all of r0-r3: every function that calls a virtual with r1-r3 not freshly set
    got 4 parameters, and its callers inherited them (4,388 functions with r3 live-in);
  - a branch out of the function region to an address that is not a function start (shared
    epilogues, code after a removed bogus start), and falling off the end of the region into the
    next function, ended the path (nothing read there was counted).

Here:
  strict   registers read before written on some path, where an indirect call/tail reads only
           the registers it really uses (the target register, its address operands); a direct
           call/tail call reads the callee's FINAL live-in set (fixpoint); branches and
           fall-through into foreign code are followed (any function's instructions);
  amb      r0-r3 not defined at an indirect call / indirect tail call on some path: passed
           through to the unknown target IF that target takes them (the ARM C++ PMF / virtual
           pass-through of BOOT_LOG #1/#12) - undecidable from this function alone;
  final    strict + the amb registers confirmed by evidence:
             (a) callers: at the direct call sites (`bl F` / tail `b F`) the register is written
                 in the argument window (since the previous call / block start) and not read
                 before the call: armcc keeps no dead write, so it is an argument
                 (>= 1 such site and >= 25% of the sites);
             (b) virtual siblings: F sits at slot k of a vtable; the functions at slot k of the
                 vtables of the same hierarchy (vtables connected by sharing a function at the
                 same slot) read the register strictly (the virtual method takes it);
  sure     no step limit hit, no branch into undecodable bytes: the analysis saw every path
           (required before a parameter Ghidra has is dropped).

Output livein2.json {USA: {"final": [...], "strict": [...], "amb": [...], "sure": bool,
                           "why": {reg: evidence}}} next to this script, plus
callsite_evidence.json {USA: {"sites": n, "fresh": {reg: n}}}. livein.json is left alone.

  ../albw-decomp-ai/.venv/bin/python native/robust/tools/livein2.py          (~3-5 min)
  ../albw-decomp-ai/.venv/bin/python native/robust/tools/livein2.py 0049C208  (one function)
"""
import bisect
import collections
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import livein as L  # noqa: E402

ARGS = L.ARGS
A4 = frozenset(ARGS[:4])
CL = frozenset(L.CLOB & L.ARGSET)
E = frozenset()
B = 0x100000
TEXT_END = L.TEXT_END
DATA_END = B + len(L.code)


_summarize = L.summarize


def summarize_fixed(usa):
    """livein.summarize with capstone's register-access errors corrected:
    - mrc p15, ..., Rt, ...: capstone lists Rt as read and nothing written; it is written only
      (the TLS read `mrc p15, 0, rX, c13, c0, 3` made every heap/TLS user 'read' rX);
    - umlal/smlal RdLo, RdHi, ...: the accumulator registers are read too (capstone omits them);
    - vstm rN, {sA-sB} (not a vpush): the stored registers are read (capstone omits them)."""
    sm = _summarize(usa)
    if not sm:
        return sm
    eu, insns = sm
    for a, ins in list(insns.items()):
        w = struct.unpack_from("<I", L.code, a - B)[0]
        if (w >> 28) == 0xF:
            continue
        kind, cond, rd_, wr_, t, callee, cc, flags = ins
        if (w & 0x0F100010) == 0x0E100010:  # mrc
            r = "r%d" % ((w >> 12) & 15)
            if r in L.ARGSET or (w >> 12) & 15 < 13:
                rd_ = rd_ - {r}
                wr_ = wr_ | ({r} & L.ARGSET)
                insns[a] = (kind, cond, rd_, wr_, t, callee, cc, flags)
        elif (w & 0x0E100E00) == 0x0C000A00 and ((w >> 16) & 15) != 13:  # vstm rN(!), {list}
            # capstone omits the stored register list of vstm from the reads (vstmia r0, {s0, s1}
            # of a float setter read nothing)
            ins_ = next(L.md.disasm(L.code[a - B:a - B + 4], a), None)
            if ins_ is not None and "{" in ins_.op_str:
                lst = set()
                for nm in ins_.op_str[ins_.op_str.index("{") + 1:ins_.op_str.index("}")].split(","):
                    nm = nm.strip()
                    if "-" in nm:
                        a0, a1 = nm.split("-")
                        for k in range(int(a0[1:]), int(a1[1:]) + 1):
                            lst |= L.norm("%s%d" % (a0[0], k))
                    elif nm:
                        lst |= L.norm(nm)
                rd_ = rd_ | (lst & L.ARGSET)
                insns[a] = (kind, cond, rd_, wr_, t, callee, cc, flags)
        elif (w & 0x0FFF0000) == 0x092D0000 and w & 0x7:  # push / stmdb sp!, {.. r0-r2 ..}
            # summarize drops a push's reads (armcc pushes r3 alone only to keep sp 8-aligned);
            # a varargs-style spill of argument registers is a read for the upper bound
            PUSHREADS[a] = frozenset("r%d" % k for k in range(4) if w & (1 << k))
        elif (w & 0x0FA000F0) == 0x00A00090:  # umlal / smlal
            rd_ = rd_ | ({"r%d" % ((w >> 16) & 15), "r%d" % ((w >> 12) & 15)} & L.ARGSET)
            insns[a] = (kind, cond, rd_, wr_, t, callee, cc, flags)
    return sm


PUSHREADS = {}  # EU address of a push that stores r0-r3 -> those registers
L.summarize = summarize_fixed


def owner(addr):
    """USA name of the function region containing EU addr (nearest start at or before)."""
    i = bisect.bisect_right(L.starts, addr) - 1
    return L.eu2usa[L.starts[i]] if i >= 0 else None


def ins_at(addr):
    """Instruction facts at EU addr from whichever function region holds it."""
    u = owner(addr)
    if u is None:
        return None
    if u not in L.SUMMARY:
        try:
            L.SUMMARY[u] = L.summarize(u)
        except Exception:
            L.SUMMARY[u] = None
    sm = L.SUMMARY[u]
    if not sm:
        return None
    return sm[1].get(addr)


WHERE = None  # debugging (single-function mode): {reg: first address that reads it}
SURE = {}  # USA -> the may-analysis saw every path of it and of its callees
NOANAL = set()  # functions the analysis cannot decode (filled by main)


def analyse(usa, final, may=False):
    """(strict, amb, sure) for one function; callees' live-in from `final`. With may=True the
    registers an indirect call / unknown target could read count as read (an upper bound: what
    the function can possibly read, for dropping a parameter), and sure covers the callees."""
    if usa not in L.usa2eu:
        return None
    eu = L.usa2eu[usa]
    if not (B <= eu < TEXT_END) or ins_at(eu) is None or usa in NOT_ARM:
        return None
    seen = {}
    reads, amb = set(), set()
    sure = True
    work = [(eu, E, E)]
    steps = 0
    while work:
        if steps >= 60000:
            sure = False
            break
        addr, defined, cdefs = work.pop()
        steps += 1
        prev = seen.get(addr)
        if prev is not None:
            if prev[0] <= defined and prev[1] <= cdefs:
                continue
            defined = prev[0] & defined
            cdefs = prev[1] & cdefs
        seen[addr] = (defined, cdefs)
        ins = ins_at(addr) if B <= addr < TEXT_END else None
        if ins is None:
            sure = False
            continue
        kind, cond, rd_, wr_, target, callee, cc, flags = ins
        cdef_here = frozenset(r for r, c in cdefs if c == cc) if cond else E
        dd = defined | cdef_here
        if kind in ("call", "icall"):
            if kind == "call":
                if callee and callee in NOANAL:  # Thumb C library / not ARM code: what callers set
                    cin = EVREGS.get(callee, E)
                    amb.update(A4 - dd - cin)
                elif callee and callee in final:
                    cin = frozenset(final[callee])
                elif callee and callee not in NOANAL:  # not reached yet in this iteration
                    cin = E
                else:  # bl to an address that is no function start (Thumb C library): unknown
                    cin = rd_
                    amb.update(A4 - dd)
                    sure = sure and may
            else:
                cin = rd_
                amb.update(A4 - dd - rd_)
            if may and callee and callee in final and not SURE.get(callee, False):
                cin = cin | A4  # a callee not fully seen may read any of r0-r3
            if WHERE is not None:
                for r in cin - dd - reads:
                    WHERE.setdefault(r, "%08X call %s" % (addr, callee))
            reads.update(cin - dd)
            work.append((addr + 4, defined if cond else defined | CL, E))
            continue
        if may and addr in PUSHREADS:
            reads.update(PUSHREADS[addr] - dd)
        if WHERE is not None:
            for r in rd_ - dd - reads:
                WHERE.setdefault(r, "%08X" % addr)
        reads.update(rd_ - dd)
        if cond:
            # a write under cc after a write under the opposite condition (same flags): defined
            both = frozenset(r for r in wr_ if (r, L.OPP.get(cc)) in cdefs)
            nd, ncd = defined | both, cdefs | frozenset((r, cc) for r in wr_ - both)
        else:
            nd, ncd = defined | wr_, frozenset(x for x in cdefs if x[0] not in wr_)
        if flags:
            ncd = E
        opp = frozenset(r for r, c in cdefs if c == L.OPP.get(cc))
        if kind == "b":
            if cond:
                work.append((target, defined | frozenset(r for r, c in cdefs if c == cc), cdefs))
                work.append((addr + 4, defined | opp, cdefs))
            else:
                work.append((target, nd, ncd))
            continue
        if kind == "tail":
            if target and target in NOANAL:  # Thumb / undecodable callee: unknown
                amb.update(A4 - dd)
                sure = sure and may
            elif target:  # a function start: its live-in
                reads.update(frozenset(final.get(target, ())) - dd)
                if may and not SURE.get(target, False):
                    reads.update(A4 - dd)
            else:  # into foreign code that is no start (shared epilogue, merged tail): follow it
                t = int(L.md.disasm(L.code[addr - B:addr - B + 4], addr).__next__().op_str[1:], 16)
                work.append((t, nd, ncd))
            if cond:
                work.append((addr + 4, defined | opp, cdefs))
            continue
        if kind == "itail":
            reads.update(rd_ - dd)
            amb.update(A4 - dd - rd_)
            if cond:
                work.append((addr + 4, defined | opp, cdefs))
            continue
        if kind == "ret":
            if cond:
                work.append((addr + 4, defined | opp, cdefs))
            continue
        if kind == "table":
            for t in target:
                work.append((t, nd, ncd))
            work.append((addr + 4, nd, ncd))
            continue
        # plain instruction: the next one, even past the region end (fall-through into the next
        # function's code is real control flow)
        work.append((addr + 4, nd, ncd))
    reads = {r for r in reads if r in L.ARGSET}
    if may:
        reads |= amb
    return reads, amb - reads, sure


# ------------------------------------------------------------------ evidence: call sites
SINGLE_DEST_SKIP = ("ldm", "pop", "umull", "smull", "umlal", "smlal", "ldrd", "vldm", "vpop", "vmov")


def callsite_evidence():
    """{callee USA: {"sites": n, "fresh": Counter(reg)}}: argument-window writes at `bl F` / `b F`."""
    out = collections.defaultdict(lambda: {"sites": 0, "calls": 0, "fresh": collections.Counter()})
    for u in L.usa2eu:
        if u not in L.SUMMARY:
            try:
                L.SUMMARY[u] = L.summarize(u)
            except Exception:
                L.SUMMARY[u] = None
        sm = L.SUMMARY[u]
        if not sm:
            continue
        insns = sm[1]
        targets = set()
        for a, ins in insns.items():
            if ins[0] == "b":
                targets.add(ins[4])
            elif ins[0] == "table":
                targets.update(ins[4])
        for a, ins in insns.items():
            kind = ins[0]
            if kind == "call" and ins[5]:
                callee = ins[5]
            elif kind == "tail" and ins[4]:
                callee = ins[4]
            else:
                continue
            ev = out[callee]
            ev["sites"] += 1
            ev["calls"] += kind == "call"
            later_reads = set()
            later_writes = set()
            b = a
            for _ in range(16):
                if b in targets:
                    break
                b -= 4
                pi = insns.get(b)
                if pi is None or pi[0] != "op":
                    break
                _, pcond, prd, pwr, _, _, _, _ = pi
                mn = next(L.md.disasm(L.code[b - B:b - B + 4], b)).mnemonic
                if len(pwr) == 1 and not mn.startswith(SINGLE_DEST_SKIP):
                    r = next(iter(pwr))
                    if r not in later_reads and r not in later_writes:
                        ev["fresh"][r] += 1
                elif mn.startswith("vmov") and len(pwr) == 1:
                    r = next(iter(pwr))
                    if r not in later_reads and r not in later_writes:
                        ev["fresh"][r] += 1
                later_reads |= prd
                later_writes |= pwr
    return out


# ------------------------------------------------------------------ evidence: vtables
def vtables():
    """[(start EU, [USA function per slot])] runs of >= 2 words that are function starts, in the
    data part of the image (vtables, PMF tables)."""
    starts = set(L.eu2usa)
    out = []
    a = TEXT_END
    run = []
    while a + 4 <= DATA_END:
        w = struct.unpack_from("<I", L.code, a - B)[0]
        if w in starts:
            if not run:
                run_at = a
            run.append(L.eu2usa[w])
        else:
            if len(run) >= 2:
                out.append((run_at, run))
            run = []
        a += 4
    if len(run) >= 2:
        out.append((run_at, run))
    return out


def sibling_groups(vts):
    """{(vtable index, slot): group id}: vtables joined when they hold the same function at the same
    slot (inherited, not overridden) - one class hierarchy per group. Functions that occur at
    several different slots anywhere (pure-virtual stubs, shared trivial bodies) do not join."""
    slots_of = collections.defaultdict(set)
    for vi, (_, fs) in enumerate(vts):
        for k, f in enumerate(fs):
            slots_of[f].add(k)
    parent = list(range(len(vts)))

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x
    first = {}
    for vi, (_, fs) in enumerate(vts):
        for k, f in enumerate(fs):
            if len(slots_of[f]) != 1:
                continue
            key = (f, k)
            if key in first:
                a, b = find(first[key]), find(vi)
                if a != b:
                    parent[a] = b
            else:
                first[key] = vi
    return [find(vi) for vi in range(len(vts))]


NOT_ARM = set()  # Thumb functions (blx #imm targets) and starts that do not decode as ARM code
EVREGS = {}  # NOT_ARM callee -> registers its callers set at >= half of the call sites


def not_arm_code():
    out = set()
    for u, eu in L.usa2eu.items():
        if not (B <= eu < TEXT_END):
            continue
        w = struct.unpack_from("<I", L.code, eu - B)[0]
        if (w >> 28) not in (0xE,):  # an entry instruction is never conditional (nor 0xF...)
            out.add(u)
            continue
        if not list(L.md.disasm(L.code[eu - B:eu - B + 4], eu)):
            out.add(u)
    md = L.capstone.Cs(L.capstone.CS_ARCH_ARM, L.capstone.CS_MODE_ARM)
    md.skipdata = True
    for ins in md.disasm(L.code[:TEXT_END - B], B):
        if ins.mnemonic == "blx" and ins.op_str.startswith("#"):
            t = int(ins.op_str[1:], 16)
            if t in L.eu2usa:
                out.add(L.eu2usa[t])
    return out


def main():
    out_p = os.path.join(HERE, "livein2.json")
    funcs = sorted(L.usa2eu, key=lambda u: L.usa2eu[u])
    NOT_ARM.update(not_arm_code())
    print("not ARM code (Thumb / data at the start): %d" % len(NOT_ARM), file=sys.stderr)
    ev = callsite_evidence()
    for u in NOT_ARM:
        e = ev.get(u)
        if e and e["sites"]:
            regs = [r for r in ARGS if e["fresh"].get(r, 0) * 2 >= e["sites"]]
            n = max([ARGS.index(r) + 1 for r in regs if r[0] == "r"] + [0])
            EVREGS[u] = frozenset(ARGS[:n]) | frozenset(r for r in regs if r[0] == "s")
    NOANAL.update(NOT_ARM)
    print("call-site evidence: %d callees" % len(ev), file=sys.stderr)
    vts = vtables()
    grp = sibling_groups(vts)
    slots = collections.defaultdict(set)  # function -> {(group, slot)}
    members = collections.defaultdict(set)  # (group, slot) -> functions
    for vi, (_, fs) in enumerate(vts):
        for k, f in enumerate(fs):
            slots[f].add((grp[vi], k))
            members[(grp[vi], k)].add(f)
    print("vtables/pointer tables: %d, hierarchies: %d" % (len(vts), len(set(grp))), file=sys.stderr)

    final = {}
    res = {}
    for it in range(20):
        changed = 0
        for u in funcs:
            r = analyse(u, final)
            if r is None:
                NOANAL.add(u)
                continue
            strict, amb, sure = r
            why = {}
            acc = set(strict)
            e = ev.get(u)
            for reg in sorted(amb, key=ARGS.index):
                if e and e["sites"]:
                    n = e["fresh"].get(reg, 0)
                    if n >= 1 and n * 4 >= e["sites"]:
                        acc.add(reg)
                        why[reg] = "callers set it at %d of %d call sites" % (n, e["sites"])
                        continue
                for gk in slots.get(u, ()):
                    sib = [s for s in members[gk] if s != u and reg in res.get(s, {}).get("strict", ())]
                    if sib:
                        acc.add(reg)
                        why[reg] = "virtual siblings read it: %s" % ",".join(sorted(sib)[:3])
                        break
            fin = sorted(acc, key=ARGS.index)
            rec = {"final": fin, "strict": sorted(strict, key=ARGS.index), "amb": sorted(amb, key=ARGS.index),
                   "sure": sure, "why": why}
            if final.get(u) != fin:
                changed += 1
                final[u] = fin
            res[u] = rec
        print("iteration %d: %d changed" % (it, changed), file=sys.stderr)
        if not changed:
            break
    # upper bound (for dropping parameters Ghidra invented): indirect calls / unknown code read
    # r0-r3, and so does any callee whose own analysis was incomplete; "proven" = every path of
    # the function was seen
    may = {}
    for u in funcs:
        SURE[u] = True
    for it in range(30):
        changed = 0
        for u in funcs:
            r = analyse(u, may, may=True)
            if r is None:
                SURE[u] = False
                continue
            m = sorted(r[0], key=ARGS.index)
            if may.get(u) != m or SURE[u] != r[2]:
                changed += 1
                may[u] = m
                SURE[u] = r[2]
        print("may iteration %d: %d changed" % (it, changed), file=sys.stderr)
        if not changed:
            break
    for u, rec in res.items():
        rec["may"] = may.get(u, ARGS[:4])
        rec["proven"] = SURE.get(u, False)
    json.dump(res, open(out_p, "w"), indent=0, sort_keys=True)
    json.dump({u: {"sites": v["sites"], "calls": v["calls"], "fresh": dict(v["fresh"])} for u, v in ev.items()},
              open(os.path.join(HERE, "callsite_evidence.json"), "w"), indent=0, sort_keys=True)
    print("wrote %s (%d functions)" % (out_p, len(res)), file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) > 1:
        p = os.path.join(HERE, "livein2.json")
        lv = {u: v["final"] for u, v in json.load(open(p)).items()} if os.path.exists(p) else \
            json.load(open(os.path.join(HERE, "livein.json")))
        NOT_ARM.update(not_arm_code())
        NOANAL.update(NOT_ARM)
        for u in sys.argv[1:]:
            WHERE = {}
            print(u, analyse(u.upper(), lv), WHERE)
    else:
        main()
