#!/usr/bin/env python3
"""Functions whose machine code FALLS THROUGH into the next function (no return / unconditional branch
before the next function's start): Ghidra then decompiles the next function's body into the first one,
so a native fix of the second function is bypassed on that path (00168E00 -> 00168E9C, BOOT_LOG 123).

usage: tools/fallthrough_scan.py <EU disassembly (llvm-objdump of eu_code.bin at 0x100000)>
Prints: USA first, USA next, whether the first's linked source is Ghidra, whether the next has a
native override (those are the ones that matter most)."""
import glob, json, os, re, sys
m = json.load(open("../albw-decomp-ai/shared/eu_usa_map.json"))
eu2usa = {int(v["eu"], 16): k for k, v in m.items()}
starts = sorted(eu2usa)
native = set()
for d in ["native/game", "native/compilefix", "native/hot", "native/robust", "native/gameplay", "native/framework",
          "native/core", "native/route", "native/sdk"]:
    for f in glob.glob(d + "/*.c"):   # definitions, whatever the file name (fallthrough_thunks.c)
        for mm in re.finditer(r"^[A-Za-z_][\w \t\*]*\bfunc_([0-9A-Fa-f]{8})\s*\([^;{]*\)\s*\{", open(f, errors="replace").read(), re.M):
            native.add(mm.group(1).upper())
linked = {}
for o in json.load(open("build/decomp/report.json"))["objects"]:
    mm = re.search(r"func_([0-9A-Fa-f]{8})", os.path.basename(o))
    if mm: linked[mm.group(1).upper()] = "ghidra" if "/ghidra_fallback/" in o else "matched"
ins = {}
pat = re.compile(r"^\s*([0-9a-f]+):\s+([0-9a-f]{8})\s+(\S+)\s*(.*)$")
for line in open(sys.argv[1]):
    mm = pat.match(line)
    if mm: ins[int(mm.group(1), 16)] = (mm.group(3), mm.group(4).split("@")[0].strip(), int(mm.group(2), 16))
def terminal(op, args):
    if op in ("b", "bx") : return True
    if op.startswith("pop") and "pc" in args: return True
    if op.startswith("ldm") and "pc" in args: return True
    if op == "ldr" and args.startswith("pc,"): return True
    if op in ("mov", "add", "sub") and args.startswith("pc,"): return True
    if op.startswith("svc") or op == "udf": return True
    if op == "blx" and False: return True
    return False
n = 0
for a, b in zip(starts, starts[1:]):
    prev = b - 4
    if prev not in ins or prev <= a:
        continue
    op, args, word = ins[prev]
    if word >> 28 != 0xE:          # conditional encodings at a function end are literal-pool data
        continue
    if terminal(op, args) or re.match(r"^[0-9a-f]{8}$", op):
        continue
    if op in (".word", ".byte", "<unknown>") or ins[prev][0].startswith("."):
        continue
    if not op.isalpha() and not re.match(r"^[a-z][a-z0-9.]*$", op):
        continue
    # a data word decoded as an instruction (literal pools) is common: require a plausible code op
    if op.startswith(("and", "eor", "sub", "rsb", "add", "adc", "sbc", "rsc", "tst", "teq", "cmp", "cmn", "orr", "mov", "bic", "mvn", "ldr", "str", "ldm", "stm", "push", "pop", "v", "bl", "nop", "mul", "mla")) is False:
        continue
    ua, ub = eu2usa[a], eu2usa[b]
    if ua in native:
        continue                    # the first function has a native version: no inlined copy runs
    print("%s -> %s  last %s %s  first=%s next_native=%s" % (ua, ub, op, args, linked.get(ua, "-"), "YES" if ub in native else "no"))
    n += 1
sys.stderr.write("%d fall-through candidates\n" % n)
