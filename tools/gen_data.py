#!/usr/bin/env python3
"""Step 3: the game's data sections as linkable data, generated from your ROM's code.bin.

  python3 tools/gen_data.py --code code.bin [--map eu_usa_map.json] [--report build/decomp/report.json]

Writes build/data/gamedata.s (never committed: it is game data) with
  - .rodata / .data / .bss of the game, byte for byte, at their original relative layout;
  - every data symbol the decompiled code uses (data_<ADDR>) defined at its offset;
  - each 4-byte word that holds a pointer turned into a relocation:
      into the code  -> .long func_<USA ADDR>   (the native function)
      into the data  -> .long <section> + offset;
  - Ghidra literal-pool names (uRam<EU>, puRam<EU>, DAT_<EU>, ...) used by the Ghidra-derived
    sources, defined as the word they name (pool words live in the code section).

USA and EU builds have identical data layout (same section bases and sizes; 97.8% of data
references verified identical), so an EU code.bin plus the EU->USA function map works until a
USA dump is available. With a USA code.bin, omit --map.
"""
import argparse
import json
import os
import re
import struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TEXT, RO, DATA = 0x00100000, 0x00693000, 0x006FF000
RO_SIZE, DATA_SIZE, BSS_SIZE = 0x6B5F8, 0x289F0, 0x87A44
BSS = DATA + DATA_SIZE
END = BSS + BSS_SIZE
SECTIONS = [("ro", RO, RO_SIZE, ".rodata.albw"), ("data", DATA, DATA_SIZE, ".data.albw")]
POOL_NAME = re.compile(r"^(?:[a-z]*Ram|DAT_|PTR_)([0-9a-f]{8})$")
# any other name that ends in an 8-digit address (str_00694EBC, gTable_006F0000, ...)
LABEL_NAME = re.compile(r"^(?:[su]_.*_|_DAT_)([0-9a-f]{8})$")  # Ghidra full-analysis labels (EU addresses)
ADDR_NAME = re.compile(r"^[A-Za-z][A-Za-z0-9]*_(?:0x)?([0-9A-Fa-f]{8})$")


def section_ref(a):
    if RO <= a < RO + RO_SIZE:
        return "albw_ro + 0x%X" % (a - RO)
    if DATA <= a < BSS:
        return "albw_data + 0x%X" % (a - DATA)
    if BSS <= a < END:
        return "albw_bss + 0x%X" % (a - BSS)
    return None


def init_tables(code, rd, fn_of):
    """The entry point (TEXT) calls, in order: 4 runtime inits, blx <ctor runner (Thumb)>,
    bl <init-table runner>, ... The Thumb runner walks a table of self-relative offsets
    (ldr r4,[pc]; add r4,pc; ldr r5,[pc]; add r5,pc); the ARM runner walks absolute pointers
    (ldr r4,[pc,#x]; ldr r5,[pc,#y]). Returns the USA function names of both tables."""
    h = lambda a: struct.unpack_from("<H", code, a - TEXT)[0]
    blx = rd(TEXT + 0x10)
    off = blx & 0xFFFFFF
    off -= 0x1000000 if off & 0x800000 else 0
    t = TEXT + 0x10 + 8 + off * 4 + ((blx >> 23) & 2)
    lit = lambda a, hw: rd(((a + 4) & ~3) + (hw & 0xFF) * 4)
    tb = (lit(t + 2, h(t + 2)) + t + 8) & 0xFFFFFFFF
    te = (lit(t + 6, h(t + 6)) + t + 12) & 0xFFFFFFFF
    ctors = []
    for e in range(tb, te, 4):
        f = (rd(e) + e) & 0xFFFFFFFF
        if f not in fn_of:
            raise SystemExit("static constructor %08X is not a known function" % f)
        ctors.append(fn_of[f])
    bl = rd(TEXT + 0x14)
    off = bl & 0xFFFFFF
    off -= 0x1000000 if off & 0x800000 else 0
    r = TEXT + 0x14 + 8 + off * 4
    pool = lambda a: rd(a + 8 + (rd(a) & 0xFFF))
    ib, ie = pool(r + 4), pool(r + 8)
    inits = []
    for e in range(ib, ie, 4):
        f = rd(e)
        if f not in fn_of:
            raise SystemExit("initialiser %08X is not a known function" % f)
        inits.append(fn_of[f])
    return ctors, inits


