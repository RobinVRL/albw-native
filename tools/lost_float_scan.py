#!/usr/bin/env python3
"""Find functions that receive a float in s0/s1 (VFP argument registers) while the C text the
port compiles has no float parameter: the lost-float-argument class (BOOT_LOG 109, 115).

usage: tools/lost_float_scan.py <EU disassembly> [out]
  EU disassembly: llvm-objdump of the EU code.bin at 0x100000 (see BOOT_LOG notes).
A function "takes s0" when, in its entry block (up to the first call / branch / return), an
instruction reads s0 (or d0, or s1 / d0 for the second float) before writing it. The C text is
the override in native/{game,compilefix,hot,robust,...} if one exists, else the Ghidra stage-2
text; it "has a float" when its definition line declares a float/double parameter.
Prints: USA address, EU address, which registers, source file, and whether a native override
exists. Heuristic: entry-block only, so floats first read after a branch are missed.
"""
import glob, json, os, re, sys

dis = sys.argv[1]
out = open(sys.argv[2], "w") if len(sys.argv) > 2 else sys.stdout
m = json.load(open("../albw-decomp-ai/shared/eu_usa_map.json"))
eu2usa = {int(v["eu"], 16): k for k, v in m.items()}
starts = set(eu2usa)

NATIVE_DIRS = ["native/game", "native/compilefix", "native/hot", "native/robust", "native/gameplay",
               "native/framework", "native/core", "native/route"]
native = {}
for d in NATIVE_DIRS:
    for f in glob.glob(d + "/func_*.c"):
        native[os.path.basename(f)[5:13].upper()] = f
GH = "build/decomp/ghidra_fallback/ghidra_analyzed5_v4"
# the source each linked decomp object was built from (build/decomp/report.json "objects")
linked = {}
try:
    for o in json.load(open("build/decomp/report.json"))["objects"]:
        rel = o.split("/build/decomp/obj/", 1)[-1][: -len(".final.o")]
        name = os.path.basename(rel)
        usa = name[5:13].upper() if name.startswith("func_") else None
        if not usa:
            continue
        path = ("build/decomp/" + rel) if rel.startswith("ghidra_fallback/") else ("../albw-decomp-ai/" + rel)
        linked.setdefault(usa, path)
except (OSError, KeyError, ValueError):
    pass

pat = re.compile(r"^\s*([0-9a-f]+):\s+[0-9a-f]+\s+(\S+)\s*(.*)$")
ins = []
for line in open(dis):
    mm = pat.match(line)
    if mm:
        ins.append((int(mm.group(1), 16), mm.group(2), mm.group(3).split("@")[0].strip()))

def regs_of(text):
    """s registers named in an operand string (d<n> = s<2n>, s<2n+1>; lists and ranges)."""
    r = set()
    for a, b in re.findall(r"\b([sd])(\d+)\b", text):
        n = int(b)
        if a == "s": r.add(n)
        else: r.update((2 * n, 2 * n + 1))
    for a, lo, hi in re.findall(r"\b([sd])(\d+)\s*-\s*[sd](\d+)", text):
        for n in range(int(lo), int(hi) + 1):
            r.update((n,) if a == "s" else (2 * n, 2 * n + 1))
    return r

STOP = re.compile(r"^(b|bl|blx|bx|pop|ldm|svc)")
def entry_reads(i):
    written, read = set(), set()
    for k in range(i, min(i + 40, len(ins))):
        a, op, args = ins[k]
        if k > i and a in starts: break
        base = re.sub(r"(eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)$", "", op) if op.startswith("v") else op
        if op.startswith("v"):
            parts = [p.strip() for p in re.split(r",(?![^{]*})", args)]
            if base in ("vstr", "vstmia", "vstmdb", "vpush", "vcmp", "vcmpe") or base.startswith("vst"):
                srcs = regs_of(args)
                dst = set()
            elif base == "vmov" and parts and re.match(r"r\d+|lr|r12", parts[0]):
                srcs = regs_of(", ".join(parts[1:]))
                dst = set()
            elif base in ("vldr", "vpop") or base.startswith("vld"):
                srcs, dst = set(), regs_of(args) if base != "vldr" else regs_of(parts[0])
            elif base == "vmrs" or base == "vmsr":
                continue
            else:
                dst = regs_of(parts[0]) if parts else set()
                srcs = regs_of(", ".join(parts[1:]))
                if base in ("vmla", "vmls", "vnmla", "vnmls", "vfma", "vfms"):
                    srcs |= dst   # accumulate: reads the destination too
            for r in srcs:
                if r not in written: read.add(r)
            written |= dst
        if STOP.match(op) or (op == "mov" and args.startswith("pc")):
            break
    return read & {0, 1}

def has_float_param(src, usa):
    try:
        t = open(src, errors="replace").read()
    except OSError:
        return None
    mm = re.search(r"\bfunc_%s\s*\(([^)]*)\)\s*(const\s*)?(\{|$)" % usa, t, re.M)
    if not mm:
        return None
    return bool(re.search(r"\b(float|double|f32|f64|Float)\b", mm.group(1)))

n = n_unknown = 0
unknown = []
for i, (a, op, args) in enumerate(ins):
    if a not in starts: continue
    rd = entry_reads(i)
    if not rd: continue
    usa = eu2usa[a]
    src = native.get(usa) or linked.get(usa) or os.path.join(GH, usa[:3], "func_%s.c" % usa)
    fl = has_float_param(src, usa)
    if fl is None:
        n_unknown += 1
        unknown.append("%s EU %06x reads %s  %s (no definition found)" % (usa, a, ",".join("s%d" % r for r in sorted(rd)), src))
    if fl is False:
        n += 1
        out.write("%s EU %06x reads %s  %s%s\n" % (usa, a, ",".join("s%d" % r for r in sorted(rd)), src,
                                                  "  [native override]" if usa in native else ""))
for u in unknown:
    out.write("? " + u + "\n")
sys.stderr.write("%d candidates, %d without a parsable definition\n" % (n, n_unknown))
