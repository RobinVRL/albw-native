#!/usr/bin/env python3
"""Write native/robust/PRIORITY.md from the analysis files in this directory:
  ranked.json / annotated.json (rank.py), real_regs.json (benign.py), bkind.json (bkind.py),
  prio_real.json (mkprio.py), livein.json (livein.py), empty_bodies.json (rank.py).
Run order: rank.py, benign.py, bkind.py (venv), mkprio.py, livein.py (venv), mkprio_md.py."""
import collections, glob, json, os, re

HERE = os.path.dirname(os.path.abspath(__file__))
ROBUST = os.path.dirname(HERE)
PORT = os.path.dirname(os.path.dirname(ROBUST))
J = lambda n: json.load(open(os.path.join(HERE, n)))
ann = J("annotated.json"); real = J("real_regs.json"); rk = J("ranked.json")
live = J("livein.json") if os.path.exists(os.path.join(HERE, "livein.json")) else {}
empty = J("empty_bodies.json")
done = {os.path.basename(f)[5:13] for f in glob.glob(os.path.join(ROBUST, "func_*.c"))}
manual = J("manual_verdicts.json") if os.path.exists(os.path.join(HERE, "manual_verdicts.json")) else {}


def converted(a):
    g = (glob.glob(os.path.join(PORT, "build/decomp/ghidra_fallback/*/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_analyzed2/func_%s.c" % a)) or
         glob.glob(os.path.join(PORT, "build/ghidra_extra/func_%s.c" % a)))
    return open(g[0], errors="replace").read() if g else ""


def verdict(a, r):
    k, reg = r.split("_", 1)
    lv = set(live.get(a, []))
    regs = {reg}
    if reg[0] == "d" and reg[1:].isdigit():
        n = int(reg[1:])
        regs = {"s%d" % (2 * n), "s%d" % (2 * n + 1)}
    if k == "in":
        if reg in ("r12", "lr"):
            return "%s: scratch/link register read (veneer, conditional-def or tail-call artefact; check)" % r
        if reg[0] == "d" and int(reg[1:]) >= 8:
            return "%s: callee-saved VFP register read unset (value preserved from the caller / across a call)" % r
        if regs & lv:
            return "%s: live-in at entry -> missing parameter" % r
        return "%s: not live-in -> a callee's result (callee typed void) or clobbered value" % r
    if k == "extraout":
        return "%s: read after a call -> callee's 2nd/float return, or a dead leftover" % r
    return "%s: callee-saved register read unset" % r


rows_real, rows_low = [], []
for a, cls, d, nc, tg, regs, why, eu in ann:
    ra = real.get(a, []) if "A" in cls else []
    t = converted(a)
    bb = "B" in cls and "(*UNRECOVERED_JUMPTABLE)()" in t
    parts = []
    for r in regs:
        if r not in ra:
            parts.append("%s: only fills an argument the callee never reads (benign)" % r)
        else:
            parts.append(verdict(a, r))
    if "B" in cls:
        parts.append("indirect tail call (PMF / state-machine dispatch) %s" %
                     ("called with NO arguments" if bb else "with arguments (probably fine natively)"))
    eff = ("A" if ra else "") + ("B" if bb else "")
    mv = manual.get(a, "")
    if mv:
        parts = [mv.upper()[:1] + mv[1:]] + parts
        if mv.startswith("benign"):
            eff = ""
    row = (a, eu, eff or cls.lower(), d, nc, tg, "; ".join(parts))
    (rows_real if eff else rows_low).append(row)
key = lambda r: (r[3] if r[3] is not None else 10 ** 6, -r[4], r[0])
rows_real.sort(key=key)
rows_low.sort(key=key)


def table(rows):
    L = ["| # | USA | EU | class | depth | callers | SDK | done | reason |", "|---|---|---|---|---|---|---|---|---|"]
    for i, (a, eu, c, d, nc, tg, why) in enumerate(rows, 1):
        L.append("| %d | %s | %s | %s | %s | %d | %s | %s | %s |" % (
            i, a, eu, c, "-" if d is None else d, nc, tg, "yes" if a in done else "", why.replace("|", "/")))
    return "\n".join(L)


