#!/usr/bin/env python3
"""List stage-2 Ghidra texts that pass `&stack0x...` (a caller-frame slot) to a call without ever
assigning it. Either an out-parameter (fine) or a lost stack store (bug, e.g. 0030C144 command 0x11
in BOOT_LOG 111: the ARM filled the Vec3 at sp with ldm/stm, Ghidra dropped it). Check each hit
against the EU code (input argument -> needs a compilefix like native/compilefix/func_0030C144.c).

  python3 tools/stack0x_scan.py [ghidra_analyzed root]   -> "<USA> <var> <uses>" lines
"""
import glob, os, re, sys
root = sys.argv[1] if len(sys.argv) > 1 else 'build/decomp/ghidra_fallback/ghidra_analyzed5_v4'
for p in sorted(glob.glob(root + '/*/func_*.c')):
    s = open(p, errors='replace').read()
    for n in sorted(set(re.findall(r'&(stack0x[0-9a-f]+)', s))):
        if re.search(r'\b' + n + r'\s*=[^=]', s):
            continue
        print(os.path.basename(p)[5:13], n, len(re.findall('&' + n, s)))
