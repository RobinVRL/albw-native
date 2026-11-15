#!/usr/bin/env python3
"""Corrected Ghidra sources for the USA functions whose old eu_usa_map.json entry was wrong.

The decomp's map audit (albw-decomp-ai tools/eu_map_audit.py, commit 7b09bf84) moved 240 entries.
For 124 of those the build compiles a Ghidra dump of the WRONG EU address (the dump that
build/ghidra_analyzed5 holds under func_<USA>.c). This tool takes a fresh dump of the corrected
EU addresses (ghidra_dump.py on a private, -readOnly copy of the project, see PLAN.md
"EU/USA map fix: integration") and

  1. applies tools/ghidra_name_fixes.json to the raw text in ONE pass (the Ghidra project's
     names come from the old map), then forces the definition's own name to func_<USA>
     (the function may be freshly created under a name that is itself a fix key);
  2. writes the result to build/ghidra_mapfix/func_<USA>.c (ghidra_analyzed5 layout, marked
     with a `// MAPFIX` second line: never apply the name fixes to these files again);
  3. with --compile, runs build_decomp's conversion chain (as tools/reconvert_one.py, but with
     the CORRECTED map in eu_fun_to_usa and build_decomp's own GHIDRA_NAME_FIXES disabled,
     because after step 1 those two names are correct) into a scratch OUT directory (never
     build/decomp) and compiles each source with build_one, reporting which compile.

  python3 tools/ghidra_mapfix.py --inputs <dir>     shard.json (the USA starts to dump),
        bogus_eu.json (old-map EU addresses that are no function start), idx_none.json
  (Ghidra on a project COPY, -readOnly; see PLAN.md "EU/USA map fix: integration")
  python3 tools/ghidra_mapfix.py <raw dump dir> [--compile <scratch dir>]
"""
import json
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
B = os.path.join(ROOT, "build")
DECOMP = os.path.abspath(os.path.join(ROOT, "..", "albw-decomp-ai"))
OUT_RAW = os.path.join(B, "ghidra_mapfix")
FIXES = json.load(open(os.path.join(ROOT, "tools", "ghidra_name_fixes.json")))
RE_FIX = re.compile(r"\b(%s)\b" % "|".join(sorted(FIXES)))
RE_HDR = re.compile(r"^// USA ([0-9A-F]{8}) <- EU ([0-9A-F]{8})")
RE_DEF = re.compile(r"^([A-Za-z_][^;/(\n]*?\b)((?:thunk_)?(?:func|FUN)_[0-9A-Fa-f]{8})(\s*\()", re.M)


def fix_raw(text, usa):
    lines = text.split("\n", 1)
    if not RE_HDR.match(lines[0]):
        raise ValueError("no header")
    body = RE_FIX.sub(lambda m: FIXES[m.group(1)], lines[1])  # one simultaneous pass
    body = RE_DEF.sub(lambda m: m.group(1) + "func_" + usa + m.group(3), body, count=1)
    return lines[0] + "\n// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)\n" + body


def inputs(d):
    """The dump's inputs, from the corrected map, its `was` fields and the current build report."""
    os.makedirs(d, exist_ok=True)
    emap = json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json")))
    old = {u: e.get("was", e["eu"]) for u, e in emap.items()}
    claimed = {}
    for u in sorted(old):  # albw_prepare / ghidra_dump: the first USA start claims an EU address
        claimed.setdefault(old[u], u)
    new_eu = {e["eu"] for e in emap.values()}
    bogus = sorted(x for x in claimed if x not in new_eu)
    rep = json.load(open(os.path.join(B, "decomp", "report.json")))
    ghidra_built = set()
    for o in rep["objects"]:
        m = re.search(r"/ghidra_fallback/[^/]+/[0-9A-F]{3}/func_([0-9A-F]{8})\.c\.final\.o$", o)
        if m:
            ghidra_built.add(m.group(1))
    todo = sorted(u for u in emap if "was" in emap[u] and u in ghidra_built)
    json.dump({"starts": [int(u, 16) for u in todo]}, open(os.path.join(d, "shard.json"), "w"))
    json.dump(bogus, open(os.path.join(d, "bogus_eu.json"), "w"))
    json.dump([], open(os.path.join(d, "idx_none.json"), "w"))
    print("ghidra_mapfix: %d starts to dump, %d bogus EU addresses -> %s" % (len(todo), len(bogus), d))


def main():
    args = sys.argv[1:]
    if args and args[0] == "--inputs":
        return inputs(args[1])
    raw_dir = args[0]
    scratch = args[args.index("--compile") + 1] if "--compile" in args else None
    os.makedirs(OUT_RAW, exist_ok=True)
    done = []
    for f in sorted(os.listdir(raw_dir)):
        m = re.match(r"func_([0-9A-F]{8})\.c$", f)
        if not m:
            continue
        text = open(os.path.join(raw_dir, f), encoding="utf-8", errors="replace").read()
        with open(os.path.join(OUT_RAW, f), "w") as fh:
            fh.write(fix_raw(text, m.group(1)))
        done.append(m.group(1))
    print("ghidra_mapfix: %d raw sources -> %s" % (len(done), OUT_RAW))
    if scratch:
        compile_all(done, os.path.abspath(scratch))


