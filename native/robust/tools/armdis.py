#!/usr/bin/env python3
"""dis.py <USA ADDR> [maxinsns]: EU disassembly of a function with bl targets as USA names
and literal-pool words resolved."""
import bisect, json, os, struct, sys
import capstone

PORT = "."
DEC = "../albw-decomp-ai"
code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
extra = json.load(open(os.path.join(PORT, "native", "extra_functions.json")))
usa2eu = {k: int(v["eu"], 16) for k, v in emap.items()}
usa2eu.update({k: int(v, 16) for k, v in extra.items()})
eu2usa = {v: k for k, v in usa2eu.items()}
starts = sorted(eu2usa)
rd = lambda a: struct.unpack_from("<I", code, a - 0x100000)[0]


def name(a):
    if a in eu2usa:
        return "func_" + eu2usa[a]
    return "%08X" % a


def dis(usa, maxn=600, thumb=False):
    eu = usa2eu[usa]
    i = bisect.bisect_right(starts, eu)
    end = starts[i] if i < len(starts) else eu + 0x400
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB if thumb else capstone.CS_MODE_ARM)
    md.detail = False
    md.skipdata = True  # keep going over literal-pool words capstone cannot decode
    out = []
    pool = set()
    n = 0
    for ins in md.disasm(code[eu - 0x100000:end - 0x100000], eu):
        if ins.address in pool:
            w = rd(ins.address)
            extra_s = ""
            if w in eu2usa:
                extra_s = " = func_" + eu2usa[w]
            elif 0x693000 <= w < 0x7B0000:
                extra_s = " = data_%08X" % w
            else:
                f = struct.unpack("<f", struct.pack("<I", w))[0]
                extra_s = " (f=%g, i=%d)" % (f, w if w < 2**31 else w - 2**32)
            out.append("%08X: .word 0x%08X%s" % (ins.address, w, extra_s))
            n += 1
            continue
        s = "%08X: %-8s %s" % (ins.address, ins.mnemonic, ins.op_str)
        if ins.mnemonic.startswith(("bl", "b")) and ins.op_str.startswith("#0x"):
            t = int(ins.op_str[1:], 16)
            if t in eu2usa:
                s += "   ; func_" + eu2usa[t]
        if "[pc" in ins.op_str and ins.mnemonic.startswith(("ldr", "vldr")):
            try:
                off = ins.op_str.split("[pc")[1]
                off = off.strip(", ]#")
                off = int(off, 16) if off else 0
                pa = ins.address + 8 + off
                if ins.mnemonic.startswith("vldr"):
                    pa = ((ins.address + 8) & ~3) + off
                pool.add(pa)
                if ins.mnemonic.startswith("vldr") and "d" in ins.op_str.split(",")[0]:
                    pool.add(pa + 4)
                w = rd(pa)
                if w in eu2usa:
                    s += "   ; =func_" + eu2usa[w]
                elif 0x693000 <= w < 0x7B0000:
                    s += "   ; =data_%08X" % w
                else:
                    f = struct.unpack("<f", struct.pack("<I", w))[0]
                    s += "   ; =0x%X (f=%g)" % (w, f)
            except Exception:
                pass
        out.append(s)
        n += 1
        if n >= maxn:
            break
    return out


if __name__ == "__main__":
    a = sys.argv[1].upper()
    print("USA %s EU %08X" % (a, usa2eu[a]))
    print("\n".join(dis(a, int(sys.argv[2]) if len(sys.argv) > 2 else 600, thumb=len(sys.argv) > 3)))
