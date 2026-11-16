#!/usr/bin/env python3
"""Where is func_<ADDR> defined? Looks up build/index/funcs.tsv (tools/make_index.py).

  python3 tools/where.py 0041E368 [more addrs...]   # USA addresses, with or without func_ / 0x
"""
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TSV = os.path.join(ROOT, "build", "index", "funcs.tsv")


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 2
    if not os.path.exists(TSV):
        print("build/index/funcs.tsv missing: run python3 tools/make_index.py", file=sys.stderr)
        return 1
    want = {a.upper().replace("FUNC_", "").replace("0X", "").zfill(8) for a in argv[1:]}
    found = set()
    with open(TSV) as f:
        for line in f:
            a, *files = line.rstrip("\n").split("\t")
            if a in want:
                found.add(a)
                print(a)
                for p in files:
                    print("   ", p)
    for a in sorted(want - found):
        print(a, "(no definition file: only the weak game export, or a stub)")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