def compile_all(addrs, scratch):
    env = {"ALBW_CONVERT_V2": "1", "ALBW_CONVERT_V3": "1", "ALBW_CONVERT_V4": "1", "ALBW_V4_STAGE": "2",
           "ALBW_FCONV": "1", "ALBW_PMF_THIS": "1",
           "ALBW_RETFIX": os.path.join(ROOT, "native", "robust", "systemic3", "retfix.json")}
    for k, v in env.items():
        os.environ.setdefault(k, v)
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import build_decomp as bd
    bd.OUT = scratch  # never build/decomp
    os.makedirs(os.path.join(scratch, "shared"), exist_ok=True)
    inc = os.path.join(scratch, "shared", "include")
    if not os.path.exists(inc):
        os.symlink(os.path.join(B, "decomp", "shared", "include"), inc)
    bd.RE_GHIDRA_NAME_FIX = re.compile(r"(?!)")  # the old two-entry list: superseded by step 1
    ig = bd.load_decomp_tool(DECOMP, "import_ghidra")
    sys.modules["import_ghidra"] = ig
    # the interim converter fixes of tools/reconvert_one.py (declaration regex inside the
    # declaration block), returns-this list and callee signatures: same chain as that tool
    import importlib.util
    spec = importlib.util.spec_from_file_location("_rc", os.path.join(ROOT, "tools", "reconvert_one.py"))
    src_rc = open(spec.origin).read()
    decl_cls = src_rc[src_rc.index("class _DeclBlockOnly"):src_rc.index("ig.LOCAL_DECL = ")]
    ns = {"ig": ig, "re": re}
    exec(decl_cls, ns)
    ig.LOCAL_DECL = ns["_DeclBlockOnly"](ig.LOCAL_DECL)
    rt3 = os.path.join(ROOT, "native", "returns_this3.json")
    if os.path.exists(rt3):
        bd.RETURNS_THIS = set(json.load(open(rt3)))
    # eu_fun_to_usa with the CORRECTED map (read from the decomp repository now)
    eu2usa = {v["eu"].lower(): k for k, v in json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json"))).items()}
    xf = os.path.join(B, "systemic3", "extra_functions.json")
    if os.path.exists(xf):
        for usa, eu in json.load(open(xf)).items():
            eu2usa.setdefault(eu.lower(), usa)

    def eu_fun_to_usa(text):
        def fix(m):
            a = m.group(1)
            if a in eu2usa:
                return "func_" + eu2usa[a]
            if int(a, 16) < 0x110000:
                return "func_%08X" % int(a, 16)
            return m.group(0)
        return re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", fix, text)
    sigs = ig.signatures(os.path.join(B, "ghidra_analyzed5"))
    extra_dir = os.path.join(B, "ghidra_extra5")
    if os.path.isdir(extra_dir):
        for k, v in ig.signatures(extra_dir).items():
            sigs.setdefault(k, v)
    for k, v in ig.signatures(OUT_RAW).items():  # the corrected bodies' prototypes win
        sigs[k] = v
    sigs.update(bd.SIG_OVERRIDES)
    for k in bd.SIG_OVERRIDES:
        ig.v4_retfix().pop(k, None)
    res = {}
    for addr in addrs:
        rel = os.path.join("ghidra_fallback", "ghidra_mapfix_v4", addr[:3], "func_%s.c" % addr)
        src = os.path.join(scratch, rel)
        os.makedirs(os.path.dirname(src), exist_ok=True)
        text = open(os.path.join(OUT_RAW, "func_%s.c" % addr), encoding="utf-8", errors="replace").read()
        try:
            text = bd.rewrite(ig.convert(bd.RE_MEMMOVE_FLOAT.sub(r"\1", bd.code_strings(bd.virtual_this(
                bd.void_tail_returns(eu_fun_to_usa(text), addr, sigs)))), addr, sigs))
        except Exception as e:
            res[addr] = {"ok": False, "error": "convert: %s" % e}
            continue
        with open(src, "w") as fh:
            fh.write(text)
        syn = ["clang", "--target=" + bd.TARGET, "-fsyntax-only", "-w", "-ferror-limit=0", "-include", bd.COMPAT,
               "-msse2", "-mfpmath=sse", "-I", inc, "-I", os.path.dirname(src),
               "-DALBW_V4", "-std=gnu11", "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion",
               "-Wno-error=incompatible-pointer-types", "-Wno-error=incompatible-function-pointer-types",
               "-Wno-error=return-type", src]
        for _ in range(8):
            err = bd.subprocess.run(syn, capture_output=True, text=True).stderr
            if not bd.RE_CF_ERR.search(err):
                break
            new = bd.cf_error_rewrite(text, err)
            if new == text:
                break
            text = new
            with open(src, "w") as fh:
                fh.write(text)
        r = bd.build_one((rel, [addr], None))
        res[addr] = {"ok": bool(r.get("ok")), "error": (r.get("error") or "")[:300], "source": rel}
        print("%s: %s %s" % (addr, "ok" if r.get("ok") else "FAILED", res[addr]["error"][:200]))
    json.dump(res, open(os.path.join(scratch, "mapfix_compile.json"), "w"), indent=1, sort_keys=True)
    print("ghidra_mapfix: %d/%d compile" % (sum(r["ok"] for r in res.values()), len(res)))


if __name__ == "__main__":
    main()
