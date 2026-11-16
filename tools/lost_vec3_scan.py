#!/usr/bin/env python3
"""Candidates for the lost-Vec3-store class (BOOT_LOG 102 [3d], 004BC850): the ARM copies a
3-word vector to the stack (`ldm rX, {a,b,c}; stm sp, {a,b,c}`) and passes its address on; the
converted text kept only two of the three stores. C-side signature, per linked stage-2 source:

    A = *(T *)(B + K);          A, C: frame locals (albw_frame #defines / xStack_NN / local_NN)
    C = *(T *)(B + K + 4);      at consecutive frame offsets
    ...no `= *(T *)(B + K + 8)` store into the next slot...
    f(..., &A, ...)             the address of the first is passed to a call

Then the EU code of the function is checked for an `ldm ... {3 registers}` followed by
`stm sp/...` of the same 3 registers (llvm-objdump of the EU code.bin), which confirms the third
word. Output: USA address, source, line, EU confirmation.

  python3 tools/lost_vec3_scan.py [--report out.tsv]
"""
import json, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REPORT = os.path.join(ROOT, "build", "decomp", "report.json")
EU_CODE = os.path.join(ROOT, "..", "albw-decomp-ai", "rom", "eu_code.bin")
EU_MAP = os.path.join(ROOT, "..", "albw-decomp-ai", "shared", "eu_usa_map.json")

FRAME_DEF = re.compile(r"#define\s+(\w+)\s+\(\*\(\w+\s*\*\)\(albw_frame \+ (0x[0-9a-f]+|\d+)\)\)")
LOAD = re.compile(r"^\s*(\w+)\s*=\s*\*\((?:\w+\s*)\*\)\((\w+) \+ (0x[0-9a-f]+|\d+)\);")


def sources():
    r = json.load(open(REPORT))
    for o in r["objects"]:
        src = o[:-len(".final.o")] if o.endswith(".final.o") else o[:-2]
        src = src.replace("/build/decomp/obj/", "/build/decomp/")
        if os.path.exists(src):
            yield src


def scan_file(path):
    text = open(path, errors="replace").read()
    usa = re.search(r"func_([0-9A-F]{8})\.c$", path)
    if not usa:
        return []
    fr = {m.group(1): int(m.group(2), 0) for m in FRAME_DEF.finditer(text)}
    lines = text.split("\n")
    out = []
    for i in range(len(lines) - 1):
        a, b = LOAD.match(lines[i]), LOAD.match(lines[i + 1])
        if not a or not b or a.group(2) != b.group(2):
            continue
        if int(b.group(3), 0) != int(a.group(3), 0) + 4:
            continue
        va, vb = a.group(1), b.group(1)
        if va in fr and vb in fr:
            if fr[vb] != fr[va] + 4:
                continue
        elif not (re.match(r"\w*Stack_[0-9a-f]+$", va) and re.match(r"\w*Stack_[0-9a-f]+$", vb)):
            continue
        k8 = int(a.group(3), 0) + 8
        window = "\n".join(lines[max(0, i - 3):i + 6])
        if re.search(r"\(%s \+ (0x%x|%d)\)" % (re.escape(a.group(2)), k8, k8), window):
            continue
        if not re.search(r"&%s\b" % re.escape(va), text):
            continue
        out.append((usa.group(1), path, i + 1, va, vb, a.group(2), a.group(3)))
    return out


def main():
    hits = []
    for p in sources():
        hits.extend(scan_file(p))
    print("%d candidate sites in %d functions" % (len(hits), len({h[0] for h in hits})))
    rep = sys.argv[sys.argv.index("--report") + 1] if "--report" in sys.argv else None
    f = open(rep, "w") if rep else sys.stdout
    for h in hits:
        f.write("%s\t%s:%d\t%s, %s <- %s + %s\n" % (h[0], os.path.relpath(h[1], ROOT), h[2], h[3], h[4], h[5], h[6]))


if __name__ == "__main__":
    main()
