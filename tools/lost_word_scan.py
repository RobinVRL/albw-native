#!/usr/bin/env python3
"""Lost store of one word of a stack Vec3 passed by address (lostframe class, any word: BOOT_LOG 102 /
103 found the third word, BOOT_LOG 127 the FIRST word in 001EA96C).

For every linked stage-2 Ghidra text: frame slots come from the `#define NAME (... (albw_frame + OFF))`
lines (a slot NAME may also be an array define: NAME[i] = OFF + 4 i). A call argument `&NAME` /
`(T *)&NAME` / `NAME` (array define) marks a 12-byte object at OFF. Within the statements between the
previous call and this call, if two of the three words OFF, OFF+4, OFF+8 are stored and the third is
not, the site is a candidate (the ARM copies all three with ldm / stm). Each candidate needs the ARM
check (`ldm {r0, r1, r2}; stm sp+OFF`) before a fix.

usage: tools/lost_word_scan.py [out]      (summary on stderr)"""
import json, os, re, sys

out = open(sys.argv[1], "w") if len(sys.argv) > 1 else sys.stdout
objs = json.load(open("build/decomp/report.json"))["objects"]
native = set()
for d in ["native/game", "native/compilefix", "native/hot", "native/robust", "native/gameplay", "native/framework",
          "native/core", "native/route", "native/sdk"]:
    for f in os.listdir(d) if os.path.isdir(d) else []:
        m = re.match(r"func_([0-9A-Fa-f]{8})\.c$", f)
        if m: native.add(m.group(1).upper())
DEF = re.compile(r"#define (\w+) \(\*?\(?\(?[\w \*]+\)\s*\(albw_frame \+ (0x[0-9a-f]+|\d+)\)\)?\)?")
CALL = re.compile(r"\bfunc_[0-9A-F]{8}\s*\(")
n_files = n_hits = 0
for o in objs:
    rel = o.split("/build/decomp/obj/", 1)[-1][: -len(".final.o")]
    if not rel.startswith("ghidra_fallback/"): continue
    usa = os.path.basename(rel)[5:13].upper()
    if usa in native and not os.environ.get("LWS_ALL"): continue
    try: t = open("build/decomp/" + rel, errors="replace").read()
    except OSError: continue
    slots = {}
    for m in DEF.finditer(t):
        slots[m.group(1)] = int(m.group(2), 0)
    if not slots: continue
    n_files += 1
    off2name = {}
    for k, v in slots.items(): off2name.setdefault(v, k)
    body = t[t.find("{", t.find("albw_frame[")):]
    stmts = re.split(r";", body)
    window = []   # offsets stored since the last call
    occ = {}      # callee -> calls seen so far (source order = ARM address order in Ghidra text)
    def stored_offsets(s):
        res = set()
        for m in re.finditer(r"(?<![\w.])(\w+)(?:\[(\d+)\])?\s*=(?!=)", s):
            name, idx = m.group(1), m.group(2)
            if name in slots:
                res.add(slots[name] + 4 * int(idx or 0))
        for m in re.finditer(r"\*\(\w+\s*\*\)\s*\(albw_frame \+ (0x[0-9a-f]+|\d+)\)\s*=(?!=)", s):
            res.add(int(m.group(1), 0))
        return res
    for st in stmts:
        if CALL.search(st):
            here = {}
            for c in re.findall(r"func_([0-9A-F]{8})\s*\(", st):
                here.setdefault(c, occ.get(c, 0))
                occ[c] = occ.get(c, 0) + 1
            for m in re.finditer(r"&\s*(\w+)\b|\(\w[\w \*]*\*\)\s*(\w+)\b", st):
                name = m.group(1) or m.group(2)
                if name not in slots: continue
                base = slots[name]
                have = [(base + 4 * i) in window for i in range(3)]
                if sum(have) == 2:
                    miss = have.index(False)
                    n_hits += 1
                    out.write("%s: &%s (frame+%#x) word %d not stored before %s ||occ %s\n" % (
                        usa, name, base, miss, re.sub(r"\s+", " ", st.strip())[:140],
                        ",".join("%s=%d" % kv for kv in here.items())))
            window = []
        window += stored_offsets(st)
sys.stderr.write("%d texts with frame slots, %d candidates\n" % (n_files, n_hits))