cnt = collections.Counter(r[2] for r in rows_real)
raw = collections.Counter(x[1] for x in ann)
reach = sum(r[3] is not None for r in rows_real)
by_reg = collections.Counter()
for x in ann:
    s = set()
    for r in x[5]:
        k, reg = r.split("_", 1)
        s.add(k + "_" + (reg if reg in ("r1", "s0", "lr", "r12") else re.sub(r"\d+", "N", reg)))
    by_reg.update(s)
md = open(os.path.join(HERE, "PRIORITY_head.md")).read()
md = md.replace("@RAW_A@", str(raw["A"] + raw["AB"])).replace("@RAW_B@", str(raw["B"] + raw["AB"])) \
    .replace("@RAW_AB@", str(raw["AB"])).replace("@REAL@", str(len(rows_real))).replace("@REAL_A@", str(sum("A" in r[2] for r in rows_real))) \
    .replace("@REAL_B@", str(sum("B" in r[2] for r in rows_real))).replace("@LOW@", str(len(rows_low))) \
    .replace("@REACH@", str(reach)).replace("@NATIVE@", str(len(rk["native"]))).replace("@DONE@", str(len(done))) \
    .replace("@BYREG@", ", ".join("%s %d" % kv for kv in by_reg.most_common())) \
    .replace("@EMPTY@", str(len(empty))).replace("@ROOTS@", str(rk["roots"]))
md += "\n## Ranked list: real defects (%d)\n\n" % len(rows_real) + table(rows_real) + "\n"
md += "\n## Flagged but probably harmless natively (%d)\n\n" % len(rows_low)
md += "Every flagged register only feeds an argument that the callee (transitively) never reads, or the\n" \
      "indirect call already passes its arguments. Re-check if a callee's signature changes.\n\n" + table(rows_low) + "\n"
md += "\n## Ghidra bodies that are empty but the ARM function is not (%d)\n\n" % len(empty)
md += "Not class A/B by name, but just as wrong (example: 0036EAF8 returns a float computed from r1).\n\n"
md += "| USA | EU bytes | depth |\n|---|---|---|\n" + "\n".join(
    "| %s | %d | %s |" % (a, s, "-" if d is None else d) for a, s, d in sorted(empty, key=lambda e: (e[2] if e[2] is not None else 10**6, e[0]))) + "\n"
# rewritten functions
L = ["\n## Rewritten in native/robust (%d files)\n" % len(done), "| USA | what (first header line) |", "|---|---|"]
for f in sorted(glob.glob(os.path.join(ROBUST, "func_*.c"))):
    head = open(f, errors="replace").read(1200)
    m = re.search(r"/\*\s*(USA [0-9A-F]{8}[^\n]*)", head)
    L.append("| %s | %s |" % (os.path.basename(f)[5:13], (m.group(1) if m else "").replace("|", "/")[:160]))
md += "\n".join(L) + "\n"
# class B templates
if os.path.exists(os.path.join(HERE, "b_templates.json")):
    bt = J("b_templates.json")
    md += "\n## Class B templates (b_templates.json)\n\nByte-identical (modulo addresses) instances; " \
          "helpers in robust_sm.h / robust_pmf.h, generator gen_b_templates.py.\n\n| template | instances |\n|---|---|\n"
    md += "\n".join("| %s | %d |" % (k, len(v)) for k, v in sorted(bt.items(), key=lambda kv: -len(kv[1]))) + "\n"
# false no-return callees
if os.path.exists(os.path.join(HERE, "false_noreturn.json")):
    fn = J("false_noreturn.json")
    md += "\n## Callees Ghidra wrongly treats as \"does not return\" (false_noreturn.json)\n\n" \
          "Every caller's Ghidra C is cut off after the call (rest of the body and the return value lost).\n\n" \
          "| callee | really returns | truncated callers | evidence |\n|---|---|---|---|\n"
    for k, v in sorted(fn.items(), key=lambda kv: -len(kv[1].get("callers", []))):
        md += "| %s | %s | %d | %s |\n" % (k, v.get("returns"), len(v.get("callers", [])), str(v.get("evidence", "")).replace("|", "/")[:120])
open(os.path.join(ROBUST, "PRIORITY.md"), "w").write(md)
print("PRIORITY.md: %d real, %d low, %d done" % (len(rows_real), len(rows_low), len(done)))
