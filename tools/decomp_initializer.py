#!/usr/bin/env python3
"""Decompile a straight-line static initialiser into readable C (native/game/func_<ADDR>.c).

  python3 tools/decomp_initializer.py <USA ADDR> [--check]

Many of the game's 1,230 static constructors only store constants, string literals and
pointers into globals (often long unrolled runs of sead::SafeString {vtable, name} pairs).
This follows the function's instructions symbolically (literal pool, pc-relative strings,
immediates incl. rotated ones, mov/mvn/add, str/strd/stm with writeback, forward branches)
and writes the equivalent C:
  - runs of SafeString pairs -> a const name array + a fill loop over the destination array;
  - other stores -> typed assignments with real symbols (func_<USA ADDR> for code pointers,
    data_<ADDR> for data, string literals), never raw 3DS addresses.
Refuses (exit 1) if the function does anything else (calls, loads from memory, conditions),
so only functions it fully understands are emitted. --check only reports.
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
    """Stores (address -> value, per segment) and calls, in program order."""

    def __init__(self):
        super().__init__()
        self.segments = [[{}, None]]  # [stores, call-after-them]

    def __setitem__(self, a, v):
        super().__setitem__(a, v)
        self.segments[-1][0][a] = v

    def call(self, target, thumb, args):
        self.segments[-1][1] = (target, thumb, args)
        self.segments.append([{}, None])
        return len(self.segments) - 2  # call index


def trace(code, eu):
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
    from capstone.arm import ARM_REG_PC, ARM_OP_IMM, ARM_OP_REG
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    md.detail = True
    rd = lambda a: struct.unpack_from("<I", code, a - B)[0]
    cstr = lambda a: code[a - B:code.index(b"\0", a - B)].decode("latin1")
    ror = lambda v, n: ((v >> n) | (v << (32 - n))) & 0xFFFFFFFF if n else v
    from capstone.arm import ARM_REG_R0, ARM_REG_R3, ARM_REG_R12, ARM_REG_LR
    R, mem, pc, n = {}, Events(), eu, 0
    set_since_call = set()
    from capstone.arm import ARM_REG_SP
    R[ARM_REG_SP] = ("sp", 0)
    while n < 100000:
        n += 1
        i = next(md.disasm(code[pc - B:pc - B + 4], pc))
        ops, mn = i.operands, i.mnemonic
        if i.cc not in (0, 15):  # conditional execution: not a straight-line initialiser
            raise ValueError("conditional instruction at %08x: %s %s" % (pc, mn, i.op_str))
        if mn == "b" and ops[0].imm > pc and ops[0].imm - pc < 0x10000:
            pc = ops[0].imm
            continue
        if mn == "bx" or (mn == "pop" and any(o.reg == ARM_REG_PC for o in ops)):
            return mem, None
        if mn in ("bl", "blx") and ops[0].type == ARM_OP_IMM:
            args = [R.get(ARM_REG_R0 + k) for k in range(4)]
            nargs = max([k + 1 for k in range(4) if ARM_REG_R0 + k in set_since_call] or [0])
            if any(v is None for v in args[:nargs]):
                raise ValueError("call with an unknown argument at %08x" % pc)
            k = mem.call(ops[0].imm, mn == "blx", args[:nargs])
            for r in list(range(ARM_REG_R0, ARM_REG_R3 + 1)) + [ARM_REG_R12, ARM_REG_LR]:
                R.pop(r, None)
            R[ARM_REG_R0] = ("ret", k, 0)  # the call's result, if the code uses it
            set_since_call.clear()
            pc += 4
            continue
        if mn == "b":  # tail call: the last thing the initialiser does
            from capstone.arm import ARM_REG_R0
            args = [R.get(ARM_REG_R0 + k) for k in range(4)]
            return mem, (ops[0].imm, args)
        if mn == "pop":  # restores callee-saved registers before a tail call
            pc += 4
            continue
        if ops and ops[0].type == ARM_OP_REG and mn not in ("str", "strd", "stm", "push"):
            set_since_call.add(ops[0].reg)  # destination register written: a possible call argument
        imm = None
        if len(ops) >= 3 and ops[2].type == ARM_OP_IMM:
            imm = ror(ops[2].imm, ops[3].imm) if len(ops) == 4 and ops[3].type == ARM_OP_IMM else ops[2].imm
        if mn == "ldr" and ops[1].mem.base == ARM_REG_PC and not ops[1].mem.index:
            R[ops[0].reg] = ("v", rd(pc + 8 + ops[1].mem.disp))
        elif mn in ("add", "sub") and imm is not None and ops[1].reg == ARM_REG_PC:
            R[ops[0].reg] = ("s", cstr(pc + 8 + (imm if mn == "add" else -imm)))
        elif mn in ("add", "sub") and imm is not None and R.get(ops[1].reg, ("",))[0] == "ret":
            k, off = R[ops[1].reg][1], R[ops[1].reg][2]
            R[ops[0].reg] = ("ret", k, off + (imm if mn == "add" else -imm))
        elif mn in ("add", "sub") and imm is not None and R.get(ops[1].reg, ("",))[0] in ("v", "sp"):
            kind, x = R[ops[1].reg][0], R[ops[1].reg][1]
            y = x + (imm if mn == "add" else -imm)
            R[ops[0].reg] = (kind, y & 0xFFFFFFFF if kind == "v" else y)
        elif mn in ("mov", "mvn") and len(ops) == 2 and ops[1].type == ARM_OP_IMM:
            v = ops[1].imm & 0xFFFFFFFF
            R[ops[0].reg] = ("v", v if mn == "mov" else (~v) & 0xFFFFFFFF)
        elif mn == "mov" and len(ops) == 2 and ops[1].type == ARM_OP_REG:
            R[ops[0].reg] = R.get(ops[1].reg)
        elif mn in ("str", "strd", "strb", "strh"):
            base = R.get(ops[-1].mem.base)
            if not base or base[0] not in ("v", "sp") or ops[-1].mem.index:
                raise ValueError("store through unknown base at %08x" % pc)
            a = base[1] + ops[-1].mem.disp
            a = a & 0xFFFFFFFF if base[0] == "v" else a
            regs = [ops[0].reg] + ([ops[1].reg] if mn == "strd" else [])
            width = {"strb": 1, "strh": 2}.get(mn, 4)
            for k, r in enumerate(regs):
                v = R.get(r)
                if v is None:
                    raise ValueError("store of unknown value at %08x" % pc)
                if width != 4:
                    if v[0] != "v":
                        raise ValueError("narrow store of a pointer at %08x" % pc)
                    v = ("v", v[1] & ((1 << (8 * width)) - 1), "w%d" % width)
                key = a + 4 * k if base[0] == "v" else ("sp", a + 4 * k)
                mem[key] = v
            if i.writeback:
                R[ops[-1].mem.base] = (base[0], a)
        elif mn in ("vpush", "vpop"):
            pass
        elif mn == "ldr" and ops[1].type != ARM_OP_IMM and not ops[1].mem.index and R.get(ops[1].mem.base, ("",))[0] in ("v", "sp"):
            base = R[ops[1].mem.base]
            a = base[1] + ops[1].mem.disp
            if base[0] == "sp" and ("sp", a) in mem:
                R[ops[0].reg] = mem[("sp", a)]          # reload of a stack temporary written above
            elif base[0] == "v" and RO <= a < DATA:
                R[ops[0].reg] = ("v", rd(a))            # read-only data: a constant
            else:
                raise ValueError("load from writable memory at %08x" % pc)
            if i.writeback:
                raise ValueError("ldr writeback at %08x" % pc)
        elif mn in ("stm", "stmib"):
            base = R.get(ops[0].reg)
            if not base or base[0] not in ("v", "sp"):
                raise ValueError("stm with unknown base at %08x" % pc)
            first = 4 if mn == "stmib" else 0
            for k, o in enumerate(ops[1:]):
                if R.get(o.reg) is None:
                    raise ValueError("stm of unknown value at %08x" % pc)
                a = base[1] + first + 4 * k
                mem[a if base[0] == "v" else ("sp", a)] = R[o.reg]
            if i.writeback:
                R[ops[0].reg] = (base[0], base[1] + 4 * (len(ops) - 1))
            if mn == "stmib" and i.writeback:
                R[ops[0].reg] = (base[0], base[1] + 4 * (len(ops) - 1))
        elif mn == "vldr" and ops[1].mem.base == ARM_REG_PC:
            ea = ((pc + 8) & ~3) + ops[1].mem.disp
            if i.reg_name(ops[0].reg).startswith("d"):
                R[ops[0].reg] = ("d", rd(ea), rd(ea + 4))
            else:
                R[ops[0].reg] = ("v", rd(ea), "f")
        elif mn == "vmov" and len(ops) == 2 and ops[1].type == ARM_OP_IMM and i.reg_name(ops[0].reg).startswith("s"):
            R[ops[0].reg] = ("v", struct.unpack("<I", struct.pack("<f", ops[1].fp if hasattr(ops[1], "fp") else ops[1].imm))[0], "f")
        elif mn == "vstr":
            base = R.get(ops[1].mem.base)
            v = R.get(ops[0].reg)
            if not base or base[0] != "v" or v is None:
                raise ValueError("vstr with unknown base/value at %08x" % pc)
            a = (base[1] + ops[1].mem.disp) & 0xFFFFFFFF
            if v[0] == "d":
                mem[a], mem[a + 4] = ("v", v[1]), ("v", v[2])
            else:
                mem[a] = v
        elif mn in ("vstmia", "vstm"):
            base = R.get(ops[0].reg)
            if not base or base[0] != "v":
                raise ValueError("vstm with unknown base at %08x" % pc)
            a = base[1]
            for o in ops[1:]:
                v = R.get(o.reg)
                if v is None:
                    raise ValueError("vstm of unknown value at %08x" % pc)
                if v[0] == "d":
                    mem[a], mem[a + 4] = ("v", v[1]), ("v", v[2])
                    a += 8
                else:
                    mem[a] = v
                    a += 4
            if i.writeback:
                R[ops[0].reg] = ("v", a)
        elif mn == "push":
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
    return '"' + s.replace("\\", "\\\\").replace('"', '\\"') + '"'


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
    """(param count, returns value) from the fully analysed Ghidra dump, or None."""
    if name not in _SIG:
        path = os.path.join(ROOT, "build", "ghidra_analyzed", name + ".c")
        sig = None
        if os.path.exists(path):
            import re
            for line in open(path, errors="replace"):
                m = re.match(r"^\s*([\w\s\*]+?)\s*\b%s\s*\((.*)\)\s*$" % name, line)
                if m:
                    params = m.group(2).strip()
                    n = 0 if params in ("", "void") else params.count(",") + 1
                    sig = (n, m.group(1).strip() != "void")
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
    offs = [k[1] for seg, _ in segments for k in seg if isinstance(k, tuple)]
    for seg, call in segments:
        for v in list(seg.values()) + (list(call[2]) if call else []):
            if v and v[0] == "sp":
                offs.append(v[1])
    lo = min(offs) if offs else 0
    frame = (max(offs) - lo + 8) if offs else 0

    def stack_ref(off):
        return "((char *)stk + %d)" % (off - lo)

    def value(v):
        kind, x = v[0], v[1]
        if kind == "sp":
            return "(uintptr_t)" + stack_ref(x), None
        if kind == "ret":
            used_rets.add(x)
            return ("ret%d" % x) + (" + %d" % v[2] if v[2] else ""), None
        if len(v) == 3 and v[2] in ("w1", "w2"):
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

    externs, body, tables, protos = set(), [], [], {}
    used_rets = set()
    externs.add("extern uint32_t data_%08X;  /* sead::SafeString vtable */" % SAFESTRING_VTBL)
    nruns = nnames = nstores = ncalls = 0

    def declare(sym):
        if sym and sym.startswith("func_"):
            protos.setdefault(sym, "void %s(void);" % sym)
        elif sym:
            externs.add("extern uint32_t %s;" % sym)

    def call_line(name, args):
        sig = signature(name)
        if sig:  # argument count from the analysed signature: drop extras, pad with 0 (unused)
            n = sig[0]
            args = list(args[:n]) + [("v", 0)] * max(0, n - len(args))
        exprs = []
        for v in args:
            if v is None:
                raise ValueError("call with an unknown argument")
            fix = {0: v}
            fix_strings(fix)
            e, sym = value(fix[0])
            declare(sym)
            exprs.append(e)
        protos[name] = "void %s(%s);" % (name, ", ".join(["uintptr_t"] * len(exprs)) or "void")
        return "    %s(%s);" % (name, ", ".join(exprs))

    for seg, call in segments:
        fix_strings(seg)
        addrs = sorted(k for k in seg if not isinstance(k, tuple))
        for k in sorted((k for k in seg if isinstance(k, tuple)), key=lambda k: k[1]):
            v = seg[k]
            expr, sym = value(v)
            declare(sym)
            w = v[2] if len(v) == 3 and v[2].startswith("w") else "w4"
            ctype = {"w1": "uint8_t", "w2": "uint16_t", "w4": "uintptr_t"}[w]
            body.append("    *(%s *)%s = %s;" % (ctype, stack_ref(k[1]), expr))
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
            body.append("    fill_names((sead_SafeString *)&data_%08X, names_%08X, %d);" % (base, base, len(names)))
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
                body.append("    *(%s *)&data_%08X = %s;" % ("uint8_t" if v[2] == "w1" else "uint16_t", x, expr))
            else:
                body.append("    data_%08X = %s;" % (x, expr))
            nstores += 1
        if call:
            target, thumb, args = call
            body.append(("CALL", ncalls, call_name(target, thumb, fn_of), call_line(call_name(target, thumb, fn_of), args)))
            ncalls += 1
    if tail:
        target, args = tail
        body.append(call_line(call_name(target, False, fn_of), tail_args(args)))
        ncalls += 1
    # calls whose result is used: "uintptr_t retN = f(...)" with a pointer-sized return type
    final = []
    for line in body:
        if isinstance(line, tuple):
            _, k, name, text = line
            if k in used_rets:
                protos[name] = protos[name].replace("void " + name, "uintptr_t " + name, 1)
                text = text.replace("    " + name, "    uintptr_t ret%d = %s" % (k, name), 1)
            final.append(text)
        else:
            final.append(line)
    body = final
    # a function both called and used as a value keeps its call prototype
    out = ["/* USA %s (EU %08X): static initialiser, decompiled by tools/decomp_initializer.py." % (usa, eu),
           " * %d sead::SafeString name tables (%d names), %d other stores, %d calls. */" % (
               nruns, nnames, nstores, ncalls),
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
