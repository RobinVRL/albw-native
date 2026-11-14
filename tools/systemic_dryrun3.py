#!/usr/bin/env python3
"""Dry run of the round-3 converter (no compile, no link): converts every Ghidra source of a dump
the way tools/build_decomp.py does, once with the current flags (V2+V3) and once with V4 on top,
into a scratch directory, and counts what V4 changes.

  python3 tools/systemic_dryrun3.py OUTDIR [--dump build/ghidra_analyzed4] [--extra build/ghidra_extra4]
                                    [--only ADDR,...] [--jobs N]

OUTDIR/v3/<ADDR>.c and OUTDIR/v4/<ADDR>.c, OUTDIR/report.json. Nothing under build/ is written.
"""
import argparse
import collections
import concurrent.futures as cf
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMP = os.path.join(os.path.dirname(ROOT), "albw-decomp-ai")
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

G = None
BD = None
SIGS = {}
EU2USA = {}
V64 = ("undefined8", "longlong", "ulonglong", "qword")


def load(v4):
    global G, BD
    os.environ["ALBW_CONVERT_V2"] = "1"
    os.environ["ALBW_CONVERT_V3"] = "1"
    if v4:
        os.environ["ALBW_CONVERT_V4"] = "1"
        os.environ.setdefault("ALBW_RETFIX", os.path.join(ROOT, "native", "robust", "systemic3", "retfix.json"))
    else:
        os.environ.pop("ALBW_CONVERT_V4", None)
    import importlib.util
    spec = importlib.util.spec_from_file_location("import_ghidra", os.path.join(DECOMP, "tools", "import_ghidra.py"))
    G = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(G)
    sys.modules["import_ghidra"] = G
    import build_decomp as bd
    BD = bd
    if v4:
        rt3 = os.path.join(ROOT, "native", "returns_this3.json")
        bd.RETURNS_THIS = set(json.load(open(rt3)))
    return G


def eu_fun_to_usa(text):
    def fix(m):
        a = m.group(1)
        if a in EU2USA:
            return "func_" + EU2USA[a]
        if int(a, 16) < 0x110000:
            return "func_%08X" % int(a, 16)
        return m.group(0)
    return re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", fix, text)


