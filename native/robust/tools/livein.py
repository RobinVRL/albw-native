#!/usr/bin/env python3
"""Entry live-in registers of every game function, from the EU ARM code (capstone).

For each function: which argument registers (r0-r3, s0-s15) are read before being written on
some path from the entry. Calls read the callee's own live-in set (fixpoint over the call graph)
and clobber r0-r3, r12, lr, s0-s15; indirect calls read r0-r3. Conditional instructions do not
kill. This gives the REAL parameter registers of each function, independent of Ghidra.

Output: livein.json {USA: [live-in argument registers]} next to this script.

Run with the decomp venv python (capstone):
  ../albw-decomp-ai/.venv/bin/python native/robust/tools/livein.py
"""
import bisect, json, os, struct, sys
import capstone
from capstone import arm as A

PORT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
DEC = os.path.join(os.path.dirname(PORT), "albw-decomp-ai")
code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
extra = json.load(open(os.path.join(PORT, "native", "extra_functions.json")))
usa2eu = {k: int(v["eu"], 16) for k, v in emap.items()}
usa2eu.update({k: int(v, 16) for k, v in extra.items()})
eu2usa = {v: k for k, v in usa2eu.items()}
starts = sorted(eu2usa)
TEXT_END = 0x693000

md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md.detail = True
md.skipdata = True  # literal pools inside functions
ARGS = ["r0", "r1", "r2", "r3"] + ["s%d" % i for i in range(16)]
ARGSET = set(ARGS)
CLOB = set(["r0", "r1", "r2", "r3", "r12", "ip", "lr"] + ["s%d" % i for i in range(16)])


def norm(name):
    """register name -> set of tracked names (d regs split into s pairs)"""
    if name in ("ip",):
        return {"r12"}
    if name.startswith("d") and name[1:].isdigit():
        n = int(name[1:])
        return {"s%d" % (2 * n), "s%d" % (2 * n + 1)} if n < 16 else set()
    if name.startswith("q") and name[1:].isdigit():
        n = int(name[1:])
        return {"s%d" % (4 * n + k) for k in range(4)} if n < 8 else set()
    if name in ("sb",):
        return {"r9"}
    if name in ("sl",):
        return {"r10"}
    if name in ("fp",):
        return {"r11"}
    return {name}


def summarize(usa):
    """Compact per-instruction facts of one function (decoded once):
    {addr: (kind, cond, reads, writes, target)} with kind in
    'op', 'call', 'icall', 'b', 'tail', 'itail', 'ret', 'table'."""
    eu = usa2eu[usa]
    i = bisect.bisect_right(starts, eu)
    end = starts[i] if i < len(starts) else eu + 0x1000
    end = min(end, eu + 0x4000)
    if eu < 0x100000 or eu >= TEXT_END:
        return None
    out = {}
    for ins in md.disasm(code[eu - 0x100000:end - 0x100000], eu):
        mnem = ins.mnemonic
        if mnem == ".byte" or ins.id == 0:  # skipped data word (literal pool)
            out[ins.address] = ("ret", False, frozenset(), frozenset(), None, None, "", False)
            continue
        cond = ins.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
        try:
            rr, ww = ins.regs_access()
        except Exception:
            rr, ww = [], []
        rn = set(); wn = set()
        for r in rr:
            rn |= norm(ins.reg_name(r))
        for r in ww:
            wn |= norm(ins.reg_name(r))
        is_push = mnem.startswith(("push", "vpush")) or (mnem.startswith(("stm", "vstm")) and "sp!" in ins.op_str)
        if mnem.startswith(("ldm", "vldm", "pop", "vpop")) and "{" in ins.op_str:
            # capstone reports the register list as read: it is written; only the base is read
            lst = set()
            for nm in ins.op_str[ins.op_str.index("{") + 1:ins.op_str.index("}")].split(","):
                nm = nm.strip()
                if "-" in nm:  # range like s0-s3
                    a0, a1 = nm.split("-")
                    lst |= {"%s%d" % (a0[0], k) for k in range(int(a0[1:]), int(a1[1:]) + 1)}
                elif nm:
                    lst |= norm(nm)
            rn -= lst
            wn |= lst
        ccname = mnem[-2:] if cond else ""
        sets_flags = bool(getattr(ins, "update_flags", False)) or mnem.startswith(("cmp", "cmn", "tst", "teq", "vmrs"))
        target = None
        if ins.op_str.startswith("#0x"):
            try:
                target = int(ins.op_str[1:], 16)
            except ValueError:
                pass
        base = mnem[:-2] if len(mnem) > 2 and mnem[-2:] in COND_SUFFIX else mnem
        if base in ("bl", "blx"):
            kind = "call" if target is not None else "icall"
        elif base == "b" and target is not None:
            kind = "b" if eu <= target < end else "tail"
        elif base == "bx":
            kind = "ret" if "lr" in ins.op_str else "itail"
        elif (base in ("pop", "ldm", "ldmia") or mnem.startswith(("pop", "ldm"))) and "pc" in ins.op_str:
            kind = "ret"
        elif mnem.startswith(("ldr", "add", "mov")) and ins.op_str.startswith("pc"):
            kind = "table"
            tgts = []
            for k in range(1, 128):
                a = ins.address + 4 * k
                if a >= end:
                    break
                w = struct.unpack_from("<I", code, a - 0x100000)[0]
                if eu <= w < end:
                    tgts.append(w)
                elif k > 1:
                    break
            target = tuple(tgts)
        else:
            kind = "op"
        out[ins.address] = (kind, cond, frozenset(() if is_push else (rn & ARGSET)), frozenset(wn & ARGSET),
                            target if kind != "tail" else eu2usa.get(target),
                            eu2usa.get(target) if kind == "call" else None, ccname, sets_flags)
    return (eu, out) if eu in out else None


