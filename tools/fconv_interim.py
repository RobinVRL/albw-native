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
Also applied: the stage-2 rewrite of inlined pointer-to-member calls that lost their `this`
(build_decomp.pmf_this_rewrite, ALBW_PMF_THIS) and the calls to callees with stack parameters
whose Ghidra prototype is short (build_decomp.stack_arg_rewrite, STACK_ARG_CALLS).

  python3 tools/fconv_interim.py [LO-HI ...]      (hex USA ranges; default: the whole game)
  python3 tools/fconv_interim.py --arch x86_64 ...  the 64-bit build (build/decomp64, tools/link64.sh;
                                                  stamp build/fconv_interim64.stamp)
  python3 tools/fconv_interim.py --grep REGEX     also rebuild every source matching REGEX
                                                  (after a header fix, e.g. CONCAT44)

The whole game (~100 s, 328 of 18457 sources): BOOT_LOG stops 75-76 found the class in the
lyt/font drawers, sead FrameBufferCTR 00490304 and the layout animation players; writes
build/fconv_interim.stamp (tools/link.sh runs this once per decomp build).
"""
import json
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
DEFAULT = ["00100000-006FFFFF"]


def main():
    args = sys.argv[1:]
    grep = None
    arch64 = False
    while args[:1] in (["--grep"], ["--arch"]):
        if args[0] == "--grep":
            grep = re.compile(args[1])
        else:
            arch64 = args[1] == "x86_64"
        args = args[2:]
    ranges = [tuple(int(x, 16) for x in r.split("-")) for r in (args or DEFAULT)]
    os.environ["ALBW_CONVERT_V4"] = "1"   # the build's own settings: -DALBW_V4, and since the
    # round-3 stage-2 rebuild stage 2 (-ftrivial-auto-var-init=zero, compile-fix retries); a
    # stage-1 recompile here would drop those from the objects it rebuilds (19 did, boot stop 82)
    os.environ.setdefault("ALBW_V4_STAGE", "2")
    os.environ["ALBW_FCONV"] = "1"        # + the FCONV bit copies
    os.environ["ALBW_PMF_THIS"] = "1"     # + `this` of inlined pointer-to-member calls
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import build_decomp as bd
    if arch64:  # as build_decomp.main() --arch x86_64
        bd.OUT, bd.TARGET, bd.ARCH64 = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu", True
        os.environ["ALBW_ARCH"] = "x86_64"
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
    if arch64:
        inc += ["-fms-extensions"]  # __ptr32 (ALBW_GP)

    def has_sites(path):
        src = os.path.join(bd.OUT, path)
        r = subprocess.run(["clang", "--target=" + bd.TARGET, "-fsyntax-only", "-Wno-everything",
                            "-Wfloat-conversion", "-Wimplicit-int-float-conversion", "-std=gnu11",
                            "-I", os.path.dirname(src)] + inc + [src], capture_output=True, text=True)
        text = open(src).read()
        return ("warning:" in r.stderr or bool(grep and grep.search(text))
                or bd.stack_arg_rewrite(bd.pmf_this_rewrite(text)) != text
                or bd.RE_GARBLED_RETURN_ARRAY.search(text) is not None
                or bd.float_ret_rewrite(text) != text
                or bd.singleton_dtor_rewrite(text) != text)

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
    if not bad and not args:
        open(os.path.join(ROOT, "build", "fconv_interim64.stamp" if arch64 else "fconv_interim.stamp"), "w").write("%d\n" % (len(todo)))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
