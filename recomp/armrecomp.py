#!/usr/bin/env python3
"""Static recompiler: 3DS ARM11 (ARMv6K + VFPv2) machine code -> C.

  python3 recomp/armrecomp.py --code code.bin --table funcs.json [--map eu_usa_map.json] --out gen/

Every guest function becomes `void f_XXXXXXXX(CPU *c)` operating on the
guest register file (c->r[], flags, VFP regs) and guest memory (M32/M16/M8
macros over one flat 4 GiB host mapping). Semantics are exact per
instruction; nothing is guessed from decompiled C.

Control flow per function is found by recursive descent from its entry, so
literal pools are never decoded. Calls (BL) become host calls; returns
(bx lr / pop {..,pc} / mov pc,lr) become `return`; branches out of the
function become tail calls; computed jumps go through `dispatch()`.

Output: gen/recomp_NNN.c (functions), gen/dispatch.c (address table),
gen/recomp.h (prototypes), gen/stats.txt (unimplemented encodings).
"""
import argparse
import bisect
import collections
import json
import os
import struct

from thumb import Thumb

BASE = 0x100000
COND = ["c->z", "!c->z", "c->c", "!c->c", "c->n", "!c->n", "c->v", "!c->v",
        "(c->c && !c->z)", "(!c->c || c->z)", "(c->n == c->v)", "(c->n != c->v)",
        "(!c->z && c->n == c->v)", "(c->z || c->n != c->v)", None, None]


