#!/usr/bin/env python3
"""sigcheck.py: native/gameplay/tools/sigcheck.py applied to native/framework/func_*.c
(ABI check of every definition here against the prototypes the round-2 converted callers declare
in build/decomp/ghidra_fallback/ghidra_analyzed4).   python3 native/framework/tools/sigcheck.py [--all]"""
import glob, os, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
PORT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
sys.path.insert(0, os.path.join(PORT, "native", "gameplay", "tools"))
import sigcheck as s  # noqa: E402


def defs():
    out = {}
    for f in sorted(glob.glob(os.path.join(PORT, "native", "framework", "func_*.c"))):
        txt = re.sub(r"/\*.*?\*/", "", open(f).read(), flags=re.S)
        for m in s.DEF_RE.finditer(txt):
            out[m.group(2)] = (s.sig(m.group(1), m.group(3)), os.path.basename(f))
    return out


s.defs = defs
if __name__ == "__main__":
    s.main()
