#!/usr/bin/env python3
"""Static-initializer sweep (boot stop 88b class): which of the game's C++ static initializers
write into the INITIALISED data image (.rodata / .data), i.e. change values that a reader of the
image (a hand transcription in native/, or tools/gen_data.py's pointer heuristics) would see
differently from the running game. 88b: EU 005D0C00 patches the nw::font combiner tables
00714B38 / 00714B78 from 00714B28; native/sdk/lyt.c had transcribed them from the image.

For every function of both init tables (tools/gen_data.py init_tables: the Thumb ctor table and
the ARM init table), the EU code is disassembled up to the next function start; registers loaded
from literal-pool words that point into .rodata/.data/.bss (and `add rD, rS, #imm` / `mov` of
them) are tracked, and every store through such a register is recorded with its absolute target.
Calls whose r0 is such an address are listed too (constructors run on a global object). Stores
into .bss are ordinary construction and only counted.

  ../albw-decomp-ai/.venv/bin/python tools/ctor_sweep.py [--all]      (needs capstone)

Result (boot 88b follow-up): 1230 initializers (Thumb ctor table; the ARM init table is empty),
1210 of them decompiled into native/game and run at startup; ~1208 write the initialised data
image (global-object construction); one overlaps a hand transcription: EU 005D0C00 -> the font
combiner tables of native/sdk/lyt.c (fixed). Its neighbours 005B9308 / 005AEA90 / 005C2548 /
005F8ECC / 005B93E8 / 005B9400 write the globals right after those tables (00714B98..00714C70),
which lyt.c does not copy (the 0x100 anchor window reports them).

Output: per initializer with image writes, the written words (EU addresses) and, for each, the
native/ files and tools that mention that address or its 16-byte-aligned table (EU spelling),
not counting the decompiled initialisers themselves (native/game, tools/decomp_initializer.py:
they run in the port, so the generated data is patched at run time as on hardware). A hit is a
hand transcription or a tool that may hold the pre-initialiser value. --hits: only those.
"""
import bisect, glob, json, os, re, struct, sys
import capstone

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
DEC = os.path.join(ROOT, "..", "albw-decomp-ai")
sys.path.insert(0, os.path.join(ROOT, "tools"))
import gen_data as gd

code = open(os.path.join(DEC, "rom", "eu_code.bin"), "rb").read()
emap = json.load(open(os.path.join(DEC, "shared", "eu_usa_map.json")))
rd = lambda a: struct.unpack_from("<I", code, a - gd.TEXT)[0]
fn_of = {int(v["eu"], 16): "func_" + k for k, v in emap.items()}
eu_of = {v: k for k, v in fn_of.items()}
starts = sorted(fn_of)
IMG_END = gd.DATA + gd.DATA_SIZE
BSS_END = gd.BSS + gd.BSS_SIZE


def section(a):
    if gd.RO <= a < gd.DATA:
        return "rodata"
    if gd.DATA <= a < IMG_END:
        return "data"
    if IMG_END <= a < BSS_END:
        return "bss"
    return None