def sx(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def ror(v, n):
    n &= 31
    return ((v >> n) | (v << (32 - n))) & 0xFFFFFFFF if n else v


class Ctx:
    """Per-function code generation state."""

    def __init__(self, rc, entry, end):
        self.rc, self.entry, self.end = rc, entry, end
        self.labels = set()
        self.unimpl = rc.unimpl

    def R(self, n, pc):
        return "0x%08Xu" % (pc + 8) if n == 15 else "c->r[%d]" % n

    def inside(self, t):
        return self.entry <= t < self.end


class Recomp:
    def __init__(self, code, text_size, starts):
        self.code = code
        self.text_end = BASE + text_size
        self.starts = sorted(set(starts))
        self.start_set = set(self.starts)
        self.unimpl = collections.Counter()
        self.extra_entries = set()
        self.thumb_entries = set()

    def w(self, a):
        return struct.unpack_from("<I", self.code, a - BASE)[0]

    def fend(self, a):
        i = bisect.bisect_right(self.starts, a)
        return self.starts[i] if i < len(self.starts) else self.text_end

    # ------------------------------------------------------------ flow
    def successors(self, a, w):
        """(next addresses inside flow, terminates?, jumptable targets)."""
        cond = w >> 28
        if cond == 0xF:
            return [a + 4], False, []
        op = (w >> 25) & 7
        if op == 5:  # b / bl
            t = (a + 8 + (sx(w & 0xFFFFFF, 24) << 2)) & 0xFFFFFFFF
            if w & (1 << 24):  # bl
                return [a + 4], False, []
            return ([t] if cond == 0xE else [t, a + 4]), cond == 0xE, []
        if self.is_return(w):
            return ([] if cond == 0xE else [a + 4]), cond == 0xE, []
        jt = self.jumptable(a, w)
        if jt is not None:
            return jt, True, jt
        if self.writes_pc(w):
            return ([] if cond == 0xE else [a + 4]), cond == 0xE, []
        return [a + 4], False, []

    def is_return(self, w):
        if (w & 0x0FFFFFFF) == 0x012FFF1E:  # bx lr
            return True
        if (w & 0x0FFFFFFF) == 0x01A0F00E:  # mov pc, lr
            return True
        if (w & 0x0FFF8000) == 0x08BD8000:  # pop {..., pc} (ldmia sp!)
            return True
        if (w & 0x0FFFFFFF) == 0x049DF004:  # ldr pc, [sp], #4
            return True
        return False

    def writes_pc(self, w):
        op = (w >> 25) & 7
        rd = (w >> 12) & 15
        if (w & 0x0FFFFFF0) in (0x012FFF10,):  # bx rm
            return True
        if op in (0, 1) and rd == 15 and not (((w >> 23) & 3) == 2 and not (w >> 20) & 1):
            if op == 0 and (w & 0x90) == 0x90:
                return False
            return True
        if op in (2, 3) and rd == 15 and (w >> 20) & 1:
            return True
        if op == 4 and (w >> 20) & 1 and (w >> 15) & 1:
            return True
        return False

    def jumptable(self, a, w):
        cond = w >> 28
        # addls pc, pc, rX, lsl #2 ; b default ; b case0 ...
        if (w & 0x0FFFFFF0) == 0x008FF100 and cond != 0xE:
            n = self.cmp_bound(a)
            if n is None:
                return None
            return [a + 4] + [a + 8 + 4 * i for i in range(n + 1)]
        # ldrls pc, [pc, rX, lsl #2] ; b default ; .word case0 ...
        if (w & 0x0FFFFFF0) == 0x079FF100:
            n = self.cmp_bound(a)
            if n is None:
                return None
            tg = [self.w(a + 8 + 4 * i) for i in range(n + 1)]
            return ([a + 4] if cond != 0xE else []) + tg
        return None

    def cmp_bound(self, a):
        for back in range(1, 4):
            p = a - 4 * back
            w = self.w(p)
            if (w & 0x0FF00000) == 0x03500000:  # cmp rX, #imm
                return ror(w & 0xFF, ((w >> 8) & 15) * 2)
        return None

    def discover(self, entry, end):
        seen, work, jts = set(), [entry], {}
        while work:
            a = work.pop()
            if a in seen or not (entry <= a < end):
                continue
            seen.add(a)
            w = self.w(a)
            nxt, term, jt = self.successors(a, w)
            if jt:
                jts[a] = jt
            for t in nxt:
                if entry <= t < end:
                    work.append(t)
        return seen, jts

    # ------------------------------------------------------------ emit
    def shifter(self, w, pc, need_carry):
        """Operand 2 of a data-processing instruction -> (expr, carry_expr or None)."""
        if (w >> 25) & 1:
            rot = ((w >> 8) & 15) * 2
            v = ror(w & 0xFF, rot)
            carry = ("%du" % (v >> 31)) if rot else "c->c"
            return "0x%08Xu" % v, carry
        rm = w & 15
        st = (w >> 5) & 3
        rme = "0x%08Xu" % (pc + (12 if (w >> 4) & 1 else 8)) if rm == 15 else "c->r[%d]" % rm
        if (w >> 4) & 1:  # register-specified shift
            rs = "(c->r[%d] & 0xFF)" % ((w >> 8) & 15)
            fn = ["sh_lsl", "sh_lsr", "sh_asr", "sh_ror"][st]
            return ("%s(%s, %s)" % (fn, rme, rs),
                    "%sc(%s, %s, c->c)" % (fn, rme, rs) if need_carry else None)
        imm = (w >> 7) & 31
        if st == 0:
            if imm == 0:
                return rme, "c->c"
            return "(%s << %d)" % (rme, imm), "((%s >> %d) & 1)" % (rme, 32 - imm)
        if st == 1:
            n = imm or 32
            if n == 32:
                return "0u", "(%s >> 31)" % rme
            return "(%s >> %d)" % (rme, n), "((%s >> %d) & 1)" % (rme, n - 1)
        if st == 2:
            n = imm or 32
            if n == 32:
                return "(uint32_t)((int32_t)%s >> 31)" % rme, "(%s >> 31)" % rme
            return "(uint32_t)((int32_t)%s >> %d)" % (rme, n), "((%s >> %d) & 1)" % (rme, n - 1)
        if imm == 0:  # rrx
            return "((c->c << 31) | (%s >> 1))" % rme, "(%s & 1)" % rme
        return "ror32(%s, %d)" % (rme, imm), "((%s >> %d) & 1)" % (rme, imm - 1)

    def emit_dp(self, x, a, w, out):
        op = (w >> 21) & 15
        s = (w >> 20) & 1
        rn, rd = (w >> 16) & 15, (w >> 12) & 15
        logical = op in (0, 1, 8, 9, 12, 13, 14, 15)
        b, carry = self.shifter(w, a, s and logical)
        n = x.R(rn, a)
        res = {0: "%s & %s", 1: "%s ^ %s", 12: "%s | %s", 14: "%s & ~%s", 8: "%s & %s", 9: "%s ^ %s"}
        if op in res:
            out.append("{ uint32_t r = %s;" % (res[op] % (n, "(%s)" % b)))
            tgt = "r"
        elif op in (13, 15):
            out.append("{ uint32_t r = %s(%s);" % ("~" if op == 15 else "", b))
            tgt = "r"
        else:
            if op in (2, 10):    # sub, cmp
                expr = "op_sub(c, %s, %s, %d)" % (n, b, s)
            elif op == 3:        # rsb
                expr = "op_sub(c, %s, %s, %d)" % (b, n, s)
            elif op in (4, 11):  # add, cmn
                expr = "op_add(c, %s, %s, 0, %d)" % (n, b, s)
            elif op == 5:        # adc
                expr = "op_add(c, %s, %s, c->c, %d)" % (n, b, s)
            elif op == 6:        # sbc
                expr = "op_add(c, %s, ~(%s), c->c, %d)" % (n, b, s)
            else:                # rsc
                expr = "op_add(c, %s, ~(%s), c->c, %d)" % (b, n, s)
            out.append("{ uint32_t r = %s;" % expr)
            tgt = "r"
            s = 0  # flags already set by op_add/op_sub
        if s:
            out.append("  c->n = r >> 31; c->z = r == 0; c->c = %s;" % carry)
        if op not in (8, 9, 10, 11):
            if rd == 15:
                out.append("  return;" if self.is_return(w) else "  " + self.branch_reg(x, a, "r", w))
            else:
                out.append("  c->r[%d] = %s;" % (rd, tgt))
        out.append("}")

    def branch_reg(self, x, a, expr, w):
        """Computed jump (target in a C expression)."""
        if a in x.jts:
            cases = " ".join("case 0x%08Xu: goto L_%08X;" % (t, t) for t in sorted(set(x.jts[a])) if x.inside(t))
            for t in x.jts[a]:
                x.labels.add(t)
            return "switch (%s) { %s default: dispatch(c, %s); return; }" % (expr, cases, expr)
        return "dispatch(c, %s); return;" % expr

    def addr_mode2(self, x, a, w):
        """LDR/STR word/byte: (address expr, writeback stmt or '')."""
        p, u, wb = (w >> 24) & 1, (w >> 23) & 1, (w >> 21) & 1
        rn = (w >> 16) & 15
        if (w >> 25) & 1:
            off, _ = self.shifter(w & ~(1 << 25), a, False)
        else:
            off = "%du" % (w & 0xFFF)
        base = x.R(rn, a)
        new = "%s %s %s" % (base, "+" if u else "-", off)
        if p:
            return "(%s)" % new, ("c->r[%d] = %s;" % (rn, new)) if wb else ""
        return base, "c->r[%d] = %s;" % (rn, new)

    def emit_ldst(self, x, a, w, out):
        l, bt = (w >> 20) & 1, (w >> 22) & 1
        rd = (w >> 12) & 15
        addr, wb = self.addr_mode2(x, a, w)
        out.append("{ uint32_t ea = %s;" % addr)
        if l:
            v = "M8(ea)" if bt else "M32(ea)"
            out.append("  uint32_t v = %s;" % v)
            if wb:
                out.append("  " + wb)
            if rd == 15:
                out.append("  return;" if self.is_return(w) else "  " + self.branch_reg(x, a, "v", w))
            else:
                out.append("  c->r[%d] = v;" % rd)
        else:
            val = x.R(rd, a) if rd != 15 else "0x%08Xu" % (a + 12)
            out.append("  %s = %s;" % ("M8(ea)" if bt else "M32(ea)", val if not bt else "(uint8_t)" + val))
            if wb:
                out.append("  " + wb)
        out.append("}")

    def emit_extra_ldst(self, x, a, w, out):
        p, u, i, wb, l = (w >> 24) & 1, (w >> 23) & 1, (w >> 22) & 1, (w >> 21) & 1, (w >> 20) & 1
        rn, rd = (w >> 16) & 15, (w >> 12) & 15
        sh = (w >> 5) & 3
        off = "%du" % (((w >> 4) & 0xF0) | (w & 15)) if i else "c->r[%d]" % (w & 15)
        base = x.R(rn, a)
        new = "%s %s %s" % (base, "+" if u else "-", off)
        ea = "(%s)" % new if p else base
        wbs = ("c->r[%d] = %s;" % (rn, new)) if (wb or not p) else ""
        out.append("{ uint32_t ea = %s;" % ea)
        if sh == 1 and l:
            out.append("  uint32_t v = M16(ea); %s c->r[%d] = v;" % (wbs, rd))
        elif sh == 1:
            out.append("  M16(ea) = (uint16_t)c->r[%d]; %s" % (rd, wbs))
        elif sh == 2 and l:
            out.append("  uint32_t v = (uint32_t)(int8_t)M8(ea); %s c->r[%d] = v;" % (wbs, rd))
        elif sh == 3 and l:
            out.append("  uint32_t v = (uint32_t)(int16_t)M16(ea); %s c->r[%d] = v;" % (wbs, rd))
        elif sh == 2:  # ldrd
            out.append("  uint32_t v0 = M32(ea), v1 = M32(ea + 4); %s c->r[%d] = v0; c->r[%d] = v1;"
                       % (wbs, rd, rd + 1))
        else:          # strd
            out.append("  M32(ea) = c->r[%d]; M32(ea + 4) = c->r[%d]; %s" % (rd, rd + 1, wbs))
        out.append("}")

    def emit_ldm(self, x, a, w, out):
        p, u, wb, l = (w >> 24) & 1, (w >> 23) & 1, (w >> 21) & 1, (w >> 20) & 1
        rn = (w >> 16) & 15
        regs = [i for i in range(16) if (w >> i) & 1]
        n = len(regs)
        start = {(0, 1): "base", (1, 1): "base + 4", (0, 0): "base - %d" % (4 * n - 4),
                 (1, 0): "base - %d" % (4 * n)}[(p, u)]
        out.append("{ uint32_t base = c->r[%d], ea = %s;" % (rn, start))
        newbase = "base + %d" % (4 * n) if u else "base - %d" % (4 * n)
        if l:
            for i, r in enumerate(regs):
                if r == 15:
                    out.append("  uint32_t pcv = M32(ea + %d);" % (4 * i))
                else:
                    out.append("  c->r[%d] = M32(ea + %d);" % (r, 4 * i))
            if wb and rn not in regs:
                out.append("  c->r[%d] = %s;" % (rn, newbase))
            if 15 in regs:
                if self.is_return(w):
                    out.append("  return;")
                else:
                    out.append("  " + self.branch_reg(x, a, "pcv", w))
        else:
            for i, r in enumerate(regs):
                out.append("  M32(ea + %d) = %s;" % (4 * i, "0x%08Xu" % (a + 12) if r == 15 else "c->r[%d]" % r))
            if wb:
                out.append("  c->r[%d] = %s;" % (rn, newbase))
        out.append("}")

    def emit_branch(self, x, a, w, out):
        t = (a + 8 + (sx(w & 0xFFFFFF, 24) << 2)) & 0xFFFFFFFF
        if w & (1 << 24):  # bl
            out.append("c->r[14] = 0x%08Xu; %s" % (a + 4, self.call(t)))
        elif x.inside(t):
            x.labels.add(t)
            out.append("goto L_%08X;" % t)
        else:
            out.append("%s return;" % self.call(t))

    def call(self, t):
        if t in self.start_set or t in self.extra_entries or t in self.thumb_entries:
            return "f_%08X(c);" % t
        return "dispatch(c, 0x%08Xu);" % t

    def emit_misc(self, x, a, w, out):
        """Opcode class 000 that is not data processing / extra ld/st. Returns True if handled."""
        if (w & 0x0FFFFFF0) == 0x012FFF10:  # bx
            rm = w & 15
            out.append("return;" if rm == 14 else self.branch_reg(x, a, "c->r[%d]" % rm, w))
            return True
        if (w & 0x0FFFFFF0) == 0x012FFF30:  # blx rm
            out.append("{ uint32_t t = c->r[%d]; c->r[14] = 0x%08Xu; dispatch(c, t); }" % (w & 15, a + 4))
            return True
        if (w & 0x0FFF0FF0) == 0x016F0F10:  # clz
            out.append("c->r[%d] = clz32(c->r[%d]);" % ((w >> 12) & 15, w & 15))
            return True
        if (w & 0x0FBF0FFF) == 0x010F0000:  # mrs
            out.append("c->r[%d] = cpsr_get(c);" % ((w >> 12) & 15))
            return True
        if (w & 0x0FB0FFF0) == 0x0120F000:  # msr cpsr_f, rm
            if (w >> 19) & 1:
                out.append("cpsr_set_flags(c, c->r[%d]);" % (w & 15))
            return True
        if (w & 0x0FB0F000) == 0x0320F000:  # msr imm / hints (nop, yield, wfe...)
            if ((w >> 16) & 0xF) == 0:
                out.append("/* hint */")
            elif (w >> 19) & 1:
                out.append("cpsr_set_flags(c, 0x%08Xu);" % ror(w & 0xFF, ((w >> 8) & 15) * 2))
            return True
        if (w & 0x0FC000F0) == 0x00000090:  # mul / mla
            rd, rn, rs, rm = (w >> 16) & 15, (w >> 12) & 15, (w >> 8) & 15, w & 15
            acc = " + c->r[%d]" % rn if (w >> 21) & 1 else ""
            out.append("{ uint32_t r = c->r[%d] * c->r[%d]%s; c->r[%d] = r;%s }"
                       % (rm, rs, acc, rd, " c->n = r >> 31; c->z = r == 0;" if (w >> 20) & 1 else ""))
            return True
        if (w & 0x0F8000F0) == 0x00800090:  # umull/umlal/smull/smlal
            hi, lo, rs, rm = (w >> 16) & 15, (w >> 12) & 15, (w >> 8) & 15, w & 15
            sgn, acc, s = (w >> 22) & 1, (w >> 21) & 1, (w >> 20) & 1
            if sgn:
                prod = "(uint64_t)((int64_t)(int32_t)c->r[%d] * (int32_t)c->r[%d])" % (rm, rs)
            else:
                prod = "(uint64_t)c->r[%d] * c->r[%d]" % (rm, rs)
            if acc:
                prod += " + (((uint64_t)c->r[%d] << 32) | c->r[%d])" % (hi, lo)
            out.append("{ uint64_t r = %s; c->r[%d] = (uint32_t)r; c->r[%d] = (uint32_t)(r >> 32);%s }"
                       % (prod, lo, hi, " c->n = (uint32_t)(r >> 63); c->z = r == 0;" if s else ""))
            return True
        if (w & 0x0FF00FFF) == 0x01900F9F:  # ldrex
            out.append("c->r[%d] = M32(c->r[%d]);" % ((w >> 12) & 15, (w >> 16) & 15))
            return True
        if (w & 0x0FF00FFF) == 0x01B00F9F:  # ldrexd
            rt, rn = (w >> 12) & 15, (w >> 16) & 15
            out.append("{ uint32_t ea = c->r[%d]; c->r[%d] = M32(ea); c->r[%d] = M32(ea + 4); }" % (rn, rt, rt + 1))
            return True
        if (w & 0x0FF00FF0) == 0x01A00F90:  # strexd
            rn, rd, rt = (w >> 16) & 15, (w >> 12) & 15, w & 15
            out.append("{ uint32_t ea = c->r[%d]; M32(ea) = c->r[%d]; M32(ea + 4) = c->r[%d]; c->r[%d] = 0; }"
                       % (rn, rt, rt + 1, rd))
            return True
        if (w & 0x0FF00FFF) == 0x01D00F9F:  # ldrexb
            out.append("c->r[%d] = M8(c->r[%d]);" % ((w >> 12) & 15, (w >> 16) & 15))
            return True
        if (w & 0x0FF00FFF) == 0x01F00F9F:  # ldrexh
            out.append("c->r[%d] = M16(c->r[%d]);" % ((w >> 12) & 15, (w >> 16) & 15))
            return True
        if (w & 0x0FF00FF0) in (0x01800F90, 0x01C00F90, 0x01E00F90):  # strex / strexb / strexh
            rn, rd, rt = (w >> 16) & 15, (w >> 12) & 15, w & 15
            sz = {0x01800F90: "M32", 0x01C00F90: "M8", 0x01E00F90: "M16"}[w & 0x0FF00FF0]
            out.append("%s(c->r[%d]) = c->r[%d]; c->r[%d] = 0;" % (sz, rn, rt, rd))
            return True
        if (w & 0x0FB00FF0) == 0x01000090:  # swp / swpb
            rn, rd, rm = (w >> 16) & 15, (w >> 12) & 15, w & 15
            m = "M8" if (w >> 22) & 1 else "M32"
            out.append("{ uint32_t t = %s(c->r[%d]); %s(c->r[%d]) = c->r[%d]; c->r[%d] = t; }" % (m, rn, m, rn, rm, rd))
            return True
        if (w & 0x0F900090) == 0x01000080:  # smulxy / smlaxy / smulwy / smlawy / smlalxy
            op = (w >> 21) & 3
            rd, rn, rs, rm = (w >> 16) & 15, (w >> 12) & 15, (w >> 8) & 15, w & 15
            xh, yh = (w >> 5) & 1, (w >> 6) & 1
            hx = "(int32_t)(int16_t)(c->r[%d] >> %d)" % (rm, 16 * xh)
            hy = "(int32_t)(int16_t)(c->r[%d] >> %d)" % (rs, 16 * yh)
            if op == 3:
                out.append("c->r[%d] = (uint32_t)(%s * %s);" % (rd, hx, hy))
            elif op == 0:
                out.append("c->r[%d] = (uint32_t)(%s * %s) + c->r[%d];" % (rd, hx, hy, rn))
            elif op == 1:
                wy = hy
                if xh:  # smulwy
                    out.append("c->r[%d] = (uint32_t)(((int64_t)(int32_t)c->r[%d] * %s) >> 16);" % (rd, rm, wy))
                else:   # smlawy
                    out.append("c->r[%d] = (uint32_t)(((int64_t)(int32_t)c->r[%d] * %s) >> 16) + c->r[%d];"
                               % (rd, rm, wy, rn))
            else:
                return False
            return True
        return False

    def emit_media(self, x, a, w, out):
        rd, rm = (w >> 12) & 15, w & 15
        if (w & 0x0F8003F0) == 0x06800070:  # sxt*/uxt* (+ add)
            op = (w >> 20) & 7
            rn = (w >> 16) & 15
            rot = ((w >> 10) & 3) * 8
            v = "ror32(c->r[%d], %d)" % (rm, rot) if rot else "c->r[%d]" % rm
            ext = {2: "(uint32_t)(int8_t)", 3: "(uint32_t)(int16_t)", 6: "(uint32_t)(uint8_t)",
                   7: "(uint32_t)(uint16_t)"}.get(op)
            if ext is None:
                if op in (0, 4):  # sxtb16 / uxtb16
                    if op == 4:
                        e = "(%s & 0x00FF00FFu)" % v
                    else:
                        e = "((uint32_t)(uint16_t)(int16_t)(int8_t)%s | ((uint32_t)(int8_t)(%s >> 16) << 16))" % (v, v)
                    out.append("c->r[%d] = %s;" % (rd, e if rn == 15 else "add16x2(c->r[%d], %s)" % (rn, e)))
                    return True
                return False
            e = "%s(%s)" % (ext, v)
            out.append("c->r[%d] = %s;" % (rd, e if rn == 15 else "c->r[%d] + %s" % (rn, e)))
            return True
        if (w & 0x0FFF0FF0) == 0x06BF0F30:
            out.append("c->r[%d] = __builtin_bswap32(c->r[%d]);" % (rd, rm))
            return True
        if (w & 0x0FFF0FF0) == 0x06BF0FB0:
            out.append("{ uint32_t v = c->r[%d]; c->r[%d] = ((v & 0x00FF00FFu) << 8) | ((v >> 8) & 0x00FF00FFu); }" % (rm, rd))
            return True
        if (w & 0x0FFF0FF0) == 0x06FF0FB0:
            out.append("c->r[%d] = (uint32_t)(int16_t)__builtin_bswap16((uint16_t)c->r[%d]);" % (rd, rm))
            return True
        if (w & 0x0FA00030) == 0x06A00010:  # ssat / usat
            sat = (w >> 16) & 31
            sh = (w >> 7) & 31
            asr = (w >> 6) & 1
            if asr:
                v = "((int32_t)c->r[%d] >> %d)" % (rm, min(sh or 32, 31))
            else:
                v = "(int32_t)(c->r[%d] << %d)" % (rm, sh)
            fn = "usat" if (w >> 22) & 1 else "ssat"
            n = sat if fn == "usat" else sat + 1
            out.append("c->r[%d] = %s32(%s, %d);" % (rd, fn, v, n))
            return True
        if (w & 0x0FF00FF0) == 0x06800FB0:  # sel
            out.append("c->r[%d] = sel32(c, c->r[%d], c->r[%d]);" % (rd, (w >> 16) & 15, rm))
            return True
        if (w & 0x0F800F10) == 0x06000F10:  # parallel add/subtract
            kind, op = (w >> 20) & 7, (w >> 5) & 7
            if kind in (1, 2, 3, 5, 6, 7) and op in (0, 1, 2, 3, 4, 7):
                out.append("c->r[%d] = par_op(c, %d, %d, c->r[%d], c->r[%d]);" % (rd, kind, op, (w >> 16) & 15, rm))
                return True
            return False
        if (w & 0x0FF00030) == 0x06800010:  # pkhbt / pkhtb
            rn, sh, tb = (w >> 16) & 15, (w >> 7) & 31, (w >> 6) & 1
            if tb:
                v = "(uint32_t)((int32_t)c->r[%d] >> %d)" % (rm, sh or 31)
                out.append("c->r[%d] = (c->r[%d] & 0xFFFF0000u) | (%s & 0xFFFFu);" % (rd, rn, v))
            else:
                out.append("c->r[%d] = (c->r[%d] & 0xFFFFu) | ((c->r[%d] << %d) & 0xFFFF0000u);" % (rd, rn, rm, sh))
            return True
        return False

    # ---------------------------------------------------------- VFP
    def sreg(self, v, bit):
        return (v << 1) | bit

    def emit_vfp_ls(self, x, a, w, out):
        p, u, d, wb, l = (w >> 24) & 1, (w >> 23) & 1, (w >> 22) & 1, (w >> 21) & 1, (w >> 20) & 1
        rn, vd = (w >> 16) & 15, (w >> 12) & 15
        dbl = (w >> 8) & 1
        imm = w & 0xFF
        base = x.R(rn, a)
        if p and not wb:  # vldr / vstr
            ea = "%s %s %du" % (base, "+" if u else "-", imm * 4)
            if (rn == 15):
                ea = "0x%08Xu" % ((((a + 8) & ~3) + (imm * 4 if u else -imm * 4)) & 0xFFFFFFFF)
            if dbl:
                r = (d << 4) | vd
                out.append("{ uint32_t ea = %s; %s }" % (ea, ("c->d[%d].u = M64(ea);" if l else "M64(ea) = c->d[%d].u;") % r))
            else:
                r = self.sreg(vd, d)
                out.append("{ uint32_t ea = %s; %s }" % (ea, ("c->su[%d] = M32(ea);" if l else "M32(ea) = c->su[%d];") % r))
            return True
        # vldm / vstm / vpush / vpop
        n = imm >> 1 if dbl else imm
        first = ((d << 4) | vd) if dbl else self.sreg(vd, d)
        size = imm * 4
        out.append("{ uint32_t base = c->r[%d], ea = %s;" % (rn, "base" if u else "base - %d" % size))
        for i in range(n):
            if dbl:
                out.append(("  c->d[%d].u = M64(ea + %d);" if l else "  M64(ea + %d) = c->d[%d].u;")
                           % ((first + i, 8 * i) if l else (8 * i, first + i)))
            else:
                out.append(("  c->su[%d] = M32(ea + %d);" if l else "  M32(ea + %d) = c->su[%d];")
                           % ((first + i, 4 * i) if l else (4 * i, first + i)))
        if wb:
            out.append("  c->r[%d] = %s;" % (rn, "base + %d" % size if u else "base - %d" % size))
        out.append("}")
        return True

    def emit_vfp_dp(self, x, a, w, out):
        dbl = (w >> 8) & 1
        D, N, M = (w >> 22) & 1, (w >> 7) & 1, (w >> 5) & 1
        vd, vn, vm = (w >> 12) & 15, (w >> 16) & 15, w & 15
        T = "c->d[%d].f" if dbl else "c->s[%d]"
        if dbl:
            d, n, m = (D << 4) | vd, (N << 4) | vn, (M << 4) | vm
        else:
            d, n, m = self.sreg(vd, D), self.sreg(vn, N), self.sreg(vm, M)
        Fd, Fn, Fm = T % d, T % n, T % m
        opc = (((w >> 23) & 1) << 3) | (((w >> 20) & 3) << 1) | ((w >> 6) & 1)
        simple = {0: "%s = %s + %s * %s" % (Fd, Fd, Fn, Fm),      # vmla
                  1: "%s = %s - %s * %s" % (Fd, Fd, Fn, Fm),      # vmls
                  2: "%s = -%s + %s * %s" % (Fd, Fd, Fn, Fm),     # vnmls
                  3: "%s = -%s - %s * %s" % (Fd, Fd, Fn, Fm),     # vnmla
                  4: "%s = %s * %s" % (Fd, Fn, Fm),
                  5: "%s = -(%s * %s)" % (Fd, Fn, Fm),
                  6: "%s = %s + %s" % (Fd, Fn, Fm),
                  7: "%s = %s - %s" % (Fd, Fn, Fm),
                  8: "%s = %s / %s" % (Fd, Fn, Fm)}
        if opc in simple:
            out.append(simple[opc] + ";")
            return True
        if opc != 15:
            return False
        ext = (vn << 1) | N
        S = "c->s[%d]"
        if ext == 0:
            out.append("%s = %s;" % (Fd, Fm))
        elif ext == 1:
            out.append("%s = %s(%s);" % (Fd, "fabs" if dbl else "fabsf", Fm))
        elif ext == 2:
            out.append("%s = -%s;" % (Fd, Fm))
        elif ext == 3:
            out.append("%s = %s(%s);" % (Fd, "sqrt" if dbl else "sqrtf", Fm))
        elif ext in (8, 9):
            out.append("vfp_cmp(c, %s, %s);" % (Fd, Fm))
        elif ext in (10, 11):
            out.append("vfp_cmp(c, %s, 0.0);" % Fd)
        elif ext == 15:  # vcvt between precisions
            if dbl:
                out.append("c->s[%d] = (float)c->d[%d].f;" % (self.sreg(vd, D), (M << 4) | vm))
            else:
                out.append("c->d[%d].f = (double)c->s[%d];" % ((D << 4) | vd, self.sreg(vm, M)))
        elif ext in (16, 17):  # uito / sito: source is a single register holding an int
            src = "c->su[%d]" % self.sreg(vm, M)
            cast = "(int32_t)" if ext == 17 else ""
            out.append("%s = (%s)%s%s;" % (Fd, "double" if dbl else "float", cast, src))
        elif ext in (24, 25, 26, 27):  # toui / touiz / tosi / tosiz -> single register
            dst = "c->su[%d]" % self.sreg(vd, D)
            fn = {24: "vfp_toui", 25: "vfp_touiz", 26: "vfp_tosi", 27: "vfp_tosiz"}[ext]
            out.append("%s = %s((double)%s);" % (dst, fn, Fm))
        else:
            return False
        return True

    def emit_cp_reg(self, x, a, w, out):
        cp = (w >> 8) & 15
        l = (w >> 20) & 1
        rt = (w >> 12) & 15
        opc1 = (w >> 21) & 7
        if cp == 10 and opc1 == 0:  # vmov s <-> r
            s = self.sreg((w >> 16) & 15, (w >> 7) & 1)
            out.append(("c->r[%d] = c->su[%d];" % (rt, s)) if l else ("c->su[%d] = c->r[%d];" % (s, rt)))
            return True
        if cp == 10 and opc1 == 7:  # vmrs / vmsr
            reg = (w >> 16) & 15
            if l:
                if rt == 15:
                    out.append("cpsr_set_flags(c, c->fpscr);")
                elif reg == 1:
                    out.append("c->r[%d] = c->fpscr;" % rt)
                else:
                    out.append("c->r[%d] = 0x41023400u; /* fpsid/fpexc */" % rt)
            elif reg == 1:
                out.append("c->fpscr = c->r[%d];" % rt)
            else:
                out.append("/* vmsr fpexc */")
            return True
        if cp == 11 and opc1 in (0, 1):  # vmov d[x] <-> r
            dn = (((w >> 7) & 1) << 4) | ((w >> 16) & 15)
            half = "hi" if opc1 else "lo"
            out.append(("c->r[%d] = c->d[%d].%s;" % (rt, dn, half)) if l else ("c->d[%d].%s = c->r[%d];" % (dn, half, rt)))
            return True
        if cp == 15:
            crn, crm, op2 = (w >> 16) & 15, w & 15, (w >> 5) & 7
            if l and crn == 13 and crm == 0 and op2 == 3:
                out.append("c->r[%d] = c->tls;" % rt)
                return True
            if not l and crn == 7:  # cache / barrier ops
                out.append("/* cp15 c7 barrier */")
                return True
        return False

    def emit_cp_rr(self, x, a, w, out):
        """vmov between two core regs and a double / two singles."""
        cp = (w >> 8) & 15
        l = (w >> 20) & 1
        rt2, rt = (w >> 16) & 15, (w >> 12) & 15
        m = ((w >> 5) & 1)
        vm = w & 15
        if cp == 11:
            dm = (m << 4) | vm
            if l:
                out.append("c->r[%d] = c->d[%d].lo; c->r[%d] = c->d[%d].hi;" % (rt, dm, rt2, dm))
            else:
                out.append("c->d[%d].lo = c->r[%d]; c->d[%d].hi = c->r[%d];" % (dm, rt, dm, rt2))
            return True
        if cp == 10:
            s = self.sreg(vm, m)
            if l:
                out.append("c->r[%d] = c->su[%d]; c->r[%d] = c->su[%d];" % (rt, s, rt2, s + 1))
            else:
                out.append("c->su[%d] = c->r[%d]; c->su[%d] = c->r[%d];" % (s, rt, s + 1, rt2))
            return True
        return False

    def emit_one(self, x, a, w, out):
        cond = w >> 28
        if cond == 0xF:
            if (w & 0xFE000000) == 0xFA000000:
                t = (a + 8 + (sx(w & 0xFFFFFF, 24) << 2) + ((w >> 23) & 2)) & 0xFFFFFFFF
                out.append("c->r[14] = 0x%08Xu; %s" % (a + 4, self.call(t)))
            elif (w & 0xFD70F000) == 0xF550F000 or (w & 0xFFFFFFF0) in (0xF57FF010, 0xF57FF040, 0xF57FF050, 0xF57FF060):
                out.append("/* pld / clrex / barrier */")
            else:
                return False
            return True
        op = (w >> 25) & 7
        if op == 0:
            if (w & 0x90) == 0x90 and (w & 0x60):
                if ((w >> 23) & 3) == 2 and (w & 0x0F9000F0) == 0x01000090:
                    return self.emit_misc(x, a, w, out)
                self.emit_extra_ldst(x, a, w, out)
                return True
            if (w & 0x90) == 0x90 or (((w >> 23) & 3) == 2 and not (w >> 20) & 1):
                return self.emit_misc(x, a, w, out)
            self.emit_dp(x, a, w, out)
            return True
        if op == 1:
            if ((w >> 23) & 3) == 2 and not (w >> 20) & 1:
                return self.emit_misc(x, a, w, out)
            self.emit_dp(x, a, w, out)
            return True
        if op == 2 or (op == 3 and not (w >> 4) & 1):
            self.emit_ldst(x, a, w, out)
            return True
        if op == 3:
            return self.emit_media(x, a, w, out)
        if op == 4:
            self.emit_ldm(x, a, w, out)
            return True
        if op == 5:
            self.emit_branch(x, a, w, out)
            return True
        if op == 6:
            if (w & 0x0FE00000) == 0x0C400000:
                return self.emit_cp_rr(x, a, w, out)
            if ((w >> 8) & 14) == 10:
                return self.emit_vfp_ls(x, a, w, out)
            return False
        if (w >> 24) & 1:
            out.append("c->r[15] = 0x%08Xu; svc(c, 0x%02X);" % (a + 4, w & 0xFF))
            return True
        if (w >> 4) & 1:
            return self.emit_cp_reg(x, a, w, out)
        if ((w >> 8) & 14) == 10:
            return self.emit_vfp_dp(x, a, w, out)
        return False

    def function(self, entry):
        end = self.fend(entry)
        x = Ctx(self, entry, end)
        body, x.jts = self.discover(entry, end)
        out_by_addr = {}
        for a in sorted(body):
            w = self.w(a)
            lines = []
            ok = self.emit_one(x, a, w, lines)
            if not ok:
                key = "%08X" % (w & 0x0FFFFFFF)
                self.unimpl[key] += 1
                lines = ["unimpl(c, 0x%08Xu, 0x%08Xu);" % (a, w)]
            cond = w >> 28
            if cond < 0xE:
                lines = ["if (%s) {" % COND[cond]] + ["  " + l for l in lines] + ["}"]
            nxt = a + 4
            if nxt not in body and not self.terminates(w):
                lines.append("%s return; /* falls into next function */" % self.call(nxt))
            out_by_addr[a] = lines
        out = ["void f_%08X(CPU *c) {" % entry]
        for a in sorted(body):
            if a in x.labels:
                out.append("L_%08X: (void)0;" % a)
            out.extend("  " + l for l in out_by_addr[a])
        out.append("}")
        return "\n".join(out)

    def terminates(self, w):
        cond = w >> 28
        if cond != 0xE:
            return False
        op = (w >> 25) & 7
        if op == 5 and not (w >> 24) & 1:
            return True
        return self.is_return(w) or self.writes_pc(w)

    def collect_extra_entries(self):
        """Branch/call targets that are not function starts: give them their own entry."""
        for s in self.starts:
            end = self.fend(s)
            body, _ = self.discover(s, end)
            for a in body:
                w = self.w(a)
                if w >> 28 != 0xF and (w >> 25) & 7 == 5:
                    t = (a + 8 + (sx(w & 0xFFFFFF, 24) << 2)) & 0xFFFFFFFF
                    if not (s <= t < end) and BASE <= t < self.text_end and t not in self.start_set:
                        self.extra_entries.add(t)

    def collect_pointer_entries(self):
        """Absolute code pointers anywhere in the image (vtables, callbacks, literal pools) to ARM code
        that is not a table start. False positives only cost an unused function."""
        n = 0
        for off in range(0, len(self.code) - 4, 4):
            v = struct.unpack_from("<I", self.code, off)[0]
            if (BASE <= v < self.text_end and not v & 3 and v not in self.start_set
                    and v not in self.thumb_entries and self.w(v) >> 28 == 0xE):
                if v not in self.extra_entries:
                    self.extra_entries.add(v)
                    n += 1
        return n

    def collect_thumb_entries(self, extra=()):
        """Thumb functions: ARM blx-imm targets, odd code pointers to a Thumb push, Thumb calls (transitively)."""
        th = Thumb(self)
        cand = set(extra)
        for s in self.starts:
            body, _ = self.discover(s, self.fend(s))
            for a in body:
                w = self.w(a)
                if (w & 0xFE000000) == 0xFA000000:
                    cand.add((a + 8 + (sx(w & 0xFFFFFF, 24) << 2) + ((w >> 23) & 2)) & 0xFFFFFFFF)
        for off in range(0, len(self.code) - 4, 4):
            v = struct.unpack_from("<I", self.code, off)[0]
            if v & 1 and BASE <= v - 1 < self.text_end and (th.h(v - 1) & 0xFE00) == 0xB400:
                cand.add(v - 1)
        # ARM->Thumb mode-switch stubs: add ip, pc, #1 ; bx ip ; <Thumb code>
        for off in range(0, self.text_end - BASE - 8, 4):
            if struct.unpack_from("<2I", self.code, off) == (0xE28FC001, 0xE12FFF1C):
                cand.add(BASE + off + 8)
                if BASE + off not in self.start_set:
                    self.extra_entries.add(BASE + off)
        work = [t for t in cand if BASE <= t < self.text_end]
        # armcc __cpp_initialize__aeabi_: push; ldr r4,[pc]; add r4,pc; ldr r5,[pc]; add r5,pc; ...
        # walks a table of offsets relative to each entry: every entry is a static constructor.
        self.init_targets = []
        for t in list(work):
            hs = [th.h(t + 2 * i) for i in range(5)]
            if (hs[1] & 0xFF00) == 0x4C00 and hs[2] == 0x447C and (hs[3] & 0xFF00) == 0x4D00 and hs[4] == 0x447D:
                lit = lambda a, h: struct.unpack_from("<I", self.code, ((a + 4) & ~3) + (h & 0xFF) * 4 - BASE)[0]
                tb = (lit(t + 2, hs[1]) + t + 4 + 4) & 0xFFFFFFFF
                te = (lit(t + 6, hs[3]) + t + 8 + 4) & 0xFFFFFFFF
                for e in range(tb, te, 4):
                    tgt = (struct.unpack_from("<I", self.code, e - BASE)[0] + e) & 0xFFFFFFFF
                    self.init_targets.append(tgt)
                    if tgt & 1:
                        work.append(tgt - 1)
                    elif tgt not in self.start_set:
                        self.extra_entries.add(tgt)
        th.body = set()
        while work:
            t = work.pop()
            if t in self.thumb_entries:
                continue
            self.thumb_entries.add(t)
            nf = th.next_function(t, self.start_set)
            if nf is not None and nf not in self.thumb_entries:
                work.append(nf)
            for tgt, is_thumb in th.calls(t):
                if not (BASE <= tgt < self.text_end):
                    continue
                if is_thumb:
                    work.append(tgt)
                elif tgt not in self.start_set:
                    self.extra_entries.add(tgt)
        return th


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--code", required=True)
    ap.add_argument("--text-size", type=lambda s: int(s, 0), default=0x5920F4)
    ap.add_argument("--table", required=True, help="funcs.json from the decomp")
    ap.add_argument("--map", help="eu_usa_map.json: translate USA starts to this (EU) binary")
    ap.add_argument("--out", required=True)
    ap.add_argument("--per-file", type=int, default=400)
    ap.add_argument("--thumb", default="", help="comma-separated extra Thumb entry addresses (hex)")
    a = ap.parse_args()

    code = open(a.code, "rb").read()
    starts = json.load(open(a.table))["starts"]
    names = {}
    if a.map:
        m = json.load(open(a.map))
        starts = [int(m["%08X" % s]["eu"], 16) for s in starts]
        names = {int(v["eu"], 16): k for k, v in m.items()}
    rc = Recomp(code, a.text_size, starts)
    rc.collect_extra_entries()
    th = rc.collect_thumb_entries(int(x, 16) for x in a.thumb.split(",") if x)
    print("static constructors found: %d" % len(rc.init_targets))
    print("pointer-only entries added: %d" % rc.collect_pointer_entries())
    entries = sorted((set(rc.starts) | rc.extra_entries | rc.thumb_entries))
    os.makedirs(a.out, exist_ok=True)

    hdr = ["/* generated by armrecomp.py: do not edit */", "#pragma once", '#include "cpu.h"']
    hdr += ["void f_%08X(CPU *c);" % e for e in entries]
    open(os.path.join(a.out, "recomp.h"), "w").write("\n".join(hdr) + "\n")

    nfiles = 0
    for i in range(0, len(entries), a.per_file):
        chunk = entries[i:i + a.per_file]
        src = ['/* generated by armrecomp.py: do not edit */', '#include "recomp.h"', '#include "cpu_ops.h"', ""]
        for e in chunk:
            if e in names:
                src.append("/* USA %s */" % names[e])
            src.append(th.function(e) if e in rc.thumb_entries else rc.function(e))
            src.append("")
        open(os.path.join(a.out, "recomp_%03d.c" % nfiles), "w").write("\n".join(src))
        nfiles += 1

    disp = ['/* generated by armrecomp.py: do not edit */', '#include "recomp.h"', "",
            "const DispatchEntry g_dispatch[] = {"]
    disp += ["  {0x%08Xu, f_%08X}," % (e, e) for e in entries]
    disp += ["};", "const unsigned g_dispatch_count = %d;" % len(entries)]
    open(os.path.join(a.out, "dispatch.c"), "w").write("\n".join(disp) + "\n")

    with open(os.path.join(a.out, "stats.txt"), "w") as fh:
        fh.write("functions %d (table %d, extra entries %d, thumb %d), files %d\n"
                 % (len(entries), len(rc.starts), len(rc.extra_entries), len(rc.thumb_entries), nfiles))
        fh.write("unimplemented encodings (reachable): %d distinct, %d sites\n"
                 % (len(rc.unimpl), sum(rc.unimpl.values())))
        for k, v in rc.unimpl.most_common(60):
            fh.write("  %s %d\n" % (k, v))
    print(open(os.path.join(a.out, "stats.txt")).read())


if __name__ == "__main__":
    main()
