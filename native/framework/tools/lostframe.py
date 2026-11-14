#!/usr/bin/env python3
"""lostframe.py ADDR... | --scan: find stack-object words the ARM code writes (sp-relative stores) that the
round-2 converted C never writes (lost stack objects passed by address: the defect class of
004FD464 / 004C58F0). Heuristic: asm stores through sp or through a register holding sp+k;
converted writes = albw_frame slots used as assignment targets; the frame->sp offset delta is
the one that matches the most slots. Prints the unmatched sp offsets (candidates to check by hand).
Needs capstone (run with ../albw-decomp-ai/.venv/bin/python3)."""
import glob, json, os, re, struct, sys, collections
import capstone

PORT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
DEC = os.path.join(PORT, "..", "albw-decomp-ai")
code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
usa2eu = {k: int(v["eu"], 16) for k, v in emap.items()}
starts = sorted(usa2eu.values())
CONV = os.path.join(PORT, "build", "decomp", "ghidra_fallback", "ghidra_analyzed4")


def asm_stores(usa):
    import bisect
    eu = usa2eu[usa]
    end = starts[bisect.bisect_right(starts, eu)]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.skipdata = True
    spreg = {}
    out = set()
    for ins in md.disasm(code[eu - 0x100000:end - 0x100000], eu):
        m, op = ins.mnemonic, ins.op_str
        r = re.match(r"(add|mov)\w*\s*", m)
        mm = re.match(r"(\w+), sp(?:, #(0x[0-9a-f]+|\d+))?$", op)
        if m in ("add", "mov") and mm:
            spreg[mm.group(1)] = int(mm.group(2), 0) if mm.group(2) else 0
            continue
        if m.startswith(("str", "stm")):
            ms = re.match(r"(\w+), \[(\w+)(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
            if ms and m.startswith("str"):
                base, off = ms.group(2), int(ms.group(3), 0) if ms.group(3) else 0
                b = 0 if base == "sp" else spreg.get(base)
                if b is not None:
                    n = 8 if m.startswith("strd") else 1
                    for k in range(0, n, 4) if n == 8 else [0]:
                        out.add((b + off + k) & ~3)
                continue
            ms = re.match(r"(\w+)!?, \{([^}]*)\}", op)
            if ms and m.startswith("stm") and ms.group(1) != "sp" or (ms and ms.group(1) == "sp"):
                base = ms.group(1)
                b = 0 if base == "sp" else spreg.get(base)
                if b is not None:
                    for i, _ in enumerate(ms.group(2).split(",")):
                        out.add(b + 4 * i)
                continue
        # a write to a tracked register kills it
        md2 = re.match(r"(\w+),", op)
        if md2 and md2.group(1) in spreg and not m.startswith(("str", "stm", "cmp", "tst")):
            del spreg[md2.group(1)]
    return out


def conv_writes(usa):
    f = glob.glob(os.path.join(CONV, "*", "func_%s.c" % usa))
    if not f:
        return None, None
    t = open(f[0]).read()
    defs = {m.group(1): int(m.group(2), 0) for m in
            re.finditer(r"#define (\w+) .*albw_frame \+ (0x[0-9a-f]+|\d+)", t)}
    if not defs:
        return {}, set()
    written = set()
    for name, off in defs.items():
        if re.search(r"\b%s\s*(\[[^\]]*\])?\s*=[^=]" % name, t) or re.search(r"\b%s\s*(\[[^\]]*\])?\s*(\+\+|--|[-+|&^]=)" % name, t):
            written.add(off & ~3)
    return defs, written


def scan():
    """--scan: every converted source whose Ghidra `&stack0x..` object (now an albw_frame slot) is
    never assigned in the C text: the object the ARM code builds (or a callee fills and the C
    then reads as a separate in_stack_ variable) is uninitialised natively."""
    rows = []
    for f in glob.glob(os.path.join(CONV, "*", "func_*.c")):
        t = open(f, errors="replace").read()
        names = re.findall(r"#define (stack0x\w+) ", t)
        bad = [n for n in names if not re.search(r"\b%s\s*(\[[^\]]*\])?\s*=[^=]" % n, t)]
        if bad:
            rows.append((os.path.basename(f)[5:13], bad, "in_stack_" in t))
    for a, bad, ins in sorted(rows):
        print(a, " ".join(bad), "(+in_stack_ reads)" if ins else "")
    print(len(rows), "functions", file=sys.stderr)


def main():
    if sys.argv[1:2] == ["--scan"]:
        return scan()
    for a in sys.argv[1:]:
        defs, w = conv_writes(a)
        s = asm_stores(a)
        if defs is None:
            print(a, "no converted source"); continue
        if not defs:
            print(a, "no albw_frame (asm sp stores: %d)" % len(s)); continue
        best = max(range(-0x100, 0x100, 4), key=lambda d: len({x - d for x in w} & s))
        miss = sorted(x for x in s if x + best not in w)
        print(a, "delta %d, asm sp stores %d, unmatched: %s" % (best, len(s), " ".join("sp+0x%X" % x for x in miss)))


main()
