#!/usr/bin/env python3
"""Dropped register arguments of indirect calls, second signal (BOOT_LOG 158b).

Ghidra keeps naming r1..r3 `param_2..param_4` inside a function; when it assigns `param_K = ...`
shortly before an indirect call that it prints with fewer than K arguments, the assignment is
almost always the ARM setting up rK-1 for that call (0028E480: param_3 / param_4 set in every
branch, call printed `(*pcVar14)(piVar12,pfVar6)`). tools/indirect_args_scan.py pairs calls by
vtable offset and misses calls through a local function pointer; this scan does not need the ARM.
Lists linked Ghidra texts without a native override:  tools/param_reg_scan.py [out]
"""
import glob, json, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
os.chdir(ROOT)
native = {os.path.basename(f)[:-2] for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'framework', 'core',
                                              'route') for f in glob.glob('native/%s/func_*.c' % d)}
CALL = re.compile(r'\((?:\*\w+|\*+\(code \*+\)[^;]*?)\)\(([^;]*)\);')
out = open(sys.argv[1], 'w') if len(sys.argv) > 1 else sys.stdout
n = 0
for o in json.load(open('build/decomp/report.json'))['objects']:
    rel = o.split('/build/decomp/obj/', 1)[-1][:-len('.final.o')]
    if not rel.startswith('ghidra_fallback/'):
        continue
    fn = os.path.basename(rel)[:-2]
    if fn in native:
        continue
    lines = open('build/decomp/' + rel, errors='replace').read().split('\n')
    for i, l in enumerate(lines):
        m = CALL.search(l)
        if not m or 'code' not in l and 'pcVar' not in l:
            continue
        args = m.group(1).strip()
        depth, na = 0, (1 if args else 0)
        for ch in args:
            depth += ch == '('
            depth -= ch == ')'
            na += ch == ',' and depth == 0
        if na >= 4:
            continue
        window = lines[max(0, i - 25):i]
        set_ = sorted({int(k) for w in window for k in re.findall(r'^\s*param_([2-4]) = ', w)})
        miss = [k for k in set_ if k > na and 'param_%d' % k not in args]
        if miss:
            n += 1
            out.write('%s line %d: passes %d, param_%s assigned before: %s\n'
                      % (fn, i + 1, na, '/'.join(map(str, miss)), l.strip()[:100]))
sys.stderr.write('%d candidate calls\n' % n)
