#!/usr/bin/env python3
"""Actor profile creators printed as `void` (BOOT_LOG 158).

Each actor profile has a creator `X *create(params) { X *p = new X(params); ...; return p; }`; the actor
manager (004C4884) registers the returned pointer. Ghidra printed 143 of them as `void func_X(...)`
when the ARM leaves r0 = the object at the end (e.g. TagItemEvent, EU 00604658: the last store
`str r1, [r0], #-1076` moves r0 from the +0x434 component back to the object). The port then returns
whatever %eax holds: usually the constructor's `this` (works by luck), but for TagItemEvent the
+0x434 area-event component, which the manager then ran as an actor every frame (its pre/post calc
cleared the current event flow: the forge entry event stalled with Link in State_Talk).

For every linked Ghidra creator (a `.long func_X` pool word followed by a profile-data word, as in
the profile registry) declared `void` with an allocation `V = (T)func_0010BAB4(size)`, this writes
native/compilefix/func_X.c: returns `void *`, remembers V right after the allocation and returns it
(NULL when the allocation failed, as the ARM). Functions with a native override are reported only.

  tools/void_creator_fix.py [--dry-run]
"""
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ALLOC = re.compile(r'^(\s*)(\w+) = \([^)]*\)func_0010BAB4\([^;]*\);\s*$')


def creators():
    s = open('build/data/gamedata.s').read().split('\n')
    out = set()
    for i, l in enumerate(s[:-1]):
        m = re.match(r'\s*\.long (func_[0-9A-F]{8})$', l)
        if m and re.match(r'\s*\.long 0x007[0-9A-F]{5}$', s[i + 1]) and s[i - 1].rstrip().endswith(':'):
            out.add(m.group(1))
    return out


def main():
    dry = '--dry-run' in sys.argv
    os.chdir(ROOT)
    native = {os.path.basename(f)[:-2] for d in ('compilefix', 'robust', 'gameplay', 'game', 'hot', 'framework',
                                                  'core', 'route') for f in glob.glob('native/%s/func_*.c' % d)}
    objs = open('build/objs.txt').read()
    done = 0
    for c in sorted(creators()):
        m = re.search(r'(/\S*/%s\.c)\.final\.o' % c, objs)
        if not m:
            continue
        p = m.group(1).replace('/obj/', '/')
        if 'ghidra_fallback' not in p or not os.path.exists(p):
            continue
        t = open(p, errors='replace').read()
        sig = re.search(r'^void (%s\([^)]*\))\s*\n\{' % c, t, re.M)
        if not sig:
            continue
        lines = t.split('\n')
        allocs = [i for i, l in enumerate(lines) if ALLOC.match(l)]
        if not allocs:
            continue
        if c in native:
            print('override exists, check by hand: %s' % c)
            continue
        i = allocs[0]
        ind, var = ALLOC.match(lines[i]).groups()
        lines[i] += '\n%salbw_ret = (void *)%s;   /* the ARM returns the new object in r0 */' % (ind, var)
        body = '\n'.join(lines)
        start = body.index(sig.group(0))
        head = body[:start]
        fn = body[start:]
        fn = fn.replace(sig.group(0), 'void *%s\n{\n  void *albw_ret = 0;' % sig.group(1), 1)
        fn = re.sub(r'\breturn;', 'return albw_ret;', fn)
        k = fn.rstrip().rfind('}')
        fn = fn[:k] + '  return albw_ret;\n}\n'
        hdr = ('/* compilefix: %s, the converted stage-2 text (%s): an actor profile creator printed as\n'
               ' * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */\n') % (c, p)
        print(c)
        if not dry:
            open('native/compilefix/%s.c' % c, 'w').write(hdr + head + fn)
        done += 1
    print('fixed %d creators' % done)


if __name__ == '__main__':
    main()
