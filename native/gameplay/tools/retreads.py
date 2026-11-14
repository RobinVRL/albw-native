#!/usr/bin/env python3
"""retreads.py: which return registers callers actually use, from the EU ARM code.

For every direct call site `bl F` (and conditional bl), the instructions that follow in the
caller are walked linearly (stop at a branch, a call, a return or 16 instructions): if r0 / r1 /
s0 / s1 / d0 is READ before it is written, the caller consumes that register as F's result.
This is independent of Ghidra's return types: a function Ghidra typed `void` (or `int` while the
callers read s0) whose callers read the register lost its return value in the C.

Output: native/gameplay/tools/retreads.json {USA callee: {"sites": n, "r0": k, "r1": k,
"s0": k, "s1": k}}.  Run with the decomp venv python (capstone).
"""
import bisect, collections, json, os
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
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
md.detail = True
md.skipdata = True
TRACK = {"r0", "r1", "s0", "s1"}


def expand(n):
    if n.startswith("d") and n[1:].isdigit():
        k = int(n[1:])
        return {"s%d" % (2 * k), "s%d" % (2 * k + 1)}
    if n.startswith("q") and n[1:].isdigit():
        k = int(n[1:])
        return {"s%d" % (4 * k + j) for j in range(4)}
    return {n}


def regs(ins, ids):
    out = set()
    for r in ids:
        out |= expand(ins.reg_name(r))
    return out


def vfp_rw(ins):
    """(read, written) register sets of a VFP instruction, from the operand text (capstone's
    regs_access marks the destination of vldr/vldm as read)."""
    m = ins.mnemonic.split(".")[0]
    for cc in ("eq", "ne", "gt", "ge", "lt", "le", "hi", "ls", "mi", "pl", "vs", "vc", "cs", "cc", "hs", "lo"):
        if m.endswith(cc) and m[:-2] in ("vmov", "vldr", "vstr", "vadd", "vsub", "vmul", "vdiv", "vneg", "vabs",
                                           "vcmp", "vcmpe", "vmla", "vmls", "vnmla", "vnmls", "vnmul", "vsqrt", "vcvt",
                                           "vldmia", "vstmia", "vpush", "vpop", "vmrs", "vmsr"):
            m = m[:-2]
    ops = [o.strip(" {}") for o in ins.op_str.replace("{", "").replace("}", "").split(",")]
    names = set()
    for o in ops:
        t = o.split()[0] if o.split() else ""
        t = t.strip("[]!#")
        if t[:1] in "sdqr" and t[1:].isdigit():
            names |= expand(t)
    first = ops[0].strip("[]!") if ops else ""
    fset = expand(first) if first[:1] in "sdqr" and first[1:].isdigit() else set()
    if m in ("vstr", "vstmia", "vstmdb", "vpush", "vcmp", "vcmpe"):
        return names, set()
    if m in ("vldr",):
        return set(), fset
    if m in ("vldmia", "vldmdb", "vpop"):
        return {ops[0].strip("!")} if m != "vpop" else set(), names - expand(ops[0].strip("!"))
    if m in ("vmrs", "vmsr"):
        return set(), set()
    if m in ("vmla", "vmls", "vnmla", "vnmls", "vfma", "vfms"):
        return names, fset
    return names - fset if first not in [o for o in ops[1:]] else names, fset


def main():
    res = collections.defaultdict(lambda: collections.Counter())
    for i, eu in enumerate(starts):
        if eu & 1 or eu >= TEXT_END:
            continue
        end = starts[i + 1] if i + 1 < len(starts) else eu + 0x400
        end = min(end, eu + 0x20000)
        ins_list = list(md.disasm(code[eu - 0x100000:end - 0x100000], eu))
        for j, ins in enumerate(ins_list):
            m = ins.mnemonic
            if not (m.startswith("bl") and not m.startswith("blx") and ins.op_str.startswith("#0x")):
                continue
            t = int(ins.op_str[1:], 16)
            if t not in eu2usa:
                continue
            callee = eu2usa[t]
            res[callee]["sites"] += 1
            pending = set(TRACK)
            for k in ins_list[j + 1:j + 17]:
                if k.id == 0 or not pending:
                    break
                if k.mnemonic.startswith("v"):
                    r, w = vfp_rw(k)
                else:
                    try:
                        rd, wr = k.regs_access()
                    except capstone.CsError:
                        break
                    r, w = regs(k, rd), regs(k, wr)
                # vmrs apsr_nzcv, fpscr reads nothing tracked
                for reg in list(pending):
                    if reg in r:
                        res[callee][reg] += 1
                        pending.discard(reg)
                    elif reg in w and k.cc in (A.ARM_CC_AL, A.ARM_CC_INVALID):
                        pending.discard(reg)
                km = k.mnemonic
                if km.startswith(("b", "pop", "ldm")) and not km.startswith("bic") or "pc" in k.op_str.split(",")[0]:
                    # call/branch/return: at a return r0/s0 flow to OUR caller (tail use) -> count as read
                    if km.startswith("bl"):
                        # args of the next call: r0/s0 still pending are read by it if live-in; unknown
                        break
                    if km in ("bx",) and k.op_str == "lr" or km.startswith("pop") and "pc" in k.op_str:
                        for reg in pending & {"r0", "s0"}:
                            res[callee][reg + "_tail"] += 1
                    break
    json.dump({k: dict(v) for k, v in sorted(res.items())}, open(os.path.join(HERE, "retreads.json"), "w"), indent=0)
    print(len(res))


if __name__ == "__main__":
    main()
