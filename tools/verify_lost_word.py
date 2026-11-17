#!/usr/bin/env python3
"""Check tools/lost_word_scan.py candidates against the EU machine code.

usage: tools/verify_lost_word.py <EU disassembly (llvm-objdump of eu_code.bin @0x100000)> <scan output>

For each candidate `USA: &NAME (frame+OFF) word W not stored before <stmt with func_CALLEE(...)>`:
the function's EU range comes from the EU/USA map (start .. next function start); every `bl CALLEE`
in it is examined: the instructions since the previous bl / branch target are searched for a store of
the word at sp + OFF + 4 W (`str/vstr ..., [sp, #X]`, `stm sp, {..}`, `add rK, sp, #Y` + `stm rK`).
The C frame equals the ARM frame (entry-relative; BOOT_LOG 104). Verdicts:
  REAL      the ARM stores that word before the call (and the C text does not)
  no-store  no ARM store found (the word is genuinely unwritten there, or written earlier: check)
  ?         callee / function not found in the disassembly"""
import json, re, sys

m = json.load(open("../albw-decomp-ai/shared/eu_usa_map.json"))
u2e = {k: int(v["eu"], 16) for k, v in m.items()}
starts = sorted(u2e.values())
import bisect
lines = open(sys.argv[1]).read().split("\n")
pat = re.compile(r"^\s*([0-9a-f]+):\s+[0-9a-f]{8}\s+(\S+)\s*(.*)$")
ins = {}
order = []
for l in lines:
    mm = pat.match(l)
    if mm:
        a = int(mm.group(1), 16)
        ins[a] = (mm.group(2), re.sub(r"<[^>]*>", "", mm.group(3).split("@")[0]).strip())
        order.append(a)
idx = {a: i for i, a in enumerate(order)}

def imm(s):
    s = s.strip().lstrip("#")
    return int(s, 0)

def stores(seq):
    """sp offsets written by the instruction sequence"""
    out = set()
    reg_sp = {}   # rK -> sp + Y
    for op, args in seq:
        m1 = re.match(r"add\w*\s+(r\d+), sp, #(-?0x[0-9a-f]+|-?\d+)$", op + " " + args) if op.startswith("add") else None
        if op.startswith("add"):
            mm = re.match(r"(r\d+), sp, #(-?(?:0x[0-9a-f]+|\d+))$", args)
            if mm: reg_sp[mm.group(1)] = int(mm.group(2), 0)
            else:
                mm = re.match(r"(r\d+),", args)
                if mm: reg_sp.pop(mm.group(1), None)
            continue
        if op.startswith(("str", "vstr")):
            mm = re.match(r"([rsd]\d+|lr|r\w+), \[sp(?:, #(-?(?:0x[0-9a-f]+|\d+)))?\]", args)
            if mm:
                o = int(mm.group(2) or "0", 0)
                out.add(o)
                if op.startswith("strd") or mm.group(1).startswith("d"): out.add(o + 4)
                continue
            mm = re.match(r"([rsd]\d+|lr|r\w+), \[(r\d+)(?:, #(-?(?:0x[0-9a-f]+|\d+)))?\]", args)
            if mm and mm.group(2) in reg_sp:
                o = reg_sp[mm.group(2)] + int(mm.group(3) or "0", 0)
                out.add(o)
                if mm.group(1).startswith("d"): out.add(o + 4)
            continue
        if op.startswith(("stm", "vstm")):
            mm = re.match(r"(sp|r\d+)!?, \{([^}]*)\}", args)
            if mm:
                base = 0 if mm.group(1) == "sp" else reg_sp.get(mm.group(1))
                if base is None: continue
                regs = []
                for part in mm.group(2).split(","):
                    part = part.strip()
                    r = re.match(r"([rsd])(\d+)\s*-\s*[rsd](\d+)", part)
                    if r:
                        for k in range(int(r.group(2)), int(r.group(3)) + 1):
                            regs.append(r.group(1))
                    else:
                        regs.append(part[0] if part else "r")
                o = base
                for r in regs:
                    out.add(o); o += 4
                    if r == "d": out.add(o); o += 4
            continue
        mm = re.match(r"(r\d+),", args)
        if mm: reg_sp.pop(mm.group(1), None)
    return out

for line in open(sys.argv[2]):
    mm = re.match(r"(\w{8}): &(\w+) \(frame\+(0x[0-9a-f]+)\) word (\d) not stored before (.*)$", line.strip())
    if not mm: continue
    usa, name, off, w, stmt = mm.group(1), mm.group(2), int(mm.group(3), 16), int(mm.group(4)), mm.group(5)
    occ = dict((k, int(v)) for k, v in re.findall(r"([0-9A-F]{8})=(\d+)", stmt.split("||occ")[-1])) if "||occ" in stmt else {}
    stmt = stmt.split(" ||occ")[0]
    callees = re.findall(r"func_([0-9A-F]{8})\s*\(", stmt)
    if usa not in u2e or not callees:
        print("? %s" % line.strip()[:160]); continue
    eu = u2e[usa]
    end = starts[bisect.bisect_right(starts, eu)] if bisect.bisect_right(starts, eu) < len(starts) else eu + 0x10000
    if eu not in idx:
        print("? %s (no disasm)" % usa); continue
    target = off + 4 * w
    verdicts = []
    exact = []
    for cal in callees:
        if cal not in u2e: continue
        ceu = u2e[cal]
        i = idx[eu]
        seq = []
        while i < len(order) and order[i] < end:
            op, args = ins[order[i]]
            if op in ("bl", "blx") and args.startswith("0x") and int(args, 16) == ceu:
                if len(verdicts) == occ.get(cal, -1): exact.append(target in stores(seq))
                verdicts.append(target in stores(seq))
                seq = []
            elif op in ("bl", "blx") or op in ("b", "bx") or op.startswith("pop") or op.startswith("ldm") and "pc" in args:
                seq = []
            else:
                seq.append((op, args))
            i += 1
    v = ("REAL" if any(exact) else "no-store") if exact else ("REAL?" if any(verdicts) else ("no-store" if verdicts else "?"))
    print("%-8s %s &%s +%#x word %d  (%d call sites)  %s" % (v, usa, name, off, w, len(verdicts), stmt[:90]))