COND_SUFFIX = {"eq", "ne", "hs", "lo", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le"}
SUMMARY = {}


OPP = {"eq": "ne", "ne": "eq", "hs": "lo", "lo": "hs", "cs": "cc", "cc": "cs", "mi": "pl", "pl": "mi",
       "vs": "vc", "vc": "vs", "hi": "ls", "ls": "hi", "ge": "lt", "lt": "ge", "gt": "le", "le": "gt"}


def analyse(usa, livein):
    """Registers read before written on some path. A register written by a conditional instruction
    (cc X) counts as defined for later instructions with the same cc X, and on the taken side of a
    `bX` (and the fall-through of the opposite condition), as long as the flags are unchanged."""
    if usa not in SUMMARY:
        SUMMARY[usa] = summarize(usa)
    sm = SUMMARY[usa]
    if sm is None:
        return None
    eu, insns = sm
    seen = {}
    reads = set()
    E = frozenset()
    work = [(eu, E, E)]
    steps = 0
    A4 = frozenset(ARGS[:4])
    CL = frozenset(CLOB & ARGSET)
    while work and steps < 60000:
        addr, defined, cdefs = work.pop()
        steps += 1
        prev = seen.get(addr)
        if prev is not None:
            if prev[0] <= defined and prev[1] <= cdefs:
                continue
            defined = prev[0] & defined
            cdefs = prev[1] & cdefs
        seen[addr] = (defined, cdefs)
        ins = insns.get(addr)
        if ins is None:
            continue
        kind, cond, rd_, wr_, target, callee, cc, flags = ins
        cdef_here = frozenset(r for r, c in cdefs if c == cc) if cond else E
        dd = defined | cdef_here
        if kind in ("call", "icall"):
            if kind == "call":
                cin = frozenset(livein.get(callee, ARGS[:4])) if callee else A4
            else:
                cin = A4 | rd_
            reads |= cin - dd
            # a call clobbers the flags' meaning for our purposes: drop conditional defs
            work.append((addr + 4, defined if cond else defined | CL, E))
            continue
        reads |= rd_ - dd
        if cond:
            nd, ncd = defined, cdefs | frozenset((r, cc) for r in wr_)
        else:
            nd, ncd = defined | wr_, frozenset(x for x in cdefs if x[0] not in wr_)
        if flags:
            ncd = E
        if kind == "b":
            if cond:
                taken = defined | frozenset(r for r, c in cdefs if c == cc)
                fall = defined | frozenset(r for r, c in cdefs if c == OPP.get(cc))
                work.append((target, taken, cdefs))
                work.append((addr + 4, fall, cdefs))
            else:
                work.append((target, nd, ncd))
            continue
        if kind == "tail":
            cin = frozenset(livein.get(target, [])) if target else E
            reads |= cin - dd
            if cond:
                work.append((addr + 4, defined | frozenset(r for r, c in cdefs if c == OPP.get(cc)), cdefs))
            continue
        if kind == "itail":
            reads |= A4 - dd
            if cond:
                work.append((addr + 4, defined | frozenset(r for r, c in cdefs if c == OPP.get(cc)), cdefs))
            continue
        if kind == "ret":
            if cond:
                work.append((addr + 4, defined | frozenset(r for r, c in cdefs if c == OPP.get(cc)), cdefs))
            continue
        if kind == "table":
            for t in target:
                work.append((t, nd, ncd))
            work.append((addr + 4, nd, ncd))
            continue
        work.append((addr + 4, nd, ncd))
    return sorted(reads, key=ARGS.index)


def main():
    out = os.path.join(os.path.dirname(os.path.abspath(__file__)), "livein.json")
    funcs = sorted(usa2eu, key=lambda u: usa2eu[u])
    livein = {}
    for it in range(12):
        changed = 0
        for n, u in enumerate(funcs):
            r = analyse(u, livein)
            if r is None:
                continue
            if livein.get(u) != r:
                changed += 1
                livein[u] = r
        print("iteration %d: %d changed" % (it, changed), file=sys.stderr)
        if not changed:
            break
    json.dump(livein, open(out, "w"))
    print("wrote %s (%d functions)" % (out, len(livein)), file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) > 1:
        lv = json.load(open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "livein.json"))) \
            if os.path.exists(os.path.join(os.path.dirname(os.path.abspath(__file__)), "livein.json")) else {}
        for u in sys.argv[1:]:
            print(u, analyse(u.upper(), lv))
    else:
        main()