def convert(addr, text, v4):
    sigs = SIGS
    if v4:
        t = BD.void_tail_returns(eu_fun_to_usa(text), addr, sigs)
        return BD.rewrite(G.convert(BD.RE_MEMMOVE_FLOAT.sub(r"\1", BD.code_strings(BD.virtual_this(t))), addr, sigs))
    return BD.rewrite(eu_fun_to_usa(G.convert(BD.RE_MEMMOVE_FLOAT.sub(r"\1", BD.code_strings(BD.virtual_this(
        BD.void_tail_returns(text, addr, sigs)))), addr, sigs)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("out")
    ap.add_argument("--dump", default=os.path.join(ROOT, "build", "ghidra_analyzed4"))
    ap.add_argument("--extra", default=os.path.join(ROOT, "build", "ghidra_extra4"))
    ap.add_argument("--only", default="")
    ap.add_argument("--v4-only", action="store_true")
    a = ap.parse_args()
    global SIGS, EU2USA
    emap = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    EU2USA = {v["eu"].lower(): k for k, v in emap.items()}
    extra = json.load(open(os.path.join(ROOT, "native", "extra_functions.json")))
    EU2USA.update({eu.lower(): usa for usa, eu in extra.items()})
    files = {}
    for d in (a.extra, a.dump):  # the table dump wins
        for n in os.listdir(d):
            m = re.match(r"func_([0-9A-F]{8})\.c$", n)
            if m:
                files[m.group(1)] = os.path.join(d, n)
    only = set(x.upper() for x in a.only.split(",") if x)
    rep = {}
    texts = {}
    for v4 in ((True,) if a.v4_only else (False, True)):
        load(v4)
        SIGS = G.signatures(a.dump)
        for k, v in G.signatures(a.extra).items():
            SIGS.setdefault(k, v)
        SIGS.update(BD.SIG_OVERRIDES)
        if v4:
            for k in BD.SIG_OVERRIDES:
                G.v4_retfix().pop(k, None)
        tag = "v4" if v4 else "v3"
        od = os.path.join(a.out, tag)
        os.makedirs(od, exist_ok=True)
        st = collections.Counter()
        for addr, p in sorted(files.items()):
            if only and addr not in only:
                continue
            if v4 and BD.v4_stage() >= 2 and addr in BD.V4_NOT_FUNCTIONS:
                st["not_functions_skipped"] += 1
                continue
            text = open(p, encoding="utf-8", errors="replace").read()
            try:
                out = convert(addr, text, v4)
            except Exception as e:
                st["convert_failed"] += 1
                continue
            texts[(tag, addr)] = out
            with open(os.path.join(od, addr + ".c"), "w") as fh:
                fh.write(out)
        if v4:
            st.update({k: v for k, v in G.V4_STATS.items()})
            st["v4_pair_loads"] = G.v4_pair_loads.done
            st["v4_in_stack_aliased"] = G.v4_alias_in_stack.done
        st["bits_casts"] = G.bits_casts.done
        rep[tag] = dict(st)
        rep[tag + "_sigs_64bit_return"] = sum(1 for s in SIGS.values() if s.split()[0] in V64)
    # ---- metrics on both outputs
    rc = json.load(open(os.path.join(ROOT, "native", "robust", "systemic3", "retclass.json")))
    retfix = json.load(open(os.environ["ALBW_RETFIX"]))
    for tag in ("v3", "v4"):
        m = collections.Counter()
        files64 = collections.Counter()
        for (t, addr), out in texts.items():
            if t != tag:
                continue
            body = out[out.find("\n{"):] if "\n{" in out else out
            # callers declaring a retfix callee float, and the pass-through assignments
            for f in set(re.findall(r"extern float (func_[0-9A-F]{8})\(", out)):
                if f in retfix:
                    m["files_declaring_void_callee_float"] += 1
                    m["sites_assigning_void_callee"] += len(re.findall(r"=\s*(?:\([\w ]+\)\s*)?%s\s*\(" % f, body))
            # 64-bit returns declared as int in callers
            for f in ("func_00110710", "func_001104E4", "func_00114608", "func_0011624C", "func_00115F34", "func_00116224"):
                d = re.search(r"extern (\w+) %s\(" % f, out)
                if d:
                    files64[(f, d.group(1))] += 1
            m["sites_calling_64bit_callee_declared_64bit"] += sum(
                len(re.findall(r"\b%s\s*\(" % f, body)) for f in set(re.findall(r"extern (?:undefined8|longlong|ulonglong|qword) (func_[0-9A-F]{8})\(", out)))
            m["pair_load_value_casts"] += len(re.findall(r"\(float\)\*\(undefined8 \*\)", out))
            m["files_calling_FUN_undeclared"] += bool(re.search(r"\bFUN_[0-9a-f]{8}\s*\(", body) and
                                                       not re.search(r"extern [^;]*\bFUN_[0-9a-f]{8}\b", out))
            m["files_calling_undeclared_func"] += bool(
                set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", body)) - set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", out[:out.find("\n{")] if "\n{" in out else "")) - {"func_" + addr})
            frame_slots = set(re.findall(r"#define (stack0x\w+) ", out))
            if frame_slots:
                m["files_with_stack0x_frame_slot"] += 1
                if re.search(r"^\s+\w[\w \*]*\bin_stack_[0-9a-f]{8};", out, re.M):
                    m["files_with_unaliased_in_stack"] += 1
            m["in_stack_declared_locals"] += len(re.findall(r"^\s+\w[\w \*]*\bin_stack_[0-9a-f]{8};", out, re.M))
        rep[tag + "_metrics"] = dict(m)
        rep[tag + "_64bit_helper_decls"] = {"%s %s" % k: v for k, v in sorted(files64.items())}
    json.dump(rep, open(os.path.join(a.out, "report.json"), "w"), indent=1, sort_keys=True)
    print(json.dumps(rep, indent=1, sort_keys=True))


if __name__ == "__main__":
    main()
