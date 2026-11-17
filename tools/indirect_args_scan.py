#!/usr/bin/env python3
"""Dropped arguments of indirect (virtual / function-pointer) calls in the linked Ghidra texts
(BOOT_LOG 129: 0030D6D0 called the look-at virtual with two arguments, the ARM passes r2 too).

usage: tools/indirect_args_scan.py <EU disassembly (llvm-objdump of eu_code.bin @0x100000)> [out]

For every linked stage-2 Ghidra text (not overridden by a native file): the indirect calls
`(**(code **)(...))(a, b, ...)` / `(*(code *)...)(...)` in source order, with their argument counts.
In the EU function (range from the EU/USA map) every `blx rN` / tail `bx rN` (N != lr), in address
order, with the argument registers r1..r3 written since the previous call or branch target (a
register written there is an argument the ARM sets up for the call). When the two lists have the
same length they are paired in order; a pair where the ARM writes r(k) with k >= the Ghidra
argument count is a candidate (the callee may still ignore it: check the callee). Lists of
different length are reported only as a summary count. Float arguments (s0..) are not checked."""
import bisect, json, os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from build_decomp import virtual_this

dis_path = sys.argv[1]
out = open(sys.argv[2], "w") if len(sys.argv) > 2 else sys.stdout
m = json.load(open("../albw-decomp-ai/shared/eu_usa_map.json"))
u2e = {k: int(v["eu"], 16) for k, v in m.items()}
starts = sorted(u2e.values())
pat = re.compile(r"^\s*([0-9a-f]+):\s+[0-9a-f]{8}\s+(\S+)\s*(.*)$")
ins, order = {}, []
for l in open(dis_path):
    mm = pat.match(l)
    if mm:
        a = int(mm.group(1), 16)
        ins[a] = (mm.group(2), re.sub(r"<[^>]*>", "", mm.group(3).split("@")[0]).strip())
        order.append(a)
idx = {a: i for i, a in enumerate(order)}

native = set()
for d in os.listdir("native"):
    p = os.path.join("native", d)
    if os.path.isdir(p):
        for f in os.listdir(p):
            mm = re.match(r"func_([0-9A-Fa-f]{8})\.c$", f)
            if mm: native.add(mm.group(1).upper())

NOWRITE = ("str", "vstr", "cmp", "cmn", "tst", "teq", "push", "stm", "vcmp", "vmrs", "b", "bl", "blx", "bx", "pld")

def written(op, args):
    if op.startswith(NOWRITE) and not op.startswith(("bic",)): return set()
    if op.startswith(("vldm", "vld", "vmov", "vcvt", "vadd", "vsub", "vmul", "vdiv", "vneg", "vabs", "vsqrt", "vmla", "vmls", "vnm", "vfm")):
        # VFP ops write only s/d registers; vmov rX, sY writes rX
        mm = re.match(r"r([0-3])\b", args) if op.startswith("vmov") else None
        return {mm.group(1)} if mm else set()
    if op.startswith("ldm") and not re.match(r"r[0-3]!", args):
        regs = re.search(r"\{([^}]*)\}", args)
        return set(re.findall(r"\br([0-3])\b", regs.group(1))) if regs else set()
    if op.startswith(("ldm", "pop")):
        regs = re.search(r"\{([^}]*)\}", args)
        return set(re.findall(r"\br([0-3])\b", regs.group(1))) if regs else set()
    mm = re.match(r"r([0-3])\b", args)
    return {mm.group(1)} if mm else set()

