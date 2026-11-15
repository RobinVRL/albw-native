#!/usr/bin/env python3
"""64-bit interim (until the next full build_decomp64 run): apply the newer tools/ptr32.py rules
(RE_NEG_UNSIGNED: unsigned negation as a pointer offset; align1_arrays: game data arrays declared
aligned(1); truncate_i64_ptr_casts; RE_NEG_LONG_INDEX) in place to build/decomp64's sources (converted Ghidra and mirrored matched sources)
and rebuild only the objects whose source changed (build_decomp.build_one, round-3 stage-1
settings). Then tools/link64.sh. A full build_decomp64 run applies the rules itself to sources it
regenerates; this script then finds nothing to do.

  python3 tools/ptr32_interim64.py [ADDR ...]     (default: every source in decomp64/report.json)
BOOT_LOG64 stops 5, 6, 8, 9, 10."""
import json, os, re, sys
from concurrent.futures import ThreadPoolExecutor
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
sys.path.insert(0, ROOT + "/tools")
os.environ.update(ALBW_CONVERT_V4="1", ALBW_V4_STAGE="1", ALBW_ARCH="x86_64")
import build_decomp as bd, ptr32
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))  # noqa: E402
from albw_jobs import albw_jobs  # noqa: E402
bd.OUT, bd.TARGET, bd.ARCH64 = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu", True
bd.RETURNS_THIS = set(json.load(open(ROOT + "/native/returns_this3.json")))
want = set(a.upper() for a in sys.argv[1:])
# a matched source's addresses (export names func_<ADDR>) come from the decomp's table, not the
# file name (src/work7/ds1/t_d2.cpp = 00101D4C)
addrs_of = {}
for ad, e in json.load(open(os.path.join(ROOT, "..", "albw-decomp-ai", "functions.json"))).items():
    if e.get("path"): addrs_of.setdefault(e["path"], []).append(ad)


def rules(t, ghidra):
    t = ptr32.align1_arrays(t)
    if ghidra:
        t = ptr32.truncate_i64_ptr_casts(t)
        t = ptr32.RE_NEG_LONG_INDEX.sub(lambda m: "[-0x%x]" % int(m.group(1), 16), t)
        t = ptr32.RE_NEG_UNSIGNED.sub(lambda k: k.group(1) + "(long long)", t)
    return t


jobs = []
for o in json.load(open(bd.OUT + "/report.json"))["objects"]:
    m = re.search(r"/obj/(.+?)\.final\.o$", o)
    if not m or not os.path.exists(os.path.join(bd.OUT, m.group(1))):
        continue
    path = m.group(1)
    addrs = sorted(addrs_of.get(path, [])) or re.findall(r"([0-9A-F]{8})", os.path.basename(path))
    if want and not want & set(addrs):
        continue
    src = os.path.join(bd.OUT, path)
    t = open(src, encoding="utf-8", errors="replace").read()
    n = rules(t, path.startswith("ghidra_fallback/"))
    if n != t:
        open(src, "w", encoding="utf-8").write(n)
        jobs.append((path, addrs))
with ThreadPoolExecutor(albw_jobs()) as ex:
    res = list(ex.map(lambda j: bd.build_one((j[0], j[1], None)), jobs))
bad = [r for r in res if not r.get("ok")]
for r in bad:
    print("FAILED %s: %s" % (r["path"], r.get("error")))
print("ptr32_interim64: %d sources changed and rebuilt, %d failed" % (len(jobs) - len(bad), len(bad)))
for j in jobs:
    print("  " + j[0])
