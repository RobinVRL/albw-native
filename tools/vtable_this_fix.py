#!/usr/bin/env python3
"""Lost `this` in method calls (BOOT_LOG 147). Two shapes:
 (a) on a stack object right after its vtable is stored:
        local_X = iVarN;
        (**(code **)(iVarN + K))();            ARM: r0 = &local_X (the object starts with its vtable)
 (b) virtual slot 0 of an object loaded from memory:
        (**(code **)**(T **)(EXPR))();          ARM: ldr r0,[..]; ldr r1,[r0]; ldr r1,[r1]; blx r1
                                                 -> r0 = *(T **)(EXPR) Reports such calls in the linked sources
(ghidra_fallback and native/compilefix); with --fix, writes / edits native/compilefix copies.
  tools/vtable_this_fix.py [--fix]
"""
import glob, json, os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PAT = re.compile(r'^(\s*)((?:local_|iStack_|uStack_)\w+) = (\w+);\s*\n((?:(?!.*\(\*\*\().*\n){0,3}?)(\s*)'
                 r'\(\*\*\(code \*\*\)\(\3 \+ (0x[0-9a-f]+|\d+)\)\)\(\);', re.M)

VCALL = re.compile(r'\(\*\*\(code \*\*\)\*\*\((\w+ \*\*)\)\(([^;]+?)\)\)\(\);')


def fix_vcalls(s):
    out, n = [], 0
    for l in s.split('\n'):
        m = VCALL.search(l)
        if m and 'vtable_this_fix' not in l:
            l = l.replace(m.group(0), '(**(code **)**(%s)(%s))(*(%s)(%s));   /* this restored (vtable_this_fix) */'
                          % (m.group(1), m.group(2), m.group(1), m.group(2)))
            n += 1
        out.append(l)
    return '\n'.join(out), n


def main():
    fix = '--fix' in sys.argv
    os.chdir(ROOT)
    r = json.load(open('build/decomp/report.json'))
    native = {}
    for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'route', 'core', 'framework'):
        for f in glob.glob('native/%s/func_*.c' % d):
            native[os.path.basename(f)] = f
    import subprocess
    defined = set(subprocess.run("grep -rhoE '^[a-zA-Z_][^;=()]*\\bfunc_[0-9A-F]{8}\\(' native | grep -oE 'func_[0-9A-F]{8}'",
                                 shell=True, capture_output=True, text=True).stdout.split())
    n = 0
    for o in r['objects']:
        p = os.path.join('build/decomp', o.split('/obj/')[1].replace('.final.o', ''))
        if not p.endswith('.c') or 'ghidra_fallback' not in p:
            continue
        base = os.path.basename(p)
        src = native.get(base, p)
        if not os.path.exists(src):
            continue
        s = open(src, errors='replace').read()
        hits = list(PAT.finditer(s))
        _, nv = fix_vcalls(s)
        if not hits and not nv:
            continue
        n += len(hits) + nv
        print('%s: %s%s' % (src, ', '.join('%s (+%s)' % (m.group(2), m.group(6)) for m in hits),
                             ' %d virtual call(s)' % nv if nv else ''))
        if fix:
            name = base[:-2]
            if not re.search(r'^\S.*\b%s\(' % name, s, re.M):
                print('  defines another function (a Ghidra twin), skipped'); continue
            if src == p and name in defined:
                print('  already defined natively elsewhere, skipped'); continue
            if src != p and not src.startswith('native/compilefix'):
                print('  override outside compilefix, fix by hand'); continue
            s2 = PAT.sub(lambda m: '%s%s = %s;\n%s%s(**(code **)(%s + %s))(&%s);   /* this restored (vtable_this_fix) */'
                         % (m.group(1), m.group(2), m.group(3), m.group(4), m.group(5), m.group(3), m.group(6),
                            m.group(2)), s)
            s2, _ = fix_vcalls(s2)
            if src == p:
                s2 = ('/* compilefix: %s, the converted stage-2 text (%s) with `this` restored in method calls (on a\n'
                      ' * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */\n'
                      % (base[:-2], p)) + s2
            open(os.path.join('native/compilefix', base), 'w').write(s2)
    print('%d call(s)' % n)

if __name__ == '__main__':
    main()
