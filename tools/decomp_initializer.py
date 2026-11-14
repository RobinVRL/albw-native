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


def trace(code, eu):
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
    from capstone.arm import ARM_REG_PC, ARM_OP_IMM, ARM_OP_REG
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    md.detail = True
    rd = lambda a: struct.unpack_from("<I", code, a - B)[0]
    cstr = lambda a: code[a - B:code.index(b"\0", a - B)].decode("latin1")
    ror = lambda v, n: ((v >> n) | (v << (32 - n))) & 0xFFFFFFFF if n else v
    R, mem, pc, n = {}, {}, eu, 0
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
        if mn == "b":  # tail call: the last thing the initialiser does
            from capstone.arm import ARM_REG_R0
            args = [R.get(ARM_REG_R0 + k) for k in range(4)]
            return mem, (ops[0].imm, args)
        if mn == "pop":  # restores callee-saved registers before a tail call
            pc += 4
            continue
        imm = None
        if len(ops) >= 3 and ops[2].type == ARM_OP_IMM:
            imm = ror(ops[2].imm, ops[3].imm) if len(ops) == 4 and ops[3].type == ARM_OP_IMM else ops[2].imm
        if mn == "ldr" and ops[1].mem.base == ARM_REG_PC and not ops[1].mem.index:
            R[ops[0].reg] = ("v", rd(pc + 8 + ops[1].mem.disp))
        elif mn in ("add", "sub") and imm is not None and ops[1].reg == ARM_REG_PC:
            R[ops[0].reg] = ("s", cstr(pc + 8 + (imm if mn == "add" else -imm)))
        elif mn in ("add", "sub") and imm is not None and R.get(ops[1].reg, ("",))[0] == "v":
            R[ops[0].reg] = ("v", (R[ops[1].reg][1] + (imm if mn == "add" else -imm)) & 0xFFFFFFFF)
        elif mn in ("mov", "mvn") and len(ops) == 2 and ops[1].type == ARM_OP_IMM:
            v = ops[1].imm & 0xFFFFFFFF
            R[ops[0].reg] = ("v", v if mn == "mov" else (~v) & 0xFFFFFFFF)
        elif mn == "mov" and len(ops) == 2 and ops[1].type == ARM_OP_REG:
            R[ops[0].reg] = R.get(ops[1].reg)
        elif mn in ("str", "strd"):
            base = R.get(ops[-1].mem.base)
            if not base or base[0] != "v":
                raise ValueError("store through unknown base at %08x" % pc)
            a = (base[1] + ops[-1].mem.disp) & 0xFFFFFFFF
            regs = [ops[0].reg] + ([ops[1].reg] if mn == "strd" else [])
            for k, r in enumerate(regs):
                if R.get(r) is None:
                    raise ValueError("store of unknown value at %08x" % pc)
                mem[a + 4 * k] = R[r]
            if i.writeback:
                R[ops[-1].mem.base] = ("v", a)
        elif mn == "stm":
            base = R.get(ops[0].reg)
            for k, o in enumerate(ops[1:]):
                if R.get(o.reg) is None:
                    raise ValueError("stm of unknown value at %08x" % pc)
                mem[base[1] + 4 * k] = R[o.reg]
            if i.writeback:
                R[ops[0].reg] = ("v", base[1] + 4 * (len(ops) - 1))
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


def emit(usa, eu, mem, fn_of, tail=None, code=None):
    # code pointers that are not functions but strings among the code -> string values
    for a, v in list(mem.items()):
        if v and v[0] == "v" and v[1] not in fn_of:
            st = text_string(code, v[1])
            if st is not None:
                mem[a] = ("s", st)

    def value(v):
        kind, x = v
        if kind == "s":
            return "(uint32_t)(uintptr_t)" + c_str(x), None
        if x in fn_of:
            return "(uint32_t)(uintptr_t)&%s" % fn_of[x], fn_of[x]
        if RO <= x < END:
            return "(uint32_t)(uintptr_t)&data_%08X" % x, "data_%08X" % x
        return "0x%08Xu" % x, None

    addrs = sorted(mem)
    # SafeString runs: {vtable, name} pairs at consecutive 8-byte slots
    pairs = [a for a in addrs if mem[a] == ("v", SAFESTRING_VTBL) and mem.get(a + 4, ("",))[0] == "s"]
    used = set()
    runs = []
    for a in pairs:
        if runs and a == runs[-1][0] + 8 * len(runs[-1][1]):
            runs[-1][1].append(mem[a + 4][1])
        else:
            runs.append((a, [mem[a + 4][1]]))
        used.update((a, a + 4))
    externs, body, tables = set(), [], []
    externs.add("extern uint32_t data_%08X;  /* sead::SafeString vtable */" % SAFESTRING_VTBL)
    for base, names in runs:
        externs.add("extern uint32_t data_%08X;" % base)
        tables.append("static const char *const names_%08X[%d] = {\n%s\n};" % (
            base, len(names), "\n".join("    %s," % c_str(s) for s in names)))
        body.append("    fill_names((sead_SafeString *)&data_%08X, names_%08X, %d);" % (base, base, len(names)))
    for a in addrs:
        if a in used:
            continue
        expr, sym = value(mem[a])
        if sym and sym.startswith("func_"):
            externs.add("void %s(void);" % sym)
        elif sym:
            externs.add("extern uint32_t %s;" % sym)
        externs.add("extern uint32_t data_%08X;" % a)
        body.append("    data_%08X = %s;" % (a, expr))
    if tail:
        target, args = tail
        if target not in fn_of:
            raise ValueError("tail call to unknown function %08x" % target)
        exprs = []
        for v in tail_args(args):
            if v is None:
                raise ValueError("tail call with an unknown argument")
            e, sym = value(v)
            if sym and sym.startswith("func_"):
                externs.add("void %s(void);" % sym)
            elif sym:
                externs.add("extern uint32_t %s;" % sym)
            exprs.append(e)
        externs.add("void %s(%s);  /* tail call */" % (fn_of[target], ", ".join(["uint32_t"] * len(exprs)) or "void"))
        body.append("    %s(%s);" % (fn_of[target], ", ".join(exprs)))
    out = ["/* USA %s (EU %08X): static initialiser, decompiled by tools/decomp_initializer.py." % (usa, eu),
           " * Fills %d sead::SafeString name tables (%d names) and %d other globals. */" % (
               len(runs), sum(len(n) for _, n in runs), len(body) - len(runs)),
           "#include <stdint.h>", '#include "sead.h"', ""]
    out += sorted(externs) + [""] + tables + ["",
            "static void fill_names(sead_SafeString *t, const char *const *names, int n) {",
            "    for (int i = 0; i < n; i++) {",
            "        t[i].vtbl = &data_%08X;" % SAFESTRING_VTBL,
            "        t[i].mStringTop = names[i];", "    }", "}", "",
            "void func_%s(void) {" % usa] + body + ["}", ""]
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
