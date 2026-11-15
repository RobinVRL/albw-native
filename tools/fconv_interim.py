#!/usr/bin/env python3
"""Interim FCONV recompile of selected decomp objects (until the round-3 stage-2 rebuild).

The current build/decomp is round 3 stage 1, without FCONV. Ghidra prints a COPY between a
float and an int-typed variable / memory word as a plain C assignment, which C turns into a
value conversion: `uVar4 = VectorUnsignedToFloat(i)` stores the integer i instead of the float
bits of (float)i, `param_1[3] = fparam_0` stores (int)x. clang reports every such site with
-Wfloat-conversion / -Wimplicit-int-float-conversion; stage 2 (tools/build_decomp.py, FCONV)
wraps each one in ALBW_AS_U32 / ALBW_AS_F32 (bit copies). Here the same converter code
(build_decomp.build_one with ALBW_FCONV=1, stage-1 settings otherwise) is applied in place to
the Ghidra-derived sources of the given address ranges that have such sites, and only their
objects are rebuilt. The full rebuild redoes all of this; this script then finds nothing to do.

  python3 tools/fconv_interim.py [LO-HI ...]      (hex USA ranges; default: the UI draw path)

Default ranges (BOOT_LOG stop 75: title screen): nw::lyt / nw::font drawers 003E0000-0042FFFF,
sead graphics 00490000-0049FFFF (FrameBufferCTR 00490304, PrimitiveRenderer 004979CC).
"""
import json
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
DEFAULT = ["003E0000-0042FFFF", "00490000-0049FFFF"]


def main():
    ranges = [tuple(int(x, 16) for x in r.split("-")) for r in (sys.argv[1:] or DEFAULT)]
    os.environ["ALBW_CONVERT_V4"] = "1"   # the build's own settings (stage 1: -DALBW_V4)
    os.environ["ALBW_V4_STAGE"] = "1"
    os.environ["ALBW_FCONV"] = "1"        # + the FCONV bit copies only
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import build_decomp as bd
    rt3 = os.path.join(ROOT, "native", "returns_this3.json")
    if os.path.exists(rt3):
        bd.RETURNS_THIS = set(json.load(open(rt3)))
    rep = json.load(open(os.path.join(bd.OUT, "report.json")))
    jobs = []
    for o in rep["objects"]:
        m = re.search(r"/obj/(ghidra_fallback/.+/func_([0-9A-F]{8})\.c)\.final\.o$", o)
        if not m or not any(lo <= int(m.group(2), 16) <= hi for lo, hi in ranges):
            continue
        jobs.append((m.group(1), [m.group(2)]))
    inc = ["-I", os.path.join(bd.OUT, "shared", "include"), "-include", bd.COMPAT, "-DALBW_V4"]

    def has_sites(path):
        src = os.path.join(bd.OUT, path)
        r = subprocess.run(["clang", "--target=" + bd.TARGET, "-fsyntax-only", "-Wno-everything",
                            "-Wfloat-conversion", "-Wimplicit-int-float-conversion", "-std=gnu11",
                            "-I", os.path.dirname(src)] + inc + [src], capture_output=True, text=True)
        return "warning:" in r.stderr

    with ThreadPoolExecutor(os.cpu_count()) as ex:
        todo = [j for j, h in zip(jobs, ex.map(lambda j: has_sites(j[0]), jobs)) if h]
    for path, _ in todo:
        os.utime(os.path.join(bd.OUT, path))   # build_one recompiles only newer sources
    with ThreadPoolExecutor(os.cpu_count()) as ex:
        res = list(ex.map(lambda j: bd.build_one((j[0], j[1], None)), todo))
    bad = [r for r in res if not r.get("ok")]
    for r in bad:
        print("FAILED %s: %s" % (r["path"], r.get("error")))
    print("fconv_interim: %d sources in range, %d with float<->int copies rebuilt, %d failed"
          % (len(jobs), len(todo) - len(bad), len(bad)))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
