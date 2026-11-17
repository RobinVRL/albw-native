#!/usr/bin/env python3
"""Linker aliases for native/names.txt (descriptive names of game functions).

usage: tools/gen_names.py <names.txt> <defined-symbols file>  -> prints -Wl,--defsym=NAME=func_X args
Only functions present in the link are aliased (a name for a function that is not linked would fail
the link). Names must be unique C identifiers and must not clash with defined symbols.
"""
import re
import sys

names, defined_path = sys.argv[1], sys.argv[2]
defined = set(open(defined_path).read().split())
seen = set()
out = []
for ln, line in enumerate(open(names), 1):
    line = line.split("#", 1)[0].strip()
    if not line:
        continue
    parts = line.split()
    if len(parts) < 2:
        continue
    fn, name = parts[0], parts[1]
    if not re.fullmatch(r"func_[0-9A-F]{8}", fn) or not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", name):
        sys.stderr.write("names.txt:%d: bad entry\n" % ln)
        continue
    if name in seen or name in defined:
        sys.stderr.write("names.txt:%d: %s already defined\n" % (ln, name))
        continue
    if fn not in defined:
        continue
    seen.add(name)
    out.append("-Wl,--defsym=%s=%s" % (name, fn))
print(" ".join(out))
