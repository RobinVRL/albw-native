#!/usr/bin/env python3
"""Decompile a straight-line static initialiser into readable C (native/game/func_<ADDR>.c).

  python3 tools/decomp_initializer_next.py <USA ADDR> [--check]

Many of the game's 1,230 static constructors only store constants, string literals and
pointers into globals (often long unrolled runs of sead::SafeString {vtable, name} pairs).
This follows the function's instructions symbolically (literal pool, pc-relative strings,
immediates incl. rotated ones, mov/mvn/add, str/strd/stm with writeback, forward branches)
and writes the equivalent C:
  - runs of SafeString pairs -> a const name array + a fill loop over the destination array;
  - other stores -> typed assignments with real symbols (func_<USA ADDR> for code pointers,
    data_<ADDR> for data, string literals), never raw 3DS addresses.
Refuses (exit 1) if the function does anything it cannot prove, so only functions it fully
understands are emitted. --check only reports.

Beyond plain stores and calls it handles, exactly:
  - reads of writable data: emitted as "uintptr_t vN = data_X;" at the same point of the program
    (a read ends the current group of stores, so no store is moved across it); the value may only
    be stored, passed to a call, compared (below) or offset by a constant;
  - reads of memory this function itself wrote with nothing able to change it since (no call in
    between; for the stack, its address has not escaped): the written value is used directly;
  - "cmp x, #imm" + conditional mov/mvn/ldr-literal/adr (eq/ne) on a run-time x:
    "uintptr_t vN = x == imm ? a : b;"; with constant operands the condition is evaluated;
  - register saves/restores (push/pop, vpush/vpop, "str rX, [sp, #-4]!"), post-indexed and
    register-offset addressing, ldrd/ldm, constant arithmetic and shifts, VFP register moves;
  - calls with arguments 5.. on the stack (count from the analysed signature);
  - calls after VFP argument registers were written only if the callee provably never reads
    floating-point arguments (vfp_arg_reads); string literals keep their exact bytes.
"""
import argparse
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(ROOT, "..", "albw-decomp-ai")
B = 0x100000
RO, DATA, END = 0x693000, 0x6FF000, 0x6FF000 + 0x289F0 + 0x87A44
SAFESTRING_VTBL = 0x6F5988  # sead::SafeString vtable (read-only data)


def load():
    sys.path.insert(0, os.path.join(DECOMP, ".venv", "lib"))
    code = open(os.path.join(DECOMP, "rom", "eu_code.bin"), "rb").read()
    m = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    return code, m


class Events(dict):
    """Program-ordered effects: segments of stores, each closed by a terminator.

    The stores of one segment may be emitted in any order: no two of them overlap (an
    overlapping store starts a new segment) and nothing reads memory between them.  A
    segment ends with a call ("call", target, thumb, args), a local definition ("def", n)
    (a read of writable memory, or a select on a compared value), or None (a split)."""

    def __init__(self):
        super().__init__()
        self.segments = [[{}, None]]  # [stores, terminator]
        self.widths = [{}]
        self.defs = []
        self.ncalls = 0

    def _end(self, term):
        self.segments[-1][1] = term
        self.segments.append([{}, None])
        self.widths.append({})

    def __setitem__(self, key, v):
        width = {"w1": 1, "w2": 2}.get(v[2] if v[0] == "v" and len(v) == 3 else "", 4)
        space, a = key if isinstance(key, tuple) else ("g", key)
        for k2, w2 in self.widths[-1].items():
            s2, a2 = k2 if isinstance(k2, tuple) else ("g", k2)
            if s2 == space and (k2 != key or w2 != width) and a2 < a + width and a < a2 + w2:
                self._end(None)  # overlaps an earlier store of this segment: keep their order
                break
        super().__setitem__(key, v)
        self.segments[-1][0][key] = v
        self.widths[-1][key] = width

    def call(self, target, thumb, args, stack=()):
        self._end(("call", target, thumb, args, list(stack)))
        self.ncalls += 1
        return self.ncalls - 1  # call index

    def define(self, d):
        self.defs.append(d)
        self._end(("def", len(self.defs) - 1))
        return len(self.defs) - 1


