"""Thumb-1 (ARMv6K) -> C, sharing conventions with armrecomp.py.

A Thumb function at address A is emitted as f_A (A even); callers and the
dispatcher strip bit 0. Thumb-1 has no conditional execution besides Bcc and
most data operations set flags (there are no IT blocks on ARMv6K).
"""
import struct

COND = ["c->z", "!c->z", "c->c", "!c->c", "c->n", "!c->n", "c->v", "!c->v",
        "(c->c && !c->z)", "(!c->c || c->z)", "(c->n == c->v)", "(c->n != c->v)",
        "(!c->z && c->n == c->v)", "(c->z || c->n != c->v)"]
WINDOW = 0x4000


def sx(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def NZ(r):
    return "c->n = %s >> 31; c->z = %s == 0;" % (r, r)


class Thumb:
    def __init__(self, rc):
        self.rc = rc

    def h(self, a):
        return struct.unpack_from("<H", self.rc.code, a - 0x100000)[0]

    def bl_target(self, a):
        """BL/BLX pair at a -> (target, is_blx) or None."""
        h1, h2 = self.h(a), self.h(a + 2)
        if h1 >> 11 != 0x1E:
            return None
        off = (sx(h1 & 0x7FF, 11) << 12) + ((h2 & 0x7FF) << 1)
        if h2 >> 11 == 0x1F:
            return (a + 4 + off) & 0xFFFFFFFF, False
        if h2 >> 11 == 0x1D:
            return (a + 4 + off) & 0xFFFFFFFC, True
        return None

    def size(self, a):
        return 4 if self.bl_target(a) else 2

    def is_return(self, h):
        if h == 0x4770:  # bx lr
            return True
        if (h & 0xFF00) == 0xBD00:  # pop {.., pc}
            return True
        if h == 0x46F7:  # mov pc, lr
            return True
        return False

    def succ(self, a):
        h = self.h(a)
        n = a + self.size(a)
        if self.is_return(h):
            return [], True
        if h >> 12 == 13 and ((h >> 8) & 15) < 14:
            return [a + 4 + sx(h & 0xFF, 8) * 2, n], False
        if h >> 11 == 0x1C:
            return [a + 4 + sx(h & 0x7FF, 11) * 2], True
        if (h & 0xFF87) == 0x4700:  # bx rm (tail jump)
            return [], True
        if (h & 0xFF00) == 0x4600 and (h & 0x87) == 0x87:  # mov pc, rm
            return [], True
        if (h & 0xFF00) == 0x4400 and (h & 0x87) == 0x87:  # add pc, rm
            return [], True
        if (h & 0xFE00) == 0xBC00 and h & 0x100:  # pop with pc
            return [], True
        return [n], False

    def discover(self, entry):
        end = min(entry + WINDOW, self.rc.text_end)
        seen, work = set(), [entry]
        while work:
            a = work.pop()
            if a in seen or not (entry <= a < end):
                continue
            seen.add(a)
            nxt, _ = self.succ(a)
            work.extend(nxt)
        return seen, end

    def calls(self, entry):
        """Call targets (target, thumb?) from the Thumb function at entry."""
        body, _ = self.discover(entry)
        out = []
        for a in body:
            bl = self.bl_target(a)
            if bl:
                out.append((bl[0], not bl[1]))
        return out

    def pools(self, body):
        """Literal-pool addresses read by `ldr rX, [pc, #imm]` in body."""
        out = set()
        for a in body:
            h = self.h(a)
            if h >> 11 == 9:
                p = ((a + 4) & ~3) + (h & 0xFF) * 4
                out.update((p, p + 2))
        return out

    def next_function(self, entry, start_set):
        """Linear sweep: the Thumb function that follows the one at entry, or None."""
        body, _ = self.discover(entry)
        a = max(body) + self.size(max(body))
        pools = self.pools(body)
        for _ in range(64):
            if a in pools or self.h(a) in (0x0000, 0x46C0, 0xBF00):
                a += 2
                continue
            break
        if a % 4 == 0:
            ws = struct.unpack_from("<3I", self.rc.code, a - 0x100000)
            if ws[0] == 0xE28FC001 and ws[1] == 0xE12FFF1C:
                return a + 8  # ARM->Thumb stub (registered separately); Thumb code continues after it
            if all(w >> 28 == 0xE for w in ws) or (ws[0] & 0xFFFF0000) == 0xE92D0000:
                return None  # ARM code resumes
        out = []
        if not self.emit(a, a + 4, set(), out) and not self.bl_target(a):
            return None
        return a

    # ---------------------------------------------------------------- emit
    def R(self, n, a):
        return "0x%08Xu" % (a + 4) if n == 15 else "c->r[%d]" % n

    def call(self, t, thumb):
        if thumb:
            return "f_%08X(c);" % t if t in self.rc.thumb_entries else "dispatch(c, 0x%08Xu);" % (t | 1)
        return self.rc.call(t)

    def emit(self, a, end, labels, out):
        h = self.h(a)
        inside = lambda t: a - WINDOW < t < end and t in self.body
        def goto_or_tail(t):
            if t in self.body:
                labels.add(t)
                return "goto L_%08X;" % t
            return "%s return;" % self.call(t, True)

        bl = self.bl_target(a)
        if bl:
            t, blx = bl
            out.append("c->r[14] = 0x%08Xu; %s" % ((a + 4) | 1, self.call(t, not blx)))
            return True
        top5 = h >> 11
        rd, rs = h & 7, (h >> 3) & 7
        if top5 <= 2:  # lsl/lsr/asr imm
            imm = (h >> 6) & 31
            m = "c->r[%d]" % rs
            if top5 == 0:
                if imm == 0:
                    out.append("{ uint32_t r = %s; c->r[%d] = r; %s }" % (m, rd, NZ("r")))
                else:
                    out.append("{ uint32_t r = %s << %d; c->c = (%s >> %d) & 1; c->r[%d] = r; %s }" % (m, imm, m, 32 - imm, rd, NZ("r")))
            else:
                n = imm or 32
                if top5 == 1:
                    r = "0u" if n == 32 else "%s >> %d" % (m, n)
                else:
                    r = "(uint32_t)((int32_t)%s >> %d)" % (m, min(n, 31))
                out.append("{ uint32_t r = %s; c->c = (%s >> %d) & 1; c->r[%d] = r; %s }" % (r, m, n - 1, rd, NZ("r")))
            return True
        if top5 == 3:  # add/sub reg/imm3
            v = (h >> 6) & 7
            b = "%du" % v if (h >> 10) & 1 else "c->r[%d]" % v
            fn = "op_sub(c, c->r[%d], %s, 1)" % (rs, b) if (h >> 9) & 1 else "op_add(c, c->r[%d], %s, 0, 1)" % (rs, b)
            out.append("c->r[%d] = %s;" % (rd, fn))
            return True
        if h >> 13 == 1:  # mov/cmp/add/sub imm8
            op, r, imm = (h >> 11) & 3, (h >> 8) & 7, h & 0xFF
            if op == 0:
                out.append("c->r[%d] = %du; c->n = 0; c->z = %d;" % (r, imm, imm == 0))
            elif op == 1:
                out.append("op_sub(c, c->r[%d], %du, 1);" % (r, imm))
            elif op == 2:
                out.append("c->r[%d] = op_add(c, c->r[%d], %du, 0, 1);" % (r, r, imm))
            else:
                out.append("c->r[%d] = op_sub(c, c->r[%d], %du, 1);" % (r, r, imm))
            return True
        if h >> 10 == 0x10:  # alu
            op = (h >> 6) & 15
            d, m = "c->r[%d]" % rd, "c->r[%d]" % rs
            simple = {0: "%s & %s", 1: "%s ^ %s", 12: "%s | %s", 14: "%s & ~%s", 13: "%s * %s"}
            if op in simple:
                out.append("{ uint32_t r = %s; %s = r; %s }" % (simple[op] % (d, m), d, NZ("r")))
            elif op in (2, 3, 4, 7):
                fn = {2: "sh_lsl", 3: "sh_lsr", 4: "sh_asr", 7: "sh_ror"}[op]
                out.append("{ uint32_t n = %s & 0xFF, v = %s; uint32_t r = %s(v, n); c->c = %sc(v, n, c->c); %s = r; %s }"
                           % (m, d, fn, fn, d, NZ("r")))
            elif op == 5:
                out.append("%s = op_add(c, %s, %s, c->c, 1);" % (d, d, m))
            elif op == 6:
                out.append("%s = op_add(c, %s, ~%s, c->c, 1);" % (d, d, m))
            elif op == 8:
                out.append("{ uint32_t r = %s & %s; %s }" % (d, m, NZ("r")))
            elif op == 9:
                out.append("%s = op_sub(c, 0u, %s, 1);" % (d, m))
            elif op == 10:
                out.append("op_sub(c, %s, %s, 1);" % (d, m))
            elif op == 11:
                out.append("op_add(c, %s, %s, 0, 1);" % (d, m))
            else:
                out.append("{ uint32_t r = ~%s; %s = r; %s }" % (m, d, NZ("r")))
            return True
        if h >> 10 == 0x11:  # hi-register ops / bx / blx
            op = (h >> 8) & 3
            rm = (h >> 3) & 15
            rdh = (h & 7) | ((h >> 4) & 8)
            if op == 3:
                if (h >> 7) & 1:
                    out.append("{ uint32_t t = c->r[%d]; c->r[14] = 0x%08Xu; dispatch(c, t); }" % (rm, (a + 2) | 1))
                elif rm == 14:
                    out.append("return;")
                else:
                    out.append("dispatch(c, %s); return;" % self.R(rm, a))
                return True
            m = self.R(rm, a)
            if op == 1:
                out.append("op_sub(c, %s, %s, 1);" % (self.R(rdh, a), m))
                return True
            val = m if op == 2 else "%s + %s" % (self.R(rdh, a), m)
            if rdh == 15:
                out.append("return;" if h == 0x46F7 else "dispatch(c, (%s) | 1); return;" % val)
            else:
                out.append("c->r[%d] = %s;" % (rdh, val))
            return True
        if top5 == 9:  # ldr literal
            ea = ((a + 4) & ~3) + (h & 0xFF) * 4
            out.append("c->r[%d] = M32(0x%08Xu);" % ((h >> 8) & 7, ea))
            return True
        if h >> 12 == 5:  # reg offset
            op, rm, rn = (h >> 9) & 7, (h >> 6) & 7, (h >> 3) & 7
            ea = "c->r[%d] + c->r[%d]" % (rn, rm)
            out.append({0: "M32(%s) = c->r[%d];", 1: "M16(%s) = (uint16_t)c->r[%d];", 2: "M8(%s) = (uint8_t)c->r[%d];",
                        3: "c->r[%d] = (uint32_t)(int8_t)M8(%s);", 4: "c->r[%d] = M32(%s);",
                        5: "c->r[%d] = M16(%s);", 6: "c->r[%d] = M8(%s);",
                        7: "c->r[%d] = (uint32_t)(int16_t)M16(%s);"}[op] % ((ea, rd) if op < 3 else (rd, ea)))
            return True
        if h >> 13 == 3:  # word/byte imm5
            byte, load, imm = (h >> 12) & 1, (h >> 11) & 1, (h >> 6) & 31
            ea = "c->r[%d] + %du" % (rs, imm if byte else imm * 4)
            mm = "M8" if byte else "M32"
            out.append(("c->r[%d] = %s(%s);" % (rd, mm, ea)) if load else
                       ("%s(%s) = %sc->r[%d];" % (mm, ea, "(uint8_t)" if byte else "", rd)))
            return True
        if h >> 12 == 8:  # halfword imm5
            ea = "c->r[%d] + %du" % (rs, ((h >> 6) & 31) * 2)
            out.append(("c->r[%d] = M16(%s);" % (rd, ea)) if (h >> 11) & 1 else ("M16(%s) = (uint16_t)c->r[%d];" % (ea, rd)))
            return True
        if h >> 12 == 9:  # sp-relative
            r, ea = (h >> 8) & 7, "c->r[13] + %du" % ((h & 0xFF) * 4)
            out.append(("c->r[%d] = M32(%s);" % (r, ea)) if (h >> 11) & 1 else ("M32(%s) = c->r[%d];" % (ea, r)))
            return True
        if h >> 12 == 10:  # add rd, pc/sp, #imm
            r, imm = (h >> 8) & 7, (h & 0xFF) * 4
            base = "c->r[13]" if (h >> 11) & 1 else "0x%08Xu" % ((a + 4) & ~3)
            out.append("c->r[%d] = %s + %du;" % (r, base, imm))
            return True
        if h >> 12 == 11:  # misc
            if (h & 0xFF00) == 0xB000:
                imm = (h & 0x7F) * 4
                out.append("c->r[13] %s= %du;" % ("-" if (h >> 7) & 1 else "+", imm))
                return True
            if (h & 0xFF00) == 0xB200:
                ext = ["(uint32_t)(int16_t)", "(uint32_t)(int8_t)", "(uint32_t)(uint16_t)", "(uint32_t)(uint8_t)"][(h >> 6) & 3]
                out.append("c->r[%d] = %sc->r[%d];" % (rd, ext, rs))
                return True
            if (h & 0xF600) == 0xB400:
                load, extra = (h >> 11) & 1, (h >> 8) & 1
                regs = [i for i in range(8) if (h >> i) & 1] + ([15 if load else 14] if extra else [])
                n = len(regs)
                if load:
                    out.append("{ uint32_t ea = c->r[13];")
                    for i, r in enumerate(regs):
                        out.append("  %s = M32(ea + %d);" % ("uint32_t pcv" if r == 15 else "c->r[%d]" % r, 4 * i))
                    out.append("  c->r[13] = ea + %d;%s }" % (4 * n, " return;" if extra else ""))
                else:
                    out.append("{ uint32_t ea = c->r[13] - %d;" % (4 * n))
                    for i, r in enumerate(regs):
                        out.append("  M32(ea + %d) = c->r[%d];" % (4 * i, r))
                    out.append("  c->r[13] = ea; }")
                return True
            if (h & 0xFF00) == 0xBA00:
                op = (h >> 6) & 3
                if op == 0:
                    out.append("c->r[%d] = __builtin_bswap32(c->r[%d]);" % (rd, rs))
                elif op == 1:
                    out.append("{ uint32_t v = c->r[%d]; c->r[%d] = ((v & 0x00FF00FFu) << 8) | ((v >> 8) & 0x00FF00FFu); }" % (rs, rd))
                elif op == 3:
                    out.append("c->r[%d] = (uint32_t)(int16_t)__builtin_bswap16((uint16_t)c->r[%d]);" % (rd, rs))
                else:
                    return False
                return True
            if (h & 0xFFE8) == 0xB660 or (h & 0xFFF7) == 0xB650 or (h & 0xFF00) == 0xBF00:
                out.append("/* cps / setend / hint */")
                return True
            return False
        if h >> 12 == 12:  # ldmia / stmia
            load, rn = (h >> 11) & 1, (h >> 8) & 7
            regs = [i for i in range(8) if (h >> i) & 1]
            out.append("{ uint32_t ea = c->r[%d];" % rn)
            for i, r in enumerate(regs):
                out.append(("  c->r[%d] = M32(ea + %d);" % (r, 4 * i)) if load else ("  M32(ea + %d) = c->r[%d];" % (4 * i, r)))
            if not (load and rn in regs):
                out.append("  c->r[%d] = ea + %d;" % (rn, 4 * len(regs)))
            out.append("}")
            return True
        if h >> 12 == 13:
            cond = (h >> 8) & 15
            if cond == 15:
                out.append("c->r[15] = 0x%08Xu; svc(c, 0x%02X);" % ((a + 2) | 1, h & 0xFF))
                return True
            if cond == 14:
                return False
            t = a + 4 + sx(h & 0xFF, 8) * 2
            out.append("if (%s) { %s }" % (COND[cond], goto_or_tail(t)))
            return True
        if top5 == 0x1C:
            out.append(goto_or_tail(a + 4 + sx(h & 0x7FF, 11) * 2))
            return True
        return False

    def function(self, entry):
        self.body, end = self.discover(entry)
        labels, lines = set(), {}
        for a in sorted(self.body):
            out = []
            if not self.emit(a, end, labels, out):
                self.rc.unimpl["T%04X" % self.h(a)] += 1
                out = ["unimpl(c, 0x%08Xu, 0x%04Xu);" % (a | 1, self.h(a))]
            nxt, term = self.succ(a)
            n = a + self.size(a)
            if not term and n not in self.body:
                out.append("%s return; /* runs off the window */" % self.call(n, True))
            lines[a] = out
        res = ["void f_%08X(CPU *c) { /* Thumb */" % entry]
        for a in sorted(self.body):
            if a in labels:
                res.append("L_%08X: (void)0;" % a)
            res.extend("  " + l for l in lines[a])
        res.append("}")
        return "\n".join(res)
