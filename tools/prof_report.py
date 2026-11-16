#!/usr/bin/env python3
"""Resolve an ALBW_PROFILE sample file (native/runtime/prof.c) to functions.

usage: tools/prof_report.py <profile file> [binary (default build/albw)] [top N (default 40)]
Prints samples per function (self time) with the share of all samples and of in-executable ones.
"""
import bisect, subprocess, sys

prof = sys.argv[1]
binary = sys.argv[2] if len(sys.argv) > 2 else "build/albw"
top = int(sys.argv[3]) if len(sys.argv) > 3 else 40
syms = []
for line in subprocess.run(["nm", "-n", "-C", binary], capture_output=True, text=True).stdout.splitlines():
    parts = line.split(" ", 2)
    if len(parts) == 3 and parts[0] and parts[1] in "TtWw":
        syms.append((int(parts[0], 16), parts[2]))
addrs = [a for a, _ in syms]
hdr = ""
per = {}
outside = []
for line in open(prof):
    if line.startswith("#"):
        hdr = line.strip()
        continue
    if line.startswith("@ "):
        _, lib, sym, c = line.split()
        outside.append((int(c), lib.rsplit("/", 1)[-1], sym))
        continue
    a, c = line.split()
    a, c = int(a, 16), int(c)
    i = bisect.bisect_right(addrs, a) - 1
    name = syms[i][1] if i >= 0 else "?"
    per[name] = per.get(name, 0) + c
f = hdr.split()
total, intext = int(f[2]), int(f[4])
print(hdr)
print("%8s %6s %6s  %s" % ("samples", "%all", "%exe", "function"))
for name, c in sorted(per.items(), key=lambda x: -x[1])[:top]:
    print("%8d %5.1f%% %5.1f%%  %s" % (c, 100.0 * c / max(total, 1), 100.0 * c / max(intext, 1), name))
if outside:
    n = sum(c for c, _, _ in outside)
    libs = {}
    for c, lib, _ in outside:
        libs[lib] = libs.get(lib, 0) + c
    print("\noutside the executable (last %d samples), by library:" % n)
    for lib, c in sorted(libs.items(), key=lambda x: -x[1])[:12]:
        print("%8d %5.1f%%  %s" % (c, 100.0 * c / n, lib))
    print("by symbol:")
    for c, lib, sym in sorted(outside, reverse=True)[:top // 2]:
        print("%8d %5.1f%%  %s  %s" % (c, 100.0 * c / n, lib, sym))