def _pr(b):
    return 0x20 <= b < 0x7F


def text_words(ws):
    """Words that are string text, never pointers. UTF-16 text such as u"$coin:/gamecoin.dat"
    has words like 0x006F0063 ("co") that fall into the data range and were relocated, which
    corrupted the string. A word counts as text when it looks like text (UTF-16: both units
    0x00xx printable/NUL with at least one printable, next to another such word; narrow: all 4
    bytes printable/NUL with the first printable, next to a word of 4 printable characters).
    Pointer tables (e.g. 0x00694518, 0x0069451C...) are not text by these rules."""
    def u16(w):
        if w & 0xFF00FF00:
            return False
        a, b = w & 0xFF, (w >> 16) & 0xFF
        return (_pr(a) or a == 0) and (_pr(b) or b == 0) and (_pr(a) or _pr(b))
    def narrow(w):
        bs = [(w >> (8 * i)) & 0xFF for i in range(4)]
        return _pr(bs[0]) and all(_pr(x) or x == 0 for x in bs)
    def full(w):  # four printable characters: certainly inside a narrow string
        return all(_pr((w >> (8 * i)) & 0xFF) for i in range(4))
    n = len(ws)
    out = [False] * n
    k = [u16(w) for w in ws]
    f = [full(w) for w in ws]
    for i in range(n):
        if k[i] and ((i > 0 and k[i - 1]) or (i + 1 < n and k[i + 1])):
            out[i] = True
        elif narrow(ws[i]) and ((i > 0 and f[i - 1]) or (i + 1 < n and f[i + 1])):
            out[i] = True
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--code", required=True)
    ap.add_argument("--map", help="eu_usa_map.json when --code is the EU build")
    ap.add_argument("--decomp", default=os.path.join(ROOT, "..", "albw-decomp-ai"))
    ap.add_argument("--extra", help="file with more symbol names to define (from native objects)")
    ap.add_argument("--addr-taken", help="file with the DAT_ names the sources use as &DAT_ (address)")
    ap.add_argument("--report", default=os.path.join(ROOT, "build", "decomp", "report.json"))
    ap.add_argument("--out", default=os.path.join(ROOT, "build", "data", "gamedata.s"))
    a = ap.parse_args()
    code = open(a.code, "rb").read()
    addr_taken = set(open(a.addr_taken).read().split()) if a.addr_taken else set()
    rd = lambda addr: struct.unpack_from("<I", code, addr - TEXT)[0]
    text_end = TEXT + (RO - TEXT)

    # code address in this binary -> USA function name
    if a.map:
        fn_of = {int(v["eu"], 16): "func_" + k for k, v in json.load(open(a.map)).items()}
        extra = os.path.join(ROOT, "native", "extra_functions.json")
        if os.path.exists(extra):  # functions only reached through pointers (USA -> EU)
            fn_of.update({int(eu, 16): "func_" + usa for usa, eu in json.load(open(extra)).items()})
    else:
        starts = json.load(open(os.path.join(a.decomp, "funcs.json")))["starts"]
        fn_of = {s: "func_%08X" % s for s in starts}
    unresolved = dict(json.load(open(a.report))["unresolved"])
    if a.extra and os.path.exists(a.extra):
        for name in open(a.extra).read().split():
            unresolved.setdefault(name, 1)

    def word(addr, w):
        """Assembly for the 4-byte word w stored at addr."""
        if TEXT <= w < text_end and w in fn_of:
            return ".long %s" % fn_of[w]
        r = section_ref(w)
        if r:
            return ".long %s" % r
        return ".long 0x%08X" % w

    out = ["# generated by gen_data.py from %s: game data, never commit" % os.path.basename(a.code),
           "    .section .rodata.albw,\"a\"", "    .p2align 4", "    .globl albw_ro", "albw_ro:"]
    nptr = 0
    for name, base, size, sec in SECTIONS:
        if name == "data":
            out += ["    .section .data.albw,\"aw\"", "    .p2align 4", "    .globl albw_data", "albw_data:"]
        n = (size - size % 4) // 4
        ws = [rd(base + 4 * i) for i in range(n)]
        text = text_words(ws)
        for off in range(0, size - size % 4, 4):
            w = ws[off // 4]
            s = ".long 0x%08X" % w if text[off // 4] else word(base + off, w)
            nptr += not s.startswith(".long 0x")
            out.append("    " + s)
        for off in range(size - size % 4, size):
            out.append("    .byte 0x%02X" % code[base + off - TEXT])
    out += ["    .section .bss.albw,\"aw\",@nobits", "    .p2align 4", "    .globl albw_bss", "albw_bss:",
            "    .zero 0x%X" % BSS_SIZE]

    # data symbols used by the code
    ndata = npool = nbad = 0
    for sym in sorted(unresolved):
        m = re.match(r"^data_([0-9A-F]{8})$", sym)
        if m:
            r = section_ref(int(m.group(1), 16))
            if r:
                out += ["    .globl %s" % sym, "    .set %s, %s" % (sym, r)]
                ndata += 1
            else:
                nbad += 1
            continue
        m = LABEL_NAME.match(sym)
        if m:
            addr = int(m.group(1), 16)
            r = section_ref(addr)
            if r:  # string/data in the data sections: same address in USA and EU
                out += ["    .globl %s" % sym, "    .set %s, %s" % (sym, r)]
            elif TEXT <= addr < text_end and sym[0] in "su":  # string placed among the code
                if sym.startswith("u_"):  # UTF-16 string: up to the 16-bit NUL
                    o = addr - TEXT
                    while code[o:o + 2] != b"\0\0":
                        o += 2
                    raw = code[addr - TEXT:o + 2]
                else:
                    end = code.index(b"\0", addr - TEXT)
                    raw = code[addr - TEXT:end + 1]
                out += ["    .section .rodata.albw_str,\"a\"", "    .globl %s" % sym, "%s:" % sym,
                        "    .byte " + ",".join(str(b) for b in raw)]
            else:
                nbad += 1
                continue
            ndata += 1
            continue
        m = ADDR_NAME.match(sym)
        if m and not POOL_NAME.match(sym) and not sym.startswith("func_"):
            r = section_ref(int(m.group(1), 16))
            if r:
                out += ["    .globl %s" % sym, "    .set %s, %s" % (sym, r)]
                ndata += 1
            continue
        m = POOL_NAME.match(sym)
        if m:
            addr = int(m.group(1), 16)
            r = section_ref(addr)
            if r:  # Ghidra name for a data location
                out += ["    .globl %s" % sym, "    .set %s, %s" % (sym, r)]
            elif TEXT <= addr < text_end:  # literal-pool word in the code section
                w = word(addr, rd(addr))
                o = addr - TEXT
                e = code.find(b"\0", o, o + 256)
                # (a short string used through its address, "any\0" = 0x00796E61, also looks like
                # a pointer into .bss: the sources taking &DAT_ decide it is the string)
                if (w.startswith(".long 0x") or sym in addr_taken) and e - o >= 2 and \
                        all(0x20 <= b < 0x7F for b in code[o:e]):
                    # a string stored among the code, used through its address (`&DAT_001b9364`
                    # = "%s_f%s_b"): emit the whole string (its first word is unchanged)
                    raw = code[o:e + 1]
                    out += ["    .section .rodata.albw_pool,\"a\"", "    .p2align 2", "    .globl %s" % sym,
                            "%s:" % sym, "    .byte " + ",".join(str(b) for b in raw), "    .p2align 2"]
                else:
                    out += ["    .section .rodata.albw_pool,\"a\"", "    .p2align 2", "    .globl %s" % sym,
                            "%s:" % sym, "    " + w]
            else:
                nbad += 1
                continue
            npool += 1
    # startup initialiser tables, as pointer-sized tables of native functions (.dc.a: 64-bit clean)
    ctors, inits = init_tables(code, rd, fn_of)
    for name, lst in (("albw_ctors", ctors), ("albw_inits", inits)):
        out += ["    .section .rodata.albw_init,\"a\"", "    .p2align 3", "    .globl %s" % name, "%s:" % name]
        out += ["    .dc.a %s" % f for f in lst]
        out += ["    .globl %s_count" % name, "%s_count:" % name, "    .long %d" % len(lst)]
    print("startup tables: %d static constructors, %d initialisers" % (len(ctors), len(inits)))

    os.makedirs(os.path.dirname(a.out), exist_ok=True)
    with open(a.out, "w") as fh:
        fh.write("\n".join(out) + "\n")
    print("wrote %s: %d pointer words relocated, %d data symbols, %d Ghidra pool symbols, %d unplaceable"
          % (a.out, nptr, ndata, npool, nbad))


if __name__ == "__main__":
    main()