def arm_sites(eu, end):
    """[(addr, max arg reg written + 1)] for every indirect call in EU eu..end"""
    targets = set()
    i = idx[eu]
    while i < len(order) and order[i] < end:
        op, args = ins[order[i]]
        if op.startswith("b") and not op.startswith(("bic", "bl", "bx")):
            mm = re.match(r"0x([0-9a-f]+)", args)
            if mm: targets.add(int(mm.group(1), 16))
        i += 1
    sites, regs, win = [], set(), []
    i = idx[eu]
    while i < len(order) and order[i] < end:
        a = order[i]
        op, args = ins[a]
        if a in targets: regs, win = set(), []
        if (op.startswith("blx") or op.startswith("bx")) and re.fullmatch(r"r\d+", args) and args != "lr":
            # the call target's load chain (ldr rT, [rX, #o]; ldr rX, [rY]) is not an argument:
            # walk back from the target register; a chain register's last write is dropped
            chain, want = set(), {args}
            last = {}
            for k, (wa, wop, wargs) in enumerate(win):
                for r in written(wop, wargs): last["r" + r] = k
            for k in range(len(win) - 1, -1, -1):
                wa, wop, wargs = win[k]
                for r in list(want):
                    if r in ("r0", "r1", "r2", "r3") and last.get(r) == k and r in ["r" + x for x in written(wop, wargs)]:
                        chain.add(r)
                    if ["r" + x for x in written(wop, wargs)] == [r] or (r not in ("r0", "r1", "r2", "r3") and re.match(r + r"\b", wargs)):
                        mm = re.search(r"\[(r\d+)", wargs) if wop.startswith("ldr") else None
                        want.discard(r)
                        if mm: want.add(mm.group(1))
            live = {r for r in regs if "r" + r not in chain}
            # a register read again after its last write in the window was scratch, not an argument
            for r in list(live):
                k0 = last.get("r" + r)
                if k0 is None: continue
                for wa, wop, wargs in win[k0 + 1:]:
                    w = ["r" + x for x in written(wop, wargs)]
                    if wop.startswith("mov") and w and w[0] in ("r0", "r1", "r2", "r3"):
                        continue   # `mov r1, r2`: copied into another argument register, still an argument
                    src = wargs.split(",", 1)[1] if w else wargs
                    if re.search(r"\br%s\b" % r, src):
                        live.discard(r); break
            n = max(int(r) for r in live) + 1 if live else 0
            off = None   # vtable / table offset of the call target's last load
            for wa, wop, wargs in reversed(win):
                if re.match(args + r"\b", wargs) and wop.startswith("ldr"):
                    mm = re.search(r"\[r\d+(?:, #(0x[0-9a-f]+|\d+))?\]$", wargs)
                    off = int(mm.group(1) or "0", 0) if mm else None
                    break
            sites.append((a, n, off))
            regs, win = set(), []
        elif op.startswith(("bl", "b")) and not op.startswith("bic"):
            regs, win = set(), []
        else:
            regs |= written(op, args)
            win.append((a, op, args))
        i += 1
    return sites

def split_args(s):
    depth, cur, outl = 0, "", []
    for ch in s:
        if ch == "(" : depth += 1
        if ch == ")" : depth -= 1
        if ch == "," and depth == 0:
            outl.append(cur); cur = ""
        else:
            cur += ch
    if cur.strip(): outl.append(cur)
    return outl

CALL = re.compile(r"\(\*+\(code \*+\)\s*")
def ghidra_sites(text):
    res = []
    for mm in CALL.finditer(text):
        # skip to the end of the callee expression: the matching ')' of the opening '('
        i = mm.start(); depth = 0
        while i < len(text):
            if text[i] == "(": depth += 1
            elif text[i] == ")":
                depth -= 1
                if depth == 0: break
            i += 1
        j = i + 1
        while j < len(text) and text[j] in " \n": j += 1
        if j >= len(text) or text[j] != "(": continue
        k = j; depth = 0
        while k < len(text):
            if text[k] == "(": depth += 1
            elif text[k] == ")":
                depth -= 1
                if depth == 0: break
            k += 1
        callee = text[mm.end():i]
        mo = re.match(r"\(\*.*\+ (0x[0-9a-f]+|\d+)\)$", callee.strip()) or None
        off = int(mo.group(1), 0) if mo else (0 if re.match(r"\*\w+$", callee.strip()) else None)
        res.append((len(split_args(text[j + 1:k])), re.sub(r"\s+", " ", text[mm.start():k + 1])[:110], off))
    return res

objs = json.load(open("build/decomp/report.json"))["objects"]
n_fn = n_cand = n_len = 0
for o in objs:
    rel = o.split("/build/decomp/obj/", 1)[-1][: -len(".final.o")]
    if not rel.startswith("ghidra_fallback/"): continue
    usa = os.path.basename(rel)[5:13].upper()
    if (usa in native and not os.environ.get("IAS_ALL")) or usa not in u2e: continue
    try: text = open("build/decomp/" + rel, errors="replace").read()
    except OSError: continue
    text = virtual_this(text)   # the build passes OBJ as `this` for `(**(code **)(*OBJ + K))()`
    g = ghidra_sites(text)
    if not g: continue
    eu = u2e[usa]
    if eu not in idx: continue
    k = bisect.bisect_right(starts, eu)
    end = starts[k] if k < len(starts) else eu + 0x4000
    a = arm_sites(eu, end)
    n_fn += 1
    # pair the sites per call-target offset (in address / source order within one offset)
    offs = {x[2] for x in a} | {x[2] for x in g}
    for o in offs:
        ao = [x for x in a if x[2] == o]
        go = [x for x in g if x[2] == o]
        if not ao or not go: continue
        if len(ao) == len(go):
            pairs = zip(ao, go)
        else:
            n_len += 1
            # unequal counts: flag ARM sites setting more registers than any Ghidra call at this offset
            mx = max(x[0] for x in go)
            pairs = [(x, max(go, key=lambda y: y[0])) for x in ao if x[1] > mx]
        for (addr, na, _), (ng, s, _) in pairs:
            if na > ng:
                n_cand += 1
                out.write("%s EU %06x: ARM sets r0..r%d, Ghidra passes %d: %s\n" % (usa, addr, na - 1, ng, s))
sys.stderr.write("%d functions with indirect calls, %d candidates, %d offset groups with unequal site counts\n" % (n_fn, n_cand, n_len))
