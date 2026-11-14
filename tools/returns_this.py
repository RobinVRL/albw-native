#!/usr/bin/env python3
"""Find the functions that return their first argument (r0 in = r0 out), e.g. constructors.

armcc constructors return `this`, and constructor chains use it (EU 001097FC: `bl 0x10b880`
then stores through r0; EU 00102070: `sub r0, r0, #0x16c` after a vec ctor). Ghidra often types
them `void`, so natively the callers read garbage. This pass reads the EU machine code and, by a
small symbolic run over each function, proves r0 == incoming r0 at every return.

Rules (sound, conservative): only straight-line code plus forward conditional branches is
followed (each path separately, at most a few hundred paths); registers hold "r0_in + k" or
unknown; calls (bl/blx imm) clobber r0-r3/ip, except that a call to a function already proven
to return its first argument gives r0 = (r0 before the call); any other write to r0, a load into
pc, a backward branch or an indirect call makes the function "unknown". Fixpoint over all
functions (callee results feed callers).

  python3 tools/returns_this.py   -> native/returns_this.json  (sorted USA addresses)
"""
import json
import os
import re
import struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(ROOT, "..", "albw-decomp-ai")
CODE = os.path.join(DECOMP, "rom", "eu_code.bin")

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM  # noqa: E402  (run with the decomp venv)
from capstone import arm as A  # noqa: E402

REGN = {A.ARM_REG_R0 + i: i for i in range(13)}
REGN[A.ARM_REG_SB] = 9
REGN[A.ARM_REG_SL] = 10
REGN[A.ARM_REG_FP] = 11
REGN[A.ARM_REG_IP] = 12
SP, LR, PC = A.ARM_REG_SP, A.ARM_REG_LR, A.ARM_REG_PC


def load():
    code = open(CODE, "rb").read()
    emap = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    extra_p = os.path.join(ROOT, "native", "extra_functions.json")
    extra = json.load(open(extra_p)) if os.path.exists(extra_p) else {}
    eu2usa = {int(v["eu"], 16): k for k, v in emap.items()}
    eu2usa.update({int(e, 16): u for u, e in extra.items()})
    return code, eu2usa


def decode(code, starts):
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    md.detail = True
    order = sorted(starts)
    out = {}
    for i, s in enumerate(order):
        end = order[i + 1] if i + 1 < len(order) else s + 0x400
        end = min(end, s + 0x1000)
        out[s] = list(md.disasm(code[s - 0x100000:end - 0x100000], s))
    return out


