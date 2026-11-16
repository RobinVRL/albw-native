#!/usr/bin/env python3
"""Disassembler for PICA200 shader binaries (DVLB / SHBIN), for checking the hand-written GLSL of
native/render/h3d.c against the game's real programs. Reference only: nothing is translated.

  python3 tools/pica_disasm.py <file.dvlb> [program index]

Get the DefaultShader binaries with: ALBW_DUMP_DVLB=<dir> build/assets/asset_test64
Instruction format per 3dbrew "Shader Instruction Set"; DVLB layout per 3dbrew "SHBIN".
Output: one line per word, `addr: OP dst, src...` with swizzles / masks from the operand
descriptor table, uniform symbols from the DVLE (first program, they are shared), the DVLE's
constant table, and the main/end range and output map of each program.
"""
import struct
import sys

OPS = {0x00: "add", 0x01: "dp3", 0x02: "dp4", 0x03: "dph", 0x04: "dst", 0x05: "ex2", 0x06: "lg2",
       0x07: "litp", 0x08: "mul", 0x09: "sge", 0x0A: "slt", 0x0B: "flr", 0x0C: "max", 0x0D: "min",
       0x0E: "rcp", 0x0F: "rsq", 0x12: "mova", 0x13: "mov", 0x18: "dphi", 0x19: "dsti", 0x1A: "sgei",
       0x1B: "slti", 0x20: "break", 0x21: "nop", 0x22: "end", 0x23: "breakc", 0x24: "call",
       0x25: "callc", 0x26: "callu", 0x27: "ifu", 0x28: "ifc", 0x29: "loop", 0x2A: "emit",
       0x2B: "setemit", 0x2C: "jmpc", 0x2D: "jmpu"}
UNARY = {"ex2", "lg2", "litp", "flr", "rcp", "rsq", "mova", "mov"}
INVERTED = {"dphi", "dsti", "sgei", "slti"}
CMPOPS = ["eq", "ne", "lt", "le", "gt", "ge", "?6", "?7"]
CONDOPS = ["or", "and", "x", "y"]
OUTNAMES = {0: "position", 1: "normquat", 2: "color", 3: "texcoord0", 4: "texcoord0w", 5: "texcoord1",
            6: "texcoord2", 8: "view"}
IDX = ["", "[a0.x]", "[a0.y]", "[aL]"]


def u32(b, o):
    return struct.unpack_from("<I", b, o)[0]


def u16(b, o):
    return struct.unpack_from("<H", b, o)[0]


def f24(v):
    """float24 (1.7.16) -> float"""
    v &= 0xFFFFFF
    if v & 0x7FFFFF == 0:
        return 0.0
    s = (v >> 23) & 1
    e = (v >> 16) & 0x7F
    m = v & 0xFFFF
    f = (1 + m / 65536.0) * 2.0 ** (e - 63)
    return -f if s else f


def swz(bits):
    return "".join("xyzw"[(bits >> (6 - 2 * i)) & 3] for i in range(4))


def mask(bits):
    return "".join(c for i, c in enumerate("xyzw") if bits >> (3 - i) & 1)