M32 = 0xFFFFFFFF
SYMBOLIC = ("ret", "loc")  # values only known at run time: a call's result, a local variable
CC_SUFFIX = ("eq", "ne", "hs", "lo", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le")


def cond_holds(cc, a, b):
    """ARM condition cc (capstone numbering) after "cmp a, b" on 32-bit values."""
    res = (a - b) & M32
    N, Z, C, V = res >> 31, res == 0, a >= b, ((a ^ b) & (a ^ res)) >> 31
    return {1: Z, 2: not Z, 3: C, 4: not C, 5: N == 1, 6: N == 0, 7: V == 1, 8: V == 0,
            9: C and not Z, 10: (not C) or Z, 11: N == V, 12: N != V, 13: (not Z) and N == V,
            14: Z or N != V}[cc]


def shift_const(x, stype, s):
    """Barrel shifter on a constant (capstone shift types 1..4: asr, lsl, lsr, ror)."""
    if stype == 2:
        return (x << s) & M32
    if stype == 3:
        return x >> s
    if stype == 1:
        return ((x - (1 << 32) if x >> 31 else x) >> s) & M32
    if stype == 4:
        return ((x >> s) | (x << (32 - s))) & M32 if s else x
    return None


_VFP_READS = {}
# Hand-verified helpers the scan cannot follow (computed jumps): their effect on the analysis.
_VFP_SUMMARY = {
    # RVCT soft-float NaN/Inf handler (called as "bl 0x114D80; .word <table>"): reads the inline
    # word after the call, then returns into the caller's code right after it ("bx ip") or
    # through its own table at 0x114DEC..0x114E1C.  Core registers only; checked by hand.
    # None of its return targets (e.g. 0x114678..0x11468C after the call in 0x114608) call
    # anything or touch a VFP register, so the path simply ends here.
    0x114D80: "ends-path",
}
_VFP_DEST_ONLY = ("vmov", "vadd", "vsub", "vmul", "vnmul", "vdiv", "vneg", "vabs", "vsqrt", "vcvt",
                  "vcvtr", "vldr", "vldmia", "vldmdb", "vpop")


def vfp_arg_reads(code, target, depth=0, limit=20000, thumb=False):
    """Which VFP argument registers (as s0..s15 units) the ARM function at `target` may read
    before writing them -- i.e. which incoming floating-point arguments it can use.  A flow-
    sensitive scan over every reachable path (conditional instructions may or may not run;
    calls are analysed the same way, and clobber s0-s15).  None if it cannot be proved:
    indirect jumps/calls, Thumb code, recursion, or more than `limit` instructions."""
    key = (target, thumb)
    if key in _VFP_READS:
        return _VFP_READS[key]
    if depth > 24:
        return None
    _VFP_READS[key] = None  # recursion guard: a cycle stays unproved
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
    from capstone.arm import ARM_OP_IMM, ARM_OP_REG, ARM_REG_PC, ARM_REG_LR, ARM_REG_S0, ARM_REG_D0, ARM_REG_Q0
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if thumb else CS_MODE_ARM)
    md.detail = True
    ALL = frozenset(range(16))
    align = 1 if thumb else 3

    def units(r):
        if ARM_REG_S0 <= r < ARM_REG_S0 + 32:
            k = r - ARM_REG_S0
            return {k} if k < 16 else set()
        if ARM_REG_D0 <= r < ARM_REG_D0 + 32:
            k = r - ARM_REG_D0
            return {2 * k, 2 * k + 1} if k < 8 else set()
        if ARM_REG_Q0 <= r < ARM_REG_Q0 + 16:
            k = r - ARM_REG_Q0
            return set(range(4 * k, 4 * k + 4)) if k < 4 else set()
        return set()

    state, todo, reads, steps = {target: frozenset()}, [target], set(), 0
    result = set()
    while todo:
        pc = todo.pop()
        written = state[pc]
        steps += 1
        if steps > limit or not (B <= pc < RO) or pc & align:
            return None
        ins = list(md.disasm(code[pc - B:pc - B + 4], pc, 1))
        if not ins:
            continue  # not an instruction (data after a call that does not return): executing it traps
        i = ins[0]
        mn, ops = i.mnemonic, i.operands
        uncond = i.cc in (0, 15)
        if mn.startswith(("mrc", "mcr", "ldc", "stc", "cdp", "fmrx", "fmxr")):
            return None
        rd_, wr = set(), set()
        if mn[0] == "v":
            vregs = [(k, o.reg) for k, o in enumerate(ops) if o.type == ARM_OP_REG and
                     (ARM_REG_S0 <= o.reg < ARM_REG_S0 + 32 or ARM_REG_D0 <= o.reg < ARM_REG_D0 + 32 or
                      ARM_REG_Q0 <= o.reg < ARM_REG_Q0 + 16)]
            base = mn.split(".")[0]
            if base in ("vmrs", "vmsr"):
                pass  # status register only
            elif base in ("vldmia", "vldmdb", "vpop"):
                wr = set().union(*[units(r) for _, r in vregs]) if vregs else set()
            elif base in _VFP_DEST_ONLY and vregs and vregs[0][0] == 0:
                wr = units(vregs[0][1])
                rd_ = set().union(*[units(r) for k, r in vregs[1:]]) if len(vregs) > 1 else set()
            else:  # stores, compares, multiply-accumulate, unknown: every VFP operand is read
                rd_ = set().union(*[units(r) for _, r in vregs]) if vregs else set()
        result |= rd_ - written
        after = written | (wr if uncond else set())
        succ = []
        nxt = pc + i.size
        writes_pc = any(o.type == ARM_OP_REG and o.reg == ARM_REG_PC for o in ops)
        if mn[0] == "b" and not mn.startswith("bic"):
            if mn.startswith("bx"):
                if ops[0].reg != ARM_REG_LR:
                    return None
                succ = [] if uncond else [nxt]
            elif mn.startswith("blx") and ops[0].type == ARM_OP_REG:
                # indirect call: the unknown callee may read every argument register not yet written
                result |= ALL - after
                succ = [nxt]
                after = ALL if uncond else after
            elif ops[0].type != ARM_OP_IMM:
                return None
            elif mn.startswith("bl") and mn[:3] not in ("bls", "blo", "ble", "blt") or mn in ("bl", "blx"):
                tgt, tthumb = ops[0].imm, thumb != mn.startswith("blx")
                if _VFP_SUMMARY.get(tgt) == "ends-path" and not tthumb:
                    continue
                sub = vfp_arg_reads(code, tgt & ~1, depth + 1, limit, tthumb)
                if sub is None:
                    return None
                result |= set(sub) - after
                succ = [nxt]
                after = ALL if uncond else after  # the callee may leave anything in s0-s15
            else:
                succ = [ops[0].imm] + ([] if uncond else [nxt])
        elif mn.startswith(("pop", "ldm")) and writes_pc:
            succ = [] if uncond else [nxt]
        elif writes_pc and ops and ops[0].type == ARM_OP_REG and ops[0].reg == ARM_REG_PC:
            return None  # computed jump
        elif thumb and mn in ("mov", "add") and ops and ops[0].type == ARM_OP_REG and ops[0].reg == ARM_REG_PC:
            return None
        else:
            succ = [nxt]
        for s in succ:
            if s not in state:
                state[s] = frozenset(after)
                todo.append(s)
            elif not state[s] <= after:
                state[s] = state[s] & after
                todo.append(s)
    _VFP_READS[key] = frozenset(result)
    return _VFP_READS[key]


def never_uses_vfp(code, target, thumb=False):
    """True only if the function provably never reads an incoming floating-point argument."""
    r = vfp_arg_reads(code, target, thumb=thumb)
    return r is not None and not r