def sweep(eu):
    end = starts[bisect.bisect_right(starts, eu)] if bisect.bisect_right(starts, eu) < len(starts) else eu + 0x400
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.skipdata = True
    reg = {}
    stores, calls, nbss = [], [], 0
    for ins in md.disasm(code[eu - gd.TEXT:end - gd.TEXT], eu):
        m, op = ins.mnemonic, ins.op_str
        mm = re.match(r"ldr(?:eq|ne)?\s*$", m) and re.match(r"(\w+), \[pc, #(-?0x[0-9a-f]+|-?\d+)\]$", op)
        if mm:
            v = rd(ins.address + 8 + int(mm.group(2), 0))
            if section(v):
                reg[mm.group(1)] = v
            else:
                reg.pop(mm.group(1), None)
            continue
        mm = re.match(r"(\w+), (\w+), #(-?0x[0-9a-f]+|-?\d+)$", op)
        if m in ("add", "sub") and mm and mm.group(2) in reg:
            k = int(mm.group(3), 0)
            reg[mm.group(1)] = reg[mm.group(2)] + (k if m == "add" else -k)
            continue
        mm = re.match(r"(\w+), (\w+)$", op)
        if m == "mov" and mm:
            if mm.group(2) in reg:
                reg[mm.group(1)] = reg[mm.group(2)]
            else:
                reg.pop(mm.group(1), None)
            continue
        if re.match(r"(str|stm|vstr)\w*(eq|ne|cs|cc|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)$", m) and not m.startswith("stm"):
            continue  # conditional stores in a ctor body: literal-pool / data words decoded as code
        if m.startswith(("str", "vstr", "stm")):
            ms = re.match(r"[^\[]*\[(\w+)(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
            base = ms.group(1) if ms else (op.split(",")[0].rstrip("!") if m.startswith("stm") else None)
            if base in reg:
                t = reg[base] + (int(ms.group(2), 0) if ms and ms.group(2) else 0)
                if section(t) == "bss":
                    nbss += 1
                else:
                    stores.append((ins.address, t, m))
            if op.endswith("!") and base in reg:
                reg.pop(base, None)
            continue
        if m in ("bl", "blx") and op.startswith("#"):
            tgt = int(op[1:], 0)
            if "r0" in reg and section(reg["r0"]) in ("rodata", "data"):
                calls.append((ins.address, tgt, reg["r0"]))
            for r in ("r0", "r1", "r2", "r3", "r12", "lr"):
                reg.pop(r, None)
            continue
        dst = op.split(",")[0].strip()
        if dst in reg and not m.startswith(("cmp", "tst", "teq", "cmn", "b", "push", "pop")):
            reg.pop(dst, None)
    return stores, calls, nbss


_ANCHORS = None


def mentions(eu_addr):
    """native/ and tools/ files that cite a data address "EU 00XXXXXX" (a transcription's source,
    usually a table start) at most 0x100 bytes below eu_addr. `data_XXXXXXXX` symbol uses read the
    live, initialised variable and do not count; nor do the decompiled initialisers themselves."""
    global _ANCHORS
    if _ANCHORS is None:
        _ANCHORS = {}
        for f in glob.glob(os.path.join(ROOT, "native", "**", "*.[ch]"), recursive=True) + \
                glob.glob(os.path.join(ROOT, "tools", "*.py")):
            if f.endswith("ctor_sweep.py"):
                continue
            t = open(f, errors="replace").read()
            if "decompiled by tools/decomp_initializer.py" in t[:400]:
                continue
            for m in re.finditer(r"\bEU (?:0x)?([0-9A-Fa-f]{8})\b", t):
                a = int(m.group(1), 16)
                if gd.RO <= a < BSS_END:
                    _ANCHORS.setdefault(a, set()).add(os.path.relpath(f, ROOT))
        _ANCHORS = sorted(_ANCHORS.items())
    keys = [a for a, _ in _ANCHORS]
    i = bisect.bisect_right(keys, eu_addr)
    hits = set()
    while i > 0 and eu_addr - keys[i - 1] < 0x100:
        hits |= _ANCHORS[i - 1][1]
        i -= 1
    return sorted(hits)


def main():
    ctors, inits = gd.init_tables(code, rd, fn_of)
    allf = [("ctor", c) for c in ctors] + [("init", i) for i in inits]
    print("static initializers: %d (Thumb ctor table %d, ARM init table %d)" % (len(allf), len(ctors), len(inits)))
    n_img = 0
    for kind, name in allf:
        eu = eu_of[name]
        stores, calls, nbss = sweep(eu)
        if not stores and not calls and "--all" not in sys.argv:
            continue
        if "--hits" in sys.argv and not any(mentions(t) for _, t, _ in stores) and \
                not any(mentions(r0) for _, _, r0 in calls):
            continue
        n_img += bool(stores or calls)
        print("%s %s (EU %08X): %d image stores, %d calls on image objects, %d .bss stores"
              % (kind, name, eu, len(stores), len(calls), nbss))
        for a, t, m in stores:
            print("    %08X %-6s -> %s %08X  %s" % (a, m, section(t), t, " ".join(mentions(t)) or "-"))
        for a, tgt, r0 in calls:
            print("    %08X call %s (this = %s %08X)  %s" % (a, fn_of.get(tgt, "%08X" % tgt), section(r0), r0,
                                                         " ".join(mentions(r0)) or "-"))
    print("initializers writing the data image: %d" % n_img)


if __name__ == "__main__":
    main()
