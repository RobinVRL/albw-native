#!/usr/bin/env python3
"""Entry live-in registers, round 3: native/robust/tools/livein2.py + the float argument
registers it misses behind `vpush {d0}` / d-register reads (native/gameplay/tools/livein_dregs.py).

  ../albw-decomp-ai/.venv/bin/python tools/livein3.py        (~1-2 min on top of livein2.json)

livein2 loses s0/s1 when a function saves them with `vpush {d0}` (capstone lists the pushed
registers as written) or first reads them through a d register (`vmov.f64 d8, d0`): the sweeps
004A7620 / 004A9F98, 002B0D7C, ... then get no float parameter and every caller drops the float.
livein_dregs.analyse() redoes the entry analysis for s0-s15 only (push lists read-only, ldm/pop
lists written, calls end the window). Here its strong evidence (a register read by a real
instruction, wide or narrow; not only saved by vpush) is folded into livein2's sets:
  final  livein2 final + s0..s(k) for the highest strong dregs register sk (AAPCS-VFP assigns
         float arguments positionally, so every lower s register is a parameter too)
  may    livein2 may + the same (the upper bound must contain the lower one)
  why    {"sN": "dregs: <class> <first instruction>"} for the added registers
Output tools/../native/robust/tools/livein3.json (same format as livein2.json); livein2.json is
read, never written. This lives in tools/ and not next to livein2.py on purpose: a new or changed
.py in native/robust/tools makes tools/systemic_rebuild2.sh recompute the round-2 tables against
the already-fixed Ghidra project (which empties native/robust/systemic2/params.json).
"""
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "native", "gameplay", "tools"))
import livein_dregs as D  # noqa: E402

LI2 = os.path.join(ROOT, "native", "robust", "tools", "livein2.json")
LI3 = os.path.join(ROOT, "native", "robust", "tools", "livein3.json")
ORDER = ["r0", "r1", "r2", "r3"] + ["s%d" % i for i in range(16)]


def strong_regs(usa):
    """{sN: 'class insn'} read by a real instruction at entry (wide or narrow) in a function that
    shows the vpush/d-register pattern; {} when the pattern is absent."""
    r = D.analyse(usa)
    if r is None or not r["complete"]:
        return {}
    live = r["live"]
    if not any(("wide" in v or "vpush" in v) for v in live.values()):
        return {}
    out = {}
    for s, cls in live.items():
        real = {k: v for k, v in cls.items() if k != "vpush"}
        if real:
            k = "wide" if "wide" in real else "narrow"
            out[s] = "%s %s" % (k, real[k])
    return out


def main():
    lv = json.load(open(LI2))
    added = {}
    for usa in sorted(lv):
        if usa not in D.usa2eu:
            continue
        st = strong_regs(usa)
        if not st:
            continue
        rec = lv[usa]
        have = set(rec["final"])
        top = max(int(s[1:]) for s in st)
        new = ["s%d" % k for k in range(top + 1) if "s%d" % k not in have]
        if not new:
            continue
        rec["final"] = sorted(have | set(new), key=ORDER.index)
        rec["may"] = sorted(set(rec.get("may", [])) | set(rec["final"]), key=ORDER.index)
        why = rec.setdefault("why", {})
        for s in new:
            why[s] = "dregs: " + st.get(s, "below %s (positional)" % ("s%d" % top))
        rec["dregs"] = new
        added[usa] = new
    json.dump(lv, open(LI3, "w"), indent=0, sort_keys=True)
    print("livein3: %d functions gained float argument registers from the vpush/d-register "
          "pattern: %s" % (len(added), " ".join("%s+%s" % (u, ",".join(v)) for u, v in sorted(added.items()))),
          file=sys.stderr)


if __name__ == "__main__":
    main()