def trace(code, eu):
    """Symbolically execute the initialiser; returns (Events, tail call or None).

    Register values: ("v", x[, tag]) constant (tag "f" float bits, "n" plain number),
    ("s", text) string literal, ("sp", off) stack address, ("ret", k, off) result of call k
    plus off, ("loc", n, off) local variable n (a read of writable data, or a select) plus
    off, ("entry", reg) the caller's register (may only be saved/restored), ("d", lo, hi)
    a constant VFP double.  Anything not provable raises ValueError."""
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
    from capstone.arm import (ARM_REG_PC, ARM_OP_IMM, ARM_OP_REG, ARM_OP_MEM, ARM_OP_FP, ARM_REG_R0,
                              ARM_REG_R3, ARM_REG_R4, ARM_REG_R11, ARM_REG_R12, ARM_REG_LR, ARM_REG_SP,
                              ARM_REG_S0, ARM_REG_S31, ARM_REG_D0, ARM_REG_D31, ARM_REG_Q0, ARM_REG_Q15)
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    md.detail = True
    rd = lambda a: struct.unpack_from("<I", code, a - B)[0]
    cstr = lambda a: code[a - B:code.index(b"\0", a - B)].decode("latin1")
    ror = lambda v, n: ((v >> n) | (v << (32 - n))) & M32 if n else v
    R, mem, pc, n = {}, Events(), eu, 0
    R[ARM_REG_SP] = ("sp", 0)
    for r in list(range(ARM_REG_R4, ARM_REG_R11 + 1)) + [ARM_REG_LR] + list(range(ARM_REG_D0 + 8, ARM_REG_D0 + 16)):
        R[r] = ("entry", r)  # callee-saved registers and the return address: the caller's values
    known = {}   # (space, addr) -> (width, value): memory this function provably wrote (and nothing changed since)
    saved = {}   # stack offset -> value saved by push/vpush/"str rX, [sp, #-4]!" (never emitted)
    # escaped: a stack address left the function; vfp_args: a VFP argument register (s0-s15 /
    # d0-d7) was written since the last call, so a call could take floating-point arguments
    st = {"escaped": False, "flags": None, "vfp_args": False}
    set_since_call = set()

    def err(msg):
        raise ValueError("%s at %08x" % (msg, pc))

    def num(v):
        return v[1] if v and v[0] == "v" else None

    def bad(v):  # values that may not be stored or passed (only saved on the stack)
        return v is None or v[0] in ("entry", "d")

    # --- VFP registers alias: d<k> = s<2k>:s<2k+1>, q<k> = d<2k>:d<2k+1> ---
    def vset(reg, v):
        if ARM_REG_S0 <= reg < ARM_REG_S0 + 16 or ARM_REG_D0 <= reg < ARM_REG_D0 + 8:
            st["vfp_args"] = True
        if ARM_REG_S0 <= reg <= ARM_REG_S31:
            k = reg - ARM_REG_S0
            R[reg] = v
            R.pop(ARM_REG_Q0 + k // 4, None)
            lo, hi = R.get(ARM_REG_S0 + (k & ~1)), R.get(ARM_REG_S0 + (k | 1))
            if lo and hi and lo[0] == "v" and hi[0] == "v":
                R[ARM_REG_D0 + k // 2] = ("d", lo[1], hi[1])
            else:
                R.pop(ARM_REG_D0 + k // 2, None)
        elif ARM_REG_D0 <= reg <= ARM_REG_D31:
            k = reg - ARM_REG_D0
            R[reg] = v
            R.pop(ARM_REG_Q0 + k // 2, None)
            if k < 16:
                if v and v[0] == "d":
                    R[ARM_REG_S0 + 2 * k], R[ARM_REG_S0 + 2 * k + 1] = ("v", v[1], "f"), ("v", v[2], "f")
                else:
                    R.pop(ARM_REG_S0 + 2 * k, None)
                    R.pop(ARM_REG_S0 + 2 * k + 1, None)
        else:
            err("unsupported VFP register")

    def flush_after_call():
        for r in list(range(ARM_REG_R0, ARM_REG_R3 + 1)) + [ARM_REG_R12, ARM_REG_LR] + \
                list(range(ARM_REG_S0, ARM_REG_S0 + 16)) + list(range(ARM_REG_D0, ARM_REG_D0 + 8)) + \
                list(range(ARM_REG_D0 + 16, ARM_REG_D31 + 1)) + list(range(ARM_REG_Q0, ARM_REG_Q15 + 1)):
            R.pop(r, None)
        for k in [k for k in known if k[0] == "g" or st["escaped"]]:
            del known[k]  # the callee may write any global (and our frame, once its address escaped)
        st["flags"] = None
        st["vfp_args"] = False
        set_since_call.clear()

    def call(target, thumb):
        if st["vfp_args"] and not never_uses_vfp(code, target, thumb):
            # hard-float ABI: s0-s15 / d0-d7 may carry arguments the C call would drop
            err("call with possible floating-point arguments")
        args = [R.get(ARM_REG_R0 + k) for k in range(4)]
        nargs = max([k + 1 for k in range(4) if ARM_REG_R0 + k in set_since_call] or [0])
        if any(bad(v) for v in args[:nargs]):
            err("call with an unknown argument")
        if any(v[0] == "sp" for v in args[:nargs]):
            st["escaped"] = True
        sp = R[ARM_REG_SP][1]  # outgoing stack words: arguments 5.. if the callee takes them
        stack = [known[("sp", sp + 4 * j)][1] if known.get(("sp", sp + 4 * j), (0,))[0] == 4 else None
                 for j in range(12)]
        k = mem.call(target, thumb, args[:nargs], stack)
        flush_after_call()
        R[ARM_REG_R0] = ("ret", k, 0)  # the call's result, if the code uses it

    def op2(o):
        """Value of a flexible second operand (immediate, or register with a constant shift)."""
        if o.type == ARM_OP_IMM:
            return ("v", o.imm & M32)
        if o.type != ARM_OP_REG:
            return None
        v = R.get(o.reg)
        if o.shift.type == 0:
            return v
        x = num(v)
        if x is None or o.shift.type > 4:
            return None
        return ("v", shift_const(x, o.shift.type, o.shift.value), "n")

    def offset(v, d):
        """v + d for a value that can carry a constant offset; None if not expressible."""
        if v is None:
            return None
        if v[0] == "v" and (len(v) == 2 or v[2] != "f"):
            return ("v", (v[1] + d) & M32) if len(v) == 2 else ("v", (v[1] + d) & M32, "n")
        if v[0] == "sp":
            return ("sp", v[1] + d)
        if v[0] in SYMBOLIC:
            return (v[0], v[1], ((v[2] + d + (1 << 31)) & M32) - (1 << 31))
        return None

    def address(i, mop):
        """(space, address) of memory operand ops[mop], applying writeback / post-indexing."""
        ops = i.operands
        mo = ops[mop]
        base = R.get(mo.mem.base)
        if not base or base[0] not in ("v", "sp") or (base[0] == "v" and len(base) == 3 and base[2] == "f"):
            return None
        if mo.mem.index:
            if i.post_index or mo.mem.scale != 1 or i.writeback:
                return None
            idx = R.get(mo.mem.index)
            if mo.shift.type:
                idx = ("v", shift_const(num(idx), mo.shift.type, mo.shift.value)) if num(idx) is not None and mo.shift.type <= 4 else None
            if num(idx) is not None:
                ea = offset(base, -num(idx) if mo.subtracted else num(idx))
            elif idx and idx[0] == "sp" and num(base) is not None and not mo.subtracted:
                ea = offset(idx, num(base))
            else:
                return None
            return ("g" if ea[0] == "v" else "sp"), ea[1]
        if i.post_index:
            if len(ops) <= mop + 1 or ops[mop + 1].type != ARM_OP_IMM:
                return None
            step = ops[mop + 1].imm
            R[mo.mem.base] = offset(base, -step if ops[mop + 1].subtracted else step)
            return ("g" if base[0] == "v" else "sp"), base[1]
        ea = offset(base, mo.mem.disp)
        if i.writeback:
            R[mo.mem.base] = ea
        return ("g" if base[0] == "v" else "sp"), ea[1]

    def remember(space, a, width, v):
        for k in [k for k in known if k[0] == space and k[1] < a + width and a < k[1] + known[k][0]]:
            del known[k]
        known[(space, a)] = (width, v)

    def store(space, a, width, v):
        if v is None:
            err("store of unknown value")
        if v[0] == "entry":  # saving a caller's register (str rX, [sp, #-4]!)
            if space != "sp" or width != 4 or any(("sp", a2) in mem for a2 in range(a - 3, a + 4)):
                err("store of a caller register")
            saved[a] = v
            known.pop(("sp", a), None)
            return
        if v[0] == "d":
            err("store of unknown value")
        if v[0] == "sp":
            st["escaped"] = True
        if width != 4:
            if v[0] != "v":
                err("narrow store of a pointer")
            v = ("v", v[1] & ((1 << (8 * width)) - 1), "w%d" % width)
        if space == "sp":
            for a2 in range(a - 3, a + width):
                saved.pop(a2, None)
        remember(space, a, width, v)
        mem[a if space == "g" else ("sp", a)] = v

    def load(space, a, width, signed=False):
        k = known.get((space, a))
        if k and k[0] == width:  # this function wrote it and nothing can have changed it since
            v = k[1]
            if width == 4:
                return v
            if v[0] == "v":
                x = v[1]
                if signed and x >> (8 * width - 1):
                    x = (x - (1 << (8 * width))) & M32
                return ("v", x, "n")
        if space == "sp":
            if width == 4 and a in saved:
                return saved[a]
            err("load of an unknown stack slot")
        if RO <= a and a + width <= DATA:  # read-only data: a constant
            x = int.from_bytes(code[a - B:a - B + width], "little", signed=signed) & M32
            return ("v", x) if width == 4 else ("v", x, "n")
        if DATA <= a and a + width <= END:  # writable data: read it here, in program order
            return ("loc", mem.define(("load", a, width, signed)), 0)
        err("load from unknown memory")

    while n < 100000:
        n += 1
        i = next(md.disasm(code[pc - B:pc - B + 4], pc))
        ops, mn = i.operands, i.mnemonic
        if i.cc not in (0, 15):  # conditional execution
            fl = st["flags"]
            sfx = CC_SUFFIX[i.cc - 1]
            if fl and fl[0] == "const":  # flags of two constants: the condition is known exactly
                if not cond_holds(i.cc, fl[1], fl[2]):
                    pc += 4
                    continue
                if sfx not in mn:
                    err("conditional instruction")
                mn = mn.replace(sfx, "", 1) if mn.startswith("b") else mn[:len(mn) - len(sfx)] if mn.endswith(sfx) else None
                if mn is None:
                    err("conditional instruction")
            elif fl and fl[0] == "sym" and i.cc in (1, 2) and mn.endswith(sfx) and not i.update_flags \
                    and ops and ops[0].type == ARM_OP_REG and ARM_REG_R0 <= ops[0].reg <= ARM_REG_R12:
                # "cmp x, #imm; mov/ldr<eq|ne> rD, ..." -> rD = (x == imm) ? new : old
                base_mn, dst, new = mn[:-2], ops[0].reg, None
                if base_mn in ("mov", "mvn") and len(ops) == 2 and ops[1].type == ARM_OP_IMM:
                    x = ops[1].imm & M32
                    new = ("v", x if base_mn == "mov" else (~x) & M32)
                elif base_mn == "mov" and len(ops) == 2 and ops[1].type == ARM_OP_REG and ops[1].shift.type == 0:
                    new = R.get(ops[1].reg)
                elif base_mn == "ldr" and ops[1].type == ARM_OP_MEM and ops[1].mem.base == ARM_REG_PC \
                        and not ops[1].mem.index and not i.writeback:
                    new = ("v", rd(pc + 8 + ops[1].mem.disp))
                elif base_mn in ("add", "sub") and len(ops) == 3 and ops[2].type == ARM_OP_IMM and ops[1].reg == ARM_REG_PC:
                    new = ("s", cstr(pc + 8 + (ops[2].imm if base_mn == "add" else -ops[2].imm)))
                old = R.get(dst)
                if bad(new) or bad(old) or new[0] == "sp" or old[0] == "sp":
                    err("conditional instruction")
                t, f = (new, old) if i.cc == 1 else (old, new)
                R[dst] = ("loc", mem.define(("sel", fl[1], fl[2], t, f)), 0)
                set_since_call.add(dst)
                pc += 4
                continue
            else:
                raise ValueError("conditional instruction at %08x: %s %s" % (pc, mn, i.op_str))
        if mn == "b" and ops[0].imm > pc and ops[0].imm - pc < 0x10000:
            pc = ops[0].imm  # forward jump (or a tail call into nearby code: followed, i.e. inlined)
            continue
        if mn == "bx":
            if ops[0].reg != ARM_REG_LR or R.get(ARM_REG_LR) != ("entry", ARM_REG_LR):
                err("indirect jump")
            return mem, None
        if mn in ("bl", "blx") and ops[0].type == ARM_OP_IMM:
            call(ops[0].imm, mn == "blx")
            pc += 4
            continue
        if mn == "blx" and ops[0].type == ARM_OP_REG:  # call through a register holding a constant code address
            x = num(R.get(ops[0].reg))
            if x is None or not (B <= x < RO):
                err("indirect call")
            call(x & ~1, bool(x & 1))
            pc += 4
            continue
        if mn == "b":  # tail call: the last thing the initialiser does
            args = [R.get(ARM_REG_R0 + k) for k in range(4)]
            if R.get(ARM_REG_LR) != ("entry", ARM_REG_LR) or R.get(ARM_REG_SP) != ("sp", 0):
                err("branch with a live frame")
            if any(v is not None and v[0] in ("entry", "sp", "d") for v in args):
                err("tail call with an unknown argument")
            if st["vfp_args"] and not never_uses_vfp(code, ops[0].imm):
                err("call with possible floating-point arguments")
            return mem, (ops[0].imm, args)
        if mn in ("push", "vpush"):
            words = []
            for o in ops:
                v = R.get(o.reg)
                if mn == "push":
                    words.append(v)
                elif v and v[0] == "entry":
                    words += [("entry", o.reg, 0), ("entry", o.reg, 1)]
                elif v and v[0] == "d":
                    words += [("v", v[1]), ("v", v[2])]
                else:
                    words += [None, None]
            base = R[ARM_REG_SP][1] - 4 * len(words)
            for k, v in enumerate(words):
                if v is None:
                    err("push of an unknown register")
                if v[0] == "sp":
                    st["escaped"] = True
                saved[base + 4 * k] = v
                known.pop(("sp", base + 4 * k), None)
            R[ARM_REG_SP] = ("sp", base)
            pc += 4
            continue
        if mn in ("pop", "vpop"):
            sp, ret = R[ARM_REG_SP][1], False
            for o in ops:
                if mn == "vpop":
                    lo, hi = saved.get(sp), saved.get(sp + 4)
                    if lo == ("entry", o.reg, 0) and hi == ("entry", o.reg, 1):
                        R[o.reg] = ("entry", o.reg)
                    elif lo and hi and lo[0] == "v" and hi[0] == "v":
                        vset(o.reg, ("d", lo[1], hi[1]))
                    else:
                        err("vpop of an unknown slot")
                    sp += 8
                    continue
                if sp in saved:
                    v = saved[sp]
                else:
                    k = known.get(("sp", sp))
                    v = k[1] if k and k[0] == 4 else None
                if v is None:
                    err("pop of an unknown slot")
                if o.reg == ARM_REG_PC:
                    if v != ("entry", ARM_REG_LR):
                        err("return to an unknown address")
                    ret = True
                else:
                    R[o.reg] = v
                    set_since_call.add(o.reg)
                sp += 4
            R[ARM_REG_SP] = ("sp", sp)
            if ret:
                return mem, None
            pc += 4
            continue
        if i.update_flags and mn != "cmp":
            st["flags"] = None
            if mn.endswith("s") and mn[:-1] in ("mov", "mvn", "add", "sub", "rsb", "and", "orr", "eor", "bic",
                                                 "lsl", "lsr", "asr", "ror", "mul"):
                mn = mn[:-1]
        if ops and ops[0].type == ARM_OP_REG and mn not in ("str", "strd", "strb", "strh", "stm", "stmib", "stmia", "cmp",
                                                           "vstr", "vstmia", "vstm", "vldmia", "ldm", "ldmib", "ldmia"):
            set_since_call.add(ops[0].reg)  # destination register written: a possible call argument
        imm = None
        if len(ops) >= 3 and ops[2].type == ARM_OP_IMM:
            imm = ror(ops[2].imm, ops[3].imm) if len(ops) == 4 and ops[3].type == ARM_OP_IMM else ops[2].imm
        vm = mn.split(".")[0]
        if mn in ("ldr", "ldrb", "ldrh", "ldrsb", "ldrsh") and ops[1].mem.base == ARM_REG_PC:
            if mn != "ldr" or i.writeback or ops[1].mem.index:
                err("unsupported pc-relative load")
            R[ops[0].reg] = ("v", rd(pc + 8 + ops[1].mem.disp))
        elif mn == "ldrd" and ops[2].mem.base == ARM_REG_PC:
            if i.writeback or ops[2].mem.index:
                err("unsupported pc-relative load")
            ea = pc + 8 + ops[2].mem.disp
            R[ops[0].reg], R[ops[1].reg] = ("v", rd(ea)), ("v", rd(ea + 4))
            set_since_call.add(ops[1].reg)
        elif mn in ("add", "sub") and imm is not None and ops[1].reg == ARM_REG_PC:
            R[ops[0].reg] = ("s", cstr(pc + 8 + (imm if mn == "add" else -imm)))
        elif mn in ("add", "sub", "rsb", "and", "orr", "eor", "bic", "mul") and len(ops) in (3, 4) \
                and ops[1].type == ARM_OP_REG and ops[1].reg != ARM_REG_PC:
            a, b = R.get(ops[1].reg), (op2(ops[2]) if imm is None else ("v", imm & M32))
            x, y = num(a), num(b)
            res = None
            if mn == "add":
                res = offset(a, y) if y is not None else (offset(b, x) if x is not None else None)
            elif mn == "sub" and y is not None:
                res = offset(a, -y)
            elif x is not None and y is not None:
                res = ("v", {"rsb": lambda: y - x, "and": lambda: x & y, "orr": lambda: x | y,
                             "eor": lambda: x ^ y, "bic": lambda: x & ~y, "mul": lambda: x * y}[mn]() & M32, "n")
            if res is None:
                err("unsupported arithmetic")
            R[ops[0].reg] = res
        elif mn in ("lsl", "lsr", "asr", "ror") and len(ops) == 2 and ops[1].type == ARM_OP_REG and ops[1].shift.type:
            res = op2(ops[1])
            if res is None:
                err("unsupported shift")
            R[ops[0].reg] = res
        elif mn in ("mov", "mvn") and len(ops) == 2 and ops[1].type == ARM_OP_IMM:
            v = ops[1].imm & M32
            R[ops[0].reg] = ("v", v if mn == "mov" else (~v) & M32)
        elif mn in ("mov", "mvn") and len(ops) == 2 and ops[1].type == ARM_OP_REG:
            v = op2(ops[1])
            if mn == "mvn":
                v = ("v", (~v[1]) & M32, "n") if num(v) is not None else None
            R[ops[0].reg] = v
        elif mn == "cmp" and len(ops) == 2:
            a, b = R.get(ops[0].reg), op2(ops[1])
            if num(a) is not None and num(b) is not None:
                st["flags"] = ("const", num(a), num(b))
            elif a and a[0] in SYMBOLIC and num(b) is not None:
                st["flags"] = ("sym", a, num(b))
            else:
                err("unsupported comparison")
        elif mn in ("str", "strd", "strb", "strh"):
            mop = 2 if mn == "strd" else 1
            loc = address(i, mop)
            if not loc:
                err("store through unknown base")
            width = {"strb": 1, "strh": 2}.get(mn, 4)
            for k, o in enumerate(ops[:mop]):
                store(loc[0], loc[1] + 4 * k, width, R.get(o.reg))
        elif mn in ("ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrd"):
            mop = 2 if mn == "ldrd" else 1
            loc = address(i, mop)
            if not loc:
                err("load through unknown base")
            width = {"ldrb": 1, "ldrh": 2, "ldrsb": 1, "ldrsh": 2}.get(mn, 4)
            vals = [load(loc[0], loc[1] + 4 * k, width, mn in ("ldrsb", "ldrsh")) for k in range(mop)]
            for k, o in enumerate(ops[:mop]):
                if o.reg in (ARM_REG_PC, ARM_REG_SP):
                    err("load into pc/sp")
                R[o.reg] = vals[k]
                set_since_call.add(o.reg)
        elif mn in ("stm", "stmib", "stmia", "ldm", "ldmib", "ldmia"):
            base = R.get(ops[0].reg)
            if not base or base[0] not in ("v", "sp") or (len(base) == 3 and base[2] == "f"):
                err("%s with unknown base" % mn)
            first = 4 if mn.endswith("ib") else 0
            space = "g" if base[0] == "v" else "sp"
            regs = [o.reg for o in ops[1:]]
            if i.writeback and ops[0].reg in regs:
                err("%s with the base in the list" % mn)
            if mn.startswith("st"):
                for k, r in enumerate(regs):
                    store(space, (base[1] + first + 4 * k) & (M32 if space == "g" else -1), 4, R.get(r))
            else:
                vals = [load(space, (base[1] + first + 4 * k) & (M32 if space == "g" else -1), 4) for k in range(len(regs))]
                for r, v in zip(regs, vals):
                    if r in (ARM_REG_PC, ARM_REG_SP):
                        err("load into pc/sp")
                    R[r] = v
                    set_since_call.add(r)
            if i.writeback:
                R[ops[0].reg] = offset(base, 4 * len(regs))
        elif vm in ("vldr", "vldmia"):
            if vm == "vldr" and ops[1].mem.base == ARM_REG_PC:
                ea = ((pc + 8) & ~3) + ops[1].mem.disp  # literal pool among the code
                ok = lambda a, w: True
            else:
                base = R.get(ops[1].mem.base if vm == "vldr" else ops[0].reg)
                if not base or base[0] != "v" or len(base) == 3:
                    err("%s from unknown memory" % vm)
                ea = (base[1] + (ops[1].mem.disp if vm == "vldr" else 0)) & M32
                ok = lambda a, w: RO <= a and a + w <= DATA  # read-only data only
            regs = [ops[0].reg] if vm == "vldr" else [o.reg for o in ops[1:]]
            a = ea
            for r in regs:
                dbl = i.reg_name(r).startswith("d")
                if not ok(a, 8 if dbl else 4):
                    err("%s from writable memory" % vm)
                vset(r, ("d", rd(a), rd(a + 4)) if dbl else ("v", rd(a), "f"))
                a += 8 if dbl else 4
            if vm == "vldmia" and i.writeback:
                R[ops[0].reg] = ("v", a)
        elif vm == "vmov" and len(ops) == 2 and ops[1].type == ARM_OP_FP and i.reg_name(ops[0].reg)[0] in "sd":
            if i.reg_name(ops[0].reg)[0] == "s":
                vset(ops[0].reg, ("v", struct.unpack("<I", struct.pack("<f", ops[1].fp))[0], "f"))
            else:
                lo, hi = struct.unpack("<II", struct.pack("<d", ops[1].fp))
                vset(ops[0].reg, ("d", lo, hi))
        elif vm == "vmov" and len(ops) == 2 and ops[1].type == ARM_OP_REG \
                and i.reg_name(ops[0].reg)[0] == i.reg_name(ops[1].reg)[0] and i.reg_name(ops[0].reg)[0] in "sd":
            v = R.get(ops[1].reg)
            if v is None or v[0] == "entry":
                err("vmov of an unknown register")
            vset(ops[0].reg, v)
        elif vm == "vstr":
            loc = address(i, 1)
            v = R.get(ops[0].reg)
            if not loc or v is None or v[0] == "entry":
                err("vstr with unknown base/value")
            if v[0] == "d":
                store(loc[0], loc[1], 4, ("v", v[1]))
                store(loc[0], loc[1] + 4, 4, ("v", v[2]))
            else:
                store(loc[0], loc[1], 4, v)
        elif vm in ("vstmia", "vstm"):
            base = R.get(ops[0].reg)
            if not base or base[0] not in ("v", "sp") or len(base) == 3:
                err("vstm with unknown base")
            space, a = ("g" if base[0] == "v" else "sp"), base[1]
            for o in ops[1:]:
                v = R.get(o.reg)
                if v is None or v[0] == "entry":
                    err("vstm of unknown value")
                if v[0] == "d":
                    store(space, a, 4, ("v", v[1]))
                    store(space, a + 4, 4, ("v", v[2]))
                    a += 8
                else:
                    store(space, a, 4, v)
                    a += 4
            if i.writeback:
                R[ops[0].reg] = (base[0], a)
        elif mn == "nop":
            pass
        else:
            raise ValueError("unsupported instruction at %08x: %s %s" % (pc, mn, i.op_str))
        pc += 4
    raise ValueError("too long")


def tail_args(args):
    """Arguments of the tail call: as many as were set (r0..r3), in order."""
    n = 0
    for k, v in enumerate(args):
        if v is not None:
            n = k + 1
    return args[:n]


def c_str(s):
    """C literal with exactly the original bytes (s holds them as latin-1 characters): anything
    outside printable ASCII (e.g. Shift-JIS) becomes an octal escape, so the literal does not
    depend on the source file's encoding."""
    out = []
    for ch in s:
        o = ord(ch)
        out.append("\\" + ch if ch in '\\"' else ch if 32 <= o < 127 else "\\%03o" % o)
    return '"' + "".join(out) + '"'


def text_string(code, x):
    """C string at code-section address x (strings the compiler placed among the code)."""
    if not (B <= x < RO):
        return None
    end = code.find(b"\0", x - B, x - B + 512)
    raw = code[x - B:end] if end > x - B else b""
    if len(raw) >= 2 and all(32 <= c < 127 or c in (9, 10) for c in raw):
        return raw.decode("latin1")
    return None


_SIG = {}


def signature(name):
    """(param count, returns value) from the fully analysed Ghidra dump, or None.
    The declaration may span several lines (long parameter lists are wrapped)."""
    if name not in _SIG:
        path = next((p for p in (os.path.join(ROOT, "build", d, name + ".c") for d in ("ghidra_analyzed2", "ghidra_analyzed")) if os.path.exists(p)), "")
        sig = None
        if os.path.exists(path):
            import re
            text = open(path, errors="replace").read()
            for m in re.finditer(r"^[ \t]*([\w \t\*]*?)[ \t]*\b%s[ \t]*\(" % name, text, re.M):
                depth, k = 1, m.end()
                while k < len(text) and depth:
                    depth += {"(": 1, ")": -1}.get(text[k], 0)
                    k += 1
                rest = text[k:text.find("\n", k) if "\n" in text[k:] else len(text)]
                if depth or rest.strip():
                    continue  # not a complete declaration line (e.g. a call)
                params = " ".join(text[m.end():k - 1].split())
                d, n = 0, 1
                for ch in params:
                    d += {"(": 1, ")": -1}.get(ch, 0)
                    n += ch == "," and d == 0
                n = 0 if params in ("", "void") else n
                rtype = m.group(1).strip()
                if not rtype:  # return type on the line before ("undefined4 *\nfunc_X(...)")
                    rtype = (text[:m.start()].rstrip("\n").rsplit("\n", 1) or [""])[-1].strip()
                if not rtype or not re.fullmatch(r"[\w \t\*]+", rtype):
                    continue
                sig = (n, rtype != "void")
                break
        _SIG[name] = sig
    return _SIG[name]


def call_name(target, thumb, fn_of):
    """USA function name of a call target (Thumb C-library helpers keep their address)."""
    if target in fn_of:
        return fn_of[target]
    if B <= target < 0x110000:  # Thumb runtime at the start of the code: same address in USA
        return "func_%08X" % (target & ~1)
    raise ValueError("call to unknown function %08x" % target)


def emit(usa, eu, mem, fn_of, tail=None, code=None):
    def fix_strings(d):
        # code pointers that are not functions but strings among the code -> string values
        for a, v in list(d.items()):
            if v and v[0] == "v" and v[1] not in fn_of:
                st = text_string(code, v[1])
                if st is not None:
                    d[a] = ("s", st)

    # stack frame: every stack slot written or whose address is taken
    segments = getattr(mem, "segments", [[dict(mem), None]])
    defs = getattr(mem, "defs", [])
    offs = [k[1] for seg, _ in segments for k in seg if isinstance(k, tuple)]
    for seg, term in segments:
        for v in list(seg.values()) + (list(term[3]) + [x for x in term[4] if x] if term and term[0] == "call" else []):
            if v and v[0] == "sp":
                offs.append(v[1])
    lo = min(offs) if offs else 0
    frame = (max(offs) - lo + 8) if offs else 0

    def stack_ref(off):
        return "((char *)stk + %d)" % (off - lo)

    uses = set()  # ("ret", k) / ("loc", n) referenced by the line being generated

    def plus(off):
        return (" + %d" % off) if off > 0 else (" - %d" % -off) if off < 0 else ""

    def value(v):
        if v is None or v[0] in ("entry", "d"):
            raise ValueError("value not expressible in C")
        kind, x = v[0], v[1]
        if kind == "sp":
            return "(uintptr_t)" + stack_ref(x), None
        if kind == "ret":
            uses.add(("ret", x))
            return ("ret%d" % x) + plus(v[2]), None
        if kind == "loc":
            uses.add(("loc", x))
            return ("v%d" % x) + plus(v[2]), None
        if len(v) == 3 and v[2] in ("w1", "w2", "n"):
            return "0x%Xu" % x, None
        if len(v) == 3 and v[2] == "f":
            return "0x%08Xu /* %r f */" % (x, struct.unpack("<f", struct.pack("<I", x))[0]), None
        if kind == "s":
            return "(uintptr_t)" + c_str(x), None
        if x in fn_of:
            return "(uintptr_t)&%s" % fn_of[x], fn_of[x]
        if RO <= x < END:
            return "(uintptr_t)&data_%08X" % x, "data_%08X" % x
        return "0x%08Xu" % x, None

    def fixed_value(v):
        fix = {0: v}
        fix_strings(fix)
        return value(fix[0])

    externs, body, tables, protos = set(), [], [], {}
    externs.add("extern uint32_t data_%08X;  /* sead::SafeString vtable */" % SAFESTRING_VTBL)
    nruns = nnames = nstores = ncalls = nreads = 0

    def declare(sym):
        if sym and sym.startswith("func_"):
            protos.setdefault(sym, "void %s(void);" % sym)
        elif sym:
            externs.add("extern uint32_t %s;" % sym)

    def line(text, define=None):
        """A body line with the run-time values it uses; define = what it defines."""
        body.append((text, define, frozenset(uses)))
        uses.clear()

    def call_line(name, args, stack=None):
        sig = signature(name)
        if sig:  # argument count from the analysed signature
            n = sig[0]
            regs = list(args[:4]) + [("v", 0)] * max(0, min(n, 4) - len(args))  # unset regs: unused
            extra = []
            for j in range(max(0, n - 4)):  # arguments 5.. are passed on the stack
                v = stack[j] if stack is not None and j < len(stack) else None
                if v is None:
                    raise ValueError("stack argument %d of %s not known" % (j + 5, name))
                extra.append(v)
            args = regs[:n] + extra
        elif stack is not None and any(stack[:4]):
            # no signature, and the outgoing stack area holds values: arguments 5.. cannot be told
            # apart from the caller's own temporaries
            raise ValueError("call to %s with possible stack arguments and no signature" % name)
        exprs = []
        for v in args:
            if v is None:
                raise ValueError("call with an unknown argument")
            e, sym = fixed_value(v)
            declare(sym)
            exprs.append(e)
        protos[name] = "void %s(%s);" % (name, ", ".join(["uintptr_t"] * len(exprs)) or "void")
        return "    %s(%s);" % (name, ", ".join(exprs))

    for seg, term in segments:
        fix_strings(seg)
        addrs = sorted(k for k in seg if not isinstance(k, tuple))
        for k in sorted((k for k in seg if isinstance(k, tuple)), key=lambda k: k[1]):
            v = seg[k]
            expr, sym = value(v)
            declare(sym)
            w = v[2] if v[0] == "v" and len(v) == 3 and v[2] in ("w1", "w2") else "w4"
            ctype = {"w1": "uint8_t", "w2": "uint16_t", "w4": "uintptr_t"}[w]
            line("    *(%s *)%s = %s;" % (ctype, stack_ref(k[1]), expr))
        pairs = [x for x in addrs if seg[x] == ("v", SAFESTRING_VTBL) and seg.get(x + 4, ("",))[0] == "s"]
        used, runs = set(), []
        for x in pairs:
            if runs and x == runs[-1][0] + 8 * len(runs[-1][1]):
                runs[-1][1].append(seg[x + 4][1])
            else:
                runs.append((x, [seg[x + 4][1]]))
            used.update((x, x + 4))
        for base, names in runs:
            externs.add("extern uint32_t data_%08X;" % base)
            tables.append("static const char *const names_%08X[%d] = {\n%s\n};" % (
                base, len(names), "\n".join("    %s," % c_str(t) for t in names)))
            line("    fill_names((sead_SafeString *)&data_%08X, names_%08X, %d);" % (base, base, len(names)))
            nruns += 1
            nnames += len(names)
        for x in addrs:
            if x in used:
                continue
            v = seg[x]
            expr, sym = value(v)
            declare(sym)
            externs.add("extern uint32_t data_%08X;" % x)
            if len(v) == 3 and v[2] in ("w1", "w2"):
                line("    *(%s *)&data_%08X = %s;" % ("uint8_t" if v[2] == "w1" else "uint16_t", x, expr))
            else:
                line("    data_%08X = %s;" % (x, expr))
            nstores += 1
        if term and term[0] == "call":
            _, target, thumb, args, stack = term
            name = call_name(target, thumb, fn_of)
            line(call_line(name, args, stack), ("ret", ncalls, name))
            ncalls += 1
        elif term and term[0] == "def":
            n = term[1]
            d = defs[n]
            if d[0] == "load":  # read of writable data at this point of the program
                _, a, width, signed = d
                externs.add("extern uint32_t data_%08X;" % a)
                if width == 4:
                    src = "data_%08X" % a
                else:
                    ctype = ("int%d_t" if signed else "uint%d_t") % (8 * width)
                    src = "*(%s *)&data_%08X" % (ctype, a)
                    if signed:
                        src = "(uint32_t)(int32_t)" + src
                line("    uintptr_t v%d = %s;" % (n, src), ("loc", n))
                nreads += 1
            else:  # ("sel", x, imm, if_equal, otherwise): a conditional move after "cmp x, #imm"
                _, x, imm, t, f = d
                ex, _s = value(x)
                et, st = fixed_value(t)
                ef, sf = fixed_value(f)
                declare(st)
                declare(sf)
                line("    uintptr_t v%d = %s == 0x%Xu ? %s : %s;" % (n, ex, imm, et, ef), ("loc", n))
    if tail:
        target, args = tail
        line(call_line(call_name(target, False, fn_of), tail_args(args)))
        ncalls += 1
    # keep only the local definitions something uses (reads of plain data have no side effects)
    live = set()
    for text, define, u in body:
        if not define or define[0] == "ret":
            live |= u
    changed = True
    while changed:
        changed = False
        for text, define, u in body:
            if define and define[0] == "loc" and ("loc", define[1]) in live and not u <= live:
                live |= u
                changed = True
    final = []
    for text, define, u in body:
        if define and define[0] == "loc":
            if ("loc", define[1]) in live:
                final.append(text)
            continue
        if define and define[0] == "ret" and ("ret", define[1]) in live:
            # calls whose result is used: "uintptr_t retN = f(...)" with a pointer-sized return type
            name = define[2]
            protos[name] = protos[name].replace("void " + name, "uintptr_t " + name, 1)
            text = text.replace("    " + name, "    uintptr_t ret%d = %s" % (define[1], name), 1)
        final.append(text)
    body = final
    nreads = sum(1 for k in live if k[0] == "loc" and defs[k[1]][0] == "load")
    out = ["/* USA %s (EU %08X): static initialiser, decompiled by tools/decomp_initializer.py." % (usa, eu),
           " * %d sead::SafeString name tables (%d names), %d other stores, %d calls%s. */" % (
               nruns, nnames, nstores, ncalls, (", %d reads of writable data" % nreads) if nreads else ""),
           "#include <stdint.h>", '#include "sead.h"', ""]
    helper = ["static void fill_names(sead_SafeString *t, const char *const *names, int n) {",
              "    for (int i = 0; i < n; i++) {",
              "        t[i].vtbl = &data_%08X;" % SAFESTRING_VTBL,
              "        t[i].mStringTop = names[i];", "    }", "}", ""] if nruns else []
    out += sorted(externs) + sorted(protos.values()) + [""] + tables + [""] + helper
    local = ["    uintptr_t stk[%d];  /* stack temporaries (objects passed by address) */" % ((frame + 7) // 8 * 2)] if frame else []
    out += ["void func_%s(void) {" % usa] + local + body + ["}", ""]
    return "\n".join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addr")
    ap.add_argument("--check", action="store_true")
    a = ap.parse_args()
    usa = a.addr.upper().replace("0X", "").zfill(8)
    code, m = load()
    eu = int(m[usa]["eu"], 16)
    fn_of = {int(v["eu"], 16): "func_" + k for k, v in m.items()}
    try:
        mem, tail = trace(code, eu)
        text = emit(usa, eu, mem, fn_of, tail, code)
    except ValueError as e:
        print("func_%s: not a straight-line initialiser (%s)" % (usa, e))
        sys.exit(1)
    print("func_%s: %d stores" % (usa, len(mem)))
    if a.check:
        return
    os.makedirs(os.path.join(ROOT, "native", "game"), exist_ok=True)
    path = os.path.join(ROOT, "native", "game", "func_%s.c" % usa)
    open(path, "w").write(text)
    print("wrote", os.path.relpath(path, ROOT))


if __name__ == "__main__":
    main()