def run(insns, proven):
    """True if r0_out == r0_in on every return path, else False."""
    by_addr = {ins.address: i for i, ins in enumerate(insns)}
    UNK = None
    paths = [(0, {0: 0})]  # (index, regs: regnum -> offset from r0_in)
    seen = 0
    returned = False
    while paths:
        idx, regs = paths.pop()
        while True:
            seen += 1
            if seen > 4000 or idx >= len(insns):
                return False
            ins = insns[idx]
            m, ops = ins.mnemonic, ins.operands
            cond = ins.cc not in (A.ARM_CC_AL, A.ARM_CC_INVALID)
            base = re.sub(r"(eq|ne|hs|cs|lo|cc|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)$", "", m) if cond else m
            # returns
            if base in ("pop", "ldm", "ldmia") and any(o.type == A.ARM_OP_REG and o.reg == PC for o in ops):
                if any(o.type == A.ARM_OP_REG and o.reg == A.ARM_REG_R0 for o in ops[1:]):
                    return False
                if regs.get(0) != 0:
                    return False
                returned = True
                if cond:
                    idx += 1
                    continue
                break
            if base == "bx" and ops[0].reg == LR:
                if regs.get(0) != 0:
                    return False
                returned = True
                if cond:
                    idx += 1
                    continue
                break
            if base in ("b",):
                tgt = ops[0].imm
                if tgt in by_addr and by_addr[tgt] > idx:
                    if cond:
                        paths.append((by_addr[tgt], dict(regs)))
                        idx += 1
                        continue
                    idx = by_addr[tgt]
                    continue
                # tail call: r0 passes through to the callee's return
                if not cond and tgt in proven and regs.get(0) == 0:
                    returned = True
                    break
                return False
            if base in ("bl", "blx"):
                if ops[0].type != A.ARM_OP_IMM:
                    return False  # indirect call: result unknown
                tgt = ops[0].imm
                r0 = regs.get(0)
                for r in (0, 1, 2, 3, 12):
                    regs.pop(r, None)
                if tgt in proven and r0 is not None and not cond:
                    regs[0] = r0
                elif cond:
                    return False
                idx += 1
                continue
            # writes to pc other than the patterns above
            if any(o.type == A.ARM_OP_REG and o.reg == PC for o in ops[:1]) and base not in ("cmp", "cmn", "tst", "teq", "str", "push", "stm", "stmdb"):
                return False
            # data processing / loads
            regs_w = []
            if base in ("mov", "movs", "mvn", "add", "adds", "sub", "subs", "rsb", "and", "ands", "orr",
                        "eor", "bic", "lsl", "lsr", "asr", "ror", "mul", "mla", "lsls", "lsrs", "asrs",
                        "movw", "movt", "ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrd", "mrc", "uxtb",
                        "uxth", "sxtb", "sxth", "ubfx", "sbfx", "bfi", "bfc", "clz", "rev", "orrs", "eors",
                        "bics", "rsbs", "muls", "umull", "smull", "umlal", "smlal", "vmov", "adc", "sbc",
                        "mvns", "rscs", "rsc", "adcs", "sbcs", "uxtah", "uxtab", "smulbb", "qadd", "qsub"):
                if ops and ops[0].type == A.ARM_OP_REG:
                    d = REGN.get(ops[0].reg)
                    val = UNK
                    if not cond:
                        if base in ("mov",) and len(ops) == 2 and ops[1].type == A.ARM_OP_REG and ops[1].shift.type == 0:
                            val = regs.get(REGN.get(ops[1].reg, -1))
                        elif base in ("add", "sub") and len(ops) == 3 and ops[1].type == A.ARM_OP_REG and ops[2].type == A.ARM_OP_IMM:
                            s = regs.get(REGN.get(ops[1].reg, -1))
                            if s is not None:
                                val = s + (ops[2].imm if base == "add" else -ops[2].imm)
                    if base in ("ldrd", "umull", "smull", "umlal", "smlal") and len(ops) > 1 and ops[1].type == A.ARM_OP_REG:
                        regs_w.append(REGN.get(ops[1].reg))
                    if d is not None:
                        if cond and regs.get(d) is not None:
                            regs[d] = UNK
                        else:
                            regs[d] = val
                    for r in regs_w:
                        if r is not None:
                            regs[r] = UNK
                # base register writeback for loads
                if ins.writeback and base.startswith("ldr"):
                    for o in ops:
                        if o.type == A.ARM_OP_MEM:
                            r = REGN.get(o.mem.base)
                            if r is not None:
                                regs[r] = UNK
            elif base in ("str", "strb", "strh", "strd"):
                if ins.writeback:
                    mem = [o for o in ops if o.type == A.ARM_OP_MEM]
                    r = REGN.get(mem[0].mem.base) if mem else None
                    if r is not None:
                        s = regs.get(r)
                        # post-index: str rX, [rN], #k (imm operand after mem) / pre-index: [rN, #k]!
                        imm = [o for o in ops if o.type == A.ARM_OP_IMM]
                        k = imm[0].imm if imm else mem[0].mem.disp
                        if imm and imm[0].subtracted:
                            k = -k
                        if mem[0].mem.index != 0 or s is None or cond:
                            regs[r] = UNK
                        else:
                            regs[r] = s + k
            elif base in ("ldm", "ldmia", "ldmib", "ldmda", "ldmdb", "pop"):
                for o in ops:
                    if o.type == A.ARM_OP_REG and o.reg in REGN:
                        regs[REGN[o.reg]] = UNK
            elif base in ("stm", "stmia", "stmib", "stmda", "stmdb", "push", "cmp", "cmn", "tst", "teq", "nop",
                          "vstr", "vldr", "vpush", "vpop", "vstmia", "vldmia", "vcmp", "vmrs", "vcvt", "vadd",
                          "vsub", "vmul", "vdiv", "vneg", "vabs", "vsqrt", "vmla", "vmls", "vnmul", "vfma",
                          "vstmdb", "vldmdb", "dmb", "dsb", "pld", "clrex", "strex", "ldrex", "svc"):
                if base in ("stm", "stmia", "stmib", "stmdb", "stmda") and ins.writeback and ops:
                    r = REGN.get(ops[0].reg)
                    if r is not None:
                        regs[r] = UNK
                if base in ("ldrex", "strex") and ops:
                    r = REGN.get(ops[0].reg)
                    if r is not None:
                        regs[r] = UNK
                if base == "svc":
                    for r in (0, 1, 2, 3):
                        regs[r] = UNK
            else:
                # anything else that names r0 first: unknown
                if ops and ops[0].type == A.ARM_OP_REG and ops[0].reg in REGN:
                    regs[REGN[ops[0].reg]] = UNK
            idx += 1
    return returned


def main():
    code, eu2usa = load()
    insns = decode(code, eu2usa.keys())
    # Thumb C runtime (not decoded here): __aeabi_vec_ctor_nocookie_nodtor returns the array
    proven = {0x00100118}
    while True:
        new = {a for a, ii in insns.items() if a not in proven and run(ii, proven)}
        if not new:
            break
        proven |= new
    usa = sorted(eu2usa.get(a, "%08X" % a) for a in proven)
    json.dump(usa, open(os.path.join(ROOT, "native", "returns_this.json"), "w"), indent=0)
    print("functions returning their first argument: %d" % len(usa))


if __name__ == "__main__":
    main()
