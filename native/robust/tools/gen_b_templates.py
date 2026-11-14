#!/usr/bin/env python3
"""Emit native/robust-style rewrites for class-B template instances (see b_templates.json).

  .venv/bin/python native/robust/tools/gen_b_templates.py [--out DIR] (--all | USA ...)

For every requested USA address:
  1. its template id is looked up in b_templates.json (T1, T4, T2_argsN, T3_argsN);
  2. its EU disassembly is normalised (branch targets >= 5 hex digits and pc-relative pool
     offsets masked, pool words reduced to `.word`) and must equal the template reference's
     sequence exactly (so all small field offsets / registers are identical);
  3. the per-template constants are checked: the set of direct callees and pool data words
     (T1: data_006F5988 + func_0010BEB4; T4: func_003931EC; T2/T3: none);
  4. it is refused if a definition of func_<USA> already exists in native/game, native/sdk or
     native/robust (or in --out);
then a file func_<USA>.c with the standard header and a one-line helper call is written to --out
(default native/robust). Nothing else is written. Exit status 1 if any address was refused.
"""
import argparse, glob, json, os, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROBUST = os.path.dirname(HERE)
NATIVE = os.path.dirname(ROBUST)
sys.path.insert(0, HERE)
import armdis  # noqa: E402

# template id -> (reference USA, reference EU range text, header, return, params, call, constants,
#                 description, wrong, args note)
T = {
    "T1": dict(ref="0065B158", hdr="robust_sm.h", ret="void", params="char *sm, uint32_t newState",
               call="albw_sm_change_state(sm, newState);",
               consts={"data_006F5988", "func_0010BEB4"},
               what="state machine changeState(sm, newState)",
               doc="documented and verified in func_0065B158.c, body in robust_sm.h",
               wrong="the exit-handler call (blx r2) and the enter-handler tail call (bx r1)\n"
                     " * were emitted as `(*UNRECOVERED_JUMPTABLE)()` with no arguments (garbage `this` natively)",
               detail="all field offsets are the template's\n * (+0x04/+0x05/+0x08/+0x0C/+0x10/+0x14/+0x18/+0x20, 0x24-byte entries); instance constants:\n"
                      " * pool word data_006F5988 (SafeString vtable), callee func_0010BEB4"),
    "T4": dict(ref="00625250", hdr="robust_pmf.h", ret="void",
               params="char *owner, int32_t newState, uint8_t flag",
               call="albw_owner_sm_change_state_if_different(owner, newState, flag);",
               consts={"func_003931EC"},
               what="owner->changeStateIfDifferent(newState, flag)",
               doc="documented in func_00625250.c, body in robust_pmf.h",
               wrong="both handler calls (blx r2, tail bx r1) were emitted as\n"
                     " * `(*UNRECOVERED_JUMPTABLE)()` with no arguments (garbage `this` natively)",
               detail="instance constants: state machine at owner+0x960, flag byte at\n"
                      " * owner+0x988, enter table read from owner+0x978, callee func_003931EC"),
}
for n, ref in ((0, "0068C4BC"), (1, "00682734"), (2, "00687250")):
    args = ["char *dlg"] + ["uintptr_t a%d" % i for i in range(1, n + 1)]
    T["T2_args%d" % n] = dict(
        ref=ref, hdr="robust_pmf.h", ret="uint32_t", params=", ".join(args),
        call="return albw_delegate_invoke_r%d(%s);" % (n, ", ".join(["dlg"] + ["a%d" % i for i in range(1, n + 1)])),
        consts=set(), what="R Delegate::invoke(%s) const (tail call through the pointer-to-member at +8, object at +4; 0 if unset)"
        % ", ".join("a%d" % i for i in range(1, n + 1)),
        doc="body in robust_pmf.h",
        wrong="the tail call was emitted as `(*UNRECOVERED_JUMPTABLE)()` with no arguments\n"
              " * (garbage `this` natively)",
        detail="r1..r%d are never written before the tail bx, so they are forwarded\n"
               " * (arity %d); the target's r0 is returned" % (n, n) if n else
               "r1..r3 are all scratch at the tail bx (arity 0); the target's r0 is returned")
    args3 = ["char *dlg"] + ["uintptr_t a%d" % i for i in range(1, n + 1)]
    T["T3_args%d" % n] = dict(
        ref={0: "0068A5A4", 1: "0068B328", 2: "0068BC7C"}[n], hdr="robust_pmf.h", ret="void", params=", ".join(args3),
        call="albw_delegate_invoke_v%d(%s);" % (n, ", ".join(["dlg"] + ["a%d" % i for i in range(1, n + 1)])),
        consts=set(), what="void Delegate::invoke(%s) const (tail call through the pointer-to-member at +8, object at +4)"
        % ", ".join("a%d" % i for i in range(1, n + 1)),
        doc="body in robust_pmf.h",
        wrong="the tail call was emitted as `(*UNRECOVERED_JUMPTABLE)()` with no arguments\n"
              " * (garbage `this` natively)",
        detail="r1..r%d are never written before the tail bx, so they are forwarded\n * (arity %d)" % (n, n) if n else
               "r1..r3 are all scratch at the tail bx (arity 0)")


