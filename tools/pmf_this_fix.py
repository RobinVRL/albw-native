#!/usr/bin/env python3
"""Lost `this` in member-function-pointer calls (class of BOOT_LOG 136 / 140).

Ghidra prints a call through an ARM C++ pointer-to-member {fn, adj} as `(*pcVarN)();` when it does not
see r0 being set: the callee then runs on a garbage object (pots, the Items menu). The ABI is fixed:
    this = BASE + (adj >> 1);  fn = adj & 1 ? *(code **)(fn + *(int *)this) : fn;  fn(this, ...)
For every linked source with such a call this tool finds BASE from the code right before it (either
`piVarM = (int *)(BASE + ((int)uVarK >> 1));` or the inline virtual lookup
`*(int *)(BASE + ((int)uVarK >> 1))`) and writes native/compilefix/func_<ADDR>.c with
`(*pcVarN)(<this>)`. Further arguments (r1..) are not restored (the ARM must be read for those).

  tools/pmf_this_fix.py [--dry-run]
Files that already have a native override are reported, not touched.
"""
import glob
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CALL = re.compile(r'\(\*(pcVar\d+|UNRECOVERED_JUMPTABLE)\)\(\);')


def _find_this(text):
    """the last `BASE + ((int)ADJ >> 1)` in text (BASE: walk back to its opening parenthesis)"""
    k = text.rfind('>> 1)')
    while k >= 0:
        a = text.rfind(' + ((int)', 0, k)
        if a < 0:
            a = text.rfind(' + (', 0, k)
            if a < 0:
                return None
        adj = text[a + 3:k + 5]            # "((int)X >> 1)" or "(X >> 1)"
        depth, b = 0, a - 1
        while b >= 0:
            c = text[b]
            if c == ')':
                depth += 1
            elif c == '(':
                if depth == 0:
                    break
                depth -= 1
            b -= 1
        base = text[b + 1:a].strip()
        if base.startswith('(int)'):
            base = base[5:]
        if base:
            return '((int *)((int)(%s) + %s))' % (base, adj)
        k = text.rfind('>> 1)', 0, k)
    return None


def this_expr(lines, i, fn):
    """the `this` expression for the argument-less call at line i (or None)"""
    for j in range(i - 1, max(-1, i - 16), -1):
        l = lines[j]
        m = re.search(r'(piVar\d+|iVar\d+|puVar\d+) = \((?:int|undefined4) \*\)\((.+) \+ \(\(int\)(\w+) >> 1\)\);', l)
        if m:
            return '((int *)%s)' % m.group(1)
        if '>> 1' in l:
            text = ' '.join(x.strip() for x in lines[max(0, j - 2):j + 1])
            t = _find_this(text)
            if t:
                return t
    return None


def main():
    dry = '--dry-run' in sys.argv
    os.chdir(ROOT)
    r = json.load(open('build/decomp/report.json'))
    native = {os.path.basename(f) for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'route',
                                             'core', 'framework') for f in glob.glob('native/%s/func_*.c' % d)}
    done = skipped = 0
    for o in r['objects']:
        rel = o.split('/obj/')[1].replace('.final.o', '')
        p = os.path.join('build/decomp', rel)
        if not p.endswith('.c') or 'ghidra_fallback' not in p or not os.path.exists(p):
            continue
        base = os.path.basename(p)
        lines = open(p, errors='replace').read().split('\n')
        fixes = []
        for i, l in enumerate(lines):
            m = CALL.search(l)
            if not m or not any('>> 1' in x for x in lines[max(0, i - 12):i]):
                continue
            t = this_expr(lines, i, m.group(1))
            if t:
                fixes.append((i, m.group(1), t))
        if not fixes:
            continue
        if base in native:
            print('override exists, not touched: %s (lines %s)' % (base, [f[0] + 1 for f in fixes]))
            skipped += 1
            continue
        for i, fn, t in fixes:
            lines[i] = lines[i].replace('(*%s)();' % fn, '(*(int (*)(int *))%s)(%s);   /* this restored (pmf_this_fix) */' % (fn, t))
        hdr = ('/* compilefix: %s, the converted stage-2 text (%s) with `this` restored in %d\n'
               ' * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).\n'
               ' * Further arguments of those calls are as Ghidra printed them. */\n') % (base[:-2], p, len(fixes))
        print('%s: %d call(s)' % (base, len(fixes)))
        if not dry:
            open(os.path.join('native/compilefix', base), 'w').write(hdr + '\n'.join(lines))
        done += 1
    print('fixed %d files, %d with native overrides' % (done, skipped))


if __name__ == '__main__':
    main()
