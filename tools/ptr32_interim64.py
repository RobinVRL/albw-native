#!/usr/bin/env python3
"""64-bit interim (until the next full build_decomp64 run): re-apply tools/ptr32.py RE_NEG_UNSIGNED to
build/decomp64's converted Ghidra sources of the given USA addresses in place and rebuild their
objects with the round-3 stage-1 settings (build_decomp.build_one). Then tools/link64.sh.

  python3 tools/ptr32_interim64.py ADDR [ADDR ...]   (BOOT_LOG64 stops 5-6)"""
import json, os, re, sys
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
sys.path.insert(0, ROOT + "/tools")
os.environ.update(ALBW_CONVERT_V4="1", ALBW_V4_STAGE="1", ALBW_ARCH="x86_64")
import build_decomp as bd, ptr32
bd.OUT, bd.TARGET, bd.ARCH64 = os.path.join(ROOT, "build", "decomp64"), "x86_64-linux-gnu", True
bd.RETURNS_THIS = set(json.load(open(ROOT + "/native/returns_this3.json")))
for o in json.load(open(bd.OUT + "/report.json"))["objects"]:
    m = re.search(r"/obj/(ghidra_fallback/.+/func_([0-9A-F]{8})\.c)\.final\.o$", o)
    if m and m.group(2) in sys.argv[1:]:
        src = os.path.join(bd.OUT, m.group(1))
        t = open(src).read(); n = ptr32.RE_NEG_UNSIGNED.sub(lambda k: k.group(1) + "(long long)", t)
        open(src, "w").write(n)
        print(m.group(2), "changed" if n != t else "unchanged", bd.build_one((m.group(1), [m.group(2)], None))["ok"])