def shape(usa):
    out = []
    for l in armdis.dis(usa, 400):
        l = l.split(":", 1)[1].split(";")[0]
        if ".word" in l:
            l = ".word"
        l = re.sub(r"#0x[0-9a-f]{5,}", "#T", l)
        l = re.sub(r"\[pc, #0x[0-9a-f]+\]", "[pc]", l)
        out.append(l.strip())
    return out


def constants(usa):
    return set(re.findall(r"; =?(func_[0-9A-F]{8}|data_[0-9A-F]{8})", "\n".join(armdis.dis(usa, 400))))


DEF = r"^[^\n;#/*]*?\bfunc_%s\s*\([^;{]*\)\s*\{"


def defined_in(usa, dirs):
    rx = re.compile(DEF % usa, re.M)
    hits = []
    for d in dirs:
        for f in glob.glob(os.path.join(d, "*.c")):
            if rx.search(open(f, errors="replace").read()):
                hits.append(f)
    return hits


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addrs", nargs="*")
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--out", default=ROBUST)
    a = ap.parse_args()
    groups = json.load(open(os.path.join(HERE, "b_templates.json")))
    tid = {x: k for k, v in groups.items() for x in v if k in T}
    addrs = [x for k, v in groups.items() for x in v] if a.all else [x.upper() for x in a.addrs]
    os.makedirs(a.out, exist_ok=True)
    refshape = {k: shape(v["ref"]) for k, v in T.items()}
    stats, refused = {}, []
    dirs = [os.path.join(NATIVE, "game"), os.path.join(NATIVE, "sdk"), ROBUST, a.out]
    for usa in addrs:
        k = tid.get(usa)
        if k is None:
            refused.append((usa, "not in a verified template group"))
            continue
        t = T[k]
        st = stats.setdefault(k, {"ok": 0, "refused": 0, "verified": 0, "defined": 0})
        if shape(usa) != refshape[k]:
            refused.append((usa, "%s: disassembly differs from reference %s" % (k, t["ref"])))
            st["refused"] += 1
            continue
        c = constants(usa)
        if c != t["consts"]:
            refused.append((usa, "%s: constants %s != %s" % (k, sorted(c), sorted(t["consts"]))))
            st["refused"] += 1
            continue
        st["verified"] += 1
        hits = defined_in(usa, dirs)
        if hits:
            refused.append((usa, "already defined in %s" % ", ".join(os.path.relpath(h, NATIVE) for h in hits)))
            st["defined"] += 1
            continue
        eu = armdis.usa2eu[usa]
        end = armdis.dis(usa, 400)[-1][:8]
        reu = armdis.usa2eu[t["ref"]]
        text = f"""/* USA {usa} <- EU {eu:08X}: {t['what']}, class-B template {k}
 * (tools/b_templates.json; {t['doc']}). Generated by tools/gen_b_templates.py.
 *
 * What was wrong in Ghidra: {t['wrong']}.
 *
 * Verified: EU {eu:08X}-{end} normalises (branch targets and pc-relative pool offsets masked) to
 * exactly the {k} instruction sequence of EU {reu:08X} (USA {t['ref']}); {t['detail']}.
 * Confidence: high. */
#include "{t['hdr']}"

{t['ret']} func_{usa}({t['params']}) {{
    {t['call']}
}}
"""
        open(os.path.join(a.out, "func_%s.c" % usa), "w").write(text)
        st["ok"] += 1
    for k in sorted(stats):
        s = stats[k]
        print("%-9s verified %4d  written %4d  already defined %4d  failed verification %4d"
              % (k, s["verified"], s["ok"], s["defined"], s["refused"]))
    for usa, why in refused:
        print("REFUSED %s: %s" % (usa, why))
    return 1 if refused else 0


if __name__ == "__main__":
    sys.exit(main())