class Prog:
    def __init__(self, b):
        assert b[:4] == b"DVLB"
        n = u32(b, 4)
        self.dvle = [u32(b, 8 + 4 * i) for i in range(n)]
        p = 8 + 4 * n
        assert b[p:p + 4] == b"DVLP"
        co, cn = u32(b, p + 8), u32(b, p + 0xC)
        oo, on = u32(b, p + 0x10), u32(b, p + 0x14)
        self.code = [u32(b, p + co + 4 * i) for i in range(cn)]
        self.desc = [u32(b, p + oo + 8 * i) for i in range(on)]
        self.b = b
        self.names = {}
        if self.dvle:
            self.read_dvle(0, names_only=True)

    def read_dvle(self, k, names_only=False):
        b, e = self.b, self.dvle[k]
        main, end = u32(b, e + 8), u32(b, e + 0xC)
        cto, ctn = u32(b, e + 0x18), u32(b, e + 0x1C)
        oo, on = u32(b, e + 0x28), u32(b, e + 0x2C)
        uo, un = u32(b, e + 0x30), u32(b, e + 0x34)
        so = u32(b, e + 0x38)
        for i in range(un):
            q = e + uo + 8 * i
            sym = u32(b, q)
            first, last = u16(b, q + 4), u16(b, q + 6)
            s = b[e + so + sym:].split(b"\0", 1)[0].decode("latin1")
            for r in range(first, last + 1):
                self.names[r] = s + ("" if first == last else "+%d" % (r - first))
        if names_only:
            return
        consts = []
        for i in range(ctn):
            q = e + cto + 20 * i
            t, reg = b[q], b[q + 2]
            if t == 0:
                consts.append("b%d = %d" % (reg, b[q + 4]))
            elif t == 1:
                consts.append("i%d = (%d, %d, %d, %d)" % ((reg,) + tuple(b[q + 4:q + 8])))
            else:
                vals = [f24(u32(b, q + 4 + 4 * j)) for j in range(4)]
                consts.append("c%d = (%s)" % (reg, ", ".join("%g" % v for v in vals)))
        outs = []
        for i in range(on):
            q = e + oo + 8 * i
            t, reg, m = u16(b, q), u16(b, q + 2), u16(b, q + 4)
            outs.append("o%d.%s=%s" % (reg, mask(((m & 1) << 3) | ((m & 2) << 1) | ((m & 4) >> 1) | ((m & 8) >> 3)),
                                       OUTNAMES.get(t, "?%d" % t)))
        return main, end, consts, outs

    def src(self, r, idx=0, wide=True):
        if r < 0x10:
            s = "v%d" % r
        elif r < 0x20:
            s = "r%d" % (r - 0x10)
        else:
            c = r - 0x20
            s = "c%d" % c
            if r in self.names or (c + 0x10) in self.names:
                s += "(%s)" % self.names.get(c + 0x10, "")
            if idx:
                s += IDX[idx]
        return s

    def dst(self, r):
        return "o%d" % r if r < 0x10 else "r%d" % (r - 0x10)

    def operand(self, r, d, which, idx=0):
        neg = (d >> (4 + 9 * which)) & 1
        sw = swz((d >> (5 + 9 * which)) & 0xFF)
        s = self.src(r, idx)
        return ("-" if neg else "") + s + ("" if sw == "xyzw" else "." + sw)

    def dis(self, a):
        w = self.code[a]
        op = w >> 26
        if op >= 0x30:  # mad / madi
            d = self.desc[w & 0x1F]
            dst = self.dst((w >> 24) & 0x1F)
            idx = (w >> 22) & 3
            s1 = (w >> 17) & 0x1F
            if op >= 0x38:
                s2, s3 = (w >> 10) & 0x7F, (w >> 5) & 0x1F
                return "mad %s.%s, %s, %s, %s" % (dst, mask(d & 0xF), self.operand(s1, d, 0),
                                                    self.operand(s2, d, 1, idx), self.operand(s3, d, 2))
            s2, s3 = (w >> 12) & 0x1F, (w >> 5) & 0x7F
            return "madi %s.%s, %s, %s, %s" % (dst, mask(d & 0xF), self.operand(s1, d, 0),
                                                 self.operand(s2, d, 1), self.operand(s3, d, 2, idx))
        if op in (0x2E, 0x2F):
            d = self.desc[w & 0x7F]
            idx = (w >> 19) & 3
            return "cmp %s, %s, %s, %s" % (self.operand((w >> 12) & 0x7F, d, 0, idx), CMPOPS[(w >> 24) & 7],
                                          CMPOPS[(w >> 21) & 7], self.operand((w >> 7) & 0x1F, d, 1))
        name = OPS.get(op, "op%02x" % op)
        if name in ("nop", "end", "emit", "break"):
            return name
        if name in ("call", "callc", "callu", "ifu", "ifc", "jmpc", "jmpu", "loop", "breakc"):
            dst, num = (w >> 10) & 0xFFF, w & 0xFF
            if name in ("callc", "ifc", "jmpc", "breakc"):
                cond = "%s(%s%d, %s%d)" % (CONDOPS[(w >> 22) & 3], "", (w >> 25) & 1, "", (w >> 24) & 1)
                return "%s %s, %d, %d" % (name, cond, dst, num)
            if name == "call":
                return "call %d, %d" % (dst, num)
            bid = (w >> 22) & 0xF
            if name == "loop":
                return "loop i%d, end %d" % (bid, dst)
            reg = "b%d" % bid
            nm = self.names.get(0x78 + bid)
            if nm:
                reg += "(%s)" % nm
            if name == "jmpu":
                return "jmpu %s%s, %d" % ("!" if num & 1 else "", reg, dst)
            return "%s %s, %d, %d" % (name, reg, dst, num)
        if name == "setemit":
            return "setemit %d" % ((w >> 24) & 3)
        d = self.desc[w & 0x7F]
        dst = self.dst((w >> 21) & 0x1F)
        idx = (w >> 19) & 3
        if name in INVERTED:
            s1, s2 = (w >> 14) & 0x1F, (w >> 7) & 0x7F
            return "%s %s.%s, %s, %s" % (name, dst, mask(d & 0xF), self.operand(s1, d, 0),
                                         self.operand(s2, d, 1, idx))
        s1, s2 = (w >> 12) & 0x7F, (w >> 7) & 0x1F
        if name in UNARY:
            if name == "mova":
                return "mova a0.%s, %s" % (mask(d & 0xF), self.operand(s1, d, 0, idx))
            return "%s %s.%s, %s" % (name, dst, mask(d & 0xF), self.operand(s1, d, 0, idx))
        return "%s %s.%s, %s, %s" % (name, dst, mask(d & 0xF), self.operand(s1, d, 0, idx), self.operand(s2, d, 1))


def main():
    b = open(sys.argv[1], "rb").read()
    p = Prog(b)
    progs = [int(sys.argv[2])] if len(sys.argv) > 2 else range(len(p.dvle))
    for k in progs:
        main_, end, consts, outs = p.read_dvle(k)
        print("; program %d: main %d..%d  outputs: %s" % (k, main_, end, " ".join(outs)))
        for c in consts:
            print(";   const " + c)
    print("; code (%d words; subroutines are shared between programs)" % len(p.code))
    for a in range(len(p.code)):
        print("%4d: %s" % (a, p.dis(a)))


if __name__ == "__main__":
    main()
