import json, re, glob, os, collections
import os as _os; _os.chdir(_os.path.dirname(_os.path.abspath(__file__)))
PORT = "."
ann = json.load(open("annotated.json")); real = json.load(open("real_regs.json"))
bk = json.load(open("bkind.json")); xs = json.load(open("extraout_src.json"))
rk = json.load(open("ranked.json"))
def bargs(a):
    p = (glob.glob(os.path.join(PORT, "build/decomp/ghidra_fallback/*/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_analyzed2/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_extra/func_%s.c" % a)))[0]
    return "(*UNRECOVERED_JUMPTABLE)()" in open(p).read()
rows_real, rows_low = [], []
for a, cls, d, nc, tg, regs, why, eu in ann:
    ra = real.get(a, []) if "A" in cls else []
    bb = "B" in cls and bargs(a)
    reasons = []
    for r in regs:
        k, reg = r.split("_", 1)
        if r not in ra:
            reasons.append("%s only fills an argument the callee ignores (benign)" % r)
        elif k == "extraout":
            src = [f for f, rr in xs.get(a, []) if rr == r]
            reasons.append("%s read after %s (2nd return register / clobbered value)" % (r, ",".join(sorted(set(src))) or "a call"))
        elif k == "unaff":
            reasons.append("%s callee-saved reg read unset (caller's value / missing param)" % r)
        else:
            reasons.append("%s %s input not modelled (missing param or callee return)" % (r, "float" if reg[0] in "sdq" else "register"))
    if "B" in cls:
        reasons.append("indirect tail call (PMF/state-machine dispatch) %s" % ("called with NO arguments" if bb else "with arguments (likely OK natively)"))
    c = ("A" if ra else "") + ("B" if bb else "")
    row = dict(a=a, eu=eu, cls=cls, eff=c, d=d, nc=nc, tag=tg, why="; ".join(reasons))
    (rows_real if c else rows_low).append(row)
key = lambda r: (r["d"] if r["d"] is not None else 10**6, -r["nc"], r["a"])
rows_real.sort(key=key); rows_low.sort(key=key)
json.dump(rows_real, open("prio_real.json", "w"))
def table(rows, start=1):
    L = ["| # | USA | EU | class | BFS depth | callers | SDK tag | reason |", "|---|---|---|---|---|---|---|---|"]
    for i, r in enumerate(rows, start):
        L.append("| %d | %s | %s | %s | %s | %d | %s | %s |" % (i, r["a"], r["eu"], r["eff"] or r["cls"],
                 "-" if r["d"] is None else r["d"], r["nc"], r["tag"], r["why"].replace("|", "/")))
    return L
cnt = collections.Counter(r["cls"] for r in rows_real + rows_low)
eff = collections.Counter(r["eff"] for r in rows_real)
reach = sum(r["d"] is not None for r in rows_real)
print(cnt, eff, reach, len(rows_low))
json.dump(dict(cnt=cnt, eff=eff, reach=reach, low=len(rows_low), real=len(rows_real)), open("prio_counts.json", "w"))
open("prio_table_real.md", "w").write("\n".join(table(rows_real)) + "\n")
open("prio_table_low.md", "w").write("\n".join(table(rows_low)) + "\n")
