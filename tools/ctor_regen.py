#!/usr/bin/env python3
"""Regenerate the decompiled static constructors in native/game (tools/decomp_initializer.py).

  ../albw-decomp-ai/.venv/bin/python tools/ctor_regen.py [--backup DIR] [--dry-run]

Same flow that produced native/game (every static constructor of gen_data.init_tables that
decomp_initializer can prove is turned into native/game/func_<USA>.c), but safe to rerun:
  - a file that exists and was NOT written by decomp_initializer (hand-written boot-loop work)
    is never touched;
  - a generated file is rewritten only if the new output differs; the old one is copied to
    --backup first;
  - nothing is deleted.
decomp_initializer reads callee signatures from the Ghidra dump: set ALBW_GHIDRA_DIR (and
ALBW_GHIDRA_EXTRA_DIR) to use another dump (tools/systemic_rebuild.sh does).
"""
import argparse
import os
import shutil
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--backup", default=os.path.join(ROOT, "build", "systemic", "backup", "native_game"))
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    argv, sys.argv = sys.argv, ["decomp_initializer"]
    import decomp_initializer as D
    import gen_data as G
    sys.argv = argv
    code, m = D.load()
    rd = lambda x: struct.unpack_from("<I", code, x - G.TEXT)[0]
    fn_of = {int(v["eu"], 16): "func_" + k for k, v in m.items()}
    ctors, _ = G.init_tables(code, rd, fn_of)
    stats = dict(ctors=len(ctors), refused=0, hand_written=0, unchanged=0, written=0, new=0)
    for c in ctors:
        usa = c[5:]
        eu = int(m[usa]["eu"], 16)
        try:
            mem, tail = D.trace(code, eu)
            text = D.emit(usa, eu, mem, fn_of, tail, code)
        except Exception:
            stats["refused"] += 1
            continue
        path = os.path.join(ROOT, "native", "game", "func_%s.c" % usa)
        if os.path.exists(path):
            old = open(path, errors="replace").read()
            if "decomp_initializer.py" not in old[:400]:
                stats["hand_written"] += 1
                continue
            if old == text:
                stats["unchanged"] += 1
                continue
            if not a.dry_run:
                os.makedirs(a.backup, exist_ok=True)
                shutil.copy2(path, os.path.join(a.backup, os.path.basename(path)))
            stats["written"] += 1
        else:
            stats["new"] += 1
        if not a.dry_run:
            open(path, "w").write(text)
    print("ctor_regen: %(ctors)d constructors: %(new)d new, %(written)d rewritten, %(unchanged)d unchanged, "
          "%(hand_written)d hand-written kept, %(refused)d not provable" % stats)


if __name__ == "__main__":
    main()
