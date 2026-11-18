#!/usr/bin/env python3
"""Runtime type checks that lost their type argument (BOOT_LOG 159).

sead casts an object with its virtual type check (`checkDerivedRuntimeTypeInfo`, vtable +0 / +4 /
+8): r0 = the object, r1 = the address of the class's static type descriptor, initialised once
under a guard:
    if (((*DAT_g & 1) == 0) && (func_00100174(DAT_g) != 0)) { *DAT_t = ...; }
    if ((p == 0) || ((**(code **)*p)(p, DAT_t) == 0)) p = 0;
The ARM loads r1 = DAT_t before the null test's branch (EU 145BC8 `ldr r1, [pc, ...]`); Ghidra
then prints the call with one argument, and the port's check compares against garbage (the cast
fails, or worse succeeds on the wrong class). For every linked Ghidra text without a native
override, a one-argument indirect call within 14 lines after such a guard gets the guard's
assigned descriptor as its second argument; written to native/compilefix/func_X.c.

  tools/rtti_arg_fix.py [--dry-run]
"""
import glob
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CALL = re.compile(r'\((\*\(code \*\)\w+|\*\*\(code \*\*\)\(?\*?(\w+)(?: \+ (?:0x)?[0-9a-f]+)?\)?)\)\((\w+)\)')
ASSIGN = re.compile(r'\*(DAT_[0-9a-f]{8}) = ')


def main():
    dry = '--dry-run' in sys.argv
    os.chdir(ROOT)
    native = {os.path.basename(f)[:-2] for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'framework',
                                                  'core', 'route') for f in glob.glob('native/%s/func_*.c' % d)}
    nfiles = nsites = 0
    for o in json.load(open('build/decomp/report.json'))['objects']:
        rel = o.split('/build/decomp/obj/', 1)[-1][:-len('.final.o')]
        if not rel.startswith('ghidra_fallback/'):
            continue
        fn = os.path.basename(rel)[:-2]
        lines = open('build/decomp/' + rel, errors='replace').read().split('\n')
        fixes = []
        for i, l in enumerate(lines):
            if 'func_00100174' not in l:
                continue
            for j in range(i + 1, min(i + 14, len(lines))):
                m = CALL.search(lines[j])
                if m:
                    desc = None
                    for k in range(i, j):
                        a = ASSIGN.search(lines[k])
                        if a:
                            desc = a.group(1)
                    if desc:
                        fixes.append((j, m, desc))
                    break
                if re.search(r'\(code \*\*?\)[^;]*\)\(\w+,', lines[j]):
                    break      # the check already has its argument
        if not fixes:
            continue
        if fn in native:
            print('override exists, check by hand: %s (lines %s)' % (fn, [f[0] + 1 for f in fixes]))
            continue
        for j, m, desc in fixes:
            call = m.group(0)
            lines[j] = lines[j].replace(call, call[:-1] + ',' + desc + ')', 1) + '   /* type descriptor restored (rtti_arg_fix) */'
        hdr = ('/* compilefix: %s, the converted stage-2 text (build/decomp/%s): %d runtime type check(s) given\n'
               ' * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */\n') % (fn, rel, len(fixes))
        print('%s: %d site(s)' % (fn, len(fixes)))
        nfiles += 1
        nsites += len(fixes)
        if not dry:
            open('native/compilefix/%s.c' % fn, 'w').write(hdr + '\n'.join(lines))
    print('fixed %d sites in %d files' % (nsites, nfiles))


if __name__ == '__main__':
    main()
