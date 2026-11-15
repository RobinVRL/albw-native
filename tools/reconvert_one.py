#!/usr/bin/env python3
"""Interim: convert and build single functions from a fresh Ghidra dump (round-3 stage-2 settings).

For functions whose dump failed in the systemic run (decompiler timeout: BOOT_LOG stop 103,
func_001EA96C) and were dumped again by hand (tools/ghidra/albw_decomp_one.py or ghidra_dump.py
on a one-start shard with a long ALBW_DECOMP_TIMEOUT). Put the new dump at
build/ghidra_analyzed5/func_<USA>.c, then

  python3 tools/reconvert_one.py <USA hex> ...

runs the conversion chain of tools/build_decomp.py main() / ghidra_source() (same environment as
tools/systemic_rebuild3.sh step 5) into build/decomp/ghidra_fallback/ghidra_analyzed5_v4/, builds
the object with build_one (stage-2 rewrites, compile-fix retries) and adds it to
build/decomp/report.json, which tools/link.sh links from. The full rebuild redoes all of this.
"""
import glob, json, os, re, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
B = os.path.join(ROOT, "build")
DECOMP = os.path.abspath(os.path.join(ROOT, "..", "albw-decomp-ai"))
env = {"ALBW_CONVERT_V2": "1", "ALBW_CONVERT_V3": "1", "ALBW_CONVERT_V4": "1", "ALBW_V4_STAGE": "2",
       "ALBW_FCONV": "1", "ALBW_PMF_THIS": "1",
       "ALBW_RETFIX": os.path.join(ROOT, "native", "robust", "systemic3", "retfix.json")}
for k, v in env.items():
    os.environ.setdefault(k, v)
sys.path.insert(0, os.path.join(ROOT, "tools"))
import build_decomp as bd

ig = bd.load_decomp_tool(DECOMP, "import_ghidra")
sys.modules["import_ghidra"] = ig


class _DeclBlockOnly:
    """import_ghidra.LOCAL_DECL, restricted to the declaration block of the function (from the
    body's `{` to the first blank line). The plain regex also takes the last line of a wrapped
    expression, `local_1d88 * local_1d88;` or `fVar12 * local_44;`, for a declaration and puts a
    #define into the middle of the statement (001EA96C, 004DA834). The converter's own fix
    belongs in import_ghidra.py (other repo); this is the interim."""
    def __init__(self, rx):
        self.rx = rx

    def finditer(self, text):
        m = ig.BODY_OPEN.search(text)
        if not m:
            return self.rx.finditer(text)
        e = re.search(r"\n[ \t]*\n", text[m.end():])
        end = m.end() + e.start() if e else len(text)
        return (d for d in self.rx.finditer(text) if m.end() <= d.start() < end)

    def __getattr__(self, k):
        return getattr(self.rx, k)


ig.LOCAL_DECL = _DeclBlockOnly(ig.LOCAL_DECL)
rt3 = os.path.join(ROOT, "native", "returns_this3.json")
if os.path.exists(rt3):
    bd.RETURNS_THIS = set(json.load(open(rt3)))
dump = os.path.join(B, "ghidra_analyzed5")
extra_dir = os.path.join(B, "ghidra_extra5")
eu2usa = {v["eu"].lower(): k for k, v in json.load(open(os.path.join(DECOMP, "shared", "eu_usa_map.json"))).items()}
xf = os.path.join(B, "systemic3", "extra_functions.json")
if os.path.exists(xf):
    eu2usa.update({eu.lower(): usa for usa, eu in json.load(open(xf)).items()})


def eu_fun_to_usa(text):
    def fix(m):
        a = m.group(1)
        if a in eu2usa:
            return "func_" + eu2usa[a]
        if int(a, 16) < 0x110000:
            return "func_%08X" % int(a, 16)
        return m.group(0)
    return re.sub(r"\b(?:thunk_)?FUN_([0-9a-f]{8})\b", fix, text)


sigs = ig.signatures(dump)
if os.path.isdir(extra_dir):
    for k, v in ig.signatures(extra_dir).items():
        sigs.setdefault(k, v)
sigs.update(bd.SIG_OVERRIDES)
for k in bd.SIG_OVERRIDES:
    ig.v4_retfix().pop(k, None)

rp = os.path.join(bd.OUT, "report.json")
rep = json.load(open(rp))
bad = 0
args = sys.argv[1:]
convert = "--no-convert" not in args  # --no-convert: rebuild the converted source as it is
for addr in [a.upper() for a in args if not a.startswith("--")]:
    raw = os.path.join(dump, "func_%s.c" % addr)
    rel = os.path.join("ghidra_fallback", "ghidra_analyzed5_v4", addr[:3], "func_%s.c" % addr)
    src = os.path.join(bd.OUT, rel)
    if convert:
        text = open(raw, encoding="utf-8", errors="replace").read()
        text = bd.rewrite(ig.convert(bd.RE_MEMMOVE_FLOAT.sub(r'\1', bd.code_strings(bd.virtual_this(
            bd.void_tail_returns(eu_fun_to_usa(text), addr, sigs)))), addr, sigs))
        with open(src, "w") as fh:
            fh.write(text)
    else:
        text = open(src).read()
        os.utime(src)  # build_one recompiles only newer sources
    # build_one's compile-fix retries see 3 errors per round (8 rounds); a large function has
    # hundreds of sites (001EA96C: 320 float->pointer casts): the same rewrite on all of them
    syn = ["clang", "--target=" + bd.TARGET, "-fsyntax-only", "-w", "-ferror-limit=0", "-include", bd.COMPAT,
           "-msse2", "-mfpmath=sse", "-I", os.path.join(bd.OUT, "shared", "include"), "-I", os.path.dirname(src),
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
    obj = os.path.join(bd.OUT, "obj", rel + ".final.o")
    print("%s: %s %s" % (addr, "ok" if r.get("ok") else "FAILED", (r.get("error") or "")[:400]))
    if r.get("ok"):
        if obj not in rep["objects"]:
            rep["objects"].append(obj)
        # the data generator defines the names in "unresolved" (pool words, DAT_ globals)
        for u in r.get("und", []):
            if not u.startswith("func_"):
                rep["unresolved"][u] = rep["unresolved"].get(u, 0) + 1
    bad += not r.get("ok")
json.dump(rep, open(rp, "w"), indent=1)
sys.exit(1 if bad else 0)
